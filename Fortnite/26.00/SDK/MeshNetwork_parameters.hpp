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

// 0x10 (0x10 - 0x0)
// Function MeshNetwork.MeshBeaconClient.ServerUpdateMultipleLevelsVisibility
struct UMeshBeaconClient_ServerUpdateMultipleLevelsVisibility_Params
{
public:
	TArray<struct FUpdateLevelVisibilityLevelInfo> LevelVisibilities;                                 // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MeshNetwork.MeshBeaconClient.ServerUpdateLevelVisibility
struct UMeshBeaconClient_ServerUpdateLevelVisibility_Params
{
public:
	struct FUpdateLevelVisibilityLevelInfo       LevelVisibility;                                   // 0x0(0x10)(ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MeshNetwork.MeshBeaconClient.ServerSetClientId
struct UMeshBeaconClient_ServerSetClientId_Params
{
public:
	class FString                                NewClientId;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function MeshNetwork.MeshBeaconClient.OnRep_ParentIds
struct UMeshBeaconClient_OnRep_ParentIds_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MeshNetwork.MeshBeaconClient.OnRep_MeshPingTime
struct UMeshBeaconClient_OnRep_MeshPingTime_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MeshNetwork.MeshBeaconClient.OnRep_ConnectedToRoot
struct UMeshBeaconClient_OnRep_ConnectedToRoot_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function MeshNetwork.MeshNetworkComponent.IsConnectedToMeshRoot
struct UMeshNetworkComponent_IsConnectedToMeshRoot_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MeshNetwork.MeshNetworkComponent.GetMeshNetworkNodeType
struct UMeshNetworkComponent_GetMeshNetworkNodeType_Params
{
public:
	enum class EMeshNetworkNodeType              ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MeshNetwork.MeshNetworkSubsystem.SetMetaDataWithKey
struct UMeshNetworkSubsystem_SetMetaDataWithKey_Params
{
public:
	class FName                                  Key;                                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMeshMetaDataStruct                   MetaData;                                          // 0x4(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_181A[0x3];                                     // Fixing Size Of Struct
};

// 0x1 (0x1 - 0x0)
// Function MeshNetwork.MeshNetworkSubsystem.SetMetaData
struct UMeshNetworkSubsystem_SetMetaData_Params
{
public:
	struct FMeshMetaDataStruct                   MetaData;                                          // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MeshNetwork.MeshNetworkSubsystem.GetMetaDataWithKey
struct UMeshNetworkSubsystem_GetMetaDataWithKey_Params
{
public:
	class FName                                  Key;                                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMeshMetaDataStruct                   MetaData;                                          // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_182F[0x2];                                     // Fixing Size Of Struct
};

// 0x1 (0x1 - 0x0)
// Function MeshNetwork.MeshNetworkSubsystem.GetMetadata
struct UMeshNetworkSubsystem_GetMetadata_Params
{
public:
	struct FMeshMetaDataStruct                   MetaData;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MeshNetwork.MeshNetworkSubsystem.GetMeshNetworkNodeType
struct UMeshNetworkSubsystem_GetMeshNetworkNodeType_Params
{
public:
	enum class EMeshNetworkNodeType              ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MeshNetwork.MeshNetworkSubsystem.GetGameServerNodeType
struct UMeshNetworkSubsystem_GetGameServerNodeType_Params
{
public:
	enum class EMeshNetworkNodeType              ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MeshNetwork.MeshNetworkSubsystem.GetConnectedToRoot
struct UMeshNetworkSubsystem_GetConnectedToRoot_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MeshNetwork.MeshNetworkSubsystem.EnableMeshReplication
struct UMeshNetworkSubsystem_EnableMeshReplication_Params
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UMeshNetworkComponent>     MeshComponentClass;                                // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MeshNetwork.MeshNetworkSubsystem.DisableMeshReplication
struct UMeshNetworkSubsystem_DisableMeshReplication_Params
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


