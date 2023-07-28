#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function FrontendCamera_Manage.FrontendCamera_Manage_C.BP_OnActivated
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortPlayerController*       PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UFrontendCamera_Manage_C::BP_OnActivated(class UFortPlayerController* PlayerController)
{
	static auto Func = Class->GetFunction("FrontendCamera_Manage_C", "BP_OnActivated");

	Params::UFrontendCamera_Manage_C_BP_OnActivated_Params Parms;

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontendCamera_Manage.FrontendCamera_Manage_C.BP_OnDeactivated
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortPlayerController*       PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UFrontendCamera_Manage_C::BP_OnDeactivated(class UFortPlayerController* PlayerController)
{
	static auto Func = Class->GetFunction("FrontendCamera_Manage_C", "BP_OnDeactivated");

	Params::UFrontendCamera_Manage_C_BP_OnDeactivated_Params Parms;

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontendCamera_Manage.FrontendCamera_Manage_C.ExecuteUbergraph_FrontendCamera_Manage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FInterfaceProperty_                CallFunc_GetContextualTimeOfDayManager_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerController*       K2Node_Event_PlayerController_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UTVPostProcessBP_C*>  CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class UFortGlobalUIContext*        CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTVPostProcessBP_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerController*       K2Node_Event_PlayerController                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UVaultCharacterLightingBP_C*>CallFunc_GetAllActorsOfClass_OutActors_1                         (ReferenceParm)
// TArray<class UVaultCharacterLightingBP_C*>CallFunc_GetAllActorsOfClass_OutActors_2                         (ReferenceParm)
// class UVaultCharacterLightingBP_C* CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UVaultCharacterLightingBP_C* CallFunc_Array_Get_Item_2                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontendCamera_Manage_C::ExecuteUbergraph_FrontendCamera_Manage(int32 EntryPoint, FInterfaceProperty_ CallFunc_GetContextualTimeOfDayManager_ReturnValue, int32 Temp_int_Array_Index_Variable, class UFortPlayerController* K2Node_Event_PlayerController_1, TArray<class UTVPostProcessBP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class UFortGlobalUIContext* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, class UTVPostProcessBP_C* CallFunc_Array_Get_Item, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UFortPlayerController* K2Node_Event_PlayerController, TArray<class UVaultCharacterLightingBP_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, TArray<class UVaultCharacterLightingBP_C*>& CallFunc_GetAllActorsOfClass_OutActors_2, class UVaultCharacterLightingBP_C* CallFunc_Array_Get_Item_1, class UVaultCharacterLightingBP_C* CallFunc_Array_Get_Item_2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontendCamera_Manage_C", "ExecuteUbergraph_FrontendCamera_Manage");

	Params::UFrontendCamera_Manage_C_ExecuteUbergraph_FrontendCamera_Manage_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContextualTimeOfDayManager_ReturnValue = CallFunc_GetContextualTimeOfDayManager_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_Event_PlayerController_1 = K2Node_Event_PlayerController_1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue = CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_Event_PlayerController = K2Node_Event_PlayerController;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_1 = CallFunc_GetAllActorsOfClass_OutActors_1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_2 = CallFunc_GetAllActorsOfClass_OutActors_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
