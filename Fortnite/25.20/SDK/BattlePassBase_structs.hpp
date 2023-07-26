#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EBattlePassLandingPageSpecialEntryType : uint8
{
	None                           = 0,
	Subscription                   = 1,
	CharacterCustomizer            = 2,
	SpecialCharacter               = 3,
	Weekly                         = 4,
	COUNT                          = 5,
	EBattlePassLandingPageSpecialEntryType_MAX = 6,
};

enum class EFBattlePassLandingPageButtonDisplayBehavior : uint8
{
	None                           = 0,
	MainRewards                    = 1,
	BonusRewards                   = 2,
	WeeklyRewards                  = 3,
	QuestRewards                   = 4,
	Subscription                   = 5,
	Customization                  = 6,
	FBattlePassLandingPageButtonDisplayBehavior_MAX = 7,
};

enum class EBattlePassTileAvailabilityStates : uint8
{
	Invalid                        = 0,
	Available                      = 1,
	Owned                          = 2,
	Locked                         = 3,
	BattlePassTileAvailabilityStates_MAX = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x58 - 0x0)
// ScriptStruct BattlePassBase.BattlePassEntrySelectedParams
struct FBattlePassEntrySelectedParams
{
public:
	uint8                                        Pad_79A5[0x58];                                    // Fixing Size Of Struct..
};

// 0x48 (0x48 - 0x0)
// ScriptStruct BattlePassBase.BattlePassCoverPageParams
struct FBattlePassCoverPageParams
{
public:
	uint8                                        Pad_79A6[0x48];                                    // Fixing Size Of Struct..
};

// 0x48 (0x48 - 0x0)
// ScriptStruct BattlePassBase.BattlePassLandingPageButtonTexts
struct FBattlePassLandingPageButtonTexts
{
public:
	class FText                                  TileText;                                          // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  LandingPageTitleText;                              // 0x18(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  LandingPageDescriptionText;                        // 0x30(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct BattlePassBase.BattlePassLandingPageButtonDisplayBehaviorData
struct FBattlePassLandingPageButtonDisplayBehaviorData
{
public:
	enum class EFBattlePassLandingPageButtonDisplayBehavior DisplayBehavior;                                   // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_79A7[0x7];                                     // Fixing Size After Last Property..
	struct FTimespan                             BehaviorTimespan;                                  // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDisplayActive;                                  // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_79A8[0x7];                                     // Fixing Size Of Struct..
};

// 0x70 (0x70 - 0x0)
// ScriptStruct BattlePassBase.BattlePassLandingPageButtonDisplayDetails
struct FBattlePassLandingPageButtonDisplayDetails
{
public:
	struct FBattlePassLandingPageButtonTexts     ButtonTexts;                                       // 0x0(0x48)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bIsBPLocked;                                       // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_79A9[0x7];                                     // Fixing Size After Last Property..
	class FText                                  MissingCosmeticNameText;                           // 0x50(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FTimespan                             DelayTimespan;                                     // 0x68(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct BattlePassBase.BattlePassLandingPageEntryPreviewInfo
struct FBattlePassLandingPageEntryPreviewInfo
{
public:
	enum class EBattlePassLandingPageSpecialEntryType SpecialEntryType;                                  // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_79AA[0x7];                                     // Fixing Size After Last Property..
	TArray<enum class EFortItemType>             SubscriptionItemTypesToDisplay;                    // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameplayTag                          SpecialCharacterVariantChannelToModify;            // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          SpecialCharacterActiveVariantTag;                  // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, TSoftObjectPtr<class UMaterialInstance>> TemplateIdTileRenderMap;                           // 0x20(0x50)(Edit, DisableEditOnTemplate, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UFortItemDefinition>> PreviewItems;                                      // 0x70(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bEnableDynamicWeeklyPreview;                       // 0x80(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_79AB[0x3];                                     // Fixing Size After Last Property..
	float                                        TransitionTime;                                    // 0x84(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_79AC[0x8];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct BattlePassBase.SeasonalResourceList
struct FSeasonalResourceList
{
public:
	TArray<class UFortPersistentResourceItemDefinition*> SeasonalResources;                                 // 0x0(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
