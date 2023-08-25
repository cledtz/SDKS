#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ERemapCurvesExpressionSource : uint8
{
	ExpressionList                 = 0,
	DataAsset                      = 1,
	ExpressionMap                  = 2,
	ERemapCurvesExpressionSource_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct CurveExpression.CurveExpressionList
struct FCurveExpressionList
{
public:
	class FString                                AssignmentExpressions;                             // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF0 (0x100 - 0x10)
// ScriptStruct CurveExpression.AnimNode_RemapCurvesBase
struct FAnimNode_RemapCurvesBase : public FAnimNode_Base
{
public:
	struct FPoseLink                             SourcePose;                                        // 0x10(0x10)(Edit, BlueprintVisible, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic)
	enum class ERemapCurvesExpressionSource      ExpressionSource;                                  // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D46[0x7];                                     // Fixing Size After Last Property 
	struct FCurveExpressionList                  ExpressionList;                                    // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UCurveExpressionsDataAsset*            CurveExpressionsDataAsset;                         // 0x38(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, class FString>             CurveExpressions;                                  // 0x40(0x50)(BlueprintVisible, EditFixedSize, NativeAccessSpecifierPublic)
	bool                                         bExpressionsImmutable;                             // 0x90(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D47[0x7];                                     // Fixing Size After Last Property 
	TArray<class FName>                          CachedConstantNames;                               // 0x98(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4D48[0x58];                                    // Fixing Size Of Struct
};

// 0x0 (0x100 - 0x100)
// ScriptStruct CurveExpression.AnimNode_RemapCurves
struct FAnimNode_RemapCurves : public FAnimNode_RemapCurvesBase
{
public:
};

// 0x78 (0x178 - 0x100)
// ScriptStruct CurveExpression.AnimNode_RemapCurvesFromMesh
struct FAnimNode_RemapCurvesFromMesh : public FAnimNode_RemapCurvesBase
{
public:
	TWeakObjectPtr<class USkeletalMeshComponent> SourceMeshComponent;                               // 0x100(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseAttachedParent;                                // 0x108(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D49[0x6F];                                    // Fixing Size Of Struct
};

}


