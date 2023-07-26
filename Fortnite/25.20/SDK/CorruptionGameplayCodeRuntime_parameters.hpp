#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// Function CorruptionGameplayCodeRuntime.WarEffortFundingLibrary.WriteTextToBuffer
struct UWarEffortFundingLibrary_WriteTextToBuffer_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function CorruptionGameplayCodeRuntime.WarEffortFundingLibrary.IsOption2ChoiceWinner
struct UWarEffortFundingLibrary_IsOption2ChoiceWinner_Params
{
public:
	struct FWarEffortFundingMetadata             MetaData;                                          // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        ChoiceIndex;                                       // 0x30(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x34(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7F24[0x3];                                     // Fixing Size Of Struct..
};

// 0x38 (0x38 - 0x0)
// Function CorruptionGameplayCodeRuntime.WarEffortFundingLibrary.IsOption1ChoiceWinner
struct UWarEffortFundingLibrary_IsOption1ChoiceWinner_Params
{
public:
	struct FWarEffortFundingMetadata             MetaData;                                          // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        ChoiceIndex;                                       // 0x30(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x34(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7F25[0x3];                                     // Fixing Size Of Struct..
};

// 0x38 (0x38 - 0x0)
// Function CorruptionGameplayCodeRuntime.WarEffortFundingLibrary.IsIndexFunded
struct UWarEffortFundingLibrary_IsIndexFunded_Params
{
public:
	struct FWarEffortFundingMetadata             MetaData;                                          // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x30(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWarEffortFundingStationType      StationType;                                       // 0x34(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x35(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7F26[0x2];                                     // Fixing Size Of Struct..
};

// 0x40 (0x40 - 0x0)
// Function CorruptionGameplayCodeRuntime.WarEffortFundingLibrary.GetIndexFundedPercent
struct UWarEffortFundingLibrary_GetIndexFundedPercent_Params
{
public:
	struct FWarEffortFundingMetadata             MetaData;                                          // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x30(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWarEffortFundingStationType      StationType;                                       // 0x34(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7F27[0x3];                                     // Fixing Size After Last Property..
	float                                        ReturnValue;                                       // 0x38(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7F28[0x4];                                     // Fixing Size Of Struct..
};

// 0x38 (0x38 - 0x0)
// Function CorruptionGameplayCodeRuntime.WarEffortFundingLibrary.DoesChoiceHaveWinner
struct UWarEffortFundingLibrary_DoesChoiceHaveWinner_Params
{
public:
	struct FWarEffortFundingMetadata             MetaData;                                          // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        ChoiceIndex;                                       // 0x30(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x34(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7F29[0x3];                                     // Fixing Size Of Struct..
};

// 0xC (0xC - 0x0)
// Function CorruptionGameplayCodeRuntime.WarEffortFundingLibrary.AdjustDonation
struct UWarEffortFundingLibrary_AdjustDonation_Params
{
public:
	int32                                        DonationAmount;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWarEffortFundingStationType      StationType;                                       // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7F2A[0x3];                                     // Fixing Size After Last Property..
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function CorruptionGameplayCodeRuntime.CorruptionCoverageMap.UpdateCorruptionCoverageMap
struct UCorruptionCoverageMap_UpdateCorruptionCoverageMap_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                CorruptionRenderTarget;                            // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InTopLeftWorldCoordinate;                          // 0x10(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InBottomRightWorldCoordinate;                      // 0x28(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CoverageThreshold;                                 // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebugDrawDuration;                                 // 0x44(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7F2B[0x7];                                     // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// Function CorruptionGameplayCodeRuntime.CorruptionCoverageMap.IsLocationCorrupted
struct UCorruptionCoverageMap_IsLocationCorrupted_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Padding;                                           // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7F2C[0x3];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function CorruptionGameplayCodeRuntime.CubeMovementStaticPath.EditorGetCorruptionGenerationData
struct ACubeMovementStaticPath_EditorGetCorruptionGenerationData_Params
{
public:
	struct FCubeMovement_CorruptionGenerationData OutData;                                           // 0x0(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CorruptionGameplayCodeRuntime.CubeMovementStaticPath.ClearAllGeneratedSplinesAndLockedData
struct ACubeMovementStaticPath_ClearAllGeneratedSplinesAndLockedData_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort.SetTryBeforeYouBuyItemState
struct AFortAthenaMutator_WarEffort_SetTryBeforeYouBuyItemState_Params
{
public:
	struct FGameplayTag                          ItemFundingTag;                                    // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsActive;                                         // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7F31[0x3];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort.SetItemFundedState
struct AFortAthenaMutator_WarEffort_SetItemFundedState_Params
{
public:
	struct FGameplayTag                          ItemFundingTag;                                    // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsActive;                                         // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7F32[0x3];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort.SetItemFundedPercent
struct AFortAthenaMutator_WarEffort_SetItemFundedPercent_Params
{
public:
	struct FGameplayTag                          ItemFundingTag;                                    // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FundingPercent;                                    // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort.SetItemFundedAmount
struct AFortAthenaMutator_WarEffort_SetItemFundedAmount_Params
{
public:
	struct FGameplayTag                          ItemFundingTag;                                    // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7F33[0x4];                                     // Fixing Size After Last Property..
	int64                                        CurrentFundingAmount;                              // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        TargetFundingAmount;                               // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort.SetFundingManagerReady
struct AFortAthenaMutator_WarEffort_SetFundingManagerReady_Params
{
public:
	bool                                         bIsReady;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort.OnRep_PreloadedItemList
struct AFortAthenaMutator_WarEffort_OnRep_PreloadedItemList_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CorruptionGameplayCodeRuntime.WarEffortMeshActor.OnRep_CurrentFundingData
struct AWarEffortMeshActor_OnRep_CurrentFundingData_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CorruptionGameplayCodeRuntime.WarEffortMeshActor.OnRep_ActiveTryBeforeYouBuyItems
struct AWarEffortMeshActor_OnRep_ActiveTryBeforeYouBuyItems_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CorruptionGameplayCodeRuntime.WarEffortMeshActor.OnRep_ActiveFundedItems
struct AWarEffortMeshActor_OnRep_ActiveFundedItems_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
