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

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayUI.FortGameplayCinematicWidget.OnStartCinematic
struct UFortGameplayCinematicWidget_OnStartCinematic_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayUI.FortGameplayCinematicWidget.OnCinematicFinished
struct UFortGameplayCinematicWidget_OnCinematicFinished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayUI.FortGameplayIntroPanelWidget.OnWaitingForReadyForGameplay
struct UFortGameplayIntroPanelWidget_OnWaitingForReadyForGameplay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayUI.FortGameplayIntroPanelWidget.OnWaitingForPawn
struct UFortGameplayIntroPanelWidget_OnWaitingForPawn_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayUI.FortGameplayIntroPanelWidget.OnWaitingForMinTime
struct UFortGameplayIntroPanelWidget_OnWaitingForMinTime_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayUI.FortGameplayIntroPanelWidget.OnStartIntro
struct UFortGameplayIntroPanelWidget_OnStartIntro_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayUI.FortGameplayIntroPanelWidget.OnIntroFinished
struct UFortGameplayIntroPanelWidget_OnIntroFinished_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function SpecialEventGameplayUI.SpecialEventCursorWidget.OnViewportLocationChanged
struct USpecialEventCursorWidget_OnViewportLocationChanged_Params
{
public:
	class USpecialEventCursorPawnComponent*      InCursorPawnComponent;                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             NormalizedLocation;                                // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ViewportLocation;                                  // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SpecialEventGameplayUI.SpecialEventCursorWidget.OnDesiredVisibilityChanged
struct USpecialEventCursorWidget_OnDesiredVisibilityChanged_Params
{
public:
	class USpecialEventCursorPawnComponent*      InCursorPawnComponent;                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          CursorModeTag;                                     // 0x8(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldBeVisible;                                  // 0xC(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4711[0x3];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function SpecialEventGameplayUI.SpecialEventCursorWidget.OnCursorModeChanged
struct USpecialEventCursorWidget_OnCursorModeChanged_Params
{
public:
	class USpecialEventCursorPawnComponent*      InCursorPawnComponent;                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          NewCursorModeTag;                                  // 0x8(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          OldCursorModeTag;                                  // 0xC(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SpecialEventGameplayUI.SpecialEventCursorWidget.GetCursorModeTags
struct USpecialEventCursorWidget_GetCursorModeTags_Params
{
public:
	struct FGameplayTagContainer                 ReturnValue;                                       // 0x0(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SpecialEventGameplayUI.SpecialEventCursorWidget.BP_OnDesiredVisibilityChanged
struct USpecialEventCursorWidget_BP_OnDesiredVisibilityChanged_Params
{
public:
	class USpecialEventCursorPawnComponent*      InCursorPawnComponent;                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          CursorModeTag;                                     // 0x8(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldBeVisible;                                  // 0xC(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4720[0x3];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function SpecialEventGameplayUI.SpecialEventCursorWidget.BP_OnCursorModeChanged
struct USpecialEventCursorWidget_BP_OnCursorModeChanged_Params
{
public:
	class USpecialEventCursorPawnComponent*      InCursorPawnComponent;                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          NewCursorModeTag;                                  // 0x8(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          OldCursorModeTag;                                  // 0xC(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SpecialEventGameplayUI.SpecialEventPlayerInfoWidget.GetRepresentedPlayerState
struct USpecialEventPlayerInfoWidget_GetRepresentedPlayerState_Params
{
public:
	class UFortPlayerStateAthena*                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SpecialEventGameplayUI.SpecialEventUILibrary.HideFrontEndStateWidget
struct USpecialEventUILibrary_HideFrontEndStateWidget_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNewlyHidden;                                      // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4749[0x7];                                     // Fixing Size Of Struct
};

}
}


