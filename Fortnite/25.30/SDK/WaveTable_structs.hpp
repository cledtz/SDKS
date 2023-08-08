#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EWaveTableBitDepth : uint8
{
	PCM_16                         = 0,
	IEEE_Float                     = 1,
	COUNT                          = 2,
	EWaveTableBitDepth_MAX         = 3,
};

enum class EWaveTableResolution : uint8
{
	None                           = 0,
	Res_8                          = 3,
	Res_16                         = 4,
	Res_32                         = 5,
	Res_64                         = 6,
	Res_128                        = 7,
	Res_256                        = 8,
	Res_512                        = 9,
	Res_1024                       = 10,
	Res_2048                       = 11,
	Res_4096                       = 12,
	Res_Max                        = 12,
	Maximum                        = 13,
	EWaveTableResolution_MAX       = 14,
};

enum class EWaveTableSamplingMode : uint8
{
	FixedSampleRate                = 0,
	FixedResolution                = 1,
	COUNT                          = 2,
	EWaveTableSamplingMode_MAX     = 3,
};

enum class EWaveTableCurve : uint8
{
	Linear                         = 0,
	Linear_Inv                     = 1,
	Exp                            = 2,
	Exp_Inverse                    = 3,
	Log                            = 4,
	Sin                            = 5,
	Sin_Full                       = 6,
	SCurve                         = 7,
	Shared                         = 8,
	Custom                         = 9,
	File                           = 10,
	Count                          = 11,
	EWaveTableCurve_MAX            = 12,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct WaveTable.WaveTableData
struct FWaveTableData
{
public:
	enum class EWaveTableBitDepth                BitDepth;                                          // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2C03[0x7];                                     // Fixing Size After Last Property
	TArray<uint8>                                Data;                                              // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	float                                        FinalValue;                                        // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2C04[0x4];                                     // Fixing Size Of Struct
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct WaveTable.WaveTableTransform
struct FWaveTableTransform
{
public:
	enum class EWaveTableCurve                   Curve;                                             // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C06[0x3];                                     // Fixing Size After Last Property
	float                                        Scalar;                                            // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRichCurve                            CurveCustom;                                       // 0x8(0x80)(NativeAccessSpecifierPublic)
	class UCurveFloat*                           CurveShared;                                       // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWaveTableData                        TableData;                                         // 0x90(0x20)(Protected, NativeAccessSpecifierProtected)
	float                                        Duration;                                          // 0xB0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2C08[0x4];                                     // Fixing Size Of Struct
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct WaveTable.WaveTableBankEntry
struct FWaveTableBankEntry
{
public:
	struct FWaveTableTransform                   Transform;                                         // 0x0(0xB8)(Edit, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct WaveTable.WaveTableSettings
struct FWaveTableSettings
{
public:
	struct FFilePath                             FilePath;                                          // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChannelIndex;                                      // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C0B[0x4];                                     // Fixing Size After Last Property
	struct FWaveTableData                        SourceData;                                        // 0x18(0x20)(Edit, NativeAccessSpecifierPublic)
	int32                                        SourceSampleRate;                                  // 0x38(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Phase;                                             // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Top;                                               // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Tail;                                              // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeIn;                                            // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeOut;                                           // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNormalize;                                        // 0x50(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRemoveOffset;                                     // 0x51(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C0C[0x6];                                     // Fixing Size Of Struct
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
