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

// 0xD0 (0x170 - 0xA0)
// Class PointLight.PointLightNativeComponent
class UPointLightNativeComponent : public UActorComponent
{
public:
	uint8                                        Pad_81E1[0x90];                                    // Fixing Size After Last Property..
	class UTimelineComponent*                    ShortCircuitTimelineComponent;                     // 0x130(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_81E2[0x18];                                    // Fixing Size After Last Property..
	struct FLinearColor                          FlickerColor;                                      // 0x150(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShortCircuitMinDelay;                              // 0x160(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShortCircuitMaxDelay;                              // 0x164(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_81E3[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PointLightNativeComponent");
		return Clss;
	}

	void UpdateShortCircuit();
	void UpdateDeviceSettings(struct FPointLightRhythmParameters& RhythmParameters);
	void StopShortCircuitUpdate();
	void StartShortCircuitUpdate(class UTimelineComponent* ShortCircuitTimeline);
	void StartRhythmUpdate(struct FTimerHandle* TimerHandle, float Rate);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
