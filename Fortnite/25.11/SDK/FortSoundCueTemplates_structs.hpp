#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// ScriptStruct FortSoundCueTemplates.FortContinuousModulatorConfig
struct FFortContinuousModulatorConfig
{
public:
	struct FVector2D                             VolumeRange;                                       // 0x0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             PitchRange;                                        // 0x10(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModulationParamMode              VolumeMode;                                        // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModulationParamMode              PitchMode;                                         // 0x21(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1501[0x6];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortSoundCueTemplates.FortSubmixPair
struct FFortSubmixPair
{
public:
	class USoundSubmixBase*                      Submix;                                            // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SendAmount;                                        // 0x8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1502[0x4];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortSoundCueTemplates.FortBusPair
struct FFortBusPair
{
public:
	class USoundSourceBus*                       SourceBus;                                         // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioBus*                             AudioBus;                                          // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SendAmount;                                        // 0x10(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1503[0x4];                                     // Fixing Size Of Struct..
};

// 0x58 (0x58 - 0x0)
// ScriptStruct FortSoundCueTemplates.GliderThrustData
struct FGliderThrustData
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1504[0x4];                                     // Fixing Size After Last Property..
	struct FVector2D                             PitchOutput;                                       // 0x8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             VolumeOutput;                                      // 0x18(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundWave*                            Sound;                                             // 0x28(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortContinuousModulatorConfig        Settings;                                          // 0x30(0x28)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct FortSoundCueTemplates.PhysicsStateData
struct FPhysicsStateData
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1505[0x4];                                     // Fixing Size After Last Property..
	struct FVector2D                             VolumeOutput;                                      // 0x8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             PitchOutput;                                       // 0x18(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortContinuousModulatorConfig        Settings;                                          // 0x28(0x28)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FDistanceDatum                        CrossfadeInputSlow;                                // 0x50(0x14)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1506[0x4];                                     // Fixing Size After Last Property..
	class USoundWave*                            SlowLoop;                                          // 0x68(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDistanceDatum                        CrossfadeInputFast;                                // 0x70(0x14)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1507[0x4];                                     // Fixing Size After Last Property..
	class USoundWave*                            FastLoop;                                          // 0x88(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct FortSoundCueTemplates.PhysicsImpactData
struct FPhysicsImpactData
{
public:
	struct FVector2D                             VolumeOutput;                                      // 0x0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             PitchOutput;                                       // 0x10(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortContinuousModulatorConfig        Settings;                                          // 0x20(0x28)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	TArray<class USoundWave*>                    Variations;                                        // 0x48(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
