#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GameplayStateTreeModule.StateTreeComponent
// (None)

class UClass* UStateTreeComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StateTreeComponent");

	return Clss;
}


// StateTreeComponent GameplayStateTreeModule.Default__StateTreeComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UStateTreeComponent* UStateTreeComponent::GetDefaultObj()
{
	static class UStateTreeComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UStateTreeComponent*>(UStateTreeComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayStateTreeModule.StateTreeComponent.SetStartLogicAutomatically
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInStartLogicAutomatically                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStateTreeComponent::SetStartLogicAutomatically(bool bInStartLogicAutomatically)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StateTreeComponent", "SetStartLogicAutomatically");

	Params::UStateTreeComponent_SetStartLogicAutomatically_Params Parms{};

	Parms.bInStartLogicAutomatically = bInStartLogicAutomatically;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayStateTreeModule.StateTreeComponent.SendStateTreeEvent
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FStateTreeEvent             Event                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UStateTreeComponent::SendStateTreeEvent(struct FStateTreeEvent& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StateTreeComponent", "SendStateTreeEvent");

	Params::UStateTreeComponent_SendStateTreeEvent_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayStateTreeModule.StateTreeComponent.GetStateTreeRunStatus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EStateTreeRunStatus     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EStateTreeRunStatus UStateTreeComponent::GetStateTreeRunStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StateTreeComponent", "GetStateTreeRunStatus");

	Params::UStateTreeComponent_GetStateTreeRunStatus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GameplayStateTreeModule.StateTreeComponentSchema
// (None)

class UClass* UStateTreeComponentSchema::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StateTreeComponentSchema");

	return Clss;
}


// StateTreeComponentSchema GameplayStateTreeModule.Default__StateTreeComponentSchema
// (Public, ClassDefaultObject, ArchetypeObject)

class UStateTreeComponentSchema* UStateTreeComponentSchema::GetDefaultObj()
{
	static class UStateTreeComponentSchema* Default = nullptr;

	if (!Default)
		Default = static_cast<UStateTreeComponentSchema*>(UStateTreeComponentSchema::StaticClass()->DefaultObject);

	return Default;
}

}


