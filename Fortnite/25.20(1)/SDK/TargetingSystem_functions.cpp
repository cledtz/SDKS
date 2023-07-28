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


// Function TargetingSystem.AbilityTask_PerformTargeting.PerformTargetingRequest
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTargetingPreset*            InTargetingPreset                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowAsync                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_PerformTargeting*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_PerformTargeting* UAbilityTask_PerformTargeting::PerformTargetingRequest(class UGameplayAbility* OwningAbility, class UTargetingPreset* InTargetingPreset, bool bAllowAsync)
{
	static auto Func = Class->GetFunction("AbilityTask_PerformTargeting", "PerformTargetingRequest");

	Params::UAbilityTask_PerformTargeting_PerformTargetingRequest_Params Parms;

	Parms.OwningAbility = OwningAbility;
	Parms.InTargetingPreset = InTargetingPreset;
	Parms.bAllowAsync = bAllowAsync;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TargetingSystem.AbilityTask_PerformTargeting.PerformFilteringRequest
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTargetingPreset*            TargetingPreset                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UActor*>              InTargets                                                        (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               bAllowAsync                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_PerformTargeting*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_PerformTargeting* UAbilityTask_PerformTargeting::PerformFilteringRequest(class UGameplayAbility* OwningAbility, class UTargetingPreset* TargetingPreset, const TArray<class UActor*>& InTargets, bool bAllowAsync)
{
	static auto Func = Class->GetFunction("AbilityTask_PerformTargeting", "PerformFilteringRequest");

	Params::UAbilityTask_PerformTargeting_PerformFilteringRequest_Params Parms;

	Parms.OwningAbility = OwningAbility;
	Parms.TargetingPreset = TargetingPreset;
	Parms.InTargets = InTargets;
	Parms.bAllowAsync = bAllowAsync;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TargetingSystem.AsyncAction_PerformTargeting.PerformTargetingRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActor*                      SourceActor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTargetingPreset*            TargetingPreset                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseAsyncTargeting                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAsyncAction_PerformTargeting*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAsyncAction_PerformTargeting* UAsyncAction_PerformTargeting::PerformTargetingRequest(class UActor* SourceActor, class UTargetingPreset* TargetingPreset, bool bUseAsyncTargeting)
{
	static auto Func = Class->GetFunction("AsyncAction_PerformTargeting", "PerformTargetingRequest");

	Params::UAsyncAction_PerformTargeting_PerformTargetingRequest_Params Parms;

	Parms.SourceActor = SourceActor;
	Parms.TargetingPreset = TargetingPreset;
	Parms.bUseAsyncTargeting = bUseAsyncTargeting;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TargetingSystem.AsyncAction_PerformTargeting.PerformFilteringRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActor*                      SourceActor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTargetingPreset*            TargetingPreset                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseAsyncTargeting                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UActor*>              InTargets                                                        (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UAsyncAction_PerformTargeting*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAsyncAction_PerformTargeting* UAsyncAction_PerformTargeting::PerformFilteringRequest(class UActor* SourceActor, class UTargetingPreset* TargetingPreset, bool bUseAsyncTargeting, const TArray<class UActor*>& InTargets)
{
	static auto Func = Class->GetFunction("AsyncAction_PerformTargeting", "PerformFilteringRequest");

	Params::UAsyncAction_PerformTargeting_PerformFilteringRequest_Params Parms;

	Parms.SourceActor = SourceActor;
	Parms.TargetingPreset = TargetingPreset;
	Parms.bUseAsyncTargeting = bUseAsyncTargeting;
	Parms.InTargets = InTargets;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TargetingSystem.AsyncAction_PerformTargeting.GetTargetingHandle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTargetingRequestHandle     ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FTargetingRequestHandle UAsyncAction_PerformTargeting::GetTargetingHandle()
{
	static auto Func = Class->GetFunction("AsyncAction_PerformTargeting", "GetTargetingHandle");

	Params::UAsyncAction_PerformTargeting_GetTargetingHandle_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TargetingSystem.TargetingSelectionTask_AOE.GetSourceOffset
// (Native, Event, Protected, HasOutParams, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FTargetingRequestHandle     TargetingHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UTargetingSelectionTask_AOE::GetSourceOffset(struct FTargetingRequestHandle& TargetingHandle)
{
	static auto Func = Class->GetFunction("TargetingSelectionTask_AOE", "GetSourceOffset");

	Params::UTargetingSelectionTask_AOE_GetSourceOffset_Params Parms;

	Parms.TargetingHandle = TargetingHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TargetingSystem.TargetingSelectionTask_AOE.GetSourceLocation
// (Native, Event, Protected, HasOutParams, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FTargetingRequestHandle     TargetingHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UTargetingSelectionTask_AOE::GetSourceLocation(struct FTargetingRequestHandle& TargetingHandle)
{
	static auto Func = Class->GetFunction("TargetingSelectionTask_AOE", "GetSourceLocation");

	Params::UTargetingSelectionTask_AOE_GetSourceLocation_Params Parms;

	Parms.TargetingHandle = TargetingHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TargetingSystem.TargetingSelectionTask_Trace.GetTraceLength
// (Native, Event, Protected, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FTargetingRequestHandle     TargetingHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UTargetingSelectionTask_Trace::GetTraceLength(struct FTargetingRequestHandle& TargetingHandle)
{
	static auto Func = Class->GetFunction("TargetingSelectionTask_Trace", "GetTraceLength");

	Params::UTargetingSelectionTask_Trace_GetTraceLength_Params Parms;

	Parms.TargetingHandle = TargetingHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TargetingSystem.TargetingSelectionTask_Trace.GetTraceDirection
// (Native, Event, Protected, HasOutParams, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FTargetingRequestHandle     TargetingHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UTargetingSelectionTask_Trace::GetTraceDirection(struct FTargetingRequestHandle& TargetingHandle)
{
	static auto Func = Class->GetFunction("TargetingSelectionTask_Trace", "GetTraceDirection");

	Params::UTargetingSelectionTask_Trace_GetTraceDirection_Params Parms;

	Parms.TargetingHandle = TargetingHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TargetingSystem.TargetingSelectionTask_Trace.GetSweptTraceRadius
// (Native, Event, Protected, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FTargetingRequestHandle     TargetingHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UTargetingSelectionTask_Trace::GetSweptTraceRadius(struct FTargetingRequestHandle& TargetingHandle)
{
	static auto Func = Class->GetFunction("TargetingSelectionTask_Trace", "GetSweptTraceRadius");

	Params::UTargetingSelectionTask_Trace_GetSweptTraceRadius_Params Parms;

	Parms.TargetingHandle = TargetingHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TargetingSystem.TargetingSelectionTask_Trace.GetSourceOffset
// (Native, Event, Protected, HasOutParams, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FTargetingRequestHandle     TargetingHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UTargetingSelectionTask_Trace::GetSourceOffset(struct FTargetingRequestHandle& TargetingHandle)
{
	static auto Func = Class->GetFunction("TargetingSelectionTask_Trace", "GetSourceOffset");

	Params::UTargetingSelectionTask_Trace_GetSourceOffset_Params Parms;

	Parms.TargetingHandle = TargetingHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TargetingSystem.TargetingSelectionTask_Trace.GetSourceLocation
// (Native, Event, Protected, HasOutParams, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FTargetingRequestHandle     TargetingHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UTargetingSelectionTask_Trace::GetSourceLocation(struct FTargetingRequestHandle& TargetingHandle)
{
	static auto Func = Class->GetFunction("TargetingSelectionTask_Trace", "GetSourceLocation");

	Params::UTargetingSelectionTask_Trace_GetSourceLocation_Params Parms;

	Parms.TargetingHandle = TargetingHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TargetingSystem.TargetingSelectionTask_Trace.GetAdditionalActorsToIgnore
// (Native, Event, Protected, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FTargetingRequestHandle     TargetingHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<class UActor*>              OutAdditionalActorsToIgnore                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UTargetingSelectionTask_Trace::GetAdditionalActorsToIgnore(struct FTargetingRequestHandle& TargetingHandle, TArray<class UActor*>* OutAdditionalActorsToIgnore)
{
	static auto Func = Class->GetFunction("TargetingSelectionTask_Trace", "GetAdditionalActorsToIgnore");

	Params::UTargetingSelectionTask_Trace_GetAdditionalActorsToIgnore_Params Parms;

	Parms.TargetingHandle = TargetingHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutAdditionalActorsToIgnore != nullptr)
		*OutAdditionalActorsToIgnore = Parms.OutAdditionalActorsToIgnore;

}


// Function TargetingSystem.TargetingSubsystem.StartAsyncTargetingRequest
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UTargetingPreset*            TargetingPreset                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTargetingSourceContext     InSourceContext                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 CompletionDynamicDelegate                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTargetingRequestHandle     ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FTargetingRequestHandle UTargetingSubsystem::StartAsyncTargetingRequest(class UTargetingPreset* TargetingPreset, struct FTargetingSourceContext& InSourceContext, FDelegateProperty_ CompletionDynamicDelegate)
{
	static auto Func = Class->GetFunction("TargetingSubsystem", "StartAsyncTargetingRequest");

	Params::UTargetingSubsystem_StartAsyncTargetingRequest_Params Parms;

	Parms.TargetingPreset = TargetingPreset;
	Parms.InSourceContext = InSourceContext;
	Parms.CompletionDynamicDelegate = CompletionDynamicDelegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TargetingSystem.TargetingSubsystem.RemoveAsyncTargetingRequestWithHandle
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTargetingRequestHandle     TargetingHandle                                                  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UTargetingSubsystem::RemoveAsyncTargetingRequestWithHandle(struct FTargetingRequestHandle* TargetingHandle)
{
	static auto Func = Class->GetFunction("TargetingSubsystem", "RemoveAsyncTargetingRequestWithHandle");

	Params::UTargetingSubsystem_RemoveAsyncTargetingRequestWithHandle_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (TargetingHandle != nullptr)
		*TargetingHandle = Parms.TargetingHandle;

}


// Function TargetingSystem.TargetingSubsystem.OverrideCollisionQueryTaskData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTargetingRequestHandle     TargetingHandle                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FCollisionQueryTaskData     CollisionQueryDataOverride                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UTargetingSubsystem::OverrideCollisionQueryTaskData(const struct FTargetingRequestHandle& TargetingHandle, struct FCollisionQueryTaskData& CollisionQueryDataOverride)
{
	static auto Func = Class->GetFunction("TargetingSubsystem", "OverrideCollisionQueryTaskData");

	Params::UTargetingSubsystem_OverrideCollisionQueryTaskData_Params Parms;

	Parms.TargetingHandle = TargetingHandle;
	Parms.CollisionQueryDataOverride = CollisionQueryDataOverride;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function TargetingSystem.TargetingSubsystem.GetTargetingSourceContext
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTargetingRequestHandle     TargetingHandle                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FTargetingSourceContext     ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FTargetingSourceContext UTargetingSubsystem::GetTargetingSourceContext(const struct FTargetingRequestHandle& TargetingHandle)
{
	static auto Func = Class->GetFunction("TargetingSubsystem", "GetTargetingSourceContext");

	Params::UTargetingSubsystem_GetTargetingSourceContext_Params Parms;

	Parms.TargetingHandle = TargetingHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TargetingSystem.TargetingSubsystem.GetTargetingResultsActors
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTargetingRequestHandle     TargetingHandle                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<class UActor*>              Targets                                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UTargetingSubsystem::GetTargetingResultsActors(const struct FTargetingRequestHandle& TargetingHandle, TArray<class UActor*>* Targets)
{
	static auto Func = Class->GetFunction("TargetingSubsystem", "GetTargetingResultsActors");

	Params::UTargetingSubsystem_GetTargetingResultsActors_Params Parms;

	Parms.TargetingHandle = TargetingHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Targets != nullptr)
		*Targets = Parms.Targets;

}


// Function TargetingSystem.TargetingSubsystem.GetTargetingResults
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTargetingRequestHandle     TargetingHandle                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<struct FHitResult>          OutTargets                                                       (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UTargetingSubsystem::GetTargetingResults(const struct FTargetingRequestHandle& TargetingHandle, TArray<struct FHitResult>* OutTargets)
{
	static auto Func = Class->GetFunction("TargetingSubsystem", "GetTargetingResults");

	Params::UTargetingSubsystem_GetTargetingResults_Params Parms;

	Parms.TargetingHandle = TargetingHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutTargets != nullptr)
		*OutTargets = Parms.OutTargets;

}


// Function TargetingSystem.TargetingSubsystem.ExecuteTargetingRequest
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UTargetingPreset*            TargetingPreset                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTargetingSourceContext     InSourceContext                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 CompletionDynamicDelegate                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTargetingSubsystem::ExecuteTargetingRequest(class UTargetingPreset* TargetingPreset, struct FTargetingSourceContext& InSourceContext, FDelegateProperty_ CompletionDynamicDelegate)
{
	static auto Func = Class->GetFunction("TargetingSubsystem", "ExecuteTargetingRequest");

	Params::UTargetingSubsystem_ExecuteTargetingRequest_Params Parms;

	Parms.TargetingPreset = TargetingPreset;
	Parms.InSourceContext = InSourceContext;
	Parms.CompletionDynamicDelegate = CompletionDynamicDelegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
