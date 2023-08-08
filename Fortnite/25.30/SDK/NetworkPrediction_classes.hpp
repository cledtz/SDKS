#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1F0 (0x290 - 0xA0)
// Class NetworkPrediction.NetworkPredictionComponent
class UNetworkPredictionComponent : public UActorComponent
{
public:
	struct FNetworkPredictionProxy               NetworkPredictionProxy;                            // 0xA0(0xB0)(Net, Transient, Protected, NativeAccessSpecifierProtected)
	struct FReplicationProxy                     ReplicationProxy_ServerRPC;                        // 0x150(0x50)(Protected, NativeAccessSpecifierProtected)
	struct FReplicationProxy                     ReplicationProxy_Autonomous;                       // 0x1A0(0x50)(Net, Transient, NativeAccessSpecifierPrivate)
	struct FReplicationProxy                     ReplicationProxy_Simulated;                        // 0x1F0(0x50)(Net, Transient, NativeAccessSpecifierPrivate)
	struct FReplicationProxy                     ReplicationProxy_Replay;                           // 0x240(0x50)(Net, Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NetworkPredictionComponent");
		return Clss;
	}

	void ServerReceiveClientInput(struct FServerReplicationRPCParameter& ProxyParameter);
};

// 0x120 (0x1C0 - 0xA0)
// Class NetworkPrediction.NetworkPredictionPhysicsComponent
class UNetworkPredictionPhysicsComponent : public UActorComponent
{
public:
	struct FNetworkPredictionProxy               NetworkPredictionProxy;                            // 0xA0(0xB0)(Net, Transient, Protected, NativeAccessSpecifierProtected)
	class UPrimitiveComponent*                   UpdatedPrimitive;                                  // 0x150(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_24[0x8];                                       // Fixing Size After Last Property
	struct FReplicationProxy                     ReplicationProxy;                                  // 0x160(0x50)(Net, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_25[0x10];                                      // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NetworkPredictionPhysicsComponent");
		return Clss;
	}

};

// 0x10 (0x2A0 - 0x290)
// Class NetworkPrediction.NetworkPredictionReplicatedManager
class UNetworkPredictionReplicatedManager : public UActor
{
public:
	struct FSharedPackageMap                     SharedPackageMap;                                  // 0x290(0x10)(Net, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NetworkPredictionReplicatedManager");
		return Clss;
	}

};

// 0x40 (0x68 - 0x28)
// Class NetworkPrediction.NetworkPredictionSettingsObject
class UNetworkPredictionSettingsObject : public UObject
{
public:
	struct FNetworkPredictionSettings            Settings;                                          // 0x28(0x30)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FNetworkPredictionDevHUD>      DevHUDs;                                           // 0x58(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NetworkPredictionSettingsObject");
		return Clss;
	}

};

// 0x640 (0x670 - 0x30)
// Class NetworkPrediction.NetworkPredictionWorldManager
class UNetworkPredictionWorldManager : public UWorldSubsystem
{
public:
	class UNetworkPredictionReplicatedManager*   ReplicatedManager;                                 // 0x30(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D[0x638];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NetworkPredictionWorldManager");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
