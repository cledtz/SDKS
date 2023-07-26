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


// Function GrindRailRuntime.FortGrindRail.UpdateTransientComponentTransforms
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// TArray<class USceneComponent*>     TransientSceneComponents                                         (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void AFortGrindRail::UpdateTransientComponentTransforms(const TArray<class USceneComponent*>& TransientSceneComponents)
{
	static auto Func = Class->GetFunction("FortGrindRail", "UpdateTransientComponentTransforms");

	Params::AFortGrindRail_UpdateTransientComponentTransforms_Params Parms;

	Parms.TransientSceneComponents = TransientSceneComponents;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GrindRailRuntime.FortGrindRail.SetupMeshInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USplineMeshComponent*        SplineMeshComponent                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortGrindRail::SetupMeshInfo(class USplineMeshComponent* SplineMeshComponent)
{
	static auto Func = Class->GetFunction("FortGrindRail", "SetupMeshInfo");

	Params::AFortGrindRail_SetupMeshInfo_Params Parms;

	Parms.SplineMeshComponent = SplineMeshComponent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GrindRailRuntime.FortGrindRail.OnRep_DisableBooster
// (Final, Native, Protected)
// Parameters:

void AFortGrindRail::OnRep_DisableBooster()
{
	static auto Func = Class->GetFunction("FortGrindRail", "OnRep_DisableBooster");

	Params::AFortGrindRail_OnRep_DisableBooster_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GrindRailRuntime.FortGrindRail.OnPlaylistDataReady
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class AFortGameStateAthena*        GameState                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPlaylist*               Playlist                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void AFortGrindRail::OnPlaylistDataReady(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags)
{
	static auto Func = Class->GetFunction("FortGrindRail", "OnPlaylistDataReady");

	Params::AFortGrindRail_OnPlaylistDataReady_Params Parms;

	Parms.GameState = GameState;
	Parms.Playlist = Playlist;
	Parms.PlaylistContextTags = PlaylistContextTags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GrindRailRuntime.FortGrindRail.OnPlayerEndedGrinding
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*             Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortGrindRail::OnPlayerEndedGrinding(class AFortPlayerPawn* Pawn)
{
	static auto Func = Class->GetFunction("FortGrindRail", "OnPlayerEndedGrinding");

	Params::AFortGrindRail_OnPlayerEndedGrinding_Params Parms;

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GrindRailRuntime.FortGrindRail.OnPlayerBeganGrinding
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*             GrindingPawn                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortGrindRail::OnPlayerBeganGrinding(class AFortPlayerPawn* GrindingPawn)
{
	static auto Func = Class->GetFunction("FortGrindRail", "OnPlayerBeganGrinding");

	Params::AFortGrindRail_OnPlayerBeganGrinding_Params Parms;

	Parms.GrindingPawn = GrindingPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GrindRailRuntime.FortGrindRail.NativeGetNextPositionToGrind
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// float                              DistanceToTravel                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CurrentDistanceAlongSpline                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RightLeanValue                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutNextLocation                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bGotToEnd                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NextLocationOnRail                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGrindRailBoosterMode   BoosterMode                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bHitObstacle                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNewRail                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DistanceAlongNewRail                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortGrindRail*              TheNewRail                                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNewRailReverseDirection                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortGrindRail::NativeGetNextPositionToGrind(float DistanceToTravel, float CurrentDistanceAlongSpline, float RightLeanValue, struct FVector* OutNextLocation, bool* bGotToEnd, float* NextLocationOnRail, enum class EGrindRailBoosterMode* BoosterMode, bool* bHitObstacle, bool* bNewRail, float* DistanceAlongNewRail, class AFortGrindRail** TheNewRail, bool* bNewRailReverseDirection)
{
	static auto Func = Class->GetFunction("FortGrindRail", "NativeGetNextPositionToGrind");

	Params::AFortGrindRail_NativeGetNextPositionToGrind_Params Parms;

	Parms.DistanceToTravel = DistanceToTravel;
	Parms.CurrentDistanceAlongSpline = CurrentDistanceAlongSpline;
	Parms.RightLeanValue = RightLeanValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutNextLocation != nullptr)
		*OutNextLocation = Parms.OutNextLocation;

	if (bGotToEnd != nullptr)
		*bGotToEnd = Parms.bGotToEnd;

	if (NextLocationOnRail != nullptr)
		*NextLocationOnRail = Parms.NextLocationOnRail;

	if (BoosterMode != nullptr)
		*BoosterMode = Parms.BoosterMode;

	if (bHitObstacle != nullptr)
		*bHitObstacle = Parms.bHitObstacle;

	if (bNewRail != nullptr)
		*bNewRail = Parms.bNewRail;

	if (DistanceAlongNewRail != nullptr)
		*DistanceAlongNewRail = Parms.DistanceAlongNewRail;

	if (TheNewRail != nullptr)
		*TheNewRail = Parms.TheNewRail;

	if (bNewRailReverseDirection != nullptr)
		*bNewRailReverseDirection = Parms.bNewRailReverseDirection;

}


// Function GrindRailRuntime.FortGrindRail.IsTipCapped
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bStartTip                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortGrindRail::IsTipCapped(bool bStartTip)
{
	static auto Func = Class->GetFunction("FortGrindRail", "IsTipCapped");

	Params::AFortGrindRail_IsTipCapped_Params Parms;

	Parms.bStartTip = bStartTip;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GrindRailRuntime.FortGrindRail.IsGrindRailEnabled
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortGrindRail::IsGrindRailEnabled()
{
	static auto Func = Class->GetFunction("FortGrindRail", "IsGrindRailEnabled");

	Params::AFortGrindRail_IsGrindRailEnabled_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GrindRailRuntime.FortGrindRail.HasTailConnection
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortGrindRail::HasTailConnection()
{
	static auto Func = Class->GetFunction("FortGrindRail", "HasTailConnection");

	Params::AFortGrindRail_HasTailConnection_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GrindRailRuntime.FortGrindRail.HasHeadConnection
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortGrindRail::HasHeadConnection()
{
	static auto Func = Class->GetFunction("FortGrindRail", "HasHeadConnection");

	Params::AFortGrindRail_HasHeadConnection_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GrindRailRuntime.FortGrindRail.GenerateMeshesAlongSpline
// (Event, Public, BlueprintEvent)
// Parameters:

void AFortGrindRail::GenerateMeshesAlongSpline()
{
	static auto Func = Class->GetFunction("FortGrindRail", "GenerateMeshesAlongSpline");

	Params::AFortGrindRail_GenerateMeshesAlongSpline_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GrindRailRuntime.FortGrindRail.ForceClearBoosters
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFortGrindRail::ForceClearBoosters()
{
	static auto Func = Class->GetFunction("FortGrindRail", "ForceClearBoosters");

	Params::AFortGrindRail_ForceClearBoosters_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GrindRailRuntime.FortGrindRail.BPRerunConstructionScript
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AFortGrindRail::BPRerunConstructionScript()
{
	static auto Func = Class->GetFunction("FortGrindRail", "BPRerunConstructionScript");

	Params::AFortGrindRail_BPRerunConstructionScript_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GrindRailRuntime.FortGrindRailLayerAnimInstance.HandleBegunGrinding
// (Final, Native, Public, HasDefaults)
// Parameters:
// bool                               bWasAlreadyGrinding                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWasJumpingFromRail                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFromInteraction                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     PreviousPlayerLocation                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGrindRailLayerAnimInstance::HandleBegunGrinding(bool bWasAlreadyGrinding, bool bWasJumpingFromRail, bool bFromInteraction, const struct FVector& PreviousPlayerLocation)
{
	static auto Func = Class->GetFunction("FortGrindRailLayerAnimInstance", "HandleBegunGrinding");

	Params::UFortGrindRailLayerAnimInstance_HandleBegunGrinding_Params Parms;

	Parms.bWasAlreadyGrinding = bWasAlreadyGrinding;
	Parms.bWasJumpingFromRail = bWasJumpingFromRail;
	Parms.bFromInteraction = bFromInteraction;
	Parms.PreviousPlayerLocation = PreviousPlayerLocation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GrindRailRuntime.FortGrindRailLayerAnimInstance.AnimNotify_IdleEnter
// (Final, Native, Public)
// Parameters:
// class UAnimNotify*                 Notify                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGrindRailLayerAnimInstance::AnimNotify_IdleEnter(class UAnimNotify* Notify)
{
	static auto Func = Class->GetFunction("FortGrindRailLayerAnimInstance", "AnimNotify_IdleEnter");

	Params::UFortGrindRailLayerAnimInstance_AnimNotify_IdleEnter_Params Parms;

	Parms.Notify = Notify;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GrindRailRuntime.FortGrindRailLayerAnimInstance.AnimNotify_EntryExit
// (Final, Native, Public)
// Parameters:
// class UAnimNotify*                 Notify                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGrindRailLayerAnimInstance::AnimNotify_EntryExit(class UAnimNotify* Notify)
{
	static auto Func = Class->GetFunction("FortGrindRailLayerAnimInstance", "AnimNotify_EntryExit");

	Params::UFortGrindRailLayerAnimInstance_AnimNotify_EntryExit_Params Parms;

	Parms.Notify = Notify;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GrindRailRuntime.FortGrindRailLayerAnimInstance.AnimNotify_EntryEnter
// (Final, Native, Public)
// Parameters:
// class UAnimNotify*                 Notify                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGrindRailLayerAnimInstance::AnimNotify_EntryEnter(class UAnimNotify* Notify)
{
	static auto Func = Class->GetFunction("FortGrindRailLayerAnimInstance", "AnimNotify_EntryEnter");

	Params::UFortGrindRailLayerAnimInstance_AnimNotify_EntryEnter_Params Parms;

	Parms.Notify = Notify;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GrindRailRuntime.FortGameplayCueNotifyLoop_Grinding.OnForwardChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bNewState                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortGameplayCueNotifyLoop_Grinding::OnForwardChanged(bool bNewState)
{
	static auto Func = Class->GetFunction("FortGameplayCueNotifyLoop_Grinding", "OnForwardChanged");

	Params::AFortGameplayCueNotifyLoop_Grinding_OnForwardChanged_Params Parms;

	Parms.bNewState = bNewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GrindRailRuntime.FortGameplayCueNotifyLoop_Grinding.CacheReferences
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAudioComponent*             InAudioComponent                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFXSystemComponent*          InEffectsComponent                                               (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPlayerPawn*             InPlayerPawn                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPawnComponent_GrindRail*InGrindComponent                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortGameplayCueNotifyLoop_Grinding::CacheReferences(class UAudioComponent* InAudioComponent, class UFXSystemComponent* InEffectsComponent, class AFortPlayerPawn* InPlayerPawn, class UFortPawnComponent_GrindRail* InGrindComponent)
{
	static auto Func = Class->GetFunction("FortGameplayCueNotifyLoop_Grinding", "CacheReferences");

	Params::AFortGameplayCueNotifyLoop_Grinding_CacheReferences_Params Parms;

	Parms.InAudioComponent = InAudioComponent;
	Parms.InEffectsComponent = InEffectsComponent;
	Parms.InPlayerPawn = InPlayerPawn;
	Parms.InGrindComponent = InGrindComponent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.SetMovementStatus
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     NewStatus                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPawnComponent_GrindRail::SetMovementStatus(struct FVector& NewStatus)
{
	static auto Func = Class->GetFunction("FortPawnComponent_GrindRail", "SetMovementStatus");

	Params::UFortPawnComponent_GrindRail_SetMovementStatus_Params Parms;

	Parms.NewStatus = NewStatus;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.SetIsSprinting
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewIsSprinting                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPawnComponent_GrindRail::SetIsSprinting(bool bNewIsSprinting)
{
	static auto Func = Class->GetFunction("FortPawnComponent_GrindRail", "SetIsSprinting");

	Params::UFortPawnComponent_GrindRail_SetIsSprinting_Params Parms;

	Parms.bNewIsSprinting = bNewIsSprinting;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.SetGrindDistanceOnSpline
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewDistanceOnSpline                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPawnComponent_GrindRail::SetGrindDistanceOnSpline(float NewDistanceOnSpline)
{
	static auto Func = Class->GetFunction("FortPawnComponent_GrindRail", "SetGrindDistanceOnSpline");

	Params::UFortPawnComponent_GrindRail_SetGrindDistanceOnSpline_Params Parms;

	Parms.NewDistanceOnSpline = NewDistanceOnSpline;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.SetGrindBaseActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      NewBaseActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPawnComponent_GrindRail::SetGrindBaseActor(class AActor* NewBaseActor)
{
	static auto Func = Class->GetFunction("FortPawnComponent_GrindRail", "SetGrindBaseActor");

	Params::UFortPawnComponent_GrindRail_SetGrindBaseActor_Params Parms;

	Parms.NewBaseActor = NewBaseActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.ServerUpdateWeaponHolstered
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:
// bool                               bNewHolstered                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPlayEquipAnim                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPawnComponent_GrindRail::ServerUpdateWeaponHolstered(bool bNewHolstered, bool bPlayEquipAnim)
{
	static auto Func = Class->GetFunction("FortPawnComponent_GrindRail", "ServerUpdateWeaponHolstered");

	Params::UFortPawnComponent_GrindRail_ServerUpdateWeaponHolstered_Params Parms;

	Parms.bNewHolstered = bNewHolstered;
	Parms.bPlayEquipAnim = bPlayEquipAnim;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.RemoveMoveIgnoreActors
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortPawnComponent_GrindRail::RemoveMoveIgnoreActors()
{
	static auto Func = Class->GetFunction("FortPawnComponent_GrindRail", "RemoveMoveIgnoreActors");

	Params::UFortPawnComponent_GrindRail_RemoveMoveIgnoreActors_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.OnWalkingBaseChanged
// (Final, Native, Protected)
// Parameters:
// class AFortPawn*                   Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      NewBase                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPawnComponent_GrindRail::OnWalkingBaseChanged(class AFortPawn* Pawn, class AActor* NewBase)
{
	static auto Func = Class->GetFunction("FortPawnComponent_GrindRail", "OnWalkingBaseChanged");

	Params::UFortPawnComponent_GrindRail_OnWalkingBaseChanged_Params Parms;

	Parms.Pawn = Pawn;
	Parms.NewBase = NewBase;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.OnRep_IsSprinting
// (Final, Native, Protected)
// Parameters:

void UFortPawnComponent_GrindRail::OnRep_IsSprinting()
{
	static auto Func = Class->GetFunction("FortPawnComponent_GrindRail", "OnRep_IsSprinting");

	Params::UFortPawnComponent_GrindRail_OnRep_IsSprinting_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.OnRep_GrindingRail
// (Final, Native, Protected)
// Parameters:

void UFortPawnComponent_GrindRail::OnRep_GrindingRail()
{
	static auto Func = Class->GetFunction("FortPawnComponent_GrindRail", "OnRep_GrindingRail");

	Params::UFortPawnComponent_GrindRail_OnRep_GrindingRail_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.OnRep_CurrentBoosterMode
// (Final, Native, Protected)
// Parameters:
// enum class EGrindRailBoosterMode   PreviousBoosterMode                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPawnComponent_GrindRail::OnRep_CurrentBoosterMode(enum class EGrindRailBoosterMode PreviousBoosterMode)
{
	static auto Func = Class->GetFunction("FortPawnComponent_GrindRail", "OnRep_CurrentBoosterMode");

	Params::UFortPawnComponent_GrindRail_OnRep_CurrentBoosterMode_Params Parms;

	Parms.PreviousBoosterMode = PreviousBoosterMode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.OnReloadInput
// (Final, Native, Protected)
// Parameters:

void UFortPawnComponent_GrindRail::OnReloadInput()
{
	static auto Func = Class->GetFunction("FortPawnComponent_GrindRail", "OnReloadInput");

	Params::UFortPawnComponent_GrindRail_OnReloadInput_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.OnMovementModeChanged
// (Final, Native, Protected)
// Parameters:
// class ACharacter*                  InCharacter                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMovementMode           PrevMovementMode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              PreviousCustomMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPawnComponent_GrindRail::OnMovementModeChanged(class ACharacter* InCharacter, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode)
{
	static auto Func = Class->GetFunction("FortPawnComponent_GrindRail", "OnMovementModeChanged");

	Params::UFortPawnComponent_GrindRail_OnMovementModeChanged_Params Parms;

	Parms.InCharacter = InCharacter;
	Parms.PrevMovementMode = PrevMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.OnJumpInput
// (Final, Native, Protected)
// Parameters:
// bool                               bPressed                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPawnComponent_GrindRail::OnJumpInput(bool bPressed)
{
	static auto Func = Class->GetFunction("FortPawnComponent_GrindRail", "OnJumpInput");

	Params::UFortPawnComponent_GrindRail_OnJumpInput_Params Parms;

	Parms.bPressed = bPressed;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.OnIgnoredBuildingEndPlay
// (Final, Native, Protected)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EEndPlayReason          EndPlayReason                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPawnComponent_GrindRail::OnIgnoredBuildingEndPlay(class AActor* Actor, enum class EEndPlayReason EndPlayReason)
{
	static auto Func = Class->GetFunction("FortPawnComponent_GrindRail", "OnIgnoredBuildingEndPlay");

	Params::UFortPawnComponent_GrindRail_OnIgnoredBuildingEndPlay_Params Parms;

	Parms.Actor = Actor;
	Parms.EndPlayReason = EndPlayReason;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.OnBaseMeshReady
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*             Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMeshComponent*      MeshComponent                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPawnComponent_GrindRail::OnBaseMeshReady(class AFortPlayerPawn* Pawn, class USkeletalMeshComponent* MeshComponent)
{
	static auto Func = Class->GetFunction("FortPawnComponent_GrindRail", "OnBaseMeshReady");

	Params::UFortPawnComponent_GrindRail_OnBaseMeshReady_Params Parms;

	Parms.Pawn = Pawn;
	Parms.MeshComponent = MeshComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.NativeIsShooting
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortPawnComponent_GrindRail::NativeIsShooting()
{
	static auto Func = Class->GetFunction("FortPawnComponent_GrindRail", "NativeIsShooting");

	Params::UFortPawnComponent_GrindRail_NativeIsShooting_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.IsWeaponADS
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortPawnComponent_GrindRail::IsWeaponADS()
{
	static auto Func = Class->GetFunction("FortPawnComponent_GrindRail", "IsWeaponADS");

	Params::UFortPawnComponent_GrindRail_IsWeaponADS_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.IsWeaponActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortPawnComponent_GrindRail::IsWeaponActive()
{
	static auto Func = Class->GetFunction("FortPawnComponent_GrindRail", "IsWeaponActive");

	Params::UFortPawnComponent_GrindRail_IsWeaponActive_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.IsUsingToggleSprint
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortPawnComponent_GrindRail::IsUsingToggleSprint()
{
	static auto Func = Class->GetFunction("FortPawnComponent_GrindRail", "IsUsingToggleSprint");

	Params::UFortPawnComponent_GrindRail_IsUsingToggleSprint_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.IsGrinding
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortPawnComponent_GrindRail::IsGrinding()
{
	static auto Func = Class->GetFunction("FortPawnComponent_GrindRail", "IsGrinding");

	Params::UFortPawnComponent_GrindRail_IsGrinding_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.HandleSprintInput
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bPressed                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPawnComponent_GrindRail::HandleSprintInput(bool bPressed)
{
	static auto Func = Class->GetFunction("FortPawnComponent_GrindRail", "HandleSprintInput");

	Params::UFortPawnComponent_GrindRail_HandleSprintInput_Params Parms;

	Parms.bPressed = bPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.HandleRailJump
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortPawnComponent_GrindRail::HandleRailJump()
{
	static auto Func = Class->GetFunction("FortPawnComponent_GrindRail", "HandleRailJump");

	Params::UFortPawnComponent_GrindRail_HandleRailJump_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.HandleJumpOffEnd
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortPawnComponent_GrindRail::HandleJumpOffEnd()
{
	static auto Func = Class->GetFunction("FortPawnComponent_GrindRail", "HandleJumpOffEnd");

	Params::UFortPawnComponent_GrindRail_HandleJumpOffEnd_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.HandleHitWhenGrinding
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UFortPawnComponent_GrindRail::HandleHitWhenGrinding(struct FHitResult& Hit)
{
	static auto Func = Class->GetFunction("FortPawnComponent_GrindRail", "HandleHitWhenGrinding");

	Params::UFortPawnComponent_GrindRail_HandleHitWhenGrinding_Params Parms;

	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.HandleGrindingEndedFromReplication
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortPawnComponent_GrindRail::HandleGrindingEndedFromReplication()
{
	static auto Func = Class->GetFunction("FortPawnComponent_GrindRail", "HandleGrindingEndedFromReplication");

	Params::UFortPawnComponent_GrindRail_HandleGrindingEndedFromReplication_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.HandleGrindingEnded
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortPawnComponent_GrindRail::HandleGrindingEnded()
{
	static auto Func = Class->GetFunction("FortPawnComponent_GrindRail", "HandleGrindingEnded");

	Params::UFortPawnComponent_GrindRail_HandleGrindingEnded_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.HandleGrindingBegun
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortPawnComponent_GrindRail::HandleGrindingBegun()
{
	static auto Func = Class->GetFunction("FortPawnComponent_GrindRail", "HandleGrindingBegun");

	Params::UFortPawnComponent_GrindRail_HandleGrindingBegun_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.HandleGrindFinishedAfterJumping
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortPawnComponent_GrindRail::HandleGrindFinishedAfterJumping()
{
	static auto Func = Class->GetFunction("FortPawnComponent_GrindRail", "HandleGrindFinishedAfterJumping");

	Params::UFortPawnComponent_GrindRail_HandleGrindFinishedAfterJumping_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.GetWantsToGrind
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortPawnComponent_GrindRail::GetWantsToGrind()
{
	static auto Func = Class->GetFunction("FortPawnComponent_GrindRail", "GetWantsToGrind");

	Params::UFortPawnComponent_GrindRail_GetWantsToGrind_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.GetSpeedHardCap
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortPawnComponent_GrindRail::GetSpeedHardCap()
{
	static auto Func = Class->GetFunction("FortPawnComponent_GrindRail", "GetSpeedHardCap");

	Params::UFortPawnComponent_GrindRail_GetSpeedHardCap_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.GetMovementStatus
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UFortPawnComponent_GrindRail::GetMovementStatus()
{
	static auto Func = Class->GetFunction("FortPawnComponent_GrindRail", "GetMovementStatus");

	Params::UFortPawnComponent_GrindRail_GetMovementStatus_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.GetLeanForwardSpeedNormalized
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortPawnComponent_GrindRail::GetLeanForwardSpeedNormalized()
{
	static auto Func = Class->GetFunction("FortPawnComponent_GrindRail", "GetLeanForwardSpeedNormalized");

	Params::UFortPawnComponent_GrindRail_GetLeanForwardSpeedNormalized_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.GetHorizontalSplineAngleDeltaDegrees
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortPawnComponent_GrindRail::GetHorizontalSplineAngleDeltaDegrees()
{
	static auto Func = Class->GetFunction("FortPawnComponent_GrindRail", "GetHorizontalSplineAngleDeltaDegrees");

	Params::UFortPawnComponent_GrindRail_GetHorizontalSplineAngleDeltaDegrees_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.GetGrindRequestJump
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortPawnComponent_GrindRail::GetGrindRequestJump()
{
	static auto Func = Class->GetFunction("FortPawnComponent_GrindRail", "GetGrindRequestJump");

	Params::UFortPawnComponent_GrindRail_GetGrindRequestJump_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.GetGrindDistanceOnSpline
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortPawnComponent_GrindRail::GetGrindDistanceOnSpline()
{
	static auto Func = Class->GetFunction("FortPawnComponent_GrindRail", "GetGrindDistanceOnSpline");

	Params::UFortPawnComponent_GrindRail_GetGrindDistanceOnSpline_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.GetGrindBaseActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UFortPawnComponent_GrindRail::GetGrindBaseActor()
{
	static auto Func = Class->GetFunction("FortPawnComponent_GrindRail", "GetGrindBaseActor");

	Params::UFortPawnComponent_GrindRail_GetGrindBaseActor_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.GetCameraOrientedLeanValues
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              RawLeanForward                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RawLeanRight                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OrientedLeanForward                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OrientedLeanRight                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPawnComponent_GrindRail::GetCameraOrientedLeanValues(float RawLeanForward, float RawLeanRight, float* OrientedLeanForward, float* OrientedLeanRight)
{
	static auto Func = Class->GetFunction("FortPawnComponent_GrindRail", "GetCameraOrientedLeanValues");

	Params::UFortPawnComponent_GrindRail_GetCameraOrientedLeanValues_Params Parms;

	Parms.RawLeanForward = RawLeanForward;
	Parms.RawLeanRight = RawLeanRight;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OrientedLeanForward != nullptr)
		*OrientedLeanForward = Parms.OrientedLeanForward;

	if (OrientedLeanRight != nullptr)
		*OrientedLeanRight = Parms.OrientedLeanRight;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.EndGrinding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bSetEndMovementMode                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPawnComponent_GrindRail::EndGrinding(bool bSetEndMovementMode)
{
	static auto Func = Class->GetFunction("FortPawnComponent_GrindRail", "EndGrinding");

	Params::UFortPawnComponent_GrindRail_EndGrinding_Params Parms;

	Parms.bSetEndMovementMode = bSetEndMovementMode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.DrawDebugHUD
// (Final, Native, Protected, Const)
// Parameters:
// class AHUD*                        HUD                                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCanvas*                     Canvas                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPawnComponent_GrindRail::DrawDebugHUD(class AHUD* HUD, class UCanvas* Canvas)
{
	static auto Func = Class->GetFunction("FortPawnComponent_GrindRail", "DrawDebugHUD");

	Params::UFortPawnComponent_GrindRail_DrawDebugHUD_Params Parms;

	Parms.HUD = HUD;
	Parms.Canvas = Canvas;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.CanBeginGrinding
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortPawnComponent_GrindRail::CanBeginGrinding()
{
	static auto Func = Class->GetFunction("FortPawnComponent_GrindRail", "CanBeginGrinding");

	Params::UFortPawnComponent_GrindRail_CanBeginGrinding_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.CalculateVelocity
// (Event, Public, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bReplayingMovement                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutVelocity                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPawnComponent_GrindRail::CalculateVelocity(float DeltaTime, bool bReplayingMovement, struct FVector* OutVelocity)
{
	static auto Func = Class->GetFunction("FortPawnComponent_GrindRail", "CalculateVelocity");

	Params::UFortPawnComponent_GrindRail_CalculateVelocity_Params Parms;

	Parms.DeltaTime = DeltaTime;
	Parms.bReplayingMovement = bReplayingMovement;

	UObject::ProcessEvent(Func, &Parms);

	if (OutVelocity != nullptr)
		*OutVelocity = Parms.OutVelocity;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.BeginGrinding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AFortGrindRail*              GrindRail                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OptionalStartDistance                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFromInteraction                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPawnComponent_GrindRail::BeginGrinding(class AFortGrindRail* GrindRail, float OptionalStartDistance, bool bFromInteraction)
{
	static auto Func = Class->GetFunction("FortPawnComponent_GrindRail", "BeginGrinding");

	Params::UFortPawnComponent_GrindRail_BeginGrinding_Params Parms;

	Parms.GrindRail = GrindRail;
	Parms.OptionalStartDistance = OptionalStartDistance;
	Parms.bFromInteraction = bFromInteraction;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.AttemptDestroyVehicleWhileGrinding
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class AFortAthenaVehicle*          Vehicle                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortPawnComponent_GrindRail::AttemptDestroyVehicleWhileGrinding(class AFortAthenaVehicle* Vehicle)
{
	static auto Func = Class->GetFunction("FortPawnComponent_GrindRail", "AttemptDestroyVehicleWhileGrinding");

	Params::UFortPawnComponent_GrindRail_AttemptDestroyVehicleWhileGrinding_Params Parms;

	Parms.Vehicle = Vehicle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.AddMoveIgnoreActor
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class ABuildingActor*              BuildingActor                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPawnComponent_GrindRail::AddMoveIgnoreActor(class ABuildingActor* BuildingActor)
{
	static auto Func = Class->GetFunction("FortPawnComponent_GrindRail", "AddMoveIgnoreActor");

	Params::UFortPawnComponent_GrindRail_AddMoveIgnoreActor_Params Parms;

	Parms.BuildingActor = BuildingActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
