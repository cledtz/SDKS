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
// Function PictureInPictureCore.PictureInPictureClient.Logout
struct UPictureInPictureClient_Logout_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function PictureInPictureCore.PictureInPictureClient.IsLoggedIn
struct UPictureInPictureClient_IsLoggedIn_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PictureInPictureCore.PictureInPictureClient.GetQRCodeTexture
struct UPictureInPictureClient_GetQRCodeTexture_Params
{
public:
	class UTexture2DDynamic*                     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function PictureInPictureCore.PictureInPictureClient.GetLoginState
struct UPictureInPictureClient_GetLoginState_Params
{
public:
	enum class EPictureInPictureAuthState        ReturnValue;                                       // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PictureInPictureCore.PictureInPictureClient.GetAvatarImage
struct UPictureInPictureClient_GetAvatarImage_Params
{
public:
	class UEpicCMSImage*                         ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PictureInPictureCore.PictureInPictureClient.EndLogin
struct UPictureInPictureClient_EndLogin_Params
{
public:
	class UObject*                               InWorldContext;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PictureInPictureCore.PictureInPictureClient.CheckLogin
struct UPictureInPictureClient_CheckLogin_Params
{
public:
	class UObject*                               InWorldContext;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PictureInPictureCore.PictureInPictureClient.BeginLogin
struct UPictureInPictureClient_BeginLogin_Params
{
public:
	class UObject*                               InWorldContext;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function PictureInPictureCore.PictureInPictureCheatManager.SuspendPiP
struct UPictureInPictureCheatManager_SuspendPiP_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PictureInPictureCore.PictureInPictureCheatManager.ResumePiP
struct UPictureInPictureCheatManager_ResumePiP_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PictureInPictureCore.PictureInPictureCheatManager.PrintPiPRegionInfo
struct UPictureInPictureCheatManager_PrintPiPRegionInfo_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PictureInPictureCore.PictureInPictureCheatManager.EnablePiP
struct UPictureInPictureCheatManager_EnablePiP_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PictureInPictureCore.PictureInPictureCheatManager.DisablePiP
struct UPictureInPictureCheatManager_DisablePiP_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PictureInPictureCore.PictureInPictureCheatManager.CanEnablePartnerPIP
struct UPictureInPictureCheatManager_CanEnablePartnerPIP_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PictureInPictureCore.PictureInPictureMediaController.ToggleFullScreen
struct UPictureInPictureMediaController_ToggleFullScreen_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PictureInPictureCore.PictureInPictureMediaController.Stop
struct UPictureInPictureMediaController_Stop_Params
{
public:
};

// 0x2 (0x2 - 0x0)
// Function PictureInPictureCore.PictureInPictureMediaController.SetEnabled
struct UPictureInPictureMediaController_SetEnabled_Params
{
public:
	bool                                         bIsEnabled;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsFromUser;                                       // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x128 (0x128 - 0x0)
// Function PictureInPictureCore.PictureInPictureMediaController.SetCurrentSource
struct UPictureInPictureMediaController_SetCurrentSource_Params
{
public:
	struct FPiPPartnerSource                     SelectedSource;                                    // 0x0(0x128)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function PictureInPictureCore.PictureInPictureMediaController.Play
struct UPictureInPictureMediaController_Play_Params
{
public:
	bool                                         bForcePlay;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function PictureInPictureCore.PictureInPictureMediaController.Pause
struct UPictureInPictureMediaController_Pause_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function PictureInPictureCore.PictureInPictureMediaController.OnPrevThumbnailReceived
struct UPictureInPictureMediaController_OnPrevThumbnailReceived_Params
{
public:
	class UTexture2DDynamic*                     InTexture;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PictureInPictureCore.PictureInPictureMediaController.OnNextThumbnailReceived
struct UPictureInPictureMediaController_OnNextThumbnailReceived_Params
{
public:
	class UTexture2DDynamic*                     InTexture;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function PictureInPictureCore.PictureInPictureMediaController.OnMediaStartedAnalytics
struct UPictureInPictureMediaController_OnMediaStartedAnalytics_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PictureInPictureCore.PictureInPictureMediaController.OnMediaResumedAnalytics
struct UPictureInPictureMediaController_OnMediaResumedAnalytics_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PictureInPictureCore.PictureInPictureMediaController.OnMediaPausedAnalytics
struct UPictureInPictureMediaController_OnMediaPausedAnalytics_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PictureInPictureCore.PictureInPictureMediaController.OnMediaClosedAnalytics
struct UPictureInPictureMediaController_OnMediaClosedAnalytics_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function PictureInPictureCore.PictureInPictureMediaController.IsPlaying
struct UPictureInPictureMediaController_IsPlaying_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function PictureInPictureCore.PictureInPictureMediaController.IsPaused
struct UPictureInPictureMediaController_IsPaused_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function PictureInPictureCore.PictureInPictureMediaController.IsMultiSourceSupported
struct UPictureInPictureMediaController_IsMultiSourceSupported_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function PictureInPictureCore.PictureInPictureMediaController.IsEnabled
struct UPictureInPictureMediaController_IsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PictureInPictureCore.PictureInPictureMediaController.HandleSourceSelectedEvent
struct UPictureInPictureMediaController_HandleSourceSelectedEvent_Params
{
public:
	class FString                                SelectedSource;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PictureInPictureCore.PictureInPictureMediaController.GetValidSources
struct UPictureInPictureMediaController_GetValidSources_Params
{
public:
	TArray<struct FPiPPartnerSource>             ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PictureInPictureCore.PictureInPictureMediaController.GetSources
struct UPictureInPictureMediaController_GetSources_Params
{
public:
	TArray<struct FPiPPartnerSource>             ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// Function PictureInPictureCore.PictureInPictureMediaController.GetPlayerAssetConfig
struct UPictureInPictureMediaController_GetPlayerAssetConfig_Params
{
public:
	struct FPIPVideoPlayerAssetConfig            ReturnValue;                                       // 0x0(0x88)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PictureInPictureCore.PictureInPictureMediaController.GetMediaPlayerWidget
struct UPictureInPictureMediaController_GetMediaPlayerWidget_Params
{
public:
	class UPictureInPicturePlayer*               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// Function PictureInPictureCore.PictureInPictureMediaController.GetDefaultPlayerAssetConfig
struct UPictureInPictureMediaController_GetDefaultPlayerAssetConfig_Params
{
public:
	struct FPIPVideoPlayerAssetConfig            ReturnValue;                                       // 0x0(0x88)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x128 (0x128 - 0x0)
// Function PictureInPictureCore.PictureInPictureMediaController.GetCurrentSource
struct UPictureInPictureMediaController_GetCurrentSource_Params
{
public:
	struct FPiPPartnerSource                     ReturnValue;                                       // 0x0(0x128)(Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PictureInPictureCore.PictureInPictureMediaController.GetActions
struct UPictureInPictureMediaController_GetActions_Params
{
public:
	TArray<class UPictureInPictureActionData*>   ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function PictureInPictureCore.PictureInPictureMediaController.Exit
struct UPictureInPictureMediaController_Exit_Params
{
public:
	bool                                         bStop;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PictureInPictureCore.PictureInPicturePlayer.UpdateStreamingPlayerSize
struct UPictureInPicturePlayer_UpdateStreamingPlayerSize_Params
{
public:
	struct FVector2D                             InVector;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PictureInPictureCore.PictureInPicturePlayer.StreamedVideoOnUrlSuccess
struct UPictureInPicturePlayer_StreamedVideoOnUrlSuccess_Params
{
public:
	class FString                                URL;                                               // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PictureInPictureCore.PictureInPicturePlayer.StreamedVideoOnUrlFailure
struct UPictureInPicturePlayer_StreamedVideoOnUrlFailure_Params
{
public:
	class FString                                URL;                                               // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function PictureInPictureCore.PictureInPicturePlayer.SetPlayerAssetConfig
struct UPictureInPicturePlayer_SetPlayerAssetConfig_Params
{
public:
	struct FPIPVideoPlayerAssetConfig            InAssetConfig;                                     // 0x0(0x88)(Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x88(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_82F5[0x7];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function PictureInPictureCore.PictureInPicturePlayer.IsAssetConfigSet
struct UPictureInPicturePlayer_IsAssetConfigSet_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PictureInPictureCore.PictureInPicturePlayer.HandleUCPAudioChanged
struct UPictureInPicturePlayer_HandleUCPAudioChanged_Params
{
public:
	class UFortClientSettingsRecord*             Settings;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function PictureInPictureCore.PictureInPicturePlayer.FlushPlayerAssetConfig
struct UPictureInPicturePlayer_FlushPlayerAssetConfig_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function PictureInPictureCore.PictureInPictureSubsystem.UpdatePartnerItemList
struct UPictureInPictureSubsystem_UpdatePartnerItemList_Params
{
public:
	class UObject*                               InWorldContext;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForce;                                            // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_82FA[0x7];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function PictureInPictureCore.PictureInPictureSubsystem.ToggleFullScreenPiP
struct UPictureInPictureSubsystem_ToggleFullScreenPiP_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PictureInPictureCore.PictureInPictureSubsystem.SuspendCurrentMediaController
struct UPictureInPictureSubsystem_SuspendCurrentMediaController_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function PictureInPictureCore.PictureInPictureSubsystem.StoreLastUsedSource
struct UPictureInPictureSubsystem_StoreLastUsedSource_Params
{
public:
	class FString                                InPartnerSourceName;                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PictureInPictureCore.PictureInPictureSubsystem.StoreLastUsedPartner
struct UPictureInPictureSubsystem_StoreLastUsedPartner_Params
{
public:
	class FString                                InPartnerName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function PictureInPictureCore.PictureInPictureSubsystem.StoreAutoEnableSetting
struct UPictureInPictureSubsystem_StoreAutoEnableSetting_Params
{
public:
	bool                                         InUserEnabled;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function PictureInPictureCore.PictureInPictureSubsystem.ShutdownAllPartners
struct UPictureInPictureSubsystem_ShutdownAllPartners_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PictureInPictureCore.PictureInPictureSubsystem.ResumeCurrentMediaController
struct UPictureInPictureSubsystem_ResumeCurrentMediaController_Params
{
public:
};

// 0x128 (0x128 - 0x0)
// Function PictureInPictureCore.PictureInPictureSubsystem.OnCurrentPartnerSourceSelected
struct UPictureInPictureSubsystem_OnCurrentPartnerSourceSelected_Params
{
public:
	struct FPiPPartnerSource                     SelectedSource;                                    // 0x0(0x128)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PictureInPictureCore.PictureInPictureSubsystem.OnCMSEventValid
struct UPictureInPictureSubsystem_OnCMSEventValid_Params
{
public:
	class UMediaCMSEvent*                        ValidEvent;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PictureInPictureCore.PictureInPictureSubsystem.OnCMSEventInvalid
struct UPictureInPictureSubsystem_OnCMSEventInvalid_Params
{
public:
	class UMediaCMSEvent*                        InvalidEvent;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function PictureInPictureCore.PictureInPictureSubsystem.IsPartnerListUpdated
struct UPictureInPictureSubsystem_IsPartnerListUpdated_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function PictureInPictureCore.PictureInPictureSubsystem.HandleMediaSourceRequest
struct UPictureInPictureSubsystem_HandleMediaSourceRequest_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function PictureInPictureCore.PictureInPictureSubsystem.HandleFNEventsSetCurrentMediaControllerEnabled
struct UPictureInPictureSubsystem_HandleFNEventsSetCurrentMediaControllerEnabled_Params
{
public:
	bool                                         InEnabled;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PictureInPictureCore.PictureInPictureSubsystem.GetPartnerItemList
struct UPictureInPictureSubsystem_GetPartnerItemList_Params
{
public:
	TArray<class UPictureInPicturePartnerDataAsset*> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function PictureInPictureCore.PictureInPictureSubsystem.GetPartnerItem
struct UPictureInPictureSubsystem_GetPartnerItem_Params
{
public:
	class FString                                PartnerName;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPictureInPicturePartnerDataAsset*     ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function PictureInPictureCore.PictureInPictureSubsystem.GetPartnerControls
struct UPictureInPictureSubsystem_GetPartnerControls_Params
{
public:
	class FString                                PartnerName;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPictureInPicturePartnerControls*      ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function PictureInPictureCore.PictureInPictureSubsystem.GetPartnerController
struct UPictureInPictureSubsystem_GetPartnerController_Params
{
public:
	class FString                                PartnerName;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPictureInPictureMediaController*      ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function PictureInPictureCore.PictureInPictureSubsystem.GetPartnerClient
struct UPictureInPictureSubsystem_GetPartnerClient_Params
{
public:
	class FString                                PartnerName;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPictureInPictureClient*               ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PictureInPictureCore.PictureInPictureSubsystem.GetLastUsedSource
struct UPictureInPictureSubsystem_GetLastUsedSource_Params
{
public:
	class FString                                OutPartnerSourceName;                              // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PictureInPictureCore.PictureInPictureSubsystem.GetLastUsedPartner
struct UPictureInPictureSubsystem_GetLastUsedPartner_Params
{
public:
	class FString                                OutPartnerName;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PictureInPictureCore.PictureInPictureSubsystem.GetCurrentPartnerItem
struct UPictureInPictureSubsystem_GetCurrentPartnerItem_Params
{
public:
	class UPictureInPicturePartnerDataAsset*     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PictureInPictureCore.PictureInPictureSubsystem.GetCurrentPartnerControls
struct UPictureInPictureSubsystem_GetCurrentPartnerControls_Params
{
public:
	class UPictureInPicturePartnerControls*      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PictureInPictureCore.PictureInPictureSubsystem.GetCurrentPartnerController
struct UPictureInPictureSubsystem_GetCurrentPartnerController_Params
{
public:
	class UPictureInPictureMediaController*      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PictureInPictureCore.PictureInPictureSubsystem.GetCurrentPartnerClient
struct UPictureInPictureSubsystem_GetCurrentPartnerClient_Params
{
public:
	class UPictureInPictureClient*               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function PictureInPictureCore.PictureInPictureSubsystem.GetAutoEnableSetting
struct UPictureInPictureSubsystem_GetAutoEnableSetting_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function PictureInPictureCore.PictureInPictureSubsystem.EnableFullScreenPiPOption
struct UPictureInPictureSubsystem_EnableFullScreenPiPOption_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
