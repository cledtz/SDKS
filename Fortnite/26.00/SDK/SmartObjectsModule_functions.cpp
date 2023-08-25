#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SmartObjectsModule.EnvQueryGenerator_SmartObjects
// (None)

class UClass* UEnvQueryGenerator_SmartObjects::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryGenerator_SmartObjects");

	return Clss;
}


// EnvQueryGenerator_SmartObjects SmartObjectsModule.Default__EnvQueryGenerator_SmartObjects
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryGenerator_SmartObjects* UEnvQueryGenerator_SmartObjects::GetDefaultObj()
{
	static class UEnvQueryGenerator_SmartObjects* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryGenerator_SmartObjects*>(UEnvQueryGenerator_SmartObjects::StaticClass()->DefaultObject);

	return Default;
}


// Class SmartObjectsModule.EnvQueryItemType_SmartObject
// (None)

class UClass* UEnvQueryItemType_SmartObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryItemType_SmartObject");

	return Clss;
}


// EnvQueryItemType_SmartObject SmartObjectsModule.Default__EnvQueryItemType_SmartObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryItemType_SmartObject* UEnvQueryItemType_SmartObject::GetDefaultObj()
{
	static class UEnvQueryItemType_SmartObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryItemType_SmartObject*>(UEnvQueryItemType_SmartObject::StaticClass()->DefaultObject);

	return Default;
}


// Class SmartObjectsModule.SmartObjectSettings
// (None)

class UClass* USmartObjectSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmartObjectSettings");

	return Clss;
}


// SmartObjectSettings SmartObjectsModule.Default__SmartObjectSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class USmartObjectSettings* USmartObjectSettings::GetDefaultObj()
{
	static class USmartObjectSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<USmartObjectSettings*>(USmartObjectSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class SmartObjectsModule.BlackboardKeyType_SOClaimHandle
// (None)

class UClass* UBlackboardKeyType_SOClaimHandle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlackboardKeyType_SOClaimHandle");

	return Clss;
}


// BlackboardKeyType_SOClaimHandle SmartObjectsModule.Default__BlackboardKeyType_SOClaimHandle
// (Public, ClassDefaultObject, ArchetypeObject)

class UBlackboardKeyType_SOClaimHandle* UBlackboardKeyType_SOClaimHandle::GetDefaultObj()
{
	static class UBlackboardKeyType_SOClaimHandle* Default = nullptr;

	if (!Default)
		Default = static_cast<UBlackboardKeyType_SOClaimHandle*>(UBlackboardKeyType_SOClaimHandle::StaticClass()->DefaultObject);

	return Default;
}


// Class SmartObjectsModule.GenericSmartObject
// (Actor)

class UClass* UGenericSmartObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericSmartObject");

	return Clss;
}


// GenericSmartObject SmartObjectsModule.Default__GenericSmartObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UGenericSmartObject* UGenericSmartObject::GetDefaultObj()
{
	static class UGenericSmartObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UGenericSmartObject*>(UGenericSmartObject::StaticClass()->DefaultObject);

	return Default;
}


// Class SmartObjectsModule.SmartObjectBlueprintFunctionLibrary
// (None)

class UClass* USmartObjectBlueprintFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmartObjectBlueprintFunctionLibrary");

	return Clss;
}


