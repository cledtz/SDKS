#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class PoseSearch.MotionMatchingAnimNodeLibrary
// (None)

class UClass* UMotionMatchingAnimNodeLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MotionMatchingAnimNodeLibrary");

	return Clss;
}


// MotionMatchingAnimNodeLibrary PoseSearch.Default__MotionMatchingAnimNodeLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UMotionMatchingAnimNodeLibrary* UMotionMatchingAnimNodeLibrary::GetDefaultObj()
{
	static class UMotionMatchingAnimNodeLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UMotionMatchingAnimNodeLibrary*>(UMotionMatchingAnimNodeLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function PoseSearch.MotionMatchingAnimNodeLibrary.SetDatabaseToSearch
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMotionMatchingAnimNodeReferenceMotionMatchingNode                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class UPoseSearchDatabase*         Database                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForceInterruptIfNew                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMotionMatchingAnimNodeLibrary::SetDatabaseToSearch(struct FMotionMatchingAnimNodeReference& MotionMatchingNode, class UPoseSearchDatabase* Database, bool bForceInterruptIfNew)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionMatchingAnimNodeLibrary", "SetDatabaseToSearch");

	Params::UMotionMatchingAnimNodeLibrary_SetDatabaseToSearch_Params Parms{};

	Parms.MotionMatchingNode = MotionMatchingNode;
	Parms.Database = Database;
	Parms.bForceInterruptIfNew = bForceInterruptIfNew;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PoseSearch.MotionMatchingAnimNodeLibrary.SetDatabasesToSearch
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMotionMatchingAnimNodeReferenceMotionMatchingNode                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<class UPoseSearchDatabase*> Databases                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bForceInterruptIfNew                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMotionMatchingAnimNodeLibrary::SetDatabasesToSearch(struct FMotionMatchingAnimNodeReference& MotionMatchingNode, TArray<class UPoseSearchDatabase*>& Databases, bool bForceInterruptIfNew)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionMatchingAnimNodeLibrary", "SetDatabasesToSearch");

	Params::UMotionMatchingAnimNodeLibrary_SetDatabasesToSearch_Params Parms{};

	Parms.MotionMatchingNode = MotionMatchingNode;
	Parms.Databases = Databases;
	Parms.bForceInterruptIfNew = bForceInterruptIfNew;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PoseSearch.MotionMatchingAnimNodeLibrary.ResetDatabasesToSearch
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMotionMatchingAnimNodeReferenceMotionMatchingNode                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bForceInterrupt                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMotionMatchingAnimNodeLibrary::ResetDatabasesToSearch(struct FMotionMatchingAnimNodeReference& MotionMatchingNode, bool bForceInterrupt)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionMatchingAnimNodeLibrary", "ResetDatabasesToSearch");

	Params::UMotionMatchingAnimNodeLibrary_ResetDatabasesToSearch_Params Parms{};

	Parms.MotionMatchingNode = MotionMatchingNode;
	Parms.bForceInterrupt = bForceInterrupt;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PoseSearch.MotionMatchingAnimNodeLibrary.ForceInterruptNextUpdate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMotionMatchingAnimNodeReferenceMotionMatchingNode                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UMotionMatchingAnimNodeLibrary::ForceInterruptNextUpdate(struct FMotionMatchingAnimNodeReference& MotionMatchingNode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionMatchingAnimNodeLibrary", "ForceInterruptNextUpdate");

	Params::UMotionMatchingAnimNodeLibrary_ForceInterruptNextUpdate_Params Parms{};

	Parms.MotionMatchingNode = MotionMatchingNode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PoseSearch.MotionMatchingAnimNodeLibrary.ConvertToMotionMatchingNodePure
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimNodeReference          Node                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FMotionMatchingAnimNodeReferenceMotionMatchingNode                                               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMotionMatchingAnimNodeLibrary::ConvertToMotionMatchingNodePure(struct FAnimNodeReference& Node, struct FMotionMatchingAnimNodeReference* MotionMatchingNode, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionMatchingAnimNodeLibrary", "ConvertToMotionMatchingNodePure");

	Params::UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNodePure_Params Parms{};

	Parms.Node = Node;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionMatchingAnimNodeLibrary", "ConvertToMotionMatchingNode");

	Params::UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNode_Params Parms{};

	Parms.Node = Node;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Class PoseSearch.PoseSearchDatabase
// (None)

class UClass* UPoseSearchDatabase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PoseSearchDatabase");

	return Clss;
}


// PoseSearchDatabase PoseSearch.Default__PoseSearchDatabase
// (Public, ClassDefaultObject, ArchetypeObject)

class UPoseSearchDatabase* UPoseSearchDatabase::GetDefaultObj()
{
	static class UPoseSearchDatabase* Default = nullptr;

	if (!Default)
		Default = static_cast<UPoseSearchDatabase*>(UPoseSearchDatabase::StaticClass()->DefaultObject);

	return Default;
}


// Class PoseSearch.PoseSearchFeatureChannel
// (None)

class UClass* UPoseSearchFeatureChannel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PoseSearchFeatureChannel");

	return Clss;
}


// PoseSearchFeatureChannel PoseSearch.Default__PoseSearchFeatureChannel
// (Public, ClassDefaultObject, ArchetypeObject)

class UPoseSearchFeatureChannel* UPoseSearchFeatureChannel::GetDefaultObj()
{
	static class UPoseSearchFeatureChannel* Default = nullptr;

	if (!Default)
		Default = static_cast<UPoseSearchFeatureChannel*>(UPoseSearchFeatureChannel::StaticClass()->DefaultObject);

	return Default;
}


// Class PoseSearch.PoseSearchFeatureChannel_FilterCrashingLegs
// (None)

class UClass* UPoseSearchFeatureChannel_FilterCrashingLegs::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PoseSearchFeatureChannel_FilterCrashingLegs");

	return Clss;
}


// PoseSearchFeatureChannel_FilterCrashingLegs PoseSearch.Default__PoseSearchFeatureChannel_FilterCrashingLegs
// (Public, ClassDefaultObject, ArchetypeObject)

class UPoseSearchFeatureChannel_FilterCrashingLegs* UPoseSearchFeatureChannel_FilterCrashingLegs::GetDefaultObj()
{
	static class UPoseSearchFeatureChannel_FilterCrashingLegs* Default = nullptr;

	if (!Default)
		Default = static_cast<UPoseSearchFeatureChannel_FilterCrashingLegs*>(UPoseSearchFeatureChannel_FilterCrashingLegs::StaticClass()->DefaultObject);

	return Default;
}


// Class PoseSearch.PoseSearchFeatureChannel_GroupBase
// (None)

class UClass* UPoseSearchFeatureChannel_GroupBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PoseSearchFeatureChannel_GroupBase");

	return Clss;
}


