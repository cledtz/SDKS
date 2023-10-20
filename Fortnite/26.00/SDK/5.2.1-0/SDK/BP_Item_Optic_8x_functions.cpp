#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Item_Optic_8x.BP_Item_Optic_8x_C
// (Actor)

class UClass* UBP_Item_Optic_8x_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Item_Optic_8x_C");

	return Clss;
}


// BP_Item_Optic_8x_C BP_Item_Optic_8x.Default__BP_Item_Optic_8x_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Item_Optic_8x_C* UBP_Item_Optic_8x_C::GetDefaultObj()
{
	static class UBP_Item_Optic_8x_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Item_Optic_8x_C*>(UBP_Item_Optic_8x_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Item_Optic_8x.BP_Item_Optic_8x_C.SetCorrectiveFovMaterial
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseFovMaterial                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Item_Optic_8x_C::SetCorrectiveFovMaterial(bool UseFovMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Item_Optic_8x_C", "SetCorrectiveFovMaterial");

	Params::UBP_Item_Optic_8x_C_SetCorrectiveFovMaterial_Params Parms{};

	Parms.UseFovMaterial = UseFovMaterial;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Item_Optic_8x.BP_Item_Optic_8x_C.ExecuteUbergraph_BP_Item_Optic_8x
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_useFovMaterial                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Item_Optic_8x_C::ExecuteUbergraph_BP_Item_Optic_8x(int32 EntryPoint, bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, bool K2Node_Event_useFovMaterial, class UMaterialInterface* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Item_Optic_8x_C", "ExecuteUbergraph_BP_Item_Optic_8x");

	Params::UBP_Item_Optic_8x_C_ExecuteUbergraph_BP_Item_Optic_8x_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_Event_useFovMaterial = K2Node_Event_useFovMaterial;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


