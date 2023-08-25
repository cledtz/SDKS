#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x350 - 0x330)
// Class FNE_VolumeRuntime.FNE_Volume
class UFNE_Volume : public UGameplayVolume
{
public:
	TSoftClassPtr<class UPlayspace>              NewPlayspaceClassTemplate;                         // 0x330(0x20)(Transient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFNE_Volume* GetDefaultObj();

};

// 0x78 (0x118 - 0xA0)
// Class FNE_VolumeRuntime.FNE_VolumeComponent
class UFNE_VolumeComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnPlayspaceUserAdded;                              // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPlayspaceUserRemoved;                            // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPlayerStateBeginOverlap;                         // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPlayerStateEndOverlap;                           // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TSubclassOf<class UActor>                    VolumeClassTemplate;                               // 0xE0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftClassPtr<class UPlayspace>              PlayspaceClassTemplate;                            // 0xE8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFNE_Volume*                           SpawnedVolume;                                     // 0x108(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableOverlap;                                    // 0x110(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4371[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFNE_VolumeComponent* GetDefaultObj();

	void SetEnableOverlap(bool bEnable);
	void HandlePlayspaceUserRemoved(struct FPlayspaceUser& RemovedUser);
	void HandlePlayspaceUserAdded(struct FPlayspaceUser& AddedUser);
	void HandleNotifyPlayerStateEndOverlap(class UPlayerState* TouchingPlayerState, class UGameplayVolume* Volume);
	void HandleNotifyPlayerStateBeginOverlap(class UPlayerState* TouchingPlayerState, class UGameplayVolume* Volume);
	class UFNE_Volume* GetSpawnedVolume();
	bool GetEnableOverlap();
	TArray<class UPlayerState*> GetAllPlayerStates();
};

}


