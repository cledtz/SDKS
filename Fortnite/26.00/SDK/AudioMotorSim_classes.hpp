#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x100 - 0xA0)
// Class AudioMotorSim.AudioMotorModelComponent
class UAudioMotorModelComponent : public UActorComponent
{
public:
	TArray<struct FMotorSimEntry>                SimComponents;                                     // 0xA0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<TScriptInterface<class UAudioMotorSimOutput>> AudioComponents;                                   // 0xB0(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_60F[0x40];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAudioMotorModelComponent* GetDefaultObj();

	void Update(const struct FAudioMotorSimInputContext& Input);
	void StopOutput();
	void StartOutput();
	void Reset();
	void RemoveMotorSimComponent(TScriptInterface<class UAudioMotorSim> InComponent);
	void RemoveMotorAudioComponent(TScriptInterface<class UAudioMotorSimOutput> InComponent);
	struct FAudioMotorSimRuntimeContext GetRuntimeInfo();
	float GetRpm();
	int32 GetGear();
	struct FAudioMotorSimInputContext GetCachedInputData();
	void AddMotorSimComponent(TScriptInterface<class UAudioMotorSim> InComponent, int32 SortOrder);
	void AddMotorAudioComponent(TScriptInterface<class UAudioMotorSimOutput> InComponent);
};

// 0x0 (0x28 - 0x28)
// Class AudioMotorSim.AudioMotorSim
class UAudioMotorSim : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UAudioMotorSim* GetDefaultObj();

	void Reset();
};

// 0x8 (0xA8 - 0xA0)
// Class AudioMotorSim.AudioMotorSimComponent
class UAudioMotorSimComponent : public UActorComponent
{
public:
	uint8                                        Pad_615[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAudioMotorSimComponent* GetDefaultObj();

	bool BP_Update(struct FAudioMotorSimInputContext& Input, struct FAudioMotorSimRuntimeContext& RuntimeInfo);
	void BP_Reset();
};

// 0x0 (0x28 - 0x28)
// Class AudioMotorSim.AudioMotorSimOutput
class UAudioMotorSimOutput : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UAudioMotorSimOutput* GetDefaultObj();

};

}


