#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Dive
// (None)

class UClass* UFortGameplayAbility_ScoutDrone_Dive::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGameplayAbility_ScoutDrone_Dive");

	return Clss;
}


// FortGameplayAbility_ScoutDrone_Dive ScoutDroneRuntime.Default__FortGameplayAbility_ScoutDrone_Dive
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGameplayAbility_ScoutDrone_Dive* UFortGameplayAbility_ScoutDrone_Dive::GetDefaultObj()
{
	static class UFortGameplayAbility_ScoutDrone_Dive* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGameplayAbility_ScoutDrone_Dive*>(UFortGameplayAbility_ScoutDrone_Dive::StaticClass()->DefaultObject);

	return Default;
}


// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Dive.BP_OnDroneStoppedDiving
// (BlueprintAuthorityOnly, Event, Protected, BlueprintEvent)
// Parameters:

void UFortGameplayAbility_ScoutDrone_Dive::BP_OnDroneStoppedDiving()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_Dive", "BP_OnDroneStoppedDiving");

	Params::UFortGameplayAbility_ScoutDrone_Dive_BP_OnDroneStoppedDiving_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Dive.BP_OnDroneStartedDiving
// (BlueprintAuthorityOnly, Event, Protected, BlueprintEvent)
// Parameters:

void UFortGameplayAbility_ScoutDrone_Dive::BP_OnDroneStartedDiving()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_Dive", "BP_OnDroneStartedDiving");

	Params::UFortGameplayAbility_ScoutDrone_Dive_BP_OnDroneStartedDiving_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Class ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_TargetingBase
// (None)

class UClass* UFortGameplayAbility_ScoutDrone_TargetingBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGameplayAbility_ScoutDrone_TargetingBase");

	return Clss;
}


// FortGameplayAbility_ScoutDrone_TargetingBase ScoutDroneRuntime.Default__FortGameplayAbility_ScoutDrone_TargetingBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGameplayAbility_ScoutDrone_TargetingBase* UFortGameplayAbility_ScoutDrone_TargetingBase::GetDefaultObj()
{
	static class UFortGameplayAbility_ScoutDrone_TargetingBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGameplayAbility_ScoutDrone_TargetingBase*>(UFortGameplayAbility_ScoutDrone_TargetingBase::StaticClass()->DefaultObject);

	return Default;
}


// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_TargetingBase.StopTargeting
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortGameplayAbility_ScoutDrone_TargetingBase::StopTargeting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_TargetingBase", "StopTargeting");

	Params::UFortGameplayAbility_ScoutDrone_TargetingBase_StopTargeting_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_TargetingBase.StartTargeting
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortGameplayAbility_ScoutDrone_TargetingBase::StartTargeting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_TargetingBase", "StartTargeting");

	Params::UFortGameplayAbility_ScoutDrone_TargetingBase_StartTargeting_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_TargetingBase.BP_OnTargetsFound
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FTargetingRequestHandle     TargetingHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UFortGameplayAbility_ScoutDrone_TargetingBase::BP_OnTargetsFound(struct FTargetingRequestHandle& TargetingHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_TargetingBase", "BP_OnTargetsFound");

	Params::UFortGameplayAbility_ScoutDrone_TargetingBase_BP_OnTargetsFound_Params Parms{};

	Parms.TargetingHandle = TargetingHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Class ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_SpeedBoost
// (None)

class UClass* UFortGameplayAbility_ScoutDrone_SpeedBoost::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGameplayAbility_ScoutDrone_SpeedBoost");

	return Clss;
}


// FortGameplayAbility_ScoutDrone_SpeedBoost ScoutDroneRuntime.Default__FortGameplayAbility_ScoutDrone_SpeedBoost
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGameplayAbility_ScoutDrone_SpeedBoost* UFortGameplayAbility_ScoutDrone_SpeedBoost::GetDefaultObj()
{
	static class UFortGameplayAbility_ScoutDrone_SpeedBoost* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGameplayAbility_ScoutDrone_SpeedBoost*>(UFortGameplayAbility_ScoutDrone_SpeedBoost::StaticClass()->DefaultObject);

	return Default;
}


// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_SpeedBoost.OnDoorBashed
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                  HitResult                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class UFortBuildingWallDoorComponent*BashedDoor                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGameplayAbility_ScoutDrone_SpeedBoost::OnDoorBashed(struct FHitResult& HitResult, class UFortBuildingWallDoorComponent* BashedDoor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_SpeedBoost", "OnDoorBashed");

	Params::UFortGameplayAbility_ScoutDrone_SpeedBoost_OnDoorBashed_Params Parms{};

	Parms.HitResult = HitResult;
	Parms.BashedDoor = BashedDoor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_SpeedBoost.OnBoostedIntoActor
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                  HitResult                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UFortGameplayAbility_ScoutDrone_SpeedBoost::OnBoostedIntoActor(struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_SpeedBoost", "OnBoostedIntoActor");

	Params::UFortGameplayAbility_ScoutDrone_SpeedBoost_OnBoostedIntoActor_Params Parms{};

	Parms.HitResult = HitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Class ScoutDroneRuntime.FortScoutDroneAnalyticsComponent
// (None)

class UClass* UFortScoutDroneAnalyticsComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortScoutDroneAnalyticsComponent");

	return Clss;
}


// FortScoutDroneAnalyticsComponent ScoutDroneRuntime.Default__FortScoutDroneAnalyticsComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortScoutDroneAnalyticsComponent* UFortScoutDroneAnalyticsComponent::GetDefaultObj()
{
	static class UFortScoutDroneAnalyticsComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortScoutDroneAnalyticsComponent*>(UFortScoutDroneAnalyticsComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class ScoutDroneRuntime.FortScoutDroneAnimInstance
// (None)

class UClass* UFortScoutDroneAnimInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortScoutDroneAnimInstance");

	return Clss;
}


// FortScoutDroneAnimInstance ScoutDroneRuntime.Default__FortScoutDroneAnimInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortScoutDroneAnimInstance* UFortScoutDroneAnimInstance::GetDefaultObj()
{
	static class UFortScoutDroneAnimInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortScoutDroneAnimInstance*>(UFortScoutDroneAnimInstance::StaticClass()->DefaultObject);

	return Default;
}


// Class ScoutDroneRuntime.FortScoutDroneGlove
// (Actor)

class UClass* UFortScoutDroneGlove::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortScoutDroneGlove");

	return Clss;
}


// FortScoutDroneGlove ScoutDroneRuntime.Default__FortScoutDroneGlove
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortScoutDroneGlove* UFortScoutDroneGlove::GetDefaultObj()
{
	static class UFortScoutDroneGlove* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortScoutDroneGlove*>(UFortScoutDroneGlove::StaticClass()->DefaultObject);

	return Default;
}


// Class ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Activate
// (None)

class UClass* UFortGameplayAbility_ScoutDrone_Activate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGameplayAbility_ScoutDrone_Activate");

	return Clss;
}


// FortGameplayAbility_ScoutDrone_Activate ScoutDroneRuntime.Default__FortGameplayAbility_ScoutDrone_Activate
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGameplayAbility_ScoutDrone_Activate* UFortGameplayAbility_ScoutDrone_Activate::GetDefaultObj()
{
	static class UFortGameplayAbility_ScoutDrone_Activate* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGameplayAbility_ScoutDrone_Activate*>(UFortGameplayAbility_ScoutDrone_Activate::StaticClass()->DefaultObject);

	return Default;
}


// Class ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Dismiss
// (None)

class UClass* UFortGameplayAbility_ScoutDrone_Dismiss::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGameplayAbility_ScoutDrone_Dismiss");

	return Clss;
}


// FortGameplayAbility_ScoutDrone_Dismiss ScoutDroneRuntime.Default__FortGameplayAbility_ScoutDrone_Dismiss
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGameplayAbility_ScoutDrone_Dismiss* UFortGameplayAbility_ScoutDrone_Dismiss::GetDefaultObj()
{
	static class UFortGameplayAbility_ScoutDrone_Dismiss* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGameplayAbility_ScoutDrone_Dismiss*>(UFortGameplayAbility_ScoutDrone_Dismiss::StaticClass()->DefaultObject);

	return Default;
}


// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Dismiss.GetControlledDrone
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UFortScoutDrone*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortScoutDrone* UFortGameplayAbility_ScoutDrone_Dismiss::GetControlledDrone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_Dismiss", "GetControlledDrone");

	Params::UFortGameplayAbility_ScoutDrone_Dismiss_GetControlledDrone_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_MarkPotentialTargets
// (None)

class UClass* UFortGameplayAbility_ScoutDrone_MarkPotentialTargets::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGameplayAbility_ScoutDrone_MarkPotentialTargets");

	return Clss;
}


// FortGameplayAbility_ScoutDrone_MarkPotentialTargets ScoutDroneRuntime.Default__FortGameplayAbility_ScoutDrone_MarkPotentialTargets
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGameplayAbility_ScoutDrone_MarkPotentialTargets* UFortGameplayAbility_ScoutDrone_MarkPotentialTargets::GetDefaultObj()
{
	static class UFortGameplayAbility_ScoutDrone_MarkPotentialTargets* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGameplayAbility_ScoutDrone_MarkPotentialTargets*>(UFortGameplayAbility_ScoutDrone_MarkPotentialTargets::StaticClass()->DefaultObject);

	return Default;
}


// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_MarkPotentialTargets.OnStoppedHighlightingTarget
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UActor*                      Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGameplayAbility_ScoutDrone_MarkPotentialTargets::OnStoppedHighlightingTarget(class UActor* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_MarkPotentialTargets", "OnStoppedHighlightingTarget");

	Params::UFortGameplayAbility_ScoutDrone_MarkPotentialTargets_OnStoppedHighlightingTarget_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_MarkPotentialTargets.OnStartHighlightingTarget
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UActor*                      Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGameplayAbility_ScoutDrone_MarkPotentialTargets::OnStartHighlightingTarget(class UActor* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_MarkPotentialTargets", "OnStartHighlightingTarget");

	Params::UFortGameplayAbility_ScoutDrone_MarkPotentialTargets_OnStartHighlightingTarget_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Class ScoutDroneRuntime.ScoutDronePassiveMarkPayload
// (None)

class UClass* UScoutDronePassiveMarkPayload::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScoutDronePassiveMarkPayload");

	return Clss;
}


// ScoutDronePassiveMarkPayload ScoutDroneRuntime.Default__ScoutDronePassiveMarkPayload
// (Public, ClassDefaultObject, ArchetypeObject)

class UScoutDronePassiveMarkPayload* UScoutDronePassiveMarkPayload::GetDefaultObj()
{
	static class UScoutDronePassiveMarkPayload* Default = nullptr;

	if (!Default)
		Default = static_cast<UScoutDronePassiveMarkPayload*>(UScoutDronePassiveMarkPayload::StaticClass()->DefaultObject);

	return Default;
}


// Class ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_PassiveMark
// (None)

class UClass* UFortGameplayAbility_ScoutDrone_PassiveMark::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGameplayAbility_ScoutDrone_PassiveMark");

	return Clss;
}


// FortGameplayAbility_ScoutDrone_PassiveMark ScoutDroneRuntime.Default__FortGameplayAbility_ScoutDrone_PassiveMark
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGameplayAbility_ScoutDrone_PassiveMark* UFortGameplayAbility_ScoutDrone_PassiveMark::GetDefaultObj()
{
	static class UFortGameplayAbility_ScoutDrone_PassiveMark* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGameplayAbility_ScoutDrone_PassiveMark*>(UFortGameplayAbility_ScoutDrone_PassiveMark::StaticClass()->DefaultObject);

	return Default;
}


// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_PassiveMark.OnRep_CurrentTargetStatus
// (Final, Native, Protected)
// Parameters:

void UFortGameplayAbility_ScoutDrone_PassiveMark::OnRep_CurrentTargetStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_PassiveMark", "OnRep_CurrentTargetStatus");

	Params::UFortGameplayAbility_ScoutDrone_PassiveMark_OnRep_CurrentTargetStatus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_PassiveMark.OnActorIndicatorExpired
// (Final, Native, Private)
// Parameters:
// class UActor*                      IndicatedActor                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGameplayAbility_ScoutDrone_PassiveMark::OnActorIndicatorExpired(class UActor* IndicatedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_PassiveMark", "OnActorIndicatorExpired");

	Params::UFortGameplayAbility_ScoutDrone_PassiveMark_OnActorIndicatorExpired_Params Parms{};

	Parms.IndicatedActor = IndicatedActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_PassiveMark.BP_OnTargetStatusChanged
// (BlueprintAuthorityOnly, Event, Protected, BlueprintEvent)
// Parameters:
// class UActor*                      ActiveTarget                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGameplayAbility_ScoutDrone_PassiveMark::BP_OnTargetStatusChanged(class UActor* ActiveTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_PassiveMark", "BP_OnTargetStatusChanged");

	Params::UFortGameplayAbility_ScoutDrone_PassiveMark_BP_OnTargetStatusChanged_Params Parms{};

	Parms.ActiveTarget = ActiveTarget;

	UObject::ProcessEvent(Func, &Parms);

}


// Class ScoutDroneRuntime.ScoutDronePickUpTargetsPayload
// (None)

class UClass* UScoutDronePickUpTargetsPayload::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScoutDronePickUpTargetsPayload");

	return Clss;
}


// ScoutDronePickUpTargetsPayload ScoutDroneRuntime.Default__ScoutDronePickUpTargetsPayload
// (Public, ClassDefaultObject, ArchetypeObject)

class UScoutDronePickUpTargetsPayload* UScoutDronePickUpTargetsPayload::GetDefaultObj()
{
	static class UScoutDronePickUpTargetsPayload* Default = nullptr;

	if (!Default)
		Default = static_cast<UScoutDronePickUpTargetsPayload*>(UScoutDronePickUpTargetsPayload::StaticClass()->DefaultObject);

	return Default;
}


// Class ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_PickUp
// (None)

class UClass* UFortGameplayAbility_ScoutDrone_PickUp::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGameplayAbility_ScoutDrone_PickUp");

	return Clss;
}


// FortGameplayAbility_ScoutDrone_PickUp ScoutDroneRuntime.Default__FortGameplayAbility_ScoutDrone_PickUp
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGameplayAbility_ScoutDrone_PickUp* UFortGameplayAbility_ScoutDrone_PickUp::GetDefaultObj()
{
	static class UFortGameplayAbility_ScoutDrone_PickUp* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGameplayAbility_ScoutDrone_PickUp*>(UFortGameplayAbility_ScoutDrone_PickUp::StaticClass()->DefaultObject);

	return Default;
}


// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_PickUp.ServerConfirmTargets
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:

void UFortGameplayAbility_ScoutDrone_PickUp::ServerConfirmTargets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_PickUp", "ServerConfirmTargets");

	Params::UFortGameplayAbility_ScoutDrone_PickUp_ServerConfirmTargets_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Tether
// (None)

class UClass* UFortGameplayAbility_ScoutDrone_Tether::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGameplayAbility_ScoutDrone_Tether");

	return Clss;
}


// FortGameplayAbility_ScoutDrone_Tether ScoutDroneRuntime.Default__FortGameplayAbility_ScoutDrone_Tether
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGameplayAbility_ScoutDrone_Tether* UFortGameplayAbility_ScoutDrone_Tether::GetDefaultObj()
{
	static class UFortGameplayAbility_ScoutDrone_Tether* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGameplayAbility_ScoutDrone_Tether*>(UFortGameplayAbility_ScoutDrone_Tether::StaticClass()->DefaultObject);

	return Default;
}


// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Tether.StopCheckingDistances
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortGameplayAbility_ScoutDrone_Tether::StopCheckingDistances()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_Tether", "StopCheckingDistances");

	Params::UFortGameplayAbility_ScoutDrone_Tether_StopCheckingDistances_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Tether.StartCheckingDistances
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortGameplayAbility_ScoutDrone_Tether::StartCheckingDistances()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_Tether", "StartCheckingDistances");

	Params::UFortGameplayAbility_ScoutDrone_Tether_StartCheckingDistances_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Tether.OnRep_bIsInWarningRange
// (Final, Native, Private)
// Parameters:

void UFortGameplayAbility_ScoutDrone_Tether::OnRep_bIsInWarningRange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_Tether", "OnRep_bIsInWarningRange");

	Params::UFortGameplayAbility_ScoutDrone_Tether_OnRep_bIsInWarningRange_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Tether.OnRep_bIsInSignalLossRange
// (Final, Native, Private)
// Parameters:

void UFortGameplayAbility_ScoutDrone_Tether::OnRep_bIsInSignalLossRange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_Tether", "OnRep_bIsInSignalLossRange");

	Params::UFortGameplayAbility_ScoutDrone_Tether_OnRep_bIsInSignalLossRange_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ScoutDroneRuntime.FortAthenaMutator_ScoutDrone
// (Actor)

class UClass* UFortAthenaMutator_ScoutDrone::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaMutator_ScoutDrone");

	return Clss;
}


// FortAthenaMutator_ScoutDrone ScoutDroneRuntime.Default__FortAthenaMutator_ScoutDrone
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaMutator_ScoutDrone* UFortAthenaMutator_ScoutDrone::GetDefaultObj()
{
	static class UFortAthenaMutator_ScoutDrone* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaMutator_ScoutDrone*>(UFortAthenaMutator_ScoutDrone::StaticClass()->DefaultObject);

	return Default;
}


// Function ScoutDroneRuntime.FortAthenaMutator_ScoutDrone.OnViewTargetChanged
// (Final, Native, Private)
// Parameters:
// class UFortPlayerController*       PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      OldViewTarget                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      NewViewTarget                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaMutator_ScoutDrone::OnViewTargetChanged(class UFortPlayerController* PlayerController, class UActor* OldViewTarget, class UActor* NewViewTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_ScoutDrone", "OnViewTargetChanged");

	Params::UFortAthenaMutator_ScoutDrone_OnViewTargetChanged_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.OldViewTarget = OldViewTarget;
	Parms.NewViewTarget = NewViewTarget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ScoutDroneRuntime.FortChargingSet_ScoutDroneEnergy
// (None)

class UClass* UFortChargingSet_ScoutDroneEnergy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortChargingSet_ScoutDroneEnergy");

	return Clss;
}


// FortChargingSet_ScoutDroneEnergy ScoutDroneRuntime.Default__FortChargingSet_ScoutDroneEnergy
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortChargingSet_ScoutDroneEnergy* UFortChargingSet_ScoutDroneEnergy::GetDefaultObj()
{
	static class UFortChargingSet_ScoutDroneEnergy* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortChargingSet_ScoutDroneEnergy*>(UFortChargingSet_ScoutDroneEnergy::StaticClass()->DefaultObject);

	return Default;
}


// Function ScoutDroneRuntime.FortChargingSet_ScoutDroneEnergy.OnRep_Energy
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FFortGameplayAttributeData  OldValue                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortChargingSet_ScoutDroneEnergy::OnRep_Energy(struct FFortGameplayAttributeData& OldValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortChargingSet_ScoutDroneEnergy", "OnRep_Energy");

	Params::UFortChargingSet_ScoutDroneEnergy_OnRep_Energy_Params Parms{};

	Parms.OldValue = OldValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ScoutDroneRuntime.FortScoutDrone
// (Actor, Pawn)

class UClass* UFortScoutDrone::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortScoutDrone");

	return Clss;
}


