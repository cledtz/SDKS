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

// 0x4 (0x4 - 0x0)
// Function DynamicCapsuleCodeRuntime.DynamicCapsuleComponent.ServerRemoveDynamicCapsule
struct UDynamicCapsuleComponent_ServerRemoveDynamicCapsule_Params
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x4)(ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function DynamicCapsuleCodeRuntime.DynamicCapsuleComponent.ServerApplyDynamicCapsule
struct UDynamicCapsuleComponent_ServerApplyDynamicCapsule_Params
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x4)(ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CapsuleRadius;                                     // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CapsuleHalfHeight;                                 // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42B6[0x4];                                     // Fixing Size After Last Property..
	double                                       NewRelativeMeshHeight;                             // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function DynamicCapsuleCodeRuntime.DynamicCapsuleComponent.RemoveDynamicCapsule
struct UDynamicCapsuleComponent_RemoveDynamicCapsule_Params
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42B7[0x3];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function DynamicCapsuleCodeRuntime.DynamicCapsuleComponent.OnRep_ReplicatedCapsuleState
struct UDynamicCapsuleComponent_OnRep_ReplicatedCapsuleState_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function DynamicCapsuleCodeRuntime.DynamicCapsuleComponent.OnRep_DynamicCapsuleEntryStack
struct UDynamicCapsuleComponent_OnRep_DynamicCapsuleEntryStack_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function DynamicCapsuleCodeRuntime.DynamicCapsuleComponent.ApplyDynamicCapsuleWithLocationAdjust
struct UDynamicCapsuleComponent_ApplyDynamicCapsuleWithLocationAdjust_Params
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CapsuleRadius;                                     // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CapsuleHalfHeight;                                 // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42B8[0x4];                                     // Fixing Size After Last Property..
	double                                       NewRelativeMeshHeight;                             // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42B9[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function DynamicCapsuleCodeRuntime.DynamicCapsuleComponent.ApplyDynamicCapsule
struct UDynamicCapsuleComponent_ApplyDynamicCapsule_Params
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CapsuleRadius;                                     // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CapsuleHalfHeight;                                 // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42BA[0x3];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function DynamicCapsuleCodeRuntime.JumpSlideComponent.OnMovementModeChange
struct UJumpSlideComponent_OnMovementModeChange_Params
{
public:
	class ACharacter*                            Character;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovementMode                     PrevMovementMode;                                  // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        PreviousCustomMode;                                // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42BE[0x6];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function DynamicCapsuleCodeRuntime.JumpSlideComponent.OnJumpSlideStart
struct UJumpSlideComponent_OnJumpSlideStart_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function DynamicCapsuleCodeRuntime.JumpSlideComponent.OnJumpSlideEnd
struct UJumpSlideComponent_OnJumpSlideEnd_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
