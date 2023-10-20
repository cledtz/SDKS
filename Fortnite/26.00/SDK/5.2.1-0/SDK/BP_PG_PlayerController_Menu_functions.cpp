#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PG_PlayerController_Menu.BP_PG_PlayerController_Menu_C
// (Actor, PlayerController)

class UClass* UBP_PG_PlayerController_Menu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PG_PlayerController_Menu_C");

	return Clss;
}


// BP_PG_PlayerController_Menu_C BP_PG_PlayerController_Menu.Default__BP_PG_PlayerController_Menu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PG_PlayerController_Menu_C* UBP_PG_PlayerController_Menu_C::GetDefaultObj()
{
	static class UBP_PG_PlayerController_Menu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PG_PlayerController_Menu_C*>(UBP_PG_PlayerController_Menu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PG_PlayerController_Menu.BP_PG_PlayerController_Menu_C.SetVisibleHardLoadingScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsVisible                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               L_IsVisible                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_HardLoadingScreen_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PG_PlayerController_Menu_C::SetVisibleHardLoadingScreen(bool IsVisible, bool L_IsVisible, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UUI_HardLoadingScreen_C* CallFunc_Create_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_PlayerController_Menu_C", "SetVisibleHardLoadingScreen");

	Params::UBP_PG_PlayerController_Menu_C_SetVisibleHardLoadingScreen_Params Parms{};

	Parms.IsVisible = IsVisible;
	Parms.L_IsVisible = L_IsVisible;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_PlayerController_Menu.BP_PG_PlayerController_Menu_C.SetVisibleSoftLoadingScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsVisible                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               L_IsVisible                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_SoftLoadingScreen_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PG_PlayerController_Menu_C::SetVisibleSoftLoadingScreen(bool IsVisible, bool L_IsVisible, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UUI_SoftLoadingScreen_C* CallFunc_Create_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_PlayerController_Menu_C", "SetVisibleSoftLoadingScreen");

	Params::UBP_PG_PlayerController_Menu_C_SetVisibleSoftLoadingScreen_Params Parms{};

	Parms.IsVisible = IsVisible;
	Parms.L_IsVisible = L_IsVisible;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_PlayerController_Menu.BP_PG_PlayerController_Menu_C.SwitchCamera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CameraTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             BlendTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               L_UseDarkTransition                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             L_BlendTime                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraActor*                L_NewCamera                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class FName                        L_CameraTag                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraActor*                CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetViewTargetWithBlend_BlendTime_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PG_PlayerController_Menu_C::SwitchCamera(class FName CameraTag, double BlendTime, bool L_UseDarkTransition, double L_BlendTime, class UCameraActor* L_NewCamera, class FName L_CameraTag, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UCameraActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, float CallFunc_SetViewTargetWithBlend_BlendTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_PlayerController_Menu_C", "SwitchCamera");

	Params::UBP_PG_PlayerController_Menu_C_SwitchCamera_Params Parms{};

	Parms.CameraTag = CameraTag;
	Parms.BlendTime = BlendTime;
	Parms.L_UseDarkTransition = L_UseDarkTransition;
	Parms.L_BlendTime = L_BlendTime;
	Parms.L_NewCamera = L_NewCamera;
	Parms.L_CameraTag = L_CameraTag;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_SetViewTargetWithBlend_BlendTime_ImplicitCast = CallFunc_SetViewTargetWithBlend_BlendTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_PlayerController_Menu.BP_PG_PlayerController_Menu_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_PG_PlayerController_Menu_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_PlayerController_Menu_C", "ReceiveBeginPlay");

	Params::UBP_PG_PlayerController_Menu_C_ReceiveBeginPlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_PlayerController_Menu.BP_PG_PlayerController_Menu_C.ShowError
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ErrorMessage                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        ErrorDetails                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_PG_PlayerController_Menu_C::ShowError(class FText& ErrorMessage, class FText& ErrorDetails)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_PlayerController_Menu_C", "ShowError");

	Params::UBP_PG_PlayerController_Menu_C_ShowError_Params Parms{};

	Parms.ErrorMessage = ErrorMessage;
	Parms.ErrorDetails = ErrorDetails;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_PlayerController_Menu.BP_PG_PlayerController_Menu_C.ExecuteUbergraph_BP_PG_PlayerController_Menu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_CreateSound2D_ReturnValue                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_Menu_GeneralMenuScreen_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_errorMessage                                        (ConstParm)
// class FText                        K2Node_Event_errorDetails                                        (ConstParm)
// class UUI_ErrorMessage_C*          CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UCameraActor*>        CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)

void UBP_PG_PlayerController_Menu_C::ExecuteUbergraph_BP_PG_PlayerController_Menu(int32 EntryPoint, class UAudioComponent* CallFunc_CreateSound2D_ReturnValue, class UUI_Menu_GeneralMenuScreen_C* CallFunc_Create_ReturnValue, class FText K2Node_Event_errorMessage, class FText K2Node_Event_errorDetails, class UUI_ErrorMessage_C* CallFunc_Create_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, TArray<class UCameraActor*>& CallFunc_GetAllActorsOfClass_OutActors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_PlayerController_Menu_C", "ExecuteUbergraph_BP_PG_PlayerController_Menu");

	Params::UBP_PG_PlayerController_Menu_C_ExecuteUbergraph_BP_PG_PlayerController_Menu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_CreateSound2D_ReturnValue = CallFunc_CreateSound2D_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_Event_errorMessage = K2Node_Event_errorMessage;
	Parms.K2Node_Event_errorDetails = K2Node_Event_errorDetails;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;

	UObject::ProcessEvent(Func, &Parms);

}

}


