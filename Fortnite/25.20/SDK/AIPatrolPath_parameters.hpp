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
// Function AIPatrolPath.AIPatrolPathComponent.UpdateEditorComponent
struct UAIPatrolPathComponent_UpdateEditorComponent_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function AIPatrolPath.AIPatrolPathComponent.ShouldRenderPath
struct UAIPatrolPathComponent_ShouldRenderPath_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AIPatrolPath.AIPatrolPathComponent.SetRenderPath
struct UAIPatrolPathComponent_SetRenderPath_Params
{
public:
	bool                                         bRenderPath;                                       // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AIPatrolPath.AIPatrolPathComponent.SetPatrolPathGroup
struct UAIPatrolPathComponent_SetPatrolPathGroup_Params
{
public:
	enum class EFortCreativePatrolPathGroup      PatrolPathGroup;                                   // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AIPatrolPath.AIPatrolPathComponent.SetPatrolPathEnabled
struct UAIPatrolPathComponent_SetPatrolPathEnabled_Params
{
public:
	bool                                         bIsEnabled;                                        // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AIPatrolPath.AIPatrolPathComponent.SetPatrollingMode
struct UAIPatrolPathComponent_SetPatrollingMode_Params
{
public:
	enum class EPatrollingMode                   NewMode;                                           // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function AIPatrolPath.AIPatrolPathComponent.RequestRenderPath
struct UAIPatrolPathComponent_RequestRenderPath_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AIPatrolPath.AIPatrolPathComponent.RenderToNextPoint
struct UAIPatrolPathComponent_RenderToNextPoint_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AIPatrolPath.AIPatrolPathComponent.RenderToNextAndPreviousPoint
struct UAIPatrolPathComponent_RenderToNextAndPreviousPoint_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function AIPatrolPath.AIPatrolPathComponent.RemovePoint
struct UAIPatrolPathComponent_RemovePoint_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AIPatrolPath.AIPatrolPathComponent.PropagatePatrolPathPointIndexToDevice
struct UAIPatrolPathComponent_PropagatePatrolPathPointIndexToDevice_Params
{
public:
	int32                                        NewPatrolPathPointIndex;                           // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AIPatrolPath.AIPatrolPathComponent.PropagatePatrolPathIndexToDevice
struct UAIPatrolPathComponent_PropagatePatrolPathIndexToDevice_Params
{
public:
	int32                                        NewPatrolPathIndex;                                // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function AIPatrolPath.AIPatrolPathComponent.PostFinishSpawningActor
struct UAIPatrolPathComponent_PostFinishSpawningActor_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function AIPatrolPath.AIPatrolPathComponent.PatrolPointReached
struct UAIPatrolPathComponent_PatrolPointReached_Params
{
public:
	class AFortAthenaPatrolPoint*                PathPoint;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AAIController*                         Instigator;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AIPatrolPath.AIPatrolPathComponent.PatrolPointFailedToReach
struct UAIPatrolPathComponent_PatrolPointFailedToReach_Params
{
public:
	class AFortAthenaPatrolPoint*                PathPoint;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AAIController*                         Instigator;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AIPatrolPath.AIPatrolPathComponent.PatrolPathStopped
struct UAIPatrolPathComponent_PatrolPathStopped_Params
{
public:
	class AAIController*                         Instigator;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AIPatrolPath.AIPatrolPathComponent.PatrolPathStarted
struct UAIPatrolPathComponent_PatrolPathStarted_Params
{
public:
	class AAIController*                         Instigator;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function AIPatrolPath.AIPatrolPathComponent.OnPatrolPathActorAssigned
struct UAIPatrolPathComponent_OnPatrolPathActorAssigned_Params
{
public:
};

// 0x2 (0x2 - 0x0)
// Function AIPatrolPath.AIPatrolPathComponent.OnPathExtremitiesChanged
struct UAIPatrolPathComponent_OnPathExtremitiesChanged_Params
{
public:
	bool                                         bIsStart;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsEnd;                                            // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function AIPatrolPath.AIPatrolPathComponent.OnAnyPropertyChanged
struct UAIPatrolPathComponent_OnAnyPropertyChanged_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function AIPatrolPath.AIPatrolPathComponent.NotifyEditorUserOptionChanged
struct UAIPatrolPathComponent_NotifyEditorUserOptionChanged_Params
{
public:
	TArray<class FString>                        UserOptions;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AIPatrolPath.AIPatrolPathComponent.HasValidPatrolPath
struct UAIPatrolPathComponent_HasValidPatrolPath_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AIPatrolPath.AIPatrolPathComponent.GetPatrolPathPointIndexFromDevice
struct UAIPatrolPathComponent_GetPatrolPathPointIndexFromDevice_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AIPatrolPath.AIPatrolPathComponent.GetPatrolPathPointIndex
struct UAIPatrolPathComponent_GetPatrolPathPointIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AIPatrolPath.AIPatrolPathComponent.GetPatrolPathPoint
struct UAIPatrolPathComponent_GetPatrolPathPoint_Params
{
public:
	int32                                        InPatrolPathIndex;                                 // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InPatrolPathPointIndex;                            // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAIPatrolPathComponent*                ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AIPatrolPath.AIPatrolPathComponent.GetPatrolPathIndexFromDevice
struct UAIPatrolPathComponent_GetPatrolPathIndexFromDevice_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AIPatrolPath.AIPatrolPathComponent.GetPatrolPathIndex
struct UAIPatrolPathComponent_GetPatrolPathIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AIPatrolPath.AIPatrolPathComponent.GetPatrolPathGroup
struct UAIPatrolPathComponent_GetPatrolPathGroup_Params
{
public:
	enum class EFortCreativePatrolPathGroup      ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AIPatrolPath.AIPatrolPathComponent.GetPatrollingMode
struct UAIPatrolPathComponent_GetPatrollingMode_Params
{
public:
	enum class EPatrollingMode                   ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AIPatrolPath.AIPatrolPathComponent.GetPatrolFilterOptions
struct UAIPatrolPathComponent_GetPatrolFilterOptions_Params
{
public:
	TSubclassOf<class UNavigationQueryFilter>    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AIPatrolPath.AIPatrolPathComponent.GetNextAvailablePatrolPathIndex
struct UAIPatrolPathComponent_GetNextAvailablePatrolPathIndex_Params
{
public:
	int32                                        NextAvailableIndex;                                // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40D5[0x3];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function AIPatrolPath.AIPatrolPathComponent.GetLinkedPatrolPoints
struct UAIPatrolPathComponent_GetLinkedPatrolPoints_Params
{
public:
	TArray<class UAIPatrolPathComponent*>        ReturnValue;                                       // 0x0(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function AIPatrolPath.AIPatrolPathComponent.GeneratePathPoints
struct UAIPatrolPathComponent_GeneratePathPoints_Params
{
public:
	enum class EFortCreativePatrolPathGroup      PatrolPathGroup;                                   // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGenerationCausedByDuplication;                    // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AIPatrolPath.AIPatrolPathComponent.CanNextPointBeReached
struct UAIPatrolPathComponent_CanNextPointBeReached_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
