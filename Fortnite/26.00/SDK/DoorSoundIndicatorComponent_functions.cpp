#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoorSoundIndicatorComponent.DoorSoundIndicatorComponent_C
// (None)

class UClass* UDoorSoundIndicatorComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoorSoundIndicatorComponent_C");

	return Clss;
}


// DoorSoundIndicatorComponent_C DoorSoundIndicatorComponent.Default__DoorSoundIndicatorComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoorSoundIndicatorComponent_C* UDoorSoundIndicatorComponent_C::GetDefaultObj()
{
	static class UDoorSoundIndicatorComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoorSoundIndicatorComponent_C*>(UDoorSoundIndicatorComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DoorSoundIndicatorComponent.DoorSoundIndicatorComponent_C.GetAffiliationsToShowFor
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<enum class EFortTeamAffiliation>ReturnValue                                                      (Parm, OutParm, ReturnParm)
// TArray<enum class EFortTeamAffiliation>K2Node_MakeArray_Array                                           (ReferenceParm)

TArray<enum class EFortTeamAffiliation> UDoorSoundIndicatorComponent_C::GetAffiliationsToShowFor(TArray<enum class EFortTeamAffiliation>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DoorSoundIndicatorComponent_C", "GetAffiliationsToShowFor");

	Params::UDoorSoundIndicatorComponent_C_GetAffiliationsToShowFor_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DoorSoundIndicatorComponent.DoorSoundIndicatorComponent_C.ShouldShowSoundIndicator
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UFortPlayerController*       PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBuildingWall*               K2Node_DynamicCast_AsBuilding_Wall                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UDoorSoundIndicatorComponent_C::ShouldShowSoundIndicator(class UFortPlayerController* PlayerController, class UFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UBuildingWall* K2Node_DynamicCast_AsBuilding_Wall, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DoorSoundIndicatorComponent_C", "ShouldShowSoundIndicator");

	Params::UDoorSoundIndicatorComponent_C_ShouldShowSoundIndicator_Params Parms{};

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


