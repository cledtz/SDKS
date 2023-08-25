#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GrindRailRuntime.FortCameraModifier_Grinding
// (None)

class UClass* UFortCameraModifier_Grinding::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCameraModifier_Grinding");

	return Clss;
}


// FortCameraModifier_Grinding GrindRailRuntime.Default__FortCameraModifier_Grinding
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCameraModifier_Grinding* UFortCameraModifier_Grinding::GetDefaultObj()
{
	static class UFortCameraModifier_Grinding* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCameraModifier_Grinding*>(UFortCameraModifier_Grinding::StaticClass()->DefaultObject);

	return Default;
}


// Class GrindRailRuntime.FortGrindRail
// (Actor)

class UClass* UFortGrindRail::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGrindRail");

	return Clss;
}


// FortGrindRail GrindRailRuntime.Default__FortGrindRail
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGrindRail* UFortGrindRail::GetDefaultObj()
{
	static class UFortGrindRail* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGrindRail*>(UFortGrindRail::StaticClass()->DefaultObject);

	return Default;
}


// Function GrindRailRuntime.FortGrindRail.UpdateTransientComponentTransforms
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// TArray<class USceneComponent*>     TransientSceneComponents                                         (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UFortGrindRail::UpdateTransientComponentTransforms(const TArray<class USceneComponent*>& TransientSceneComponents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGrindRail", "UpdateTransientComponentTransforms");

	Params::UFortGrindRail_UpdateTransientComponentTransforms_Params Parms{};

	Parms.TransientSceneComponents = TransientSceneComponents;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GrindRailRuntime.FortGrindRail.SetupMeshInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USplineMeshComponent*        SplineMeshComponent                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGrindRail::SetupMeshInfo(class USplineMeshComponent* SplineMeshComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGrindRail", "SetupMeshInfo");

	Params::UFortGrindRail_SetupMeshInfo_Params Parms{};

	Parms.SplineMeshComponent = SplineMeshComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GrindRailRuntime.FortGrindRail.OnRep_DisableBooster
// (Final, Native, Protected)
// Parameters:

void UFortGrindRail::OnRep_DisableBooster()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGrindRail", "OnRep_DisableBooster");

	Params::UFortGrindRail_OnRep_DisableBooster_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GrindRailRuntime.FortGrindRail.OnPlaylistDataReady
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class UFortGameStateAthena*        GameState                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPlaylist*               Playlist                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortGrindRail::OnPlaylistDataReady(class UFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGrindRail", "OnPlaylistDataReady");

	Params::UFortGrindRail_OnPlaylistDataReady_Params Parms{};

	Parms.GameState = GameState;
	Parms.Playlist = Playlist;
	Parms.PlaylistContextTags = PlaylistContextTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GrindRailRuntime.FortGrindRail.OnPlayerEndedGrinding
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortPlayerPawn*             Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGrindRail::OnPlayerEndedGrinding(class UFortPlayerPawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGrindRail", "OnPlayerEndedGrinding");

	Params::UFortGrindRail_OnPlayerEndedGrinding_Params Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GrindRailRuntime.FortGrindRail.OnPlayerBeganGrinding
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortPlayerPawn*             GrindingPawn                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGrindRail::OnPlayerBeganGrinding(class UFortPlayerPawn* GrindingPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGrindRail", "OnPlayerBeganGrinding");

	Params::UFortGrindRail_OnPlayerBeganGrinding_Params Parms{};

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
// class UFortGrindRail*              TheNewRail                                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNewRailReverseDirection                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGrindRail::NativeGetNextPositionToGrind(float DistanceToTravel, float CurrentDistanceAlongSpline, float RightLeanValue, struct FVector* OutNextLocation, bool* bGotToEnd, float* NextLocationOnRail, enum class EGrindRailBoosterMode* BoosterMode, bool* bHitObstacle, bool* bNewRail, float* DistanceAlongNewRail, class UFortGrindRail** TheNewRail, bool* bNewRailReverseDirection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGrindRail", "NativeGetNextPositionToGrind");

	Params::UFortGrindRail_NativeGetNextPositionToGrind_Params Parms{};

	Parms.DistanceToTravel = DistanceToTravel;
	Parms.CurrentDistanceAlongSpline = CurrentDistanceAlongSpline;
	Parms.RightLeanValue = RightLeanValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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

bool UFortGrindRail::IsTipCapped(bool bStartTip)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGrindRail", "IsTipCapped");

	Params::UFortGrindRail_IsTipCapped_Params Parms{};

	Parms.bStartTip = bStartTip;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GrindRailRuntime.FortGrindRail.IsGrindRailEnabled
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortGrindRail::IsGrindRailEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGrindRail", "IsGrindRailEnabled");

	Params::UFortGrindRail_IsGrindRailEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GrindRailRuntime.FortGrindRail.HasTailConnection
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortGrindRail::HasTailConnection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGrindRail", "HasTailConnection");

	Params::UFortGrindRail_HasTailConnection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GrindRailRuntime.FortGrindRail.HasHeadConnection
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortGrindRail::HasHeadConnection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGrindRail", "HasHeadConnection");

	Params::UFortGrindRail_HasHeadConnection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GrindRailRuntime.FortGrindRail.GetSpeedSettingsOverride
// (Native, Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FGrindRailSpeedSettings     SpeedSettingsOverride                                            (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortGrindRail::GetSpeedSettingsOverride(struct FGrindRailSpeedSettings* SpeedSettingsOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGrindRail", "GetSpeedSettingsOverride");

	Params::UFortGrindRail_GetSpeedSettingsOverride_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SpeedSettingsOverride != nullptr)
		*SpeedSettingsOverride = Parms.SpeedSettingsOverride;

	return Parms.ReturnValue;

}


// Function GrindRailRuntime.FortGrindRail.GenerateMeshesAlongSpline
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortGrindRail::GenerateMeshesAlongSpline()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGrindRail", "GenerateMeshesAlongSpline");

	Params::UFortGrindRail_GenerateMeshesAlongSpline_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GrindRailRuntime.FortGrindRail.ForceClearBoosters
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortGrindRail::ForceClearBoosters()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGrindRail", "ForceClearBoosters");

	Params::UFortGrindRail_ForceClearBoosters_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GrindRailRuntime.FortGrindRail.BPRerunConstructionScript
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortGrindRail::BPRerunConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGrindRail", "BPRerunConstructionScript");

	Params::UFortGrindRail_BPRerunConstructionScript_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GrindRailRuntime.FortGrindRail.AllowSprinting
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortGrindRail::AllowSprinting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGrindRail", "AllowSprinting");

	Params::UFortGrindRail_AllowSprinting_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GrindRailRuntime.FortGrindRailConnector
// (Actor)

class UClass* UFortGrindRailConnector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGrindRailConnector");

	return Clss;
}


// FortGrindRailConnector GrindRailRuntime.Default__FortGrindRailConnector
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGrindRailConnector* UFortGrindRailConnector::GetDefaultObj()
{
	static class UFortGrindRailConnector* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGrindRailConnector*>(UFortGrindRailConnector::StaticClass()->DefaultObject);

	return Default;
}


// Class GrindRailRuntime.FortGrindRailLayerAnimInstance
// (None)

class UClass* UFortGrindRailLayerAnimInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGrindRailLayerAnimInstance");

	return Clss;
}


