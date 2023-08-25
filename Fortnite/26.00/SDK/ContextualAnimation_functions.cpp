#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ContextualAnimation.AnimNotifyState_EarlyOutContextualAnimWindow
// (None)

class UClass* UAnimNotifyState_EarlyOutContextualAnimWindow::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotifyState_EarlyOutContextualAnimWindow");

	return Clss;
}


// AnimNotifyState_EarlyOutContextualAnimWindow ContextualAnimation.Default__AnimNotifyState_EarlyOutContextualAnimWindow
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimNotifyState_EarlyOutContextualAnimWindow* UAnimNotifyState_EarlyOutContextualAnimWindow::GetDefaultObj()
{
	static class UAnimNotifyState_EarlyOutContextualAnimWindow* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotifyState_EarlyOutContextualAnimWindow*>(UAnimNotifyState_EarlyOutContextualAnimWindow::StaticClass()->DefaultObject);

	return Default;
}


// Class ContextualAnimation.AnimNotifyState_IKWindow
// (None)

class UClass* UAnimNotifyState_IKWindow::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotifyState_IKWindow");

	return Clss;
}


// AnimNotifyState_IKWindow ContextualAnimation.Default__AnimNotifyState_IKWindow
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimNotifyState_IKWindow* UAnimNotifyState_IKWindow::GetDefaultObj()
{
	static class UAnimNotifyState_IKWindow* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotifyState_IKWindow*>(UAnimNotifyState_IKWindow::StaticClass()->DefaultObject);

	return Default;
}


// Class ContextualAnimation.ContextualAnimActorInterface
// (None)

class UClass* UContextualAnimActorInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ContextualAnimActorInterface");

	return Clss;
}


