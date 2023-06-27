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


// Function DoorSoundIndicatorComponent.DoorSoundIndicatorComponent_C.GetAffiliationsToShowFor
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<enum class EFortTeamAffiliation>ReturnValue                                                      (Parm, OutParm, ReturnParm)
// TArray<enum class EFortTeamAffiliation>K2Node_MakeArray_Array                                           (ReferenceParm)

TArray<enum class EFortTeamAffiliation> UDoorSoundIndicatorComponent_C::GetAffiliationsToShowFor(TArray<enum class EFortTeamAffiliation>& K2Node_MakeArray_Array)
{
	static auto Func = Class->GetFunction("DoorSoundIndicatorComponent_C", "GetAffiliationsToShowFor");

	Params::UDoorSoundIndicatorComponent_C_GetAffiliationsToShowFor_Params Parms;

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DoorSoundIndicatorComponent.DoorSoundIndicatorComponent_C.ShouldShowSoundIndicator
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPlayerController*       PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABuildingWall*               K2Node_DynamicCast_AsBuilding_Wall                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UDoorSoundIndicatorComponent_C::ShouldShowSoundIndicator(class AFortPlayerController* PlayerController, class AFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class ABuildingWall* K2Node_DynamicCast_AsBuilding_Wall, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("DoorSoundIndicatorComponent_C", "ShouldShowSoundIndicator");

	Params::UDoorSoundIndicatorComponent_C_ShouldShowSoundIndicator_Params Parms;

	Parms.PlayerController = PlayerController;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsBuilding_Wall = K2Node_DynamicCast_AsBuilding_Wall;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
