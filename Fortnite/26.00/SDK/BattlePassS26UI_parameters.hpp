#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// Function BattlePassS26UI.BattlePassLandingPageS26.OnBattlePassSubscriptionAllowed
struct UBattlePassLandingPageS26_OnBattlePassSubscriptionAllowed_Params
{
public:
	bool                                         bSubscriptionAllowed;                              // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function BattlePassS26UI.BattlePassRewardPageS26.OnPageChanged
struct UBattlePassRewardPageS26_OnPageChanged_Params
{
public:
	int32                                        PageNumber;                                        // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RewardPageTotal;                                   // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function BattlePassS26UI.BattlePassRewardPageS26.OnLoadingScreenSelectedChanged
struct UBattlePassRewardPageS26_OnLoadingScreenSelectedChanged_Params
{
public:
	bool                                         bIsSelected;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function BattlePassS26UI.BattlePassRewardPageS26.OnInputMethodChanged
struct UBattlePassRewardPageS26_OnInputMethodChanged_Params
{
public:
	enum class ECommonInputType                  InputType;                                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function BattlePassS26UI.BattlePassRewardPageS26.OnInitForPageType
struct UBattlePassRewardPageS26_OnInitForPageType_Params
{
public:
	enum class ERewardPageType                   InRewardPageType;                                  // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function BattlePassS26UI.BattlePassRewardPageS26.HandleRewardTracksBoundaryNavigation
struct UBattlePassRewardPageS26_HandleRewardTracksBoundaryNavigation_Params
{
public:
	enum class EUINavigation                     InNavigation;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3473[0x7];                                     // Fixing Size After Last Property 
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function BattlePassS26UI.BattlePassRewardPageS26.GetRewardPageBackgroundData
struct UBattlePassRewardPageS26_GetRewardPageBackgroundData_Params
{
public:
	struct FVaultWorldBackgroundData             ReturnValue;                                       // 0x0(0x58)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function BattlePassS26UI.BattlePassScreenS26.OverviewShowAnimationFinished
struct UBattlePassScreenS26_OverviewShowAnimationFinished_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function BattlePassS26UI.BattlePassScreenS26.OnUpdateStatusBar
struct UBattlePassScreenS26_OnUpdateStatusBar_Params
{
public:
	class FText                                  StatusText;                                        // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	enum class EBattlePassStatusBarTypeS26       BarType;                                           // 0x18(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_349E[0x7];                                     // Fixing Size Of Struct
};

// 0x1 (0x1 - 0x0)
// Function BattlePassS26UI.BattlePassScreenS26.OnUpdateBattlePassRequiredBar
struct UBattlePassScreenS26_OnUpdateBattlePassRequiredBar_Params
{
public:
	bool                                         bPassRequiredVisible;                              // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function BattlePassS26UI.BattlePassScreenS26.OnTransitionItemDetails
struct UBattlePassScreenS26_OnTransitionItemDetails_Params
{
public:
	bool                                         bTransitionForward;                                // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function BattlePassS26UI.BattlePassScreenS26.OnSetWeeklyRewardsInfo
struct UBattlePassScreenS26_OnSetWeeklyRewardsInfo_Params
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
// Function BattlePassS26UI.BattlePassScreenS26.OnSetResourcePrice
struct UBattlePassScreenS26_OnSetResourcePrice_Params
{
public:
	int32                                        Cost;                                              // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34B4[0x4];                                     // Fixing Size After Last Property 
	class UFortPersistentResourceItemDefinition* PersistentResource;                                // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function BattlePassS26UI.BattlePassScreenS26.OnSetQuestRewardsInfo
struct UBattlePassScreenS26_OnSetQuestRewardsInfo_Params
{
public:
	struct FTimespan                             DelayTimespan;                                     // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OwnedRewards;                                      // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalRewards;                                      // 0xC(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CompletedPages;                                    // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalPages;                                        // 0x14(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function BattlePassS26UI.BattlePassScreenS26.OnSetPrerequisiteInfo
struct UBattlePassScreenS26_OnSetPrerequisiteInfo_Params
{
public:
	class FText                                  Description;                                       // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        CurrentAmount;                                     // 0x18(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NeededAmount;                                      // 0x1C(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBattlePassRewardPrerequisiteType PrerequisiteType;                                  // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowPrerequisiteLock;                             // 0x21(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34CB[0x6];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function BattlePassS26UI.BattlePassScreenS26.OnSetItemPrice
struct UBattlePassScreenS26_OnSetItemPrice_Params
{
public:
	int32                                        Cost;                                              // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBattlePassCurrencyType           CurrencyType;                                      // 0x4(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34D6[0x3];                                     // Fixing Size Of Struct
};

// 0x58 (0x58 - 0x0)
// Function BattlePassS26UI.BattlePassScreenS26.OnSetCrewInfo
struct UBattlePassScreenS26_OnSetCrewInfo_Params
{
public:
	bool                                         bIsNextMonthRewards;                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34DA[0x7];                                     // Fixing Size After Last Property 
	class FText                                  MonthText;                                         // 0x8(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FTimespan                             NextMonthlyRewardTimespan;                         // 0x20(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  CharacterDisplayName;                              // 0x28(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  CharacterDescription;                              // 0x40(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function BattlePassS26UI.BattlePassScreenS26.OnSetCoverPageData
struct UBattlePassScreenS26_OnSetCoverPageData_Params
{
public:
	class FText                                  Title;                                             // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x18(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bPageComplete;                                     // 0x30(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34E0[0x7];                                     // Fixing Size Of Struct
};

// 0x1C (0x1C - 0x0)
// Function BattlePassS26UI.BattlePassScreenS26.OnSetBonusRewardsInfo
struct UBattlePassScreenS26_OnSetBonusRewardsInfo_Params
{
public:
	bool                                         bIsUnlocked;                                       // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34EF[0x3];                                     // Fixing Size After Last Property 
	int32                                        OwnedRewards;                                      // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalRewards;                                      // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CompletedPages;                                    // 0xC(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalPages;                                        // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ClaimedOutfits;                                    // 0x14(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalOutfits;                                      // 0x18(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function BattlePassS26UI.BattlePassScreenS26.OnSetBaseRewardsInfo
struct UBattlePassScreenS26_OnSetBaseRewardsInfo_Params
{
public:
	int32                                        OwnedRewards;                                      // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalRewards;                                      // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CompletedPages;                                    // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalPages;                                        // 0xC(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function BattlePassS26UI.BattlePassScreenS26.OnItemDelayed
struct UBattlePassScreenS26_OnItemDelayed_Params
{
public:
	struct FTimespan                             Delay;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function BattlePassS26UI.BattlePassScreenS26.OnInsufficientResource
struct UBattlePassScreenS26_OnInsufficientResource_Params
{
public:
	class UFortPersistentResourceItemDefinition* PersistentResource;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function BattlePassS26UI.BattlePassScreenS26.OnInsufficientFunds
struct UBattlePassScreenS26_OnInsufficientFunds_Params
{
public:
	enum class EBattlePassCurrencyType           CurrencyType;                                      // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function BattlePassS26UI.BattlePassScreenS26.OnBattlePassOwned
struct UBattlePassScreenS26_OnBattlePassOwned_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function BattlePassS26UI.BattlePassScreenS26.OnBattlePassGiftingAllowed
struct UBattlePassScreenS26_OnBattlePassGiftingAllowed_Params
{
public:
	bool                                         bGiftingAllowed;                                   // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function BattlePassS26UI.BattlePassScreenS26.IsSeasonalCustomizationItemOwned
struct UBattlePassScreenS26_IsSeasonalCustomizationItemOwned_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function BattlePassS26UI.BattlePassScreenS26.HandleSwitcherVisibilityShown
struct UBattlePassScreenS26_HandleSwitcherVisibilityShown_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function BattlePassS26UI.BattlePassScreenS26.HandleFullScreenMapToggled
struct UBattlePassScreenS26_HandleFullScreenMapToggled_Params
{
public:
	bool                                         bMapVisible;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function BattlePassS26UI.BattlePassScreenS26.HandleClaimRewardComplete
struct UBattlePassScreenS26_HandleClaimRewardComplete_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3528[0x7];                                     // Fixing Size After Last Property 
	TArray<class FString>                        OfferTemplateIdList;                               // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function BattlePassS26UI.BattlePassScreenS26.GoBackOneScreen
struct UBattlePassScreenS26_GoBackOneScreen_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function BattlePassS26UI.BattlePassScreenS26.GetQuestPageDelay
struct UBattlePassScreenS26_GetQuestPageDelay_Params
{
public:
	struct FTimespan                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function BattlePassS26UI.FortBattlePassResourcesWidgetS26.OnStylePointsRewardsSet
struct UFortBattlePassResourcesWidgetS26_OnStylePointsRewardsSet_Params
{
public:
	int32                                        Rewards;                                           // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function BattlePassS26UI.FortBattlePassResourcesWidgetS26.OnBattleStarRewardsSet
struct UFortBattlePassResourcesWidgetS26_OnBattleStarRewardsSet_Params
{
public:
	int32                                        Rewards;                                           // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function BattlePassS26UI.FortBattlePassTutorialTooltipS26.ShowTooltip
struct UFortBattlePassTutorialTooltipS26_ShowTooltip_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function BattlePassS26UI.FortBattlePassTutorialTooltipS26.SetText
struct UFortBattlePassTutorialTooltipS26_SetText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function BattlePassS26UI.FortBattlePassTutorialTooltipS26.HideTooltip
struct UFortBattlePassTutorialTooltipS26_HideTooltip_Params
{
public:
};

}
}