// FortScoutDrone ScoutDroneRuntime.Default__FortScoutDrone
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortScoutDrone* UFortScoutDrone::GetDefaultObj()
{
	static class UFortScoutDrone* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortScoutDrone*>(UFortScoutDrone::StaticClass()->DefaultObject);

	return Default;
}


// Function ScoutDroneRuntime.FortScoutDrone.SetupGameplayAudioParameters
// (Final, BlueprintCosmetic, Native, Protected, BlueprintCallable)
// Parameters:

void UFortScoutDrone::SetupGameplayAudioParameters()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortScoutDrone", "SetupGameplayAudioParameters");

	Params::UFortScoutDrone_SetupGameplayAudioParameters_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScoutDroneRuntime.FortScoutDrone.SetTeamMatesIndicator
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               bState                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortScoutDrone::SetTeamMatesIndicator(bool bState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortScoutDrone", "SetTeamMatesIndicator");

	Params::UFortScoutDrone_SetTeamMatesIndicator_Params Parms{};

	Parms.bState = bState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScoutDroneRuntime.FortScoutDrone.SetAffiliationAudio
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortScoutDrone::SetAffiliationAudio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortScoutDrone", "SetAffiliationAudio");

	Params::UFortScoutDrone_SetAffiliationAudio_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScoutDroneRuntime.FortScoutDrone.OnRep_ControllingPlayerPawn
// (Final, Native, Private)
// Parameters:

void UFortScoutDrone::OnRep_ControllingPlayerPawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortScoutDrone", "OnRep_ControllingPlayerPawn");

	Params::UFortScoutDrone_OnRep_ControllingPlayerPawn_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScoutDroneRuntime.FortScoutDrone.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Protected, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       DamageTags                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  HitInfo                                                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class UFortPawn*                   InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, NativeAccessSpecifierPublic)

void UFortScoutDrone::OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class UFortPawn* InstigatedBy, class UActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortScoutDrone", "OnDeathPlayEffects");

	Params::UFortScoutDrone_OnDeathPlayEffects_Params Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoutDroneRuntime.FortScoutDrone.OnDamagePlayEffects
// (BlueprintCosmetic, Event, Protected, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       DamageTags                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  HitInfo                                                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class UFortPawn*                   InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, NativeAccessSpecifierPublic)

void UFortScoutDrone::OnDamagePlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class UFortPawn* InstigatedBy, class UActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortScoutDrone", "OnDamagePlayEffects");

	Params::UFortScoutDrone_OnDamagePlayEffects_Params Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoutDroneRuntime.FortScoutDrone.GetHealthPercentage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortScoutDrone::GetHealthPercentage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortScoutDrone", "GetHealthPercentage");

	Params::UFortScoutDrone_GetHealthPercentage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ScoutDroneRuntime.FortScoutDrone.GetForwardAndRightDotProducts_Native
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              OutForwardDot                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutRightDot                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortScoutDrone::GetForwardAndRightDotProducts_Native(float* OutForwardDot, float* OutRightDot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortScoutDrone", "GetForwardAndRightDotProducts_Native");

	Params::UFortScoutDrone_GetForwardAndRightDotProducts_Native_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutForwardDot != nullptr)
		*OutForwardDot = Parms.OutForwardDot;

	if (OutRightDot != nullptr)
		*OutRightDot = Parms.OutRightDot;

}


// Function ScoutDroneRuntime.FortScoutDrone.GetDeltaRotator
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UFortScoutDrone::GetDeltaRotator()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortScoutDrone", "GetDeltaRotator");

	Params::UFortScoutDrone_GetDeltaRotator_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ScoutDroneRuntime.FortScoutDrone.GetControllingPlayerPawn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortPawn*                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortPawn* UFortScoutDrone::GetControllingPlayerPawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortScoutDrone", "GetControllingPlayerPawn");

	Params::UFortScoutDrone_GetControllingPlayerPawn_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ScoutDroneRuntime.FortScoutDrone.GameplayCue_Damage
// (Native, Protected)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UFortScoutDrone::GameplayCue_Damage(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortScoutDrone", "GameplayCue_Damage");

	Params::UFortScoutDrone_GameplayCue_Damage_Params Parms{};

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ScoutDroneRuntime.FortScoutDroneCameraMode
// (None)

class UClass* UFortScoutDroneCameraMode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortScoutDroneCameraMode");

	return Clss;
}


// FortScoutDroneCameraMode ScoutDroneRuntime.Default__FortScoutDroneCameraMode
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortScoutDroneCameraMode* UFortScoutDroneCameraMode::GetDefaultObj()
{
	static class UFortScoutDroneCameraMode* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortScoutDroneCameraMode*>(UFortScoutDroneCameraMode::StaticClass()->DefaultObject);

	return Default;
}


