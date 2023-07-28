#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.SetValueAsSOClaimHandle
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UBlackboardComponent*        BlackboardComponent                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSmartObjectClaimHandle     Value                                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)

void USmartObjectBlueprintFunctionLibrary::SetValueAsSOClaimHandle(class UBlackboardComponent* BlackboardComponent, class FName& KeyName, const struct FSmartObjectClaimHandle& Value)
{
	static auto Func = Class->GetFunction("SmartObjectBlueprintFunctionLibrary", "SetValueAsSOClaimHandle");

	Params::USmartObjectBlueprintFunctionLibrary_SetValueAsSOClaimHandle_Params Parms;

	Parms.BlackboardComponent = BlackboardComponent;
	Parms.KeyName = KeyName;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.SetSmartObjectEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActor*                      SmartObjectActor                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnabled                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USmartObjectBlueprintFunctionLibrary::SetSmartObjectEnabled(class UActor* SmartObjectActor, bool bEnabled)
{
	static auto Func = Class->GetFunction("SmartObjectBlueprintFunctionLibrary", "SetSmartObjectEnabled");

	Params::USmartObjectBlueprintFunctionLibrary_SetSmartObjectEnabled_Params Parms;

	Parms.SmartObjectActor = SmartObjectActor;
	Parms.bEnabled = bEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.SetMultipleSmartObjectsEnabled
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UActor*>              SmartObjectActors                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bEnabled                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USmartObjectBlueprintFunctionLibrary::SetMultipleSmartObjectsEnabled(TArray<class UActor*>& SmartObjectActors, bool bEnabled)
{
	static auto Func = Class->GetFunction("SmartObjectBlueprintFunctionLibrary", "SetMultipleSmartObjectsEnabled");

	Params::USmartObjectBlueprintFunctionLibrary_SetMultipleSmartObjectsEnabled_Params Parms;

	Parms.SmartObjectActors = SmartObjectActors;
	Parms.bEnabled = bEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.SetBlackboardValueAsSOClaimHandle
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FSmartObjectClaimHandle     Value                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USmartObjectBlueprintFunctionLibrary::SetBlackboardValueAsSOClaimHandle(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct FSmartObjectClaimHandle& Value)
{
	static auto Func = Class->GetFunction("SmartObjectBlueprintFunctionLibrary", "SetBlackboardValueAsSOClaimHandle");

	Params::USmartObjectBlueprintFunctionLibrary_SetBlackboardValueAsSOClaimHandle_Params Parms;

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.RemoveSmartObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActor*                      SmartObjectActor                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USmartObjectBlueprintFunctionLibrary::RemoveSmartObject(class UActor* SmartObjectActor)
{
	static auto Func = Class->GetFunction("SmartObjectBlueprintFunctionLibrary", "RemoveSmartObject");

	Params::USmartObjectBlueprintFunctionLibrary_RemoveSmartObject_Params Parms;

	Parms.SmartObjectActor = SmartObjectActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.RemoveMultipleSmartObjects
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UActor*>              SmartObjectActors                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USmartObjectBlueprintFunctionLibrary::RemoveMultipleSmartObjects(TArray<class UActor*>& SmartObjectActors)
{
	static auto Func = Class->GetFunction("SmartObjectBlueprintFunctionLibrary", "RemoveMultipleSmartObjects");

	Params::USmartObjectBlueprintFunctionLibrary_RemoveMultipleSmartObjects_Params Parms;

	Parms.SmartObjectActors = SmartObjectActors;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.IsValidSmartObjectClaimHandle
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSmartObjectClaimHandle     Handle                                                           (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USmartObjectBlueprintFunctionLibrary::IsValidSmartObjectClaimHandle(const struct FSmartObjectClaimHandle& Handle)
{
	static auto Func = Class->GetFunction("SmartObjectBlueprintFunctionLibrary", "IsValidSmartObjectClaimHandle");

	Params::USmartObjectBlueprintFunctionLibrary_IsValidSmartObjectClaimHandle_Params Parms;

	Parms.Handle = Handle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.GetValueAsSOClaimHandle
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UBlackboardComponent*        BlackboardComponent                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSmartObjectClaimHandle     ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSmartObjectClaimHandle USmartObjectBlueprintFunctionLibrary::GetValueAsSOClaimHandle(class UBlackboardComponent* BlackboardComponent, class FName& KeyName)
{
	static auto Func = Class->GetFunction("SmartObjectBlueprintFunctionLibrary", "GetValueAsSOClaimHandle");

	Params::USmartObjectBlueprintFunctionLibrary_GetValueAsSOClaimHandle_Params Parms;

	Parms.BlackboardComponent = BlackboardComponent;
	Parms.KeyName = KeyName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.GetBlackboardValueAsSOClaimHandle
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FSmartObjectClaimHandle     ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSmartObjectClaimHandle USmartObjectBlueprintFunctionLibrary::GetBlackboardValueAsSOClaimHandle(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key)
{
	static auto Func = Class->GetFunction("SmartObjectBlueprintFunctionLibrary", "GetBlackboardValueAsSOClaimHandle");

	Params::USmartObjectBlueprintFunctionLibrary_GetBlackboardValueAsSOClaimHandle_Params Parms;

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.AddSmartObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActor*                      SmartObjectActor                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USmartObjectBlueprintFunctionLibrary::AddSmartObject(class UActor* SmartObjectActor)
{
	static auto Func = Class->GetFunction("SmartObjectBlueprintFunctionLibrary", "AddSmartObject");

	Params::USmartObjectBlueprintFunctionLibrary_AddSmartObject_Params Parms;

	Parms.SmartObjectActor = SmartObjectActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.AddOrRemoveSmartObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActor*                      SmartObject                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnabled                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USmartObjectBlueprintFunctionLibrary::AddOrRemoveSmartObject(class UActor* SmartObject, bool bEnabled)
{
	static auto Func = Class->GetFunction("SmartObjectBlueprintFunctionLibrary", "AddOrRemoveSmartObject");

	Params::USmartObjectBlueprintFunctionLibrary_AddOrRemoveSmartObject_Params Parms;

	Parms.SmartObject = SmartObject;
	Parms.bEnabled = bEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.AddOrRemoveMultipleSmartObjects
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UActor*>              SmartObjectActors                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bAdd                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USmartObjectBlueprintFunctionLibrary::AddOrRemoveMultipleSmartObjects(TArray<class UActor*>& SmartObjectActors, bool bAdd)
{
	static auto Func = Class->GetFunction("SmartObjectBlueprintFunctionLibrary", "AddOrRemoveMultipleSmartObjects");

	Params::USmartObjectBlueprintFunctionLibrary_AddOrRemoveMultipleSmartObjects_Params Parms;

	Parms.SmartObjectActors = SmartObjectActors;
	Parms.bAdd = bAdd;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.AddMultipleSmartObjects
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UActor*>              SmartObjectActors                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USmartObjectBlueprintFunctionLibrary::AddMultipleSmartObjects(TArray<class UActor*>& SmartObjectActors)
{
	static auto Func = Class->GetFunction("SmartObjectBlueprintFunctionLibrary", "AddMultipleSmartObjects");

	Params::USmartObjectBlueprintFunctionLibrary_AddMultipleSmartObjects_Params Parms;

	Parms.SmartObjectActors = SmartObjectActors;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectComponent.ReceiveOnEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FSmartObjectEventData       EventData                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class UActor*                      Interactor                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USmartObjectComponent::ReceiveOnEvent(struct FSmartObjectEventData& EventData, class UActor* Interactor)
{
	static auto Func = Class->GetFunction("SmartObjectComponent", "ReceiveOnEvent");

	Params::USmartObjectComponent_ReceiveOnEvent_Params Parms;

	Parms.EventData = EventData;
	Parms.Interactor = Interactor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SmartObjectsModule.SmartObjectSubsystem.Use
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSmartObjectClaimHandle     ClaimHandle                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// TSubclassOf<class USmartObjectBehaviorDefinition>DefinitionClass                                                  (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USmartObjectBehaviorDefinition*ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USmartObjectBehaviorDefinition* USmartObjectSubsystem::Use(struct FSmartObjectClaimHandle& ClaimHandle, TSubclassOf<class USmartObjectBehaviorDefinition> DefinitionClass)
{
	static auto Func = Class->GetFunction("SmartObjectSubsystem", "Use");

	Params::USmartObjectSubsystem_Use_Params Parms;

	Parms.ClaimHandle = ClaimHandle;
	Parms.DefinitionClass = DefinitionClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectSubsystem.SetSlotEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSmartObjectSlotHandle      SlotHandle                                                       (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnabled                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USmartObjectSubsystem::SetSlotEnabled(const struct FSmartObjectSlotHandle& SlotHandle, bool bEnabled)
{
	static auto Func = Class->GetFunction("SmartObjectSubsystem", "SetSlotEnabled");

	Params::USmartObjectSubsystem_SetSlotEnabled_Params Parms;

	Parms.SlotHandle = SlotHandle;
	Parms.bEnabled = bEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectSubsystem.SetEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSmartObjectHandle          Handle                                                           (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnabled                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USmartObjectSubsystem::SetEnabled(const struct FSmartObjectHandle& Handle, bool bEnabled)
{
	static auto Func = Class->GetFunction("SmartObjectSubsystem", "SetEnabled");

	Params::USmartObjectSubsystem_SetEnabled_Params Parms;

	Parms.Handle = Handle;
	Parms.bEnabled = bEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectSubsystem.RemoveTagFromSlot
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSmartObjectSlotHandle      SlotHandle                                                       (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                Tag                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USmartObjectSubsystem::RemoveTagFromSlot(const struct FSmartObjectSlotHandle& SlotHandle, struct FGameplayTag& Tag)
{
	static auto Func = Class->GetFunction("SmartObjectSubsystem", "RemoveTagFromSlot");

	Params::USmartObjectSubsystem_RemoveTagFromSlot_Params Parms;

	Parms.SlotHandle = SlotHandle;
	Parms.Tag = Tag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectSubsystem.RemoveTagFromInstance
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSmartObjectHandle          Handle                                                           (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                Tag                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USmartObjectSubsystem::RemoveTagFromInstance(const struct FSmartObjectHandle& Handle, struct FGameplayTag& Tag)
{
	static auto Func = Class->GetFunction("SmartObjectSubsystem", "RemoveTagFromInstance");

	Params::USmartObjectSubsystem_RemoveTagFromInstance_Params Parms;

	Parms.Handle = Handle;
	Parms.Tag = Tag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SmartObjectsModule.SmartObjectSubsystem.Release
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSmartObjectClaimHandle     ClaimHandle                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USmartObjectSubsystem::Release(struct FSmartObjectClaimHandle& ClaimHandle)
{
	static auto Func = Class->GetFunction("SmartObjectSubsystem", "Release");

	Params::USmartObjectSubsystem_Release_Params Parms;

	Parms.ClaimHandle = ClaimHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectSubsystem.GetSmartObjectComponentByRequestResult
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSmartObjectRequestResult   Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class USmartObjectComponent*       ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USmartObjectComponent* USmartObjectSubsystem::GetSmartObjectComponentByRequestResult(struct FSmartObjectRequestResult& Result)
{
	static auto Func = Class->GetFunction("SmartObjectSubsystem", "GetSmartObjectComponentByRequestResult");

	Params::USmartObjectSubsystem_GetSmartObjectComponentByRequestResult_Params Parms;

	Parms.Result = Result;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectSubsystem.GetSmartObjectComponent
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSmartObjectClaimHandle     ClaimHandle                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class USmartObjectComponent*       ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USmartObjectComponent* USmartObjectSubsystem::GetSmartObjectComponent(struct FSmartObjectClaimHandle& ClaimHandle)
{
	static auto Func = Class->GetFunction("SmartObjectSubsystem", "GetSmartObjectComponent");

	Params::USmartObjectSubsystem_GetSmartObjectComponent_Params Parms;

	Parms.ClaimHandle = ClaimHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectSubsystem.GetSlotTransformFromRequestResult
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSmartObjectRequestResult   RequestResult                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  OutSlotTransform                                                 (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USmartObjectSubsystem::GetSlotTransformFromRequestResult(struct FSmartObjectRequestResult& RequestResult, struct FTransform* OutSlotTransform)
{
	static auto Func = Class->GetFunction("SmartObjectSubsystem", "GetSlotTransformFromRequestResult");

	Params::USmartObjectSubsystem_GetSlotTransformFromRequestResult_Params Parms;

	Parms.RequestResult = RequestResult;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutSlotTransform != nullptr)
		*OutSlotTransform = Parms.OutSlotTransform;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectSubsystem.GetSlotTransform
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSmartObjectClaimHandle     ClaimHandle                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  OutSlotTransform                                                 (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USmartObjectSubsystem::GetSlotTransform(struct FSmartObjectClaimHandle& ClaimHandle, struct FTransform* OutSlotTransform)
{
	static auto Func = Class->GetFunction("SmartObjectSubsystem", "GetSlotTransform");

	Params::USmartObjectSubsystem_GetSlotTransform_Params Parms;

	Parms.ClaimHandle = ClaimHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutSlotTransform != nullptr)
		*OutSlotTransform = Parms.OutSlotTransform;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectSubsystem.GetSlotTags
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSmartObjectSlotHandle      SlotHandle                                                       (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct FGameplayTagContainer USmartObjectSubsystem::GetSlotTags(const struct FSmartObjectSlotHandle& SlotHandle)
{
	static auto Func = Class->GetFunction("SmartObjectSubsystem", "GetSlotTags");

	Params::USmartObjectSubsystem_GetSlotTags_Params Parms;

	Parms.SlotHandle = SlotHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectSubsystem.GetSlotLocation
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSmartObjectClaimHandle     ClaimHandle                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     OutSlotLocation                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USmartObjectSubsystem::GetSlotLocation(struct FSmartObjectClaimHandle& ClaimHandle, struct FVector* OutSlotLocation)
{
	static auto Func = Class->GetFunction("SmartObjectSubsystem", "GetSlotLocation");

	Params::USmartObjectSubsystem_GetSlotLocation_Params Parms;

	Parms.ClaimHandle = ClaimHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutSlotLocation != nullptr)
		*OutSlotLocation = Parms.OutSlotLocation;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectSubsystem.GetInstanceTags
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSmartObjectHandle          Handle                                                           (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct FGameplayTagContainer USmartObjectSubsystem::GetInstanceTags(const struct FSmartObjectHandle& Handle)
{
	static auto Func = Class->GetFunction("SmartObjectSubsystem", "GetInstanceTags");

	Params::USmartObjectSubsystem_GetInstanceTags_Params Parms;

	Parms.Handle = Handle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectSubsystem.GetBehaviorDefinitionByRequestResult
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSmartObjectRequestResult   RequestResult                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// TSubclassOf<class USmartObjectBehaviorDefinition>DefinitionClass                                                  (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USmartObjectBehaviorDefinition*ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USmartObjectBehaviorDefinition* USmartObjectSubsystem::GetBehaviorDefinitionByRequestResult(struct FSmartObjectRequestResult& RequestResult, TSubclassOf<class USmartObjectBehaviorDefinition> DefinitionClass)
{
	static auto Func = Class->GetFunction("SmartObjectSubsystem", "GetBehaviorDefinitionByRequestResult");

	Params::USmartObjectSubsystem_GetBehaviorDefinitionByRequestResult_Params Parms;

	Parms.RequestResult = RequestResult;
	Parms.DefinitionClass = DefinitionClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectSubsystem.GetBehaviorDefinition
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSmartObjectClaimHandle     ClaimHandle                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// TSubclassOf<class USmartObjectBehaviorDefinition>DefinitionClass                                                  (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USmartObjectBehaviorDefinition*ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USmartObjectBehaviorDefinition* USmartObjectSubsystem::GetBehaviorDefinition(struct FSmartObjectClaimHandle& ClaimHandle, TSubclassOf<class USmartObjectBehaviorDefinition> DefinitionClass)
{
	static auto Func = Class->GetFunction("SmartObjectSubsystem", "GetBehaviorDefinition");

	Params::USmartObjectSubsystem_GetBehaviorDefinition_Params Parms;

	Parms.ClaimHandle = ClaimHandle;
	Parms.DefinitionClass = DefinitionClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectSubsystem.FindSmartObjects_BP
// (Final, Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// struct FSmartObjectRequest         Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FSmartObjectRequestResult>OutResults                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UActor*                      UserActor                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USmartObjectSubsystem::FindSmartObjects_BP(struct FSmartObjectRequest& Request, TArray<struct FSmartObjectRequestResult>* OutResults, class UActor* UserActor)
{
	static auto Func = Class->GetFunction("SmartObjectSubsystem", "FindSmartObjects_BP");

	Params::USmartObjectSubsystem_FindSmartObjects_BP_Params Parms;

	Parms.Request = Request;
	Parms.UserActor = UserActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutResults != nullptr)
		*OutResults = Parms.OutResults;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectSubsystem.FindSmartObjects
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSmartObjectRequest         Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FSmartObjectRequestResult>OutResults                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UActor*                      UserActor                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USmartObjectSubsystem::FindSmartObjects(struct FSmartObjectRequest& Request, TArray<struct FSmartObjectRequestResult>* OutResults, class UActor* UserActor)
{
	static auto Func = Class->GetFunction("SmartObjectSubsystem", "FindSmartObjects");

	Params::USmartObjectSubsystem_FindSmartObjects_Params Parms;

	Parms.Request = Request;
	Parms.UserActor = UserActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutResults != nullptr)
		*OutResults = Parms.OutResults;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectSubsystem.FindSmartObject
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSmartObjectRequest         Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UActor*                      UserActor                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSmartObjectRequestResult   ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSmartObjectRequestResult USmartObjectSubsystem::FindSmartObject(struct FSmartObjectRequest& Request, class UActor* UserActor)
{
	static auto Func = Class->GetFunction("SmartObjectSubsystem", "FindSmartObject");

	Params::USmartObjectSubsystem_FindSmartObject_Params Parms;

	Parms.Request = Request;
	Parms.UserActor = UserActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectSubsystem.Claim
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSmartObjectRequestResult   RequestResult                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class UActor*                      UserActor                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSmartObjectClaimHandle     ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSmartObjectClaimHandle USmartObjectSubsystem::Claim(struct FSmartObjectRequestResult& RequestResult, class UActor* UserActor)
{
	static auto Func = Class->GetFunction("SmartObjectSubsystem", "Claim");

	Params::USmartObjectSubsystem_Claim_Params Parms;

	Parms.RequestResult = RequestResult;
	Parms.UserActor = UserActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectSubsystem.AddTagToSlot
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSmartObjectSlotHandle      SlotHandle                                                       (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                Tag                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USmartObjectSubsystem::AddTagToSlot(const struct FSmartObjectSlotHandle& SlotHandle, struct FGameplayTag& Tag)
{
	static auto Func = Class->GetFunction("SmartObjectSubsystem", "AddTagToSlot");

	Params::USmartObjectSubsystem_AddTagToSlot_Params Parms;

	Parms.SlotHandle = SlotHandle;
	Parms.Tag = Tag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SmartObjectsModule.SmartObjectSubsystem.AddTagToInstance
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSmartObjectHandle          Handle                                                           (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                Tag                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USmartObjectSubsystem::AddTagToInstance(const struct FSmartObjectHandle& Handle, struct FGameplayTag& Tag)
{
	static auto Func = Class->GetFunction("SmartObjectSubsystem", "AddTagToInstance");

	Params::USmartObjectSubsystem_AddTagToInstance_Params Parms;

	Parms.Handle = Handle;
	Parms.Tag = Tag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SmartObjectsModule.SmartObjectTestingActor.RunTests
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void USmartObjectTestingActor::RunTests()
{
	static auto Func = Class->GetFunction("SmartObjectTestingActor", "RunTests");

	Params::USmartObjectTestingActor_RunTests_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SmartObjectsModule.SmartObjectTestingActor.ResetTests
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void USmartObjectTestingActor::ResetTests()
{
	static auto Func = Class->GetFunction("SmartObjectTestingActor", "ResetTests");

	Params::USmartObjectTestingActor_ResetTests_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
