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


// Function PoseSearch.MotionMatchingAnimNodeLibrary.SetDatabaseToSearch
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMotionMatchingAnimNodeReferenceMotionMatchingNode                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class UPoseSearchDatabase*         Database                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForceInterruptIfNew                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMotionMatchingAnimNodeLibrary::SetDatabaseToSearch(struct FMotionMatchingAnimNodeReference& MotionMatchingNode, class UPoseSearchDatabase* Database, bool bForceInterruptIfNew)
{
	static auto Func = Class->GetFunction("MotionMatchingAnimNodeLibrary", "SetDatabaseToSearch");

	Params::UMotionMatchingAnimNodeLibrary_SetDatabaseToSearch_Params Parms;

	Parms.MotionMatchingNode = MotionMatchingNode;
	Parms.Database = Database;
	Parms.bForceInterruptIfNew = bForceInterruptIfNew;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PoseSearch.MotionMatchingAnimNodeLibrary.SetDatabasesToSearch
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMotionMatchingAnimNodeReferenceMotionMatchingNode                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<class UPoseSearchDatabase*> Databases                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bForceInterruptIfNew                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMotionMatchingAnimNodeLibrary::SetDatabasesToSearch(struct FMotionMatchingAnimNodeReference& MotionMatchingNode, TArray<class UPoseSearchDatabase*>& Databases, bool bForceInterruptIfNew)
{
	static auto Func = Class->GetFunction("MotionMatchingAnimNodeLibrary", "SetDatabasesToSearch");

	Params::UMotionMatchingAnimNodeLibrary_SetDatabasesToSearch_Params Parms;

	Parms.MotionMatchingNode = MotionMatchingNode;
	Parms.Databases = Databases;
	Parms.bForceInterruptIfNew = bForceInterruptIfNew;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PoseSearch.MotionMatchingAnimNodeLibrary.ResetDatabasesToSearch
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMotionMatchingAnimNodeReferenceMotionMatchingNode                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bForceInterrupt                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMotionMatchingAnimNodeLibrary::ResetDatabasesToSearch(struct FMotionMatchingAnimNodeReference& MotionMatchingNode, bool bForceInterrupt)
{
	static auto Func = Class->GetFunction("MotionMatchingAnimNodeLibrary", "ResetDatabasesToSearch");

	Params::UMotionMatchingAnimNodeLibrary_ResetDatabasesToSearch_Params Parms;

	Parms.MotionMatchingNode = MotionMatchingNode;
	Parms.bForceInterrupt = bForceInterrupt;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PoseSearch.MotionMatchingAnimNodeLibrary.ForceInterruptNextUpdate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMotionMatchingAnimNodeReferenceMotionMatchingNode                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UMotionMatchingAnimNodeLibrary::ForceInterruptNextUpdate(struct FMotionMatchingAnimNodeReference& MotionMatchingNode)
{
	static auto Func = Class->GetFunction("MotionMatchingAnimNodeLibrary", "ForceInterruptNextUpdate");

	Params::UMotionMatchingAnimNodeLibrary_ForceInterruptNextUpdate_Params Parms;

	Parms.MotionMatchingNode = MotionMatchingNode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PoseSearch.MotionMatchingAnimNodeLibrary.ConvertToMotionMatchingNodePure
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimNodeReference          Node                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FMotionMatchingAnimNodeReferenceMotionMatchingNode                                               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMotionMatchingAnimNodeLibrary::ConvertToMotionMatchingNodePure(struct FAnimNodeReference& Node, struct FMotionMatchingAnimNodeReference* MotionMatchingNode, bool* Result)
{
	static auto Func = Class->GetFunction("MotionMatchingAnimNodeLibrary", "ConvertToMotionMatchingNodePure");

	Params::UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNodePure_Params Parms;

	Parms.Node = Node;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (MotionMatchingNode != nullptr)
		*MotionMatchingNode = Parms.MotionMatchingNode;

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function PoseSearch.MotionMatchingAnimNodeLibrary.ConvertToMotionMatchingNode
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimNodeReference          Node                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EAnimNodeReferenceConversionResultResult                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMotionMatchingAnimNodeReferenceReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FMotionMatchingAnimNodeReference UMotionMatchingAnimNodeLibrary::ConvertToMotionMatchingNode(struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult* Result)
{
	static auto Func = Class->GetFunction("MotionMatchingAnimNodeLibrary", "ConvertToMotionMatchingNode");

	Params::UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNode_Params Parms;

	Parms.Node = Node;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Function PoseSearch.PoseSearchLibrary.MotionMatch
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAnimInstance*               AnimInstance                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPoseSearchDatabase*         Database                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPoseSearchQueryTrajectory  Trajectory                                                       (ConstParm, Parm, NativeAccessSpecifierPublic)
// float                              TrajectorySpeedMultiplier                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        PoseHistoryName                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimationAsset*             SelectedAnimation                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SelectedTime                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bLoop                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsMirrored                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     BlendParameters                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SearchCost                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimationAsset*             FutureAnimation                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FutureAnimationStartTime                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToFutureAnimationStart                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              DebugSessionUniqueIdentifier                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPoseSearchLibrary::MotionMatch(class UAnimInstance* AnimInstance, class UPoseSearchDatabase* Database, const struct FPoseSearchQueryTrajectory& Trajectory, float TrajectorySpeedMultiplier, class FName PoseHistoryName, class UAnimationAsset** SelectedAnimation, float* SelectedTime, bool* bLoop, bool* bIsMirrored, struct FVector* BlendParameters, float* SearchCost, class UAnimationAsset* FutureAnimation, float FutureAnimationStartTime, float TimeToFutureAnimationStart, int32 DebugSessionUniqueIdentifier)
{
	static auto Func = Class->GetFunction("PoseSearchLibrary", "MotionMatch");

	Params::UPoseSearchLibrary_MotionMatch_Params Parms;

	Parms.AnimInstance = AnimInstance;
	Parms.Database = Database;
	Parms.Trajectory = Trajectory;
	Parms.TrajectorySpeedMultiplier = TrajectorySpeedMultiplier;
	Parms.PoseHistoryName = PoseHistoryName;
	Parms.FutureAnimation = FutureAnimation;
	Parms.FutureAnimationStartTime = FutureAnimationStartTime;
	Parms.TimeToFutureAnimationStart = TimeToFutureAnimationStart;
	Parms.DebugSessionUniqueIdentifier = DebugSessionUniqueIdentifier;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (SelectedAnimation != nullptr)
		*SelectedAnimation = Parms.SelectedAnimation;

	if (SelectedTime != nullptr)
		*SelectedTime = Parms.SelectedTime;

	if (bLoop != nullptr)
		*bLoop = Parms.bLoop;

	if (bIsMirrored != nullptr)
		*bIsMirrored = Parms.bIsMirrored;

	if (BlendParameters != nullptr)
		*BlendParameters = Parms.BlendParameters;

	if (SearchCost != nullptr)
		*SearchCost = Parms.SearchCost;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