// FortGrindRailLayerAnimInstance GrindRailRuntime.Default__FortGrindRailLayerAnimInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGrindRailLayerAnimInstance* UFortGrindRailLayerAnimInstance::GetDefaultObj()
{
	static class UFortGrindRailLayerAnimInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGrindRailLayerAnimInstance*>(UFortGrindRailLayerAnimInstance::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGrindRailLayerAnimInstance", "HandleBegunGrinding");

	Params::UFortGrindRailLayerAnimInstance_HandleBegunGrinding_Params Parms{};

	Parms.bWasAlreadyGrinding = bWasAlreadyGrinding;
	Parms.bWasJumpingFromRail = bWasJumpingFromRail;
	Parms.bFromInteraction = bFromInteraction;
	Parms.PreviousPlayerLocation = PreviousPlayerLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GrindRailRuntime.FortGrindRailLayerAnimInstance.AnimNotify_IdleEnter
// (Final, Native, Public)
// Parameters:
// class UAnimNotify*                 Notify                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGrindRailLayerAnimInstance::AnimNotify_IdleEnter(class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGrindRailLayerAnimInstance", "AnimNotify_IdleEnter");

	Params::UFortGrindRailLayerAnimInstance_AnimNotify_IdleEnter_Params Parms{};

	Parms.Notify = Notify;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GrindRailRuntime.FortGrindRailLayerAnimInstance.AnimNotify_EntryExit
// (Final, Native, Public)
// Parameters:
// class UAnimNotify*                 Notify                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGrindRailLayerAnimInstance::AnimNotify_EntryExit(class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGrindRailLayerAnimInstance", "AnimNotify_EntryExit");

	Params::UFortGrindRailLayerAnimInstance_AnimNotify_EntryExit_Params Parms{};

	Parms.Notify = Notify;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GrindRailRuntime.FortGrindRailLayerAnimInstance.AnimNotify_EntryEnter
// (Final, Native, Public)
// Parameters:
// class UAnimNotify*                 Notify                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGrindRailLayerAnimInstance::AnimNotify_EntryEnter(class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGrindRailLayerAnimInstance", "AnimNotify_EntryEnter");

	Params::UFortGrindRailLayerAnimInstance_AnimNotify_EntryEnter_Params Parms{};

	Parms.Notify = Notify;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GrindRailRuntime.GrindRailEditorComponent
// (None)

class UClass* UGrindRailEditorComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GrindRailEditorComponent");

	return Clss;
}


// GrindRailEditorComponent GrindRailRuntime.Default__GrindRailEditorComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGrindRailEditorComponent* UGrindRailEditorComponent::GetDefaultObj()
{
	static class UGrindRailEditorComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGrindRailEditorComponent*>(UGrindRailEditorComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class GrindRailRuntime.GrindRailMovementControls
// (None)

class UClass* UGrindRailMovementControls::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GrindRailMovementControls");

	return Clss;
}


// GrindRailMovementControls GrindRailRuntime.Default__GrindRailMovementControls
// (Public, ClassDefaultObject, ArchetypeObject)

class UGrindRailMovementControls* UGrindRailMovementControls::GetDefaultObj()
{
	static class UGrindRailMovementControls* Default = nullptr;

	if (!Default)
		Default = static_cast<UGrindRailMovementControls*>(UGrindRailMovementControls::StaticClass()->DefaultObject);

	return Default;
}


// Class GrindRailRuntime.FortAthenaAIBotEvaluator_GrindRail
// (None)

class UClass* UFortAthenaAIBotEvaluator_GrindRail::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_GrindRail");

	return Clss;
}


// FortAthenaAIBotEvaluator_GrindRail GrindRailRuntime.Default__FortAthenaAIBotEvaluator_GrindRail
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_GrindRail* UFortAthenaAIBotEvaluator_GrindRail::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_GrindRail* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_GrindRail*>(UFortAthenaAIBotEvaluator_GrindRail::StaticClass()->DefaultObject);

	return Default;
}


