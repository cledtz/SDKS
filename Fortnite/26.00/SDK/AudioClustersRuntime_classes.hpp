#pragma once

// Dumped with Dumper-7!


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

	static class UClass* StaticClass();
	static class UAudioClusterConfig* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class AudioClustersRuntime.AudioClusterConfigMap
class UAudioClusterConfigMap : public UObject
{
public:
	TMap<struct FGameplayTag, class UAudioClusterConfig*> TagConfigMap;                                      // 0x28(0x50)(Edit, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAudioClusterConfigMap* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class AudioClustersRuntime.AudioClusterBehavior
class UAudioClusterBehavior : public UObject
{
public:
	uint8                                        Pad_2CA9[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAudioClusterBehavior* GetDefaultObj();

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
	uint8                                        Pad_2CDA[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAudioClustersSubsystem* GetDefaultObj();

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


