#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CommonUI_PS5BrushData.CommonUI_PS5BrushData_C
// (None)

class UClass* UCommonUI_PS5BrushData_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonUI_PS5BrushData_C");

	return Clss;
}


// CommonUI_PS5BrushData_C CommonUI_PS5BrushData.Default__CommonUI_PS5BrushData_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCommonUI_PS5BrushData_C* UCommonUI_PS5BrushData_C::GetDefaultObj()
{
	static class UCommonUI_PS5BrushData_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonUI_PS5BrushData_C*>(UCommonUI_PS5BrushData_C::StaticClass()->DefaultObject);

	return Default;
}

}


