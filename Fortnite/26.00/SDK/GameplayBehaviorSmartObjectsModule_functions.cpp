#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GameplayBehaviorSmartObjectsModule.GameplayBehaviorSmartObjectBehaviorDefinition
// (None)

class UClass* UGameplayBehaviorSmartObjectBehaviorDefinition::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayBehaviorSmartObjectBehaviorDefinition");

	return Clss;
}


// GameplayBehaviorSmartObjectBehaviorDefinition GameplayBehaviorSmartObjectsModule.Default__GameplayBehaviorSmartObjectBehaviorDefinition
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayBehaviorSmartObjectBehaviorDefinition* UGameplayBehaviorSmartObjectBehaviorDefinition::GetDefaultObj()
{
	static class UGameplayBehaviorSmartObjectBehaviorDefinition* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayBehaviorSmartObjectBehaviorDefinition*>(UGameplayBehaviorSmartObjectBehaviorDefinition::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayBehaviorSmartObjectsModule.AITask_UseGameplayBehaviorSmartObject
// (None)

class UClass* UAITask_UseGameplayBehaviorSmartObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AITask_UseGameplayBehaviorSmartObject");

	return Clss;
}


// AITask_UseGameplayBehaviorSmartObject GameplayBehaviorSmartObjectsModule.Default__AITask_UseGameplayBehaviorSmartObject
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAITask_UseGameplayBehaviorSmartObject* UAITask_UseGameplayBehaviorSmartObject::GetDefaultObj()
{
	static class UAITask_UseGameplayBehaviorSmartObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UAITask_UseGameplayBehaviorSmartObject*>(UAITask_UseGameplayBehaviorSmartObject::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayBehaviorSmartObjectsModule.AITask_UseGameplayBehaviorSmartObject.UseSmartObjectWithGameplayBehavior
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAIController*               Controller                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSmartObjectClaimHandle     ClaimHandle                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bLockAILogic                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAITask_UseGameplayBehaviorSmartObject*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAITask_UseGameplayBehaviorSmartObject* UAITask_UseGameplayBehaviorSmartObject::UseSmartObjectWithGameplayBehavior(class UAIController* Controller, const struct FSmartObjectClaimHandle& ClaimHandle, bool bLockAILogic)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AITask_UseGameplayBehaviorSmartObject", "UseSmartObjectWithGameplayBehavior");

	Params::UAITask_UseGameplayBehaviorSmartObject_UseSmartObjectWithGameplayBehavior_Params Parms{};

	Parms.Controller = Controller;
	Parms.ClaimHandle = ClaimHandle;
	Parms.bLockAILogic = bLockAILogic;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayBehaviorSmartObjectsModule.AITask_UseGameplayBehaviorSmartObject.UseGameplayBehaviorSmartObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAIController*               Controller                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      SmartObjectActor                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USmartObjectComponent*       SmartObjectComponent                                             (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bLockAILogic                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAITask_UseGameplayBehaviorSmartObject*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAITask_UseGameplayBehaviorSmartObject* UAITask_UseGameplayBehaviorSmartObject::UseGameplayBehaviorSmartObject(class UAIController* Controller, class UActor* SmartObjectActor, class USmartObjectComponent* SmartObjectComponent, bool bLockAILogic)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AITask_UseGameplayBehaviorSmartObject", "UseGameplayBehaviorSmartObject");

	Params::UAITask_UseGameplayBehaviorSmartObject_UseGameplayBehaviorSmartObject_Params Parms{};

	Parms.Controller = Controller;
	Parms.SmartObjectActor = SmartObjectActor;
	Parms.SmartObjectComponent = SmartObjectComponent;
	Parms.bLockAILogic = bLockAILogic;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayBehaviorSmartObjectsModule.AITask_UseGameplayBehaviorSmartObject.MoveToAndUseSmartObjectWithGameplayBehavior
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAIController*               Controller                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSmartObjectClaimHandle     ClaimHandle                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bLockAILogic                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAITask_UseGameplayBehaviorSmartObject*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAITask_UseGameplayBehaviorSmartObject* UAITask_UseGameplayBehaviorSmartObject::MoveToAndUseSmartObjectWithGameplayBehavior(class UAIController* Controller, const struct FSmartObjectClaimHandle& ClaimHandle, bool bLockAILogic)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AITask_UseGameplayBehaviorSmartObject", "MoveToAndUseSmartObjectWithGameplayBehavior");

	Params::UAITask_UseGameplayBehaviorSmartObject_MoveToAndUseSmartObjectWithGameplayBehavior_Params Parms{};

	Parms.Controller = Controller;
	Parms.ClaimHandle = ClaimHandle;
	Parms.bLockAILogic = bLockAILogic;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GameplayBehaviorSmartObjectsModule.BTTask_FindAndUseGameplayBehaviorSmartObject
// (None)

class UClass* UBTTask_FindAndUseGameplayBehaviorSmartObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_FindAndUseGameplayBehaviorSmartObject");

	return Clss;
}


// BTTask_FindAndUseGameplayBehaviorSmartObject GameplayBehaviorSmartObjectsModule.Default__BTTask_FindAndUseGameplayBehaviorSmartObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTTask_FindAndUseGameplayBehaviorSmartObject* UBTTask_FindAndUseGameplayBehaviorSmartObject::GetDefaultObj()
{
	static class UBTTask_FindAndUseGameplayBehaviorSmartObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_FindAndUseGameplayBehaviorSmartObject*>(UBTTask_FindAndUseGameplayBehaviorSmartObject::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayBehaviorSmartObjectsModule.GameplayBehaviorSmartObjectsBlueprintFunctionLibrary
// (None)

class UClass* UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayBehaviorSmartObjectsBlueprintFunctionLibrary");

	return Clss;
}


// GameplayBehaviorSmartObjectsBlueprintFunctionLibrary GameplayBehaviorSmartObjectsModule.Default__GameplayBehaviorSmartObjectsBlueprintFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary* UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary::GetDefaultObj()
{
	static class UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary*>(UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayBehaviorSmartObjectsModule.GameplayBehaviorSmartObjectsBlueprintFunctionLibrary.UseGameplayBehaviorSmartObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActor*                      Avatar                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      SmartObject                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary::UseGameplayBehaviorSmartObject(class UActor* Avatar, class UActor* SmartObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayBehaviorSmartObjectsBlueprintFunctionLibrary", "UseGameplayBehaviorSmartObject");

	Params::UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary_UseGameplayBehaviorSmartObject_Params Parms{};

	Parms.Avatar = Avatar;
	Parms.SmartObject = SmartObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


