#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AthenaDanceItemDefinition_AdHocSquadsJoin.AthenaDanceItemDefinition_AdHocSquadsJoin_C
// (None)

class UClass* UAthenaDanceItemDefinition_AdHocSquadsJoin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaDanceItemDefinition_AdHocSquadsJoin_C");

	return Clss;
}


// AthenaDanceItemDefinition_AdHocSquadsJoin_C AthenaDanceItemDefinition_AdHocSquadsJoin.Default__AthenaDanceItemDefinition_AdHocSquadsJoin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaDanceItemDefinition_AdHocSquadsJoin_C* UAthenaDanceItemDefinition_AdHocSquadsJoin_C::GetDefaultObj()
{
	static class UAthenaDanceItemDefinition_AdHocSquadsJoin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaDanceItemDefinition_AdHocSquadsJoin_C*>(UAthenaDanceItemDefinition_AdHocSquadsJoin_C::StaticClass()->DefaultObject);

	return Default;
}

}


