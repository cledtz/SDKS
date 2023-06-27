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

// 0x60 (0x100 - 0xA0)
// Class AudioMotorSim.AudioMotorModelComponent
class UAudioMotorModelComponent : public UActorComponent
{
public:
	TArray<struct FMotorSimEntry>                SimComponents;                                     // 0xA0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<FInterfaceProperty_>                  AudioComponents;                                   // 0xB0(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_109B[0x40];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioMotorModelComponent");
		return Clss;
	}

	void Update(const struct FAudioMotorSimInputContext& Input);
	void StopOutput();
	void StartOutput();
	void Reset();
	void RemoveMotorSimComponent(FInterfaceProperty_ InComponent);
	void RemoveMotorAudioComponent(FInterfaceProperty_ InComponent);
	struct FAudioMotorSimRuntimeContext GetRuntimeInfo();
	float GetRpm();
	int32 GetGear();
	struct FAudioMotorSimInputContext GetCachedInputData();
	void AddMotorSimComponent(FInterfaceProperty_ InComponent, int32 SortOrder);
	void AddMotorAudioComponent(FInterfaceProperty_ InComponent);
};

// 0x0 (0x28 - 0x28)
// Class AudioMotorSim.AudioMotorSim
class UAudioMotorSim : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioMotorSim");
		return Clss;
	}

};

// 0x8 (0xA8 - 0xA0)
// Class AudioMotorSim.AudioMotorSimComponent
class UAudioMotorSimComponent : public UActorComponent
{
public:
	uint8                                        Pad_109D[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioMotorSimComponent");
		return Clss;
	}

	bool BP_Update(struct FAudioMotorSimInputContext& Input, struct FAudioMotorSimRuntimeContext& RuntimeInfo);
	void BP_Reset();
};

// 0x0 (0x28 - 0x28)
// Class AudioMotorSim.AudioMotorSimOutput
class UAudioMotorSimOutput : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioMotorSimOutput");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
