#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AIPatrolPath.AIPatrolPathEditorComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UAIPatrolPathEditorComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIPatrolPathEditorComponent");

	return Clss;
}


// AIPatrolPathEditorComponent AIPatrolPath.Default__AIPatrolPathEditorComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAIPatrolPathEditorComponent* UAIPatrolPathEditorComponent::GetDefaultObj()
{
	static class UAIPatrolPathEditorComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIPatrolPathEditorComponent*>(UAIPatrolPathEditorComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class AIPatrolPath.AIPatrolPathComponent
// (None)

class UClass* UAIPatrolPathComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIPatrolPathComponent");

	return Clss;
}


// AIPatrolPathComponent AIPatrolPath.Default__AIPatrolPathComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAIPatrolPathComponent* UAIPatrolPathComponent::GetDefaultObj()
{
	static class UAIPatrolPathComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIPatrolPathComponent*>(UAIPatrolPathComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AIPatrolPath.AIPatrolPathComponent.UpdateEditorComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAIPatrolPathComponent::UpdateEditorComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPatrolPathComponent", "UpdateEditorComponent");

	Params::UAIPatrolPathComponent_UpdateEditorComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AIPatrolPath.AIPatrolPathComponent.ShouldRenderPath
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIPatrolPathComponent::ShouldRenderPath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPatrolPathComponent", "ShouldRenderPath");

	Params::UAIPatrolPathComponent_ShouldRenderPath_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIPatrolPath.AIPatrolPathComponent.SetRenderPath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bRenderPath                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIPatrolPathComponent::SetRenderPath(bool bRenderPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPatrolPathComponent", "SetRenderPath");

	Params::UAIPatrolPathComponent_SetRenderPath_Params Parms{};

	Parms.bRenderPath = bRenderPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AIPatrolPath.AIPatrolPathComponent.SetPatrolPathGroup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EFortCreativePatrolPathGroupPatrolPathGroup                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIPatrolPathComponent::SetPatrolPathGroup(enum class EFortCreativePatrolPathGroup PatrolPathGroup)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPatrolPathComponent", "SetPatrolPathGroup");

	Params::UAIPatrolPathComponent_SetPatrolPathGroup_Params Parms{};

	Parms.PatrolPathGroup = PatrolPathGroup;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AIPatrolPath.AIPatrolPathComponent.SetPatrolPathEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsEnabled                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIPatrolPathComponent::SetPatrolPathEnabled(bool bIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPatrolPathComponent", "SetPatrolPathEnabled");

	Params::UAIPatrolPathComponent_SetPatrolPathEnabled_Params Parms{};

	Parms.bIsEnabled = bIsEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AIPatrolPath.AIPatrolPathComponent.SetPatrollingMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EPatrollingMode         NewMode                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIPatrolPathComponent::SetPatrollingMode(enum class EPatrollingMode NewMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPatrolPathComponent", "SetPatrollingMode");

	Params::UAIPatrolPathComponent_SetPatrollingMode_Params Parms{};

	Parms.NewMode = NewMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AIPatrolPath.AIPatrolPathComponent.RequestRenderPath
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAIPatrolPathComponent::RequestRenderPath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPatrolPathComponent", "RequestRenderPath");

	Params::UAIPatrolPathComponent_RequestRenderPath_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AIPatrolPath.AIPatrolPathComponent.RenderToNextPoint
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAIPatrolPathComponent::RenderToNextPoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPatrolPathComponent", "RenderToNextPoint");

	Params::UAIPatrolPathComponent_RenderToNextPoint_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AIPatrolPath.AIPatrolPathComponent.RenderToNextAndPreviousPoint
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAIPatrolPathComponent::RenderToNextAndPreviousPoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPatrolPathComponent", "RenderToNextAndPreviousPoint");

	Params::UAIPatrolPathComponent_RenderToNextAndPreviousPoint_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AIPatrolPath.AIPatrolPathComponent.RemovePoint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIPatrolPathComponent::RemovePoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPatrolPathComponent", "RemovePoint");

	Params::UAIPatrolPathComponent_RemovePoint_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIPatrolPath.AIPatrolPathComponent.PropagatePatrolPathPointIndexToDevice
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NewPatrolPathPointIndex                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIPatrolPathComponent::PropagatePatrolPathPointIndexToDevice(int32 NewPatrolPathPointIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPatrolPathComponent", "PropagatePatrolPathPointIndexToDevice");

	Params::UAIPatrolPathComponent_PropagatePatrolPathPointIndexToDevice_Params Parms{};

	Parms.NewPatrolPathPointIndex = NewPatrolPathPointIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIPatrolPath.AIPatrolPathComponent.PropagatePatrolPathIndexToDevice
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NewPatrolPathIndex                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIPatrolPathComponent::PropagatePatrolPathIndexToDevice(int32 NewPatrolPathIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPatrolPathComponent", "PropagatePatrolPathIndexToDevice");

	Params::UAIPatrolPathComponent_PropagatePatrolPathIndexToDevice_Params Parms{};

	Parms.NewPatrolPathIndex = NewPatrolPathIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIPatrolPath.AIPatrolPathComponent.PostFinishSpawningActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAIPatrolPathComponent::PostFinishSpawningActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPatrolPathComponent", "PostFinishSpawningActor");

	Params::UAIPatrolPathComponent_PostFinishSpawningActor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AIPatrolPath.AIPatrolPathComponent.PatrolPointReached
// (Final, Native, Private)
// Parameters:
// class UFortAthenaPatrolPoint*      PathPoint                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIController*               Instigator                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIPatrolPathComponent::PatrolPointReached(class UFortAthenaPatrolPoint* PathPoint, class UAIController* Instigator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPatrolPathComponent", "PatrolPointReached");

	Params::UAIPatrolPathComponent_PatrolPointReached_Params Parms{};

	Parms.PathPoint = PathPoint;
	Parms.Instigator = Instigator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AIPatrolPath.AIPatrolPathComponent.PatrolPointFailedToReach
// (Final, Native, Private)
// Parameters:
// class UFortAthenaPatrolPoint*      PathPoint                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIController*               Instigator                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIPatrolPathComponent::PatrolPointFailedToReach(class UFortAthenaPatrolPoint* PathPoint, class UAIController* Instigator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPatrolPathComponent", "PatrolPointFailedToReach");

	Params::UAIPatrolPathComponent_PatrolPointFailedToReach_Params Parms{};

	Parms.PathPoint = PathPoint;
	Parms.Instigator = Instigator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AIPatrolPath.AIPatrolPathComponent.PatrolPathStopped
// (Final, Native, Private)
// Parameters:
// class UAIController*               Instigator                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIPatrolPathComponent::PatrolPathStopped(class UAIController* Instigator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPatrolPathComponent", "PatrolPathStopped");

	Params::UAIPatrolPathComponent_PatrolPathStopped_Params Parms{};

	Parms.Instigator = Instigator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AIPatrolPath.AIPatrolPathComponent.PatrolPathStarted
// (Final, Native, Private)
// Parameters:
// class UAIController*               Instigator                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIPatrolPathComponent::PatrolPathStarted(class UAIController* Instigator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPatrolPathComponent", "PatrolPathStarted");

	Params::UAIPatrolPathComponent_PatrolPathStarted_Params Parms{};

	Parms.Instigator = Instigator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AIPatrolPath.AIPatrolPathComponent.OnPatrolPathActorAssigned
// (Event, Public, BlueprintEvent)
// Parameters:

void UAIPatrolPathComponent::OnPatrolPathActorAssigned()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPatrolPathComponent", "OnPatrolPathActorAssigned");

	Params::UAIPatrolPathComponent_OnPatrolPathActorAssigned_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function AIPatrolPath.AIPatrolPathComponent.OnPathExtremitiesChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsStart                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsEnd                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIPatrolPathComponent::OnPathExtremitiesChanged(bool bIsStart, bool bIsEnd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPatrolPathComponent", "OnPathExtremitiesChanged");

	Params::UAIPatrolPathComponent_OnPathExtremitiesChanged_Params Parms{};

	Parms.bIsStart = bIsStart;
	Parms.bIsEnd = bIsEnd;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIPatrolPath.AIPatrolPathComponent.OnAnyPropertyChanged
// (Final, Native, Protected)
// Parameters:

void UAIPatrolPathComponent::OnAnyPropertyChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPatrolPathComponent", "OnAnyPropertyChanged");

	Params::UAIPatrolPathComponent_OnAnyPropertyChanged_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AIPatrolPath.AIPatrolPathComponent.NotifyEditorUserOptionChanged
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              UserOptions                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UAIPatrolPathComponent::NotifyEditorUserOptionChanged(TArray<class FString>& UserOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPatrolPathComponent", "NotifyEditorUserOptionChanged");

	Params::UAIPatrolPathComponent_NotifyEditorUserOptionChanged_Params Parms{};

	Parms.UserOptions = UserOptions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AIPatrolPath.AIPatrolPathComponent.HasValidPatrolPath
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIPatrolPathComponent::HasValidPatrolPath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPatrolPathComponent", "HasValidPatrolPath");

	Params::UAIPatrolPathComponent_HasValidPatrolPath_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIPatrolPath.AIPatrolPathComponent.GetPatrolPathPointIndexFromDevice
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAIPatrolPathComponent::GetPatrolPathPointIndexFromDevice()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPatrolPathComponent", "GetPatrolPathPointIndexFromDevice");

	Params::UAIPatrolPathComponent_GetPatrolPathPointIndexFromDevice_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIPatrolPath.AIPatrolPathComponent.GetPatrolPathPointIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAIPatrolPathComponent::GetPatrolPathPointIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPatrolPathComponent", "GetPatrolPathPointIndex");

	Params::UAIPatrolPathComponent_GetPatrolPathPointIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIPatrolPath.AIPatrolPathComponent.GetPatrolPathPoint
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InPatrolPathIndex                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InPatrolPathPointIndex                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIPatrolPathComponent*      ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAIPatrolPathComponent* UAIPatrolPathComponent::GetPatrolPathPoint(int32 InPatrolPathIndex, int32 InPatrolPathPointIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPatrolPathComponent", "GetPatrolPathPoint");

	Params::UAIPatrolPathComponent_GetPatrolPathPoint_Params Parms{};

	Parms.InPatrolPathIndex = InPatrolPathIndex;
	Parms.InPatrolPathPointIndex = InPatrolPathPointIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIPatrolPath.AIPatrolPathComponent.GetPatrolPathIndexFromDevice
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAIPatrolPathComponent::GetPatrolPathIndexFromDevice()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPatrolPathComponent", "GetPatrolPathIndexFromDevice");

	Params::UAIPatrolPathComponent_GetPatrolPathIndexFromDevice_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIPatrolPath.AIPatrolPathComponent.GetPatrolPathIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAIPatrolPathComponent::GetPatrolPathIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPatrolPathComponent", "GetPatrolPathIndex");

	Params::UAIPatrolPathComponent_GetPatrolPathIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIPatrolPath.AIPatrolPathComponent.GetPatrolPathGroup
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// enum class EFortCreativePatrolPathGroupReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EFortCreativePatrolPathGroup UAIPatrolPathComponent::GetPatrolPathGroup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPatrolPathComponent", "GetPatrolPathGroup");

	Params::UAIPatrolPathComponent_GetPatrolPathGroup_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIPatrolPath.AIPatrolPathComponent.GetPatrollingMode
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// enum class EPatrollingMode         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EPatrollingMode UAIPatrolPathComponent::GetPatrollingMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPatrolPathComponent", "GetPatrollingMode");

	Params::UAIPatrolPathComponent_GetPatrollingMode_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIPatrolPath.AIPatrolPathComponent.GetPatrolFilterOptions
// (Event, Public, BlueprintEvent)
// Parameters:
// TSubclassOf<class UNavigationQueryFilter>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSubclassOf<class UNavigationQueryFilter> UAIPatrolPathComponent::GetPatrolFilterOptions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPatrolPathComponent", "GetPatrolFilterOptions");

	Params::UAIPatrolPathComponent_GetPatrolFilterOptions_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIPatrolPath.AIPatrolPathComponent.GetNextAvailablePatrolPathIndex
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              NextAvailableIndex                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIPatrolPathComponent::GetNextAvailablePatrolPathIndex(int32* NextAvailableIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPatrolPathComponent", "GetNextAvailablePatrolPathIndex");

	Params::UAIPatrolPathComponent_GetNextAvailablePatrolPathIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NextAvailableIndex != nullptr)
		*NextAvailableIndex = Parms.NextAvailableIndex;

	return Parms.ReturnValue;

}


// Function AIPatrolPath.AIPatrolPathComponent.GetLinkedPatrolPoints
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UAIPatrolPathComponent*>ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

TArray<class UAIPatrolPathComponent*> UAIPatrolPathComponent::GetLinkedPatrolPoints()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPatrolPathComponent", "GetLinkedPatrolPoints");

	Params::UAIPatrolPathComponent_GetLinkedPatrolPoints_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIPatrolPath.AIPatrolPathComponent.GeneratePathPoints
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EFortCreativePatrolPathGroupPatrolPathGroup                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bGenerationCausedByDuplication                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIPatrolPathComponent::GeneratePathPoints(enum class EFortCreativePatrolPathGroup PatrolPathGroup, bool bGenerationCausedByDuplication)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPatrolPathComponent", "GeneratePathPoints");

	Params::UAIPatrolPathComponent_GeneratePathPoints_Params Parms{};

	Parms.PatrolPathGroup = PatrolPathGroup;
	Parms.bGenerationCausedByDuplication = bGenerationCausedByDuplication;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AIPatrolPath.AIPatrolPathComponent.CanNextPointBeReached
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIPatrolPathComponent::CanNextPointBeReached()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPatrolPathComponent", "CanNextPointBeReached");

	Params::UAIPatrolPathComponent_CanNextPointBeReached_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