// Class GrindRailRuntime.FortGameplayCueNotifyLoop_Grinding
// (Actor)

class UClass* UFortGameplayCueNotifyLoop_Grinding::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGameplayCueNotifyLoop_Grinding");

	return Clss;
}


// FortGameplayCueNotifyLoop_Grinding GrindRailRuntime.Default__FortGameplayCueNotifyLoop_Grinding
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGameplayCueNotifyLoop_Grinding* UFortGameplayCueNotifyLoop_Grinding::GetDefaultObj()
{
	static class UFortGameplayCueNotifyLoop_Grinding* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGameplayCueNotifyLoop_Grinding*>(UFortGameplayCueNotifyLoop_Grinding::StaticClass()->DefaultObject);

	return Default;
}


// Function GrindRailRuntime.FortGameplayCueNotifyLoop_Grinding.OnForwardChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bNewState                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGameplayCueNotifyLoop_Grinding::OnForwardChanged(bool bNewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayCueNotifyLoop_Grinding", "OnForwardChanged");

	Params::UFortGameplayCueNotifyLoop_Grinding_OnForwardChanged_Params Parms{};

	Parms.bNewState = bNewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GrindRailRuntime.FortGameplayCueNotifyLoop_Grinding.CacheReferences
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAudioComponent*             InAudioComponent                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFXSystemComponent*          InEffectsComponent                                               (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPlayerPawn*             InPlayerPawn                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPawnComponent_GrindRail*InGrindComponent                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGameplayCueNotifyLoop_Grinding::CacheReferences(class UAudioComponent* InAudioComponent, class UFXSystemComponent* InEffectsComponent, class UFortPlayerPawn* InPlayerPawn, class UFortPawnComponent_GrindRail* InGrindComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayCueNotifyLoop_Grinding", "CacheReferences");

	Params::UFortGameplayCueNotifyLoop_Grinding_CacheReferences_Params Parms{};

	Parms.InAudioComponent = InAudioComponent;
	Parms.InEffectsComponent = InEffectsComponent;
	Parms.InPlayerPawn = InPlayerPawn;
	Parms.InGrindComponent = InGrindComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GrindRailRuntime.FortPawnComponent_GrindRail
// (None)

class UClass* UFortPawnComponent_GrindRail::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPawnComponent_GrindRail");

	return Clss;
}


// FortPawnComponent_GrindRail GrindRailRuntime.Default__FortPawnComponent_GrindRail
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPawnComponent_GrindRail* UFortPawnComponent_GrindRail::GetDefaultObj()
{
	static class UFortPawnComponent_GrindRail* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPawnComponent_GrindRail*>(UFortPawnComponent_GrindRail::StaticClass()->DefaultObject);

	return Default;
}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.SetMovementStatus
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     NewStatus                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPawnComponent_GrindRail::SetMovementStatus(struct FVector& NewStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "SetMovementStatus");

	Params::UFortPawnComponent_GrindRail_SetMovementStatus_Params Parms{};

	Parms.NewStatus = NewStatus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.SetIsSprinting
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewIsSprinting                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPawnComponent_GrindRail::SetIsSprinting(bool bNewIsSprinting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "SetIsSprinting");

	Params::UFortPawnComponent_GrindRail_SetIsSprinting_Params Parms{};

	Parms.bNewIsSprinting = bNewIsSprinting;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.SetGrindDistanceOnSpline
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewDistanceOnSpline                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPawnComponent_GrindRail::SetGrindDistanceOnSpline(float NewDistanceOnSpline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "SetGrindDistanceOnSpline");

	Params::UFortPawnComponent_GrindRail_SetGrindDistanceOnSpline_Params Parms{};

	Parms.NewDistanceOnSpline = NewDistanceOnSpline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.SetGrindBaseActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      NewBaseActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPawnComponent_GrindRail::SetGrindBaseActor(class UActor* NewBaseActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "SetGrindBaseActor");

	Params::UFortPawnComponent_GrindRail_SetGrindBaseActor_Params Parms{};

	Parms.NewBaseActor = NewBaseActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.ServerUpdateWeaponHolstered
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:
// bool                               bNewHolstered                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPlayEquipAnim                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPawnComponent_GrindRail::ServerUpdateWeaponHolstered(bool bNewHolstered, bool bPlayEquipAnim)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "ServerUpdateWeaponHolstered");

	Params::UFortPawnComponent_GrindRail_ServerUpdateWeaponHolstered_Params Parms{};

	Parms.bNewHolstered = bNewHolstered;
	Parms.bPlayEquipAnim = bPlayEquipAnim;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.RemoveMoveIgnoreActors
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortPawnComponent_GrindRail::RemoveMoveIgnoreActors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "RemoveMoveIgnoreActors");

	Params::UFortPawnComponent_GrindRail_RemoveMoveIgnoreActors_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.OnWalkingBaseChanged
