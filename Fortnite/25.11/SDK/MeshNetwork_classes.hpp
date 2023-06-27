#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x398 - 0x318)
// Class MeshNetwork.MeshBeaconClient
class AMeshBeaconClient : public AOnlineBeaconClient
{
public:
	uint8                                        Pad_3E27[0x40];                                    // Fixing Size After Last Property..
	bool                                         bConnectedToRoot;                                  // 0x358(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3E28[0x7];                                     // Fixing Size After Last Property..
	struct FDateTime                             MeshPingTime;                                      // 0x360(0x8)(Net, ZeroConstructor, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FString>                        ParentIds;                                         // 0x368(0x10)(Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected)
	class FString                                ClientId;                                          // 0x378(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3E29[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MeshBeaconClient");
		return Clss;
	}

	void ServerUpdateMultipleLevelsVisibility(TArray<struct FUpdateLevelVisibilityLevelInfo>& LevelVisibilities);
	void ServerUpdateLevelVisibility(struct FUpdateLevelVisibilityLevelInfo& LevelVisibility);
	void ServerSetClientId(const class FString& NewClientId);
	void OnRep_ParentIds();
	void OnRep_MeshPingTime();
	void OnRep_ConnectedToRoot();
};

// 0x8 (0x3D0 - 0x3C8)
// Class MeshNetwork.MeshBeaconHost
class AMeshBeaconHost : public AOnlineBeaconHost
{
public:
	int32                                        MaxConnections;                                    // 0x3C8(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3E2A[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MeshBeaconHost");
		return Clss;
	}

};

// 0x18 (0x2C8 - 0x2B0)
// Class MeshNetwork.MeshBeaconHostObject
class AMeshBeaconHostObject : public AOnlineBeaconHostObject
{
public:
	uint8                                        Pad_3E2B[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MeshBeaconHostObject");
		return Clss;
	}

};

// 0x0 (0x1E80 - 0x1E80)
// Class MeshNetwork.MeshConnection
class UMeshConnection : public UIpConnection
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MeshConnection");
		return Clss;
	}

};

// 0x18 (0x880 - 0x868)
// Class MeshNetwork.MeshNetDriver
class UMeshNetDriver : public UIpNetDriver
{
public:
	uint8                                        Pad_3E2C[0x8];                                     // Fixing Size After Last Property..
	TArray<class AActor*>                        ClientDormantDynamicActors;                        // 0x870(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MeshNetDriver");
		return Clss;
	}

};

// 0xB0 (0x150 - 0xA0)
// Class MeshNetwork.MeshNetworkComponent
class UMeshNetworkComponent : public UActorComponent
{
public:
	enum class EMeshNetworkRelevancy             MeshRelevancy;                                     // 0xA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E2D[0x7];                                     // Fixing Size After Last Property..
	TMap<class FString, struct FAggregatedFunction> AggregatedFunctions;                               // 0xA8(0x50)(Transient, NativeAccessSpecifierPrivate)
	TMap<class FName, struct FAggregatedFunctionConfig> AggregatedFunctionConfigs;                         // 0xF8(0x50)(Edit, EditConst, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E2E[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MeshNetworkComponent");
		return Clss;
	}

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
	uint8                                        Pad_3E31[0x30];                                    // Fixing Size After Last Property..
	enum class EMeshNetworkNodeType              NodeType;                                          // 0xB0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EMeshNetworkNodeType              GameServerNodeType;                                // 0xB1(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bConnectedToRoot;                                  // 0xB2(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bMetadataReceived;                                 // 0xB3(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3E32[0x54];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MeshNetworkSubsystem");
		return Clss;
	}

	void SetMetaDataWithKey(class FName Key, struct FMeshMetaDataStruct& MetaData);
	void SetMetaData(struct FMeshMetaDataStruct& MetaData);
	bool GetMetaDataWithKey(class FName Key, struct FMeshMetaDataStruct& MetaData);
	void GetMetadata(struct FMeshMetaDataStruct& MetaData);
	enum class EMeshNetworkNodeType GetMeshNetworkNodeType();
	enum class EMeshNetworkNodeType GetGameServerNodeType();
	bool GetConnectedToRoot();
	void EnableMeshReplication(class AActor* Actor, TSubclassOf<class UMeshNetworkComponent> MeshComponentClass);
	void DisableMeshReplication(class AActor* Actor);
};

// 0x0 (0x370 - 0x370)
// Class MeshNetwork.MeshReplicationGraphConnection
class UMeshReplicationGraphConnection : public UNetReplicationGraphConnection
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MeshReplicationGraphConnection");
		return Clss;
	}

};

// 0x8 (0x570 - 0x568)
// Class MeshNetwork.MeshReplicationGraph
class UMeshReplicationGraph : public UReplicationGraph
{
public:
	class UReplicationGraphNode_ActorList*       AlwaysRelevantNode;                                // 0x568(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MeshReplicationGraph");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
