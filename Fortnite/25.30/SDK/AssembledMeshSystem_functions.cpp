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


// Function AssembledMeshSystem.AssembledMeshCoordinatorComponent.OnPlayerStatePawnSet
// (Final, Native, Private)
// Parameters:
// class UPlayerState*                Player                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPawn*                       NewPawn                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPawn*                       OldPawn                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAssembledMeshCoordinatorComponent::OnPlayerStatePawnSet(class UPlayerState* Player, class UPawn* NewPawn, class UPawn* OldPawn)
{
	static auto Func = Class->GetFunction("AssembledMeshCoordinatorComponent", "OnPlayerStatePawnSet");

	Params::UAssembledMeshCoordinatorComponent_OnPlayerStatePawnSet_Params Parms;

	Parms.Player = Player;
	Parms.NewPawn = NewPawn;
	Parms.OldPawn = OldPawn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AssembledMeshSystem.AssembledMeshUserComponent.SetMeshPart
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UAssembledMeshSchema*        InMeshPart                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAssembledMeshUserComponent::SetMeshPart(class UAssembledMeshSchema* InMeshPart)
{
	static auto Func = Class->GetFunction("AssembledMeshUserComponent", "SetMeshPart");

	Params::UAssembledMeshUserComponent_SetMeshPart_Params Parms;

	Parms.InMeshPart = InMeshPart;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AssembledMeshSystem.AssembledMeshUserComponent.OnRep_MeshParts
// (Final, Native, Private)
// Parameters:

void UAssembledMeshUserComponent::OnRep_MeshParts()
{
	static auto Func = Class->GetFunction("AssembledMeshUserComponent", "OnRep_MeshParts");

	Params::UAssembledMeshUserComponent_OnRep_MeshParts_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AssembledMeshSystem.AssembledMeshUserComponent.GetMeshPart
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAssembledMeshSchema*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAssembledMeshSchema* UAssembledMeshUserComponent::GetMeshPart()
{
	static auto Func = Class->GetFunction("AssembledMeshUserComponent", "GetMeshPart");

	Params::UAssembledMeshUserComponent_GetMeshPart_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AssembledMeshSystem.AssembledMeshUserComponent.GetAttachToComponent
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USkeletalMeshComponent* UAssembledMeshUserComponent::GetAttachToComponent()
{
	static auto Func = Class->GetFunction("AssembledMeshUserComponent", "GetAttachToComponent");

	Params::UAssembledMeshUserComponent_GetAttachToComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AssembledMeshSystem.AssembledMeshUserComponent.CustomizationCompleted
// (Final, Native, Private)
// Parameters:
// int32                              PartIndex                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAssembledMeshUserComponent::CustomizationCompleted(int32 PartIndex)
{
	static auto Func = Class->GetFunction("AssembledMeshUserComponent", "CustomizationCompleted");

	Params::UAssembledMeshUserComponent_CustomizationCompleted_Params Parms;

	Parms.PartIndex = PartIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
