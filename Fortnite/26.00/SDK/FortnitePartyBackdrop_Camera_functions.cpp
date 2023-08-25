#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C
// (Actor)

class UClass* UFortnitePartyBackdrop_Camera_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortnitePartyBackdrop_Camera_C");

	return Clss;
}


// FortnitePartyBackdrop_Camera_C FortnitePartyBackdrop_Camera.Default__FortnitePartyBackdrop_Camera_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFortnitePartyBackdrop_Camera_C* UFortnitePartyBackdrop_Camera_C::GetDefaultObj()
{
	static class UFortnitePartyBackdrop_Camera_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortnitePartyBackdrop_Camera_C*>(UFortnitePartyBackdrop_Camera_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.BP_OnActivated
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortPlayerController*       PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UFortnitePartyBackdrop_Camera_C::BP_OnActivated(class UFortPlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortnitePartyBackdrop_Camera_C", "BP_OnActivated");

	Params::UFortnitePartyBackdrop_Camera_C_BP_OnActivated_Params Parms{};

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.BP_OnDeactivated
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortPlayerController*       PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UFortnitePartyBackdrop_Camera_C::BP_OnDeactivated(class UFortPlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortnitePartyBackdrop_Camera_C", "BP_OnDeactivated");

	Params::UFortnitePartyBackdrop_Camera_C_BP_OnDeactivated_Params Parms{};

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.Reset Location
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortnitePartyBackdrop_Camera_C::Reset_Location()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortnitePartyBackdrop_Camera_C", "Reset Location");

	Params::UFortnitePartyBackdrop_Camera_C_Reset_Location_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.ManualActivate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortnitePartyBackdrop_Camera_C::ManualActivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortnitePartyBackdrop_Camera_C", "ManualActivate");

	Params::UFortnitePartyBackdrop_Camera_C_ManualActivate_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.ExecuteUbergraph_FortnitePartyBackdrop_Camera
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class UFortTimeOfDayManagerInterface>CallFunc_GetContextualTimeOfDayManager_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerController*       K2Node_Event_PlayerController_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UTVPostProcessBP_C*>  CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTVPostProcessBP_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerController*       K2Node_Event_PlayerController                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UBP_FortniteLobbyLightSwitcher_C*>CallFunc_GetAllActorsOfClass_OutActors_1                         (ReferenceParm)
// class UBP_FortniteLobbyLightSwitcher_C*CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UBP_FortniteLobbyLightSwitcher_C*>CallFunc_GetAllActorsOfClass_OutActors_2                         (ReferenceParm)
// class UBP_FortniteLobbyLightSwitcher_C*CallFunc_Array_Get_Item_2                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorTransform_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortnitePartyBackdrop_Camera_C::ExecuteUbergraph_FortnitePartyBackdrop_Camera(int32 EntryPoint, TScriptInterface<class UFortTimeOfDayManagerInterface> CallFunc_GetContextualTimeOfDayManager_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, class UFortPlayerController* K2Node_Event_PlayerController_1, TArray<class UTVPostProcessBP_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 Temp_int_Array_Index_Variable_2, class UTVPostProcessBP_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UFortPlayerController* K2Node_Event_PlayerController, TArray<class UBP_FortniteLobbyLightSwitcher_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, class UBP_FortniteLobbyLightSwitcher_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, TArray<class UBP_FortniteLobbyLightSwitcher_C*>& CallFunc_GetAllActorsOfClass_OutActors_2, class UBP_FortniteLobbyLightSwitcher_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Greater_IntInt_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortnitePartyBackdrop_Camera_C", "ExecuteUbergraph_FortnitePartyBackdrop_Camera");

	Params::UFortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContextualTimeOfDayManager_ReturnValue = CallFunc_GetContextualTimeOfDayManager_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_Event_PlayerController_1 = K2Node_Event_PlayerController_1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Event_PlayerController = K2Node_Event_PlayerController;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_1 = CallFunc_GetAllActorsOfClass_OutActors_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_2 = CallFunc_GetAllActorsOfClass_OutActors_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_K2_SetActorTransform_SweepHitResult = CallFunc_K2_SetActorTransform_SweepHitResult;
	Parms.CallFunc_K2_SetActorTransform_ReturnValue = CallFunc_K2_SetActorTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


