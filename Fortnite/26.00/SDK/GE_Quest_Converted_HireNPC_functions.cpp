#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Quest_Converted_HireNPC.GE_Quest_Converted_HireNPC_C
// (None)

class UClass* UGE_Quest_Converted_HireNPC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Quest_Converted_HireNPC_C");

	return Clss;
}


// GE_Quest_Converted_HireNPC_C GE_Quest_Converted_HireNPC.Default__GE_Quest_Converted_HireNPC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Quest_Converted_HireNPC_C* UGE_Quest_Converted_HireNPC_C::GetDefaultObj()
{
	static class UGE_Quest_Converted_HireNPC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Quest_Converted_HireNPC_C*>(UGE_Quest_Converted_HireNPC_C::StaticClass()->DefaultObject);

	return Default;
}

}


