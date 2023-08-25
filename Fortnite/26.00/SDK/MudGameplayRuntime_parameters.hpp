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

// 0x8 (0x8 - 0x0)
// Function MudGameplayRuntime.FortPawnComponent_Mud.OnSprintingTagCountChanged
struct UFortPawnComponent_Mud_OnSprintingTagCountChanged_Params
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewCount;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MudGameplayRuntime.FortPawnComponent_Mud.OnSlidingTagCountChanged
struct UFortPawnComponent_Mud_OnSlidingTagCountChanged_Params
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewCount;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function MudGameplayRuntime.FortPawnComponent_Mud.OnExitedMud
struct UFortPawnComponent_Mud_OnExitedMud_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MudGameplayRuntime.FortPawnComponent_Mud.OnEnteredMud
struct UFortPawnComponent_Mud_OnEnteredMud_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function MudGameplayRuntime.FortPawnComponent_Mud.OnCurieFireTagCountChanged
struct UFortPawnComponent_Mud_OnCurieFireTagCountChanged_Params
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewCount;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MudGameplayRuntime.FortPawnComponent_Mud.OnCreatureSprintingTagCountChanged
struct UFortPawnComponent_Mud_OnCreatureSprintingTagCountChanged_Params
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewCount;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function MudGameplayRuntime.FortPawnComponent_Mud.OnAttachedParentCoveredInMud
struct UFortPawnComponent_Mud_OnAttachedParentCoveredInMud_Params
{
public:
	struct FGameplayEventData                    Payload;                                           // 0x0(0xB0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MudGameplayRuntime.FortPawnComponent_Mud.HandleSurfaceTypeChanged
struct UFortPawnComponent_Mud_HandleSurfaceTypeChanged_Params
{
public:
	class UActor*                                SurfaceActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPhysicalSurface                  CurrentSurfaceType;                                // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPhysicalSurface                  PrevSurfaceType;                                   // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A07[0x6];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function MudGameplayRuntime.FortPawnComponent_Mud.HandleASCInitialized
struct UFortPawnComponent_Mud_HandleASCInitialized_Params
{
public:
	class UFortAbilitySystemComponent*           AbilitySystemComponent;                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPlayerPawn*                       AffectedPawn;                                      // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


