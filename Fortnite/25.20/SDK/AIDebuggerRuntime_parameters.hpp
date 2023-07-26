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

// 0x10 (0x10 - 0x0)
// Function AIDebuggerRuntime.AIDebuggerCheatManager.StartAIDebugger
struct UAIDebuggerCheatManager_StartAIDebugger_Params
{
public:
	class FString                                AIDebuggerSoftClassPath;                           // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function AIDebuggerRuntime.AIDebuggerCheatManager.NextNavMesh
struct UAIDebuggerCheatManager_NextNavMesh_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function AIDebuggerRuntime.AIDebuggerCheatManager.EnableNavMeshVisualizer
struct UAIDebuggerCheatManager_EnableNavMeshVisualizer_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function AIDebuggerRuntime.FortControllerComponent_AIDebugger.VisualizeNextNavMesh
struct UFortControllerComponent_AIDebugger_VisualizeNextNavMesh_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function AIDebuggerRuntime.FortControllerComponent_AIDebugger.VisualizeNavMeshID
struct UFortControllerComponent_AIDebugger_VisualizeNavMeshID_Params
{
public:
	int32                                        NavMeshID;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function AIDebuggerRuntime.FortControllerComponent_AIDebugger.SetVisualizationEnable
struct UFortControllerComponent_AIDebugger_SetVisualizationEnable_Params
{
public:
	enum class EAIDebuggerVisualization          VisualizationType;                                 // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnable;                                           // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function AIDebuggerRuntime.FortControllerComponent_AIDebugger.OnRep_EnabledVisualizers
struct UFortControllerComponent_AIDebugger_OnRep_EnabledVisualizers_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function AIDebuggerRuntime.FortControllerComponent_AIDebugger.OnPlayerExitedIsland
struct UFortControllerComponent_AIDebugger_OnPlayerExitedIsland_Params
{
public:
	struct FEventMessageTag                      Channel;                                           // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1328[0x4];                                     // Fixing Size After Last Property..
	struct FPlayerExitSpatialActorContextWithPawn PlayerExitSpatialActorContext;                     // 0x8(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function AIDebuggerRuntime.FortControllerComponent_AIDebugger.IsVisualizationEnabled
struct UFortControllerComponent_AIDebugger_IsVisualizationEnabled_Params
{
public:
	enum class EAIDebuggerVisualization          VisualizationType;                                 // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AIDebuggerRuntime.FortControllerComponent_AIDebugger.GetOrCreateRenderer
struct UFortControllerComponent_AIDebugger_GetOrCreateRenderer_Params
{
public:
	class UAIDebuggerRendererComponent*          ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