// PoseSearchFeatureChannel_GroupBase PoseSearch.Default__PoseSearchFeatureChannel_GroupBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UPoseSearchFeatureChannel_GroupBase* UPoseSearchFeatureChannel_GroupBase::GetDefaultObj()
{
	static class UPoseSearchFeatureChannel_GroupBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UPoseSearchFeatureChannel_GroupBase*>(UPoseSearchFeatureChannel_GroupBase::StaticClass()->DefaultObject);

	return Default;
}


// Class PoseSearch.PoseSearchFeatureChannel_Group
// (None)

class UClass* UPoseSearchFeatureChannel_Group::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PoseSearchFeatureChannel_Group");

	return Clss;
}


// PoseSearchFeatureChannel_Group PoseSearch.Default__PoseSearchFeatureChannel_Group
// (Public, ClassDefaultObject, ArchetypeObject)

class UPoseSearchFeatureChannel_Group* UPoseSearchFeatureChannel_Group::GetDefaultObj()
{
	static class UPoseSearchFeatureChannel_Group* Default = nullptr;

	if (!Default)
		Default = static_cast<UPoseSearchFeatureChannel_Group*>(UPoseSearchFeatureChannel_Group::StaticClass()->DefaultObject);

	return Default;
}


// Class PoseSearch.PoseSearchFeatureChannel_Heading
// (None)

class UClass* UPoseSearchFeatureChannel_Heading::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PoseSearchFeatureChannel_Heading");

	return Clss;
}


// PoseSearchFeatureChannel_Heading PoseSearch.Default__PoseSearchFeatureChannel_Heading
// (Public, ClassDefaultObject, ArchetypeObject)

