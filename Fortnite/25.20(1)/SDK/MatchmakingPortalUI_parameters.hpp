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

// 0x0 (0x0 - 0x0)
// Function MatchmakingPortalUI.FortMatchmakingPortalCountdown.StartCountdown
struct UFortMatchmakingPortalCountdown_StartCountdown_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MatchmakingPortalUI.FortMatchmakingPortalCountdown.HandleCancelClicked
struct UFortMatchmakingPortalCountdown_HandleCancelClicked_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MatchmakingPortalUI.FortMatchmakingPortalCountdown.FinishTimer
struct UFortMatchmakingPortalCountdown_FinishTimer_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MatchmakingPortalUI.FortMatchmakingPortalModal.SetMatchmakingTimer
struct UFortMatchmakingPortalModal_SetMatchmakingTimer_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function MatchmakingPortalUI.FortMatchmakingPortalModal.SetMatchmakingStateText
struct UFortMatchmakingPortalModal_SetMatchmakingStateText_Params
{
public:
	class FText                                  MatchmakingStateText;                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function MatchmakingPortalUI.FortMatchmakingPortalModal.SendLinkCodeToParty
struct UFortMatchmakingPortalModal_SendLinkCodeToParty_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MatchmakingPortalUI.FortMatchmakingPortalModal.OnMatchmakingStopped
struct UFortMatchmakingPortalModal_OnMatchmakingStopped_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function MatchmakingPortalUI.FortMatchmakingPortalModal.OnMatchmakingStarted
struct UFortMatchmakingPortalModal_OnMatchmakingStarted_Params
{
public:
	class FText                                  MatchmakingState;                                  // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function MatchmakingPortalUI.FortMatchmakingPortalModal.OnAdditionalContentUpdate
struct UFortMatchmakingPortalModal_OnAdditionalContentUpdate_Params
{
public:
	class FText                                  MatchmakingState;                                  // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	float                                        Progress;                                          // 0x18(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowProgressBar;                                  // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_81C3[0x3];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function MatchmakingPortalUI.FortMatchmakingPortalModal.IsDownloadRequired
struct UFortMatchmakingPortalModal_IsDownloadRequired_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function MatchmakingPortalUI.FortMatchmakingPortalModal.HandleOnMatchmakingError
struct UFortMatchmakingPortalModal_HandleOnMatchmakingError_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function MatchmakingPortalUI.FortMatchmakingPortalModal.GetInvalidActivityReason
struct UFortMatchmakingPortalModal_GetInvalidActivityReason_Params
{
public:
	enum class EFortInvalidActivityReason        ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function MatchmakingPortalUI.FortMatchmakingPortalModal.GetCreatorTextFormat
struct UFortMatchmakingPortalModal_GetCreatorTextFormat_Params
{
public:
	class FText                                  CreatorName;                                       // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x18(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MatchmakingPortalUI.FortMatchmakingPortalModal.GetContentWarningStrings
struct UFortMatchmakingPortalModal_GetContentWarningStrings_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function MatchmakingPortalUI.FortMatchmakingPortalModal.GetCodeTextFormat
struct UFortMatchmakingPortalModal_GetCodeTextFormat_Params
{
public:
	class FText                                  IslandCode;                                        // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x18(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MatchmakingPortalUI.FortMatchmakingPortalPopup.UpdateVisuals
struct UFortMatchmakingPortalPopup_UpdateVisuals_Params
{
public:
	class UHeaderDescriptionHUDComponent*        HUDComponent;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function MatchmakingPortalUI.FortMatchmakingPortalPopup.OnShowPortalPopup
struct UFortMatchmakingPortalPopup_OnShowPortalPopup_Params
{
public:
	bool                                         bShow;                                             // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAnimate;                                          // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MatchmakingPortalUI.FortMatchmakingPortalPopup.OnPlayerCanInteractChanged
struct UFortMatchmakingPortalPopup_OnPlayerCanInteractChanged_Params
{
public:
	bool                                         bPlayerCanInteract;                                // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MatchmakingPortalUI.FortMatchmakingPortalPopup.IsInteractingDeviceAMatchmakingPortal
struct UFortMatchmakingPortalPopup_IsInteractingDeviceAMatchmakingPortal_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MatchmakingPortalUI.FortMatchmakingPortalPopup.HasActivityToShow
struct UFortMatchmakingPortalPopup_HasActivityToShow_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleWidgetUpdate
struct UFortMatchmakingPortalPopup_HandleWidgetUpdate_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleStartedRespawn
struct UFortMatchmakingPortalPopup_HandleStartedRespawn_Params
{
public:
	class UFortPlayerControllerZone*             PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleOnPortalDetailsVisibilityCheck
struct UFortMatchmakingPortalPopup_HandleOnPortalDetailsVisibilityCheck_Params
{
public:
	bool                                         bShowWidget;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleLoadScreenChanged
struct UFortMatchmakingPortalPopup_HandleLoadScreenChanged_Params
{
public:
	class UFortPlayerControllerAthena*           PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLoadScreenEnabled;                                // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_81C5[0x7];                                     // Fixing Size After Last Property..
	class FText                                  HUDReason;                                         // 0x10(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleHUDShow
struct UFortMatchmakingPortalPopup_HandleHUDShow_Params
{
public:
	bool                                         bShow;                                             // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldAnimate;                                    // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleFinishedCountdown
struct UFortMatchmakingPortalPopup_HandleFinishedCountdown_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function MatchmakingPortalUI.FortMatchmakingPortalPopup.GetMatchmakingFeedbackWidget
struct UFortMatchmakingPortalPopup_GetMatchmakingFeedbackWidget_Params
{
public:
	class UCommonActivatableWidget*              MatchmakingFeedbackContainer;                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAthenaCreativeMatchmakingWidget*  ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function MatchmakingPortalUI.FortMatchmakingPortalPopup.GetIslandData
struct UFortMatchmakingPortalPopup_GetIslandData_Params
{
public:
	struct FMatchmakingPortalPopupData           OutIslandData;                                     // 0x0(0x60)(Parm, OutParm, NativeAccessSpecifierPublic)
	class UHeaderDescriptionHUDComponent*        HUDComponent;                                      // 0x60(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x68(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_81C6[0x7];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function MatchmakingPortalUI.FortMatchmakingPortalPopup.BindOverlapEvents
struct UFortMatchmakingPortalPopup_BindOverlapEvents_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function MatchmakingPortalUI.FortModalBackground.OnPreviewImageChanged
struct UFortModalBackground_OnPreviewImageChanged_Params
{
public:
	bool                                         bIsLoading;                                        // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_81C9[0x7];                                     // Fixing Size After Last Property..
	class UTexture*                              InTexture;                                         // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
