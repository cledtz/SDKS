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


// Function DynamicCapsuleCodeRuntime.DynamicCapsuleComponent.ServerRemoveDynamicCapsule
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// struct FGameplayTag                Tag                                                              (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDynamicCapsuleComponent::ServerRemoveDynamicCapsule(struct FGameplayTag& Tag)
{
	static auto Func = Class->GetFunction("DynamicCapsuleComponent", "ServerRemoveDynamicCapsule");

	Params::UDynamicCapsuleComponent_ServerRemoveDynamicCapsule_Params Parms;

	Parms.Tag = Tag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DynamicCapsuleCodeRuntime.DynamicCapsuleComponent.ServerApplyDynamicCapsule
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// struct FGameplayTag                Tag                                                              (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CapsuleRadius                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CapsuleHalfHeight                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             NewRelativeMeshHeight                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDynamicCapsuleComponent::ServerApplyDynamicCapsule(struct FGameplayTag& Tag, float CapsuleRadius, float CapsuleHalfHeight, double NewRelativeMeshHeight)
{
	static auto Func = Class->GetFunction("DynamicCapsuleComponent", "ServerApplyDynamicCapsule");

	Params::UDynamicCapsuleComponent_ServerApplyDynamicCapsule_Params Parms;

	Parms.Tag = Tag;
	Parms.CapsuleRadius = CapsuleRadius;
	Parms.CapsuleHalfHeight = CapsuleHalfHeight;
	Parms.NewRelativeMeshHeight = NewRelativeMeshHeight;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DynamicCapsuleCodeRuntime.DynamicCapsuleComponent.RemoveDynamicCapsule
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTag                Tag                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDynamicCapsuleComponent::RemoveDynamicCapsule(struct FGameplayTag& Tag)
{
	static auto Func = Class->GetFunction("DynamicCapsuleComponent", "RemoveDynamicCapsule");

	Params::UDynamicCapsuleComponent_RemoveDynamicCapsule_Params Parms;

	Parms.Tag = Tag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DynamicCapsuleCodeRuntime.DynamicCapsuleComponent.OnRep_ReplicatedCapsuleState
// (Final, Native, Private)
// Parameters:

void UDynamicCapsuleComponent::OnRep_ReplicatedCapsuleState()
{
	static auto Func = Class->GetFunction("DynamicCapsuleComponent", "OnRep_ReplicatedCapsuleState");

	Params::UDynamicCapsuleComponent_OnRep_ReplicatedCapsuleState_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DynamicCapsuleCodeRuntime.DynamicCapsuleComponent.OnRep_DynamicCapsuleEntryStack
// (Final, Native, Private)
// Parameters:

void UDynamicCapsuleComponent::OnRep_DynamicCapsuleEntryStack()
{
	static auto Func = Class->GetFunction("DynamicCapsuleComponent", "OnRep_DynamicCapsuleEntryStack");

	Params::UDynamicCapsuleComponent_OnRep_DynamicCapsuleEntryStack_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DynamicCapsuleCodeRuntime.DynamicCapsuleComponent.ApplyDynamicCapsuleWithLocationAdjust
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTag                Tag                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CapsuleRadius                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CapsuleHalfHeight                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             NewRelativeMeshHeight                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDynamicCapsuleComponent::ApplyDynamicCapsuleWithLocationAdjust(struct FGameplayTag& Tag, float CapsuleRadius, float CapsuleHalfHeight, double NewRelativeMeshHeight)
{
	static auto Func = Class->GetFunction("DynamicCapsuleComponent", "ApplyDynamicCapsuleWithLocationAdjust");

	Params::UDynamicCapsuleComponent_ApplyDynamicCapsuleWithLocationAdjust_Params Parms;

	Parms.Tag = Tag;
	Parms.CapsuleRadius = CapsuleRadius;
	Parms.CapsuleHalfHeight = CapsuleHalfHeight;
	Parms.NewRelativeMeshHeight = NewRelativeMeshHeight;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DynamicCapsuleCodeRuntime.DynamicCapsuleComponent.ApplyDynamicCapsule
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTag                Tag                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CapsuleRadius                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CapsuleHalfHeight                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDynamicCapsuleComponent::ApplyDynamicCapsule(struct FGameplayTag& Tag, float CapsuleRadius, float CapsuleHalfHeight)
{
	static auto Func = Class->GetFunction("DynamicCapsuleComponent", "ApplyDynamicCapsule");

	Params::UDynamicCapsuleComponent_ApplyDynamicCapsule_Params Parms;

	Parms.Tag = Tag;
	Parms.CapsuleRadius = CapsuleRadius;
	Parms.CapsuleHalfHeight = CapsuleHalfHeight;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DynamicCapsuleCodeRuntime.JumpSlideComponent.OnMovementModeChange
// (Final, Native, Private)
// Parameters:
// class UCharacter*                  Character                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMovementMode           PrevMovementMode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              PreviousCustomMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UJumpSlideComponent::OnMovementModeChange(class UCharacter* Character, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode)
{
	static auto Func = Class->GetFunction("JumpSlideComponent", "OnMovementModeChange");

	Params::UJumpSlideComponent_OnMovementModeChange_Params Parms;

	Parms.Character = Character;
	Parms.PrevMovementMode = PrevMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DynamicCapsuleCodeRuntime.JumpSlideComponent.OnJumpSlideStart
// (Event, Public, BlueprintEvent)
// Parameters:

void UJumpSlideComponent::OnJumpSlideStart()
{
	static auto Func = Class->GetFunction("JumpSlideComponent", "OnJumpSlideStart");

	Params::UJumpSlideComponent_OnJumpSlideStart_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function DynamicCapsuleCodeRuntime.JumpSlideComponent.OnJumpSlideEnd
// (Event, Public, BlueprintEvent)
// Parameters:

void UJumpSlideComponent::OnJumpSlideEnd()
{
	static auto Func = Class->GetFunction("JumpSlideComponent", "OnJumpSlideEnd");

	Params::UJumpSlideComponent_OnJumpSlideEnd_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
