#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x90 - 0x0)
// ScriptStruct AudioMotorSimStandardComponents.MotorSimGearCurve
struct FMotorSimGearCurve
{
public:
	struct FRuntimeFloatCurve                    RpmCurve;                                          // 0x0(0x88)(Edit, NativeAccessSpecifierPublic)
	float                                        SpeedTopThreshold;                                 // 0x88(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39D0[0x4];                                     // Fixing Size Of Struct
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
