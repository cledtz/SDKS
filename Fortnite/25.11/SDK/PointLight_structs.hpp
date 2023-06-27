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

enum class EPointLightDeviceModes : uint8
{
	Constant                       = 0,
	Flicker                        = 1,
	Wave                           = 2,
	ShortCircuit                   = 3,
	Party                          = 4,
	Windy                          = 5,
	Flash                          = 6,
	EPointLightDeviceModes_MAX     = 7,
};

enum class EPointLightDeviceLightType : uint8
{
	Point                          = 0,
	Spot                           = 1,
	EPointLightDeviceLightType_MAX = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x38 - 0x0)
// ScriptStruct PointLight.PointLightRhythmParameters
struct FPointLightRhythmParameters
{
public:
	struct FLinearColor                          LightColor;                                        // 0x0(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULightComponent*                       ActiveLight;                                       // 0x10(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                  StaticMeshComponent;                               // 0x18(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ColorBands;                                        // 0x20(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RhythmFrequencyValue;                              // 0x24(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WindAmplitudeSpotLight;                            // 0x28(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FlashFactor;                                       // 0x2C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SizeBasedIntensity;                                // 0x30(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPointLightDeviceLightType        LightType;                                         // 0x34(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPointLightDeviceModes            RhythmMode;                                        // 0x35(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_81E4[0x2];                                     // Fixing Size Of Struct..
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
