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

enum class EViewerNavigationDirection : uint8
{
	Previous                       = 0,
	Next                           = 1,
	EViewerNavigationDirection_MAX = 2,
};

enum class EFortCollectionBookPopupButtonType : uint8
{
	Invalid                        = 0,
	SelectItem                     = 1,
	Preview                        = 2,
	Purchase                       = 3,
	Unslot                         = 4,
	Back                           = 5,
	EFortCollectionBookPopupButtonType_MAX = 6,
};

enum class ECollectionBookSectionNavTarget : uint8
{
	SlotSelect                     = 0,
	SlotPicker                     = 1,
	ECollectionBookSectionNavTarget_MAX = 2,
};

enum class EHeroLoadoutSlotType : uint8
{
	CommanderSlot                  = 0,
	TeamPerkSlot                   = 1,
	CrewSlot                       = 2,
	GadgetSlot                     = 3,
	EHeroLoadoutSlotType_MAX       = 4,
};

enum class ESquadSlotSortType : uint8
{
	ByRating                       = 0,
	ByLevel                        = 1,
	ByRarity                       = 2,
	ByBonus                        = 3,
	ByMatch                        = 4,
	ESquadSlotSortType_MAX         = 5,
};

enum class EFrontEndRewardType : uint8
{
	Mission                        = 0,
	Quest                          = 1,
	EpicNewQuest                   = 2,
	Expedition                     = 3,
	CollectionBook                 = 4,
	MissionAlert                   = 5,
	DifficultyIncrease             = 6,
	GiftBox                        = 7,
	ItemCache                      = 8,
	PhoenixLevelUp                 = 9,
	EFrontEndRewardType_MAX        = 10,
};

enum class ECollectionBookRewardStatus : uint8
{
	Unknown                        = 0,
	Available                      = 1,
	Claimed                        = 2,
	ECollectionBookRewardStatus_MAX = 3,
};

enum class ECollectionBookPrimaryNavTarget : uint8
{
	Overview                       = 0,
	SectionTileView                = 1,
	ECollectionBookPrimaryNavTarget_MAX = 2,
};

enum class EFortExpeditionListSort : uint8
{
	ByRating                       = 0,
	ByDuration                     = 1,
	ByName                         = 2,
	EFortExpeditionListSort_MAX    = 3,
};

enum class EFortRewardItemTypeSTW : uint8
{
	RewardedBadges                 = 0,
	MissedBadges                   = 1,
	RewardedItems                  = 2,
	RewardedAccountItems           = 3,
	EFortRewardItemTypeSTW_MAX     = 4,
};

enum class EFortHeroPerkDisplayType : uint8
{
	CommanderPerk                  = 0,
	TeamPerk                       = 1,
	ClassPerk                      = 2,
	StandardPerk                   = 3,
	Max_None                       = 4,
	EFortHeroPerkDisplayType_MAX   = 5,
};

enum class EFortAlterationOptionType : uint8
{
	Upgrade                        = 0,
	Replacement                    = 1,
	Max_NONE                       = 2,
	EFortAlterationOptionType_MAX  = 3,
};

enum class EFortMissionActivationWidgetSTWState : uint8
{
	Default                        = 0,
	StartObjective                 = 1,
	IncreaseDifficulty             = 2,
	Invalid                        = 3,
	EFortMissionActivationWidgetSTWState_MAX = 4,
};

enum class ECalloutNavigationDirection : uint8
{
	Previous                       = 0,
	Next                           = 1,
	ECalloutNavigationDirection_MAX = 2,
};

enum class EFortUISurvivorSquadMatchType : uint8
{
	Multi                          = 0,
	Single                         = 1,
	Summary                        = 2,
	Max_None                       = 3,
	EFortUISurvivorSquadMatchType_MAX = 4,
};

