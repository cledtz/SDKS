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

// 0x1A0 (0x1A0 - 0x0)
// Function ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult
struct UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Params
{
public:
	struct FChaosPhysicsCollisionInfo            PhysicsCollision;                                  // 0x0(0xC0)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FHitResult                            ReturnValue;                                       // 0xC0(0xE0)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive
struct UChaosSolverActor_SetSolverActive_Params
{
public:
	bool                                         bActive;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver
struct UChaosSolverActor_SetAsCurrentWorldSolver_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
