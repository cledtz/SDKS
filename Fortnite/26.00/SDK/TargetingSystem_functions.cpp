#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class TargetingSystem.AbilityTask_PerformTargeting
// (None)

class UClass* UAbilityTask_PerformTargeting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTask_PerformTargeting");

	return Clss;
}


// AbilityTask_PerformTargeting TargetingSystem.Default__AbilityTask_PerformTargeting
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAbilityTask_PerformTargeting* UAbilityTask_PerformTargeting::GetDefaultObj()
{
	static class UAbilityTask_PerformTargeting* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTask_PerformTargeting*>(UAbilityTask_PerformTargeting::StaticClass()->DefaultObject);

	return Default;
}


// Function TargetingSystem.AbilityTask_PerformTargeting.PerformTargetingRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTargetingPreset*            InTargetingPreset                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowAsync                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_PerformTargeting*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_PerformTargeting* UAbilityTask_PerformTargeting::PerformTargetingRequest(class UGameplayAbility* OwningAbility, class UTargetingPreset* InTargetingPreset, bool bAllowAsync)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_PerformTargeting", "PerformTargetingRequest");

	Params::UAbilityTask_PerformTargeting_PerformTargetingRequest_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.InTargetingPreset = InTargetingPreset;
	Parms.bAllowAsync = bAllowAsync;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TargetingSystem.AbilityTask_PerformTargeting.PerformFilteringRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTargetingPreset*            TargetingPreset                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UActor*>              InTargets                                                        (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               bAllowAsync                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_PerformTargeting*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_PerformTargeting* UAbilityTask_PerformTargeting::PerformFilteringRequest(class UGameplayAbility* OwningAbility, class UTargetingPreset* TargetingPreset, const TArray<class UActor*>& InTargets, bool bAllowAsync)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_PerformTargeting", "PerformFilteringRequest");

	Params::UAbilityTask_PerformTargeting_PerformFilteringRequest_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.TargetingPreset = TargetingPreset;
	Parms.InTargets = InTargets;
	Parms.bAllowAsync = bAllowAsync;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class TargetingSystem.AsyncAction_PerformTargeting
// (None)

class UClass* UAsyncAction_PerformTargeting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AsyncAction_PerformTargeting");

	return Clss;
}


// AsyncAction_PerformTargeting TargetingSystem.Default__AsyncAction_PerformTargeting
// (Public, ClassDefaultObject, ArchetypeObject)

class UAsyncAction_PerformTargeting* UAsyncAction_PerformTargeting::GetDefaultObj()
{
	static class UAsyncAction_PerformTargeting* Default = nullptr;

	if (!Default)
		Default = static_cast<UAsyncAction_PerformTargeting*>(UAsyncAction_PerformTargeting::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AsyncAction_PerformTargeting", "PerformTargetingRequest");

	Params::UAsyncAction_PerformTargeting_PerformTargetingRequest_Params Parms{};

	Parms.SourceActor = SourceActor;
	Parms.TargetingPreset = TargetingPreset;
	Parms.bUseAsyncTargeting = bUseAsyncTargeting;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AsyncAction_PerformTargeting", "PerformFilteringRequest");

	Params::UAsyncAction_PerformTargeting_PerformFilteringRequest_Params Parms{};

	Parms.SourceActor = SourceActor;
	Parms.TargetingPreset = TargetingPreset;
	Parms.bUseAsyncTargeting = bUseAsyncTargeting;
	Parms.InTargets = InTargets;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TargetingSystem.AsyncAction_PerformTargeting.GetTargetingHandle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTargetingRequestHandle     ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FTargetingRequestHandle UAsyncAction_PerformTargeting::GetTargetingHandle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AsyncAction_PerformTargeting", "GetTargetingHandle");

	Params::UAsyncAction_PerformTargeting_GetTargetingHandle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class TargetingSystem.TargetingTask
// (None)

class UClass* UTargetingTask::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TargetingTask");

	return Clss;
}


// TargetingTask TargetingSystem.Default__TargetingTask
// (Public, ClassDefaultObject, ArchetypeObject)

class UTargetingTask* UTargetingTask::GetDefaultObj()
{
	static class UTargetingTask* Default = nullptr;

	if (!Default)
		Default = static_cast<UTargetingTask*>(UTargetingTask::StaticClass()->DefaultObject);

	return Default;
}


// Class TargetingSystem.TargetingFilterTask_BasicFilterTemplate
// (None)

class UClass* UTargetingFilterTask_BasicFilterTemplate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TargetingFilterTask_BasicFilterTemplate");

