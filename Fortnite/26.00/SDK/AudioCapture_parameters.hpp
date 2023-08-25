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
// Function AudioCapture.AudioCapture.StopCapturingAudio
struct UAudioCapture_StopCapturingAudio_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AudioCapture.AudioCapture.StartCapturingAudio
struct UAudioCapture_StartCapturingAudio_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function AudioCapture.AudioCapture.IsCapturingAudio
struct UAudioCapture_IsCapturingAudio_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo
struct UAudioCapture_GetAudioCaptureDeviceInfo_Params
{
public:
	struct FAudioCaptureDeviceInfo               OutInfo;                                           // 0x0(0xC)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ADE[0x3];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture
struct UAudioCaptureFunctionLibrary_CreateAudioCapture_Params
{
public:
	class UAudioCapture*                         ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AudioCapture.AudioCaptureBlueprintLibrary.GetAvailableAudioInputDevices
struct UAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnObtainDevicesEvent;                              // 0x8(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AF9[0x4];                                     // Fixing Size Of Struct
};

// 0x40 (0x40 - 0x0)
// Function AudioCapture.AudioCaptureBlueprintLibrary.Conv_AudioInputDeviceInfoToString
struct UAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Params
{
public:
	struct FAudioInputDeviceInfo                 Info;                                              // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x30(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