enum class EUpgradeInfoImageSize : uint8
{
	Small                          = 0,
	Large                          = 1,
	EUpgradeInfoImageSize_MAX      = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct SaveTheWorldUI.SquadSlotSortTypes
struct FSquadSlotSortTypes
{
public:
	TArray<enum class ESquadSlotSortType>        SortTypes;                                         // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x100 (0x100 - 0x0)
// ScriptStruct SaveTheWorldUI.ExpeditionTabInfo
struct FExpeditionTabInfo
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8485[0xC];                                     // Fixing Size After Last Property..
	struct FFortTabButtonLabelInfo               TabLabelInfo;                                      // 0x10(0xF0)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SaveTheWorldUI.ConsumedCriteriaData
struct FConsumedCriteriaData
{
public:
	float                                        PowerMod;                                          // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8486[0x4];                                     // Fixing Size After Last Property..
	TArray<class FName>                          CriteriaNames;                                     // 0x8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct SaveTheWorldUI.FortHeroLoadoutHeroPickerTabConfiguration
struct FFortHeroLoadoutHeroPickerTabConfiguration
{
public:
	struct FFortItemFilterDefinition             Filter;                                            // 0x0(0x60)(NativeAccessSpecifierPublic)
	struct FFortItemSorterDefinition             Sorter;                                            // 0x60(0x50)(NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SaveTheWorldUI.FortInGamePerkDisplayData
struct FFortInGamePerkDisplayData
{
public:
	enum class EFortHeroPerkDisplayType          PerkDisplayType;                                   // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8487[0x3];                                     // Fixing Size After Last Property..
	int32                                        Index;                                             // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Row;                                               // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Column;                                            // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct SaveTheWorldUI.FortRefundDescriptionsData
struct FFortRefundDescriptionsData : public FTableRowBase
{
public:
	class FString                                SearchString;                                      // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TargetReleaseVersion;                              // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  RefundDescriptionText;                             // 0x28(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct SaveTheWorldUI.FortQuestMapEventQuestSideBarData
struct FFortQuestMapEventQuestSideBarData : public FTableRowBase
{
public:
	class UFortQuestItemDefinition*              QuestItemDefinition;                               // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        EventFlags;                                        // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bShowAlways;                                       // 0x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8488[0x3];                                     // Fixing Size After Last Property..
	float                                        CycleTime;                                         // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct SaveTheWorldUI.FortLandingPageDefenderSummaryInfo
struct FFortLandingPageDefenderSummaryInfo
{
public:
	class FName                                  SquadId;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8489[0x4];                                     // Fixing Size After Last Property..
	class FText                                  TheaterDisplayName;                                // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FString                                TheaterUniqueId;                                   // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct SaveTheWorldUI.FortAttributeModifierAccumulation
struct FFortAttributeModifierAccumulation
{
public:
	struct FGameplayTag                          GameplayTag;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_848A[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayAttribute                    Attribute;                                         // 0x8(0x38)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayModOp                    ModifierOp;                                        // 0x40(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_848B[0x3];                                     // Fixing Size After Last Property..
	float                                        Magnitude;                                         // 0x44(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct SaveTheWorldUI.FortSurvivorSquadSlottingFeedbackData
struct FFortSurvivorSquadSlottingFeedbackData
{
public:
	bool                                         HadLeaderMatch;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasLeaderMatch;                                    // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_848C[0x6];                                     // Fixing Size After Last Property..
	TMap<struct FGameplayTag, int32>             PreviousSetBonusCounts;                            // 0x8(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, int32>             CurrentSetBonusCounts;                             // 0x58(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        PreviousPersonalityMatchCount;                     // 0xA8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentPersonalityMatchCount;                      // 0xAC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct SaveTheWorldUI.FortSurvivorSquadSelectorButtonSummaryStats
struct FFortSurvivorSquadSelectorButtonSummaryStats
{
public:
	class FName                                  SquadId;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_848D[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayAttribute                    FortAttribute;                                     // 0x8(0x38)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FortAttributeValue;                                // 0x40(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_848E[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayAttribute                    FortTeamAttribute;                                 // 0x48(0x38)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TeamFortAttributeValue;                            // 0x80(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SquadPowerValue;                                   // 0x84(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  FortAttributeName;                                 // 0x88(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x490 (0x490 - 0x0)
// ScriptStruct SaveTheWorldUI.FortSurvivorSquadSelectorButtonPersonalityMatches
struct FFortSurvivorSquadSelectorButtonPersonalityMatches
{
public:
	int32                                        NumPersonalityMatches;                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalNonLeaderSquadMembers;                        // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HavePersonalityIcons;                              // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_848F[0x7];                                     // Fixing Size After Last Property..
	struct FFortMultiSizeBrush                   PersonalityIcons;                                  // 0x10(0x480)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x4C0 (0x4C0 - 0x0)
// ScriptStruct SaveTheWorldUI.FortUISurvivorSquadStatMatch
struct FFortUISurvivorSquadStatMatch
{
public:
	struct FFortMultiSizeBrush                   Icons;                                             // 0x0(0x480)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  MagnitudeText;                                     // 0x480(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  AttributeDisplayName;                              // 0x498(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        NumMembersMeetingCriteria;                         // 0x4B0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumMembersRequired;                                // 0x4B4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortUISurvivorSquadMatchType     MatchType;                                         // 0x4B8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBuffState                    PreviewEffect;                                     // 0x4B9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8490[0x6];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SaveTheWorldUI.OfferGroup
struct FOfferGroup
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxNumberToShow;                                   // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8491[0x4];                                     // Fixing Size Of Struct..
};

// 0x88 (0x90 - 0x8)
// ScriptStruct SaveTheWorldUI.HomebaseNodeDisplayData
struct FHomebaseNodeDisplayData : public FTableRowBase
{
public:
	class FText                                  Title;                                             // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             LargePreviewImage;                                 // 0x38(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             SmallPreviewImage;                                 // 0x60(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaSource*                          PreviewVideoMediaSource;                           // 0x88(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