	return Clss;
}


// TargetingFilterTask_BasicFilterTemplate TargetingSystem.Default__TargetingFilterTask_BasicFilterTemplate
// (Public, ClassDefaultObject, ArchetypeObject)

class UTargetingFilterTask_BasicFilterTemplate* UTargetingFilterTask_BasicFilterTemplate::GetDefaultObj()
{
	static class UTargetingFilterTask_BasicFilterTemplate* Default = nullptr;

	if (!Default)
		Default = static_cast<UTargetingFilterTask_BasicFilterTemplate*>(UTargetingFilterTask_BasicFilterTemplate::StaticClass()->DefaultObject);

	return Default;
}


// Class TargetingSystem.TargetingFilterTask_ActorClass
// (None)

class UClass* UTargetingFilterTask_ActorClass::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TargetingFilterTask_ActorClass");

	return Clss;
}


// TargetingFilterTask_ActorClass TargetingSystem.Default__TargetingFilterTask_ActorClass
// (Public, ClassDefaultObject, ArchetypeObject)

class UTargetingFilterTask_ActorClass* UTargetingFilterTask_ActorClass::GetDefaultObj()
{
	static class UTargetingFilterTask_ActorClass* Default = nullptr;

	if (!Default)
		Default = static_cast<UTargetingFilterTask_ActorClass*>(UTargetingFilterTask_ActorClass::StaticClass()->DefaultObject);

	return Default;
}


// Class TargetingSystem.TargetingPreset
// (None)

class UClass* UTargetingPreset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TargetingPreset");

	return Clss;
}


// TargetingPreset TargetingSystem.Default__TargetingPreset
// (Public, ClassDefaultObject, ArchetypeObject)

class UTargetingPreset* UTargetingPreset::GetDefaultObj()
{
	static class UTargetingPreset* Default = nullptr;

	if (!Default)
		Default = static_cast<UTargetingPreset*>(UTargetingPreset::StaticClass()->DefaultObject);

	return Default;
}


// Class TargetingSystem.TargetingSelectionTask_AOE
// (None)

class UClass* UTargetingSelectionTask_AOE::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TargetingSelectionTask_AOE");

	return Clss;
}


// TargetingSelectionTask_AOE TargetingSystem.Default__TargetingSelectionTask_AOE
// (Public, ClassDefaultObject, ArchetypeObject)

class UTargetingSelectionTask_AOE* UTargetingSelectionTask_AOE::GetDefaultObj()
{
	static class UTargetingSelectionTask_AOE* Default = nullptr;

	if (!Default)
		Default = static_cast<UTargetingSelectionTask_AOE*>(UTargetingSelectionTask_AOE::StaticClass()->DefaultObject);

	return Default;
}


// Function TargetingSystem.TargetingSelectionTask_AOE.GetSourceRotation
// (Native, Event, Protected, HasOutParams, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FTargetingRequestHandle     TargetingHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FQuat                       ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FQuat UTargetingSelectionTask_AOE::GetSourceRotation(struct FTargetingRequestHandle& TargetingHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetingSelectionTask_AOE", "GetSourceRotation");

	Params::UTargetingSelectionTask_AOE_GetSourceRotation_Params Parms{};

	Parms.TargetingHandle = TargetingHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TargetingSystem.TargetingSelectionTask_AOE.GetSourceOffset
// (Native, Event, Protected, HasOutParams, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FTargetingRequestHandle     TargetingHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UTargetingSelectionTask_AOE::GetSourceOffset(struct FTargetingRequestHandle& TargetingHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetingSelectionTask_AOE", "GetSourceOffset");

	Params::UTargetingSelectionTask_AOE_GetSourceOffset_Params Parms{};

	Parms.TargetingHandle = TargetingHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TargetingSystem.TargetingSelectionTask_AOE.GetSourceLocation
// (Native, Event, Protected, HasOutParams, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FTargetingRequestHandle     TargetingHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UTargetingSelectionTask_AOE::GetSourceLocation(struct FTargetingRequestHandle& TargetingHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetingSelectionTask_AOE", "GetSourceLocation");

	Params::UTargetingSelectionTask_AOE_GetSourceLocation_Params Parms{};

	Parms.TargetingHandle = TargetingHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class TargetingSystem.TargetingSelectionTask_SourceActor
// (None)

class UClass* UTargetingSelectionTask_SourceActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TargetingSelectionTask_SourceActor");

	return Clss;
}


