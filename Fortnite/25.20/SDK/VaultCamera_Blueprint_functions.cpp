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


// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.BP_OnActivated
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPlayerController*       PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AVaultCamera_Blueprint_C::BP_OnActivated(class AFortPlayerController* PlayerController)
{
	static auto Func = Class->GetFunction("VaultCamera_Blueprint_C", "BP_OnActivated");

	Params::AVaultCamera_Blueprint_C_BP_OnActivated_Params Parms;

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.BP_OnDeactivated
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPlayerController*       PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AVaultCamera_Blueprint_C::BP_OnDeactivated(class AFortPlayerController* PlayerController)
{
	static auto Func = Class->GetFunction("VaultCamera_Blueprint_C", "BP_OnDeactivated");

	Params::AVaultCamera_Blueprint_C_BP_OnDeactivated_Params Parms;

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.ExecuteUbergraph_VaultCamera_Blueprint
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FInterfaceProperty_                CallFunc_GetContextualTimeOfDayManager_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_Event_PlayerController_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_Event_PlayerController                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class ATVPostProcessBP_C*>  CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATVPostProcessBP_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVaultCamera_Blueprint_C::ExecuteUbergraph_VaultCamera_Blueprint(int32 EntryPoint, FInterfaceProperty_ CallFunc_GetContextualTimeOfDayManager_ReturnValue, int32 Temp_int_Array_Index_Variable, class AFortPlayerController* K2Node_Event_PlayerController_1, class AFortPlayerController* K2Node_Event_PlayerController, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TArray<class ATVPostProcessBP_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 Temp_int_Loop_Counter_Variable, class ATVPostProcessBP_C* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("VaultCamera_Blueprint_C", "ExecuteUbergraph_VaultCamera_Blueprint");

	Params::AVaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContextualTimeOfDayManager_ReturnValue = CallFunc_GetContextualTimeOfDayManager_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_Event_PlayerController_1 = K2Node_Event_PlayerController_1;
	Parms.K2Node_Event_PlayerController = K2Node_Event_PlayerController;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
