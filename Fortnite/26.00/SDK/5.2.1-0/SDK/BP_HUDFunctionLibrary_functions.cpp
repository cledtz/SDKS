#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HUDFunctionLibrary.BP_HUDFunctionLibrary_C
// (None)

class UClass* UBP_HUDFunctionLibrary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HUDFunctionLibrary_C");

	return Clss;
}


// BP_HUDFunctionLibrary_C BP_HUDFunctionLibrary.Default__BP_HUDFunctionLibrary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_HUDFunctionLibrary_C* UBP_HUDFunctionLibrary_C::GetDefaultObj()
{
	static class UBP_HUDFunctionLibrary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_HUDFunctionLibrary_C*>(UBP_HUDFunctionLibrary_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_HUDFunctionLibrary.BP_HUDFunctionLibrary_C.GetColorByID
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_HUDColor                CallFunc_GetDataTableRowFromName_OutRow                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDFunctionLibrary_C::GetColorByID(class FName RowName, class UObject* __WorldContext, struct FLinearColor* Color, bool* Found, const struct FST_HUDColor& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDFunctionLibrary_C", "GetColorByID");

	Params::UBP_HUDFunctionLibrary_C_GetColorByID_Params Parms{};

	Parms.RowName = RowName;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = Parms.Color;

	if (Found != nullptr)
		*Found = Parms.Found;

}

}


