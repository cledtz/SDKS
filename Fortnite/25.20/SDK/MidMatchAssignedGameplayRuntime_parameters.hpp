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

// 0x0 (0x0 - 0x0)
// Function MidMatchAssignedGameplayRuntime.FortGameStateComponent_AssignedObjective.StartAssignedObjectives
struct UFortGameStateComponent_AssignedObjective_StartAssignedObjectives_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function MidMatchAssignedGameplayRuntime.FortGameStateComponent_AssignedObjective.OnAssignedObjectiveReady
struct UFortGameStateComponent_AssignedObjective_OnAssignedObjectiveReady_Params
{
public:
	struct FFortAssignedObjectiveData            ObjectiveData;                                     // 0x0(0x28)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function MidMatchAssignedGameplayRuntime.FortGameStateComponent_AssignedObjective.CalculateSquadAvgLocation
struct UFortGameStateComponent_AssignedObjective_CalculateSquadAvgLocation_Params
{
public:
	uint8                                        SquadId;                                           // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_82B6[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               WorldContextObject;                                // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
