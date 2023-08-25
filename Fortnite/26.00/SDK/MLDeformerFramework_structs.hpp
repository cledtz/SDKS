#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EMLDeformerVizMode : uint8
{
	TrainingData                   = 0,
	TestData                       = 1,
	EMLDeformerVizMode_MAX         = 2,
};

enum class EMLDeformerHeatMapMode : uint8
{
	Activations                    = 0,
	GroundTruth                    = 1,
	EMLDeformerHeatMapMode_MAX     = 2,
};

enum class EMLDeformerMaskChannel : uint8
{
	Disabled                       = 0,
	VertexColorRed                 = 1,
	VertexColorGreen               = 2,
	VertexColorBlue                = 3,
	VertexColorAlpha               = 4,
	EMLDeformerMaskChannel_MAX     = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x4 - 0x0)
// ScriptStruct MLDeformerFramework.MLDeformerCurveReference
struct FMLDeformerCurveReference
{
public:
	class FName                                  CurveName;                                         // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct MLDeformerFramework.MLDeformerMorphModelQualityLevel
struct FMLDeformerMorphModelQualityLevel
{
public:
	int32                                        MaxActiveMorphs;                                   // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


