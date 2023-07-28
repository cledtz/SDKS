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
	static auto Func = Class->GetFunction("AITask_UseGameplayBehaviorSmartObject", "UseGameplayBehaviorSmartObject");

	Params::UAITask_UseGameplayBehaviorSmartObject_UseGameplayBehaviorSmartObject_Params Parms;

	Parms.Controller = Controller;
	Parms.SmartObjectActor = SmartObjectActor;
	Parms.SmartObjectComponent = SmartObjectComponent;
	Parms.bLockAILogic = bLockAILogic;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayBehaviorSmartObjectsModule.AITask_UseGameplayBehaviorSmartObject.UseClaimedGameplayBehaviorSmartObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAIController*               Controller                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSmartObjectClaimHandle     ClaimHandle                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bLockAILogic                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAITask_UseGameplayBehaviorSmartObject*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAITask_UseGameplayBehaviorSmartObject* UAITask_UseGameplayBehaviorSmartObject::UseClaimedGameplayBehaviorSmartObject(class UAIController* Controller, const struct FSmartObjectClaimHandle& ClaimHandle, bool bLockAILogic)
{
	static auto Func = Class->GetFunction("AITask_UseGameplayBehaviorSmartObject", "UseClaimedGameplayBehaviorSmartObject");

	Params::UAITask_UseGameplayBehaviorSmartObject_UseClaimedGameplayBehaviorSmartObject_Params Parms;

	Parms.Controller = Controller;
	Parms.ClaimHandle = ClaimHandle;
	Parms.bLockAILogic = bLockAILogic;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayBehaviorSmartObjectsModule.GameplayBehaviorSmartObjectsBlueprintFunctionLibrary.UseGameplayBehaviorSmartObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActor*                      Avatar                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      SmartObject                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary::UseGameplayBehaviorSmartObject(class UActor* Avatar, class UActor* SmartObject)
{
	static auto Func = Class->GetFunction("GameplayBehaviorSmartObjectsBlueprintFunctionLibrary", "UseGameplayBehaviorSmartObject");

	Params::UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary_UseGameplayBehaviorSmartObject_Params Parms;

	Parms.Avatar = Avatar;
	Parms.SmartObject = SmartObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