// TargetingSelectionTask_SourceActor TargetingSystem.Default__TargetingSelectionTask_SourceActor
// (Public, ClassDefaultObject, ArchetypeObject)

class UTargetingSelectionTask_SourceActor* UTargetingSelectionTask_SourceActor::GetDefaultObj()
{
	static class UTargetingSelectionTask_SourceActor* Default = nullptr;

	if (!Default)
		Default = static_cast<UTargetingSelectionTask_SourceActor*>(UTargetingSelectionTask_SourceActor::StaticClass()->DefaultObject);

	return Default;
}


// Class TargetingSystem.TargetingSelectionTask_Trace
// (None)

class UClass* UTargetingSelectionTask_Trace::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TargetingSelectionTask_Trace");

	return Clss;
}


// TargetingSelectionTask_Trace TargetingSystem.Default__TargetingSelectionTask_Trace
// (Public, ClassDefaultObject, ArchetypeObject)

class UTargetingSelectionTask_Trace* UTargetingSelectionTask_Trace::GetDefaultObj()
{
	static class UTargetingSelectionTask_Trace* Default = nullptr;

	if (!Default)
		Default = static_cast<UTargetingSelectionTask_Trace*>(UTargetingSelectionTask_Trace::StaticClass()->DefaultObject);

	return Default;
}


// Function TargetingSystem.TargetingSelectionTask_Trace.GetTraceLength
// (Native, Event, Protected, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FTargetingRequestHandle     TargetingHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UTargetingSelectionTask_Trace::GetTraceLength(struct FTargetingRequestHandle& TargetingHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetingSelectionTask_Trace", "GetTraceLength");

	Params::UTargetingSelectionTask_Trace_GetTraceLength_Params Parms{};

	Parms.TargetingHandle = TargetingHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TargetingSystem.TargetingSelectionTask_Trace.GetTraceDirection
// (Native, Event, Protected, HasOutParams, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FTargetingRequestHandle     TargetingHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UTargetingSelectionTask_Trace::GetTraceDirection(struct FTargetingRequestHandle& TargetingHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetingSelectionTask_Trace", "GetTraceDirection");

	Params::UTargetingSelectionTask_Trace_GetTraceDirection_Params Parms{};

	Parms.TargetingHandle = TargetingHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TargetingSystem.TargetingSelectionTask_Trace.GetSweptTraceRadius
// (Native, Event, Protected, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FTargetingRequestHandle     TargetingHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UTargetingSelectionTask_Trace::GetSweptTraceRadius(struct FTargetingRequestHandle& TargetingHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetingSelectionTask_Trace", "GetSweptTraceRadius");

	Params::UTargetingSelectionTask_Trace_GetSweptTraceRadius_Params Parms{};

	Parms.TargetingHandle = TargetingHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TargetingSystem.TargetingSelectionTask_Trace.GetSourceOffset
// (Native, Event, Protected, HasOutParams, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FTargetingRequestHandle     TargetingHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UTargetingSelectionTask_Trace::GetSourceOffset(struct FTargetingRequestHandle& TargetingHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetingSelectionTask_Trace", "GetSourceOffset");

	Params::UTargetingSelectionTask_Trace_GetSourceOffset_Params Parms{};

	Parms.TargetingHandle = TargetingHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TargetingSystem.TargetingSelectionTask_Trace.GetSourceLocation
// (Native, Event, Protected, HasOutParams, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FTargetingRequestHandle     TargetingHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UTargetingSelectionTask_Trace::GetSourceLocation(struct FTargetingRequestHandle& TargetingHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetingSelectionTask_Trace", "GetSourceLocation");

	Params::UTargetingSelectionTask_Trace_GetSourceLocation_Params Parms{};

	Parms.TargetingHandle = TargetingHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TargetingSystem.TargetingSelectionTask_Trace.GetAdditionalActorsToIgnore
// (Native, Event, Protected, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FTargetingRequestHandle     TargetingHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<class UActor*>              OutAdditionalActorsToIgnore                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UTargetingSelectionTask_Trace::GetAdditionalActorsToIgnore(struct FTargetingRequestHandle& TargetingHandle, TArray<class UActor*>* OutAdditionalActorsToIgnore)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetingSelectionTask_Trace", "GetAdditionalActorsToIgnore");

	Params::UTargetingSelectionTask_Trace_GetAdditionalActorsToIgnore_Params Parms{};

	Parms.TargetingHandle = TargetingHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutAdditionalActorsToIgnore != nullptr)
		*OutAdditionalActorsToIgnore = Parms.OutAdditionalActorsToIgnore;

}


