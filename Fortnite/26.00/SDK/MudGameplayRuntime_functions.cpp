#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MudGameplayRuntime.FortPawnComponent_Mud
// (None)

class UClass* UFortPawnComponent_Mud::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPawnComponent_Mud");

	return Clss;
}


// FortPawnComponent_Mud MudGameplayRuntime.Default__FortPawnComponent_Mud
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPawnComponent_Mud* UFortPawnComponent_Mud::GetDefaultObj()
{
	static class UFortPawnComponent_Mud* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPawnComponent_Mud*>(UFortPawnComponent_Mud::StaticClass()->DefaultObject);

	return Default;
}


// Function MudGameplayRuntime.FortPawnComponent_Mud.OnSprintingTagCountChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Tag                                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NewCount                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPawnComponent_Mud::OnSprintingTagCountChanged(const struct FGameplayTag& Tag, int32 NewCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_Mud", "OnSprintingTagCountChanged");

	Params::UFortPawnComponent_Mud_OnSprintingTagCountChanged_Params Parms{};

	Parms.Tag = Tag;
	Parms.NewCount = NewCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MudGameplayRuntime.FortPawnComponent_Mud.OnSlidingTagCountChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Tag                                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NewCount                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPawnComponent_Mud::OnSlidingTagCountChanged(const struct FGameplayTag& Tag, int32 NewCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_Mud", "OnSlidingTagCountChanged");

	Params::UFortPawnComponent_Mud_OnSlidingTagCountChanged_Params Parms{};

	Parms.Tag = Tag;
	Parms.NewCount = NewCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MudGameplayRuntime.FortPawnComponent_Mud.OnExitedMud
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortPawnComponent_Mud::OnExitedMud()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_Mud", "OnExitedMud");

	Params::UFortPawnComponent_Mud_OnExitedMud_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function MudGameplayRuntime.FortPawnComponent_Mud.OnEnteredMud
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortPawnComponent_Mud::OnEnteredMud()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_Mud", "OnEnteredMud");

	Params::UFortPawnComponent_Mud_OnEnteredMud_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function MudGameplayRuntime.FortPawnComponent_Mud.OnCurieFireTagCountChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Tag                                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NewCount                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPawnComponent_Mud::OnCurieFireTagCountChanged(const struct FGameplayTag& Tag, int32 NewCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_Mud", "OnCurieFireTagCountChanged");

	Params::UFortPawnComponent_Mud_OnCurieFireTagCountChanged_Params Parms{};

	Parms.Tag = Tag;
	Parms.NewCount = NewCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MudGameplayRuntime.FortPawnComponent_Mud.OnCreatureSprintingTagCountChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Tag                                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NewCount                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPawnComponent_Mud::OnCreatureSprintingTagCountChanged(const struct FGameplayTag& Tag, int32 NewCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_Mud", "OnCreatureSprintingTagCountChanged");

	Params::UFortPawnComponent_Mud_OnCreatureSprintingTagCountChanged_Params Parms{};

	Parms.Tag = Tag;
	Parms.NewCount = NewCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MudGameplayRuntime.FortPawnComponent_Mud.OnAttachedParentCoveredInMud
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          Payload                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortPawnComponent_Mud::OnAttachedParentCoveredInMud(struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_Mud", "OnAttachedParentCoveredInMud");

	Params::UFortPawnComponent_Mud_OnAttachedParentCoveredInMud_Params Parms{};

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MudGameplayRuntime.FortPawnComponent_Mud.HandleSurfaceTypeChanged
// (Final, Native, Private)
// Parameters:
// class UActor*                      SurfaceActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EPhysicalSurface        CurrentSurfaceType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EPhysicalSurface        PrevSurfaceType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPawnComponent_Mud::HandleSurfaceTypeChanged(class UActor* SurfaceActor, enum class EPhysicalSurface CurrentSurfaceType, enum class EPhysicalSurface PrevSurfaceType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_Mud", "HandleSurfaceTypeChanged");

	Params::UFortPawnComponent_Mud_HandleSurfaceTypeChanged_Params Parms{};

	Parms.SurfaceActor = SurfaceActor;
	Parms.CurrentSurfaceType = CurrentSurfaceType;
	Parms.PrevSurfaceType = PrevSurfaceType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MudGameplayRuntime.FortPawnComponent_Mud.HandleASCInitialized
// (Final, Native, Private)
// Parameters:
// class UFortAbilitySystemComponent* AbilitySystemComponent                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPlayerPawn*             AffectedPawn                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPawnComponent_Mud::HandleASCInitialized(class UFortAbilitySystemComponent* AbilitySystemComponent, class UFortPlayerPawn* AffectedPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_Mud", "HandleASCInitialized");

	Params::UFortPawnComponent_Mud_HandleASCInitialized_Params Parms{};

	Parms.AbilitySystemComponent = AbilitySystemComponent;
	Parms.AffectedPawn = AffectedPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


