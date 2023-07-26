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
// Function KoalaUI.FortSidebarPanelKoala.OnConnectionChanged
struct UFortSidebarPanelKoala_OnConnectionChanged_Params
{
public:
	bool                                         bConnected;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function KoalaUI.KoalaHUDWidget.UnregisterClipButtonInput
struct UKoalaHUDWidget_UnregisterClipButtonInput_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function KoalaUI.KoalaHUDWidget.RegisterClipButtonInput
struct UKoalaHUDWidget_RegisterClipButtonInput_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function KoalaUI.KoalaHUDWidget.OnTouchAreaMouseDown
struct UKoalaHUDWidget_OnTouchAreaMouseDown_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function KoalaUI.KoalaHUDWidget.OnReminderTimerStarted
struct UKoalaHUDWidget_OnReminderTimerStarted_Params
{
public:
	float                                        Time;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function KoalaUI.KoalaHUDWidget.OnReminderEnded
struct UKoalaHUDWidget_OnReminderEnded_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function KoalaUI.KoalaHUDWidget.OnRecordingStatusChanged
struct UKoalaHUDWidget_OnRecordingStatusChanged_Params
{
public:
	enum class EKoalaRecording                   InRecordingStatus;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function KoalaUI.KoalaHUDWidget.OnInputProgress
struct UKoalaHUDWidget_OnInputProgress_Params
{
public:
	float                                        Progress;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function KoalaUI.KoalaHUDWidget.OnInputComplete
struct UKoalaHUDWidget_OnInputComplete_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function KoalaUI.KoalaHUDWidget.OnConnectionChanged
struct UKoalaHUDWidget_OnConnectionChanged_Params
{
public:
	enum class EKoalaConnectionStatus            InStatus;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function KoalaUI.KoalaHUDWidget.OnClipStatusChanged
struct UKoalaHUDWidget_OnClipStatusChanged_Params
{
public:
	int32                                        InClipID;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EKoalaClipStatus                  InClipStatus;                                      // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_79BD[0x3];                                     // Fixing Size After Last Property..
	float                                        InUploadProgress;                                  // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function KoalaUI.KoalaHUDWidget.OnAvailabilityChanged
struct UKoalaHUDWidget_OnAvailabilityChanged_Params
{
public:
	enum class EKoalaAvailability                Availability;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function KoalaUI.KoalaHUDWidget.HandlePlayerPawnEmoteStopped
struct UKoalaHUDWidget_HandlePlayerPawnEmoteStopped_Params
{
public:
	class UFortItemDefinition*                   MontageItemDef;                                    // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPawn*                             PawnEmoting;                                       // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function KoalaUI.KoalaHUDWidget.HandlePlayerMatchWon
struct UKoalaHUDWidget_HandlePlayerMatchWon_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function KoalaUI.KoalaHUDWidget.HandleLocalPlayerKilledPlayer
struct UKoalaHUDWidget_HandleLocalPlayerKilledPlayer_Params
{
public:
	class AFortPlayerStateAthena*                Player;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function KoalaUI.KoalaHUDWidget.HandleAthenaGamePhaseChanged
struct UKoalaHUDWidget_HandleAthenaGamePhaseChanged_Params
{
public:
	enum class EAthenaGamePhase                  GamePhase;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function KoalaUI.KoalaHUDWidget.GetUploadingClipCount
struct UKoalaHUDWidget_GetUploadingClipCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function KoalaUI.KoalaHUDWidget.GetTrackedClipCount
struct UKoalaHUDWidget_GetTrackedClipCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function KoalaUI.KoalaSettingDetailExtension.OnConnectionChanged
struct UKoalaSettingDetailExtension_OnConnectionChanged_Params
{
public:
	bool                                         bConnected;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function KoalaUI.KoalaSettingDetailExtension.OnAvailabilityChanged
struct UKoalaSettingDetailExtension_OnAvailabilityChanged_Params
{
public:
	bool                                         bAvailable;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
