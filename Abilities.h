#pragma once
#include "pch.h"

class Abilities
{
	static void GiveAbility(AFortPlayerPawn *Pawn, UObject *Ability)
	{
		if (!Pawn || !Pawn->PlayerState || !Ability)
			return;
		auto ASC = Pawn->AbilitySystemComponent;

		if (!ASC)
			return;

		FGameplayAbilitySpec Spec{};
		((void (*)(FGameplayAbilitySpec *, UGameplayAbility *, int, int, UObject *))ConstructAbilitySpec)(&Spec, (UGameplayAbility *)Ability, 1, -1, nullptr);
		((FGameplayAbilitySpecHandle * (__fastcall *)(UAbilitySystemComponent *, FGameplayAbilitySpecHandle *, FGameplayAbilitySpec)) InternalGiveAbility)(ASC, &Spec.Handle, Spec);
	}

	static void GiveAbility(AFortPlayerStateAthena *PS, UObject *Ability)
	{
		if (!PS || !Ability)
			return;
		auto ASC = PS->AbilitySystemComponent;
		if (!ASC)
			return;

		FGameplayAbilitySpec Spec{};
		((void (*)(FGameplayAbilitySpec *, UGameplayAbility *, int, int, UObject *))ConstructAbilitySpec)(&Spec, (UGameplayAbility *)Ability, 1, -1, nullptr);
		((FGameplayAbilitySpecHandle * (__fastcall *)(UAbilitySystemComponent *, FGameplayAbilitySpecHandle *, FGameplayAbilitySpec)) InternalGiveAbility)(ASC, &Spec.Handle, Spec);
	}

public:
	static void GiveAbilitySet(AFortPlayerPawn *Pawn, UFortAbilitySet *Set)
	{
		if (Set)
		{
			for (auto &GA : Set->GameplayAbilities)
				GiveAbility(Pawn, GA->DefaultObject);
			for (auto &GE : Set->PassiveGameplayEffects)
				Pawn->AbilitySystemComponent->BP_ApplyGameplayEffectToSelf(GE.GameplayEffect.Get(), GE.Level, Pawn->AbilitySystemComponent->MakeEffectContext());
		}
	}

	static void GiveAbilitySet(AFortPlayerStateAthena *PS, UFortAbilitySet *Set)
	{
		if (Set)
			for (auto &GA : Set->GameplayAbilities)
				GiveAbility(PS, GA->DefaultObject);
	}

private:
	static void InternalServerTryActivateAbilityHook(UAbilitySystemComponent *ASC, FGameplayAbilitySpecHandle Handle, bool InputPressed, FPredictionKey &PredictionKey, FGameplayEventData *TriggerEventData)
	{
		auto Spec = ASC->ActivatableAbilities.Items.Search([Handle](FGameplayAbilitySpec &item)
														   { return item.Handle.Handle == Handle.Handle; });
		if (!Spec)
			return ASC->ClientActivateAbilityFailed(Handle, PredictionKey.Current);
		Spec->InputPressed = true;

		UGameplayAbility *AbilityOut = nullptr;
		if (!((bool (*)(UAbilitySystemComponent *AbilitySystemComp, FGameplayAbilitySpecHandle, FPredictionKey, UGameplayAbility **, void *, const FGameplayEventData *))InternalTryActivateAbility)(ASC, Handle, PredictionKey, &AbilityOut, nullptr, TriggerEventData))
		{
			ASC->ClientActivateAbilityFailed(Handle, PredictionKey.Current);
			Spec->InputPressed = false;
		}
		ASC->ActivatableAbilities.MarkItemDirty(*Spec);
	}

public:
	static void HookFunctions()
	{
		Utils::HookEvery<UAbilitySystemComponent>(InternalServerTryActivateAbilityVft, InternalServerTryActivateAbilityHook);
	}
};