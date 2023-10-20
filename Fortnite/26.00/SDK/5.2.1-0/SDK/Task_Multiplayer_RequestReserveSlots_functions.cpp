#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Task_Multiplayer_RequestReserveSlots.Task_Multiplayer_RequestReserveSlots_C
// (None)

class UClass* UTask_Multiplayer_RequestReserveSlots_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Task_Multiplayer_RequestReserveSlots_C");

	return Clss;
}


// Task_Multiplayer_RequestReserveSlots_C Task_Multiplayer_RequestReserveSlots.Default__Task_Multiplayer_RequestReserveSlots_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_Multiplayer_RequestReserveSlots_C* UTask_Multiplayer_RequestReserveSlots_C::GetDefaultObj()
{
	static class UTask_Multiplayer_RequestReserveSlots_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_Multiplayer_RequestReserveSlots_C*>(UTask_Multiplayer_RequestReserveSlots_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Task_Multiplayer_RequestReserveSlots.Task_Multiplayer_RequestReserveSlots_C.ReceiveActivate
// (Event, Protected, BlueprintEvent)
// Parameters:

void UTask_Multiplayer_RequestReserveSlots_C::ReceiveActivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Task_Multiplayer_RequestReserveSlots_C", "ReceiveActivate");

	Params::UTask_Multiplayer_RequestReserveSlots_C_ReceiveActivate_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Task_Multiplayer_RequestReserveSlots.Task_Multiplayer_RequestReserveSlots_C.OnConnectionStateChange_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTask_Multiplayer_RequestReserveSlots_C::OnConnectionStateChange_Event(bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Task_Multiplayer_RequestReserveSlots_C", "OnConnectionStateChange_Event");

	Params::UTask_Multiplayer_RequestReserveSlots_C_OnConnectionStateChange_Event_Params Parms{};

	Parms.bWasSuccessful = bWasSuccessful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Task_Multiplayer_RequestReserveSlots.Task_Multiplayer_RequestReserveSlots_C.OnResponseReserveSlot_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              Payload                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTask_Multiplayer_RequestReserveSlots_C::OnResponseReserveSlot_Event(uint8 Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Task_Multiplayer_RequestReserveSlots_C", "OnResponseReserveSlot_Event");

	Params::UTask_Multiplayer_RequestReserveSlots_C_OnResponseReserveSlot_Event_Params Parms{};

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Task_Multiplayer_RequestReserveSlots.Task_Multiplayer_RequestReserveSlots_C.OnPutInQueue_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              Number                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTask_Multiplayer_RequestReserveSlots_C::OnPutInQueue_Event(uint8 Number)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Task_Multiplayer_RequestReserveSlots_C", "OnPutInQueue_Event");

	Params::UTask_Multiplayer_RequestReserveSlots_C_OnPutInQueue_Event_Params Parms{};

	Parms.Number = Number;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Task_Multiplayer_RequestReserveSlots.Task_Multiplayer_RequestReserveSlots_C.OnClickLeave_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTask_Multiplayer_RequestReserveSlots_C::OnClickLeave_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Task_Multiplayer_RequestReserveSlots_C", "OnClickLeave_Event");

	Params::UTask_Multiplayer_RequestReserveSlots_C_OnClickLeave_Event_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Task_Multiplayer_RequestReserveSlots.Task_Multiplayer_RequestReserveSlots_C.ReceiveFinished
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EActionState            Reason                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTask_Multiplayer_RequestReserveSlots_C::ReceiveFinished(enum class EActionState Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Task_Multiplayer_RequestReserveSlots_C", "ReceiveFinished");

	Params::UTask_Multiplayer_RequestReserveSlots_C_ReceiveFinished_Params Parms{};

	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Task_Multiplayer_RequestReserveSlots.Task_Multiplayer_RequestReserveSlots_C.ExecuteUbergraph_Task_Multiplayer_RequestReserveSlots
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionState            Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bWasSuccessful                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              K2Node_CustomEvent_Payload                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerController_Menu_C*K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPG_BeaconClient*            CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue                    (HasGetValueTypeHash)
// TArray<class UBlueprintPartyMember*>CallFunc_GetPartyMembers_OutPartyMembersArray                    (ReferenceParm)
// bool                               CallFunc_GetPartyMembers_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue_1                  (HasGetValueTypeHash)
// class UBlueprintPartyMember*       CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetUserId_ReturnValue                                   (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue_2                  (HasGetValueTypeHash)
// uint8                              K2Node_CustomEvent_Number                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_ByteToText_ReturnValue                             (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EActionState            K2Node_Event_Reason                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUI_Multiplayer_Queue_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMemberLeader_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ConnectToServer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTask_Multiplayer_RequestReserveSlots_C::ExecuteUbergraph_Task_Multiplayer_RequestReserveSlots(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 Temp_int_Array_Index_Variable, enum class EActionState Temp_byte_Variable, int32 Temp_int_Loop_Counter_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Add_IntInt_ReturnValue, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_CustomEvent_bWasSuccessful, uint8 K2Node_CustomEvent_Payload, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu, bool K2Node_DynamicCast_bSuccess, class UActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class UPG_BeaconClient* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue, TArray<class UBlueprintPartyMember*>& CallFunc_GetPartyMembers_OutPartyMembersArray, bool CallFunc_GetPartyMembers_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_1, class UBlueprintPartyMember* CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetUserId_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_2, uint8 K2Node_CustomEvent_Number, class FText CallFunc_Conv_ByteToText_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, enum class EActionState K2Node_Event_Reason, bool CallFunc_IsValid_ReturnValue_2, bool K2Node_Select_Default, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UUI_Multiplayer_Queue_C* CallFunc_Create_ReturnValue, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_IsMemberLeader_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_ConnectToServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Task_Multiplayer_RequestReserveSlots_C", "ExecuteUbergraph_Task_Multiplayer_RequestReserveSlots");

	Params::UTask_Multiplayer_RequestReserveSlots_C_ExecuteUbergraph_Task_Multiplayer_RequestReserveSlots_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_bWasSuccessful = K2Node_CustomEvent_bWasSuccessful;
	Parms.K2Node_CustomEvent_Payload = K2Node_CustomEvent_Payload;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu = K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue = CallFunc_GetControllerUniqueNetId_ReturnValue;
	Parms.CallFunc_GetPartyMembers_OutPartyMembersArray = CallFunc_GetPartyMembers_OutPartyMembersArray;
	Parms.CallFunc_GetPartyMembers_ReturnValue = CallFunc_GetPartyMembers_ReturnValue;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue_1 = CallFunc_GetControllerUniqueNetId_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetUserId_ReturnValue = CallFunc_GetUserId_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue_2 = CallFunc_GetControllerUniqueNetId_ReturnValue_2;
	Parms.K2Node_CustomEvent_Number = K2Node_CustomEvent_Number;
	Parms.CallFunc_Conv_ByteToText_ReturnValue = CallFunc_Conv_ByteToText_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_Event_Reason = K2Node_Event_Reason;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_IsMemberLeader_ReturnValue = CallFunc_IsMemberLeader_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_ConnectToServer_ReturnValue = CallFunc_ConnectToServer_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Task_Multiplayer_RequestReserveSlots.Task_Multiplayer_RequestReserveSlots_C.OnFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSuccessful                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              ErrorCode                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTask_Multiplayer_RequestReserveSlots_C::OnFinished__DelegateSignature(bool IsSuccessful, uint8 ErrorCode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Task_Multiplayer_RequestReserveSlots_C", "OnFinished__DelegateSignature");

	Params::UTask_Multiplayer_RequestReserveSlots_C_OnFinished__DelegateSignature_Params Parms{};

	Parms.IsSuccessful = IsSuccessful;
	Parms.ErrorCode = ErrorCode;

	UObject::ProcessEvent(Func, &Parms);

}

}


