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

// 0x10 (0x10 - 0x0)
// ScriptStruct DynamicCapsuleCodeRuntime.DynamicCapsuleState
struct FDynamicCapsuleState
{
public:
	float                                        CapsuleRadius;                                     // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CapsuleHalfHeight;                                 // 0x4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       RelativeMeshHeight;                                // 0x8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct DynamicCapsuleCodeRuntime.DynamicCapsuleEntry
struct FDynamicCapsuleEntry
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x4)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42C0[0x4];                                     // Fixing Size After Last Property..
	struct FDynamicCapsuleState                  State;                                             // 0x8(0x10)(Transient, NoDestructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
