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

// 0x0 (0x0 - 0x0)
// Function REVRuntime.REVComponent.UpdateSimSettings
struct UREVComponent_UpdateSimSettings_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function REVRuntime.REVComponent.UpdateParameters
struct UREVComponent_UpdateParameters_Params
{
public:
	float                                        InPitch;                                           // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InRPM;                                             // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InThrottle;                                        // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InVelocity;                                        // 0xC(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InGear;                                            // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInEnableShifting;                                 // 0x14(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_316B[0x3];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function REVRuntime.REVComponent.SetSettings
struct UREVComponent_SetSettings_Params
{
public:
	class URevSettings*                          InSettings;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function REVRuntime.REVComponent.SetRevModel
struct UREVComponent_SetRevModel_Params
{
public:
	class UREVModel*                             InModel;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function REVRuntime.RevSettings.UpdateSettings
struct URevSettings_UpdateSettings_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
