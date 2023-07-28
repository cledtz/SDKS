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
// Function AudioClustersRuntime.AudioClusterBehavior.OnStop
struct UAudioClusterBehavior_OnStop_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AudioClustersRuntime.AudioClusterBehavior.OnStart
struct UAudioClusterBehavior_OnStart_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function AudioClustersRuntime.AudioClusterBehavior.OnSizeUpdated
struct UAudioClusterBehavior_OnSizeUpdated_Params
{
public:
	int32                                        Size;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AudioClustersRuntime.AudioClusterBehavior.OnPositionUpdated
struct UAudioClusterBehavior_OnPositionUpdated_Params
{
public:
	struct FVector                               Position;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AudioClustersRuntime.AudioClusterBehavior.OnActorRemoved
struct UAudioClusterBehavior_OnActorRemoved_Params
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AudioClustersRuntime.AudioClusterBehavior.OnActorAdded
struct UAudioClusterBehavior_OnActorAdded_Params
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AudioClustersRuntime.AudioClustersSubsystem.UpdateClusters
struct UAudioClustersSubsystem_UpdateClusters_Params
{
public:
	float                                        DeltaTimeSeconds;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AudioClustersRuntime.AudioClustersSubsystem.Unregister
struct UAudioClustersSubsystem_Unregister_Params
{
public:
	struct FAudioClusterActorInfo                ActorInfo;                                         // 0x0(0xC)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E27[0x3];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function AudioClustersRuntime.AudioClustersSubsystem.SetParam
struct UAudioClustersSubsystem_SetParam_Params
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E28[0x4];                                     // Fixing Size After Last Property..
	double                                       Value;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E29[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function AudioClustersRuntime.AudioClustersSubsystem.SetListenerPosition
struct UAudioClustersSubsystem_SetListenerPosition_Params
{
public:
	struct FVector                               InListenerPosition;                                // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AudioClustersRuntime.AudioClustersSubsystem.RemoveConfigMap
struct UAudioClustersSubsystem_RemoveConfigMap_Params
{
public:
	class UAudioClusterConfigMap*                Map;                                               // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E2A[0x7];                                     // Fixing Size Of Struct..
};

// 0x30 (0x30 - 0x0)
// Function AudioClustersRuntime.AudioClustersSubsystem.RegisterOneShot
struct UAudioClustersSubsystem_RegisterOneShot_Params
{
public:
	struct FAudioClusterOneShotInfo              OneShotInfo;                                       // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E2B[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function AudioClustersRuntime.AudioClustersSubsystem.Register
struct UAudioClustersSubsystem_Register_Params
{
public:
	struct FAudioClusterActorInfo                ActorInfo;                                         // 0x0(0xC)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E2C[0x3];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function AudioClustersRuntime.AudioClustersSubsystem.AddConfigMap
struct UAudioClustersSubsystem_AddConfigMap_Params
{
public:
	class UAudioClusterConfigMap*                Map;                                               // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E2D[0x7];                                     // Fixing Size Of Struct..
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
