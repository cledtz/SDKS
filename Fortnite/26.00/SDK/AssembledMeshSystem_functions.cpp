#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AssembledMeshSystem.AssembledMeshCoordinatorComponent
// (None)

class UClass* UAssembledMeshCoordinatorComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AssembledMeshCoordinatorComponent");

	return Clss;
}


// AssembledMeshCoordinatorComponent AssembledMeshSystem.Default__AssembledMeshCoordinatorComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAssembledMeshCoordinatorComponent* UAssembledMeshCoordinatorComponent::GetDefaultObj()
{
	static class UAssembledMeshCoordinatorComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAssembledMeshCoordinatorComponent*>(UAssembledMeshCoordinatorComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AssembledMeshSystem.AssembledMeshCoordinatorComponent.OnPlayerStatePawnSet
// (Final, Native, Private)
// Parameters:
// class UPlayerState*                Player                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPawn*                       NewPawn                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPawn*                       OldPawn                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAssembledMeshCoordinatorComponent::OnPlayerStatePawnSet(class UPlayerState* Player, class UPawn* NewPawn, class UPawn* OldPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssembledMeshCoordinatorComponent", "OnPlayerStatePawnSet");

	Params::UAssembledMeshCoordinatorComponent_OnPlayerStatePawnSet_Params Parms{};

	Parms.Player = Player;
	Parms.NewPawn = NewPawn;
	Parms.OldPawn = OldPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AssembledMeshSystem.AssembledMeshSchema
// (None)

class UClass* UAssembledMeshSchema::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AssembledMeshSchema");

	return Clss;
}


// AssembledMeshSchema AssembledMeshSystem.Default__AssembledMeshSchema
// (Public, ClassDefaultObject, ArchetypeObject)

class UAssembledMeshSchema* UAssembledMeshSchema::GetDefaultObj()
{
	static class UAssembledMeshSchema* Default = nullptr;

	if (!Default)
		Default = static_cast<UAssembledMeshSchema*>(UAssembledMeshSchema::StaticClass()->DefaultObject);

	return Default;
}


// Class AssembledMeshSystem.AssembledMeshUserComponent
// (None)

class UClass* UAssembledMeshUserComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AssembledMeshUserComponent");

	return Clss;
}


// AssembledMeshUserComponent AssembledMeshSystem.Default__AssembledMeshUserComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAssembledMeshUserComponent* UAssembledMeshUserComponent::GetDefaultObj()
{
	static class UAssembledMeshUserComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAssembledMeshUserComponent*>(UAssembledMeshUserComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AssembledMeshSystem.AssembledMeshUserComponent.SetMeshPart
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UAssembledMeshSchema*        InMeshPart                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAssembledMeshUserComponent::SetMeshPart(class UAssembledMeshSchema* InMeshPart)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssembledMeshUserComponent", "SetMeshPart");

	Params::UAssembledMeshUserComponent_SetMeshPart_Params Parms{};

	Parms.InMeshPart = InMeshPart;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssembledMeshSystem.AssembledMeshUserComponent.OnRep_MeshParts
// (Final, Native, Private)
// Parameters:

void UAssembledMeshUserComponent::OnRep_MeshParts()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssembledMeshUserComponent", "OnRep_MeshParts");

	Params::UAssembledMeshUserComponent_OnRep_MeshParts_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssembledMeshSystem.AssembledMeshUserComponent.GetMeshPart
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAssembledMeshSchema*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAssembledMeshSchema* UAssembledMeshUserComponent::GetMeshPart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssembledMeshUserComponent", "GetMeshPart");

	Params::UAssembledMeshUserComponent_GetMeshPart_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AssembledMeshSystem.AssembledMeshUserComponent.GetAttachToComponent
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USkeletalMeshComponent* UAssembledMeshUserComponent::GetAttachToComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssembledMeshUserComponent", "GetAttachToComponent");

	Params::UAssembledMeshUserComponent_GetAttachToComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AssembledMeshSystem.AssembledMeshUserComponent.GatherAndAssignAssembledMeshParts
// (Native, Public)
// Parameters:

void UAssembledMeshUserComponent::GatherAndAssignAssembledMeshParts()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssembledMeshUserComponent", "GatherAndAssignAssembledMeshParts");

	Params::UAssembledMeshUserComponent_GatherAndAssignAssembledMeshParts_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssembledMeshSystem.AssembledMeshUserComponent.CustomizationCompleted
// (Final, Native, Private)
// Parameters:
// int32                              PartIndex                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAssembledMeshUserComponent::CustomizationCompleted(int32 PartIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssembledMeshUserComponent", "CustomizationCompleted");

	Params::UAssembledMeshUserComponent_CustomizationCompleted_Params Parms{};

	Parms.PartIndex = PartIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