// (Final, Native, Protected)
// Parameters:
// class UFortPawn*                   Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      NewBase                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPawnComponent_GrindRail::OnWalkingBaseChanged(class UFortPawn* Pawn, class UActor* NewBase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "OnWalkingBaseChanged");

	Params::UFortPawnComponent_GrindRail_OnWalkingBaseChanged_Params Parms{};

	Parms.Pawn = Pawn;
	Parms.NewBase = NewBase;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.OnRep_IsSprinting
// (Final, Native, Protected)
// Parameters:

void UFortPawnComponent_GrindRail::OnRep_IsSprinting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "OnRep_IsSprinting");

	Params::UFortPawnComponent_GrindRail_OnRep_IsSprinting_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.OnRep_GrindingRail
// (Final, Native, Protected)
// Parameters:

void UFortPawnComponent_GrindRail::OnRep_GrindingRail()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "OnRep_GrindingRail");

	Params::UFortPawnComponent_GrindRail_OnRep_GrindingRail_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.OnRep_CurrentBoosterMode
// (Final, Native, Protected)
// Parameters:
// enum class EGrindRailBoosterMode   PreviousBoosterMode                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPawnComponent_GrindRail::OnRep_CurrentBoosterMode(enum class EGrindRailBoosterMode PreviousBoosterMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "OnRep_CurrentBoosterMode");

	Params::UFortPawnComponent_GrindRail_OnRep_CurrentBoosterMode_Params Parms{};

	Parms.PreviousBoosterMode = PreviousBoosterMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.OnReloadInput
