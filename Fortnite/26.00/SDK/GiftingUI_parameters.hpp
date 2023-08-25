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
// Function GiftingUI.AthenaGiftingConfirmationScreen.OnPresentationModeChanged
struct UAthenaGiftingConfirmationScreen_OnPresentationModeChanged_Params
{
public:
	enum class EGiftingPresentationMode          NewMode;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GiftingUI.AthenaGiftingConfirmationScreen.HandleTokenOfferPurchaseComplete
struct UAthenaGiftingConfirmationScreen_HandleTokenOfferPurchaseComplete_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43F1[0x7];                                     // Fixing Size After Last Property 
	TArray<struct FPurchasedItemInfo>            PurchasedItems;                                    // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GiftingUI.AthenaGiftingConfirmationScreen.HandleGiftSent
struct UAthenaGiftingConfirmationScreen_HandleGiftSent_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43F5[0x7];                                     // Fixing Size After Last Property 
	TArray<class FString>                        IneligibleAccounts;                                // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class FString>                        ErrorCodes;                                        // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GiftingUI.AthenaGiftingConfirmationScreen.Dismiss
struct UAthenaGiftingConfirmationScreen_Dismiss_Params
{
public:
	bool                                         bGiftConfirmed;                                    // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GiftingUI.AthenaGiftingErrorsPanel.UpdateGiftEligibility
struct UAthenaGiftingErrorsPanel_UpdateGiftEligibility_Params
{
public:
	bool                                         bStillGiftable;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GiftingUI.AthenaGiftingPriceWidget.SetPresentationMode
struct UAthenaGiftingPriceWidget_SetPresentationMode_Params
{
public:
	enum class EGiftingPricePresentationMode     Mode;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GiftingUI.AthenaGiftingPurchasePanel.PlayIntroAnimation
struct UAthenaGiftingPurchasePanel_PlayIntroAnimation_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function GiftingUI.AthenaGiftingScreen.OnShowSearchWarningText
struct UAthenaGiftingScreen_OnShowSearchWarningText_Params
{
public:
	bool                                         bShow;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GiftingUI.AthenaGiftingScreen.OnShownItemChanged
struct UAthenaGiftingScreen_OnShownItemChanged_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function GiftingUI.AthenaGiftingScreen.OnSetupFilterTabButton
struct UAthenaGiftingScreen_OnSetupFilterTabButton_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFilterType                       FilterType;                                        // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_440F[0x7];                                     // Fixing Size Of Struct
};

// 0x1 (0x1 - 0x0)
// Function GiftingUI.AthenaGiftingScreen.OnPresentationModeChanged
struct UAthenaGiftingScreen_OnPresentationModeChanged_Params
{
public:
	enum class EGiftingScreenPresentationMode    Mode;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GiftingUI.AthenaGiftingScreen.OnPartyListUpdated
struct UAthenaGiftingScreen_OnPartyListUpdated_Params
{
public:
	bool                                         bEmpty;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GiftingUI.AthenaGiftingScreen.OnFriendSelectionChanged
struct UAthenaGiftingScreen_OnFriendSelectionChanged_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function GiftingUI.AthenaGiftingScreen.OnFilterChanged
struct UAthenaGiftingScreen_OnFilterChanged_Params
{
public:
	enum class EFilterType                       FilterType;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GiftingUI.AthenaGiftingScreen.BlockScreenContent
struct UAthenaGiftingScreen_BlockScreenContent_Params
{
public:
	bool                                         bBlockScreen;                                      // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4414[0x7];                                     // Fixing Size After Last Property 
	class FText                                  ContentBlockedText;                                // 0x8(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GiftingUI.FortGiftingSocialUserListEntry.SetPresentationMode
struct UFortGiftingSocialUserListEntry_SetPresentationMode_Params
{
public:
	enum class ERecipientPresentationMode        Mode;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GiftingUI.FortGiftingSocialUserListEntry.OnUserItemSet
struct UFortGiftingSocialUserListEntry_OnUserItemSet_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GiftingUI.FortGiftingSocialUserListEntry.OnRecipientStatusUpdated
struct UFortGiftingSocialUserListEntry_OnRecipientStatusUpdated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GiftingUI.FortGiftingSocialUserListEntry.BP_OnTouchSelectionConfirmed
struct UFortGiftingSocialUserListEntry_BP_OnTouchSelectionConfirmed_Params
{
public:
};

// 0x2 (0x2 - 0x0)
// Function GiftingUI.FortGiftingSocialUserListEntry.BP_OnHighlightedStateChanged
struct UFortGiftingSocialUserListEntry_BP_OnHighlightedStateChanged_Params
{
public:
	bool                                         bInIsHighlighted;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlayAnimation;                                    // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GiftingUI.FortGiftingUserSearchWidget.OnSearchCommit
struct UFortGiftingUserSearchWidget_OnSearchCommit_Params
{
public:
	bool                                         bSearchStringShort;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GiftingUI.FortGiftingUserSearchWidget.HandleSearchFriendsTextEntered
struct UFortGiftingUserSearchWidget_HandleSearchFriendsTextEntered_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	enum class ETextCommit                       CommitMethod;                                      // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4422[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function GiftingUI.FortGiftingUserSearchWidget.HandleSearchFriendsTextChanged
struct UFortGiftingUserSearchWidget_HandleSearchFriendsTextChanged_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GiftingUI.FortGiftingUserSearchWidget.FocusEditableText
struct UFortGiftingUserSearchWidget_FocusEditableText_Params
{
public:
};

}
}


