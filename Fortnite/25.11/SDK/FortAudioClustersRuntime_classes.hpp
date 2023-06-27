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

// 0x50 (0x80 - 0x30)
// Class FortAudioClustersRuntime.FortAudioClustersSettings
class UFortAudioClustersSettings : public UDeveloperSettings
{
public:
	TMap<struct FGameplayTag, double>            ParameterDefaults;                                 // 0x30(0x50)(Edit, Config, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAudioClustersSettings");
		return Clss;
	}

};

// 0x0 (0x40 - 0x40)
// Class FortAudioClustersRuntime.FortAudioClustersSubsystem
class UFortAudioClustersSubsystem : public UTickableWorldSubsystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAudioClustersSubsystem");
		return Clss;
	}

};

// 0xC8 (0xF0 - 0x28)
// Class FortAudioClustersRuntime.GameFeatureAction_AddAudioCluster
class UGameFeatureAction_AddAudioCluster : public UGameFeatureAction
{
public:
	TArray<struct FGameFeatureAudioClusterEntry> Clusters;                                          // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class FName, struct FGameplayTag>       OverrideTable;                                     // 0x38(0x50)(Edit, NativeAccessSpecifierPublic)
	class FName                                  DisabledActorTag;                                  // 0x88(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F1A[0x64];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameFeatureAction_AddAudioCluster");
		return Clss;
	}

	void HandleRegisteredActorDeath(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
};

// 0x60 (0x88 - 0x28)
// Class FortAudioClustersRuntime.GameFeatureAction_AddAudioClusterConfigMaps
class UGameFeatureAction_AddAudioClusterConfigMaps : public UGameFeatureAction
{
public:
	TArray<TSoftObjectPtr<class UAudioClusterConfigMap>> ConfigMaps;                                        // 0x28(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F1B[0x50];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameFeatureAction_AddAudioClusterConfigMaps");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
