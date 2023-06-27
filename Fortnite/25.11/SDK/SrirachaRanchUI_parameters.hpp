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

// 0x40 (0x40 - 0x0)
// Function SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio.HandleRadioStopped
struct UFortMobileActionButtonBehavior_ToggleRadio_HandleRadioStopped_Params
{
public:
	class UStreamingRadioPlayerComponent*        Radio;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAthenaRadioStation                   Source;                                            // 0x8(0x38)(Parm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio.HandleRadioPlaying
struct UFortMobileActionButtonBehavior_ToggleRadio_HandleRadioPlaying_Params
{
public:
	class UStreamingRadioPlayerComponent*        Radio;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAthenaRadioStation                   Source;                                            // 0x8(0x38)(Parm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SrirachaRanchUI.RadioPlayerWidgetBase.SetControllable
struct URadioPlayerWidgetBase_SetControllable_Params
{
public:
	bool                                         bCanControl;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function SrirachaRanchUI.RadioPlayerWidgetBase.OnSourcePlaying
struct URadioPlayerWidgetBase_OnSourcePlaying_Params
{
public:
	class UStreamingRadioPlayerComponent*        Radio;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAthenaRadioStation                   Source;                                            // 0x8(0x38)(Parm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function SrirachaRanchUI.RadioPlayerWidgetBase.OnSourceFinished
struct URadioPlayerWidgetBase_OnSourceFinished_Params
{
public:
	class UStreamingRadioPlayerComponent*        Radio;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAthenaRadioStation                   Source;                                            // 0x8(0x38)(Parm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SrirachaRanchUI.RadioPlayerWidgetBase.OnShouldShowDueToEntrance
struct URadioPlayerWidgetBase_OnShouldShowDueToEntrance_Params
{
public:
};

// 0x40 (0x40 - 0x0)
// Function SrirachaRanchUI.RadioPlayerWidgetBase.OnRadioStopped
struct URadioPlayerWidgetBase_OnRadioStopped_Params
{
public:
	class UStreamingRadioPlayerComponent*        Radio;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAthenaRadioStation                   LastSource;                                        // 0x8(0x38)(Parm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function SrirachaRanchUI.RadioPlayerWidgetBase.OnLoadingNewSource
struct URadioPlayerWidgetBase_OnLoadingNewSource_Params
{
public:
	class UStreamingRadioPlayerComponent*        Radio;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAthenaRadioStation                   Source;                                            // 0x8(0x38)(Parm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function SrirachaRanchUI.RadioPlayerWidgetBase.OnFailedToOpenSource
struct URadioPlayerWidgetBase_OnFailedToOpenSource_Params
{
public:
	class UStreamingRadioPlayerComponent*        Radio;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAthenaRadioStation                   Source;                                            // 0x8(0x38)(Parm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SrirachaRanchUI.RadioPlayerWidgetBase.OnDisconnectFromComp
struct URadioPlayerWidgetBase_OnDisconnectFromComp_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SrirachaRanchUI.RadioPlayerWidgetBase.OnControllerGainedNewFortPawn
struct URadioPlayerWidgetBase_OnControllerGainedNewFortPawn_Params
{
public:
	class AFortPawn*                             FortPawn;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SrirachaRanchUI.RadioPlayerWidgetBase.NativeExitedVehicle
struct URadioPlayerWidgetBase_NativeExitedVehicle_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SrirachaRanchUI.RadioPlayerWidgetBase.NativeEnteredVehicle
struct URadioPlayerWidgetBase_NativeEnteredVehicle_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
