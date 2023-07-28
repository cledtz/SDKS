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


// Function GCNL_Grinding.GCNL_Grinding_C.AllowAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGCNL_Grinding_C::AllowAudio()
{
	static auto Func = Class->GetFunction("GCNL_Grinding_C", "AllowAudio");

	Params::UGCNL_Grinding_C_AllowAudio_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Grinding.GCNL_Grinding_C.OnJumpedOff
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UGCNL_Grinding_C::OnJumpedOff(bool CallFunc_IsValid_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue)
{
	static auto Func = Class->GetFunction("GCNL_Grinding_C", "OnJumpedOff");

	Params::UGCNL_Grinding_C_OnJumpedOff_Params Parms;

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Grinding.GCNL_Grinding_C.GrindAudioState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Start                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnLocalPlayersTeam_Return_Value                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UGCNL_Grinding_C::GrindAudioState(bool Start, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_OnLocalPlayersTeam_Return_Value, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue)
{
	static auto Func = Class->GetFunction("GCNL_Grinding_C", "GrindAudioState");

	Params::UGCNL_Grinding_C_GrindAudioState_Params Parms;

	Parms.Start = Start;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_OnLocalPlayersTeam_Return_Value = CallFunc_OnLocalPlayersTeam_Return_Value;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Grinding.GCNL_Grinding_C.AlphaCurve__FinishedFunc
// (BlueprintEvent)
// Parameters:

void UGCNL_Grinding_C::AlphaCurve__FinishedFunc()
{
	static auto Func = Class->GetFunction("GCNL_Grinding_C", "AlphaCurve__FinishedFunc");

	Params::UGCNL_Grinding_C_AlphaCurve__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Grinding.GCNL_Grinding_C.AlphaCurve__UpdateFunc
// (BlueprintEvent)
// Parameters:

void UGCNL_Grinding_C::AlphaCurve__UpdateFunc()
{
	static auto Func = Class->GetFunction("GCNL_Grinding_C", "AlphaCurve__UpdateFunc");

	Params::UGCNL_Grinding_C_AlphaCurve__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Grinding.GCNL_Grinding_C.OnFeetLanded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGCNL_Grinding_C::OnFeetLanded()
{
	static auto Func = Class->GetFunction("GCNL_Grinding_C", "OnFeetLanded");

	Params::UGCNL_Grinding_C_OnFeetLanded_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Grinding.GCNL_Grinding_C.OnGrindRailSprint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bNewIsSprinting                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGCNL_Grinding_C::OnGrindRailSprint(bool bNewIsSprinting)
{
	static auto Func = Class->GetFunction("GCNL_Grinding_C", "OnGrindRailSprint");

	Params::UGCNL_Grinding_C_OnGrindRailSprint_Params Parms;

	Parms.bNewIsSprinting = bNewIsSprinting;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Grinding.GCNL_Grinding_C.OnGrindRailBoosterMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGrindRailBoosterMode   PreviousBoosterMode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGCNL_Grinding_C::OnGrindRailBoosterMode(enum class EGrindRailBoosterMode PreviousBoosterMode)
{
	static auto Func = Class->GetFunction("GCNL_Grinding_C", "OnGrindRailBoosterMode");

	Params::UGCNL_Grinding_C_OnGrindRailBoosterMode_Params Parms;

	Parms.PreviousBoosterMode = PreviousBoosterMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Grinding.GCNL_Grinding_C.OnRemovalGeneric
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UFXSystemComponent*>  ParticleComponents                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UAudioComponent*>     AudioComponents                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class ULegacyCameraShake*          BurstCameraShakeInstance                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDecalActor*                 BurstDecalInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGCNL_Grinding_C::OnRemovalGeneric(class UActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class UDecalActor* BurstDecalInstance)
{
	static auto Func = Class->GetFunction("GCNL_Grinding_C", "OnRemovalGeneric");

	Params::UGCNL_Grinding_C_OnRemovalGeneric_Params Parms;

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.ParticleComponents = ParticleComponents;
	Parms.AudioComponents = AudioComponents;
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Grinding.GCNL_Grinding_C.OnApplicationGeneric
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UFXSystemComponent*>  ParticleComponents                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UAudioComponent*>     AudioComponents                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class ULegacyCameraShake*          BurstCameraShakeInstance                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDecalActor*                 BurstDecalInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGCNL_Grinding_C::OnApplicationGeneric(class UActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class UDecalActor* BurstDecalInstance)
{
	static auto Func = Class->GetFunction("GCNL_Grinding_C", "OnApplicationGeneric");

	Params::UGCNL_Grinding_C_OnApplicationGeneric_Params Parms;

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.ParticleComponents = ParticleComponents;
	Parms.AudioComponents = AudioComponents;
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Grinding.GCNL_Grinding_C.HandleGrindRailChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGrindRail*              OldRail                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortGrindRail*              NewRail                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGCNL_Grinding_C::HandleGrindRailChanged(class UFortGrindRail* OldRail, class UFortGrindRail* NewRail)
{
	static auto Func = Class->GetFunction("GCNL_Grinding_C", "HandleGrindRailChanged");

	Params::UGCNL_Grinding_C_HandleGrindRailChanged_Params Parms;

	Parms.OldRail = OldRail;
	Parms.NewRail = NewRail;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Grinding.GCNL_Grinding_C.OnForwardChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bNewState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGCNL_Grinding_C::OnForwardChanged(bool bNewState)
{
	static auto Func = Class->GetFunction("GCNL_Grinding_C", "OnForwardChanged");

	Params::UGCNL_Grinding_C_OnForwardChanged_Params Parms;

	Parms.bNewState = bNewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Grinding.GCNL_Grinding_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGCNL_Grinding_C::ReceiveTick(float DeltaSeconds)
{
	static auto Func = Class->GetFunction("GCNL_Grinding_C", "ReceiveTick");

	Params::UGCNL_Grinding_C_ReceiveTick_Params Parms;

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Grinding.GCNL_Grinding_C.OnLoopingStartGeneric
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UFXSystemComponent*>  ParticleComponents                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UAudioComponent*>     AudioComponents                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UGCNL_Grinding_C::OnLoopingStartGeneric(class UActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents)
{
	static auto Func = Class->GetFunction("GCNL_Grinding_C", "OnLoopingStartGeneric");

	Params::UGCNL_Grinding_C_OnLoopingStartGeneric_Params Parms;

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.ParticleComponents = ParticleComponents;
	Parms.AudioComponents = AudioComponents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Grinding.GCNL_Grinding_C.ExecuteUbergraph_GCNL_Grinding
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bNewIsSprinting                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGrindRailBoosterMode   K2Node_CustomEvent_PreviousBoosterMode                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_GrindingComponent_C*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_Event_MyTarget_2                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_Event_Parameters_2                                        (ConstParm, ContainsInstancedReference)
// TArray<class UFXSystemComponent*>  K2Node_Event_ParticleComponents_2                                (ConstParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UAudioComponent*>     K2Node_Event_AudioComponents_2                                   (ConstParm, ReferenceParm, ContainsInstancedReference)
// class ULegacyCameraShake*          K2Node_Event_BurstCameraShakeInstance_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDecalActor*                 K2Node_Event_BurstDecalInstance_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_Event_MyTarget_1                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_Event_Parameters_1                                        (ConstParm, ContainsInstancedReference)
// TArray<class UFXSystemComponent*>  K2Node_Event_ParticleComponents_1                                (ConstParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UAudioComponent*>     K2Node_Event_AudioComponents_1                                   (ConstParm, ReferenceParm, ContainsInstancedReference)
// class ULegacyCameraShake*          K2Node_Event_BurstCameraShakeInstance                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDecalActor*                 K2Node_Event_BurstDecalInstance                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortGrindRail*              K2Node_CustomEvent_OldRail                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortGrindRail*              K2Node_CustomEvent_NewRail                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBGA_GrindRail_C*            K2Node_DynamicCast_AsBGA_Grind_Rail                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyViewed_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FInterfaceProperty_                CallFunc_SetBoolParameter_self_CastInput                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bNewState                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetConsoleVariableFloatValue_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_Event_MyTarget                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_Event_Parameters                                          (ConstParm, ContainsInstancedReference)
// TArray<class UFXSystemComponent*>  K2Node_Event_ParticleComponents                                  (ConstParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UAudioComponent*>     K2Node_Event_AudioComponents                                     (ConstParm, ReferenceParm, ContainsInstancedReference)
// class UAudioComponent*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UFXSystemComponent*          CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_GrindingComponent_C*     CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGCNL_Grinding_C::ExecuteUbergraph_GCNL_Grinding(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_CustomEvent_bNewIsSprinting, bool K2Node_SwitchEnum_CmpSuccess, enum class EGrindRailBoosterMode K2Node_CustomEvent_PreviousBoosterMode, bool K2Node_SwitchEnum_CmpSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UBP_GrindingComponent_C* CallFunc_GetComponentByClass_ReturnValue, class UActor* K2Node_Event_MyTarget_2, const struct FGameplayCueParameters& K2Node_Event_Parameters_2, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents_2, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_2, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance_1, class UDecalActor* K2Node_Event_BurstDecalInstance_1, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class UActor* K2Node_Event_MyTarget_1, const struct FGameplayCueParameters& K2Node_Event_Parameters_1, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents_1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_1, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance, class UDecalActor* K2Node_Event_BurstDecalInstance, class UFortGrindRail* K2Node_CustomEvent_OldRail, class UFortGrindRail* K2Node_CustomEvent_NewRail, class UBGA_GrindRail_C* K2Node_DynamicCast_AsBGA_Grind_Rail, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsLocallyViewed_ReturnValue, FInterfaceProperty_ CallFunc_SetBoolParameter_self_CastInput, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool K2Node_Event_bNewState, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, float CallFunc_GetConsoleVariableFloatValue_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, float K2Node_Event_DeltaSeconds, class UActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class UAudioComponent* CallFunc_Array_Get_Item, class UFXSystemComponent* CallFunc_Array_Get_Item_1, class UBP_GrindingComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4)
{
	static auto Func = Class->GetFunction("GCNL_Grinding_C", "ExecuteUbergraph_GCNL_Grinding");

	Params::UGCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_bNewIsSprinting = K2Node_CustomEvent_bNewIsSprinting;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CustomEvent_PreviousBoosterMode = K2Node_CustomEvent_PreviousBoosterMode;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_Event_MyTarget_2 = K2Node_Event_MyTarget_2;
	Parms.K2Node_Event_Parameters_2 = K2Node_Event_Parameters_2;
	Parms.K2Node_Event_ParticleComponents_2 = K2Node_Event_ParticleComponents_2;
	Parms.K2Node_Event_AudioComponents_2 = K2Node_Event_AudioComponents_2;
	Parms.K2Node_Event_BurstCameraShakeInstance_1 = K2Node_Event_BurstCameraShakeInstance_1;
	Parms.K2Node_Event_BurstDecalInstance_1 = K2Node_Event_BurstDecalInstance_1;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_MyTarget_1 = K2Node_Event_MyTarget_1;
	Parms.K2Node_Event_Parameters_1 = K2Node_Event_Parameters_1;
	Parms.K2Node_Event_ParticleComponents_1 = K2Node_Event_ParticleComponents_1;
	Parms.K2Node_Event_AudioComponents_1 = K2Node_Event_AudioComponents_1;
	Parms.K2Node_Event_BurstCameraShakeInstance = K2Node_Event_BurstCameraShakeInstance;
	Parms.K2Node_Event_BurstDecalInstance = K2Node_Event_BurstDecalInstance;
	Parms.K2Node_CustomEvent_OldRail = K2Node_CustomEvent_OldRail;
	Parms.K2Node_CustomEvent_NewRail = K2Node_CustomEvent_NewRail;
	Parms.K2Node_DynamicCast_AsBGA_Grind_Rail = K2Node_DynamicCast_AsBGA_Grind_Rail;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsLocallyViewed_ReturnValue = CallFunc_IsLocallyViewed_ReturnValue;
	Parms.CallFunc_SetBoolParameter_self_CastInput = CallFunc_SetBoolParameter_self_CastInput;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.K2Node_Event_bNewState = K2Node_Event_bNewState;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_GetConsoleVariableFloatValue_ReturnValue = CallFunc_GetConsoleVariableFloatValue_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_Event_MyTarget = K2Node_Event_MyTarget;
	Parms.K2Node_Event_Parameters = K2Node_Event_Parameters;
	Parms.K2Node_Event_ParticleComponents = K2Node_Event_ParticleComponents;
	Parms.K2Node_Event_AudioComponents = K2Node_Event_AudioComponents;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn_1 = K2Node_DynamicCast_AsFort_Player_Pawn_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
