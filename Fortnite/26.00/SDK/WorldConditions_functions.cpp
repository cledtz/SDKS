#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class WorldConditions.WorldConditionSchema
// (None)

class UClass* UWorldConditionSchema::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WorldConditionSchema");

	return Clss;
}


// WorldConditionSchema WorldConditions.Default__WorldConditionSchema
// (Public, ClassDefaultObject, ArchetypeObject)

class UWorldConditionSchema* UWorldConditionSchema::GetDefaultObj()
{
	static class UWorldConditionSchema* Default = nullptr;

	if (!Default)
		Default = static_cast<UWorldConditionSchema*>(UWorldConditionSchema::StaticClass()->DefaultObject);

	return Default;
}

}


