#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function ContextualAnimation.ContextualAnimActorInterface.GetMesh
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USkeletalMeshComponent*      ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USkeletalMeshComponent* UContextualAnimActorInterface::GetMesh()
{
	static auto Func = Class->GetFunction("ContextualAnimActorInterface", "GetMesh");

	Params::UContextualAnimActorInterface_GetMesh_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimManager.TryStopSceneWithActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UContextualAnimManager::TryStopSceneWithActor(class UActor* Actor)
{
	static auto Func = Class->GetFunction("ContextualAnimManager", "TryStopSceneWithActor");

	Params::UContextualAnimManager_TryStopSceneWithActor_Params Parms;

	Parms.Actor = Actor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimManager.OnSceneInstanceEnded
// (Final, Native, Protected)
// Parameters:
// class UContextualAnimSceneInstance*SceneInstance                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UContextualAnimManager::OnSceneInstanceEnded(class UContextualAnimSceneInstance* SceneInstance)
{
	static auto Func = Class->GetFunction("ContextualAnimManager", "OnSceneInstanceEnded");

	Params::UContextualAnimManager_OnSceneInstanceEnded_Params Parms;

	Parms.SceneInstance = SceneInstance;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ContextualAnimation.ContextualAnimManager.IsActorInAnyScene
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UContextualAnimManager::IsActorInAnyScene(class UActor* Actor)
{
	static auto Func = Class->GetFunction("ContextualAnimManager", "IsActorInAnyScene");

	Params::UContextualAnimManager_IsActorInAnyScene_Params Parms;

	Parms.Actor = Actor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimManager.GetSceneWithActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UContextualAnimSceneInstance*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UContextualAnimSceneInstance* UContextualAnimManager::GetSceneWithActor(class UActor* Actor)
{
	static auto Func = Class->GetFunction("ContextualAnimManager", "GetSceneWithActor");

	Params::UContextualAnimManager_GetSceneWithActor_Params Parms;

	Parms.Actor = Actor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimManager.GetContextualAnimManager
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UContextualAnimManager*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UContextualAnimManager* UContextualAnimManager::GetContextualAnimManager(class UObject* WorldContextObject)
{
	static auto Func = Class->GetFunction("ContextualAnimManager", "GetContextualAnimManager");

	Params::UContextualAnimManager_GetContextualAnimManager_Params Parms;

	Parms.WorldContextObject = WorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("ContextualAnimManager", "BP_TryStartScene");

	Params::UContextualAnimManager_BP_TryStartScene_Params Parms;

	Parms.SceneAsset = SceneAsset;
	Parms.Params = Params;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimSceneActorComponent.TransitionSingleActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              SectionIdx                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AnimSetIdx                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UContextualAnimSceneActorComponent::TransitionSingleActor(int32 SectionIdx, int32 AnimSetIdx)
{
	static auto Func = Class->GetFunction("ContextualAnimSceneActorComponent", "TransitionSingleActor");

	Params::UContextualAnimSceneActorComponent_TransitionSingleActor_Params Parms;

	Parms.SectionIdx = SectionIdx;
	Parms.AnimSetIdx = AnimSetIdx;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimSceneActorComponent.TransitionContextualAnimScene
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        SectionName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UContextualAnimSceneActorComponent::TransitionContextualAnimScene(class FName SectionName)
{
	static auto Func = Class->GetFunction("ContextualAnimSceneActorComponent", "TransitionContextualAnimScene");

	Params::UContextualAnimSceneActorComponent_TransitionContextualAnimScene_Params Parms;

	Parms.SectionName = SectionName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimSceneActorComponent.StartContextualAnimScene
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FContextualAnimSceneBindingsInBindings                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UContextualAnimSceneActorComponent::StartContextualAnimScene(struct FContextualAnimSceneBindings& InBindings)
{
	static auto Func = Class->GetFunction("ContextualAnimSceneActorComponent", "StartContextualAnimScene");

	Params::UContextualAnimSceneActorComponent_StartContextualAnimScene_Params Parms;

	Parms.InBindings = InBindings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimSceneActorComponent.ServerStartContextualAnimScene
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FContextualAnimSceneBindingsInBindings                                                       (ConstParm, Parm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UContextualAnimSceneActorComponent::ServerStartContextualAnimScene(struct FContextualAnimSceneBindings& InBindings)
{
	static auto Func = Class->GetFunction("ContextualAnimSceneActorComponent", "ServerStartContextualAnimScene");

	Params::UContextualAnimSceneActorComponent_ServerStartContextualAnimScene_Params Parms;

	Parms.InBindings = InBindings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ContextualAnimation.ContextualAnimSceneActorComponent.ServerEarlyOutContextualAnimScene
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:

void UContextualAnimSceneActorComponent::ServerEarlyOutContextualAnimScene()
{
	static auto Func = Class->GetFunction("ContextualAnimSceneActorComponent", "ServerEarlyOutContextualAnimScene");

	Params::UContextualAnimSceneActorComponent_ServerEarlyOutContextualAnimScene_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ContextualAnimation.ContextualAnimSceneActorComponent.OnTickPose
// (Final, Native, Protected)
// Parameters:
// class USkinnedMeshComponent*       SkinnedMeshComponent                                             (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DeltaTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNeedsValidRootMotion                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UContextualAnimSceneActorComponent::OnTickPose(class USkinnedMeshComponent* SkinnedMeshComponent, float DeltaTime, bool bNeedsValidRootMotion)
{
	static auto Func = Class->GetFunction("ContextualAnimSceneActorComponent", "OnTickPose");

	Params::UContextualAnimSceneActorComponent_OnTickPose_Params Parms;

	Parms.SkinnedMeshComponent = SkinnedMeshComponent;
	Parms.DeltaTime = DeltaTime;
	Parms.bNeedsValidRootMotion = bNeedsValidRootMotion;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ContextualAnimation.ContextualAnimSceneActorComponent.OnRep_TransitionData
// (Final, Native, Protected)
// Parameters:

void UContextualAnimSceneActorComponent::OnRep_TransitionData()
{
	static auto Func = Class->GetFunction("ContextualAnimSceneActorComponent", "OnRep_TransitionData");

	Params::UContextualAnimSceneActorComponent_OnRep_TransitionData_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ContextualAnimation.ContextualAnimSceneActorComponent.OnRep_RepTransitionSingleActor
// (Final, Native, Protected)
// Parameters:

void UContextualAnimSceneActorComponent::OnRep_RepTransitionSingleActor()
{
	static auto Func = Class->GetFunction("ContextualAnimSceneActorComponent", "OnRep_RepTransitionSingleActor");

	Params::UContextualAnimSceneActorComponent_OnRep_RepTransitionSingleActor_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ContextualAnimation.ContextualAnimSceneActorComponent.OnRep_LateJoinData
// (Final, Native, Protected)
// Parameters:

void UContextualAnimSceneActorComponent::OnRep_LateJoinData()
{
	static auto Func = Class->GetFunction("ContextualAnimSceneActorComponent", "OnRep_LateJoinData");

	Params::UContextualAnimSceneActorComponent_OnRep_LateJoinData_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ContextualAnimation.ContextualAnimSceneActorComponent.OnRep_Bindings
// (Final, Native, Protected)
// Parameters:

void UContextualAnimSceneActorComponent::OnRep_Bindings()
{
	static auto Func = Class->GetFunction("ContextualAnimSceneActorComponent", "OnRep_Bindings");

	Params::UContextualAnimSceneActorComponent_OnRep_Bindings_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ContextualAnimation.ContextualAnimSceneActorComponent.OnPlayMontageNotifyBegin
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class FName                        NotifyName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBranchingPointNotifyPayloadBranchingPointNotifyPayload                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UContextualAnimSceneActorComponent::OnPlayMontageNotifyBegin(class FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
{
	static auto Func = Class->GetFunction("ContextualAnimSceneActorComponent", "OnPlayMontageNotifyBegin");

	Params::UContextualAnimSceneActorComponent_OnPlayMontageNotifyBegin_Params Parms;

	Parms.NotifyName = NotifyName;
	Parms.BranchingPointNotifyPayload = BranchingPointNotifyPayload;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ContextualAnimation.ContextualAnimSceneActorComponent.OnMontageBlendingOut
// (Final, Native, Protected)
// Parameters:
// class UAnimMontage*                Montage                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInterrupted                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UContextualAnimSceneActorComponent::OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted)
{
	static auto Func = Class->GetFunction("ContextualAnimSceneActorComponent", "OnMontageBlendingOut");

	Params::UContextualAnimSceneActorComponent_OnMontageBlendingOut_Params Parms;

	Parms.Montage = Montage;
	Parms.bInterrupted = bInterrupted;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ContextualAnimation.ContextualAnimSceneActorComponent.OnLeftScene
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UContextualAnimSceneActorComponent::OnLeftScene()
{
	static auto Func = Class->GetFunction("ContextualAnimSceneActorComponent", "OnLeftScene");

	Params::UContextualAnimSceneActorComponent_OnLeftScene_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ContextualAnimation.ContextualAnimSceneActorComponent.OnJoinedScene
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FContextualAnimSceneBindingsInBindings                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UContextualAnimSceneActorComponent::OnJoinedScene(struct FContextualAnimSceneBindings& InBindings)
{
	static auto Func = Class->GetFunction("ContextualAnimSceneActorComponent", "OnJoinedScene");

	Params::UContextualAnimSceneActorComponent_OnJoinedScene_Params Parms;

	Parms.InBindings = InBindings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ContextualAnimation.ContextualAnimSceneActorComponent.LateJoinContextualAnimScene
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Role                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UContextualAnimSceneActorComponent::LateJoinContextualAnimScene(class UActor* Actor, class FName Role)
{
	static auto Func = Class->GetFunction("ContextualAnimSceneActorComponent", "LateJoinContextualAnimScene");

	Params::UContextualAnimSceneActorComponent_LateJoinContextualAnimScene_Params Parms;

	Parms.Actor = Actor;
	Parms.Role = Role;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimSceneActorComponent.GetIKTargets
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FContextualAnimIKTarget>ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<struct FContextualAnimIKTarget> UContextualAnimSceneActorComponent::GetIKTargets()
{
	static auto Func = Class->GetFunction("ContextualAnimSceneActorComponent", "GetIKTargets");

	Params::UContextualAnimSceneActorComponent_GetIKTargets_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimSceneActorComponent.GetIKTargetByGoalName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        GoalName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FContextualAnimIKTarget     ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

struct FContextualAnimIKTarget UContextualAnimSceneActorComponent::GetIKTargetByGoalName(class FName GoalName)
{
	static auto Func = Class->GetFunction("ContextualAnimSceneActorComponent", "GetIKTargetByGoalName");

	Params::UContextualAnimSceneActorComponent_GetIKTargetByGoalName_Params Parms;

	Parms.GoalName = GoalName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

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
	static auto Func = Class->GetFunction("ContextualAnimSceneAsset", "Query");

	Params::UContextualAnimSceneAsset_Query_Params Parms;

	Parms.Role = Role;
	Parms.QueryParams = QueryParams;
	Parms.ToWorldTransform = ToWorldTransform;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("ContextualAnimSceneAsset", "GetRoles");

	Params::UContextualAnimSceneAsset_GetRoles_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("ContextualAnimSceneAsset", "GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria");

	Params::UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria_Params Parms;

	Parms.Type = Type;
	Parms.SectionIdx = SectionIdx;
	Parms.Primary = Primary;
	Parms.Querier = Querier;
	Parms.CriterionToConsider = CriterionToConsider;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("ContextualAnimSceneAsset", "GetAlignmentPointsForSecondaryRole");

	Params::UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRole_Params Parms;

	Parms.Type = Type;
	Parms.SectionIdx = SectionIdx;
	Parms.Primary = Primary;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("ContextualAnimSceneAsset", "BP_GetStartAndEndTimeForWarpSection");

	Params::UContextualAnimSceneAsset_BP_GetStartAndEndTimeForWarpSection_Params Parms;

	Parms.SectionIdx = SectionIdx;
	Parms.AnimSetIdx = AnimSetIdx;
	Parms.Role = Role;
	Parms.WarpSectionName = WarpSectionName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("ContextualAnimSceneAsset", "BP_GetIKTargetTransformForRoleAtTime");

	Params::UContextualAnimSceneAsset_BP_GetIKTargetTransformForRoleAtTime_Params Parms;

	Parms.SectionIdx = SectionIdx;
	Parms.AnimSetIdx = AnimSetIdx;
	Parms.Role = Role;
	Parms.TrackName = TrackName;
	Parms.Time = Time;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("ContextualAnimSceneAsset", "BP_GetAlignmentTransformForRoleRelativeToWarpPoint");

	Params::UContextualAnimSceneAsset_BP_GetAlignmentTransformForRoleRelativeToWarpPoint_Params Parms;

	Parms.SectionIdx = SectionIdx;
	Parms.AnimSetIdx = AnimSetIdx;
	Parms.Role = Role;
	Parms.Time = Time;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("ContextualAnimSceneAsset", "BP_FindAnimSetIndexByAnimation");

	Params::UContextualAnimSceneAsset_BP_FindAnimSetIndexByAnimation_Params Parms;

	Parms.SectionIdx = SectionIdx;
	Parms.Animation = Animation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("ContextualAnimSceneAsset", "BP_FindAnimationForRole");

	Params::UContextualAnimSceneAsset_BP_FindAnimationForRole_Params Parms;

	Parms.SectionIdx = SectionIdx;
	Parms.AnimSetIdx = AnimSetIdx;
	Parms.Role = Role;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimSceneInstance.OnNotifyEndReceived
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class FName                        NotifyName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBranchingPointNotifyPayloadBranchingPointNotifyPayload                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UContextualAnimSceneInstance::OnNotifyEndReceived(class FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
{
	static auto Func = Class->GetFunction("ContextualAnimSceneInstance", "OnNotifyEndReceived");

	Params::UContextualAnimSceneInstance_OnNotifyEndReceived_Params Parms;

	Parms.NotifyName = NotifyName;
	Parms.BranchingPointNotifyPayload = BranchingPointNotifyPayload;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ContextualAnimation.ContextualAnimSceneInstance.OnNotifyBeginReceived
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class FName                        NotifyName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBranchingPointNotifyPayloadBranchingPointNotifyPayload                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UContextualAnimSceneInstance::OnNotifyBeginReceived(class FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
{
	static auto Func = Class->GetFunction("ContextualAnimSceneInstance", "OnNotifyBeginReceived");

	Params::UContextualAnimSceneInstance_OnNotifyBeginReceived_Params Parms;

	Parms.NotifyName = NotifyName;
	Parms.BranchingPointNotifyPayload = BranchingPointNotifyPayload;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ContextualAnimation.ContextualAnimSceneInstance.OnMontageBlendingOut
// (Final, Native, Protected)
// Parameters:
// class UAnimMontage*                Montage                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInterrupted                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UContextualAnimSceneInstance::OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted)
{
	static auto Func = Class->GetFunction("ContextualAnimSceneInstance", "OnMontageBlendingOut");

	Params::UContextualAnimSceneInstance_OnMontageBlendingOut_Params Parms;

	Parms.Montage = Montage;
	Parms.bInterrupted = bInterrupted;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ContextualAnimation.ContextualAnimSceneInstance.GetActorByRole
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        Role                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UActor* UContextualAnimSceneInstance::GetActorByRole(class FName Role)
{
	static auto Func = Class->GetFunction("ContextualAnimSceneInstance", "GetActorByRole");

	Params::UContextualAnimSceneInstance_GetActorByRole_Params Parms;

	Parms.Role = Role;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimSelectionCriterion_Blueprint.GetSceneAsset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UContextualAnimSceneAsset*   ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UContextualAnimSceneAsset* UContextualAnimSelectionCriterion_Blueprint::GetSceneAsset()
{
	static auto Func = Class->GetFunction("ContextualAnimSelectionCriterion_Blueprint", "GetSceneAsset");

	Params::UContextualAnimSelectionCriterion_Blueprint_GetSceneAsset_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("ContextualAnimSelectionCriterion_Blueprint", "BP_DoesQuerierPassCondition");

	Params::UContextualAnimSelectionCriterion_Blueprint_BP_DoesQuerierPassCondition_Params Parms;

	Parms.Primary = Primary;
	Parms.Querier = Querier;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

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
	static auto Func = Class->GetFunction("ContextualAnimTransition", "CanEnterTransition");

	Params::UContextualAnimTransition_CanEnterTransition_Params Parms;

	Parms.SceneInstance = SceneInstance;
	Parms.FromSection = FromSection;
	Parms.ToSection = ToSection;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_GetSectionAndAnimSetIndices
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FContextualAnimSceneBindingsBindings                                                         (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// int32                              SectionIdx                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AnimSetIdx                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UContextualAnimUtilities::BP_SceneBindings_GetSectionAndAnimSetIndices(struct FContextualAnimSceneBindings& Bindings, int32* SectionIdx, int32* AnimSetIdx)
{
	static auto Func = Class->GetFunction("ContextualAnimUtilities", "BP_SceneBindings_GetSectionAndAnimSetIndices");

	Params::UContextualAnimUtilities_BP_SceneBindings_GetSectionAndAnimSetIndices_Params Parms;

	Parms.Bindings = Bindings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("ContextualAnimUtilities", "BP_SceneBindings_GetSceneAsset");

	Params::UContextualAnimUtilities_BP_SceneBindings_GetSceneAsset_Params Parms;

	Parms.Bindings = Bindings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_GetBindings
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FContextualAnimSceneBindingsBindings                                                         (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// TArray<struct FContextualAnimSceneBinding>ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

TArray<struct FContextualAnimSceneBinding> UContextualAnimUtilities::BP_SceneBindings_GetBindings(struct FContextualAnimSceneBindings& Bindings)
{
	static auto Func = Class->GetFunction("ContextualAnimUtilities", "BP_SceneBindings_GetBindings");

	Params::UContextualAnimUtilities_BP_SceneBindings_GetBindings_Params Parms;

	Parms.Bindings = Bindings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("ContextualAnimUtilities", "BP_SceneBindings_GetBindingByRole");

	Params::UContextualAnimUtilities_BP_SceneBindings_GetBindingByRole_Params Parms;

	Parms.Bindings = Bindings;
	Parms.Role = Role;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("ContextualAnimUtilities", "BP_SceneBindings_GetBindingByActor");

	Params::UContextualAnimUtilities_BP_SceneBindings_GetBindingByActor_Params Parms;

	Parms.Bindings = Bindings;
	Parms.Actor = Actor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("ContextualAnimUtilities", "BP_SceneBindings_GetAlignmentTransformFromBinding");

	Params::UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformFromBinding_Params Parms;

	Parms.Bindings = Bindings;
	Parms.Binding = Binding;
	Parms.WarpPoint = WarpPoint;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("ContextualAnimUtilities", "BP_SceneBindings_GetAlignmentTransformForRoleRelativeToWarpPoint");

	Params::UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToWarpPoint_Params Parms;

	Parms.Bindings = Bindings;
	Parms.Role = Role;
	Parms.WarpPoint = WarpPoint;
	Parms.Time = Time;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("ContextualAnimUtilities", "BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole");

	Params::UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole_Params Parms;

	Parms.Bindings = Bindings;
	Parms.Role = Role;
	Parms.RelativeToRole = RelativeToRole;
	Parms.Time = Time;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_CalculateWarpPoints
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FContextualAnimSceneBindingsBindings                                                         (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// TArray<struct FContextualAnimWarpPoint>OutWarpPoints                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UContextualAnimUtilities::BP_SceneBindings_CalculateWarpPoints(struct FContextualAnimSceneBindings& Bindings, TArray<struct FContextualAnimWarpPoint>* OutWarpPoints)
{
	static auto Func = Class->GetFunction("ContextualAnimUtilities", "BP_SceneBindings_CalculateWarpPoints");

	Params::UContextualAnimUtilities_BP_SceneBindings_CalculateWarpPoints_Params Parms;

	Parms.Bindings = Bindings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutWarpPoints != nullptr)
		*OutWarpPoints = Parms.OutWarpPoints;

}


// Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_AddOrUpdateWarpTargetsForBindings
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FContextualAnimSceneBindingsBindings                                                         (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UContextualAnimUtilities::BP_SceneBindings_AddOrUpdateWarpTargetsForBindings(struct FContextualAnimSceneBindings& Bindings)
{
	static auto Func = Class->GetFunction("ContextualAnimUtilities", "BP_SceneBindings_AddOrUpdateWarpTargetsForBindings");

	Params::UContextualAnimUtilities_BP_SceneBindings_AddOrUpdateWarpTargetsForBindings_Params Parms;

	Parms.Bindings = Bindings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindingContext_MakeFromActorWithExternalTransform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ExternalTransform                                                (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FContextualAnimSceneBindingContextReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FContextualAnimSceneBindingContext UContextualAnimUtilities::BP_SceneBindingContext_MakeFromActorWithExternalTransform(class UActor* Actor, const struct FTransform& ExternalTransform)
{
	static auto Func = Class->GetFunction("ContextualAnimUtilities", "BP_SceneBindingContext_MakeFromActorWithExternalTransform");

	Params::UContextualAnimUtilities_BP_SceneBindingContext_MakeFromActorWithExternalTransform_Params Parms;

	Parms.Actor = Actor;
	Parms.ExternalTransform = ExternalTransform;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindingContext_MakeFromActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FContextualAnimSceneBindingContextReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FContextualAnimSceneBindingContext UContextualAnimUtilities::BP_SceneBindingContext_MakeFromActor(class UActor* Actor)
{
	static auto Func = Class->GetFunction("ContextualAnimUtilities", "BP_SceneBindingContext_MakeFromActor");

	Params::UContextualAnimUtilities_BP_SceneBindingContext_MakeFromActor_Params Parms;

	Parms.Actor = Actor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindingContext_GetVelocity
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FContextualAnimSceneBindingContextBindingContext                                                   (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UContextualAnimUtilities::BP_SceneBindingContext_GetVelocity(struct FContextualAnimSceneBindingContext& BindingContext)
{
	static auto Func = Class->GetFunction("ContextualAnimUtilities", "BP_SceneBindingContext_GetVelocity");

	Params::UContextualAnimUtilities_BP_SceneBindingContext_GetVelocity_Params Parms;

	Parms.BindingContext = BindingContext;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindingContext_GetTransform
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FContextualAnimSceneBindingContextBindingContext                                                   (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform UContextualAnimUtilities::BP_SceneBindingContext_GetTransform(struct FContextualAnimSceneBindingContext& BindingContext)
{
	static auto Func = Class->GetFunction("ContextualAnimUtilities", "BP_SceneBindingContext_GetTransform");

	Params::UContextualAnimUtilities_BP_SceneBindingContext_GetTransform_Params Parms;

	Parms.BindingContext = BindingContext;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindingContext_GetActor
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FContextualAnimSceneBindingContextBindingContext                                                   (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class UActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UActor* UContextualAnimUtilities::BP_SceneBindingContext_GetActor(struct FContextualAnimSceneBindingContext& BindingContext)
{
	static auto Func = Class->GetFunction("ContextualAnimUtilities", "BP_SceneBindingContext_GetActor");

	Params::UContextualAnimUtilities_BP_SceneBindingContext_GetActor_Params Parms;

	Parms.BindingContext = BindingContext;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBinding_GetSkeletalMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FContextualAnimSceneBinding Binding                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class USkeletalMeshComponent*      ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USkeletalMeshComponent* UContextualAnimUtilities::BP_SceneBinding_GetSkeletalMesh(struct FContextualAnimSceneBinding& Binding)
{
	static auto Func = Class->GetFunction("ContextualAnimUtilities", "BP_SceneBinding_GetSkeletalMesh");

	Params::UContextualAnimUtilities_BP_SceneBinding_GetSkeletalMesh_Params Parms;

	Parms.Binding = Binding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("ContextualAnimUtilities", "BP_SceneBinding_GetRoleFromBinding");

	Params::UContextualAnimUtilities_BP_SceneBinding_GetRoleFromBinding_Params Parms;

	Parms.Bindings = Bindings;
	Parms.Binding = Binding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("ContextualAnimUtilities", "BP_SceneBinding_GetAnimationFromBinding");

	Params::UContextualAnimUtilities_BP_SceneBinding_GetAnimationFromBinding_Params Parms;

	Parms.Bindings = Bindings;
	Parms.Binding = Binding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBinding_GetActor
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FContextualAnimSceneBinding Binding                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class UActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UActor* UContextualAnimUtilities::BP_SceneBinding_GetActor(struct FContextualAnimSceneBinding& Binding)
{
	static auto Func = Class->GetFunction("ContextualAnimUtilities", "BP_SceneBinding_GetActor");

	Params::UContextualAnimUtilities_BP_SceneBinding_GetActor_Params Parms;

	Parms.Binding = Binding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("ContextualAnimUtilities", "BP_Montage_GetSectionTimeLeftFromPos");

	Params::UContextualAnimUtilities_BP_Montage_GetSectionTimeLeftFromPos_Params Parms;

	Parms.Montage = Montage;
	Parms.Position = Position;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("ContextualAnimUtilities", "BP_Montage_GetSectionStartAndEndTime");

	Params::UContextualAnimUtilities_BP_Montage_GetSectionStartAndEndTime_Params Parms;

	Parms.Montage = Montage;
	Parms.SectionIndex = SectionIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("ContextualAnimUtilities", "BP_Montage_GetSectionLength");

	Params::UContextualAnimUtilities_BP_Montage_GetSectionLength_Params Parms;

	Parms.Montage = Montage;
	Parms.SectionIndex = SectionIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
// float                              LifeTime                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Thickness                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UContextualAnimUtilities::BP_DrawDebugPose(class UObject* WorldContextObject, class UAnimSequenceBase* Animation, float Time, const struct FTransform& LocalToWorldTransform, const struct FLinearColor& Color, float LifeTime, float Thickness)
{
	static auto Func = Class->GetFunction("ContextualAnimUtilities", "BP_DrawDebugPose");

	Params::UContextualAnimUtilities_BP_DrawDebugPose_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Animation = Animation;
	Parms.Time = Time;
	Parms.LocalToWorldTransform = LocalToWorldTransform;
	Parms.Color = Color;
	Parms.LifeTime = LifeTime;
	Parms.Thickness = Thickness;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("ContextualAnimUtilities", "BP_CreateContextualAnimSceneBindingsForTwoActors");

	Params::UContextualAnimUtilities_BP_CreateContextualAnimSceneBindingsForTwoActors_Params Parms;

	Parms.SceneAsset = SceneAsset;
	Parms.Primary = Primary;
	Parms.Secondary = Secondary;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("ContextualAnimUtilities", "BP_CreateContextualAnimSceneBindings");

	Params::UContextualAnimUtilities_BP_CreateContextualAnimSceneBindings_Params Parms;

	Parms.SceneAsset = SceneAsset;
	Parms.Params = Params;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutBindings != nullptr)
		*OutBindings = Parms.OutBindings;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
