#pragma once

// Dumped with Dumper-7!


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
	uint8                                        Pad_1B92[0x4];                                     // Fixing Size Of Struct
};

}


