#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x930 - 0x900)
// Class REVRuntime.REVComponent
class UREVComponent : public USynthComponent
{
public:
	uint8                                        Pad_308D[0x8];                                     // Fixing Size After Last Property 
	class UREVModel*                             Model;                                             // 0x908(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URevSettings*                          SimSettings;                                       // 0x910(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PitchMultiplier;                                   // 0x918(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_308F[0x14];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UREVComponent* GetDefaultObj();

	void UpdateSimSettings();
	void UpdateParameters(float InPitch, float InRPM, float InThrottle, float InVelocity, int32 InGear, bool bInEnableShifting);
	void SetSettings(class URevSettings* InSettings);
	void SetRevModel(class UREVModel* InModel);
};

// 0x48 (0x70 - 0x28)
// Class REVRuntime.REVModel
class UREVModel : public UObject
{
public:
	uint8                                        Pad_3094[0x30];                                    // Fixing Size After Last Property 
	float                                        SampleRate;                                        // 0x58(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        NumChannels;                                       // 0x5C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3095[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UREVModel* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class REVRuntime.RevSettings
class URevSettings : public UObject
{
public:
	uint8                                        Pad_3098[0x8];                                     // Fixing Size After Last Property 
	float                                        UpShiftDuration;                                   // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UpShiftAttackDuration;                             // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UpShiftAttackVolumeSpike;                          // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UpShiftAttackRPM;                                  // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UpShiftAttackThrottleTime;                         // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UpShiftWobblePitchFreq;                            // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UpShiftWobblePitchAmp;                             // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UpShiftWobbleEnabled;                              // 0x4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_309D[0x3];                                     // Fixing Size After Last Property 
	float                                        UpShiftWobbleVolFreq;                              // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UpShiftWobbleVolAmp;                               // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UpShiftWobbleDuration;                             // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DownShiftDuration;                                 // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PopDuration;                                       // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClutchRPMSpike;                                    // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClutchRPMSpikeDuration;                            // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClutchRPMMergeTime;                                // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_30A0[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class URevSettings* GetDefaultObj();

	void UpdateSettings();
};

}


