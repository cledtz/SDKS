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
// Function PictureInPictureFNEvents.LiveEventHUDAd.ShowAdvertisement
struct ULiveEventHUDAd_ShowAdvertisement_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager.StopPiPBouncingLlama
struct UPictureInPictureFNEventsCheatManager_StopPiPBouncingLlama_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager.StartPiPBouncingLlama
struct UPictureInPictureFNEventsCheatManager_StartPiPBouncingLlama_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager.SelectPiPEvent
struct UPictureInPictureFNEventsCheatManager_SelectPiPEvent_Params
{
public:
	class FString                                EventName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager.RemovePiPEvent
struct UPictureInPictureFNEventsCheatManager_RemovePiPEvent_Params
{
public:
	class FString                                EventName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager.ListPiPEvents
struct UPictureInPictureFNEventsCheatManager_ListPiPEvents_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager.ListAllPiPEvents
struct UPictureInPictureFNEventsCheatManager_ListAllPiPEvents_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager.AddPiPEvent
struct UPictureInPictureFNEventsCheatManager_AddPiPEvent_Params
{
public:
	class FString                                EventName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VUID;                                              // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PictureInPictureFNEvents.PictureInPictureFNEventsController.UpdateClientLoginState
struct UPictureInPictureFNEventsController_UpdateClientLoginState_Params
{
public:
	TArray<struct FPiPPartnerSource>             UpdatedSources;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function PictureInPictureFNEvents.PictureInPictureFNEventsController.OnClientLogoutSuccess
struct UPictureInPictureFNEventsController_OnClientLogoutSuccess_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PictureInPictureFNEvents.PictureInPictureFNEventsController.OnClientLoginSuccess
struct UPictureInPictureFNEventsController_OnClientLoginSuccess_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function PictureInPictureFNEvents.PictureInPictureFNEventsController.HandleFNMediaRemoveEventsStream
struct UPictureInPictureFNEventsController_HandleFNMediaRemoveEventsStream_Params
{
public:
	class FString                                InEventName;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function PictureInPictureFNEvents.PictureInPictureFNEventsController.HandleFNMediaEventsStreams
struct UPictureInPictureFNEventsController_HandleFNMediaEventsStreams_Params
{
public:
	struct FFortMediaEventsStreamAssets          VideoStreamAssets;                                 // 0x0(0x60)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function PictureInPictureFNEvents.PictureInPictureFNEventsController.ExitEvent
struct UPictureInPictureFNEventsController_ExitEvent_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function PictureInPictureFNEvents.PictureInPictureFNEventsController.AddPartnerActionAnalytics
struct UPictureInPictureFNEventsController_AddPartnerActionAnalytics_Params
{
public:
	class FString                                InPartnerName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPictureInPictureAction           InActionType;                                      // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_82BF[0x7];                                     // Fixing Size Of Struct..
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