// Class TargetingSystem.TargetingSortTask_Base
// (None)

class UClass* UTargetingSortTask_Base::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TargetingSortTask_Base");

	return Clss;
}


// TargetingSortTask_Base TargetingSystem.Default__TargetingSortTask_Base
// (Public, ClassDefaultObject, ArchetypeObject)

class UTargetingSortTask_Base* UTargetingSortTask_Base::GetDefaultObj()
{
	static class UTargetingSortTask_Base* Default = nullptr;

	if (!Default)
		Default = static_cast<UTargetingSortTask_Base*>(UTargetingSortTask_Base::StaticClass()->DefaultObject);

	return Default;
}


// Class TargetingSystem.TargetingSubsystem
// (None)

class UClass* UTargetingSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TargetingSubsystem");

	return Clss;
}


// TargetingSubsystem TargetingSystem.Default__TargetingSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UTargetingSubsystem* UTargetingSubsystem::GetDefaultObj()
{
	static class UTargetingSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UTargetingSubsystem*>(UTargetingSubsystem::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetingSubsystem", "StartAsyncTargetingRequest");

	Params::UTargetingSubsystem_StartAsyncTargetingRequest_Params Parms{};

	Parms.TargetingPreset = TargetingPreset;
	Parms.InSourceContext = InSourceContext;
	Parms.CompletionDynamicDelegate = CompletionDynamicDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TargetingSystem.TargetingSubsystem.RemoveAsyncTargetingRequestWithHandle
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTargetingRequestHandle     TargetingHandle                                                  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UTargetingSubsystem::RemoveAsyncTargetingRequestWithHandle(struct FTargetingRequestHandle* TargetingHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetingSubsystem", "RemoveAsyncTargetingRequestWithHandle");

	Params::UTargetingSubsystem_RemoveAsyncTargetingRequestWithHandle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetingSubsystem", "OverrideCollisionQueryTaskData");

	Params::UTargetingSubsystem_OverrideCollisionQueryTaskData_Params Parms{};

	Parms.TargetingHandle = TargetingHandle;
	Parms.CollisionQueryDataOverride = CollisionQueryDataOverride;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TargetingSystem.TargetingSubsystem.GetTargetingSourceContext
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTargetingRequestHandle     TargetingHandle                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FTargetingSourceContext     ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FTargetingSourceContext UTargetingSubsystem::GetTargetingSourceContext(const struct FTargetingRequestHandle& TargetingHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetingSubsystem", "GetTargetingSourceContext");

	Params::UTargetingSubsystem_GetTargetingSourceContext_Params Parms{};

	Parms.TargetingHandle = TargetingHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TargetingSystem.TargetingSubsystem.GetTargetingResultsActors
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTargetingRequestHandle     TargetingHandle                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<class UActor*>              Targets                                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UTargetingSubsystem::GetTargetingResultsActors(const struct FTargetingRequestHandle& TargetingHandle, TArray<class UActor*>* Targets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetingSubsystem", "GetTargetingResultsActors");

	Params::UTargetingSubsystem_GetTargetingResultsActors_Params Parms{};

	Parms.TargetingHandle = TargetingHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetingSubsystem", "GetTargetingResults");

	Params::UTargetingSubsystem_GetTargetingResults_Params Parms{};

	Parms.TargetingHandle = TargetingHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetingSubsystem", "ExecuteTargetingRequest");

	Params::UTargetingSubsystem_ExecuteTargetingRequest_Params Parms{};

	Parms.TargetingPreset = TargetingPreset;
	Parms.InSourceContext = InSourceContext;
	Parms.CompletionDynamicDelegate = CompletionDynamicDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class TargetingSystem.TargetingFilterTask_SortByDistance
// (None)

class UClass* UTargetingFilterTask_SortByDistance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TargetingFilterTask_SortByDistance");

	return Clss;
}


// TargetingFilterTask_SortByDistance TargetingSystem.Default__TargetingFilterTask_SortByDistance
// (Public, ClassDefaultObject, ArchetypeObject)

class UTargetingFilterTask_SortByDistance* UTargetingFilterTask_SortByDistance::GetDefaultObj()
{
	static class UTargetingFilterTask_SortByDistance* Default = nullptr;

	if (!Default)
		Default = static_cast<UTargetingFilterTask_SortByDistance*>(UTargetingFilterTask_SortByDistance::StaticClass()->DefaultObject);

	return Default;
}

}


