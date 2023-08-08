#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ENeuralMorphMode : uint8
{
	Local                          = 0,
	Global                         = 1,
	ENeuralMorphMode_MAX           = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct NeuralMorphModel.NeuralMorphBoneGroup
struct FNeuralMorphBoneGroup
{
public:
	TArray<struct FBoneReference>                BoneNames;                                         // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NeuralMorphModel.NeuralMorphCurveGroup
struct FNeuralMorphCurveGroup
{
public:
	TArray<struct FMLDeformerCurveReference>     CurveNames;                                        // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
