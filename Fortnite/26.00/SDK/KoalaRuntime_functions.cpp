#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class KoalaRuntime.FortContextualTutorial_GameplayEventKoala
// (None)

class UClass* UFortContextualTutorial_GameplayEventKoala::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortContextualTutorial_GameplayEventKoala");

	return Clss;
}


// FortContextualTutorial_GameplayEventKoala KoalaRuntime.Default__FortContextualTutorial_GameplayEventKoala
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortContextualTutorial_GameplayEventKoala* UFortContextualTutorial_GameplayEventKoala::GetDefaultObj()
{
	static class UFortContextualTutorial_GameplayEventKoala* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortContextualTutorial_GameplayEventKoala*>(UFortContextualTutorial_GameplayEventKoala::StaticClass()->DefaultObject);

	return Default;
}


// Class KoalaRuntime.KoalaAnalytics
// (None)

class UClass* UKoalaAnalytics::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KoalaAnalytics");

	return Clss;
}


// KoalaAnalytics KoalaRuntime.Default__KoalaAnalytics
// (Public, ClassDefaultObject, ArchetypeObject)

class UKoalaAnalytics* UKoalaAnalytics::GetDefaultObj()
{
	static class UKoalaAnalytics* Default = nullptr;

	if (!Default)
		Default = static_cast<UKoalaAnalytics*>(UKoalaAnalytics::StaticClass()->DefaultObject);

	return Default;
}


// Class KoalaRuntime.KoalaGlobals
// (None)

class UClass* UKoalaGlobals::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KoalaGlobals");

	return Clss;
}


// KoalaGlobals KoalaRuntime.Default__KoalaGlobals
// (Public, ClassDefaultObject, ArchetypeObject)

class UKoalaGlobals* UKoalaGlobals::GetDefaultObj()
{
	static class UKoalaGlobals* Default = nullptr;

	if (!Default)
		Default = static_cast<UKoalaGlobals*>(UKoalaGlobals::StaticClass()->DefaultObject);

	return Default;
}

}


