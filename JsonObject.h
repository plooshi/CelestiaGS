/*

#pragma once

#include "pch.h"

enum class EJson
{
	None,
	Null,
	String,
	Number,
	Boolean,
	Array,
	Object
};

class FJsonValue
{
public:
	// Returns true if this value is a 'null'
	bool IsNull() const { return Type == EJson::Null || Type == EJson::None; }

	EJson Type;

protected:

	FJsonValue() : Type(EJson::None) {}
	virtual ~FJsonValue() {}

	virtual FString GetType() const = 0;
};

template <typename T> inline auto Forward(T t) { return std::forward<T>(t); }
template <typename T> inline auto MoveTemp(T&& t) { return std::move<T>(t); }
template <typename T> inline void Swap(T& x, T& y) { return std::swap(x, y); }

template <typename T>
FORCEINLINE T CopyTemp(T& Val)
{
	return const_cast<const T&>(Val);
}

template <typename T>
FORCEINLINE T CopyTemp(const T& Val)
{
	return Val;
}

class FJsonObject
{
protected:
	TMap<FString, TSharedPtr<FJsonValue>> Values;

public:
	void SetStringField(FString&& FieldName, FString&& StringValue) const
	{
		this->Values.Add(MoveTemp(FieldName), MakeShared<FJsonValueString>(MoveTemp(StringValue)));
	}

	void SetStringField(FString&& FieldName, const FString& StringValue)
	{
		SetStringField(MoveTemp(FieldName), CopyTemp(StringValue));
	}

	void SetStringField(const FString& FieldName, FString&& StringValue)
	{
		SetStringField(CopyTemp(FieldName), MoveTemp(StringValue));
	}

	void SetStringField(const FString& FieldName, const FString& StringValue)
	{
		SetStringField(CopyTemp(FieldName), CopyTemp(StringValue));
	}
};

static void HandleRequest()
{
	FString ResponseString(L"Testing");
	TSharedPtr<FJsonObject> JsonResponse = MakeShareable(new FJsonObject());
	JsonResponse->SetStringField(L"message", ResponseString);

	FString ResponseBody;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&ResponseBody);
	FJsonSerializer::Serialize(JsonResponse.ToSharedRef(), Writer);

	FHttpServerResponse Response;
	Response.Headers.Add("Content-Type", "application/json");
	Response.Body = TArray<uint8>((const uint8*)TCHAR_TO_ANSI(*ResponseBody), ResponseBody.Len());
	OnComplete(MakeShareable(new FHttpServerResponse(Response)));
}

*/