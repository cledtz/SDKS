#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class StateTreeModule.StateTreeSettings
// (None)

class UClass* UStateTreeSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StateTreeSettings");

	return Clss;
}


// StateTreeSettings StateTreeModule.Default__StateTreeSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UStateTreeSettings* UStateTreeSettings::GetDefaultObj()
{
	static class UStateTreeSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UStateTreeSettings*>(UStateTreeSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class StateTreeModule.StateTreeNodeBlueprintBase
// (None)

class UClass* UStateTreeNodeBlueprintBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StateTreeNodeBlueprintBase");

	return Clss;
}


// StateTreeNodeBlueprintBase StateTreeModule.Default__StateTreeNodeBlueprintBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UStateTreeNodeBlueprintBase* UStateTreeNodeBlueprintBase::GetDefaultObj()
{
	static class UStateTreeNodeBlueprintBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UStateTreeNodeBlueprintBase*>(UStateTreeNodeBlueprintBase::StaticClass()->DefaultObject);

	return Default;
}


// Function StateTreeModule.StateTreeNodeBlueprintBase.SendEvent
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FStateTreeEvent             Event                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UStateTreeNodeBlueprintBase::SendEvent(struct FStateTreeEvent& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StateTreeNodeBlueprintBase", "SendEvent");

	Params::UStateTreeNodeBlueprintBase_SendEvent_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function StateTreeModule.StateTreeNodeBlueprintBase.RequestTransition
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FStateTreeStateLink         TargetState                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EStateTreeTransitionPriorityPriority                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStateTreeNodeBlueprintBase::RequestTransition(struct FStateTreeStateLink& TargetState, enum class EStateTreeTransitionPriority Priority)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StateTreeNodeBlueprintBase", "RequestTransition");

	Params::UStateTreeNodeBlueprintBase_RequestTransition_Params Parms{};

	Parms.TargetState = TargetState;
	Parms.Priority = Priority;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class StateTreeModule.StateTreeConditionBlueprintBase
// (None)

class UClass* UStateTreeConditionBlueprintBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StateTreeConditionBlueprintBase");

	return Clss;
}


// StateTreeConditionBlueprintBase StateTreeModule.Default__StateTreeConditionBlueprintBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UStateTreeConditionBlueprintBase* UStateTreeConditionBlueprintBase::GetDefaultObj()
{
	static class UStateTreeConditionBlueprintBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UStateTreeConditionBlueprintBase*>(UStateTreeConditionBlueprintBase::StaticClass()->DefaultObject);

	return Default;
}


// Function StateTreeModule.StateTreeConditionBlueprintBase.ReceiveTestCondition
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UStateTreeConditionBlueprintBase::ReceiveTestCondition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StateTreeConditionBlueprintBase", "ReceiveTestCondition");

	Params::UStateTreeConditionBlueprintBase_ReceiveTestCondition_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Class StateTreeModule.StateTreeEvaluatorBlueprintBase
// (None)

class UClass* UStateTreeEvaluatorBlueprintBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StateTreeEvaluatorBlueprintBase");

	return Clss;
}


// StateTreeEvaluatorBlueprintBase StateTreeModule.Default__StateTreeEvaluatorBlueprintBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UStateTreeEvaluatorBlueprintBase* UStateTreeEvaluatorBlueprintBase::GetDefaultObj()
{
	static class UStateTreeEvaluatorBlueprintBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UStateTreeEvaluatorBlueprintBase*>(UStateTreeEvaluatorBlueprintBase::StaticClass()->DefaultObject);

	return Default;
}


// Function StateTreeModule.StateTreeEvaluatorBlueprintBase.ReceiveTreeStop
// (Event, Public, BlueprintEvent)
// Parameters:

void UStateTreeEvaluatorBlueprintBase::ReceiveTreeStop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StateTreeEvaluatorBlueprintBase", "ReceiveTreeStop");

	Params::UStateTreeEvaluatorBlueprintBase_ReceiveTreeStop_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function StateTreeModule.StateTreeEvaluatorBlueprintBase.ReceiveTreeStart
// (Event, Public, BlueprintEvent)
// Parameters:

void UStateTreeEvaluatorBlueprintBase::ReceiveTreeStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StateTreeEvaluatorBlueprintBase", "ReceiveTreeStart");

	Params::UStateTreeEvaluatorBlueprintBase_ReceiveTreeStart_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function StateTreeModule.StateTreeEvaluatorBlueprintBase.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStateTreeEvaluatorBlueprintBase::ReceiveTick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StateTreeEvaluatorBlueprintBase", "ReceiveTick");

	Params::UStateTreeEvaluatorBlueprintBase_ReceiveTick_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Class StateTreeModule.StateTreeTaskBlueprintBase
// (None)

class UClass* UStateTreeTaskBlueprintBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StateTreeTaskBlueprintBase");

	return Clss;
}


