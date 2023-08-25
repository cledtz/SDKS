#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EBattlePassCrewContentState : uint8
{
	BattlePass                     = 0,
	Crew                           = 1,
	CrewSubscribed                 = 2,
	EBattlePassCrewContentState_MAX = 3,
};

enum class EFortProgressiveContentInterfaceCloseReason : uint8
{
	Normal                         = 0,
	SubscriptionPurchased          = 1,
	EFortProgressiveContentInterfaceCloseReason_MAX = 2,
};

enum class EFortProgressiveContentType : uint8
{
	ProgressiveTableOfContentsScreen = 0,
	ProgressiveItemScreen          = 1,
	EFortProgressiveContentType_MAX = 2,
};

enum class EBattlePassPurchaseButtonCurrencyType : uint8
{
	None                           = 0,
	Mtx                            = 1,
	RealMoney                      = 2,
	EBattlePassPurchaseButtonCurrencyType_MAX = 3,
};

enum class EBattlePassPurchaseState : uint8
{
	Purchase                       = 0,
	Confirm                        = 1,
	EBattlePassPurchaseState_MAX   = 2,
};

enum class ECrewPurchaseButtonState : uint8
{
	None                           = 0,
	Purchase                       = 1,
	Rejoin                         = 2,
	ECrewPurchaseButtonState_MAX   = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct CrewUI.CrewSubscriptionContentTabData
struct FCrewSubscriptionContentTabData
{
public:
	class FText                                  TabName;                                           // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	enum class ESubscriptionContentTab           TabType;                                           // 0x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ED9[0x7];                                     // Fixing Size Of Struct
};

// 0x58 (0x58 - 0x0)
// ScriptStruct CrewUI.FortProgressiveReward
struct FFortProgressiveReward
{
public:
	TArray<struct FCosmeticVariantInfo>          DefaultVariantPreviewOverrides;                    // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInterface>     TileMaterial;                                      // 0x10(0x20)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHidden;                                           // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowPreviewStyles;                               // 0x31(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EDB[0x6];                                     // Fixing Size After Last Property 
	TSoftObjectPtr<class UFortItemDefinition>    RewardDef;                                         // 0x38(0x20)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct CrewUI.FortProgressiveStageOverrideDisplayData
struct FFortProgressiveStageOverrideDisplayData
{
public:
	TArray<struct FCosmeticVariantInfo>          DefaultVariantPreviewOverrides;                    // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class FText                                  DisplayName;                                       // 0x10(0x18)(Edit, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInterface>     TileMaterial;                                      // 0x28(0x20)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowPreviewStyles;                               // 0x48(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EDE[0x7];                                     // Fixing Size Of Struct
};

// 0x68 (0x68 - 0x0)
// ScriptStruct CrewUI.FortProgressiveUIStage
struct FFortProgressiveUIStage
{
public:
	TArray<struct FFortProgressiveReward>        Rewards;                                           // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bUseOverrideDisplayData;                           // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EDF[0x7];                                     // Fixing Size After Last Property 
	struct FFortProgressiveStageOverrideDisplayData OverrideDisplayData;                               // 0x18(0x50)(Edit, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct CrewUI.FortProgressiveSet
struct FFortProgressiveSet
{
public:
	class FString                                FulfillmentId;                                     // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  SetName;                                           // 0x10(0x18)(Edit, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInterface>     TileMaterial;                                      // 0x28(0x20)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortProgressiveUIStage>       Stages;                                            // 0x48(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CrewUI.FortProgressiveSetRewardData
struct FFortProgressiveSetRewardData
{
public:
	class UFortItemDefinition*                   RewardToken;                                       // 0x0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EE8[0x10];                                    // Fixing Size Of Struct
};

}