class UPoseSearchFeatureChannel_Heading* UPoseSearchFeatureChannel_Heading::GetDefaultObj()
{
	static class UPoseSearchFeatureChannel_Heading* Default = nullptr;

	if (!Default)
		Default = static_cast<UPoseSearchFeatureChannel_Heading*>(UPoseSearchFeatureChannel_Heading::StaticClass()->DefaultObject);

	return Default;
}


// Class PoseSearch.PoseSearchFeatureChannel_Padding
// (None)

class UClass* UPoseSearchFeatureChannel_Padding::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PoseSearchFeatureChannel_Padding");

	return Clss;
}


// PoseSearchFeatureChannel_Padding PoseSearch.Default__PoseSearchFeatureChannel_Padding
// (Public, ClassDefaultObject, ArchetypeObject)

class UPoseSearchFeatureChannel_Padding* UPoseSearchFeatureChannel_Padding::GetDefaultObj()
{
	static class UPoseSearchFeatureChannel_Padding* Default = nullptr;

	if (!Default)
		Default = static_cast<UPoseSearchFeatureChannel_Padding*>(UPoseSearchFeatureChannel_Padding::StaticClass()->DefaultObject);

	return Default;
}


// Class PoseSearch.PoseSearchFeatureChannel_PermutationTime
// (None)

class UClass* UPoseSearchFeatureChannel_PermutationTime::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PoseSearchFeatureChannel_PermutationTime");

	return Clss;
}


// PoseSearchFeatureChannel_PermutationTime PoseSearch.Default__PoseSearchFeatureChannel_PermutationTime
// (Public, ClassDefaultObject, ArchetypeObject)

class UPoseSearchFeatureChannel_PermutationTime* UPoseSearchFeatureChannel_PermutationTime::GetDefaultObj()
{
	static class UPoseSearchFeatureChannel_PermutationTime* Default = nullptr;

	if (!Default)
		Default = static_cast<UPoseSearchFeatureChannel_PermutationTime*>(UPoseSearchFeatureChannel_PermutationTime::StaticClass()->DefaultObject);

	return Default;
}


// Class PoseSearch.PoseSearchFeatureChannel_Phase
// (None)

class UClass* UPoseSearchFeatureChannel_Phase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PoseSearchFeatureChannel_Phase");

	return Clss;
}


// PoseSearchFeatureChannel_Phase PoseSearch.Default__PoseSearchFeatureChannel_Phase
// (Public, ClassDefaultObject, ArchetypeObject)

class UPoseSearchFeatureChannel_Phase* UPoseSearchFeatureChannel_Phase::GetDefaultObj()
{
	static class UPoseSearchFeatureChannel_Phase* Default = nullptr;

	if (!Default)
		Default = static_cast<UPoseSearchFeatureChannel_Phase*>(UPoseSearchFeatureChannel_Phase::StaticClass()->DefaultObject);

	return Default;
}


// Class PoseSearch.PoseSearchFeatureChannel_Pose
// (None)

class UClass* UPoseSearchFeatureChannel_Pose::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PoseSearchFeatureChannel_Pose");

	return Clss;
}


// PoseSearchFeatureChannel_Pose PoseSearch.Default__PoseSearchFeatureChannel_Pose
// (Public, ClassDefaultObject, ArchetypeObject)

class UPoseSearchFeatureChannel_Pose* UPoseSearchFeatureChannel_Pose::GetDefaultObj()
{
	static class UPoseSearchFeatureChannel_Pose* Default = nullptr;

	if (!Default)
		Default = static_cast<UPoseSearchFeatureChannel_Pose*>(UPoseSearchFeatureChannel_Pose::StaticClass()->DefaultObject);

	return Default;
}


// Class PoseSearch.PoseSearchFeatureChannel_Position
// (None)

class UClass* UPoseSearchFeatureChannel_Position::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PoseSearchFeatureChannel_Position");

	return Clss;
}


// PoseSearchFeatureChannel_Position PoseSearch.Default__PoseSearchFeatureChannel_Position
// (Public, ClassDefaultObject, ArchetypeObject)

class UPoseSearchFeatureChannel_Position* UPoseSearchFeatureChannel_Position::GetDefaultObj()
{
	static class UPoseSearchFeatureChannel_Position* Default = nullptr;

