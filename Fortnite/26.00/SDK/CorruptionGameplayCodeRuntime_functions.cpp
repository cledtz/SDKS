#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CorruptionGameplayCodeRuntime.WarEffortFundingLibrary
// (None)

class UClass* UWarEffortFundingLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WarEffortFundingLibrary");

	return Clss;
}


// WarEffortFundingLibrary CorruptionGameplayCodeRuntime.Default__WarEffortFundingLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UWarEffortFundingLibrary* UWarEffortFundingLibrary::GetDefaultObj()
{
	static class UWarEffortFundingLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UWarEffortFundingLibrary*>(UWarEffortFundingLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function CorruptionGameplayCodeRuntime.WarEffortFundingLibrary.WriteTextToBuffer
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UWarEffortFundingLibrary::WriteTextToBuffer(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WarEffortFundingLibrary", "WriteTextToBuffer");

	Params::UWarEffortFundingLibrary_WriteTextToBuffer_Params Parms{};

	Parms.Text = Text;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WarEffortFundingLibrary", "IsOption2ChoiceWinner");

	Params::UWarEffortFundingLibrary_IsOption2ChoiceWinner_Params Parms{};

	Parms.MetaData = MetaData;
	Parms.ChoiceIndex = ChoiceIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WarEffortFundingLibrary", "IsOption1ChoiceWinner");

	Params::UWarEffortFundingLibrary_IsOption1ChoiceWinner_Params Parms{};

	Parms.MetaData = MetaData;
	Parms.ChoiceIndex = ChoiceIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WarEffortFundingLibrary", "IsIndexFunded");

	Params::UWarEffortFundingLibrary_IsIndexFunded_Params Parms{};

	Parms.MetaData = MetaData;
	Parms.Index = Index;
	Parms.StationType = StationType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WarEffortFundingLibrary", "GetIndexFundedPercent");

	Params::UWarEffortFundingLibrary_GetIndexFundedPercent_Params Parms{};

	Parms.MetaData = MetaData;
	Parms.Index = Index;
	Parms.StationType = StationType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WarEffortFundingLibrary", "DoesChoiceHaveWinner");

	Params::UWarEffortFundingLibrary_DoesChoiceHaveWinner_Params Parms{};

	Parms.MetaData = MetaData;
	Parms.ChoiceIndex = ChoiceIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WarEffortFundingLibrary", "AdjustDonation");

	Params::UWarEffortFundingLibrary_AdjustDonation_Params Parms{};

	Parms.DonationAmount = DonationAmount;
	Parms.StationType = StationType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CorruptionGameplayCodeRuntime.CorruptionCoverageMap
// (None)

class UClass* UCorruptionCoverageMap::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CorruptionCoverageMap");

	return Clss;
}


// CorruptionCoverageMap CorruptionGameplayCodeRuntime.Default__CorruptionCoverageMap
// (Public, ClassDefaultObject, ArchetypeObject)

class UCorruptionCoverageMap* UCorruptionCoverageMap::GetDefaultObj()
{
	static class UCorruptionCoverageMap* Default = nullptr;

	if (!Default)
		Default = static_cast<UCorruptionCoverageMap*>(UCorruptionCoverageMap::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CorruptionCoverageMap", "UpdateCorruptionCoverageMap");

	Params::UCorruptionCoverageMap_UpdateCorruptionCoverageMap_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.CorruptionRenderTarget = CorruptionRenderTarget;
	Parms.InTopLeftWorldCoordinate = InTopLeftWorldCoordinate;
	Parms.InBottomRightWorldCoordinate = InBottomRightWorldCoordinate;
	Parms.CoverageThreshold = CoverageThreshold;
	Parms.DebugDrawDuration = DebugDrawDuration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CorruptionCoverageMap", "IsLocationCorrupted");

	Params::UCorruptionCoverageMap_IsLocationCorrupted_Params Parms{};

	Parms.Location = Location;
	Parms.Padding = Padding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CorruptionGameplayCodeRuntime.FortCorruptionSequenceData
// (None)

class UClass* UFortCorruptionSequenceData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCorruptionSequenceData");

	return Clss;
}


// FortCorruptionSequenceData CorruptionGameplayCodeRuntime.Default__FortCorruptionSequenceData
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCorruptionSequenceData* UFortCorruptionSequenceData::GetDefaultObj()
{
	static class UFortCorruptionSequenceData* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCorruptionSequenceData*>(UFortCorruptionSequenceData::StaticClass()->DefaultObject);

	return Default;
}


// Class CorruptionGameplayCodeRuntime.CubeMovementStaticPath
// (Actor)

class UClass* UCubeMovementStaticPath::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CubeMovementStaticPath");

	return Clss;
}


// CubeMovementStaticPath CorruptionGameplayCodeRuntime.Default__CubeMovementStaticPath
// (Public, ClassDefaultObject, ArchetypeObject)

class UCubeMovementStaticPath* UCubeMovementStaticPath::GetDefaultObj()
{
	static class UCubeMovementStaticPath* Default = nullptr;

	if (!Default)
		Default = static_cast<UCubeMovementStaticPath*>(UCubeMovementStaticPath::StaticClass()->DefaultObject);

	return Default;
}


// Function CorruptionGameplayCodeRuntime.CubeMovementStaticPath.EditorGetCorruptionGenerationData
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FCubeMovement_CorruptionGenerationDataOutData                                                          (Parm, OutParm, NativeAccessSpecifierPublic)

void UCubeMovementStaticPath::EditorGetCorruptionGenerationData(struct FCubeMovement_CorruptionGenerationData* OutData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CubeMovementStaticPath", "EditorGetCorruptionGenerationData");

	Params::UCubeMovementStaticPath_EditorGetCorruptionGenerationData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutData != nullptr)
		*OutData = Parms.OutData;

}


// Function CorruptionGameplayCodeRuntime.CubeMovementStaticPath.ClearAllGeneratedSplinesAndLockedData
// (Final, Native, Protected)
// Parameters:

void UCubeMovementStaticPath::ClearAllGeneratedSplinesAndLockedData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CubeMovementStaticPath", "ClearAllGeneratedSplinesAndLockedData");

	Params::UCubeMovementStaticPath_ClearAllGeneratedSplinesAndLockedData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort
// (Actor)

class UClass* UFortAthenaMutator_WarEffort::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaMutator_WarEffort");

	return Clss;
}


