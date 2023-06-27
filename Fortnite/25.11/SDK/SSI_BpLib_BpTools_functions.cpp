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


// Function SSI_BpLib_BpTools.SSI_BpLib_BpTools_C.OnLocalPlayersTeam
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               TeamValid                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AFortPlayerController*>CallFunc_GetLocalFortPlayerControllers_ReturnValue               (ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnSameTeam_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USSI_BpLib_BpTools_C::OnLocalPlayersTeam(class AActor* TargetActor, class UObject* __WorldContext, bool* Return_Value, bool TeamValid, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class AFortPlayerController* CallFunc_Array_Get_Item, bool CallFunc_OnSameTeam_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("SSI_BpLib_BpTools_C", "OnLocalPlayersTeam");

	Params::USSI_BpLib_BpTools_C_OnLocalPlayersTeam_Params Parms;

	Parms.TargetActor = TargetActor;
	Parms.__WorldContext = __WorldContext;
	Parms.TeamValid = TeamValid;
	Parms.CallFunc_GetLocalFortPlayerControllers_ReturnValue = CallFunc_GetLocalFortPlayerControllers_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_OnSameTeam_ReturnValue = CallFunc_OnSameTeam_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