// (Final, Native, Protected)
// Parameters:

void UFortPawnComponent_GrindRail::OnReloadInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "OnReloadInput");

	Params::UFortPawnComponent_GrindRail_OnReloadInput_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.OnMovementModeChanged
// (Final, Native, Protected)
// Parameters:
// class UCharacter*                  InCharacter                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMovementMode           PrevMovementMode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              PreviousCustomMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPawnComponent_GrindRail::OnMovementModeChanged(class UCharacter* InCharacter, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "OnMovementModeChanged");

	Params::UFortPawnComponent_GrindRail_OnMovementModeChanged_Params Parms{};

	Parms.InCharacter = InCharacter;
	Parms.PrevMovementMode = PrevMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.OnJumpInput
// (Final, Native, Protected)
// Parameters:
// bool                               bPressed                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPawnComponent_GrindRail::OnJumpInput(bool bPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "OnJumpInput");

	Params::UFortPawnComponent_GrindRail_OnJumpInput_Params Parms{};

	Parms.bPressed = bPressed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.OnIgnoredBuildingEndPlay
// (Final, Native, Protected)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EEndPlayReason          EndPlayReason                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPawnComponent_GrindRail::OnIgnoredBuildingEndPlay(class UActor* Actor, enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "OnIgnoredBuildingEndPlay");

	Params::UFortPawnComponent_GrindRail_OnIgnoredBuildingEndPlay_Params Parms{};

	Parms.Actor = Actor;
	Parms.EndPlayReason = EndPlayReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.OnBaseMeshReady
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortPlayerPawn*             Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMeshComponent*      MeshComponent                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPawnComponent_GrindRail::OnBaseMeshReady(class UFortPlayerPawn* Pawn, class USkeletalMeshComponent* MeshComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "OnBaseMeshReady");

	Params::UFortPawnComponent_GrindRail_OnBaseMeshReady_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "NativeIsShooting");

	Params::UFortPawnComponent_GrindRail_NativeIsShooting_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.IsWeaponADS
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortPawnComponent_GrindRail::IsWeaponADS()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "IsWeaponADS");

	Params::UFortPawnComponent_GrindRail_IsWeaponADS_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.IsWeaponActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortPawnComponent_GrindRail::IsWeaponActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "IsWeaponActive");

	Params::UFortPawnComponent_GrindRail_IsWeaponActive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.IsUsingToggleSprint
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortPawnComponent_GrindRail::IsUsingToggleSprint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "IsUsingToggleSprint");

	Params::UFortPawnComponent_GrindRail_IsUsingToggleSprint_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.IsUsingFirstPersonCamera
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortPawnComponent_GrindRail::IsUsingFirstPersonCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "IsUsingFirstPersonCamera");

	Params::UFortPawnComponent_GrindRail_IsUsingFirstPersonCamera_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.IsGrinding
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortPawnComponent_GrindRail::IsGrinding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "IsGrinding");

	Params::UFortPawnComponent_GrindRail_IsGrinding_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.HandleSprintInput
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bPressed                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPawnComponent_GrindRail::HandleSprintInput(bool bPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "HandleSprintInput");

	Params::UFortPawnComponent_GrindRail_HandleSprintInput_Params Parms{};

	Parms.bPressed = bPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.HandleRailJump
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortPawnComponent_GrindRail::HandleRailJump()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "HandleRailJump");

	Params::UFortPawnComponent_GrindRail_HandleRailJump_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.HandleJumpOffEnd
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortPawnComponent_GrindRail::HandleJumpOffEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "HandleJumpOffEnd");

	Params::UFortPawnComponent_GrindRail_HandleJumpOffEnd_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.HandleHitWhenGrinding
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UFortPawnComponent_GrindRail::HandleHitWhenGrinding(struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "HandleHitWhenGrinding");

	Params::UFortPawnComponent_GrindRail_HandleHitWhenGrinding_Params Parms{};

	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.HandleGrindingEndedFromReplication
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortPawnComponent_GrindRail::HandleGrindingEndedFromReplication()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "HandleGrindingEndedFromReplication");

	Params::UFortPawnComponent_GrindRail_HandleGrindingEndedFromReplication_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.HandleGrindingEnded
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortPawnComponent_GrindRail::HandleGrindingEnded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "HandleGrindingEnded");

	Params::UFortPawnComponent_GrindRail_HandleGrindingEnded_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.HandleGrindingBegun
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortPawnComponent_GrindRail::HandleGrindingBegun()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "HandleGrindingBegun");

	Params::UFortPawnComponent_GrindRail_HandleGrindingBegun_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.HandleGrindFinishedAfterJumping
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortPawnComponent_GrindRail::HandleGrindFinishedAfterJumping()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "HandleGrindFinishedAfterJumping");

	Params::UFortPawnComponent_GrindRail_HandleGrindFinishedAfterJumping_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.GetWantsToGrind
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortPawnComponent_GrindRail::GetWantsToGrind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "GetWantsToGrind");

	Params::UFortPawnComponent_GrindRail_GetWantsToGrind_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.GetSpeedHardCap
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortPawnComponent_GrindRail::GetSpeedHardCap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "GetSpeedHardCap");

	Params::UFortPawnComponent_GrindRail_GetSpeedHardCap_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.GetMovementStatus
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UFortPawnComponent_GrindRail::GetMovementStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "GetMovementStatus");

	Params::UFortPawnComponent_GrindRail_GetMovementStatus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.GetLeanForwardSpeedNormalized
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortPawnComponent_GrindRail::GetLeanForwardSpeedNormalized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "GetLeanForwardSpeedNormalized");

	Params::UFortPawnComponent_GrindRail_GetLeanForwardSpeedNormalized_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.GetHorizontalSplineAngleDeltaDegrees
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortPawnComponent_GrindRail::GetHorizontalSplineAngleDeltaDegrees()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "GetHorizontalSplineAngleDeltaDegrees");

	Params::UFortPawnComponent_GrindRail_GetHorizontalSplineAngleDeltaDegrees_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.GetGrindRequestJump
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortPawnComponent_GrindRail::GetGrindRequestJump()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "GetGrindRequestJump");

	Params::UFortPawnComponent_GrindRail_GetGrindRequestJump_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.GetGrindDistanceOnSpline
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortPawnComponent_GrindRail::GetGrindDistanceOnSpline()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "GetGrindDistanceOnSpline");

	Params::UFortPawnComponent_GrindRail_GetGrindDistanceOnSpline_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.GetGrindBaseActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UActor* UFortPawnComponent_GrindRail::GetGrindBaseActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "GetGrindBaseActor");

	Params::UFortPawnComponent_GrindRail_GetGrindBaseActor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "GetCameraOrientedLeanValues");

	Params::UFortPawnComponent_GrindRail_GetCameraOrientedLeanValues_Params Parms{};

	Parms.RawLeanForward = RawLeanForward;
	Parms.RawLeanRight = RawLeanRight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "EndGrinding");

	Params::UFortPawnComponent_GrindRail_EndGrinding_Params Parms{};

	Parms.bSetEndMovementMode = bSetEndMovementMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.DrawDebugHUD
