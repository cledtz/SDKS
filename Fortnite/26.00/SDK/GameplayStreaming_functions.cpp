#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GameplayStreaming.BaseGameplayStreamingHandler
// (None)

class UClass* UBaseGameplayStreamingHandler::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseGameplayStreamingHandler");

	return Clss;
}


// BaseGameplayStreamingHandler GameplayStreaming.Default__BaseGameplayStreamingHandler
// (Public, ClassDefaultObject, ArchetypeObject)

class UBaseGameplayStreamingHandler* UBaseGameplayStreamingHandler::GetDefaultObj()
{
	static class UBaseGameplayStreamingHandler* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseGameplayStreamingHandler*>(UBaseGameplayStreamingHandler::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayStreaming.GFNGameplayStreamingHandler
// (None)

class UClass* UGFNGameplayStreamingHandler::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GFNGameplayStreamingHandler");

	return Clss;
}


// GFNGameplayStreamingHandler GameplayStreaming.Default__GFNGameplayStreamingHandler
// (Public, ClassDefaultObject, ArchetypeObject)

class UGFNGameplayStreamingHandler* UGFNGameplayStreamingHandler::GetDefaultObj()
{
	static class UGFNGameplayStreamingHandler* Default = nullptr;

	if (!Default)
		Default = static_cast<UGFNGameplayStreamingHandler*>(UGFNGameplayStreamingHandler::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayStreaming.LunaGameplayStreamingHandler
// (None)

class UClass* ULunaGameplayStreamingHandler::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LunaGameplayStreamingHandler");

	return Clss;
}


// LunaGameplayStreamingHandler GameplayStreaming.Default__LunaGameplayStreamingHandler
// (Public, ClassDefaultObject, ArchetypeObject)

class ULunaGameplayStreamingHandler* ULunaGameplayStreamingHandler::GetDefaultObj()
{
	static class ULunaGameplayStreamingHandler* Default = nullptr;

	if (!Default)
		Default = static_cast<ULunaGameplayStreamingHandler*>(ULunaGameplayStreamingHandler::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayStreaming.GameplayStreamingClassLoader
// (None)

class UClass* UGameplayStreamingClassLoader::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayStreamingClassLoader");

	return Clss;
}


// GameplayStreamingClassLoader GameplayStreaming.Default__GameplayStreamingClassLoader
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayStreamingClassLoader* UGameplayStreamingClassLoader::GetDefaultObj()
{
	static class UGameplayStreamingClassLoader* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayStreamingClassLoader*>(UGameplayStreamingClassLoader::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayStreaming.GameplayStreamingService
// (None)

class UClass* UGameplayStreamingService::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayStreamingService");

	return Clss;
}


// GameplayStreamingService GameplayStreaming.Default__GameplayStreamingService
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayStreamingService* UGameplayStreamingService::GetDefaultObj()
{
	static class UGameplayStreamingService* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayStreamingService*>(UGameplayStreamingService::StaticClass()->DefaultObject);

	return Default;
}

}


