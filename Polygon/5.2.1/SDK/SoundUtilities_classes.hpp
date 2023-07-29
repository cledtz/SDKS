#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x180 - 0x168)
// Class SoundUtilities.SoundSimple
class USoundSimple : public USoundBase
{
public:
	TArray<struct FSoundVariation>               Variations;                                        // 0x168(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class USoundWave*                            SoundWave;                                         // 0x178(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SoundSimple");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class SoundUtilities.SoundUtilitiesBPFunctionLibrary
class USoundUtilitiesBPFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SoundUtilitiesBPFunctionLibrary");
		return Clss;
	}

	float GetQFromBandwidth(float InBandwidth);
	float GetPitchScaleFromMIDIPitch(int32 BaseMidiNote, int32 TargetMidiNote);
	int32 GetMIDIPitchFromFrequency(float Frequency);
	float GetLogFrequencyClamped(float InValue, struct FVector2D& InDomain, struct FVector2D& InRange);
	float GetLinearFrequencyClamped(float InValue, struct FVector2D& InDomain, struct FVector2D& InRange);
	float GetGainFromMidiVelocity(int32 InVelocity);
	float GetFrequencyMultiplierFromSemitones(float InPitchSemitones);
	float GetFrequencyFromMIDIPitch(int32 MidiNote);
	float GetBeatTempo(float BeatsPerMinute, int32 BeatMultiplier, int32 DivisionsOfWholeNote);
	float GetBandwidthFromQ(float InQ);
	float ConvertLinearToDecibels(float InLinear, float InFloor);
	float ConvertDecibelsToLinear(float InDecibels);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
