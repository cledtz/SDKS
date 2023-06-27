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


// Function CorruptionGameplayCodeRuntime.WarEffortFundingLibrary.WriteTextToBuffer
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UWarEffortFundingLibrary::WriteTextToBuffer(class FText& Text)
{
	static auto Func = Class->GetFunction("WarEffortFundingLibrary", "WriteTextToBuffer");

	Params::UWarEffortFundingLibrary_WriteTextToBuffer_Params Parms;

	Parms.Text = Text;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CorruptionGameplayCodeRuntime.WarEffortFundingLibrary.IsOption2ChoiceWinner
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FWarEffortFundingMetadata   MetaData                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              ChoiceIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWarEffortFundingLibrary::IsOption2ChoiceWinner(struct FWarEffortFundingMetadata& MetaData, int32 ChoiceIndex)
{
	static auto Func = Class->GetFunction("WarEffortFundingLibrary", "IsOption2ChoiceWinner");

	Params::UWarEffortFundingLibrary_IsOption2ChoiceWinner_Params Parms;

	Parms.MetaData = MetaData;
	Parms.ChoiceIndex = ChoiceIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CorruptionGameplayCodeRuntime.WarEffortFundingLibrary.IsOption1ChoiceWinner
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FWarEffortFundingMetadata   MetaData                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              ChoiceIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWarEffortFundingLibrary::IsOption1ChoiceWinner(struct FWarEffortFundingMetadata& MetaData, int32 ChoiceIndex)
{
	static auto Func = Class->GetFunction("WarEffortFundingLibrary", "IsOption1ChoiceWinner");

	Params::UWarEffortFundingLibrary_IsOption1ChoiceWinner_Params Parms;

	Parms.MetaData = MetaData;
	Parms.ChoiceIndex = ChoiceIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CorruptionGameplayCodeRuntime.WarEffortFundingLibrary.IsIndexFunded
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FWarEffortFundingMetadata   MetaData                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EWarEffortFundingStationTypeStationType                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWarEffortFundingLibrary::IsIndexFunded(struct FWarEffortFundingMetadata& MetaData, int32 Index, enum class EWarEffortFundingStationType StationType)
{
	static auto Func = Class->GetFunction("WarEffortFundingLibrary", "IsIndexFunded");

	Params::UWarEffortFundingLibrary_IsIndexFunded_Params Parms;

	Parms.MetaData = MetaData;
	Parms.Index = Index;
	Parms.StationType = StationType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CorruptionGameplayCodeRuntime.WarEffortFundingLibrary.GetIndexFundedPercent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FWarEffortFundingMetadata   MetaData                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EWarEffortFundingStationTypeStationType                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWarEffortFundingLibrary::GetIndexFundedPercent(struct FWarEffortFundingMetadata& MetaData, int32 Index, enum class EWarEffortFundingStationType StationType)
{
	static auto Func = Class->GetFunction("WarEffortFundingLibrary", "GetIndexFundedPercent");

	Params::UWarEffortFundingLibrary_GetIndexFundedPercent_Params Parms;

	Parms.MetaData = MetaData;
	Parms.Index = Index;
	Parms.StationType = StationType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CorruptionGameplayCodeRuntime.WarEffortFundingLibrary.DoesChoiceHaveWinner
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FWarEffortFundingMetadata   MetaData                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              ChoiceIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWarEffortFundingLibrary::DoesChoiceHaveWinner(struct FWarEffortFundingMetadata& MetaData, int32 ChoiceIndex)
{
	static auto Func = Class->GetFunction("WarEffortFundingLibrary", "DoesChoiceHaveWinner");

	Params::UWarEffortFundingLibrary_DoesChoiceHaveWinner_Params Parms;

	Parms.MetaData = MetaData;
	Parms.ChoiceIndex = ChoiceIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CorruptionGameplayCodeRuntime.WarEffortFundingLibrary.AdjustDonation
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              DonationAmount                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EWarEffortFundingStationTypeStationType                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UWarEffortFundingLibrary::AdjustDonation(int32 DonationAmount, enum class EWarEffortFundingStationType StationType)
{
	static auto Func = Class->GetFunction("WarEffortFundingLibrary", "AdjustDonation");

	Params::UWarEffortFundingLibrary_AdjustDonation_Params Parms;

	Parms.DonationAmount = DonationAmount;
	Parms.StationType = StationType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CorruptionGameplayCodeRuntime.CorruptionCoverageMap.UpdateCorruptionCoverageMap
// (Final, Native, Private, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextureRenderTarget2D*      CorruptionRenderTarget                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     InTopLeftWorldCoordinate                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     InBottomRightWorldCoordinate                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CoverageThreshold                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DebugDrawDuration                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCorruptionCoverageMap::UpdateCorruptionCoverageMap(class UObject* WorldContextObject, class UTextureRenderTarget2D* CorruptionRenderTarget, struct FVector& InTopLeftWorldCoordinate, struct FVector& InBottomRightWorldCoordinate, float CoverageThreshold, float DebugDrawDuration)
{
	static auto Func = Class->GetFunction("CorruptionCoverageMap", "UpdateCorruptionCoverageMap");

	Params::UCorruptionCoverageMap_UpdateCorruptionCoverageMap_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.CorruptionRenderTarget = CorruptionRenderTarget;
	Parms.InTopLeftWorldCoordinate = InTopLeftWorldCoordinate;
	Parms.InBottomRightWorldCoordinate = InBottomRightWorldCoordinate;
	Parms.CoverageThreshold = CoverageThreshold;
	Parms.DebugDrawDuration = DebugDrawDuration;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CorruptionGameplayCodeRuntime.CorruptionCoverageMap.IsLocationCorrupted
// (Final, Native, Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     Location                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Padding                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCorruptionCoverageMap::IsLocationCorrupted(struct FVector& Location, float Padding)
{
	static auto Func = Class->GetFunction("CorruptionCoverageMap", "IsLocationCorrupted");

	Params::UCorruptionCoverageMap_IsLocationCorrupted_Params Parms;

	Parms.Location = Location;
	Parms.Padding = Padding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CorruptionGameplayCodeRuntime.CubeMovementStaticPath.EditorGetCorruptionGenerationData
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FCubeMovement_CorruptionGenerationDataOutData                                                          (Parm, OutParm, NativeAccessSpecifierPublic)

void ACubeMovementStaticPath::EditorGetCorruptionGenerationData(struct FCubeMovement_CorruptionGenerationData* OutData)
{
	static auto Func = Class->GetFunction("CubeMovementStaticPath", "EditorGetCorruptionGenerationData");

	Params::ACubeMovementStaticPath_EditorGetCorruptionGenerationData_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutData != nullptr)
		*OutData = Parms.OutData;

}


// Function CorruptionGameplayCodeRuntime.CubeMovementStaticPath.ClearAllGeneratedSplinesAndLockedData
// (Final, Native, Protected)
// Parameters:

void ACubeMovementStaticPath::ClearAllGeneratedSplinesAndLockedData()
{
	static auto Func = Class->GetFunction("CubeMovementStaticPath", "ClearAllGeneratedSplinesAndLockedData");

	Params::ACubeMovementStaticPath_ClearAllGeneratedSplinesAndLockedData_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort.SetTryBeforeYouBuyItemState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                ItemFundingTag                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsActive                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_WarEffort::SetTryBeforeYouBuyItemState(const struct FGameplayTag& ItemFundingTag, bool bIsActive)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_WarEffort", "SetTryBeforeYouBuyItemState");

	Params::AFortAthenaMutator_WarEffort_SetTryBeforeYouBuyItemState_Params Parms;

	Parms.ItemFundingTag = ItemFundingTag;
	Parms.bIsActive = bIsActive;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort.SetItemFundedState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                ItemFundingTag                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsActive                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_WarEffort::SetItemFundedState(const struct FGameplayTag& ItemFundingTag, bool bIsActive)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_WarEffort", "SetItemFundedState");

	Params::AFortAthenaMutator_WarEffort_SetItemFundedState_Params Parms;

	Parms.ItemFundingTag = ItemFundingTag;
	Parms.bIsActive = bIsActive;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort.SetItemFundedPercent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                ItemFundingTag                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FundingPercent                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_WarEffort::SetItemFundedPercent(const struct FGameplayTag& ItemFundingTag, float FundingPercent)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_WarEffort", "SetItemFundedPercent");

	Params::AFortAthenaMutator_WarEffort_SetItemFundedPercent_Params Parms;

	Parms.ItemFundingTag = ItemFundingTag;
	Parms.FundingPercent = FundingPercent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort.SetItemFundedAmount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                ItemFundingTag                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              CurrentFundingAmount                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              TargetFundingAmount                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_WarEffort::SetItemFundedAmount(const struct FGameplayTag& ItemFundingTag, int64 CurrentFundingAmount, int64 TargetFundingAmount)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_WarEffort", "SetItemFundedAmount");

	Params::AFortAthenaMutator_WarEffort_SetItemFundedAmount_Params Parms;

	Parms.ItemFundingTag = ItemFundingTag;
	Parms.CurrentFundingAmount = CurrentFundingAmount;
	Parms.TargetFundingAmount = TargetFundingAmount;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort.SetFundingManagerReady
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsReady                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_WarEffort::SetFundingManagerReady(bool bIsReady)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_WarEffort", "SetFundingManagerReady");

	Params::AFortAthenaMutator_WarEffort_SetFundingManagerReady_Params Parms;

	Parms.bIsReady = bIsReady;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort.OnRep_PreloadedItemList
// (Final, Native, Protected)
// Parameters:

void AFortAthenaMutator_WarEffort::OnRep_PreloadedItemList()
{
	static auto Func = Class->GetFunction("FortAthenaMutator_WarEffort", "OnRep_PreloadedItemList");

	Params::AFortAthenaMutator_WarEffort_OnRep_PreloadedItemList_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CorruptionGameplayCodeRuntime.WarEffortMeshActor.OnRep_CurrentFundingData
// (Final, Native, Protected)
// Parameters:

void AWarEffortMeshActor::OnRep_CurrentFundingData()
{
	static auto Func = Class->GetFunction("WarEffortMeshActor", "OnRep_CurrentFundingData");

	Params::AWarEffortMeshActor_OnRep_CurrentFundingData_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CorruptionGameplayCodeRuntime.WarEffortMeshActor.OnRep_ActiveTryBeforeYouBuyItems
// (Final, Native, Protected)
// Parameters:

void AWarEffortMeshActor::OnRep_ActiveTryBeforeYouBuyItems()
{
	static auto Func = Class->GetFunction("WarEffortMeshActor", "OnRep_ActiveTryBeforeYouBuyItems");

	Params::AWarEffortMeshActor_OnRep_ActiveTryBeforeYouBuyItems_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CorruptionGameplayCodeRuntime.WarEffortMeshActor.OnRep_ActiveFundedItems
// (Final, Native, Protected)
// Parameters:

void AWarEffortMeshActor::OnRep_ActiveFundedItems()
{
	static auto Func = Class->GetFunction("WarEffortMeshActor", "OnRep_ActiveFundedItems");

	Params::AWarEffortMeshActor_OnRep_ActiveFundedItems_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