// StateTreeTaskBlueprintBase StateTreeModule.Default__StateTreeTaskBlueprintBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UStateTreeTaskBlueprintBase* UStateTreeTaskBlueprintBase::GetDefaultObj()
{
	static class UStateTreeTaskBlueprintBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UStateTreeTaskBlueprintBase*>(UStateTreeTaskBlueprintBase::StaticClass()->DefaultObject);

	return Default;
}


// Function StateTreeModule.StateTreeTaskBlueprintBase.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EStateTreeRunStatus     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EStateTreeRunStatus UStateTreeTaskBlueprintBase::ReceiveTick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StateTreeTaskBlueprintBase", "ReceiveTick");

	Params::UStateTreeTaskBlueprintBase_ReceiveTick_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function StateTreeModule.StateTreeTaskBlueprintBase.ReceiveStateCompleted
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EStateTreeRunStatus     CompletionStatus                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FStateTreeActiveStates      CompletedActiveStates                                            (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)

void UStateTreeTaskBlueprintBase::ReceiveStateCompleted(enum class EStateTreeRunStatus CompletionStatus, const struct FStateTreeActiveStates& CompletedActiveStates)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StateTreeTaskBlueprintBase", "ReceiveStateCompleted");

	Params::UStateTreeTaskBlueprintBase_ReceiveStateCompleted_Params Parms{};

	Parms.CompletionStatus = CompletionStatus;
	Parms.CompletedActiveStates = CompletedActiveStates;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StateTreeModule.StateTreeTaskBlueprintBase.ReceiveLatentTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStateTreeTaskBlueprintBase::ReceiveLatentTick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StateTreeTaskBlueprintBase", "ReceiveLatentTick");

	Params::UStateTreeTaskBlueprintBase_ReceiveLatentTick_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StateTreeModule.StateTreeTaskBlueprintBase.ReceiveLatentEnterState
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FStateTreeTransitionResult  TRANSITION                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UStateTreeTaskBlueprintBase::ReceiveLatentEnterState(struct FStateTreeTransitionResult& TRANSITION)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StateTreeTaskBlueprintBase", "ReceiveLatentEnterState");

	Params::UStateTreeTaskBlueprintBase_ReceiveLatentEnterState_Params Parms{};

	Parms.TRANSITION = TRANSITION;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StateTreeModule.StateTreeTaskBlueprintBase.ReceiveExitState
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FStateTreeTransitionResult  TRANSITION                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UStateTreeTaskBlueprintBase::ReceiveExitState(struct FStateTreeTransitionResult& TRANSITION)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StateTreeTaskBlueprintBase", "ReceiveExitState");

	Params::UStateTreeTaskBlueprintBase_ReceiveExitState_Params Parms{};

	Parms.TRANSITION = TRANSITION;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StateTreeModule.StateTreeTaskBlueprintBase.ReceiveEnterState
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FStateTreeTransitionResult  TRANSITION                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EStateTreeRunStatus     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EStateTreeRunStatus UStateTreeTaskBlueprintBase::ReceiveEnterState(struct FStateTreeTransitionResult& TRANSITION)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StateTreeTaskBlueprintBase", "ReceiveEnterState");

	Params::UStateTreeTaskBlueprintBase_ReceiveEnterState_Params Parms{};

	Parms.TRANSITION = TRANSITION;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function StateTreeModule.StateTreeTaskBlueprintBase.FinishTask
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               bSucceeded                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStateTreeTaskBlueprintBase::FinishTask(bool bSucceeded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StateTreeTaskBlueprintBase", "FinishTask");

	Params::UStateTreeTaskBlueprintBase_FinishTask_Params Parms{};

	Parms.bSucceeded = bSucceeded;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class StateTreeModule.StateTree
// (None)

class UClass* UStateTree::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StateTree");

	return Clss;
}


// StateTree StateTreeModule.Default__StateTree
// (Public, ClassDefaultObject, ArchetypeObject)

class UStateTree* UStateTree::GetDefaultObj()
{
	static class UStateTree* Default = nullptr;

	if (!Default)
		Default = static_cast<UStateTree*>(UStateTree::StaticClass()->DefaultObject);

	return Default;
}


// Class StateTreeModule.StateTreeSchema
// (None)

class UClass* UStateTreeSchema::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StateTreeSchema");

	return Clss;
}


// StateTreeSchema StateTreeModule.Default__StateTreeSchema
// (Public, ClassDefaultObject, ArchetypeObject)

class UStateTreeSchema* UStateTreeSchema::GetDefaultObj()
{
	static class UStateTreeSchema* Default = nullptr;

	if (!Default)
		Default = static_cast<UStateTreeSchema*>(UStateTreeSchema::StaticClass()->DefaultObject);

	return Default;
}

}


