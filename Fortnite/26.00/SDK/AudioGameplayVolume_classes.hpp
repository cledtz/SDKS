#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xB0 - 0xA8)
// Class AudioGameplayVolume.AudioGameplayVolumeMutator
class UAudioGameplayVolumeMutator : public UAudioGameplayComponent
{
public:
	int32                                        Priority;                                          // 0xA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_25B8[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAudioGameplayVolumeMutator* GetDefaultObj();

	void SetPriority(int32 InPriority);
};

// 0x10 (0xC0 - 0xB0)
// Class AudioGameplayVolume.AttenuationVolumeComponent
class UAttenuationVolumeComponent : public UAudioGameplayVolumeMutator
{
public:
	float                                        ExteriorVolume;                                    // 0xB0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        ExteriorTime;                                      // 0xB4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        InteriorVolume;                                    // 0xB8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        InteriorTime;                                      // 0xBC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAttenuationVolumeComponent* GetDefaultObj();

	void SetInteriorVolume(float Volume, float InterpolateTime);
	void SetExteriorVolume(float Volume, float InterpolateTime);
};

// 0x30 (0x2F8 - 0x2C8)
// Class AudioGameplayVolume.AudioGameplayVolume
class UAudioGameplayVolume : public UVolume
{
public:
	class UAudioGameplayVolumeComponent*         AGVComponent;                                      // 0x2C8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bEnabled;                                          // 0x2D0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_25DC[0x7];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnListenerEnterEvent;                              // 0x2D8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnListenerExitEvent;                               // 0x2E8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAudioGameplayVolume* GetDefaultObj();

	void SetEnabled(bool bEnable);
	void OnRep_bEnabled();
	void OnListenerExit();
	void OnListenerEnter();
};

// 0x28 (0xD0 - 0xA8)
// Class AudioGameplayVolume.AudioGameplayVolumeComponent
class UAudioGameplayVolumeComponent : public UAudioGameplayComponent
{
public:
	FMulticastInlineDelegateProperty_            OnProxyEnter;                                      // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnProxyExit;                                       // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UAudioGameplayVolumeProxy*             Proxy;                                             // 0xC8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAudioGameplayVolumeComponent* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class AudioGameplayVolume.AudioGameplayVolumeComponentBase
class UAudioGameplayVolumeComponentBase : public UAudioGameplayComponent
{
public:
	uint8                                        Pad_25ED[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAudioGameplayVolumeComponentBase* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class AudioGameplayVolume.AudioGameplayVolumeProxy
class UAudioGameplayVolumeProxy : public UObject
{
public:
	uint8                                        Pad_25F1[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAudioGameplayVolumeProxy* GetDefaultObj();

};

// 0x8 (0x50 - 0x48)
// Class AudioGameplayVolume.AGVPrimitiveComponentProxy
class UAGVPrimitiveComponentProxy : public UAudioGameplayVolumeProxy
{
public:
	uint8                                        Pad_25F2[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAGVPrimitiveComponentProxy* GetDefaultObj();

};

// 0x8 (0x50 - 0x48)
// Class AudioGameplayVolume.AGVConditionProxy
class UAGVConditionProxy : public UAudioGameplayVolumeProxy
{
public:
	uint8                                        Pad_25F6[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAGVConditionProxy* GetDefaultObj();

};

// 0x128 (0x158 - 0x30)
// Class AudioGameplayVolume.AudioGameplayVolumeSubsystem
class UAudioGameplayVolumeSubsystem : public UAudioEngineSubsystem
{
public:
	uint8                                        Pad_25F8[0x8];                                     // Fixing Size After Last Property 
	TMap<uint32, class UAudioGameplayVolumeComponent*> AGVComponents;                                     // 0x38(0x50)(ExportObject, Transient, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_25F9[0xD0];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAudioGameplayVolumeSubsystem* GetDefaultObj();

};

// 0x10 (0xC0 - 0xB0)
// Class AudioGameplayVolume.FilterVolumeComponent
class UFilterVolumeComponent : public UAudioGameplayVolumeMutator
{
public:
	float                                        ExteriorLPF;                                       // 0xB0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        ExteriorLPFTime;                                   // 0xB4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        InteriorLPF;                                       // 0xB8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        InteriorLPFTime;                                   // 0xBC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFilterVolumeComponent* GetDefaultObj();

	void SetInteriorLPF(float Volume, float InterpolateTime);
	void SetExteriorLPF(float Volume, float InterpolateTime);
};

// 0x20 (0xD0 - 0xB0)
// Class AudioGameplayVolume.ReverbVolumeComponent
class UReverbVolumeComponent : public UAudioGameplayVolumeMutator
{
public:
	struct FReverbSettings                       ReverbSettings;                                    // 0xB0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UReverbVolumeComponent* GetDefaultObj();

	void SetReverbSettings(struct FReverbSettings& NewReverbSettings);
};

// 0x10 (0xC0 - 0xB0)
// Class AudioGameplayVolume.SubmixOverrideVolumeComponent
class USubmixOverrideVolumeComponent : public UAudioGameplayVolumeMutator
{
public:
	TArray<struct FAudioVolumeSubmixOverrideSettings> SubmixOverrideSettings;                            // 0xB0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USubmixOverrideVolumeComponent* GetDefaultObj();

	void SetSubmixOverrideSettings(TArray<struct FAudioVolumeSubmixOverrideSettings>& NewSubmixOverrideSettings);
};

// 0x10 (0xC0 - 0xB0)
// Class AudioGameplayVolume.SubmixSendVolumeComponent
class USubmixSendVolumeComponent : public UAudioGameplayVolumeMutator
{
public:
	TArray<struct FAudioVolumeSubmixSendSettings> SubmixSendSettings;                                // 0xB0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USubmixSendVolumeComponent* GetDefaultObj();

	void SetSubmixSendSettings(TArray<struct FAudioVolumeSubmixSendSettings>& NewSubmixSendSettings);
};

}


