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

// 0x10 (0x18 - 0x8)
// ScriptStruct InfernoRuntime.FortCurieVoxelPropagationProperties
struct FFortCurieVoxelPropagationProperties : public FTableRowBase
{
public:
	float                                        PropagationZDirectionDownMultiplier;               // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PropagationZDirectionUpMultiplier;                 // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PropagationBaseDelay;                              // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PropagationBaseSpeed;                              // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x30 - 0x28)
// ScriptStruct InfernoRuntime.FortCurieVoxelFirePropagationManagerTickFunction
struct FFortCurieVoxelFirePropagationManagerTickFunction : public FTickFunction
{
public:
	uint8                                        Pad_8282[0x8];                                     // Fixing Size Of Struct..
};

// 0x58 (0x58 - 0x0)
// ScriptStruct InfernoRuntime.FortCurieVoxelFireParticleGrassData
struct FFortCurieVoxelFireParticleGrassData
{
public:
	uint8                                        Pad_8283[0x58];                                    // Fixing Size Of Struct..
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
