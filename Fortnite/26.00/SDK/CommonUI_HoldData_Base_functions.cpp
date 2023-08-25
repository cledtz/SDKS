#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CommonUI_HoldData_Base.CommonUI_HoldData_Base_C
// (None)

class UClass* UCommonUI_HoldData_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonUI_HoldData_Base_C");

	return Clss;
}


// CommonUI_HoldData_Base_C CommonUI_HoldData_Base.Default__CommonUI_HoldData_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCommonUI_HoldData_Base_C* UCommonUI_HoldData_Base_C::GetDefaultObj()
{
	static class UCommonUI_HoldData_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonUI_HoldData_Base_C*>(UCommonUI_HoldData_Base_C::StaticClass()->DefaultObject);

	return Default;
}

}


