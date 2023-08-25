#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x3A0 - 0x320)
// Class MeshNetwork.MeshBeaconClient
class UMeshBeaconClient : public UOnlineBeaconClient
{
public:
	uint8                                        Pad_17EB[0x40];                                    // Fixing Size After Last Property 
	bool                                         bConnectedToRoot;                                  // 0x360(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17EC[0x7];                                     // Fixing Size After Last Property 
	struct FDateTime                             MeshPingTime;                                      // 0x368(0x8)(Net, ZeroConstructor, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FString>                        ParentIds;                                         // 0x370(0x10)(Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected)
	class FString                                ClientId;                                          // 0x380(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17EF[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMeshBeaconClient* GetDefaultObj();

	void ServerUpdateMultipleLevelsVisibility(TArray<struct FUpdateLevelVisibilityLevelInfo>& LevelVisibilities);
	void ServerUpdateLevelVisibility(struct FUpdateLevelVisibilityLevelInfo& LevelVisibility);
	void ServerSetClientId(const class FString& NewClientId);
	void OnRep_ParentIds();
	void OnRep_MeshPingTime();
	void OnRep_ConnectedToRoot();
};

// 0x8 (0x3D8 - 0x3D0)
// Class MeshNetwork.MeshBeaconHost
class UMeshBeaconHost : public UOnlineBeaconHost
{
public:
	int32                                        MaxConnections;                                    // 0x3D0(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17F7[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMeshBeaconHost* GetDefaultObj();

};

// 0x18 (0x2D0 - 0x2B8)
// Class MeshNetwork.MeshBeaconHostObject
class UMeshBeaconHostObject : public UOnlineBeaconHostObject
{
public:
	uint8                                        Pad_17FD[0x18];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMeshBeaconHostObject* GetDefaultObj();

};

// 0x0 (0x1E88 - 0x1E88)
// Class MeshNetwork.MeshConnection
class UMeshConnection : public UIpConnection
{
public:

	static class UClass* StaticClass();
	static class UMeshConnection* GetDefaultObj();

};

// 0x18 (0x880 - 0x868)
// Class MeshNetwork.MeshNetDriver
class UMeshNetDriver : public UIpNetDriver
{
public:
	uint8                                        Pad_1807[0x8];                                     // Fixing Size After Last Property 
	TArray<class UActor*>                        ClientDormantDynamicActors;                        // 0x870(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMeshNetDriver* GetDefaultObj();

};

// 0xB0 (0x150 - 0xA0)
// Class MeshNetwork.MeshNetworkComponent
class UMeshNetworkComponent : public UActorComponent
{
public:
	enum class EMeshNetworkRelevancy             MeshRelevancy;                                     // 0xA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1814[0x7];                                     // Fixing Size After Last Property 
	TMap<class FString, struct FAggregatedFunction> AggregatedFunctions;                               // 0xA8(0x50)(Transient, NativeAccessSpecifierPrivate)
	TMap<class FName, struct FAggregatedFunctionConfig> AggregatedFunctionConfigs;                         // 0xF8(0x50)(Edit, EditConst, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1816[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMeshNetworkComponent* GetDefaultObj();

	bool IsConnectedToMeshRoot();
	enum class EMeshNetworkNodeType GetMeshNetworkNodeType();
};

// 0xD8 (0x108 - 0x30)
// Class MeshNetwork.MeshNetworkSubsystem
class UMeshNetworkSubsystem : public UGameInstanceSubsystem
{
public:
	FMulticastInlineDelegateProperty_            OnMeshNodeTypeChanged;                             // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnConnectedToRootChanged;                          // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnGameServerNodeTypeChanged;                       // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMeshMetaDataUpdated;                             // 0x60(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMeshPlayerRequested;                             // 0x70(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1852[0x30];                                    // Fixing Size After Last Property 
	enum class EMeshNetworkNodeType              NodeType;                                          // 0xB0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EMeshNetworkNodeType              GameServerNodeType;                                // 0xB1(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bConnectedToRoot;                                  // 0xB2(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bMetadataReceived;                                 // 0xB3(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1853[0x54];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMeshNetworkSubsystem* GetDefaultObj();

	void SetMetaDataWithKey(class FName Key, struct FMeshMetaDataStruct& MetaData);
	void SetMetaData(struct FMeshMetaDataStruct& MetaData);
	bool GetMetaDataWithKey(class FName Key, struct FMeshMetaDataStruct& MetaData);
	void GetMetadata(struct FMeshMetaDataStruct& MetaData);
	enum class EMeshNetworkNodeType GetMeshNetworkNodeType();
	enum class EMeshNetworkNodeType GetGameServerNodeType();
	bool GetConnectedToRoot();
	void EnableMeshReplication(class UActor* Actor, TSubclassOf<class UMeshNetworkComponent> MeshComponentClass);
	void DisableMeshReplication(class UActor* Actor);
};

// 0x0 (0x378 - 0x378)
// Class MeshNetwork.MeshReplicationGraphConnection
class UMeshReplicationGraphConnection : public UNetReplicationGraphConnection
{
public:

	static class UClass* StaticClass();
	static class UMeshReplicationGraphConnection* GetDefaultObj();

};

// 0x8 (0x570 - 0x568)
// Class MeshNetwork.MeshReplicationGraph
class UMeshReplicationGraph : public UReplicationGraph
{
public:
	class UReplicationGraphNode_ActorList*       AlwaysRelevantNode;                                // 0x568(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMeshReplicationGraph* GetDefaultObj();

};

}


