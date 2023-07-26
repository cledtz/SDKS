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

// 0x1 (0x1 - 0x0)
// Function BattlePassS25UI.BattlePassLandingPageS25.OnBattlePassSubscriptionAllowed
struct UBattlePassLandingPageS25_OnBattlePassSubscriptionAllowed_Params
{
public:
	bool                                         bSubscriptionAllowed;                              // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function BattlePassS25UI.BattlePassRewardPageS25.OnPageChanged
struct UBattlePassRewardPageS25_OnPageChanged_Params
{
public:
	int32                                        PageNumber;                                        // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RewardPageTotal;                                   // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function BattlePassS25UI.BattlePassRewardPageS25.OnLoadingScreenSelectedChanged
struct UBattlePassRewardPageS25_OnLoadingScreenSelectedChanged_Params
{
public:
	bool                                         bIsSelected;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function BattlePassS25UI.BattlePassRewardPageS25.OnInputMethodChanged
struct UBattlePassRewardPageS25_OnInputMethodChanged_Params
{
public:
	enum class ECommonInputType                  InputType;                                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function BattlePassS25UI.BattlePassRewardPageS25.OnInitForPageType
struct UBattlePassRewardPageS25_OnInitForPageType_Params
{
public:
	enum class ERewardPageType                   InRewardPageType;                                  // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function BattlePassS25UI.BattlePassRewardPageS25.HandleRewardTracksBoundaryNavigation
struct UBattlePassRewardPageS25_HandleRewardTracksBoundaryNavigation_Params
{
public:
	enum class EUINavigation                     InNavigation;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7DF0[0x7];                                     // Fixing Size After Last Property..
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function BattlePassS25UI.BattlePassRewardPageS25.GetRewardPageBackgroundData
struct UBattlePassRewardPageS25_GetRewardPageBackgroundData_Params
{
public:
	struct FVaultWorldBackgroundData             ReturnValue;                                       // 0x0(0x60)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function BattlePassS25UI.BattlePassScreenS25.OverviewShowAnimationFinished
struct UBattlePassScreenS25_OverviewShowAnimationFinished_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function BattlePassS25UI.BattlePassScreenS25.OnUpdateStatusBar
struct UBattlePassScreenS25_OnUpdateStatusBar_Params
{
public:
	class FText                                  StatusText;                                        // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	enum class EBattlePassStatusBarTypeS25       BarType;                                           // 0x18(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7DF5[0x7];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function BattlePassS25UI.BattlePassScreenS25.OnUpdateBattlePassRequiredBar
struct UBattlePassScreenS25_OnUpdateBattlePassRequiredBar_Params
{
public:
	bool                                         bPassRequiredVisible;                              // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function BattlePassS25UI.BattlePassScreenS25.OnTransitionItemDetails
struct UBattlePassScreenS25_OnTransitionItemDetails_Params
{
public:
	bool                                         bTransitionForward;                                // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function BattlePassS25UI.BattlePassScreenS25.OnSetWeeklyRewardsInfo
struct UBattlePassScreenS25_OnSetWeeklyRewardsInfo_Params
{
public:
	struct FTimespan                             DelayTimespan;                                     // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AvailableRewards;                                  // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OwnedRewards;                                      // 0xC(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalRewards;                                      // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AvailablePages;                                    // 0x14(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CompletedPages;                                    // 0x18(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalPages;                                        // 0x1C(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function BattlePassS25UI.BattlePassScreenS25.OnSetResourcePrice
struct UBattlePassScreenS25_OnSetResourcePrice_Params
{
public:
	int32                                        Cost;                                              // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7DF6[0x4];                                     // Fixing Size After Last Property..
	class UFortPersistentResourceItemDefinition* PersistentResource;                                // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function BattlePassS25UI.BattlePassScreenS25.OnSetQuestRewardsInfo
struct UBattlePassScreenS25_OnSetQuestRewardsInfo_Params
{
public:
	struct FTimespan                             DelayTimespan;                                     // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OwnedRewards;                                      // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalRewards;                                      // 0xC(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CompletedPages;                                    // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalPages;                                        // 0x14(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function BattlePassS25UI.BattlePassScreenS25.OnSetPrerequisiteInfo
struct UBattlePassScreenS25_OnSetPrerequisiteInfo_Params
{
public:
	class FText                                  Description;                                       // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        CurrentAmount;                                     // 0x18(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NeededAmount;                                      // 0x1C(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBattlePassRewardPrerequisiteType PrerequisiteType;                                  // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowPrerequisiteLock;                             // 0x21(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7DF7[0x6];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function BattlePassS25UI.BattlePassScreenS25.OnSetItemPrice
struct UBattlePassScreenS25_OnSetItemPrice_Params
{
public:
	int32                                        Cost;                                              // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBattlePassCurrencyType           CurrencyType;                                      // 0x4(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7DF8[0x3];                                     // Fixing Size Of Struct..
};

// 0x58 (0x58 - 0x0)
// Function BattlePassS25UI.BattlePassScreenS25.OnSetCrewInfo
struct UBattlePassScreenS25_OnSetCrewInfo_Params
{
public:
	bool                                         bIsNextMonthRewards;                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7DF9[0x7];                                     // Fixing Size After Last Property..
	class FText                                  MonthText;                                         // 0x8(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FTimespan                             NextMonthlyRewardTimespan;                         // 0x20(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  CharacterDisplayName;                              // 0x28(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  CharacterDescription;                              // 0x40(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function BattlePassS25UI.BattlePassScreenS25.OnSetCoverPageData
struct UBattlePassScreenS25_OnSetCoverPageData_Params
{
public:
	class FText                                  Title;                                             // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x18(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bPageComplete;                                     // 0x30(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7DFA[0x7];                                     // Fixing Size Of Struct..
};

// 0x1C (0x1C - 0x0)
// Function BattlePassS25UI.BattlePassScreenS25.OnSetBonusRewardsInfo
struct UBattlePassScreenS25_OnSetBonusRewardsInfo_Params
{
public:
	bool                                         bIsUnlocked;                                       // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7DFB[0x3];                                     // Fixing Size After Last Property..
	int32                                        OwnedRewards;                                      // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalRewards;                                      // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CompletedPages;                                    // 0xC(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalPages;                                        // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ClaimedOutfits;                                    // 0x14(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalOutfits;                                      // 0x18(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function BattlePassS25UI.BattlePassScreenS25.OnSetBaseRewardsInfo
struct UBattlePassScreenS25_OnSetBaseRewardsInfo_Params
{
public:
	int32                                        OwnedRewards;                                      // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalRewards;                                      // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CompletedPages;                                    // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalPages;                                        // 0xC(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function BattlePassS25UI.BattlePassScreenS25.OnItemDelayed
struct UBattlePassScreenS25_OnItemDelayed_Params
{
public:
	struct FTimespan                             Delay;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function BattlePassS25UI.BattlePassScreenS25.OnInsufficientResource
struct UBattlePassScreenS25_OnInsufficientResource_Params
{
public:
	class UFortPersistentResourceItemDefinition* PersistentResource;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function BattlePassS25UI.BattlePassScreenS25.OnInsufficientFunds
struct UBattlePassScreenS25_OnInsufficientFunds_Params
{
public:
	enum class EBattlePassCurrencyType           CurrencyType;                                      // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function BattlePassS25UI.BattlePassScreenS25.OnBattlePassOwned
struct UBattlePassScreenS25_OnBattlePassOwned_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function BattlePassS25UI.BattlePassScreenS25.OnBattlePassGiftingAllowed
struct UBattlePassScreenS25_OnBattlePassGiftingAllowed_Params
{
public:
	bool                                         bGiftingAllowed;                                   // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function BattlePassS25UI.BattlePassScreenS25.IsSeasonalCustomizationItemOwned
struct UBattlePassScreenS25_IsSeasonalCustomizationItemOwned_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function BattlePassS25UI.BattlePassScreenS25.HandleSwitcherVisibilityShown
struct UBattlePassScreenS25_HandleSwitcherVisibilityShown_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function BattlePassS25UI.BattlePassScreenS25.HandleFullScreenMapToggled
struct UBattlePassScreenS25_HandleFullScreenMapToggled_Params
{
public:
	bool                                         bMapVisible;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function BattlePassS25UI.BattlePassScreenS25.HandleClaimRewardComplete
struct UBattlePassScreenS25_HandleClaimRewardComplete_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7DFC[0x7];                                     // Fixing Size After Last Property..
	TArray<class FString>                        OfferTemplateIdList;                               // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function BattlePassS25UI.BattlePassScreenS25.GoBackOneScreen
struct UBattlePassScreenS25_GoBackOneScreen_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function BattlePassS25UI.BattlePassScreenS25.GetQuestPageDelay
struct UBattlePassScreenS25_GetQuestPageDelay_Params
{
public:
	struct FTimespan                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function BattlePassS25UI.FortBattlePassResourcesWidgetS25.OnStylePointsRewardsSet
struct UFortBattlePassResourcesWidgetS25_OnStylePointsRewardsSet_Params
{
public:
	int32                                        Rewards;                                           // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function BattlePassS25UI.FortBattlePassResourcesWidgetS25.OnBattleStarRewardsSet
struct UFortBattlePassResourcesWidgetS25_OnBattleStarRewardsSet_Params
{
public:
	int32                                        Rewards;                                           // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function BattlePassS25UI.FortBattlePassTutorialTooltipS25.ShowTooltip
struct UFortBattlePassTutorialTooltipS25_ShowTooltip_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function BattlePassS25UI.FortBattlePassTutorialTooltipS25.SetText
struct UFortBattlePassTutorialTooltipS25_SetText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function BattlePassS25UI.FortBattlePassTutorialTooltipS25.HideTooltip
struct UFortBattlePassTutorialTooltipS25_HideTooltip_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
