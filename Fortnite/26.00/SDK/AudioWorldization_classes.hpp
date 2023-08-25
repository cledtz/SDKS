#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x2E0 - 0x290)
// Class AudioWorldization.AudioWorldizationReflectionProbe
class UAudioWorldizationReflectionProbe : public UActor
{
public:
	uint8                                        Pad_1BA[0x8];                                      // Fixing Size After Last Property 
	class USubmixSendVolumeComponent*            SubmixSends;                                       // 0x298(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioGameplayVolumeComponent*         AGVComponent;                                      // 0x2A0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BE[0x38];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAudioWorldizationReflectionProbe* GetDefaultObj();

};

// 0x98 (0xC8 - 0x30)
// Class AudioWorldization.AudioWorldizationDefaultSettings
class UAudioWorldizationDefaultSettings : public UDeveloperSettings
{
public:
	struct FAudioWorldizationGlobalSettings      GlobalSettings;                                    // 0x30(0x30)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAudioWorldizationSettings            DefaultSettings;                                   // 0x60(0x58)(Edit, Config, NativeAccessSpecifierPublic)
	TArray<struct FSoftObjectPath>               ModulationParameters;                              // 0xB8(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAudioWorldizationDefaultSettings* GetDefaultObj();

};

// 0x128 (0x168 - 0x40)
// Class AudioWorldization.AudioWorldizationSubsystem
class UAudioWorldizationSubsystem : public UTickableWorldSubsystem
{
public:
	class USoundControlBus*                      EnclosureBus;                                      // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundControlBus*                      WallDistanceBus;                                   // 0x48(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundControlBus*                      ListenerAzimuthBus;                                // 0x50(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D7[0x30];                                     // Fixing Size After Last Property 
	struct FAudioWorldizationSettings            CurrentSettings;                                   // 0x88(0x58)(Transient, NativeAccessSpecifierPrivate)
	class UAudioWorldizationReflectionProbe*     VolumeActor;                                       // 0xE0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAudioWorldizationTracePolicyBase*     TracePolicy;                                       // 0xE8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAudioWorldizationTraceDirectionPolicyBase* TraceDirectionPolicy;                              // 0xF0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1DA[0x40];                                     // Fixing Size After Last Property 
	TArray<struct FAudioWorldizationSettings>    SettingsStack;                                     // 0x138(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<class USoundControlBus*>              QuadrantEnclosureBuses;                            // 0x148(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class USoundControlBus*>              QuadrantWallDistanceBuses;                         // 0x158(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAudioWorldizationSubsystem* GetDefaultObj();

	void SetWorldizationSettings(struct FAudioWorldizationSettings& InSettings);
	void SetEnabled(bool bNewEnabled);
	void SetDefaultSettings();
	void RemoveWorldizationSettings(class FName InIdentifier);
	TArray<struct FAudioSphereTraceResult> GetTraceResults();
	float GetEnclosureFactor();
	float GetAverageTraceDistance();
};

// 0x0 (0x28 - 0x28)
// Class AudioWorldization.AudioWorldizationTraceDirectionPolicyBase
class UAudioWorldizationTraceDirectionPolicyBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UAudioWorldizationTraceDirectionPolicyBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AudioWorldization.AudioWorldizationTraceDirectionPolicyDefault
class UAudioWorldizationTraceDirectionPolicyDefault : public UAudioWorldizationTraceDirectionPolicyBase
{
public:

	static class UClass* StaticClass();
	static class UAudioWorldizationTraceDirectionPolicyDefault* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AudioWorldization.AudioWorldizationTracePolicyBase
class UAudioWorldizationTracePolicyBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UAudioWorldizationTracePolicyBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AudioWorldization.AudioWorldizationTracePolicyDefault
class UAudioWorldizationTracePolicyDefault : public UAudioWorldizationTracePolicyBase
{
public:

	static class UClass* StaticClass();
	static class UAudioWorldizationTracePolicyDefault* GetDefaultObj();

};

// 0xA8 (0xD0 - 0x28)
// Class AudioWorldization.GameFeatureAction_SetAudioWorldizationSettings
class UGameFeatureAction_SetAudioWorldizationSettings : public UGameFeatureAction
{
public:
	struct FAudioWorldizationSettings            Settings;                                          // 0x28(0x58)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ED[0x50];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGameFeatureAction_SetAudioWorldizationSettings* GetDefaultObj();

};

}


