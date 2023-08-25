#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xD8 - 0xA8)
// Class AmbientAudio.AmbientAudioComponent
class UAmbientAudioComponent : public UAudioGameplayComponent
{
public:
	uint8                                        Pad_22F3[0x8];                                     // Fixing Size After Last Property 
	class UAmbientAudioDataAsset*                AmbientAsset;                                      // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        Priority;                                          // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CrossfadeTime;                                     // 0xBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGuid                                 AmbientGuid;                                       // 0xC0(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  DisplayName;                                       // 0xD0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_22F6[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAmbientAudioComponent* GetDefaultObj();

	void SetPriority(int32 InPriority);
	void SetCrossfadeTime(float InCrossfadeTime);
	void SetAmbientAsset(class UAmbientAudioDataAsset* InAmbientAsset);
};

// 0x28 (0x58 - 0x30)
// Class AmbientAudio.AmbientAudioDataAsset
class UAmbientAudioDataAsset : public UDataAsset
{
public:
	TArray<struct FAmbientAudioLoop>             LoopingSounds;                                     // 0x30(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FAmbientAudioOneShot>          OneShotSounds;                                     // 0x40(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                        TagCrossfadeTime;                                  // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22F9[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAmbientAudioDataAsset* GetDefaultObj();

};

// 0x228 (0x258 - 0x30)
// Class AmbientAudio.AmbientAudioSubsystem
class UAmbientAudioSubsystem : public UWorldSubsystem
{
public:
	uint8                                        Pad_2315[0x8];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnTagChanged;                                      // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnEntryChanged;                                    // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class UAmbientAudioComponent*>        AmbientComponents;                                 // 0x58(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UAmbientAudioParameterActor*           ParameterActor;                                    // 0x68(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2316[0x1E8];                                   // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAmbientAudioSubsystem* GetDefaultObj();

	void RemoveGameplayTag(const struct FGameplayTag& GameplayTag);
	void RemoveAmbientEntry(class FName AmbientName, float CrossfadeOverride);
	class UAudioParameterComponent* GetAudioParameterComponent();
	void AddGameplayTag(const struct FGameplayTag& GameplayTag);
	void AddAmbientEntry(class FName AmbientName, class UAmbientAudioDataAsset* Asset, int32 Priority, float CrossfadeTime);
};

// 0x8 (0x298 - 0x290)
// Class AmbientAudio.AmbientAudioParameterActor
class UAmbientAudioParameterActor : public UActor
{
public:
	class UAudioParameterComponent*              Parameters;                                        // 0x290(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAmbientAudioParameterActor* GetDefaultObj();

};

}


