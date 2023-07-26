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
// Function FallTeleportationRuntime.FortFallTeleportSpawnerComponent.HandleWarmupCountdownEndTimeUpdated
struct UFortFallTeleportSpawnerComponent_HandleWarmupCountdownEndTimeUpdated_Params
{
public:
	float                                        NewEndTime;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FallTeleportationRuntime.FortFallTeleportSpawnerComponent.HandleGamePhaseChanged
struct UFortFallTeleportSpawnerComponent_HandleGamePhaseChanged_Params
{
public:
	struct FFortGamePhaseUpdatedEvent            Event;                                             // 0x0(0x1)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function FallTeleportationRuntime.FortFallTeleportCheatManager.EnableFallTeleportationIndefinitely
struct UFortFallTeleportCheatManager_EnableFallTeleportationIndefinitely_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function FallTeleportationRuntime.FortFallTeleportComponentBase.UpdateLastGroundLocation
struct UFortFallTeleportComponentBase_UpdateLastGroundLocation_Params
{
public:
	class ACharacter*                            Character;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovementMode                     PrevMovementMode;                                  // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        PreviousCustomMode;                                // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_820D[0x6];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function FallTeleportationRuntime.FortFallTeleportComponentBase.IsValidActorToTeleportOn
struct UFortFallTeleportComponentBase_IsValidActorToTeleportOn_Params
{
public:
	class AActor*                                ActorToTeleportOn;                                 // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_820E[0x7];                                     // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// Function FallTeleportationRuntime.FortFallTeleportComponentBase.IsTeleportLocationValid
struct UFortFallTeleportComponentBase_IsTeleportLocationValid_Params
{
public:
	struct FVector                               LocationToTest;                                    // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_820F[0x7];                                     // Fixing Size Of Struct..
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
