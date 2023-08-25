#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GameplayStreamingFN.FortLocalPlayerAccountHelper
// (None)

class UClass* UFortLocalPlayerAccountHelper::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortLocalPlayerAccountHelper");

	return Clss;
}


// FortLocalPlayerAccountHelper GameplayStreamingFN.Default__FortLocalPlayerAccountHelper
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortLocalPlayerAccountHelper* UFortLocalPlayerAccountHelper::GetDefaultObj()
{
	static class UFortLocalPlayerAccountHelper* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortLocalPlayerAccountHelper*>(UFortLocalPlayerAccountHelper::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayStreamingFN.FortGFNGameplayStreamingHandler
// (None)

class UClass* UFortGFNGameplayStreamingHandler::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGFNGameplayStreamingHandler");

	return Clss;
}


// FortGFNGameplayStreamingHandler GameplayStreamingFN.Default__FortGFNGameplayStreamingHandler
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGFNGameplayStreamingHandler* UFortGFNGameplayStreamingHandler::GetDefaultObj()
{
	static class UFortGFNGameplayStreamingHandler* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGFNGameplayStreamingHandler*>(UFortGFNGameplayStreamingHandler::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayStreamingFN.FortLunaGameplayStreamingHandler
// (None)

class UClass* UFortLunaGameplayStreamingHandler::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortLunaGameplayStreamingHandler");

	return Clss;
}


// FortLunaGameplayStreamingHandler GameplayStreamingFN.Default__FortLunaGameplayStreamingHandler
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortLunaGameplayStreamingHandler* UFortLunaGameplayStreamingHandler::GetDefaultObj()
{
	static class UFortLunaGameplayStreamingHandler* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortLunaGameplayStreamingHandler*>(UFortLunaGameplayStreamingHandler::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayStreamingFN.FortGameplayStreamingHandler
// (None)

class UClass* UFortGameplayStreamingHandler::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGameplayStreamingHandler");

	return Clss;
}


// FortGameplayStreamingHandler GameplayStreamingFN.Default__FortGameplayStreamingHandler
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGameplayStreamingHandler* UFortGameplayStreamingHandler::GetDefaultObj()
{
	static class UFortGameplayStreamingHandler* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGameplayStreamingHandler*>(UFortGameplayStreamingHandler::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayStreamingFN.FortGameplayStreamingService
// (None)

class UClass* UFortGameplayStreamingService::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGameplayStreamingService");

	return Clss;
}


// FortGameplayStreamingService GameplayStreamingFN.Default__FortGameplayStreamingService
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGameplayStreamingService* UFortGameplayStreamingService::GetDefaultObj()
{
	static class UFortGameplayStreamingService* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGameplayStreamingService*>(UFortGameplayStreamingService::StaticClass()->DefaultObject);

	return Default;
}

}


