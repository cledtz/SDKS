#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class CorruptionGameplayCodeRuntime.WarEffortFundingLibrary
class UWarEffortFundingLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UWarEffortFundingLibrary* GetDefaultObj();

	class FString WriteTextToBuffer(class FText& Text);
	bool IsOption2ChoiceWinner(struct FWarEffortFundingMetadata& MetaData, int32 ChoiceIndex);
	bool IsOption1ChoiceWinner(struct FWarEffortFundingMetadata& MetaData, int32 ChoiceIndex);
	bool IsIndexFunded(struct FWarEffortFundingMetadata& MetaData, int32 Index, enum class EWarEffortFundingStationType StationType);
	float GetIndexFundedPercent(struct FWarEffortFundingMetadata& MetaData, int32 Index, enum class EWarEffortFundingStationType StationType);
	bool DoesChoiceHaveWinner(struct FWarEffortFundingMetadata& MetaData, int32 ChoiceIndex);
	int32 AdjustDonation(int32 DonationAmount, enum class EWarEffortFundingStationType StationType);
};

// 0x68 (0x90 - 0x28)
// Class CorruptionGameplayCodeRuntime.CorruptionCoverageMap
class UCorruptionCoverageMap : public UObject
{
public:
	uint8                                        Pad_221[0x68];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UCorruptionCoverageMap* GetDefaultObj();

	bool UpdateCorruptionCoverageMap(class UObject* WorldContextObject, class UTextureRenderTarget2D* CorruptionRenderTarget, struct FVector& InTopLeftWorldCoordinate, struct FVector& InBottomRightWorldCoordinate, float CoverageThreshold, float DebugDrawDuration);
	bool IsLocationCorrupted(struct FVector& Location, float Padding);
};

// 0x20 (0x50 - 0x30)
// Class CorruptionGameplayCodeRuntime.FortCorruptionSequenceData
class UFortCorruptionSequenceData : public UPrimaryDataAsset
{
public:
	TArray<struct FCorruptionCalendarEventData>  CorruptionStartEvents;                             // 0x30(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FCorruptionPauseEvent>         CorruptionPauseEvents;                             // 0x40(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortCorruptionSequenceData* GetDefaultObj();

};

// 0x38 (0x510 - 0x4D8)
// Class CorruptionGameplayCodeRuntime.CubeMovementStaticPath
class UCubeMovementStaticPath : public UScriptedObjectMovement_StaticPath
{
public:
	float                                        GenerationZTraceHeight;                            // 0x4D8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CubeSpacingFactor;                                 // 0x4DC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CubeAngleLimitDegrees;                             // 0x4E0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_22D[0x4];                                      // Fixing Size After Last Property 
	class UFortCorruptionSequenceData*           CorruptionSequence;                                // 0x4E8(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_22E[0x8];                                      // Fixing Size After Last Property 
	TArray<struct FTravelerStepCorruptionOverrideData> TravelerCorruptionStepPercentOverrides;            // 0x4F8(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_22F[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UCubeMovementStaticPath* GetDefaultObj();

	void EditorGetCorruptionGenerationData(struct FCubeMovement_CorruptionGenerationData* OutData);
	void ClearAllGeneratedSplinesAndLockedData();
};

// 0x68 (0x4F8 - 0x490)
// Class CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort
class UFortAthenaMutator_WarEffort : public UFortAthenaMutator_GameModeBase
{
public:
	uint8                                        Pad_243[0x8];                                      // Fixing Size After Last Property 
	struct FWarEffortMutatorMetadata             MeshNetworkMetadata;                               // 0x498(0x20)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	TArray<struct FWarEffortMutatorChoiceData>   WeaponChoices;                                     // 0x4B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FPrimaryAssetId>               PreloadedItemList;                                 // 0x4C8(0x10)(Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected)
	bool                                         bCanPreloadItems;                                  // 0x4D8(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_246[0x1F];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaMutator_WarEffort* GetDefaultObj();

	void SetTryBeforeYouBuyItemState(const struct FGameplayTag& ItemFundingTag, bool bIsActive);
	void SetItemFundedState(const struct FGameplayTag& ItemFundingTag, bool bIsActive);
	void SetItemFundedPercent(const struct FGameplayTag& ItemFundingTag, float FundingPercent);
	void SetItemFundedAmount(const struct FGameplayTag& ItemFundingTag, int64 CurrentFundingAmount, int64 TargetFundingAmount);
	void SetFundingManagerReady(bool bIsReady);
	void OnRep_PreloadedItemList();
};

// 0x88 (0x318 - 0x290)
// Class CorruptionGameplayCodeRuntime.WarEffortMeshActor
class UWarEffortMeshActor : public UInfo
{
public:
	class UMeshNetworkComponent*                 MeshNetworkComponent;                              // 0x290(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTag>                  ActiveFundedItems;                                 // 0x298(0x10)(Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected)
	TArray<struct FGameplayTag>                  ActiveTryBeforeYouBuyItems;                        // 0x2A8(0x10)(Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected)
	TArray<struct FWarEffortFundingData>         CurrentFundingData;                                // 0x2B8(0x10)(Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_254[0x50];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UWarEffortMeshActor* GetDefaultObj();

	void OnRep_CurrentFundingData();
	void OnRep_ActiveTryBeforeYouBuyItems();
	void OnRep_ActiveFundedItems();
};

}


