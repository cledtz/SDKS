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

// 0x8 (0x30 - 0x28)
// Class AudioClustersRuntime.AudioClusterConfig
class UAudioClusterConfig : public UObject
{
public:
	class UAudioClusterBehavior*                 Behavior;                                          // 0x28(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioClusterConfig");
		return Clss;
	}

};

// 0x50 (0x78 - 0x28)
// Class AudioClustersRuntime.AudioClusterConfigMap
class UAudioClusterConfigMap : public UObject
{
public:
	TMap<struct FGameplayTag, class UAudioClusterConfig*> TagConfigMap;                                      // 0x28(0x50)(Edit, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioClusterConfigMap");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class AudioClustersRuntime.AudioClusterBehavior
class UAudioClusterBehavior : public UObject
{
public:
	uint8                                        Pad_7E26[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioClusterBehavior");
		return Clss;
	}

	void OnStop();
	void OnStart();
	void OnSizeUpdated(int32 Size);
	void OnPositionUpdated(struct FVector& Position);
	void OnActorRemoved(class UActor* Actor);
	void OnActorAdded(class UActor* Actor);
};

// 0x8 (0x38 - 0x30)
// Class AudioClustersRuntime.AudioClustersSubsystem
class UAudioClustersSubsystem : public UWorldSubsystem
{
public:
	uint8                                        Pad_7E2E[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioClustersSubsystem");
		return Clss;
	}

	void UpdateClusters(float DeltaTimeSeconds);
	bool Unregister(struct FAudioClusterActorInfo& ActorInfo);
	bool SetParam(struct FGameplayTag& Tag, double Value);
	void SetListenerPosition(struct FVector& InListenerPosition);
	bool RemoveConfigMap(class UAudioClusterConfigMap* Map);
	bool RegisterOneShot(struct FAudioClusterOneShotInfo& OneShotInfo);
	bool Register(struct FAudioClusterActorInfo& ActorInfo);
	bool AddConfigMap(class UAudioClusterConfigMap* Map);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