// FortAthenaMutator_WarEffort CorruptionGameplayCodeRuntime.Default__FortAthenaMutator_WarEffort
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaMutator_WarEffort* UFortAthenaMutator_WarEffort::GetDefaultObj()
{
	static class UFortAthenaMutator_WarEffort* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaMutator_WarEffort*>(UFortAthenaMutator_WarEffort::StaticClass()->DefaultObject);

	return Default;
}


// Function CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort.SetTryBeforeYouBuyItemState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                ItemFundingTag                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsActive                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaMutator_WarEffort::SetTryBeforeYouBuyItemState(const struct FGameplayTag& ItemFundingTag, bool bIsActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_WarEffort", "SetTryBeforeYouBuyItemState");

	Params::UFortAthenaMutator_WarEffort_SetTryBeforeYouBuyItemState_Params Parms{};

	Parms.ItemFundingTag = ItemFundingTag;
	Parms.bIsActive = bIsActive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort.SetItemFundedState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                ItemFundingTag                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsActive                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaMutator_WarEffort::SetItemFundedState(const struct FGameplayTag& ItemFundingTag, bool bIsActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_WarEffort", "SetItemFundedState");

	Params::UFortAthenaMutator_WarEffort_SetItemFundedState_Params Parms{};

	Parms.ItemFundingTag = ItemFundingTag;
	Parms.bIsActive = bIsActive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort.SetItemFundedPercent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                ItemFundingTag                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FundingPercent                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaMutator_WarEffort::SetItemFundedPercent(const struct FGameplayTag& ItemFundingTag, float FundingPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_WarEffort", "SetItemFundedPercent");

	Params::UFortAthenaMutator_WarEffort_SetItemFundedPercent_Params Parms{};

	Parms.ItemFundingTag = ItemFundingTag;
	Parms.FundingPercent = FundingPercent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort.SetItemFundedAmount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                ItemFundingTag                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              CurrentFundingAmount                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              TargetFundingAmount                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaMutator_WarEffort::SetItemFundedAmount(const struct FGameplayTag& ItemFundingTag, int64 CurrentFundingAmount, int64 TargetFundingAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_WarEffort", "SetItemFundedAmount");

	Params::UFortAthenaMutator_WarEffort_SetItemFundedAmount_Params Parms{};

	Parms.ItemFundingTag = ItemFundingTag;
	Parms.CurrentFundingAmount = CurrentFundingAmount;
	Parms.TargetFundingAmount = TargetFundingAmount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort.SetFundingManagerReady
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsReady                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaMutator_WarEffort::SetFundingManagerReady(bool bIsReady)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_WarEffort", "SetFundingManagerReady");

	Params::UFortAthenaMutator_WarEffort_SetFundingManagerReady_Params Parms{};

	Parms.bIsReady = bIsReady;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort.OnRep_PreloadedItemList
// (Final, Native, Protected)
// Parameters:

void UFortAthenaMutator_WarEffort::OnRep_PreloadedItemList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_WarEffort", "OnRep_PreloadedItemList");

	Params::UFortAthenaMutator_WarEffort_OnRep_PreloadedItemList_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CorruptionGameplayCodeRuntime.WarEffortMeshActor
// (Actor)

class UClass* UWarEffortMeshActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WarEffortMeshActor");

	return Clss;
}


// WarEffortMeshActor CorruptionGameplayCodeRuntime.Default__WarEffortMeshActor
// (Public, ClassDefaultObject, ArchetypeObject)

class UWarEffortMeshActor* UWarEffortMeshActor::GetDefaultObj()
{
	static class UWarEffortMeshActor* Default = nullptr;

	if (!Default)
		Default = static_cast<UWarEffortMeshActor*>(UWarEffortMeshActor::StaticClass()->DefaultObject);

	return Default;
}


// Function CorruptionGameplayCodeRuntime.WarEffortMeshActor.OnRep_CurrentFundingData
// (Final, Native, Protected)
// Parameters:

void UWarEffortMeshActor::OnRep_CurrentFundingData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WarEffortMeshActor", "OnRep_CurrentFundingData");

	Params::UWarEffortMeshActor_OnRep_CurrentFundingData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CorruptionGameplayCodeRuntime.WarEffortMeshActor.OnRep_ActiveTryBeforeYouBuyItems
// (Final, Native, Protected)
// Parameters:

void UWarEffortMeshActor::OnRep_ActiveTryBeforeYouBuyItems()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WarEffortMeshActor", "OnRep_ActiveTryBeforeYouBuyItems");

	Params::UWarEffortMeshActor_OnRep_ActiveTryBeforeYouBuyItems_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CorruptionGameplayCodeRuntime.WarEffortMeshActor.OnRep_ActiveFundedItems
// (Final, Native, Protected)
// Parameters:

void UWarEffortMeshActor::OnRep_ActiveFundedItems()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WarEffortMeshActor", "OnRep_ActiveFundedItems");

	Params::UWarEffortMeshActor_OnRep_ActiveFundedItems_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


