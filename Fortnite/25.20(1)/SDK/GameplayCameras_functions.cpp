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


// Function GameplayCameras.LegacyCameraShake.StartLegacyCameraShakeFromSource
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UPlayerCameraManager*        PlayerCameraManager                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class ULegacyCameraShake>ShakeClass                                                       (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCameraShakeSourceComponent* SourceComponent                                                  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Scale                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ECameraShakePlaySpace   Playspace                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    UserPlaySpaceRot                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class ULegacyCameraShake*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULegacyCameraShake* ULegacyCameraShake::StartLegacyCameraShakeFromSource(class UPlayerCameraManager* PlayerCameraManager, TSubclassOf<class ULegacyCameraShake> ShakeClass, class UCameraShakeSourceComponent* SourceComponent, float Scale, enum class ECameraShakePlaySpace Playspace, const struct FRotator& UserPlaySpaceRot)
{
	static auto Func = Class->GetFunction("LegacyCameraShake", "StartLegacyCameraShakeFromSource");

	Params::ULegacyCameraShake_StartLegacyCameraShakeFromSource_Params Parms;

	Parms.PlayerCameraManager = PlayerCameraManager;
	Parms.ShakeClass = ShakeClass;
	Parms.SourceComponent = SourceComponent;
	Parms.Scale = Scale;
	Parms.Playspace = Playspace;
	Parms.UserPlaySpaceRot = UserPlaySpaceRot;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayCameras.LegacyCameraShake.StartLegacyCameraShake
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UPlayerCameraManager*        PlayerCameraManager                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class ULegacyCameraShake>ShakeClass                                                       (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Scale                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ECameraShakePlaySpace   Playspace                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    UserPlaySpaceRot                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class ULegacyCameraShake*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULegacyCameraShake* ULegacyCameraShake::StartLegacyCameraShake(class UPlayerCameraManager* PlayerCameraManager, TSubclassOf<class ULegacyCameraShake> ShakeClass, float Scale, enum class ECameraShakePlaySpace Playspace, const struct FRotator& UserPlaySpaceRot)
{
	static auto Func = Class->GetFunction("LegacyCameraShake", "StartLegacyCameraShake");

	Params::ULegacyCameraShake_StartLegacyCameraShake_Params Parms;

	Parms.PlayerCameraManager = PlayerCameraManager;
	Parms.ShakeClass = ShakeClass;
	Parms.Scale = Scale;
	Parms.Playspace = Playspace;
	Parms.UserPlaySpaceRot = UserPlaySpaceRot;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayCameras.LegacyCameraShake.ReceiveStopShake
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bImmediately                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULegacyCameraShake::ReceiveStopShake(bool bImmediately)
{
	static auto Func = Class->GetFunction("LegacyCameraShake", "ReceiveStopShake");

	Params::ULegacyCameraShake_ReceiveStopShake_Params Parms;

	Parms.bImmediately = bImmediately;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayCameras.LegacyCameraShake.ReceivePlayShake
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Scale                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULegacyCameraShake::ReceivePlayShake(float Scale)
{
	static auto Func = Class->GetFunction("LegacyCameraShake", "ReceivePlayShake");

	Params::ULegacyCameraShake_ReceivePlayShake_Params Parms;

	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayCameras.LegacyCameraShake.ReceiveIsFinished
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULegacyCameraShake::ReceiveIsFinished()
{
	static auto Func = Class->GetFunction("LegacyCameraShake", "ReceiveIsFinished");

	Params::ULegacyCameraShake_ReceiveIsFinished_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayCameras.LegacyCameraShake.BlueprintUpdateCameraShake
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Alpha                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMinimalViewInfo            POV                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FMinimalViewInfo            ModifiedPOV                                                      (Parm, OutParm, NativeAccessSpecifierPublic)

void ULegacyCameraShake::BlueprintUpdateCameraShake(float DeltaTime, float Alpha, struct FMinimalViewInfo& POV, struct FMinimalViewInfo* ModifiedPOV)
{
	static auto Func = Class->GetFunction("LegacyCameraShake", "BlueprintUpdateCameraShake");

	Params::ULegacyCameraShake_BlueprintUpdateCameraShake_Params Parms;

	Parms.DeltaTime = DeltaTime;
	Parms.Alpha = Alpha;
	Parms.POV = POV;

	UObject::ProcessEvent(Func, &Parms);

	if (ModifiedPOV != nullptr)
		*ModifiedPOV = Parms.ModifiedPOV;

}


// Function GameplayCameras.LegacyCameraShakeFunctionLibrary.Conv_LegacyCameraShake
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UCameraShakeBase*            CameraShake                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULegacyCameraShake*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULegacyCameraShake* ULegacyCameraShakeFunctionLibrary::Conv_LegacyCameraShake(class UCameraShakeBase* CameraShake)
{
	static auto Func = Class->GetFunction("LegacyCameraShakeFunctionLibrary", "Conv_LegacyCameraShake");

	Params::ULegacyCameraShakeFunctionLibrary_Conv_LegacyCameraShake_Params Parms;

	Parms.CameraShake = CameraShake;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayCameras.CameraAnimationCameraModifier.StopCameraAnimation
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCameraAnimationHandle      Handle                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bImmediate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCameraAnimationCameraModifier::StopCameraAnimation(struct FCameraAnimationHandle& Handle, bool bImmediate)
{
	static auto Func = Class->GetFunction("CameraAnimationCameraModifier", "StopCameraAnimation");

	Params::UCameraAnimationCameraModifier_StopCameraAnimation_Params Parms;

	Parms.Handle = Handle;
	Parms.bImmediate = bImmediate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimationsOf
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCameraAnimationSequence*    Sequence                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bImmediate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCameraAnimationCameraModifier::StopAllCameraAnimationsOf(class UCameraAnimationSequence* Sequence, bool bImmediate)
{
	static auto Func = Class->GetFunction("CameraAnimationCameraModifier", "StopAllCameraAnimationsOf");

	Params::UCameraAnimationCameraModifier_StopAllCameraAnimationsOf_Params Parms;

	Parms.Sequence = Sequence;
	Parms.bImmediate = bImmediate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimations
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bImmediate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCameraAnimationCameraModifier::StopAllCameraAnimations(bool bImmediate)
{
	static auto Func = Class->GetFunction("CameraAnimationCameraModifier", "StopAllCameraAnimations");

	Params::UCameraAnimationCameraModifier_StopAllCameraAnimations_Params Parms;

	Parms.bImmediate = bImmediate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayCameras.CameraAnimationCameraModifier.PlayCameraAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCameraAnimationSequence*    Sequence                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FCameraAnimationParams      Params                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FCameraAnimationHandle      ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FCameraAnimationHandle UCameraAnimationCameraModifier::PlayCameraAnimation(class UCameraAnimationSequence* Sequence, const struct FCameraAnimationParams& Params)
{
	static auto Func = Class->GetFunction("CameraAnimationCameraModifier", "PlayCameraAnimation");

	Params::UCameraAnimationCameraModifier_PlayCameraAnimation_Params Parms;

	Parms.Sequence = Sequence;
	Parms.Params = Params;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayCameras.CameraAnimationCameraModifier.IsCameraAnimationActive
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FCameraAnimationHandle      Handle                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCameraAnimationCameraModifier::IsCameraAnimationActive(struct FCameraAnimationHandle& Handle)
{
	static auto Func = Class->GetFunction("CameraAnimationCameraModifier", "IsCameraAnimationActive");

	Params::UCameraAnimationCameraModifier_IsCameraAnimationActive_Params Parms;

	Parms.Handle = Handle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromPlayerController
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPlayerController*           PlayerController                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCameraAnimationCameraModifier*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCameraAnimationCameraModifier* UCameraAnimationCameraModifier::GetCameraAnimationCameraModifierFromPlayerController(class UPlayerController* PlayerController)
{
	static auto Func = Class->GetFunction("CameraAnimationCameraModifier", "GetCameraAnimationCameraModifierFromPlayerController");

	Params::UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromPlayerController_Params Parms;

	Parms.PlayerController = PlayerController;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ControllerId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCameraAnimationCameraModifier*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCameraAnimationCameraModifier* UCameraAnimationCameraModifier::GetCameraAnimationCameraModifierFromID(class UObject* WorldContextObject, int32 ControllerId)
{
	static auto Func = Class->GetFunction("CameraAnimationCameraModifier", "GetCameraAnimationCameraModifierFromID");

	Params::UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.ControllerId = ControllerId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifier
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PlayerIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCameraAnimationCameraModifier*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCameraAnimationCameraModifier* UCameraAnimationCameraModifier::GetCameraAnimationCameraModifier(class UObject* WorldContextObject, int32 PlayerIndex)
{
	static auto Func = Class->GetFunction("CameraAnimationCameraModifier", "GetCameraAnimationCameraModifier");

	Params::UCameraAnimationCameraModifier_GetCameraAnimationCameraModifier_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerIndex = PlayerIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayCameras.GameplayCamerasFunctionLibrary.Conv_CameraShakePlaySpace
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class ECameraAnimationPlaySpaceCameraAnimationPlaySpace                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ECameraShakePlaySpace   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECameraShakePlaySpace UGameplayCamerasFunctionLibrary::Conv_CameraShakePlaySpace(enum class ECameraAnimationPlaySpace CameraAnimationPlaySpace)
{
	static auto Func = Class->GetFunction("GameplayCamerasFunctionLibrary", "Conv_CameraShakePlaySpace");

	Params::UGameplayCamerasFunctionLibrary_Conv_CameraShakePlaySpace_Params Parms;

	Parms.CameraAnimationPlaySpace = CameraAnimationPlaySpace;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayCameras.GameplayCamerasFunctionLibrary.Conv_CameraAnimationPlaySpace
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class ECameraShakePlaySpace   CameraShakePlaySpace                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ECameraAnimationPlaySpaceReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECameraAnimationPlaySpace UGameplayCamerasFunctionLibrary::Conv_CameraAnimationPlaySpace(enum class ECameraShakePlaySpace CameraShakePlaySpace)
{
	static auto Func = Class->GetFunction("GameplayCamerasFunctionLibrary", "Conv_CameraAnimationPlaySpace");

	Params::UGameplayCamerasFunctionLibrary_Conv_CameraAnimationPlaySpace_Params Parms;

	Parms.CameraShakePlaySpace = CameraShakePlaySpace;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayCameras.GameplayCamerasFunctionLibrary.Conv_CameraAnimationCameraModifier
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPlayerCameraManager*        PlayerCameraManager                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCameraAnimationCameraModifier*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCameraAnimationCameraModifier* UGameplayCamerasFunctionLibrary::Conv_CameraAnimationCameraModifier(class UPlayerCameraManager* PlayerCameraManager)
{
	static auto Func = Class->GetFunction("GameplayCamerasFunctionLibrary", "Conv_CameraAnimationCameraModifier");

	Params::UGameplayCamerasFunctionLibrary_Conv_CameraAnimationCameraModifier_Params Parms;

	Parms.PlayerCameraManager = PlayerCameraManager;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayCameras.GameplayCamerasSubsystem.StopCameraAnimation
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UPlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FCameraAnimationHandle      Handle                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bImmediate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayCamerasSubsystem::StopCameraAnimation(class UPlayerController* PlayerController, struct FCameraAnimationHandle& Handle, bool bImmediate)
{
	static auto Func = Class->GetFunction("GameplayCamerasSubsystem", "StopCameraAnimation");

	Params::UGameplayCamerasSubsystem_StopCameraAnimation_Params Parms;

	Parms.PlayerController = PlayerController;
	Parms.Handle = Handle;
	Parms.bImmediate = bImmediate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayCameras.GameplayCamerasSubsystem.StopAllCameraAnimationsOf
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCameraAnimationSequence*    Sequence                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bImmediate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayCamerasSubsystem::StopAllCameraAnimationsOf(class UPlayerController* PlayerController, class UCameraAnimationSequence* Sequence, bool bImmediate)
{
	static auto Func = Class->GetFunction("GameplayCamerasSubsystem", "StopAllCameraAnimationsOf");

	Params::UGameplayCamerasSubsystem_StopAllCameraAnimationsOf_Params Parms;

	Parms.PlayerController = PlayerController;
	Parms.Sequence = Sequence;
	Parms.bImmediate = bImmediate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayCameras.GameplayCamerasSubsystem.StopAllCameraAnimations
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bImmediate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayCamerasSubsystem::StopAllCameraAnimations(class UPlayerController* PlayerController, bool bImmediate)
{
	static auto Func = Class->GetFunction("GameplayCamerasSubsystem", "StopAllCameraAnimations");

	Params::UGameplayCamerasSubsystem_StopAllCameraAnimations_Params Parms;

	Parms.PlayerController = PlayerController;
	Parms.bImmediate = bImmediate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayCameras.GameplayCamerasSubsystem.PlayCameraAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCameraAnimationSequence*    Sequence                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FCameraAnimationParams      Params                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FCameraAnimationHandle      ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FCameraAnimationHandle UGameplayCamerasSubsystem::PlayCameraAnimation(class UPlayerController* PlayerController, class UCameraAnimationSequence* Sequence, const struct FCameraAnimationParams& Params)
{
	static auto Func = Class->GetFunction("GameplayCamerasSubsystem", "PlayCameraAnimation");

	Params::UGameplayCamerasSubsystem_PlayCameraAnimation_Params Parms;

	Parms.PlayerController = PlayerController;
	Parms.Sequence = Sequence;
	Parms.Params = Params;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayCameras.GameplayCamerasSubsystem.IsCameraAnimationActive
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FCameraAnimationHandle      Handle                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayCamerasSubsystem::IsCameraAnimationActive(class UPlayerController* PlayerController, struct FCameraAnimationHandle& Handle)
{
	static auto Func = Class->GetFunction("GameplayCamerasSubsystem", "IsCameraAnimationActive");

	Params::UGameplayCamerasSubsystem_IsCameraAnimationActive_Params Parms;

	Parms.PlayerController = PlayerController;
	Parms.Handle = Handle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