	if (!Default)
		Default = static_cast<UPoseSearchFeatureChannel_Position*>(UPoseSearchFeatureChannel_Position::StaticClass()->DefaultObject);

	return Default;
}


// Class PoseSearch.PoseSearchFeatureChannel_SamplingTime
// (None)

class UClass* UPoseSearchFeatureChannel_SamplingTime::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PoseSearchFeatureChannel_SamplingTime");

	return Clss;
}


// PoseSearchFeatureChannel_SamplingTime PoseSearch.Default__PoseSearchFeatureChannel_SamplingTime
// (Public, ClassDefaultObject, ArchetypeObject)

class UPoseSearchFeatureChannel_SamplingTime* UPoseSearchFeatureChannel_SamplingTime::GetDefaultObj()
{
	static class UPoseSearchFeatureChannel_SamplingTime* Default = nullptr;

	if (!Default)
		Default = static_cast<UPoseSearchFeatureChannel_SamplingTime*>(UPoseSearchFeatureChannel_SamplingTime::StaticClass()->DefaultObject);

	return Default;
}


// Class PoseSearch.PoseSearchFeatureChannel_Trajectory
// (None)

class UClass* UPoseSearchFeatureChannel_Trajectory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PoseSearchFeatureChannel_Trajectory");

	return Clss;
}


// PoseSearchFeatureChannel_Trajectory PoseSearch.Default__PoseSearchFeatureChannel_Trajectory
// (Public, ClassDefaultObject, ArchetypeObject)

class UPoseSearchFeatureChannel_Trajectory* UPoseSearchFeatureChannel_Trajectory::GetDefaultObj()
{
	static class UPoseSearchFeatureChannel_Trajectory* Default = nullptr;

	if (!Default)
		Default = static_cast<UPoseSearchFeatureChannel_Trajectory*>(UPoseSearchFeatureChannel_Trajectory::StaticClass()->DefaultObject);

	return Default;
}


// Class PoseSearch.PoseSearchFeatureChannel_Velocity
// (None)

class UClass* UPoseSearchFeatureChannel_Velocity::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PoseSearchFeatureChannel_Velocity");

	return Clss;
}


// PoseSearchFeatureChannel_Velocity PoseSearch.Default__PoseSearchFeatureChannel_Velocity
// (Public, ClassDefaultObject, ArchetypeObject)

class UPoseSearchFeatureChannel_Velocity* UPoseSearchFeatureChannel_Velocity::GetDefaultObj()
{
	static class UPoseSearchFeatureChannel_Velocity* Default = nullptr;

	if (!Default)
		Default = static_cast<UPoseSearchFeatureChannel_Velocity*>(UPoseSearchFeatureChannel_Velocity::StaticClass()->DefaultObject);

	return Default;
}


// Class PoseSearch.PoseSearchNormalizationSet
// (None)

class UClass* UPoseSearchNormalizationSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PoseSearchNormalizationSet");

	return Clss;
}


// PoseSearchNormalizationSet PoseSearch.Default__PoseSearchNormalizationSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UPoseSearchNormalizationSet* UPoseSearchNormalizationSet::GetDefaultObj()
{
	static class UPoseSearchNormalizationSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UPoseSearchNormalizationSet*>(UPoseSearchNormalizationSet::StaticClass()->DefaultObject);

	return Default;
}


// Class PoseSearch.PoseSearchSchema
// (None)

class UClass* UPoseSearchSchema::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PoseSearchSchema");

	return Clss;
}


// PoseSearchSchema PoseSearch.Default__PoseSearchSchema
// (Public, ClassDefaultObject, ArchetypeObject)

class UPoseSearchSchema* UPoseSearchSchema::GetDefaultObj()
{
	static class UPoseSearchSchema* Default = nullptr;

	if (!Default)
		Default = static_cast<UPoseSearchSchema*>(UPoseSearchSchema::StaticClass()->DefaultObject);

	return Default;
}


// Class PoseSearch.AnimNotifyState_PoseSearchBase
// (None)

class UClass* UAnimNotifyState_PoseSearchBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotifyState_PoseSearchBase");

	return Clss;
}