// ContextualAnimActorInterface ContextualAnimation.Default__ContextualAnimActorInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UContextualAnimActorInterface* UContextualAnimActorInterface::GetDefaultObj()
{
	static class UContextualAnimActorInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UContextualAnimActorInterface*>(UContextualAnimActorInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function ContextualAnimation.ContextualAnimActorInterface.GetMesh
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USkeletalMeshComponent*      ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USkeletalMeshComponent* UContextualAnimActorInterface::GetMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimActorInterface", "GetMesh");

	Params::UContextualAnimActorInterface_GetMesh_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ContextualAnimation.ContextualAnimManager
// (None)

class UClass* UContextualAnimManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ContextualAnimManager");

	return Clss;
}


// ContextualAnimManager ContextualAnimation.Default__ContextualAnimManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UContextualAnimManager* UContextualAnimManager::GetDefaultObj()
{
	static class UContextualAnimManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UContextualAnimManager*>(UContextualAnimManager::StaticClass()->DefaultObject);

	return Default;
}


// Function ContextualAnimation.ContextualAnimManager.TryStopSceneWithActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UContextualAnimManager::TryStopSceneWithActor(class UActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimManager", "TryStopSceneWithActor");

	Params::UContextualAnimManager_TryStopSceneWithActor_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimManager.OnSceneInstanceEnded
// (Final, Native, Protected)
// Parameters:
// class UContextualAnimSceneInstance*SceneInstance                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UContextualAnimManager::OnSceneInstanceEnded(class UContextualAnimSceneInstance* SceneInstance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimManager", "OnSceneInstanceEnded");

	Params::UContextualAnimManager_OnSceneInstanceEnded_Params Parms{};

	Parms.SceneInstance = SceneInstance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ContextualAnimation.ContextualAnimManager.IsActorInAnyScene
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UContextualAnimManager::IsActorInAnyScene(class UActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimManager", "IsActorInAnyScene");

	Params::UContextualAnimManager_IsActorInAnyScene_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimManager.GetSceneWithActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UContextualAnimSceneInstance*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UContextualAnimSceneInstance* UContextualAnimManager::GetSceneWithActor(class UActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimManager", "GetSceneWithActor");

	Params::UContextualAnimManager_GetSceneWithActor_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimManager.GetContextualAnimManager
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UContextualAnimManager*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UContextualAnimManager* UContextualAnimManager::GetContextualAnimManager(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimManager", "GetContextualAnimManager");

	Params::UContextualAnimManager_GetContextualAnimManager_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimManager.BP_TryStartScene
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UContextualAnimSceneAsset*   SceneAsset                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FContextualAnimStartSceneParamsParams                                                           (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class UContextualAnimSceneInstance*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UContextualAnimSceneInstance* UContextualAnimManager::BP_TryStartScene(class UContextualAnimSceneAsset* SceneAsset, struct FContextualAnimStartSceneParams& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimManager", "BP_TryStartScene");

	Params::UContextualAnimManager_BP_TryStartScene_Params Parms{};

	Parms.SceneAsset = SceneAsset;
	Parms.Params = Params;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ContextualAnimation.ContextualAnimSceneActorComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UContextualAnimSceneActorComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ContextualAnimSceneActorComponent");

	return Clss;
}


// ContextualAnimSceneActorComponent ContextualAnimation.Default__ContextualAnimSceneActorComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UContextualAnimSceneActorComponent* UContextualAnimSceneActorComponent::GetDefaultObj()
{
	static class UContextualAnimSceneActorComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UContextualAnimSceneActorComponent*>(UContextualAnimSceneActorComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function ContextualAnimation.ContextualAnimSceneActorComponent.TransitionSingleActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              SectionIdx                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AnimSetIdx                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UContextualAnimSceneActorComponent::TransitionSingleActor(int32 SectionIdx, int32 AnimSetIdx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimSceneActorComponent", "TransitionSingleActor");

	Params::UContextualAnimSceneActorComponent_TransitionSingleActor_Params Parms{};

	Parms.SectionIdx = SectionIdx;
	Parms.AnimSetIdx = AnimSetIdx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimSceneActorComponent.TransitionContextualAnimScene
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        SectionName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UContextualAnimSceneActorComponent::TransitionContextualAnimScene(class FName SectionName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimSceneActorComponent", "TransitionContextualAnimScene");

	Params::UContextualAnimSceneActorComponent_TransitionContextualAnimScene_Params Parms{};

	Parms.SectionName = SectionName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimSceneActorComponent.StartContextualAnimScene
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FContextualAnimSceneBindingsInBindings                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UContextualAnimSceneActorComponent::StartContextualAnimScene(struct FContextualAnimSceneBindings& InBindings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimSceneActorComponent", "StartContextualAnimScene");

	Params::UContextualAnimSceneActorComponent_StartContextualAnimScene_Params Parms{};

	Parms.InBindings = InBindings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimSceneActorComponent.ServerStartContextualAnimScene
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FContextualAnimSceneBindingsInBindings                                                       (ConstParm, Parm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UContextualAnimSceneActorComponent::ServerStartContextualAnimScene(struct FContextualAnimSceneBindings& InBindings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimSceneActorComponent", "ServerStartContextualAnimScene");

	Params::UContextualAnimSceneActorComponent_ServerStartContextualAnimScene_Params Parms{};

	Parms.InBindings = InBindings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ContextualAnimation.ContextualAnimSceneActorComponent.ServerEarlyOutContextualAnimScene
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:

void UContextualAnimSceneActorComponent::ServerEarlyOutContextualAnimScene()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimSceneActorComponent", "ServerEarlyOutContextualAnimScene");

	Params::UContextualAnimSceneActorComponent_ServerEarlyOutContextualAnimScene_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ContextualAnimation.ContextualAnimSceneActorComponent.OnTickPose
// (Final, Native, Protected)
// Parameters:
// class USkinnedMeshComponent*       SkinnedMeshComponent                                             (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DeltaTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNeedsValidRootMotion                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UContextualAnimSceneActorComponent::OnTickPose(class USkinnedMeshComponent* SkinnedMeshComponent, float DeltaTime, bool bNeedsValidRootMotion)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimSceneActorComponent", "OnTickPose");

	Params::UContextualAnimSceneActorComponent_OnTickPose_Params Parms{};

	Parms.SkinnedMeshComponent = SkinnedMeshComponent;
	Parms.DeltaTime = DeltaTime;
	Parms.bNeedsValidRootMotion = bNeedsValidRootMotion;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ContextualAnimation.ContextualAnimSceneActorComponent.OnRep_TransitionData
// (Final, Native, Protected)
// Parameters:

void UContextualAnimSceneActorComponent::OnRep_TransitionData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimSceneActorComponent", "OnRep_TransitionData");

	Params::UContextualAnimSceneActorComponent_OnRep_TransitionData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ContextualAnimation.ContextualAnimSceneActorComponent.OnRep_RepTransitionSingleActor
// (Final, Native, Protected)
// Parameters:

void UContextualAnimSceneActorComponent::OnRep_RepTransitionSingleActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimSceneActorComponent", "OnRep_RepTransitionSingleActor");

	Params::UContextualAnimSceneActorComponent_OnRep_RepTransitionSingleActor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ContextualAnimation.ContextualAnimSceneActorComponent.OnRep_LateJoinData
// (Final, Native, Protected)
// Parameters:

void UContextualAnimSceneActorComponent::OnRep_LateJoinData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimSceneActorComponent", "OnRep_LateJoinData");

	Params::UContextualAnimSceneActorComponent_OnRep_LateJoinData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ContextualAnimation.ContextualAnimSceneActorComponent.OnRep_Bindings
// (Final, Native, Protected)
// Parameters:

void UContextualAnimSceneActorComponent::OnRep_Bindings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimSceneActorComponent", "OnRep_Bindings");

	Params::UContextualAnimSceneActorComponent_OnRep_Bindings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ContextualAnimation.ContextualAnimSceneActorComponent.OnPlayMontageNotifyBegin
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class FName                        NotifyName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBranchingPointNotifyPayloadBranchingPointNotifyPayload                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UContextualAnimSceneActorComponent::OnPlayMontageNotifyBegin(class FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimSceneActorComponent", "OnPlayMontageNotifyBegin");

	Params::UContextualAnimSceneActorComponent_OnPlayMontageNotifyBegin_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.BranchingPointNotifyPayload = BranchingPointNotifyPayload;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ContextualAnimation.ContextualAnimSceneActorComponent.OnMontageBlendingOut
// (Final, Native, Protected)
// Parameters:
// class UAnimMontage*                Montage                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInterrupted                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UContextualAnimSceneActorComponent::OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimSceneActorComponent", "OnMontageBlendingOut");

	Params::UContextualAnimSceneActorComponent_OnMontageBlendingOut_Params Parms{};

	Parms.Montage = Montage;
	Parms.bInterrupted = bInterrupted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ContextualAnimation.ContextualAnimSceneActorComponent.OnLeftScene
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UContextualAnimSceneActorComponent::OnLeftScene()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimSceneActorComponent", "OnLeftScene");

	Params::UContextualAnimSceneActorComponent_OnLeftScene_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ContextualAnimation.ContextualAnimSceneActorComponent.OnJoinedScene
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FContextualAnimSceneBindingsInBindings                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UContextualAnimSceneActorComponent::OnJoinedScene(struct FContextualAnimSceneBindings& InBindings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimSceneActorComponent", "OnJoinedScene");

	Params::UContextualAnimSceneActorComponent_OnJoinedScene_Params Parms{};

	Parms.InBindings = InBindings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ContextualAnimation.ContextualAnimSceneActorComponent.LateJoinContextualAnimScene
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Role                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UContextualAnimSceneActorComponent::LateJoinContextualAnimScene(class UActor* Actor, class FName Role)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimSceneActorComponent", "LateJoinContextualAnimScene");

	Params::UContextualAnimSceneActorComponent_LateJoinContextualAnimScene_Params Parms{};

	Parms.Actor = Actor;
	Parms.Role = Role;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimSceneActorComponent.GetIKTargets
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FContextualAnimIKTarget>ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<struct FContextualAnimIKTarget> UContextualAnimSceneActorComponent::GetIKTargets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimSceneActorComponent", "GetIKTargets");

	Params::UContextualAnimSceneActorComponent_GetIKTargets_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimSceneActorComponent.GetIKTargetByGoalName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        GoalName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FContextualAnimIKTarget     ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

struct FContextualAnimIKTarget UContextualAnimSceneActorComponent::GetIKTargetByGoalName(class FName GoalName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimSceneActorComponent", "GetIKTargetByGoalName");

	Params::UContextualAnimSceneActorComponent_GetIKTargetByGoalName_Params Parms{};

	Parms.GoalName = GoalName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ContextualAnimation.ContextualAnimRolesAsset
// (None)

class UClass* UContextualAnimRolesAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ContextualAnimRolesAsset");

	return Clss;
}


// ContextualAnimRolesAsset ContextualAnimation.Default__ContextualAnimRolesAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UContextualAnimRolesAsset* UContextualAnimRolesAsset::GetDefaultObj()
{
	static class UContextualAnimRolesAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UContextualAnimRolesAsset*>(UContextualAnimRolesAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class ContextualAnimation.ContextualAnimSceneAsset
// (None)

class UClass* UContextualAnimSceneAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ContextualAnimSceneAsset");

	return Clss;
}


// ContextualAnimSceneAsset ContextualAnimation.Default__ContextualAnimSceneAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UContextualAnimSceneAsset* UContextualAnimSceneAsset::GetDefaultObj()
{
	static class UContextualAnimSceneAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UContextualAnimSceneAsset*>(UContextualAnimSceneAsset::StaticClass()->DefaultObject);

	return Default;
}


// Function ContextualAnimation.ContextualAnimSceneAsset.Query
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        Role                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FContextualAnimQueryResult  OutResult                                                        (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FContextualAnimQueryParams  QueryParams                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  ToWorldTransform                                                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UContextualAnimSceneAsset::Query(class FName Role, struct FContextualAnimQueryResult* OutResult, struct FContextualAnimQueryParams& QueryParams, struct FTransform& ToWorldTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimSceneAsset", "Query");

	Params::UContextualAnimSceneAsset_Query_Params Parms{};

	Parms.Role = Role;
	Parms.QueryParams = QueryParams;
	Parms.ToWorldTransform = ToWorldTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimSceneAsset.GetRoles
// (Final, Native, Public, Const)
// Parameters:
// TArray<class FName>                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FName> UContextualAnimSceneAsset::GetRoles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimSceneAsset", "GetRoles");

	Params::UContextualAnimSceneAsset_GetRoles_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimSceneAsset.GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EContextualAnimPointTypeType                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SectionIdx                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FContextualAnimSceneBindingContextPrimary                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FContextualAnimSceneBindingContextQuerier                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// enum class EContextualAnimCriterionToConsiderCriterionToConsider                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FContextualAnimPoint>OutResult                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UContextualAnimSceneAsset::GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria(enum class EContextualAnimPointType Type, int32 SectionIdx, struct FContextualAnimSceneBindingContext& Primary, struct FContextualAnimSceneBindingContext& Querier, enum class EContextualAnimCriterionToConsider CriterionToConsider, TArray<struct FContextualAnimPoint>* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimSceneAsset", "GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria");

	Params::UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria_Params Parms{};

	Parms.Type = Type;
	Parms.SectionIdx = SectionIdx;
	Parms.Primary = Primary;
	Parms.Querier = Querier;
	Parms.CriterionToConsider = CriterionToConsider;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

}


// Function ContextualAnimation.ContextualAnimSceneAsset.GetAlignmentPointsForSecondaryRole
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EContextualAnimPointTypeType                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SectionIdx                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FContextualAnimSceneBindingContextPrimary                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// TArray<struct FContextualAnimPoint>OutResult                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UContextualAnimSceneAsset::GetAlignmentPointsForSecondaryRole(enum class EContextualAnimPointType Type, int32 SectionIdx, struct FContextualAnimSceneBindingContext& Primary, TArray<struct FContextualAnimPoint>* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimSceneAsset", "GetAlignmentPointsForSecondaryRole");

	Params::UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRole_Params Parms{};

	Parms.Type = Type;
	Parms.SectionIdx = SectionIdx;
	Parms.Primary = Primary;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

}


// Function ContextualAnimation.ContextualAnimSceneAsset.BP_GetStartAndEndTimeForWarpSection
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              SectionIdx                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AnimSetIdx                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Role                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        WarpSectionName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutStartTime                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutEndTime                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UContextualAnimSceneAsset::BP_GetStartAndEndTimeForWarpSection(int32 SectionIdx, int32 AnimSetIdx, class FName Role, class FName WarpSectionName, float* OutStartTime, float* OutEndTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimSceneAsset", "BP_GetStartAndEndTimeForWarpSection");

	Params::UContextualAnimSceneAsset_BP_GetStartAndEndTimeForWarpSection_Params Parms{};

	Parms.SectionIdx = SectionIdx;
	Parms.AnimSetIdx = AnimSetIdx;
	Parms.Role = Role;
	Parms.WarpSectionName = WarpSectionName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutStartTime != nullptr)
		*OutStartTime = Parms.OutStartTime;

	if (OutEndTime != nullptr)
		*OutEndTime = Parms.OutEndTime;

}


// Function ContextualAnimation.ContextualAnimSceneAsset.BP_GetIKTargetTransformForRoleAtTime
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              SectionIdx                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AnimSetIdx                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Role                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TrackName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform UContextualAnimSceneAsset::BP_GetIKTargetTransformForRoleAtTime(int32 SectionIdx, int32 AnimSetIdx, class FName Role, class FName TrackName, float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimSceneAsset", "BP_GetIKTargetTransformForRoleAtTime");

	Params::UContextualAnimSceneAsset_BP_GetIKTargetTransformForRoleAtTime_Params Parms{};

	Parms.SectionIdx = SectionIdx;
	Parms.AnimSetIdx = AnimSetIdx;
	Parms.Role = Role;
	Parms.TrackName = TrackName;
	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimSceneAsset.BP_GetAlignmentTransformForRoleRelativeToWarpPoint
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              SectionIdx                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AnimSetIdx                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Role                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform UContextualAnimSceneAsset::BP_GetAlignmentTransformForRoleRelativeToWarpPoint(int32 SectionIdx, int32 AnimSetIdx, class FName Role, float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimSceneAsset", "BP_GetAlignmentTransformForRoleRelativeToWarpPoint");

	Params::UContextualAnimSceneAsset_BP_GetAlignmentTransformForRoleRelativeToWarpPoint_Params Parms{};

	Parms.SectionIdx = SectionIdx;
	Parms.AnimSetIdx = AnimSetIdx;
	Parms.Role = Role;
	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimSceneAsset.BP_FindAnimSetIndexByAnimation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              SectionIdx                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimSequenceBase*           Animation                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UContextualAnimSceneAsset::BP_FindAnimSetIndexByAnimation(int32 SectionIdx, class UAnimSequenceBase* Animation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimSceneAsset", "BP_FindAnimSetIndexByAnimation");

	Params::UContextualAnimSceneAsset_BP_FindAnimSetIndexByAnimation_Params Parms{};

	Parms.SectionIdx = SectionIdx;
	Parms.Animation = Animation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimSceneAsset.BP_FindAnimationForRole
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              SectionIdx                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AnimSetIdx                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Role                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimSequenceBase*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAnimSequenceBase* UContextualAnimSceneAsset::BP_FindAnimationForRole(int32 SectionIdx, int32 AnimSetIdx, class FName Role)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimSceneAsset", "BP_FindAnimationForRole");

	Params::UContextualAnimSceneAsset_BP_FindAnimationForRole_Params Parms{};

	Parms.SectionIdx = SectionIdx;
	Parms.AnimSetIdx = AnimSetIdx;
	Parms.Role = Role;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ContextualAnimation.ContextualAnimSceneInstance
// (None)

class UClass* UContextualAnimSceneInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ContextualAnimSceneInstance");

	return Clss;
}


// ContextualAnimSceneInstance ContextualAnimation.Default__ContextualAnimSceneInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UContextualAnimSceneInstance* UContextualAnimSceneInstance::GetDefaultObj()
{
	static class UContextualAnimSceneInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UContextualAnimSceneInstance*>(UContextualAnimSceneInstance::StaticClass()->DefaultObject);

	return Default;
}


// Function ContextualAnimation.ContextualAnimSceneInstance.OnNotifyEndReceived
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class FName                        NotifyName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBranchingPointNotifyPayloadBranchingPointNotifyPayload                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UContextualAnimSceneInstance::OnNotifyEndReceived(class FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimSceneInstance", "OnNotifyEndReceived");

	Params::UContextualAnimSceneInstance_OnNotifyEndReceived_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.BranchingPointNotifyPayload = BranchingPointNotifyPayload;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ContextualAnimation.ContextualAnimSceneInstance.OnNotifyBeginReceived
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class FName                        NotifyName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBranchingPointNotifyPayloadBranchingPointNotifyPayload                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UContextualAnimSceneInstance::OnNotifyBeginReceived(class FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimSceneInstance", "OnNotifyBeginReceived");

	Params::UContextualAnimSceneInstance_OnNotifyBeginReceived_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.BranchingPointNotifyPayload = BranchingPointNotifyPayload;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ContextualAnimation.ContextualAnimSceneInstance.OnMontageBlendingOut
// (Final, Native, Protected)
// Parameters:
// class UAnimMontage*                Montage                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInterrupted                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UContextualAnimSceneInstance::OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimSceneInstance", "OnMontageBlendingOut");

	Params::UContextualAnimSceneInstance_OnMontageBlendingOut_Params Parms{};

	Parms.Montage = Montage;
	Parms.bInterrupted = bInterrupted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ContextualAnimation.ContextualAnimSceneInstance.GetActorByRole
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        Role                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UActor* UContextualAnimSceneInstance::GetActorByRole(class FName Role)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimSceneInstance", "GetActorByRole");

	Params::UContextualAnimSceneInstance_GetActorByRole_Params Parms{};

	Parms.Role = Role;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ContextualAnimation.ContextualAnimSelectionCriterion
// (None)

class UClass* UContextualAnimSelectionCriterion::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ContextualAnimSelectionCriterion");

	return Clss;
}


// ContextualAnimSelectionCriterion ContextualAnimation.Default__ContextualAnimSelectionCriterion
// (Public, ClassDefaultObject, ArchetypeObject)

class UContextualAnimSelectionCriterion* UContextualAnimSelectionCriterion::GetDefaultObj()
{
	static class UContextualAnimSelectionCriterion* Default = nullptr;

	if (!Default)
		Default = static_cast<UContextualAnimSelectionCriterion*>(UContextualAnimSelectionCriterion::StaticClass()->DefaultObject);

	return Default;
}


// Class ContextualAnimation.ContextualAnimSelectionCriterion_Blueprint
// (None)

class UClass* UContextualAnimSelectionCriterion_Blueprint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ContextualAnimSelectionCriterion_Blueprint");

	return Clss;
}


// ContextualAnimSelectionCriterion_Blueprint ContextualAnimation.Default__ContextualAnimSelectionCriterion_Blueprint
// (Public, ClassDefaultObject, ArchetypeObject)

class UContextualAnimSelectionCriterion_Blueprint* UContextualAnimSelectionCriterion_Blueprint::GetDefaultObj()
{
	static class UContextualAnimSelectionCriterion_Blueprint* Default = nullptr;

	if (!Default)
		Default = static_cast<UContextualAnimSelectionCriterion_Blueprint*>(UContextualAnimSelectionCriterion_Blueprint::StaticClass()->DefaultObject);

	return Default;
}


// Function ContextualAnimation.ContextualAnimSelectionCriterion_Blueprint.GetSceneAsset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UContextualAnimSceneAsset*   ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UContextualAnimSceneAsset* UContextualAnimSelectionCriterion_Blueprint::GetSceneAsset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimSelectionCriterion_Blueprint", "GetSceneAsset");

	Params::UContextualAnimSelectionCriterion_Blueprint_GetSceneAsset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimSelectionCriterion_Blueprint.BP_DoesQuerierPassCondition
// (Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FContextualAnimSceneBindingContextPrimary                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FContextualAnimSceneBindingContextQuerier                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UContextualAnimSelectionCriterion_Blueprint::BP_DoesQuerierPassCondition(struct FContextualAnimSceneBindingContext& Primary, struct FContextualAnimSceneBindingContext& Querier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimSelectionCriterion_Blueprint", "BP_DoesQuerierPassCondition");

	Params::UContextualAnimSelectionCriterion_Blueprint_BP_DoesQuerierPassCondition_Params Parms{};

	Parms.Primary = Primary;
	Parms.Querier = Querier;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Class ContextualAnimation.ContextualAnimSelectionCriterion_TriggerArea
// (None)

class UClass* UContextualAnimSelectionCriterion_TriggerArea::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ContextualAnimSelectionCriterion_TriggerArea");

	return Clss;
}


// ContextualAnimSelectionCriterion_TriggerArea ContextualAnimation.Default__ContextualAnimSelectionCriterion_TriggerArea
// (Public, ClassDefaultObject, ArchetypeObject)

class UContextualAnimSelectionCriterion_TriggerArea* UContextualAnimSelectionCriterion_TriggerArea::GetDefaultObj()
{
	static class UContextualAnimSelectionCriterion_TriggerArea* Default = nullptr;

	if (!Default)
		Default = static_cast<UContextualAnimSelectionCriterion_TriggerArea*>(UContextualAnimSelectionCriterion_TriggerArea::StaticClass()->DefaultObject);

	return Default;
}


// Class ContextualAnimation.ContextualAnimSelectionCriterion_Cone
// (None)

class UClass* UContextualAnimSelectionCriterion_Cone::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ContextualAnimSelectionCriterion_Cone");

	return Clss;
}


// ContextualAnimSelectionCriterion_Cone ContextualAnimation.Default__ContextualAnimSelectionCriterion_Cone
// (Public, ClassDefaultObject, ArchetypeObject)

class UContextualAnimSelectionCriterion_Cone* UContextualAnimSelectionCriterion_Cone::GetDefaultObj()
{
	static class UContextualAnimSelectionCriterion_Cone* Default = nullptr;

	if (!Default)
		Default = static_cast<UContextualAnimSelectionCriterion_Cone*>(UContextualAnimSelectionCriterion_Cone::StaticClass()->DefaultObject);

	return Default;
}


// Class ContextualAnimation.ContextualAnimSelectionCriterion_Distance
// (None)

class UClass* UContextualAnimSelectionCriterion_Distance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ContextualAnimSelectionCriterion_Distance");

	return Clss;
}


// ContextualAnimSelectionCriterion_Distance ContextualAnimation.Default__ContextualAnimSelectionCriterion_Distance
// (Public, ClassDefaultObject, ArchetypeObject)

class UContextualAnimSelectionCriterion_Distance* UContextualAnimSelectionCriterion_Distance::GetDefaultObj()
{
	static class UContextualAnimSelectionCriterion_Distance* Default = nullptr;

	if (!Default)
		Default = static_cast<UContextualAnimSelectionCriterion_Distance*>(UContextualAnimSelectionCriterion_Distance::StaticClass()->DefaultObject);

	return Default;
}


// Class ContextualAnimation.ContextualAnimTransition
// (None)

class UClass* UContextualAnimTransition::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ContextualAnimTransition");

	return Clss;
}


// ContextualAnimTransition ContextualAnimation.Default__ContextualAnimTransition
// (Public, ClassDefaultObject, ArchetypeObject)

class UContextualAnimTransition* UContextualAnimTransition::GetDefaultObj()
{
	static class UContextualAnimTransition* Default = nullptr;

	if (!Default)
		Default = static_cast<UContextualAnimTransition*>(UContextualAnimTransition::StaticClass()->DefaultObject);

	return Default;
}


// Function ContextualAnimation.ContextualAnimTransition.CanEnterTransition
// (Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// class UContextualAnimSceneInstance*SceneInstance                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        FromSection                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ToSection                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UContextualAnimTransition::CanEnterTransition(class UContextualAnimSceneInstance* SceneInstance, class FName& FromSection, class FName& ToSection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimTransition", "CanEnterTransition");

	Params::UContextualAnimTransition_CanEnterTransition_Params Parms{};

	Parms.SceneInstance = SceneInstance;
	Parms.FromSection = FromSection;
	Parms.ToSection = ToSection;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Class ContextualAnimation.ContextualAnimUtilities
// (None)

class UClass* UContextualAnimUtilities::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ContextualAnimUtilities");

	return Clss;
}


// ContextualAnimUtilities ContextualAnimation.Default__ContextualAnimUtilities
// (Public, ClassDefaultObject, ArchetypeObject)

class UContextualAnimUtilities* UContextualAnimUtilities::GetDefaultObj()
{
	static class UContextualAnimUtilities* Default = nullptr;

	if (!Default)
		Default = static_cast<UContextualAnimUtilities*>(UContextualAnimUtilities::StaticClass()->DefaultObject);

	return Default;
}


// Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_GetSectionAndAnimSetIndices
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FContextualAnimSceneBindingsBindings                                                         (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// int32                              SectionIdx                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AnimSetIdx                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UContextualAnimUtilities::BP_SceneBindings_GetSectionAndAnimSetIndices(struct FContextualAnimSceneBindings& Bindings, int32* SectionIdx, int32* AnimSetIdx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimUtilities", "BP_SceneBindings_GetSectionAndAnimSetIndices");

	Params::UContextualAnimUtilities_BP_SceneBindings_GetSectionAndAnimSetIndices_Params Parms{};

	Parms.Bindings = Bindings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SectionIdx != nullptr)
		*SectionIdx = Parms.SectionIdx;

	if (AnimSetIdx != nullptr)
		*AnimSetIdx = Parms.AnimSetIdx;

}


// Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_GetSceneAsset
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FContextualAnimSceneBindingsBindings                                                         (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class UContextualAnimSceneAsset*   ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UContextualAnimSceneAsset* UContextualAnimUtilities::BP_SceneBindings_GetSceneAsset(struct FContextualAnimSceneBindings& Bindings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimUtilities", "BP_SceneBindings_GetSceneAsset");

	Params::UContextualAnimUtilities_BP_SceneBindings_GetSceneAsset_Params Parms{};

	Parms.Bindings = Bindings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_GetBindings
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FContextualAnimSceneBindingsBindings                                                         (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// TArray<struct FContextualAnimSceneBinding>ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

TArray<struct FContextualAnimSceneBinding> UContextualAnimUtilities::BP_SceneBindings_GetBindings(struct FContextualAnimSceneBindings& Bindings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimUtilities", "BP_SceneBindings_GetBindings");

	Params::UContextualAnimUtilities_BP_SceneBindings_GetBindings_Params Parms{};

	Parms.Bindings = Bindings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_GetBindingByRole
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FContextualAnimSceneBindingsBindings                                                         (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class FName                        Role                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FContextualAnimSceneBinding ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FContextualAnimSceneBinding UContextualAnimUtilities::BP_SceneBindings_GetBindingByRole(struct FContextualAnimSceneBindings& Bindings, class FName Role)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimUtilities", "BP_SceneBindings_GetBindingByRole");

	Params::UContextualAnimUtilities_BP_SceneBindings_GetBindingByRole_Params Parms{};

	Parms.Bindings = Bindings;
	Parms.Role = Role;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_GetBindingByActor
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FContextualAnimSceneBindingsBindings                                                         (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class UActor*                      Actor                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FContextualAnimSceneBinding ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FContextualAnimSceneBinding UContextualAnimUtilities::BP_SceneBindings_GetBindingByActor(struct FContextualAnimSceneBindings& Bindings, class UActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimUtilities", "BP_SceneBindings_GetBindingByActor");

	Params::UContextualAnimUtilities_BP_SceneBindings_GetBindingByActor_Params Parms{};

	Parms.Bindings = Bindings;
	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_GetAlignmentTransformFromBinding
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FContextualAnimSceneBindingsBindings                                                         (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FContextualAnimSceneBinding Binding                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FContextualAnimWarpPoint    WarpPoint                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform UContextualAnimUtilities::BP_SceneBindings_GetAlignmentTransformFromBinding(struct FContextualAnimSceneBindings& Bindings, struct FContextualAnimSceneBinding& Binding, struct FContextualAnimWarpPoint& WarpPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimUtilities", "BP_SceneBindings_GetAlignmentTransformFromBinding");

	Params::UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformFromBinding_Params Parms{};

	Parms.Bindings = Bindings;
	Parms.Binding = Binding;
	Parms.WarpPoint = WarpPoint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_GetAlignmentTransformForRoleRelativeToWarpPoint
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FContextualAnimSceneBindingsBindings                                                         (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class FName                        Role                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FContextualAnimWarpPoint    WarpPoint                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform UContextualAnimUtilities::BP_SceneBindings_GetAlignmentTransformForRoleRelativeToWarpPoint(struct FContextualAnimSceneBindings& Bindings, class FName Role, struct FContextualAnimWarpPoint& WarpPoint, float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimUtilities", "BP_SceneBindings_GetAlignmentTransformForRoleRelativeToWarpPoint");

	Params::UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToWarpPoint_Params Parms{};

	Parms.Bindings = Bindings;
	Parms.Role = Role;
	Parms.WarpPoint = WarpPoint;
	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FContextualAnimSceneBindingsBindings                                                         (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class FName                        Role                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        RelativeToRole                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform UContextualAnimUtilities::BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole(struct FContextualAnimSceneBindings& Bindings, class FName Role, class FName RelativeToRole, float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimUtilities", "BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole");

	Params::UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole_Params Parms{};

	Parms.Bindings = Bindings;
	Parms.Role = Role;
	Parms.RelativeToRole = RelativeToRole;
	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_CalculateWarpPoints
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FContextualAnimSceneBindingsBindings                                                         (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// TArray<struct FContextualAnimWarpPoint>OutWarpPoints                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UContextualAnimUtilities::BP_SceneBindings_CalculateWarpPoints(struct FContextualAnimSceneBindings& Bindings, TArray<struct FContextualAnimWarpPoint>* OutWarpPoints)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimUtilities", "BP_SceneBindings_CalculateWarpPoints");

	Params::UContextualAnimUtilities_BP_SceneBindings_CalculateWarpPoints_Params Parms{};

	Parms.Bindings = Bindings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutWarpPoints != nullptr)
		*OutWarpPoints = Parms.OutWarpPoints;

}


// Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_AddOrUpdateWarpTargetsForBindings
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FContextualAnimSceneBindingsBindings                                                         (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UContextualAnimUtilities::BP_SceneBindings_AddOrUpdateWarpTargetsForBindings(struct FContextualAnimSceneBindings& Bindings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimUtilities", "BP_SceneBindings_AddOrUpdateWarpTargetsForBindings");

	Params::UContextualAnimUtilities_BP_SceneBindings_AddOrUpdateWarpTargetsForBindings_Params Parms{};

	Parms.Bindings = Bindings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindingContext_MakeFromActorWithExternalTransform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ExternalTransform                                                (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FContextualAnimSceneBindingContextReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FContextualAnimSceneBindingContext UContextualAnimUtilities::BP_SceneBindingContext_MakeFromActorWithExternalTransform(class UActor* Actor, const struct FTransform& ExternalTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimUtilities", "BP_SceneBindingContext_MakeFromActorWithExternalTransform");

	Params::UContextualAnimUtilities_BP_SceneBindingContext_MakeFromActorWithExternalTransform_Params Parms{};

	Parms.Actor = Actor;
	Parms.ExternalTransform = ExternalTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindingContext_MakeFromActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FContextualAnimSceneBindingContextReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FContextualAnimSceneBindingContext UContextualAnimUtilities::BP_SceneBindingContext_MakeFromActor(class UActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimUtilities", "BP_SceneBindingContext_MakeFromActor");

	Params::UContextualAnimUtilities_BP_SceneBindingContext_MakeFromActor_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindingContext_HasMatchingGameplayTag
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FContextualAnimSceneBindingContextBindingContext                                                   (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FGameplayTag                TagToCheck                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UContextualAnimUtilities::BP_SceneBindingContext_HasMatchingGameplayTag(struct FContextualAnimSceneBindingContext& BindingContext, struct FGameplayTag& TagToCheck)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimUtilities", "BP_SceneBindingContext_HasMatchingGameplayTag");

	Params::UContextualAnimUtilities_BP_SceneBindingContext_HasMatchingGameplayTag_Params Parms{};

	Parms.BindingContext = BindingContext;
	Parms.TagToCheck = TagToCheck;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindingContext_HasAnyMatchingGameplayTags
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FContextualAnimSceneBindingContextBindingContext                                                   (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       TagContainer                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UContextualAnimUtilities::BP_SceneBindingContext_HasAnyMatchingGameplayTags(struct FContextualAnimSceneBindingContext& BindingContext, struct FGameplayTagContainer& TagContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimUtilities", "BP_SceneBindingContext_HasAnyMatchingGameplayTags");

	Params::UContextualAnimUtilities_BP_SceneBindingContext_HasAnyMatchingGameplayTags_Params Parms{};

	Parms.BindingContext = BindingContext;
	Parms.TagContainer = TagContainer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindingContext_HasAllMatchingGameplayTags
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FContextualAnimSceneBindingContextBindingContext                                                   (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       TagContainer                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UContextualAnimUtilities::BP_SceneBindingContext_HasAllMatchingGameplayTags(struct FContextualAnimSceneBindingContext& BindingContext, struct FGameplayTagContainer& TagContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimUtilities", "BP_SceneBindingContext_HasAllMatchingGameplayTags");

	Params::UContextualAnimUtilities_BP_SceneBindingContext_HasAllMatchingGameplayTags_Params Parms{};

	Parms.BindingContext = BindingContext;
	Parms.TagContainer = TagContainer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindingContext_GetVelocity
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FContextualAnimSceneBindingContextBindingContext                                                   (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UContextualAnimUtilities::BP_SceneBindingContext_GetVelocity(struct FContextualAnimSceneBindingContext& BindingContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimUtilities", "BP_SceneBindingContext_GetVelocity");

	Params::UContextualAnimUtilities_BP_SceneBindingContext_GetVelocity_Params Parms{};

	Parms.BindingContext = BindingContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindingContext_GetTransform
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FContextualAnimSceneBindingContextBindingContext                                                   (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform UContextualAnimUtilities::BP_SceneBindingContext_GetTransform(struct FContextualAnimSceneBindingContext& BindingContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimUtilities", "BP_SceneBindingContext_GetTransform");

	Params::UContextualAnimUtilities_BP_SceneBindingContext_GetTransform_Params Parms{};

	Parms.BindingContext = BindingContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindingContext_GetGameplayTags
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FContextualAnimSceneBindingContextBindingContext                                                   (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct FGameplayTagContainer UContextualAnimUtilities::BP_SceneBindingContext_GetGameplayTags(struct FContextualAnimSceneBindingContext& BindingContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimUtilities", "BP_SceneBindingContext_GetGameplayTags");

	Params::UContextualAnimUtilities_BP_SceneBindingContext_GetGameplayTags_Params Parms{};

	Parms.BindingContext = BindingContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindingContext_GetActor
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FContextualAnimSceneBindingContextBindingContext                                                   (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class UActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UActor* UContextualAnimUtilities::BP_SceneBindingContext_GetActor(struct FContextualAnimSceneBindingContext& BindingContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimUtilities", "BP_SceneBindingContext_GetActor");

	Params::UContextualAnimUtilities_BP_SceneBindingContext_GetActor_Params Parms{};

	Parms.BindingContext = BindingContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBinding_GetSkeletalMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FContextualAnimSceneBinding Binding                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class USkeletalMeshComponent*      ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USkeletalMeshComponent* UContextualAnimUtilities::BP_SceneBinding_GetSkeletalMesh(struct FContextualAnimSceneBinding& Binding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimUtilities", "BP_SceneBinding_GetSkeletalMesh");

	Params::UContextualAnimUtilities_BP_SceneBinding_GetSkeletalMesh_Params Parms{};

	Parms.Binding = Binding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBinding_GetRoleFromBinding
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FContextualAnimSceneBindingsBindings                                                         (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FContextualAnimSceneBinding Binding                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UContextualAnimUtilities::BP_SceneBinding_GetRoleFromBinding(struct FContextualAnimSceneBindings& Bindings, struct FContextualAnimSceneBinding& Binding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimUtilities", "BP_SceneBinding_GetRoleFromBinding");

	Params::UContextualAnimUtilities_BP_SceneBinding_GetRoleFromBinding_Params Parms{};

	Parms.Bindings = Bindings;
	Parms.Binding = Binding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBinding_GetAnimationFromBinding
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FContextualAnimSceneBindingsBindings                                                         (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FContextualAnimSceneBinding Binding                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class UAnimSequenceBase*           ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAnimSequenceBase* UContextualAnimUtilities::BP_SceneBinding_GetAnimationFromBinding(struct FContextualAnimSceneBindings& Bindings, struct FContextualAnimSceneBinding& Binding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimUtilities", "BP_SceneBinding_GetAnimationFromBinding");

	Params::UContextualAnimUtilities_BP_SceneBinding_GetAnimationFromBinding_Params Parms{};

	Parms.Bindings = Bindings;
	Parms.Binding = Binding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBinding_GetActor
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FContextualAnimSceneBinding Binding                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class UActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UActor* UContextualAnimUtilities::BP_SceneBinding_GetActor(struct FContextualAnimSceneBinding& Binding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimUtilities", "BP_SceneBinding_GetActor");

	Params::UContextualAnimUtilities_BP_SceneBinding_GetActor_Params Parms{};

	Parms.Binding = Binding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimUtilities.BP_Montage_GetSectionTimeLeftFromPos
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAnimMontage*                Montage                                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Position                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UContextualAnimUtilities::BP_Montage_GetSectionTimeLeftFromPos(class UAnimMontage* Montage, float Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimUtilities", "BP_Montage_GetSectionTimeLeftFromPos");

	Params::UContextualAnimUtilities_BP_Montage_GetSectionTimeLeftFromPos_Params Parms{};

	Parms.Montage = Montage;
	Parms.Position = Position;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimUtilities.BP_Montage_GetSectionStartAndEndTime
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UAnimMontage*                Montage                                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SectionIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutStartTime                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutEndTime                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UContextualAnimUtilities::BP_Montage_GetSectionStartAndEndTime(class UAnimMontage* Montage, int32 SectionIndex, float* OutStartTime, float* OutEndTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimUtilities", "BP_Montage_GetSectionStartAndEndTime");

	Params::UContextualAnimUtilities_BP_Montage_GetSectionStartAndEndTime_Params Parms{};

	Parms.Montage = Montage;
	Parms.SectionIndex = SectionIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutStartTime != nullptr)
		*OutStartTime = Parms.OutStartTime;

	if (OutEndTime != nullptr)
		*OutEndTime = Parms.OutEndTime;

}


// Function ContextualAnimation.ContextualAnimUtilities.BP_Montage_GetSectionLength
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAnimMontage*                Montage                                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SectionIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UContextualAnimUtilities::BP_Montage_GetSectionLength(class UAnimMontage* Montage, int32 SectionIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimUtilities", "BP_Montage_GetSectionLength");

	Params::UContextualAnimUtilities_BP_Montage_GetSectionLength_Params Parms{};

	Parms.Montage = Montage;
	Parms.SectionIndex = SectionIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimUtilities.BP_DrawDebugPose
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimSequenceBase*           Animation                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  LocalToWorldTransform                                            (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                Color                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Lifetime                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Thickness                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UContextualAnimUtilities::BP_DrawDebugPose(class UObject* WorldContextObject, class UAnimSequenceBase* Animation, float Time, const struct FTransform& LocalToWorldTransform, const struct FLinearColor& Color, float Lifetime, float Thickness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimUtilities", "BP_DrawDebugPose");

	Params::UContextualAnimUtilities_BP_DrawDebugPose_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Animation = Animation;
	Parms.Time = Time;
	Parms.LocalToWorldTransform = LocalToWorldTransform;
	Parms.Color = Color;
	Parms.Lifetime = Lifetime;
	Parms.Thickness = Thickness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ContextualAnimation.ContextualAnimUtilities.BP_CreateContextualAnimSceneBindingsForTwoActors
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UContextualAnimSceneAsset*   SceneAsset                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FContextualAnimSceneBindingContextPrimary                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FContextualAnimSceneBindingContextSecondary                                                        (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FContextualAnimSceneBindingsOutBindings                                                      (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UContextualAnimUtilities::BP_CreateContextualAnimSceneBindingsForTwoActors(class UContextualAnimSceneAsset* SceneAsset, struct FContextualAnimSceneBindingContext& Primary, struct FContextualAnimSceneBindingContext& Secondary, struct FContextualAnimSceneBindings* OutBindings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimUtilities", "BP_CreateContextualAnimSceneBindingsForTwoActors");

	Params::UContextualAnimUtilities_BP_CreateContextualAnimSceneBindingsForTwoActors_Params Parms{};

	Parms.SceneAsset = SceneAsset;
	Parms.Primary = Primary;
	Parms.Secondary = Secondary;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutBindings != nullptr)
		*OutBindings = Parms.OutBindings;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimUtilities.BP_CreateContextualAnimSceneBindings
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UContextualAnimSceneAsset*   SceneAsset                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<class FName, struct FContextualAnimSceneBindingContext>Params                                                           (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FContextualAnimSceneBindingsOutBindings                                                      (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UContextualAnimUtilities::BP_CreateContextualAnimSceneBindings(class UContextualAnimSceneAsset* SceneAsset, TMap<class FName, struct FContextualAnimSceneBindingContext>& Params, struct FContextualAnimSceneBindings* OutBindings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualAnimUtilities", "BP_CreateContextualAnimSceneBindings");

	Params::UContextualAnimUtilities_BP_CreateContextualAnimSceneBindings_Params Parms{};

	Parms.SceneAsset = SceneAsset;
	Parms.Params = Params;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutBindings != nullptr)
		*OutBindings = Parms.OutBindings;

	return Parms.ReturnValue;

}

}


