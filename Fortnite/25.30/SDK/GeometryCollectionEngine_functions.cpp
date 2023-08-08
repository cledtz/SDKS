#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FChaosTrailingEventData>TrailingEvents                                                   (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EChaosTrailingSortMethodSortMethod                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosDestructionListener::SortTrailingEvents(TArray<struct FChaosTrailingEventData>& TrailingEvents, enum class EChaosTrailingSortMethod SortMethod)
{
	static auto Func = Class->GetFunction("ChaosDestructionListener", "SortTrailingEvents");

	Params::UChaosDestructionListener_SortTrailingEvents_Params Parms;

	Parms.TrailingEvents = TrailingEvents;
	Parms.SortMethod = SortMethod;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SortRemovalEvents
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FChaosRemovalEventData>RemovalEvents                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EChaosRemovalSortMethod SortMethod                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosDestructionListener::SortRemovalEvents(TArray<struct FChaosRemovalEventData>& RemovalEvents, enum class EChaosRemovalSortMethod SortMethod)
{
	static auto Func = Class->GetFunction("ChaosDestructionListener", "SortRemovalEvents");

	Params::UChaosDestructionListener_SortRemovalEvents_Params Parms;

	Parms.RemovalEvents = RemovalEvents;
	Parms.SortMethod = SortMethod;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FChaosCollisionEventData>CollisionEvents                                                  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EChaosCollisionSortMethodSortMethod                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosDestructionListener::SortCollisionEvents(TArray<struct FChaosCollisionEventData>& CollisionEvents, enum class EChaosCollisionSortMethod SortMethod)
{
	static auto Func = Class->GetFunction("ChaosDestructionListener", "SortCollisionEvents");

	Params::UChaosDestructionListener_SortCollisionEvents_Params Parms;

	Parms.CollisionEvents = CollisionEvents;
	Parms.SortMethod = SortMethod;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FChaosBreakingEventData>BreakingEvents                                                   (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EChaosBreakingSortMethodSortMethod                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosDestructionListener::SortBreakingEvents(TArray<struct FChaosBreakingEventData>& BreakingEvents, enum class EChaosBreakingSortMethod SortMethod)
{
	static auto Func = Class->GetFunction("ChaosDestructionListener", "SortBreakingEvents");

	Params::UChaosDestructionListener_SortBreakingEvents_Params Parms;

	Parms.BreakingEvents = BreakingEvents;
	Parms.SortMethod = SortMethod;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FChaosTrailingEventRequestSettingsInSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UChaosDestructionListener::SetTrailingEventRequestSettings(struct FChaosTrailingEventRequestSettings& InSettings)
{
	static auto Func = Class->GetFunction("ChaosDestructionListener", "SetTrailingEventRequestSettings");

	Params::UChaosDestructionListener_SetTrailingEventRequestSettings_Params Parms;

	Parms.InSettings = InSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsEnabled                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosDestructionListener::SetTrailingEventEnabled(bool bIsEnabled)
{
	static auto Func = Class->GetFunction("ChaosDestructionListener", "SetTrailingEventEnabled");

	Params::UChaosDestructionListener_SetTrailingEventEnabled_Params Parms;

	Parms.bIsEnabled = bIsEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventRequestSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FChaosRemovalEventRequestSettingsInSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UChaosDestructionListener::SetRemovalEventRequestSettings(struct FChaosRemovalEventRequestSettings& InSettings)
{
	static auto Func = Class->GetFunction("ChaosDestructionListener", "SetRemovalEventRequestSettings");

	Params::UChaosDestructionListener_SetRemovalEventRequestSettings_Params Parms;

	Parms.InSettings = InSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsEnabled                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosDestructionListener::SetRemovalEventEnabled(bool bIsEnabled)
{
	static auto Func = Class->GetFunction("ChaosDestructionListener", "SetRemovalEventEnabled");

	Params::UChaosDestructionListener_SetRemovalEventEnabled_Params Parms;

	Parms.bIsEnabled = bIsEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FChaosCollisionEventRequestSettingsInSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UChaosDestructionListener::SetCollisionEventRequestSettings(struct FChaosCollisionEventRequestSettings& InSettings)
{
	static auto Func = Class->GetFunction("ChaosDestructionListener", "SetCollisionEventRequestSettings");

	Params::UChaosDestructionListener_SetCollisionEventRequestSettings_Params Parms;

	Parms.InSettings = InSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsEnabled                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosDestructionListener::SetCollisionEventEnabled(bool bIsEnabled)
{
	static auto Func = Class->GetFunction("ChaosDestructionListener", "SetCollisionEventEnabled");

	Params::UChaosDestructionListener_SetCollisionEventEnabled_Params Parms;

	Parms.bIsEnabled = bIsEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FChaosBreakingEventRequestSettingsInSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UChaosDestructionListener::SetBreakingEventRequestSettings(struct FChaosBreakingEventRequestSettings& InSettings)
{
	static auto Func = Class->GetFunction("ChaosDestructionListener", "SetBreakingEventRequestSettings");

	Params::UChaosDestructionListener_SetBreakingEventRequestSettings_Params Parms;

	Parms.InSettings = InSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsEnabled                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosDestructionListener::SetBreakingEventEnabled(bool bIsEnabled)
{
	static auto Func = Class->GetFunction("ChaosDestructionListener", "SetBreakingEventEnabled");

	Params::UChaosDestructionListener_SetBreakingEventEnabled_Params Parms;

	Parms.bIsEnabled = bIsEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGeometryCollectionActor*    GeometryCollectionActor                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosDestructionListener::RemoveGeometryCollectionActor(class UGeometryCollectionActor* GeometryCollectionActor)
{
	static auto Func = Class->GetFunction("ChaosDestructionListener", "RemoveGeometryCollectionActor");

	Params::UChaosDestructionListener_RemoveGeometryCollectionActor_Params Parms;

	Parms.GeometryCollectionActor = GeometryCollectionActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UChaosSolverActor*           ChaosSolverActor                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosDestructionListener::RemoveChaosSolverActor(class UChaosSolverActor* ChaosSolverActor)
{
	static auto Func = Class->GetFunction("ChaosDestructionListener", "RemoveChaosSolverActor");

	Params::UChaosDestructionListener_RemoveChaosSolverActor_Params Parms;

	Parms.ChaosSolverActor = ChaosSolverActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UChaosDestructionListener::IsEventListening()
{
	static auto Func = Class->GetFunction("ChaosDestructionListener", "IsEventListening");

	Params::UChaosDestructionListener_IsEventListening_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGeometryCollectionActor*    GeometryCollectionActor                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosDestructionListener::AddGeometryCollectionActor(class UGeometryCollectionActor* GeometryCollectionActor)
{
	static auto Func = Class->GetFunction("ChaosDestructionListener", "AddGeometryCollectionActor");

	Params::UChaosDestructionListener_AddGeometryCollectionActor_Params Parms;

	Parms.GeometryCollectionActor = GeometryCollectionActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UChaosSolverActor*           ChaosSolverActor                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosDestructionListener::AddChaosSolverActor(class UChaosSolverActor* ChaosSolverActor)
{
	static auto Func = Class->GetFunction("ChaosDestructionListener", "AddChaosSolverActor");

	Params::UChaosDestructionListener_AddChaosSolverActor_Params Parms;

	Parms.ChaosSolverActor = ChaosSolverActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     Start                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     End                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  OutHit                                                           (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGeometryCollectionActor::RaycastSingle(const struct FVector& Start, const struct FVector& End, struct FHitResult* OutHit)
{
	static auto Func = Class->GetFunction("GeometryCollectionActor", "RaycastSingle");

	Params::UGeometryCollectionActor_RaycastSingle_Params Parms;

	Parms.Start = Start;
	Parms.End = End;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutHit != nullptr)
		*OutHit = Parms.OutHit;

	return Parms.ReturnValue;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.SetRestCollection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGeometryCollection*         RestCollectionIn                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bApplyAssetDefaults                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryCollectionComponent::SetRestCollection(class UGeometryCollection* RestCollectionIn, bool bApplyAssetDefaults)
{
	static auto Func = Class->GetFunction("GeometryCollectionComponent", "SetRestCollection");

	Params::UGeometryCollectionComponent_SetRestCollection_Params Parms;

	Parms.RestCollectionIn = RestCollectionIn;
	Parms.bApplyAssetDefaults = bApplyAssetDefaults;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.SetPerParticleCollisionProfileName
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int32>                      BoneIds                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FName                        ProfileName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryCollectionComponent::SetPerParticleCollisionProfileName(TArray<int32>& BoneIds, class FName ProfileName)
{
	static auto Func = Class->GetFunction("GeometryCollectionComponent", "SetPerParticleCollisionProfileName");

	Params::UGeometryCollectionComponent_SetPerParticleCollisionProfileName_Params Parms;

	Parms.BoneIds = BoneIds;
	Parms.ProfileName = ProfileName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.SetPerLevelCollisionProfileNames
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FName>                ProfileNames                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UGeometryCollectionComponent::SetPerLevelCollisionProfileNames(TArray<class FName>& ProfileNames)
{
	static auto Func = Class->GetFunction("GeometryCollectionComponent", "SetPerLevelCollisionProfileNames");

	Params::UGeometryCollectionComponent_SetPerLevelCollisionProfileNames_Params Parms;

	Parms.ProfileNames = ProfileNames;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyRemovals
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewNotifyRemovals                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryCollectionComponent::SetNotifyRemovals(bool bNewNotifyRemovals)
{
	static auto Func = Class->GetFunction("GeometryCollectionComponent", "SetNotifyRemovals");

	Params::UGeometryCollectionComponent_SetNotifyRemovals_Params Parms;

	Parms.bNewNotifyRemovals = bNewNotifyRemovals;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyGlobalRemovals
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewNotifyGlobalRemovals                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryCollectionComponent::SetNotifyGlobalRemovals(bool bNewNotifyGlobalRemovals)
{
	static auto Func = Class->GetFunction("GeometryCollectionComponent", "SetNotifyGlobalRemovals");

	Params::UGeometryCollectionComponent_SetNotifyGlobalRemovals_Params Parms;

	Parms.bNewNotifyGlobalRemovals = bNewNotifyGlobalRemovals;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyGlobalCrumblings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewNotifyGlobalCrumblings                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bGlobalNewCrumblingEventIncludesChildren                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryCollectionComponent::SetNotifyGlobalCrumblings(bool bNewNotifyGlobalCrumblings, bool bGlobalNewCrumblingEventIncludesChildren)
{
	static auto Func = Class->GetFunction("GeometryCollectionComponent", "SetNotifyGlobalCrumblings");

	Params::UGeometryCollectionComponent_SetNotifyGlobalCrumblings_Params Parms;

	Parms.bNewNotifyGlobalCrumblings = bNewNotifyGlobalCrumblings;
	Parms.bGlobalNewCrumblingEventIncludesChildren = bGlobalNewCrumblingEventIncludesChildren;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyGlobalCollision
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewNotifyGlobalCollisions                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryCollectionComponent::SetNotifyGlobalCollision(bool bNewNotifyGlobalCollisions)
{
	static auto Func = Class->GetFunction("GeometryCollectionComponent", "SetNotifyGlobalCollision");

	Params::UGeometryCollectionComponent_SetNotifyGlobalCollision_Params Parms;

	Parms.bNewNotifyGlobalCollisions = bNewNotifyGlobalCollisions;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyGlobalBreaks
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewNotifyGlobalBreaks                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryCollectionComponent::SetNotifyGlobalBreaks(bool bNewNotifyGlobalBreaks)
{
	static auto Func = Class->GetFunction("GeometryCollectionComponent", "SetNotifyGlobalBreaks");

	Params::UGeometryCollectionComponent_SetNotifyGlobalBreaks_Params Parms;

	Parms.bNewNotifyGlobalBreaks = bNewNotifyGlobalBreaks;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyCrumblings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewNotifyCrumblings                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNewCrumblingEventIncludesChildren                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryCollectionComponent::SetNotifyCrumblings(bool bNewNotifyCrumblings, bool bNewCrumblingEventIncludesChildren)
{
	static auto Func = Class->GetFunction("GeometryCollectionComponent", "SetNotifyCrumblings");

	Params::UGeometryCollectionComponent_SetNotifyCrumblings_Params Parms;

	Parms.bNewNotifyCrumblings = bNewNotifyCrumblings;
	Parms.bNewCrumblingEventIncludesChildren = bNewCrumblingEventIncludesChildren;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewNotifyBreaks                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryCollectionComponent::SetNotifyBreaks(bool bNewNotifyBreaks)
{
	static auto Func = Class->GetFunction("GeometryCollectionComponent", "SetNotifyBreaks");

	Params::UGeometryCollectionComponent_SetNotifyBreaks_Params Parms;

	Parms.bNewNotifyBreaks = bNewNotifyBreaks;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.SetLocalRestTransforms
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FTransform>          Transforms                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bOnlyLeaves                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryCollectionComponent::SetLocalRestTransforms(TArray<struct FTransform>& Transforms, bool bOnlyLeaves)
{
	static auto Func = Class->GetFunction("GeometryCollectionComponent", "SetLocalRestTransforms");

	Params::UGeometryCollectionComponent_SetLocalRestTransforms_Params Parms;

	Parms.Transforms = Transforms;
	Parms.bOnlyLeaves = bOnlyLeaves;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.SetEnableDamageFromCollision
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bValue                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryCollectionComponent::SetEnableDamageFromCollision(bool bValue)
{
	static auto Func = Class->GetFunction("GeometryCollectionComponent", "SetEnableDamageFromCollision");

	Params::UGeometryCollectionComponent_SetEnableDamageFromCollision_Params Parms;

	Parms.bValue = bValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.SetDamageThreshold
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<float>                      InDamageThreshold                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UGeometryCollectionComponent::SetDamageThreshold(TArray<float>& InDamageThreshold)
{
	static auto Func = Class->GetFunction("GeometryCollectionComponent", "SetDamageThreshold");

	Params::UGeometryCollectionComponent_SetDamageThreshold_Params Parms;

	Parms.InDamageThreshold = InDamageThreshold;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByTransformedBox
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FBox                        Box                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  Transform                                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAnchored                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxLevel                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryCollectionComponent::SetAnchoredByTransformedBox(const struct FBox& Box, const struct FTransform& Transform, bool bAnchored, int32 MaxLevel)
{
	static auto Func = Class->GetFunction("GeometryCollectionComponent", "SetAnchoredByTransformedBox");

	Params::UGeometryCollectionComponent_SetAnchoredByTransformedBox_Params Parms;

	Parms.Box = Box;
	Parms.Transform = Transform;
	Parms.bAnchored = bAnchored;
	Parms.MaxLevel = MaxLevel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAnchored                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryCollectionComponent::SetAnchoredByIndex(int32 Index, bool bAnchored)
{
	static auto Func = Class->GetFunction("GeometryCollectionComponent", "SetAnchoredByIndex");

	Params::UGeometryCollectionComponent_SetAnchoredByIndex_Params Parms;

	Parms.Index = Index;
	Parms.bAnchored = bAnchored;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByBox
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FBox                        WorldSpaceBox                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bAnchored                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxLevel                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryCollectionComponent::SetAnchoredByBox(const struct FBox& WorldSpaceBox, bool bAnchored, int32 MaxLevel)
{
	static auto Func = Class->GetFunction("GeometryCollectionComponent", "SetAnchoredByBox");

	Params::UGeometryCollectionComponent_SetAnchoredByBox_Params Parms;

	Parms.WorldSpaceBox = WorldSpaceBox;
	Parms.bAnchored = bAnchored;
	Parms.MaxLevel = MaxLevel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.SetAbandonedParticleCollisionProfileName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        CollisionProfile                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryCollectionComponent::SetAbandonedParticleCollisionProfileName(class FName CollisionProfile)
{
	static auto Func = Class->GetFunction("GeometryCollectionComponent", "SetAbandonedParticleCollisionProfileName");

	Params::UGeometryCollectionComponent_SetAbandonedParticleCollisionProfileName_Params Parms;

	Parms.CollisionProfile = CollisionProfile;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.RemoveAllAnchors
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGeometryCollectionComponent::RemoveAllAnchors()
{
	static auto Func = Class->GetFunction("GeometryCollectionComponent", "RemoveAllAnchors");

	Params::UGeometryCollectionComponent_RemoveAllAnchors_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FChaosPhysicsCollisionInfo  CollisionInfo                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UGeometryCollectionComponent::ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo)
{
	static auto Func = Class->GetFunction("GeometryCollectionComponent", "ReceivePhysicsCollision");

	Params::UGeometryCollectionComponent_ReceivePhysicsCollision_Params Parms;

	Parms.CollisionInfo = CollisionInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.OnRep_RepData
// (Final, Native, Protected)
// Parameters:

void UGeometryCollectionComponent::OnRep_RepData()
{
	static auto Func = Class->GetFunction("GeometryCollectionComponent", "OnRep_RepData");

	Params::UGeometryCollectionComponent_OnRep_RepData_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UGeometryCollectionComponent*FracturedComponent                                               (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryCollectionComponent::NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent)
{
	static auto Func = Class->GetFunction("GeometryCollectionComponent", "NotifyGeometryCollectionPhysicsStateChange__DelegateSignature");

	Params::UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Params Parms;

	Parms.FracturedComponent = FracturedComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UGeometryCollectionComponent*FracturedComponent                                               (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryCollectionComponent::NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent)
{
	static auto Func = Class->GetFunction("GeometryCollectionComponent", "NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature");

	Params::UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Params Parms;

	Parms.FracturedComponent = FracturedComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.IsRootBroken
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGeometryCollectionComponent::IsRootBroken()
{
	static auto Func = Class->GetFunction("GeometryCollectionComponent", "IsRootBroken");

	Params::UGeometryCollectionComponent_IsRootBroken_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.GetRootInitialTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform UGeometryCollectionComponent::GetRootInitialTransform()
{
	static auto Func = Class->GetFunction("GeometryCollectionComponent", "GetRootInitialTransform");

	Params::UGeometryCollectionComponent_GetRootInitialTransform_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.GetRootIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGeometryCollectionComponent::GetRootIndex()
{
	static auto Func = Class->GetFunction("GeometryCollectionComponent", "GetRootIndex");

	Params::UGeometryCollectionComponent_GetRootIndex_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.GetRootCurrentTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform UGeometryCollectionComponent::GetRootCurrentTransform()
{
	static auto Func = Class->GetFunction("GeometryCollectionComponent", "GetRootCurrentTransform");

	Params::UGeometryCollectionComponent_GetRootCurrentTransform_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.GetMassAndExtents
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              ItemIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutMass                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBox                        OutExtents                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UGeometryCollectionComponent::GetMassAndExtents(int32 ItemIndex, float* OutMass, struct FBox* OutExtents)
{
	static auto Func = Class->GetFunction("GeometryCollectionComponent", "GetMassAndExtents");

	Params::UGeometryCollectionComponent_GetMassAndExtents_Params Parms;

	Parms.ItemIndex = ItemIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutMass != nullptr)
		*OutMass = Parms.OutMass;

	if (OutExtents != nullptr)
		*OutExtents = Parms.OutExtents;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.GetLocalBounds
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FBox                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FBox UGeometryCollectionComponent::GetLocalBounds()
{
	static auto Func = Class->GetFunction("GeometryCollectionComponent", "GetLocalBounds");

	Params::UGeometryCollectionComponent_GetLocalBounds_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.GetInitialLocalRestTransforms
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FTransform>          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FTransform> UGeometryCollectionComponent::GetInitialLocalRestTransforms()
{
	static auto Func = Class->GetFunction("GeometryCollectionComponent", "GetInitialLocalRestTransforms");

	Params::UGeometryCollectionComponent_GetInitialLocalRestTransforms_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.GetInitialLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ItemIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGeometryCollectionComponent::GetInitialLevel(int32 ItemIndex)
{
	static auto Func = Class->GetFunction("GeometryCollectionComponent", "GetInitialLevel");

	Params::UGeometryCollectionComponent_GetInitialLevel_Params Parms;

	Parms.ItemIndex = ItemIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.GetDebugInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UGeometryCollectionComponent::GetDebugInfo()
{
	static auto Func = Class->GetFunction("GeometryCollectionComponent", "GetDebugInfo");

	Params::UGeometryCollectionComponent_GetDebugInfo_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.GetDamageThreshold
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<float>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<float> UGeometryCollectionComponent::GetDamageThreshold()
{
	static auto Func = Class->GetFunction("GeometryCollectionComponent", "GetDamageThreshold");

	Params::UGeometryCollectionComponent_GetDamageThreshold_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.CrumbleCluster
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ItemIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryCollectionComponent::CrumbleCluster(int32 ItemIndex)
{
	static auto Func = Class->GetFunction("GeometryCollectionComponent", "CrumbleCluster");

	Params::UGeometryCollectionComponent_CrumbleCluster_Params Parms;

	Parms.ItemIndex = ItemIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.CrumbleActiveClusters
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGeometryCollectionComponent::CrumbleActiveClusters()
{
	static auto Func = Class->GetFunction("GeometryCollectionComponent", "CrumbleActiveClusters");

	Params::UGeometryCollectionComponent_CrumbleActiveClusters_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Enabled                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGeometryCollectionPhysicsTypeEnumTarget                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFieldSystemMetaData*        MetaData                                                         (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFieldNodeBase*              Field                                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryCollectionComponent::ApplyPhysicsField(bool Enabled, enum class EGeometryCollectionPhysicsTypeEnum Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field)
{
	static auto Func = Class->GetFunction("GeometryCollectionComponent", "ApplyPhysicsField");

	Params::UGeometryCollectionComponent_ApplyPhysicsField_Params Parms;

	Parms.Enabled = Enabled;
	Parms.Target = Target;
	Parms.MetaData = MetaData;
	Parms.Field = Field;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyLinearVelocity
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              ItemIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LinearVelocity                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryCollectionComponent::ApplyLinearVelocity(int32 ItemIndex, struct FVector& LinearVelocity)
{
	static auto Func = Class->GetFunction("GeometryCollectionComponent", "ApplyLinearVelocity");

	Params::UGeometryCollectionComponent_ApplyLinearVelocity_Params Parms;

	Parms.ItemIndex = ItemIndex;
	Parms.LinearVelocity = LinearVelocity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Position                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryCollectionComponent::ApplyKinematicField(float Radius, const struct FVector& Position)
{
	static auto Func = Class->GetFunction("GeometryCollectionComponent", "ApplyKinematicField");

	Params::UGeometryCollectionComponent_ApplyKinematicField_Params Parms;

	Parms.Radius = Radius;
	Parms.Position = Position;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyInternalStrain
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              ItemIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PropagationDepth                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PropagationFactor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Strain                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryCollectionComponent::ApplyInternalStrain(int32 ItemIndex, struct FVector& Location, float Radius, int32 PropagationDepth, float PropagationFactor, float Strain)
{
	static auto Func = Class->GetFunction("GeometryCollectionComponent", "ApplyInternalStrain");

	Params::UGeometryCollectionComponent_ApplyInternalStrain_Params Parms;

	Parms.ItemIndex = ItemIndex;
	Parms.Location = Location;
	Parms.Radius = Radius;
	Parms.PropagationDepth = PropagationDepth;
	Parms.PropagationFactor = PropagationFactor;
	Parms.Strain = Strain;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyExternalStrain
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              ItemIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PropagationDepth                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PropagationFactor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Strain                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryCollectionComponent::ApplyExternalStrain(int32 ItemIndex, struct FVector& Location, float Radius, int32 PropagationDepth, float PropagationFactor, float Strain)
{
	static auto Func = Class->GetFunction("GeometryCollectionComponent", "ApplyExternalStrain");

	Params::UGeometryCollectionComponent_ApplyExternalStrain_Params Parms;

	Parms.ItemIndex = ItemIndex;
	Parms.Location = Location;
	Parms.Radius = Radius;
	Parms.PropagationDepth = PropagationDepth;
	Parms.PropagationFactor = PropagationFactor;
	Parms.Strain = Strain;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyBreakingLinearVelocity
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              ItemIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LinearVelocity                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryCollectionComponent::ApplyBreakingLinearVelocity(int32 ItemIndex, struct FVector& LinearVelocity)
{
	static auto Func = Class->GetFunction("GeometryCollectionComponent", "ApplyBreakingLinearVelocity");

	Params::UGeometryCollectionComponent_ApplyBreakingLinearVelocity_Params Parms;

	Parms.ItemIndex = ItemIndex;
	Parms.LinearVelocity = LinearVelocity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyBreakingAngularVelocity
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              ItemIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     AngularVelocity                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryCollectionComponent::ApplyBreakingAngularVelocity(int32 ItemIndex, struct FVector& AngularVelocity)
{
	static auto Func = Class->GetFunction("GeometryCollectionComponent", "ApplyBreakingAngularVelocity");

	Params::UGeometryCollectionComponent_ApplyBreakingAngularVelocity_Params Parms;

	Parms.ItemIndex = ItemIndex;
	Parms.AngularVelocity = AngularVelocity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyAssetDefaults
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGeometryCollectionComponent::ApplyAssetDefaults()
{
	static auto Func = Class->GetFunction("GeometryCollectionComponent", "ApplyAssetDefaults");

	Params::UGeometryCollectionComponent_ApplyAssetDefaults_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyAngularVelocity
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              ItemIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     AngularVelocity                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryCollectionComponent::ApplyAngularVelocity(int32 ItemIndex, struct FVector& AngularVelocity)
{
	static auto Func = Class->GetFunction("GeometryCollectionComponent", "ApplyAngularVelocity");

	Params::UGeometryCollectionComponent_ApplyAngularVelocity_Params Parms;

	Parms.ItemIndex = ItemIndex;
	Parms.AngularVelocity = AngularVelocity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCollectionEngine.GeometryCollection.SetEnableNanite
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bValue                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryCollection::SetEnableNanite(bool bValue)
{
	static auto Func = Class->GetFunction("GeometryCollection", "SetEnableNanite");

	Params::UGeometryCollection_SetEnableNanite_Params Parms;

	Parms.bValue = bValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
