#pragma once

// Dumper.

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

// 0x28 (0x1B0 - 0x188)
// ScriptStruct MotorboatRuntime.MeatballInPersistent
struct FMeatballInPersistent : public FFortVehicleInPersistent
{
public:
	uint8                                        Pad_3F9D[0x18];                                    // Fixing Size After Last Property..
	class UFortMeatballVehicleConfigs*           FortMeatballVehicleConfigs;                        // 0x1A0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PushForceCurrentMultiplier;                        // 0x1A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F9E[0x4];                                     // Fixing Size Of Struct..
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
