#pragma once
#include "pch.h"

class FCurlHttpRequest
{
public:
	static inline void** VTable = (void **) (ImageBase + 0x711f8a8);

	static FCurlHttpRequest *Construct()
	{
		auto Req = FMemory::Malloc<FCurlHttpRequest>(0x458);
		((void (*)(FCurlHttpRequest *))(ImageBase + 0xa417c19))(Req);
		return Req;
	}

	void SetURL(const FString& InURL)
	{
		static void (*SetURL)(FCurlHttpRequest * CurlHttpRequest, const FString & InURL) = decltype(SetURL)(ImageBase + 0x4042160);
		return SetURL(this, InURL);
	}

	void SetVerb(const FString& InVerb)
	{
		static void (*SetVerb)(FCurlHttpRequest * CurlHttpRequest, const FString & InVerb) = decltype(SetVerb)(ImageBase + 0x40422A0);
		return SetVerb(this, InVerb);
	}

	void SetHeader(const FString& HeaderName, const FString& HeaderValue)
	{
		static void (*SetHeader)(FCurlHttpRequest * CurlHttpRequest, const FString & HeaderName, const FString & HeaderValue) = decltype(SetHeader)(ImageBase + 0x40420F0);
		return SetHeader(this, HeaderName, HeaderValue);
	}

	void SetContentAsString(const FString& ContentString)
	{
		static void (*SetContentAsString)(FCurlHttpRequest * CurlHttpRequest, const FString & ContentString) = decltype(SetContentAsString)(ImageBase + 0x4041BF0);
		SetContentAsString(this, ContentString);
	}

	bool ProcessRequest()
	{
		static bool (*ProcessRequest)(FCurlHttpRequest * CurlHttpRequest) = decltype(ProcessRequest)(ImageBase + 0x403FA80);
		ProcessRequest(this);
	}
};