// (Final, Native, Protected, Const)
// Parameters:
// class UHUD*                        HUD                                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCanvas*                     Canvas                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPawnComponent_GrindRail::DrawDebugHUD(class UHUD* HUD, class UCanvas* Canvas)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "DrawDebugHUD");

	Params::UFortPawnComponent_GrindRail_DrawDebugHUD_Params Parms{};

	Parms.HUD = HUD;
	Parms.Canvas = Canvas;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.CanBeginGrinding
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortPawnComponent_GrindRail::CanBeginGrinding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "CanBeginGrinding");

	Params::UFortPawnComponent_GrindRail_CanBeginGrinding_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "CalculateVelocity");

	Params::UFortPawnComponent_GrindRail_CalculateVelocity_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.bReplayingMovement = bReplayingMovement;

	UObject::ProcessEvent(Func, &Parms);

	if (OutVelocity != nullptr)
		*OutVelocity = Parms.OutVelocity;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.BeginGrinding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortGrindRail*              GrindRail                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OptionalStartDistance                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFromInteraction                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPawnComponent_GrindRail::BeginGrinding(class UFortGrindRail* GrindRail, float OptionalStartDistance, bool bFromInteraction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "BeginGrinding");

	Params::UFortPawnComponent_GrindRail_BeginGrinding_Params Parms{};

	Parms.GrindRail = GrindRail;
	Parms.OptionalStartDistance = OptionalStartDistance;
	Parms.bFromInteraction = bFromInteraction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.AttemptDestroyVehicleWhileGrinding
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UFortAthenaVehicle*          Vehicle                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortPawnComponent_GrindRail::AttemptDestroyVehicleWhileGrinding(class UFortAthenaVehicle* Vehicle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "AttemptDestroyVehicleWhileGrinding");

	Params::UFortPawnComponent_GrindRail_AttemptDestroyVehicleWhileGrinding_Params Parms{};

	Parms.Vehicle = Vehicle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.AddTemporaryMoveIgnoreActor
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UBuildingActor*              BuildingActor                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              IgnoreDuration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPawnComponent_GrindRail::AddTemporaryMoveIgnoreActor(class UBuildingActor* BuildingActor, float IgnoreDuration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "AddTemporaryMoveIgnoreActor");

	Params::UFortPawnComponent_GrindRail_AddTemporaryMoveIgnoreActor_Params Parms{};

	Parms.BuildingActor = BuildingActor;
	Parms.IgnoreDuration = IgnoreDuration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GrindRailRuntime.FortPawnComponent_GrindRail.AddMoveIgnoreActor
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UBuildingActor*              BuildingActor                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortPawnComponent_GrindRail::AddMoveIgnoreActor(class UBuildingActor* BuildingActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "AddMoveIgnoreActor");

	Params::UFortPawnComponent_GrindRail_AddMoveIgnoreActor_Params Parms{};

	Parms.BuildingActor = BuildingActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