// Class ScoutDroneRuntime.ScoutDroneDeferredDestructionPayload
// (None)

class UClass* UScoutDroneDeferredDestructionPayload::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScoutDroneDeferredDestructionPayload");

	return Clss;
}


// ScoutDroneDeferredDestructionPayload ScoutDroneRuntime.Default__ScoutDroneDeferredDestructionPayload
// (Public, ClassDefaultObject, ArchetypeObject)

class UScoutDroneDeferredDestructionPayload* UScoutDroneDeferredDestructionPayload::GetDefaultObj()
{
	static class UScoutDroneDeferredDestructionPayload* Default = nullptr;

	if (!Default)
		Default = static_cast<UScoutDroneDeferredDestructionPayload*>(UScoutDroneDeferredDestructionPayload::StaticClass()->DefaultObject);

	return Default;
}


// Class ScoutDroneRuntime.FortScoutDroneControllingComponent
// (None)

class UClass* UFortScoutDroneControllingComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortScoutDroneControllingComponent");

	return Clss;
}


// FortScoutDroneControllingComponent ScoutDroneRuntime.Default__FortScoutDroneControllingComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortScoutDroneControllingComponent* UFortScoutDroneControllingComponent::GetDefaultObj()
{
	static class UFortScoutDroneControllingComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortScoutDroneControllingComponent*>(UFortScoutDroneControllingComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function ScoutDroneRuntime.FortScoutDroneControllingComponent.ServerRequestDroneDismissal
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:

void UFortScoutDroneControllingComponent::ServerRequestDroneDismissal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortScoutDroneControllingComponent", "ServerRequestDroneDismissal");

	Params::UFortScoutDroneControllingComponent_ServerRequestDroneDismissal_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScoutDroneRuntime.FortScoutDroneControllingComponent.OnWeaponEquipped
// (Final, Native, Private)
// Parameters:
// class UFortWeapon*                 NewWeapon                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortWeapon*                 PrevWeapon                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortScoutDroneControllingComponent::OnWeaponEquipped(class UFortWeapon* NewWeapon, class UFortWeapon* PrevWeapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortScoutDroneControllingComponent", "OnWeaponEquipped");

	Params::UFortScoutDroneControllingComponent_OnWeaponEquipped_Params Parms{};

	Parms.NewWeapon = NewWeapon;
	Parms.PrevWeapon = PrevWeapon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScoutDroneRuntime.FortScoutDroneControllingComponent.OnRep_CurrentDestructionData
// (Final, Native, Private)
// Parameters:

void UFortScoutDroneControllingComponent::OnRep_CurrentDestructionData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortScoutDroneControllingComponent", "OnRep_CurrentDestructionData");

	Params::UFortScoutDroneControllingComponent_OnRep_CurrentDestructionData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScoutDroneRuntime.FortScoutDroneControllingComponent.OnRep_ControlledDrone
// (Final, Native, Private)
// Parameters:

void UFortScoutDroneControllingComponent::OnRep_ControlledDrone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortScoutDroneControllingComponent", "OnRep_ControlledDrone");

	Params::UFortScoutDroneControllingComponent_OnRep_ControlledDrone_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScoutDroneRuntime.FortScoutDroneControllingComponent.OnPlayerInterruptionTagsChanged
// (Final, Native, Private)
// Parameters:
// struct FGameplayTag                Tag                                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NewCount                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortScoutDroneControllingComponent::OnPlayerInterruptionTagsChanged(const struct FGameplayTag& Tag, int32 NewCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortScoutDroneControllingComponent", "OnPlayerInterruptionTagsChanged");

	Params::UFortScoutDroneControllingComponent_OnPlayerInterruptionTagsChanged_Params Parms{};

	Parms.Tag = Tag;
	Parms.NewCount = NewCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScoutDroneRuntime.FortScoutDroneControllingComponent.OnOwningPlayerStartedDBNO
// (Final, Native, Private)
// Parameters:

void UFortScoutDroneControllingComponent::OnOwningPlayerStartedDBNO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortScoutDroneControllingComponent", "OnOwningPlayerStartedDBNO");

	Params::UFortScoutDroneControllingComponent_OnOwningPlayerStartedDBNO_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScoutDroneRuntime.FortScoutDroneControllingComponent.OnControlledDroneDestroyed
// (Final, Native, Private)
// Parameters:
// class UActor*                      InControlledDrone                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortScoutDroneControllingComponent::OnControlledDroneDestroyed(class UActor* InControlledDrone)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortScoutDroneControllingComponent", "OnControlledDroneDestroyed");

	Params::UFortScoutDroneControllingComponent_OnControlledDroneDestroyed_Params Parms{};

	Parms.InControlledDrone = InControlledDrone;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScoutDroneRuntime.FortScoutDroneControllingComponent.GetControlledDrone
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortScoutDrone*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortScoutDrone* UFortScoutDroneControllingComponent::GetControlledDrone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortScoutDroneControllingComponent", "GetControlledDrone");

	Params::UFortScoutDroneControllingComponent_GetControlledDrone_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ScoutDroneRuntime.FortScoutDroneControllingComponent.BP_OnPlayerShortInteract
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:

void UFortScoutDroneControllingComponent::BP_OnPlayerShortInteract()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortScoutDroneControllingComponent", "BP_OnPlayerShortInteract");

	Params::UFortScoutDroneControllingComponent_BP_OnPlayerShortInteract_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoutDroneRuntime.FortScoutDroneControllingComponent.BP_OnPlayerInteractLongUseChanged
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bInteracting                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bLongUseInteractionCompleted                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortScoutDroneControllingComponent::BP_OnPlayerInteractLongUseChanged(bool bInteracting, bool bLongUseInteractionCompleted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortScoutDroneControllingComponent", "BP_OnPlayerInteractLongUseChanged");

	Params::UFortScoutDroneControllingComponent_BP_OnPlayerInteractLongUseChanged_Params Parms{};

	Parms.bInteracting = bInteracting;
	Parms.bLongUseInteractionCompleted = bLongUseInteractionCompleted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoutDroneRuntime.FortScoutDroneControllingComponent.BP_OnDroneDestroyed
// (BlueprintCosmetic, Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayTag                DismissalReason                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortScoutDroneControllingComponent::BP_OnDroneDestroyed(struct FGameplayTag& DismissalReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortScoutDroneControllingComponent", "BP_OnDroneDestroyed");

	Params::UFortScoutDroneControllingComponent_BP_OnDroneDestroyed_Params Parms{};

	Parms.DismissalReason = DismissalReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoutDroneRuntime.FortScoutDroneControllingComponent.BP_OnDismissalStarted
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bInstantDismissal                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                DismissalReason                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortScoutDroneControllingComponent::BP_OnDismissalStarted(bool bInstantDismissal, const struct FGameplayTag& DismissalReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortScoutDroneControllingComponent", "BP_OnDismissalStarted");

	Params::UFortScoutDroneControllingComponent_BP_OnDismissalStarted_Params Parms{};

	Parms.bInstantDismissal = bInstantDismissal;
	Parms.DismissalReason = DismissalReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoutDroneRuntime.FortScoutDroneControllingComponent.BP_OnDestructionStarted
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bInstantDestruction                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                DismissalReason                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortScoutDroneControllingComponent::BP_OnDestructionStarted(bool bInstantDestruction, const struct FGameplayTag& DismissalReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortScoutDroneControllingComponent", "BP_OnDestructionStarted");

	Params::UFortScoutDroneControllingComponent_BP_OnDestructionStarted_Params Parms{};

	Parms.bInstantDestruction = bInstantDestruction;
	Parms.DismissalReason = DismissalReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Class ScoutDroneRuntime.FortScoutDroneCooldownMagnitudeCalculation
// (None)

class UClass* UFortScoutDroneCooldownMagnitudeCalculation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortScoutDroneCooldownMagnitudeCalculation");

	return Clss;
}


// FortScoutDroneCooldownMagnitudeCalculation ScoutDroneRuntime.Default__FortScoutDroneCooldownMagnitudeCalculation
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortScoutDroneCooldownMagnitudeCalculation* UFortScoutDroneCooldownMagnitudeCalculation::GetDefaultObj()
{
	static class UFortScoutDroneCooldownMagnitudeCalculation* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortScoutDroneCooldownMagnitudeCalculation*>(UFortScoutDroneCooldownMagnitudeCalculation::StaticClass()->DefaultObject);

	return Default;
}


// Class ScoutDroneRuntime.FortScoutDroneMovementComponent
// (None)

class UClass* UFortScoutDroneMovementComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortScoutDroneMovementComponent");

	return Clss;
}


// FortScoutDroneMovementComponent ScoutDroneRuntime.Default__FortScoutDroneMovementComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortScoutDroneMovementComponent* UFortScoutDroneMovementComponent::GetDefaultObj()
{
	static class UFortScoutDroneMovementComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortScoutDroneMovementComponent*>(UFortScoutDroneMovementComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class ScoutDroneRuntime.FortScoutDronePawnOverrideComponent
// (None)

class UClass* UFortScoutDronePawnOverrideComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortScoutDronePawnOverrideComponent");

	return Clss;
}


// FortScoutDronePawnOverrideComponent ScoutDroneRuntime.Default__FortScoutDronePawnOverrideComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortScoutDronePawnOverrideComponent* UFortScoutDronePawnOverrideComponent::GetDefaultObj()
{
	static class UFortScoutDronePawnOverrideComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortScoutDronePawnOverrideComponent*>(UFortScoutDronePawnOverrideComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class ScoutDroneRuntime.FortScoutDronePawnOwnerOverrideComponent
// (None)

class UClass* UFortScoutDronePawnOwnerOverrideComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortScoutDronePawnOwnerOverrideComponent");

	return Clss;
}


// FortScoutDronePawnOwnerOverrideComponent ScoutDroneRuntime.Default__FortScoutDronePawnOwnerOverrideComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortScoutDronePawnOwnerOverrideComponent* UFortScoutDronePawnOwnerOverrideComponent::GetDefaultObj()
{
	static class UFortScoutDronePawnOwnerOverrideComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortScoutDronePawnOwnerOverrideComponent*>(UFortScoutDronePawnOwnerOverrideComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class ScoutDroneRuntime.FortScoutDronePickupManager
// (None)

class UClass* UFortScoutDronePickupManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortScoutDronePickupManager");

	return Clss;
}


// FortScoutDronePickupManager ScoutDroneRuntime.Default__FortScoutDronePickupManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortScoutDronePickupManager* UFortScoutDronePickupManager::GetDefaultObj()
{
	static class UFortScoutDronePickupManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortScoutDronePickupManager*>(UFortScoutDronePickupManager::StaticClass()->DefaultObject);

	return Default;
}


// Function ScoutDroneRuntime.FortScoutDronePickupManager.ServerUpdateItemAttachment
// (Final, Net, NetReliable, Native, Event, Private, NetServer, HasDefaults)
// Parameters:
// struct FVector                     CalculatedItemOffset                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortScoutDronePickupManager::ServerUpdateItemAttachment(const struct FVector& CalculatedItemOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortScoutDronePickupManager", "ServerUpdateItemAttachment");

	Params::UFortScoutDronePickupManager_ServerUpdateItemAttachment_Params Parms{};

	Parms.CalculatedItemOffset = CalculatedItemOffset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScoutDroneRuntime.FortScoutDronePickupManager.ServerDropAttachedActors
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:

void UFortScoutDronePickupManager::ServerDropAttachedActors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortScoutDronePickupManager", "ServerDropAttachedActors");

	Params::UFortScoutDronePickupManager_ServerDropAttachedActors_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScoutDroneRuntime.FortScoutDronePickupManager.OnRep_AttachedTargets
// (Final, Native, Private)
// Parameters:

void UFortScoutDronePickupManager::OnRep_AttachedTargets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortScoutDronePickupManager", "OnRep_AttachedTargets");

	Params::UFortScoutDronePickupManager_OnRep_AttachedTargets_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScoutDroneRuntime.FortScoutDronePickupManager.OnPawnDBNOStateChanged
// (Final, Native, Private)
// Parameters:
// class UFortPawn*                   Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsDBNO                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortScoutDronePickupManager::OnPawnDBNOStateChanged(class UFortPawn* Pawn, bool bIsDBNO)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortScoutDronePickupManager", "OnPawnDBNOStateChanged");

	Params::UFortScoutDronePickupManager_OnPawnDBNOStateChanged_Params Parms{};

	Parms.Pawn = Pawn;
	Parms.bIsDBNO = bIsDBNO;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScoutDroneRuntime.FortScoutDronePickupManager.OnAttachedPawnDied
// (Final, Native, Private, HasDefaults)
// Parameters:
// class UActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortScoutDronePickupManager::OnAttachedPawnDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortScoutDronePickupManager", "OnAttachedPawnDied");

	Params::UFortScoutDronePickupManager_OnAttachedPawnDied_Params Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = HitLocation;
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = Momentum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScoutDroneRuntime.FortScoutDronePickupManager.HasAPawnAtached
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortScoutDronePickupManager::HasAPawnAtached()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortScoutDronePickupManager", "HasAPawnAtached");

	Params::UFortScoutDronePickupManager_HasAPawnAtached_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ScoutDroneRuntime.FortScoutDronePickupManager.HasAnyAttachedActors
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortScoutDronePickupManager::HasAnyAttachedActors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortScoutDronePickupManager", "HasAnyAttachedActors");

	Params::UFortScoutDronePickupManager_HasAnyAttachedActors_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ScoutDroneRuntime.FortScoutDronePickupManager.BP_OnActorsDetached
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:

void UFortScoutDronePickupManager::BP_OnActorsDetached()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortScoutDronePickupManager", "BP_OnActorsDetached");

	Params::UFortScoutDronePickupManager_BP_OnActorsDetached_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoutDroneRuntime.FortScoutDronePickupManager.BP_OnActorsAttached
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:

void UFortScoutDronePickupManager::BP_OnActorsAttached()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortScoutDronePickupManager", "BP_OnActorsAttached");

	Params::UFortScoutDronePickupManager_BP_OnActorsAttached_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}

}


