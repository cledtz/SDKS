#pragma once

// Dumped with Dumper-7!


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

enum class ENeuralMorphMaskVizMode : uint8
{
	Off                            = 0,
	WhenInFocus                    = 1,
	Always                         = 2,
	ENeuralMorphMaskVizMode_MAX    = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct NeuralMorphModel.NeuralMorphBoneGroup
struct FNeuralMorphBoneGroup
{
public:
	class FName                                  GroupName;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_45D3[0x4];                                     // Fixing Size After Last Property 
	TArray<struct FBoneReference>                BoneNames;                                         // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NeuralMorphModel.NeuralMorphCurveGroup
struct FNeuralMorphCurveGroup
{
public:
	class FName                                  GroupName;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_45D5[0x4];                                     // Fixing Size After Last Property 
	TArray<struct FMLDeformerCurveReference>     CurveNames;                                        // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NeuralMorphModel.NeuralMorphMaskInfo
struct FNeuralMorphMaskInfo
{
public:
	TArray<class FName>                          BoneNames;                                         // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

}


