#pragma once

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

// 0x3 (0x3 - 0x0)
// Function PictureInPictureUI.PictureInPictureBladeMenuButton.UpdatePiPStatusBP
struct UPictureInPictureBladeMenuButton_UpdatePiPStatusBP_Params
{
public:
	bool                                         LoggedIn;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Enabled;                                           // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ParentalControlsEnabled;                           // 0x2(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function PictureInPictureUI.PictureInPictureBladeMenuButton.OnPartnerListUpdated
struct UPictureInPictureBladeMenuButton_OnPartnerListUpdated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PictureInPictureUI.PictureInPictureBladeMenuButton.HandlePiPLogoutSuccess
struct UPictureInPictureBladeMenuButton_HandlePiPLogoutSuccess_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PictureInPictureUI.PictureInPictureBladeMenuButton.HandlePiPLoginSuccess
struct UPictureInPictureBladeMenuButton_HandlePiPLoginSuccess_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function PictureInPictureUI.PictureInPictureBladeMenuButton.HandlePiPEnabled
struct UPictureInPictureBladeMenuButton_HandlePiPEnabled_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function PictureInPictureUI.PictureInPictureMetadataOverlay.OnMediaStarted
struct UPictureInPictureMetadataOverlay_OnMediaStarted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PictureInPictureUI.PictureInPictureMetadataOverlay.HandleOnPIPVideoStarted
struct UPictureInPictureMetadataOverlay_HandleOnPIPVideoStarted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PictureInPictureUI.PictureInPictureMetadataOverlay.HandleOnPIPVideoResumed
struct UPictureInPictureMetadataOverlay_HandleOnPIPVideoResumed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PictureInPictureUI.PictureInPicturePanelWidget.ToggleFullScreenPiP
struct UPictureInPicturePanelWidget_ToggleFullScreenPiP_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function PictureInPictureUI.PictureInPicturePanelWidget.ShowDebugInfo
struct UPictureInPicturePanelWidget_ShowDebugInfo_Params
{
public:
	bool                                         bShow;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function PictureInPictureUI.PictureInPicturePanelWidget.SetupPIPSoundComponent
struct UPictureInPicturePanelWidget_SetupPIPSoundComponent_Params
{
public:
	struct FFortMediaEventsStreamAssets          InStreamAssets;                                    // 0x0(0x60)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function PictureInPictureUI.PictureInPicturePanelWidget.IntentionalDeactivate
struct UPictureInPicturePanelWidget_IntentionalDeactivate_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function PictureInPictureUI.PictureInPicturePanelWidget.HandleToggleFullscreenMap
struct UPictureInPicturePanelWidget_HandleToggleFullscreenMap_Params
{
public:
	bool                                         bFullscreenMapVisible;                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1E8 (0x1E8 - 0x0)
// Function PictureInPictureUI.PictureInPicturePanelWidget.HandleOnPartnerSourceChanged
struct UPictureInPicturePanelWidget_HandleOnPartnerSourceChanged_Params
{
public:
	struct FPiPPartnerSource                     InSelectedSource;                                  // 0x0(0x1E8)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function PictureInPictureUI.PictureInPicturePanelWidget.HandleOnPartnerListUpdated
struct UPictureInPicturePanelWidget_HandleOnPartnerListUpdated_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function PictureInPictureUI.PictureInPicturePanelWidget.HandleOnPartnerChanged
struct UPictureInPicturePanelWidget_HandleOnPartnerChanged_Params
{
public:
	class UPictureInPicturePartnerControls*      NewPartnerControls;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function PictureInPictureUI.PictureInPicturePanelWidget.HandleIsPictureInPictureEnabledChanged
struct UPictureInPicturePanelWidget_HandleIsPictureInPictureEnabledChanged_Params
{
public:
	bool                                         bIsPiPEnabled;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function PictureInPictureUI.PictureInPicturePanelWidget.FlipPIPAudioSubmix
struct UPictureInPicturePanelWidget_FlipPIPAudioSubmix_Params
{
public:
	bool                                         bInDefault;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3875[0x7];                                     // Fixing Size After Last Property
	struct FFortMediaEventsStreamAssets          InStreamAssets;                                    // 0x8(0x60)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bForce;                                            // 0x68(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3876[0x7];                                     // Fixing Size Of Struct
};

// 0x0 (0x0 - 0x0)
// Function PictureInPictureUI.PictureInPicturePanelWidget.DestroyPIPSoundComponent
struct UPictureInPicturePanelWidget_DestroyPIPSoundComponent_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PictureInPictureUI.PictureInPicturePanelWidget.AutoEnableController
struct UPictureInPicturePanelWidget_AutoEnableController_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function PictureInPictureUI.PictureInPictureSourcePicker.HandleOnPartnerSourceChanged
struct UPictureInPictureSourcePicker_HandleOnPartnerSourceChanged_Params
{
public:
	TArray<struct FPiPPartnerSource>             CurrentSources;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PictureInPictureUI.PictureInPictureSourcePicker.HandleOnPartnerChanged
struct UPictureInPictureSourcePicker_HandleOnPartnerChanged_Params
{
public:
	class UPictureInPicturePartnerControls*      NewPartner;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
