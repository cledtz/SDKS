#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Task_Character_SetupByTeam.Task_Character_SetupByTeam_C
// (None)

class UClass* UTask_Character_SetupByTeam_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Task_Character_SetupByTeam_C");

	return Clss;
}


// Task_Character_SetupByTeam_C Task_Character_SetupByTeam.Default__Task_Character_SetupByTeam_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_Character_SetupByTeam_C* UTask_Character_SetupByTeam_C::GetDefaultObj()
{
	static class UTask_Character_SetupByTeam_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_Character_SetupByTeam_C*>(UTask_Character_SetupByTeam_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Task_Character_SetupByTeam.Task_Character_SetupByTeam_C.SetMaterialsByTeam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_2                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_3                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_4                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_5                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_6                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_7                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ETeam                   Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_8                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_9                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_10                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_11                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_12                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_13                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_14                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_15                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ETeam                   Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETeam                   Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETeam                   CallFunc_GetTeam_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ENetRole                CallFunc_GetLocalRole_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETeam                   CallFunc_GetTeam_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default_1                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default_2                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ETeam                   Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ENetRole                CallFunc_GetLocalRole_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default_3                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default_4                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default_5                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ENetRole                CallFunc_GetLocalRole_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETeam                   CallFunc_GetTeam_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default_6                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default_7                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default_8                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ETeam                   CallFunc_GetTeam_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default_9                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UTask_Character_SetupByTeam_C::SetMaterialsByTeam(class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, class UMaterialInterface* Temp_object_Variable_2, class UMaterialInterface* Temp_object_Variable_3, bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable_4, class UMaterialInterface* Temp_object_Variable_5, bool Temp_bool_Variable_1, class UMaterialInterface* Temp_object_Variable_6, class UMaterialInterface* Temp_object_Variable_7, enum class ETeam Temp_byte_Variable, bool Temp_bool_Variable_2, class UMaterialInterface* Temp_object_Variable_8, class UMaterialInterface* Temp_object_Variable_9, bool Temp_bool_Variable_3, class UMaterialInterface* Temp_object_Variable_10, class UMaterialInterface* Temp_object_Variable_11, bool Temp_bool_Variable_4, class UMaterialInterface* Temp_object_Variable_12, class UMaterialInterface* Temp_object_Variable_13, bool Temp_bool_Variable_5, class UMaterialInterface* Temp_object_Variable_14, class UMaterialInterface* Temp_object_Variable_15, enum class ETeam Temp_byte_Variable_1, enum class ETeam Temp_byte_Variable_2, enum class ETeam CallFunc_GetTeam_ReturnValue, enum class ENetRole CallFunc_GetLocalRole_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ETeam CallFunc_GetTeam_ReturnValue_1, class UMaterialInterface* K2Node_Select_Default, bool CallFunc_IsDedicatedServer_ReturnValue, class UMaterialInterface* K2Node_Select_Default_1, bool CallFunc_Not_PreBool_ReturnValue, class UMaterialInterface* K2Node_Select_Default_2, enum class ETeam Temp_byte_Variable_3, enum class ENetRole CallFunc_GetLocalRole_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class UMaterialInterface* K2Node_Select_Default_3, class UMaterialInterface* K2Node_Select_Default_4, class UMaterialInterface* K2Node_Select_Default_5, enum class ENetRole CallFunc_GetLocalRole_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, enum class ETeam CallFunc_GetTeam_ReturnValue_2, class UMaterialInterface* K2Node_Select_Default_6, class UMaterialInterface* K2Node_Select_Default_7, class UMaterialInterface* K2Node_Select_Default_8, enum class ETeam CallFunc_GetTeam_ReturnValue_3, class UMaterialInterface* K2Node_Select_Default_9)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Task_Character_SetupByTeam_C", "SetMaterialsByTeam");

	Params::UTask_Character_SetupByTeam_C_SetMaterialsByTeam_Params Parms{};

	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.Temp_object_Variable_7 = Temp_object_Variable_7;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_object_Variable_8 = Temp_object_Variable_8;
	Parms.Temp_object_Variable_9 = Temp_object_Variable_9;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_object_Variable_10 = Temp_object_Variable_10;
	Parms.Temp_object_Variable_11 = Temp_object_Variable_11;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_object_Variable_12 = Temp_object_Variable_12;
	Parms.Temp_object_Variable_13 = Temp_object_Variable_13;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.Temp_object_Variable_14 = Temp_object_Variable_14;
	Parms.Temp_object_Variable_15 = Temp_object_Variable_15;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_GetTeam_ReturnValue = CallFunc_GetTeam_ReturnValue;
	Parms.CallFunc_GetLocalRole_ReturnValue = CallFunc_GetLocalRole_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetTeam_ReturnValue_1 = CallFunc_GetTeam_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_GetLocalRole_ReturnValue_1 = CallFunc_GetLocalRole_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.CallFunc_GetLocalRole_ReturnValue_2 = CallFunc_GetLocalRole_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_GetTeam_ReturnValue_2 = CallFunc_GetTeam_ReturnValue_2;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;
	Parms.K2Node_Select_Default_8 = K2Node_Select_Default_8;
	Parms.CallFunc_GetTeam_ReturnValue_3 = CallFunc_GetTeam_ReturnValue_3;
	Parms.K2Node_Select_Default_9 = K2Node_Select_Default_9;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Task_Character_SetupByTeam.Task_Character_SetupByTeam_C.ReceiveActivate
// (Event, Protected, BlueprintEvent)
// Parameters:

void UTask_Character_SetupByTeam_C::ReceiveActivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Task_Character_SetupByTeam_C", "ReceiveActivate");

	Params::UTask_Character_SetupByTeam_C_ReceiveActivate_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Task_Character_SetupByTeam.Task_Character_SetupByTeam_C.OnSetTeam_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTask_Character_SetupByTeam_C::OnSetTeam_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Task_Character_SetupByTeam_C", "OnSetTeam_Event");

	Params::UTask_Character_SetupByTeam_C_OnSetTeam_Event_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Task_Character_SetupByTeam.Task_Character_SetupByTeam_C.OnSetPlayerState_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTask_Character_SetupByTeam_C::OnSetPlayerState_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Task_Character_SetupByTeam_C", "OnSetPlayerState_Event");

	Params::UTask_Character_SetupByTeam_C_OnSetPlayerState_Event_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Task_Character_SetupByTeam.Task_Character_SetupByTeam_C.OnSetPlayerStateLocal_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTask_Character_SetupByTeam_C::OnSetPlayerStateLocal_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Task_Character_SetupByTeam_C", "OnSetPlayerStateLocal_Event");

	Params::UTask_Character_SetupByTeam_C_OnSetPlayerStateLocal_Event_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Task_Character_SetupByTeam.Task_Character_SetupByTeam_C.OnIsMemberMySquad_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTask_Character_SetupByTeam_C::OnIsMemberMySquad_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Task_Character_SetupByTeam_C", "OnIsMemberMySquad_Event");

	Params::UTask_Character_SetupByTeam_C_OnIsMemberMySquad_Event_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Task_Character_SetupByTeam.Task_Character_SetupByTeam_C.ScaleCharacterByDistance
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTask_Character_SetupByTeam_C::ScaleCharacterByDistance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Task_Character_SetupByTeam_C", "ScaleCharacterByDistance");

	Params::UTask_Character_SetupByTeam_C_ScaleCharacterByDistance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Task_Character_SetupByTeam.Task_Character_SetupByTeam_C.ExecuteUbergraph_Task_Character_SetupByTeam
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerController_Game_C*K2Node_DynamicCast_AsBP_PG_Player_Controller_Game                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPG_PlayerController_Base*   K2Node_DynamicCast_AsPG_Player_Controller_Base                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerState_Game_C*   K2Node_DynamicCast_AsBP_PG_Player_State_Game                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwnerActor_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_Game_Character_C*     K2Node_DynamicCast_AsBP_PG_Game_Character                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerState_Game_C*   K2Node_DynamicCast_AsBP_PG_Player_State_Game_1                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetWidget_ReturnValue                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_PlayerMarker_C*          K2Node_DynamicCast_AsUI_Player_Marker                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetWidget_ReturnValue_1                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_PlayerMarker_C*          K2Node_DynamicCast_AsUI_Player_Marker_1                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ENetRole                CallFunc_GetLocalRole_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetPlayerViewPoint_Location                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetPlayerViewPoint_Rotation                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentScale_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFOVAngle_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMin_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTask_Character_SetupByTeam_C::ExecuteUbergraph_Task_Character_SetupByTeam(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, bool Temp_bool_IsClosed_Variable, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PG_PlayerController_Game_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Game, bool K2Node_DynamicCast_bSuccess, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UPG_PlayerController_Base* K2Node_DynamicCast_AsPG_Player_Controller_Base, bool K2Node_DynamicCast_bSuccess_1, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_2, class UBP_PG_PlayerState_Game_C* K2Node_DynamicCast_AsBP_PG_Player_State_Game, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue, class UActor* CallFunc_GetOwnerActor_ReturnValue, class UBP_PG_Game_Character_C* K2Node_DynamicCast_AsBP_PG_Game_Character, bool K2Node_DynamicCast_bSuccess_3, class UBP_PG_PlayerState_Game_C* K2Node_DynamicCast_AsBP_PG_Player_State_Game_1, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UUserWidget* CallFunc_GetWidget_ReturnValue, class UUI_PlayerMarker_C* K2Node_DynamicCast_AsUI_Player_Marker, bool K2Node_DynamicCast_bSuccess_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UUserWidget* CallFunc_GetWidget_ReturnValue_1, class UUI_PlayerMarker_C* K2Node_DynamicCast_AsUI_Player_Marker_1, bool K2Node_DynamicCast_bSuccess_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue_2, bool CallFunc_NotEqual_ByteByte_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, enum class ENetRole CallFunc_GetLocalRole_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_3, const struct FVector& CallFunc_GetPlayerViewPoint_Location, const struct FRotator& CallFunc_GetPlayerViewPoint_Rotation, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, class UPlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, float CallFunc_GetFOVAngle_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_FMin_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, double CallFunc_FMin_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, double CallFunc_Divide_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Task_Character_SetupByTeam_C", "ExecuteUbergraph_Task_Character_SetupByTeam");

	Params::UTask_Character_SetupByTeam_C_ExecuteUbergraph_Task_Character_SetupByTeam_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_Conv_DoubleToVector_ReturnValue = CallFunc_Conv_DoubleToVector_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_Controller_Game = K2Node_DynamicCast_AsBP_PG_Player_Controller_Game;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPG_Player_Controller_Base = K2Node_DynamicCast_AsPG_Player_Controller_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_State_Game = K2Node_DynamicCast_AsBP_PG_Player_State_Game;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwnerActor_ReturnValue = CallFunc_GetOwnerActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_PG_Game_Character = K2Node_DynamicCast_AsBP_PG_Game_Character;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_State_Game_1 = K2Node_DynamicCast_AsBP_PG_Player_State_Game_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetWidget_ReturnValue = CallFunc_GetWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Player_Marker = K2Node_DynamicCast_AsUI_Player_Marker;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetWidget_ReturnValue_1 = CallFunc_GetWidget_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsUI_Player_Marker_1 = K2Node_DynamicCast_AsUI_Player_Marker_1;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_2 = CallFunc_NotEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_3 = CallFunc_NotEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetLocalRole_ReturnValue = CallFunc_GetLocalRole_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.CallFunc_GetPlayerViewPoint_Location = CallFunc_GetPlayerViewPoint_Location;
	Parms.CallFunc_GetPlayerViewPoint_Rotation = CallFunc_GetPlayerViewPoint_Rotation;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentScale_ReturnValue = CallFunc_K2_GetComponentScale_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_GetFOVAngle_ReturnValue = CallFunc_GetFOVAngle_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_FMin_ReturnValue_1 = CallFunc_FMin_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Conv_DoubleToVector_ReturnValue_1 = CallFunc_Conv_DoubleToVector_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


