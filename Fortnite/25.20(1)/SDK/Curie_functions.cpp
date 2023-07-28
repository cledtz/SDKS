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


// Function Curie.CurieInterface.OnCurieStateDetached_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FCurieContainerHandle       CurieContainerHandle                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                StateTag                                                         (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCurieInterface::OnCurieStateDetached_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& StateTag)
{
	static auto Func = Class->GetFunction("CurieInterface", "OnCurieStateDetached_BP");

	Params::UCurieInterface_OnCurieStateDetached_BP_Params Parms;

	Parms.CurieContainerHandle = CurieContainerHandle;
	Parms.StateTag = StateTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Curie.CurieInterface.OnCurieStateAttached_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FCurieContainerHandle       CurieContainerHandle                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                StateTag                                                         (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCurieInterface::OnCurieStateAttached_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& StateTag)
{
	static auto Func = Class->GetFunction("CurieInterface", "OnCurieStateAttached_BP");

	Params::UCurieInterface_OnCurieStateAttached_BP_Params Parms;

	Parms.CurieContainerHandle = CurieContainerHandle;
	Parms.StateTag = StateTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Curie.CurieInterface.OnCurieElementInteractEnded_BP
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FCurieContainerHandle       CurieContainerHandle                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                ElementTag                                                       (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FCurieInteractParamsHandle  InteractParamsHandle                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UCurieInterface::OnCurieElementInteractEnded_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag, struct FCurieInteractParamsHandle& InteractParamsHandle)
{
	static auto Func = Class->GetFunction("CurieInterface", "OnCurieElementInteractEnded_BP");

	Params::UCurieInterface_OnCurieElementInteractEnded_BP_Params Parms;

	Parms.CurieContainerHandle = CurieContainerHandle;
	Parms.ElementTag = ElementTag;
	Parms.InteractParamsHandle = InteractParamsHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Curie.CurieInterface.OnCurieElementInteractBegun_BP
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FCurieContainerHandle       CurieContainerHandle                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                ElementTag                                                       (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FCurieInteractParamsHandle  InteractParamsHandle                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UCurieInterface::OnCurieElementInteractBegun_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag, struct FCurieInteractParamsHandle& InteractParamsHandle)
{
	static auto Func = Class->GetFunction("CurieInterface", "OnCurieElementInteractBegun_BP");

	Params::UCurieInterface_OnCurieElementInteractBegun_BP_Params Parms;

	Parms.CurieContainerHandle = CurieContainerHandle;
	Parms.ElementTag = ElementTag;
	Parms.InteractParamsHandle = InteractParamsHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Curie.CurieInterface.OnCurieElementInteract_BP
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FCurieContainerHandle       CurieContainerHandle                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                ElementTag                                                       (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FCurieInteractParamsHandle  InteractParamsHandle                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UCurieInterface::OnCurieElementInteract_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag, struct FCurieInteractParamsHandle& InteractParamsHandle)
{
	static auto Func = Class->GetFunction("CurieInterface", "OnCurieElementInteract_BP");

	Params::UCurieInterface_OnCurieElementInteract_BP_Params Parms;

	Parms.CurieContainerHandle = CurieContainerHandle;
	Parms.ElementTag = ElementTag;
	Parms.InteractParamsHandle = InteractParamsHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Curie.CurieInterface.OnCurieElementDetached_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FCurieContainerHandle       CurieContainerHandle                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                ElementTag                                                       (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCurieInterface::OnCurieElementDetached_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag)
{
	static auto Func = Class->GetFunction("CurieInterface", "OnCurieElementDetached_BP");

	Params::UCurieInterface_OnCurieElementDetached_BP_Params Parms;

	Parms.CurieContainerHandle = CurieContainerHandle;
	Parms.ElementTag = ElementTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Curie.CurieInterface.OnCurieElementAttached_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FCurieContainerHandle       CurieContainerHandle                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                ElementTag                                                       (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCurieInterface::OnCurieElementAttached_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag)
{
	static auto Func = Class->GetFunction("CurieInterface", "OnCurieElementAttached_BP");

	Params::UCurieInterface_OnCurieElementAttached_BP_Params Parms;

	Parms.CurieContainerHandle = CurieContainerHandle;
	Parms.ElementTag = ElementTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Curie.CurieInterface.OnCurieContainerReparented_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FCurieContainerHandle       CurieContainerHandle                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCurieInterface::OnCurieContainerReparented_BP(const struct FCurieContainerHandle& CurieContainerHandle)
{
	static auto Func = Class->GetFunction("CurieInterface", "OnCurieContainerReparented_BP");

	Params::UCurieInterface_OnCurieContainerReparented_BP_Params Parms;

	Parms.CurieContainerHandle = CurieContainerHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Curie.CurieInterface.OnCurieContainerReleased_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FCurieContainerHandle       CurieContainerHandle                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCurieInterface::OnCurieContainerReleased_BP(const struct FCurieContainerHandle& CurieContainerHandle)
{
	static auto Func = Class->GetFunction("CurieInterface", "OnCurieContainerReleased_BP");

	Params::UCurieInterface_OnCurieContainerReleased_BP_Params Parms;

	Parms.CurieContainerHandle = CurieContainerHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Curie.CurieInterface.OnCurieContainerAcquired_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FCurieContainerHandle       CurieContainerHandle                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCurieInterface::OnCurieContainerAcquired_BP(const struct FCurieContainerHandle& CurieContainerHandle)
{
	static auto Func = Class->GetFunction("CurieInterface", "OnCurieContainerAcquired_BP");

	Params::UCurieInterface_OnCurieContainerAcquired_BP_Params Parms;

	Parms.CurieContainerHandle = CurieContainerHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Curie.CurieManager.UnbindDelegateForCurieStateDetached
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     CurieOwner                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCurieManager::UnbindDelegateForCurieStateDetached(class UObject* CurieOwner, FDelegateProperty_& Delegate)
{
	static auto Func = Class->GetFunction("CurieManager", "UnbindDelegateForCurieStateDetached");

	Params::UCurieManager_UnbindDelegateForCurieStateDetached_Params Parms;

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Curie.CurieManager.UnbindDelegateForCurieStateAttached
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     CurieOwner                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCurieManager::UnbindDelegateForCurieStateAttached(class UObject* CurieOwner, FDelegateProperty_& Delegate)
{
	static auto Func = Class->GetFunction("CurieManager", "UnbindDelegateForCurieStateAttached");

	Params::UCurieManager_UnbindDelegateForCurieStateAttached_Params Parms;

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Curie.CurieManager.UnbindDelegateForCurieElementInteract
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     CurieOwner                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCurieManager::UnbindDelegateForCurieElementInteract(class UObject* CurieOwner, FDelegateProperty_& Delegate)
{
	static auto Func = Class->GetFunction("CurieManager", "UnbindDelegateForCurieElementInteract");

	Params::UCurieManager_UnbindDelegateForCurieElementInteract_Params Parms;

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Curie.CurieManager.UnbindDelegateForCurieElementEndInteract
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     CurieOwner                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCurieManager::UnbindDelegateForCurieElementEndInteract(class UObject* CurieOwner, FDelegateProperty_& Delegate)
{
	static auto Func = Class->GetFunction("CurieManager", "UnbindDelegateForCurieElementEndInteract");

	Params::UCurieManager_UnbindDelegateForCurieElementEndInteract_Params Parms;

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Curie.CurieManager.UnbindDelegateForCurieElementDetached
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     CurieOwner                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCurieManager::UnbindDelegateForCurieElementDetached(class UObject* CurieOwner, FDelegateProperty_& Delegate)
{
	static auto Func = Class->GetFunction("CurieManager", "UnbindDelegateForCurieElementDetached");

	Params::UCurieManager_UnbindDelegateForCurieElementDetached_Params Parms;

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Curie.CurieManager.UnbindDelegateForCurieElementBeginInteract
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     CurieOwner                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCurieManager::UnbindDelegateForCurieElementBeginInteract(class UObject* CurieOwner, FDelegateProperty_& Delegate)
{
	static auto Func = Class->GetFunction("CurieManager", "UnbindDelegateForCurieElementBeginInteract");

	Params::UCurieManager_UnbindDelegateForCurieElementBeginInteract_Params Parms;

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Curie.CurieManager.UnbindDelegateForCurieElementAttached
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     CurieOwner                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCurieManager::UnbindDelegateForCurieElementAttached(class UObject* CurieOwner, FDelegateProperty_& Delegate)
{
	static auto Func = Class->GetFunction("CurieManager", "UnbindDelegateForCurieElementAttached");

	Params::UCurieManager_UnbindDelegateForCurieElementAttached_Params Parms;

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Curie.CurieManager.HandleContainerOwnerDestroyed
// (Final, Native, Private)
// Parameters:
// class UActor*                      OwnerActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCurieManager::HandleContainerOwnerDestroyed(class UActor* OwnerActor)
{
	static auto Func = Class->GetFunction("CurieManager", "HandleContainerOwnerDestroyed");

	Params::UCurieManager_HandleContainerOwnerDestroyed_Params Parms;

	Parms.OwnerActor = OwnerActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Curie.CurieManager.BindDelegateForCurieStateDetached
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     CurieOwner                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCurieManager::BindDelegateForCurieStateDetached(class UObject* CurieOwner, FDelegateProperty_& Delegate)
{
	static auto Func = Class->GetFunction("CurieManager", "BindDelegateForCurieStateDetached");

	Params::UCurieManager_BindDelegateForCurieStateDetached_Params Parms;

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Curie.CurieManager.BindDelegateForCurieStateAttached
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     CurieOwner                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCurieManager::BindDelegateForCurieStateAttached(class UObject* CurieOwner, FDelegateProperty_& Delegate)
{
	static auto Func = Class->GetFunction("CurieManager", "BindDelegateForCurieStateAttached");

	Params::UCurieManager_BindDelegateForCurieStateAttached_Params Parms;

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Curie.CurieManager.BindDelegateForCurieElementInteract
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     CurieOwner                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCurieManager::BindDelegateForCurieElementInteract(class UObject* CurieOwner, FDelegateProperty_& Delegate)
{
	static auto Func = Class->GetFunction("CurieManager", "BindDelegateForCurieElementInteract");

	Params::UCurieManager_BindDelegateForCurieElementInteract_Params Parms;

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Curie.CurieManager.BindDelegateForCurieElementEndInteract
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     CurieOwner                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCurieManager::BindDelegateForCurieElementEndInteract(class UObject* CurieOwner, FDelegateProperty_& Delegate)
{
	static auto Func = Class->GetFunction("CurieManager", "BindDelegateForCurieElementEndInteract");

	Params::UCurieManager_BindDelegateForCurieElementEndInteract_Params Parms;

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Curie.CurieManager.BindDelegateForCurieElementDetached
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     CurieOwner                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCurieManager::BindDelegateForCurieElementDetached(class UObject* CurieOwner, FDelegateProperty_& Delegate)
{
	static auto Func = Class->GetFunction("CurieManager", "BindDelegateForCurieElementDetached");

	Params::UCurieManager_BindDelegateForCurieElementDetached_Params Parms;

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Curie.CurieManager.BindDelegateForCurieElementBeginInteract
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     CurieOwner                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCurieManager::BindDelegateForCurieElementBeginInteract(class UObject* CurieOwner, FDelegateProperty_& Delegate)
{
	static auto Func = Class->GetFunction("CurieManager", "BindDelegateForCurieElementBeginInteract");

	Params::UCurieManager_BindDelegateForCurieElementBeginInteract_Params Parms;

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Curie.CurieManager.BindDelegateForCurieElementAttached
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     CurieOwner                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCurieManager::BindDelegateForCurieElementAttached(class UObject* CurieOwner, FDelegateProperty_& Delegate)
{
	static auto Func = Class->GetFunction("CurieManager", "BindDelegateForCurieElementAttached");

	Params::UCurieManager_BindDelegateForCurieElementAttached_Params Parms;

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
