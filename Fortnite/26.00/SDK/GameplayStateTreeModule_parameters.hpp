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

// 0x1 (0x1 - 0x0)
// Function GameplayStateTreeModule.StateTreeComponent.SetStartLogicAutomatically
struct UStateTreeComponent_SetStartLogicAutomatically_Params
{
public:
	bool                                         bInStartLogicAutomatically;                        // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GameplayStateTreeModule.StateTreeComponent.SendStateTreeEvent
struct UStateTreeComponent_SendStateTreeEvent_Params
{
public:
	struct FStateTreeEvent                       Event;                                             // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GameplayStateTreeModule.StateTreeComponent.GetStateTreeRunStatus
struct UStateTreeComponent_GetStateTreeRunStatus_Params
{
public:
	enum class EStateTreeRunStatus               ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


