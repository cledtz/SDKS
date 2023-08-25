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
// Function MIDIDevice.MIDIDeviceManager.ShutDownAllMIDIDevices
struct UMIDIDeviceManager_ShutDownAllMIDIDevices_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function MIDIDevice.MIDIDeviceManager.GetMIDIOutputDeviceIDByName
struct UMIDIDeviceManager_GetMIDIOutputDeviceIDByName_Params
{
public:
	class FString                                DeviceName;                                        // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DeviceID;                                          // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_293E[0x4];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function MIDIDevice.MIDIDeviceManager.GetMIDIInputDeviceIDByName
struct UMIDIDeviceManager_GetMIDIInputDeviceIDByName_Params
{
public:
	class FString                                DeviceName;                                        // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DeviceID;                                          // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2946[0x4];                                     // Fixing Size Of Struct
};

// 0x4 (0x4 - 0x0)
// Function MIDIDevice.MIDIDeviceManager.GetDefaultMIDIOutputDeviceID
struct UMIDIDeviceManager_GetDefaultMIDIOutputDeviceID_Params
{
public:
	int32                                        DeviceID;                                          // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MIDIDevice.MIDIDeviceManager.GetDefaultMIDIInputDeviceID
struct UMIDIDeviceManager_GetDefaultMIDIInputDeviceID_Params
{
public:
	int32                                        DeviceID;                                          // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MIDIDevice.MIDIDeviceManager.FindMIDIDevices
struct UMIDIDeviceManager_FindMIDIDevices_Params
{
public:
	TArray<struct FFoundMIDIDevice>              OutMIDIDevices;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function MIDIDevice.MIDIDeviceManager.FindAllMIDIDeviceInfo
struct UMIDIDeviceManager_FindAllMIDIDeviceInfo_Params
{
public:
	TArray<struct FMIDIDeviceInfo>               OutMIDIInputDevices;                               // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMIDIDeviceInfo>               OutMIDIOutputDevices;                              // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceOutputController
struct UMIDIDeviceManager_CreateMIDIDeviceOutputController_Params
{
public:
	int32                                        DeviceID;                                          // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2960[0x4];                                     // Fixing Size After Last Property 
	class UMIDIDeviceOutputController*           ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceInputController
struct UMIDIDeviceManager_CreateMIDIDeviceInputController_Params
{
public:
	int32                                        DeviceID;                                          // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MIDIBufferSize;                                    // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMIDIDeviceInputController*            ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceController
struct UMIDIDeviceManager_CreateMIDIDeviceController_Params
{
public:
	int32                                        DeviceID;                                          // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MIDIBufferSize;                                    // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMIDIDeviceController*                 ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MIDIDevice.MIDIDeviceOutputController.SendMIDIProgramChange
struct UMIDIDeviceOutputController_SendMIDIProgramChange_Params
{
public:
	int32                                        Channel;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProgramNumber;                                     // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MIDIDevice.MIDIDeviceOutputController.SendMIDIPitchBend
struct UMIDIDeviceOutputController_SendMIDIPitchBend_Params
{
public:
	int32                                        Channel;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Pitch;                                             // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function MIDIDevice.MIDIDeviceOutputController.SendMIDINoteOn
struct UMIDIDeviceOutputController_SendMIDINoteOn_Params
{
public:
	int32                                        Channel;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Note;                                              // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Velocity;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function MIDIDevice.MIDIDeviceOutputController.SendMIDINoteOff
struct UMIDIDeviceOutputController_SendMIDINoteOff_Params
{
public:
	int32                                        Channel;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Note;                                              // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Velocity;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function MIDIDevice.MIDIDeviceOutputController.SendMIDINoteAftertouch
struct UMIDIDeviceOutputController_SendMIDINoteAftertouch_Params
{
public:
	int32                                        Channel;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Note;                                              // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Amount;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MIDIDevice.MIDIDeviceOutputController.SendMIDIEvent
struct UMIDIDeviceOutputController_SendMIDIEvent_Params
{
public:
	enum class EMIDIEventType                    EventType;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_299A[0x3];                                     // Fixing Size After Last Property 
	int32                                        Channel;                                           // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Data1;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Data2;                                             // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function MIDIDevice.MIDIDeviceOutputController.SendMIDIControlChange
struct UMIDIDeviceOutputController_SendMIDIControlChange_Params
{
public:
	int32                                        Channel;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Type;                                              // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MIDIDevice.MIDIDeviceOutputController.SendMIDIChannelAftertouch
struct UMIDIDeviceOutputController_SendMIDIChannelAftertouch_Params
{
public:
	int32                                        Channel;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Amount;                                            // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


