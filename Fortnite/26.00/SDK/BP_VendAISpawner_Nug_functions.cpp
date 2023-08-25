#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_VendAISpawner_Nug.BP_VendAISpawner_Nug_C
// (Actor)

class UClass* UBP_VendAISpawner_Nug_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_VendAISpawner_Nug_C");

	return Clss;
}


// BP_VendAISpawner_Nug_C BP_VendAISpawner_Nug.Default__BP_VendAISpawner_Nug_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_VendAISpawner_Nug_C* UBP_VendAISpawner_Nug_C::GetDefaultObj()
{
	static class UBP_VendAISpawner_Nug_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_VendAISpawner_Nug_C*>(UBP_VendAISpawner_Nug_C::StaticClass()->DefaultObject);

	return Default;
}

}