// AnimNotifyState_PoseSearchBase PoseSearch.Default__AnimNotifyState_PoseSearchBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimNotifyState_PoseSearchBase* UAnimNotifyState_PoseSearchBase::GetDefaultObj()
{
	static class UAnimNotifyState_PoseSearchBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotifyState_PoseSearchBase*>(UAnimNotifyState_PoseSearchBase::StaticClass()->DefaultObject);

	return Default;
}


// Class PoseSearch.AnimNotifyState_PoseSearchExcludeFromDatabase
// (None)

class UClass* UAnimNotifyState_PoseSearchExcludeFromDatabase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotifyState_PoseSearchExcludeFromDatabase");

	return Clss;
}


// AnimNotifyState_PoseSearchExcludeFromDatabase PoseSearch.Default__AnimNotifyState_PoseSearchExcludeFromDatabase
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimNotifyState_PoseSearchExcludeFromDatabase* UAnimNotifyState_PoseSearchExcludeFromDatabase::GetDefaultObj()
{
	static class UAnimNotifyState_PoseSearchExcludeFromDatabase* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotifyState_PoseSearchExcludeFromDatabase*>(UAnimNotifyState_PoseSearchExcludeFromDatabase::StaticClass()->DefaultObject);

	return Default;
}


// Class PoseSearch.AnimNotifyState_PoseSearchBlockTransition
// (None)

class UClass* UAnimNotifyState_PoseSearchBlockTransition::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotifyState_PoseSearchBlockTransition");

	return Clss;
}


// AnimNotifyState_PoseSearchBlockTransition PoseSearch.Default__AnimNotifyState_PoseSearchBlockTransition
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimNotifyState_PoseSearchBlockTransition* UAnimNotifyState_PoseSearchBlockTransition::GetDefaultObj()
{
	static class UAnimNotifyState_PoseSearchBlockTransition* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotifyState_PoseSearchBlockTransition*>(UAnimNotifyState_PoseSearchBlockTransition::StaticClass()->DefaultObject);

	return Default;
}


// Class PoseSearch.AnimNotifyState_PoseSearchModifyCost
// (None)

class UClass* UAnimNotifyState_PoseSearchModifyCost::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotifyState_PoseSearchModifyCost");

	return Clss;
}


// AnimNotifyState_PoseSearchModifyCost PoseSearch.Default__AnimNotifyState_PoseSearchModifyCost
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimNotifyState_PoseSearchModifyCost* UAnimNotifyState_PoseSearchModifyCost::GetDefaultObj()
{
	static class UAnimNotifyState_PoseSearchModifyCost* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotifyState_PoseSearchModifyCost*>(UAnimNotifyState_PoseSearchModifyCost::StaticClass()->DefaultObject);

	return Default;
}


// Class PoseSearch.AnimNotifyState_PoseSearchOverrideContinuingPoseCostBias
// (None)

class UClass* UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotifyState_PoseSearchOverrideContinuingPoseCostBias");

	return Clss;
}


// AnimNotifyState_PoseSearchOverrideContinuingPoseCostBias PoseSearch.Default__AnimNotifyState_PoseSearchOverrideContinuingPoseCostBias
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias* UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias::GetDefaultObj()
{
	static class UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias*>(UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias::StaticClass()->DefaultObject);

	return Default;
}


// Class PoseSearch.PoseSearchLibrary
// (None)

class UClass* UPoseSearchLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PoseSearchLibrary");

	return Clss;
}


// PoseSearchLibrary PoseSearch.Default__PoseSearchLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UPoseSearchLibrary* UPoseSearchLibrary::GetDefaultObj()
{
	static class UPoseSearchLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UPoseSearchLibrary*>(UPoseSearchLibrary::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PoseSearchLibrary", "MotionMatch");

	Params::UPoseSearchLibrary_MotionMatch_Params Parms{};

	Parms.AnimInstance = AnimInstance;
	Parms.Database = Database;
	Parms.Trajectory = Trajectory;
	Parms.TrajectorySpeedMultiplier = TrajectorySpeedMultiplier;
	Parms.PoseHistoryName = PoseHistoryName;
	Parms.FutureAnimation = FutureAnimation;
	Parms.FutureAnimationStartTime = FutureAnimationStartTime;
	Parms.TimeToFutureAnimationStart = TimeToFutureAnimationStart;
	Parms.DebugSessionUniqueIdentifier = DebugSessionUniqueIdentifier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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