// SmartObjectBlueprintFunctionLibrary SmartObjectsModule.Default__SmartObjectBlueprintFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class USmartObjectBlueprintFunctionLibrary* USmartObjectBlueprintFunctionLibrary::GetDefaultObj()
{
	static class USmartObjectBlueprintFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<USmartObjectBlueprintFunctionLibrary*>(USmartObjectBlueprintFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.SetValueAsSOClaimHandle
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UBlackboardComponent*        BlackboardComponent                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSmartObjectClaimHandle     Value                                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)

void USmartObjectBlueprintFunctionLibrary::SetValueAsSOClaimHandle(class UBlackboardComponent* BlackboardComponent, class FName& KeyName, const struct FSmartObjectClaimHandle& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectBlueprintFunctionLibrary", "SetValueAsSOClaimHandle");

	Params::USmartObjectBlueprintFunctionLibrary_SetValueAsSOClaimHandle_Params Parms{};

	Parms.BlackboardComponent = BlackboardComponent;
	Parms.KeyName = KeyName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.SetSmartObjectEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActor*                      SmartObjectActor                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnabled                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USmartObjectBlueprintFunctionLibrary::SetSmartObjectEnabled(class UActor* SmartObjectActor, bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectBlueprintFunctionLibrary", "SetSmartObjectEnabled");

	Params::USmartObjectBlueprintFunctionLibrary_SetSmartObjectEnabled_Params Parms{};

	Parms.SmartObjectActor = SmartObjectActor;
	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectBlueprintFunctionLibrary", "SetMultipleSmartObjectsEnabled");

	Params::USmartObjectBlueprintFunctionLibrary_SetMultipleSmartObjectsEnabled_Params Parms{};

	Parms.SmartObjectActors = SmartObjectActors;
	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectBlueprintFunctionLibrary", "SetBlackboardValueAsSOClaimHandle");

	Params::USmartObjectBlueprintFunctionLibrary_SetBlackboardValueAsSOClaimHandle_Params Parms{};

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.RemoveSmartObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActor*                      SmartObjectActor                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USmartObjectBlueprintFunctionLibrary::RemoveSmartObject(class UActor* SmartObjectActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectBlueprintFunctionLibrary", "RemoveSmartObject");

	Params::USmartObjectBlueprintFunctionLibrary_RemoveSmartObject_Params Parms{};

	Parms.SmartObjectActor = SmartObjectActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.RemoveMultipleSmartObjects
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UActor*>              SmartObjectActors                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USmartObjectBlueprintFunctionLibrary::RemoveMultipleSmartObjects(TArray<class UActor*>& SmartObjectActors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectBlueprintFunctionLibrary", "RemoveMultipleSmartObjects");

	Params::USmartObjectBlueprintFunctionLibrary_RemoveMultipleSmartObjects_Params Parms{};

	Parms.SmartObjectActors = SmartObjectActors;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.MarkSmartObjectSlotAsOccupied
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSmartObjectClaimHandle     ClaimHandle                                                      (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
// TSubclassOf<class USmartObjectBehaviorDefinition>DefinitionClass                                                  (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USmartObjectBehaviorDefinition*ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USmartObjectBehaviorDefinition* USmartObjectBlueprintFunctionLibrary::MarkSmartObjectSlotAsOccupied(class UObject* WorldContextObject, const struct FSmartObjectClaimHandle& ClaimHandle, TSubclassOf<class USmartObjectBehaviorDefinition> DefinitionClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectBlueprintFunctionLibrary", "MarkSmartObjectSlotAsOccupied");

	Params::USmartObjectBlueprintFunctionLibrary_MarkSmartObjectSlotAsOccupied_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ClaimHandle = ClaimHandle;
	Parms.DefinitionClass = DefinitionClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.MarkSmartObjectSlotAsFree
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSmartObjectClaimHandle     ClaimHandle                                                      (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USmartObjectBlueprintFunctionLibrary::MarkSmartObjectSlotAsFree(class UObject* WorldContextObject, const struct FSmartObjectClaimHandle& ClaimHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectBlueprintFunctionLibrary", "MarkSmartObjectSlotAsFree");

	Params::USmartObjectBlueprintFunctionLibrary_MarkSmartObjectSlotAsFree_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ClaimHandle = ClaimHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.MarkSmartObjectSlotAsClaimed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSmartObjectSlotHandle      SlotHandle                                                       (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      UserActor                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSmartObjectClaimHandle     ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSmartObjectClaimHandle USmartObjectBlueprintFunctionLibrary::MarkSmartObjectSlotAsClaimed(class UObject* WorldContextObject, const struct FSmartObjectSlotHandle& SlotHandle, class UActor* UserActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectBlueprintFunctionLibrary", "MarkSmartObjectSlotAsClaimed");

	Params::USmartObjectBlueprintFunctionLibrary_MarkSmartObjectSlotAsClaimed_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SlotHandle = SlotHandle;
	Parms.UserActor = UserActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.IsValidSmartObjectClaimHandle
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSmartObjectClaimHandle     Handle                                                           (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USmartObjectBlueprintFunctionLibrary::IsValidSmartObjectClaimHandle(const struct FSmartObjectClaimHandle& Handle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectBlueprintFunctionLibrary", "IsValidSmartObjectClaimHandle");

	Params::USmartObjectBlueprintFunctionLibrary_IsValidSmartObjectClaimHandle_Params Parms{};

	Parms.Handle = Handle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectBlueprintFunctionLibrary", "GetValueAsSOClaimHandle");

	Params::USmartObjectBlueprintFunctionLibrary_GetValueAsSOClaimHandle_Params Parms{};

	Parms.BlackboardComponent = BlackboardComponent;
	Parms.KeyName = KeyName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectBlueprintFunctionLibrary", "GetBlackboardValueAsSOClaimHandle");

	Params::USmartObjectBlueprintFunctionLibrary_GetBlackboardValueAsSOClaimHandle_Params Parms{};

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.AddSmartObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActor*                      SmartObjectActor                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USmartObjectBlueprintFunctionLibrary::AddSmartObject(class UActor* SmartObjectActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectBlueprintFunctionLibrary", "AddSmartObject");

	Params::USmartObjectBlueprintFunctionLibrary_AddSmartObject_Params Parms{};

	Parms.SmartObjectActor = SmartObjectActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectBlueprintFunctionLibrary", "AddOrRemoveSmartObject");

	Params::USmartObjectBlueprintFunctionLibrary_AddOrRemoveSmartObject_Params Parms{};

	Parms.SmartObject = SmartObject;
	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectBlueprintFunctionLibrary", "AddOrRemoveMultipleSmartObjects");

	Params::USmartObjectBlueprintFunctionLibrary_AddOrRemoveMultipleSmartObjects_Params Parms{};

	Parms.SmartObjectActors = SmartObjectActors;
	Parms.bAdd = bAdd;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.AddMultipleSmartObjects
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UActor*>              SmartObjectActors                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USmartObjectBlueprintFunctionLibrary::AddMultipleSmartObjects(TArray<class UActor*>& SmartObjectActors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectBlueprintFunctionLibrary", "AddMultipleSmartObjects");

	Params::USmartObjectBlueprintFunctionLibrary_AddMultipleSmartObjects_Params Parms{};

	Parms.SmartObjectActors = SmartObjectActors;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SmartObjectsModule.SmartObjectCollection
// (Actor)

class UClass* USmartObjectCollection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmartObjectCollection");

	return Clss;
}


// SmartObjectCollection SmartObjectsModule.Default__SmartObjectCollection
// (Public, ClassDefaultObject, ArchetypeObject)

class USmartObjectCollection* USmartObjectCollection::GetDefaultObj()
{
	static class USmartObjectCollection* Default = nullptr;

	if (!Default)
		Default = static_cast<USmartObjectCollection*>(USmartObjectCollection::StaticClass()->DefaultObject);

	return Default;
}


// Class SmartObjectsModule.SmartObjectComponent
// (SceneComponent)

class UClass* USmartObjectComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmartObjectComponent");

	return Clss;
}


// SmartObjectComponent SmartObjectsModule.Default__SmartObjectComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USmartObjectComponent* USmartObjectComponent::GetDefaultObj()
{
	static class USmartObjectComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USmartObjectComponent*>(USmartObjectComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function SmartObjectsModule.SmartObjectComponent.ReceiveOnEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FSmartObjectEventData       EventData                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class UActor*                      Interactor                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USmartObjectComponent::ReceiveOnEvent(struct FSmartObjectEventData& EventData, class UActor* Interactor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectComponent", "ReceiveOnEvent");

	Params::USmartObjectComponent_ReceiveOnEvent_Params Parms{};

	Parms.EventData = EventData;
	Parms.Interactor = Interactor;

	UObject::ProcessEvent(Func, &Parms);

}


// Class SmartObjectsModule.SmartObjectContainerRenderingComponent
// (SceneComponent, PrimitiveComponent)

class UClass* USmartObjectContainerRenderingComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmartObjectContainerRenderingComponent");

	return Clss;
}


// SmartObjectContainerRenderingComponent SmartObjectsModule.Default__SmartObjectContainerRenderingComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USmartObjectContainerRenderingComponent* USmartObjectContainerRenderingComponent::GetDefaultObj()
{
	static class USmartObjectContainerRenderingComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USmartObjectContainerRenderingComponent*>(USmartObjectContainerRenderingComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class SmartObjectsModule.SmartObjectDebugRenderingComponent
// (SceneComponent, PrimitiveComponent)

class UClass* USmartObjectDebugRenderingComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmartObjectDebugRenderingComponent");

	return Clss;
}


// SmartObjectDebugRenderingComponent SmartObjectsModule.Default__SmartObjectDebugRenderingComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USmartObjectDebugRenderingComponent* USmartObjectDebugRenderingComponent::GetDefaultObj()
{
	static class USmartObjectDebugRenderingComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USmartObjectDebugRenderingComponent*>(USmartObjectDebugRenderingComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class SmartObjectsModule.SmartObjectBehaviorDefinition
// (None)

class UClass* USmartObjectBehaviorDefinition::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmartObjectBehaviorDefinition");

	return Clss;
}


// SmartObjectBehaviorDefinition SmartObjectsModule.Default__SmartObjectBehaviorDefinition
// (Public, ClassDefaultObject, ArchetypeObject)

class USmartObjectBehaviorDefinition* USmartObjectBehaviorDefinition::GetDefaultObj()
{
	static class USmartObjectBehaviorDefinition* Default = nullptr;

	if (!Default)
		Default = static_cast<USmartObjectBehaviorDefinition*>(USmartObjectBehaviorDefinition::StaticClass()->DefaultObject);

	return Default;
}


// Class SmartObjectsModule.SmartObjectDefinition
// (None)

class UClass* USmartObjectDefinition::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmartObjectDefinition");

	return Clss;
}


// SmartObjectDefinition SmartObjectsModule.Default__SmartObjectDefinition
// (Public, ClassDefaultObject, ArchetypeObject)

class USmartObjectDefinition* USmartObjectDefinition::GetDefaultObj()
{
	static class USmartObjectDefinition* Default = nullptr;

	if (!Default)
		Default = static_cast<USmartObjectDefinition*>(USmartObjectDefinition::StaticClass()->DefaultObject);

	return Default;
}


// Class SmartObjectsModule.SmartObjectSpacePartition
// (None)

class UClass* USmartObjectSpacePartition::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmartObjectSpacePartition");

	return Clss;
}


// SmartObjectSpacePartition SmartObjectsModule.Default__SmartObjectSpacePartition
// (Public, ClassDefaultObject, ArchetypeObject)

class USmartObjectSpacePartition* USmartObjectSpacePartition::GetDefaultObj()
{
	static class USmartObjectSpacePartition* Default = nullptr;

	if (!Default)
		Default = static_cast<USmartObjectSpacePartition*>(USmartObjectSpacePartition::StaticClass()->DefaultObject);

	return Default;
}


// Class SmartObjectsModule.SmartObjectHashGrid
// (None)

class UClass* USmartObjectHashGrid::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmartObjectHashGrid");

	return Clss;
}


// SmartObjectHashGrid SmartObjectsModule.Default__SmartObjectHashGrid
// (Public, ClassDefaultObject, ArchetypeObject)

class USmartObjectHashGrid* USmartObjectHashGrid::GetDefaultObj()
{
	static class USmartObjectHashGrid* Default = nullptr;

	if (!Default)
		Default = static_cast<USmartObjectHashGrid*>(USmartObjectHashGrid::StaticClass()->DefaultObject);

	return Default;
}


// Class SmartObjectsModule.SmartObjectOctree
// (None)

class UClass* USmartObjectOctree::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmartObjectOctree");

	return Clss;
}


// SmartObjectOctree SmartObjectsModule.Default__SmartObjectOctree
// (Public, ClassDefaultObject, ArchetypeObject)

class USmartObjectOctree* USmartObjectOctree::GetDefaultObj()
{
	static class USmartObjectOctree* Default = nullptr;

	if (!Default)
		Default = static_cast<USmartObjectOctree*>(USmartObjectOctree::StaticClass()->DefaultObject);

	return Default;
}


// Class SmartObjectsModule.SmartObjectPersistentCollection
// (Actor)

class UClass* USmartObjectPersistentCollection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmartObjectPersistentCollection");

	return Clss;
}


// SmartObjectPersistentCollection SmartObjectsModule.Default__SmartObjectPersistentCollection
// (Public, ClassDefaultObject, ArchetypeObject)

class USmartObjectPersistentCollection* USmartObjectPersistentCollection::GetDefaultObj()
{
	static class USmartObjectPersistentCollection* Default = nullptr;

	if (!Default)
		Default = static_cast<USmartObjectPersistentCollection*>(USmartObjectPersistentCollection::StaticClass()->DefaultObject);

	return Default;
}


// Class SmartObjectsModule.SmartObjectRenderingComponent
// (SceneComponent, PrimitiveComponent)

class UClass* USmartObjectRenderingComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmartObjectRenderingComponent");

	return Clss;
}


// SmartObjectRenderingComponent SmartObjectsModule.Default__SmartObjectRenderingComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USmartObjectRenderingComponent* USmartObjectRenderingComponent::GetDefaultObj()
{
	static class USmartObjectRenderingComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USmartObjectRenderingComponent*>(USmartObjectRenderingComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class SmartObjectsModule.SmartObjectSubsystem
// (None)

class UClass* USmartObjectSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmartObjectSubsystem");

	return Clss;
}


// SmartObjectSubsystem SmartObjectsModule.Default__SmartObjectSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class USmartObjectSubsystem* USmartObjectSubsystem::GetDefaultObj()
{
	static class USmartObjectSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<USmartObjectSubsystem*>(USmartObjectSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function SmartObjectsModule.SmartObjectSubsystem.Use
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSmartObjectClaimHandle     ClaimHandle                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// TSubclassOf<class USmartObjectBehaviorDefinition>DefinitionClass                                                  (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USmartObjectBehaviorDefinition*ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USmartObjectBehaviorDefinition* USmartObjectSubsystem::Use(struct FSmartObjectClaimHandle& ClaimHandle, TSubclassOf<class USmartObjectBehaviorDefinition> DefinitionClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectSubsystem", "Use");

	Params::USmartObjectSubsystem_Use_Params Parms{};

	Parms.ClaimHandle = ClaimHandle;
	Parms.DefinitionClass = DefinitionClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectSubsystem", "SetSlotEnabled");

	Params::USmartObjectSubsystem_SetSlotEnabled_Params Parms{};

	Parms.SlotHandle = SlotHandle;
	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectSubsystem", "SetEnabled");

	Params::USmartObjectSubsystem_SetEnabled_Params Parms{};

	Parms.Handle = Handle;
	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectSubsystem", "RemoveTagFromSlot");

	Params::USmartObjectSubsystem_RemoveTagFromSlot_Params Parms{};

	Parms.SlotHandle = SlotHandle;
	Parms.Tag = Tag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectSubsystem.RemoveTagFromInstance
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSmartObjectHandle          Handle                                                           (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                Tag                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USmartObjectSubsystem::RemoveTagFromInstance(const struct FSmartObjectHandle& Handle, struct FGameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectSubsystem", "RemoveTagFromInstance");

	Params::USmartObjectSubsystem_RemoveTagFromInstance_Params Parms{};

	Parms.Handle = Handle;
	Parms.Tag = Tag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SmartObjectsModule.SmartObjectSubsystem.Release
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSmartObjectClaimHandle     ClaimHandle                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USmartObjectSubsystem::Release(struct FSmartObjectClaimHandle& ClaimHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectSubsystem", "Release");

	Params::USmartObjectSubsystem_Release_Params Parms{};

	Parms.ClaimHandle = ClaimHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectSubsystem.GetSmartObjectComponentByRequestResult
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSmartObjectRequestResult   Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class USmartObjectComponent*       ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USmartObjectComponent* USmartObjectSubsystem::GetSmartObjectComponentByRequestResult(struct FSmartObjectRequestResult& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectSubsystem", "GetSmartObjectComponentByRequestResult");

	Params::USmartObjectSubsystem_GetSmartObjectComponentByRequestResult_Params Parms{};

	Parms.Result = Result;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectSubsystem.GetSmartObjectComponent
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSmartObjectClaimHandle     ClaimHandle                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class USmartObjectComponent*       ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USmartObjectComponent* USmartObjectSubsystem::GetSmartObjectComponent(struct FSmartObjectClaimHandle& ClaimHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectSubsystem", "GetSmartObjectComponent");

	Params::USmartObjectSubsystem_GetSmartObjectComponent_Params Parms{};

	Parms.ClaimHandle = ClaimHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectSubsystem", "GetSlotTransformFromRequestResult");

	Params::USmartObjectSubsystem_GetSlotTransformFromRequestResult_Params Parms{};

	Parms.RequestResult = RequestResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectSubsystem", "GetSlotTransform");

	Params::USmartObjectSubsystem_GetSlotTransform_Params Parms{};

	Parms.ClaimHandle = ClaimHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectSubsystem", "GetSlotTags");

	Params::USmartObjectSubsystem_GetSlotTags_Params Parms{};

	Parms.SlotHandle = SlotHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectSubsystem", "GetSlotLocation");

	Params::USmartObjectSubsystem_GetSlotLocation_Params Parms{};

	Parms.ClaimHandle = ClaimHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectSubsystem", "GetInstanceTags");

	Params::USmartObjectSubsystem_GetInstanceTags_Params Parms{};

	Parms.Handle = Handle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectSubsystem", "GetBehaviorDefinitionByRequestResult");

	Params::USmartObjectSubsystem_GetBehaviorDefinitionByRequestResult_Params Parms{};

	Parms.RequestResult = RequestResult;
	Parms.DefinitionClass = DefinitionClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectSubsystem", "GetBehaviorDefinition");

	Params::USmartObjectSubsystem_GetBehaviorDefinition_Params Parms{};

	Parms.ClaimHandle = ClaimHandle;
	Parms.DefinitionClass = DefinitionClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectSubsystem", "FindSmartObjects_BP");

	Params::USmartObjectSubsystem_FindSmartObjects_BP_Params Parms{};

	Parms.Request = Request;
	Parms.UserActor = UserActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectSubsystem", "FindSmartObjects");

	Params::USmartObjectSubsystem_FindSmartObjects_Params Parms{};

	Parms.Request = Request;
	Parms.UserActor = UserActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectSubsystem", "FindSmartObject");

	Params::USmartObjectSubsystem_FindSmartObject_Params Parms{};

	Parms.Request = Request;
	Parms.UserActor = UserActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectSubsystem", "Claim");

	Params::USmartObjectSubsystem_Claim_Params Parms{};

	Parms.RequestResult = RequestResult;
	Parms.UserActor = UserActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectSubsystem.AddTagToSlot
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSmartObjectSlotHandle      SlotHandle                                                       (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                Tag                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USmartObjectSubsystem::AddTagToSlot(const struct FSmartObjectSlotHandle& SlotHandle, struct FGameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectSubsystem", "AddTagToSlot");

	Params::USmartObjectSubsystem_AddTagToSlot_Params Parms{};

	Parms.SlotHandle = SlotHandle;
	Parms.Tag = Tag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SmartObjectsModule.SmartObjectSubsystem.AddTagToInstance
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSmartObjectHandle          Handle                                                           (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                Tag                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USmartObjectSubsystem::AddTagToInstance(const struct FSmartObjectHandle& Handle, struct FGameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectSubsystem", "AddTagToInstance");

	Params::USmartObjectSubsystem_AddTagToInstance_Params Parms{};

	Parms.Handle = Handle;
	Parms.Tag = Tag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SmartObjectsModule.SmartObjectSubsystemRenderingComponent
// (SceneComponent, PrimitiveComponent)

class UClass* USmartObjectSubsystemRenderingComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmartObjectSubsystemRenderingComponent");

	return Clss;
}


// SmartObjectSubsystemRenderingComponent SmartObjectsModule.Default__SmartObjectSubsystemRenderingComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USmartObjectSubsystemRenderingComponent* USmartObjectSubsystemRenderingComponent::GetDefaultObj()
{
	static class USmartObjectSubsystemRenderingComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USmartObjectSubsystemRenderingComponent*>(USmartObjectSubsystemRenderingComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class SmartObjectsModule.SmartObjectSubsystemRenderingActor
// (Actor)

class UClass* USmartObjectSubsystemRenderingActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmartObjectSubsystemRenderingActor");

	return Clss;
}


// SmartObjectSubsystemRenderingActor SmartObjectsModule.Default__SmartObjectSubsystemRenderingActor
// (Public, ClassDefaultObject, ArchetypeObject)

class USmartObjectSubsystemRenderingActor* USmartObjectSubsystemRenderingActor::GetDefaultObj()
{
	static class USmartObjectSubsystemRenderingActor* Default = nullptr;

	if (!Default)
		Default = static_cast<USmartObjectSubsystemRenderingActor*>(USmartObjectSubsystemRenderingActor::StaticClass()->DefaultObject);

	return Default;
}


// Class SmartObjectsModule.SmartObjectTest
// (None)

class UClass* USmartObjectTest::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmartObjectTest");

	return Clss;
}


// SmartObjectTest SmartObjectsModule.Default__SmartObjectTest
// (Public, ClassDefaultObject, ArchetypeObject)

class USmartObjectTest* USmartObjectTest::GetDefaultObj()
{
	static class USmartObjectTest* Default = nullptr;

	if (!Default)
		Default = static_cast<USmartObjectTest*>(USmartObjectTest::StaticClass()->DefaultObject);

	return Default;
}


// Class SmartObjectsModule.SmartObjectSimpleQueryTest
// (None)

class UClass* USmartObjectSimpleQueryTest::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmartObjectSimpleQueryTest");

	return Clss;
}


// SmartObjectSimpleQueryTest SmartObjectsModule.Default__SmartObjectSimpleQueryTest
// (Public, ClassDefaultObject, ArchetypeObject)

class USmartObjectSimpleQueryTest* USmartObjectSimpleQueryTest::GetDefaultObj()
{
	static class USmartObjectSimpleQueryTest* Default = nullptr;

	if (!Default)
		Default = static_cast<USmartObjectSimpleQueryTest*>(USmartObjectSimpleQueryTest::StaticClass()->DefaultObject);

	return Default;
}


// Class SmartObjectsModule.SmartObjectTestRenderingComponent
// (SceneComponent, PrimitiveComponent)

class UClass* USmartObjectTestRenderingComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmartObjectTestRenderingComponent");

	return Clss;
}


// SmartObjectTestRenderingComponent SmartObjectsModule.Default__SmartObjectTestRenderingComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USmartObjectTestRenderingComponent* USmartObjectTestRenderingComponent::GetDefaultObj()
{
	static class USmartObjectTestRenderingComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USmartObjectTestRenderingComponent*>(USmartObjectTestRenderingComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class SmartObjectsModule.SmartObjectTestingActor
// (Actor)

class UClass* USmartObjectTestingActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmartObjectTestingActor");

	return Clss;
}


// SmartObjectTestingActor SmartObjectsModule.Default__SmartObjectTestingActor
// (Public, ClassDefaultObject, ArchetypeObject)

class USmartObjectTestingActor* USmartObjectTestingActor::GetDefaultObj()
{
	static class USmartObjectTestingActor* Default = nullptr;

	if (!Default)
		Default = static_cast<USmartObjectTestingActor*>(USmartObjectTestingActor::StaticClass()->DefaultObject);

	return Default;
}


// Function SmartObjectsModule.SmartObjectTestingActor.RunTests
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void USmartObjectTestingActor::RunTests()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectTestingActor", "RunTests");

	Params::USmartObjectTestingActor_RunTests_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SmartObjectsModule.SmartObjectTestingActor.ResetTests
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void USmartObjectTestingActor::ResetTests()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectTestingActor", "ResetTests");

	Params::USmartObjectTestingActor_ResetTests_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SmartObjectsModule.SmartObjectSlotValidationFilter
// (None)

class UClass* USmartObjectSlotValidationFilter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmartObjectSlotValidationFilter");

	return Clss;
}


// SmartObjectSlotValidationFilter SmartObjectsModule.Default__SmartObjectSlotValidationFilter
// (Public, ClassDefaultObject, ArchetypeObject)

class USmartObjectSlotValidationFilter* USmartObjectSlotValidationFilter::GetDefaultObj()
{
	static class USmartObjectSlotValidationFilter* Default = nullptr;

	if (!Default)
		Default = static_cast<USmartObjectSlotValidationFilter*>(USmartObjectSlotValidationFilter::StaticClass()->DefaultObject);

	return Default;
}


// Class SmartObjectsModule.SmartObjectUserComponent
// (None)

class UClass* USmartObjectUserComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmartObjectUserComponent");

	return Clss;
}


// SmartObjectUserComponent SmartObjectsModule.Default__SmartObjectUserComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USmartObjectUserComponent* USmartObjectUserComponent::GetDefaultObj()
{
	static class USmartObjectUserComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USmartObjectUserComponent*>(USmartObjectUserComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class SmartObjectsModule.SmartObjectWorldConditionSchema
// (None)

class UClass* USmartObjectWorldConditionSchema::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmartObjectWorldConditionSchema");

	return Clss;
}


// SmartObjectWorldConditionSchema SmartObjectsModule.Default__SmartObjectWorldConditionSchema
// (Public, ClassDefaultObject, ArchetypeObject)

class USmartObjectWorldConditionSchema* USmartObjectWorldConditionSchema::GetDefaultObj()
{
	static class USmartObjectWorldConditionSchema* Default = nullptr;

	if (!Default)
		Default = static_cast<USmartObjectWorldConditionSchema*>(USmartObjectWorldConditionSchema::StaticClass()->DefaultObject);

	return Default;
}

}


