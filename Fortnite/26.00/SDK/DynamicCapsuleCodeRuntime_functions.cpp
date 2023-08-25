#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class DynamicCapsuleCodeRuntime.DynamicCapsuleComponent
// (None)

class UClass* UDynamicCapsuleComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicCapsuleComponent");

	return Clss;
}


// DynamicCapsuleComponent DynamicCapsuleCodeRuntime.Default__DynamicCapsuleComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicCapsuleComponent* UDynamicCapsuleComponent::GetDefaultObj()
{
	static class UDynamicCapsuleComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicCapsuleComponent*>(UDynamicCapsuleComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function DynamicCapsuleCodeRuntime.DynamicCapsuleComponent.ServerRemoveDynamicCapsule
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// struct FGameplayTag                Tag                                                              (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDynamicCapsuleComponent::ServerRemoveDynamicCapsule(struct FGameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicCapsuleComponent", "ServerRemoveDynamicCapsule");

	Params::UDynamicCapsuleComponent_ServerRemoveDynamicCapsule_Params Parms{};

	Parms.Tag = Tag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicCapsuleComponent", "ServerApplyDynamicCapsule");

	Params::UDynamicCapsuleComponent_ServerApplyDynamicCapsule_Params Parms{};

	Parms.Tag = Tag;
	Parms.CapsuleRadius = CapsuleRadius;
	Parms.CapsuleHalfHeight = CapsuleHalfHeight;
	Parms.NewRelativeMeshHeight = NewRelativeMeshHeight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DynamicCapsuleCodeRuntime.DynamicCapsuleComponent.RemoveDynamicCapsule
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTag                Tag                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDynamicCapsuleComponent::RemoveDynamicCapsule(struct FGameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicCapsuleComponent", "RemoveDynamicCapsule");

	Params::UDynamicCapsuleComponent_RemoveDynamicCapsule_Params Parms{};

	Parms.Tag = Tag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DynamicCapsuleCodeRuntime.DynamicCapsuleComponent.OnRep_ReplicatedCapsuleState
// (Final, Native, Private)
// Parameters:

void UDynamicCapsuleComponent::OnRep_ReplicatedCapsuleState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicCapsuleComponent", "OnRep_ReplicatedCapsuleState");

	Params::UDynamicCapsuleComponent_OnRep_ReplicatedCapsuleState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DynamicCapsuleCodeRuntime.DynamicCapsuleComponent.OnRep_DynamicCapsuleEntryStack
// (Final, Native, Private)
// Parameters:

void UDynamicCapsuleComponent::OnRep_DynamicCapsuleEntryStack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicCapsuleComponent", "OnRep_DynamicCapsuleEntryStack");

	Params::UDynamicCapsuleComponent_OnRep_DynamicCapsuleEntryStack_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicCapsuleComponent", "ApplyDynamicCapsuleWithLocationAdjust");

	Params::UDynamicCapsuleComponent_ApplyDynamicCapsuleWithLocationAdjust_Params Parms{};

	Parms.Tag = Tag;
	Parms.CapsuleRadius = CapsuleRadius;
	Parms.CapsuleHalfHeight = CapsuleHalfHeight;
	Parms.NewRelativeMeshHeight = NewRelativeMeshHeight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicCapsuleComponent", "ApplyDynamicCapsule");

	Params::UDynamicCapsuleComponent_ApplyDynamicCapsule_Params Parms{};

	Parms.Tag = Tag;
	Parms.CapsuleRadius = CapsuleRadius;
	Parms.CapsuleHalfHeight = CapsuleHalfHeight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class DynamicCapsuleCodeRuntime.AnimNotifyState_SetCapsuleSize
// (None)

class UClass* UAnimNotifyState_SetCapsuleSize::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotifyState_SetCapsuleSize");

	return Clss;
}


// AnimNotifyState_SetCapsuleSize DynamicCapsuleCodeRuntime.Default__AnimNotifyState_SetCapsuleSize
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimNotifyState_SetCapsuleSize* UAnimNotifyState_SetCapsuleSize::GetDefaultObj()
{
	static class UAnimNotifyState_SetCapsuleSize* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotifyState_SetCapsuleSize*>(UAnimNotifyState_SetCapsuleSize::StaticClass()->DefaultObject);

	return Default;
}


// Class DynamicCapsuleCodeRuntime.JumpSlideComponent
// (None)

class UClass* UJumpSlideComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("JumpSlideComponent");

	return Clss;
}


// JumpSlideComponent DynamicCapsuleCodeRuntime.Default__JumpSlideComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UJumpSlideComponent* UJumpSlideComponent::GetDefaultObj()
{
	static class UJumpSlideComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UJumpSlideComponent*>(UJumpSlideComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function DynamicCapsuleCodeRuntime.JumpSlideComponent.OnMovementModeChange
// (Final, Native, Private)
// Parameters:
// class UCharacter*                  Character                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMovementMode           PrevMovementMode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              PreviousCustomMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UJumpSlideComponent::OnMovementModeChange(class UCharacter* Character, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JumpSlideComponent", "OnMovementModeChange");

	Params::UJumpSlideComponent_OnMovementModeChange_Params Parms{};

	Parms.Character = Character;
	Parms.PrevMovementMode = PrevMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DynamicCapsuleCodeRuntime.JumpSlideComponent.OnJumpSlideStart
// (Event, Public, BlueprintEvent)
// Parameters:

void UJumpSlideComponent::OnJumpSlideStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JumpSlideComponent", "OnJumpSlideStart");

	Params::UJumpSlideComponent_OnJumpSlideStart_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function DynamicCapsuleCodeRuntime.JumpSlideComponent.OnJumpSlideEnd
// (Event, Public, BlueprintEvent)
// Parameters:

void UJumpSlideComponent::OnJumpSlideEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JumpSlideComponent", "OnJumpSlideEnd");

	Params::UJumpSlideComponent_OnJumpSlideEnd_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}

}


