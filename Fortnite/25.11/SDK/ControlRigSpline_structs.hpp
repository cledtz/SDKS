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

enum class ESplineType : uint8
{
	BSpline                        = 0,
	Hermite                        = 1,
	Max                            = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x58 - 0x0)
// ScriptStruct ControlRigSpline.ControlRigSplineImpl
struct FControlRigSplineImpl
{
public:
	uint8                                        Pad_830C[0x58];                                    // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ControlRigSpline.ControlRigSpline
struct FControlRigSpline
{
public:
	uint8                                        Pad_830D[0x18];                                    // Fixing Size Of Struct..
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRigSpline.RigUnit_ControlRigSplineBase
struct FRigUnit_ControlRigSplineBase : public FRigUnit
{
public:
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRigSpline.RigUnit_ControlRigSplineFromPoints
struct FRigUnit_ControlRigSplineFromPoints : public FRigUnit_ControlRigSplineBase
{
public:
	TArray<struct FVector>                       Points;                                            // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ESplineType                       SplineMode;                                        // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClosed;                                           // 0x19(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_830E[0x2];                                     // Fixing Size After Last Property..
	int32                                        SamplesPerSegment;                                 // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Compression;                                       // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Stretch;                                           // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FControlRigSpline                     Spline;                                            // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x30 (0x190 - 0x160)
// ScriptStruct ControlRigSpline.RigUnit_SetSplinePoints
struct FRigUnit_SetSplinePoints : public FRigUnitMutable
{
public:
	TArray<struct FVector>                       Points;                                            // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FControlRigSpline                     Spline;                                            // 0x170(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_830F[0x8];                                     // Fixing Size Of Struct..
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRigSpline.RigUnit_PositionFromControlRigSpline
struct FRigUnit_PositionFromControlRigSpline : public FRigUnit_ControlRigSplineBase
{
public:
	struct FControlRigSpline                     Spline;                                            // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        U;                                                 // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8310[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Position;                                          // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct ControlRigSpline.RigUnit_TransformFromControlRigSpline
struct FRigUnit_TransformFromControlRigSpline : public FRigUnit_ControlRigSplineBase
{
public:
	struct FControlRigSpline                     Spline;                                            // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVector                               UpVector;                                          // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Roll;                                              // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        U;                                                 // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Transform;                                         // 0x40(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRigSpline.RigUnit_TangentFromControlRigSpline
struct FRigUnit_TangentFromControlRigSpline : public FRigUnit_ControlRigSplineBase
{
public:
	struct FControlRigSpline                     Spline;                                            // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        U;                                                 // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8311[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Tangent;                                           // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x190 - 0x160)
// ScriptStruct ControlRigSpline.RigUnit_DrawControlRigSpline
struct FRigUnit_DrawControlRigSpline : public FRigUnitMutable
{
public:
	struct FControlRigSpline                     Spline;                                            // 0x160(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x178(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x188(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Detail;                                            // 0x18C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRigSpline.RigUnit_GetLengthControlRigSpline
struct FRigUnit_GetLengthControlRigSpline : public FRigUnit
{
public:
	struct FControlRigSpline                     Spline;                                            // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        Length;                                            // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8312[0x4];                                     // Fixing Size Of Struct..
};

// 0x1D0 (0x330 - 0x160)
// ScriptStruct ControlRigSpline.RigUnit_FitChainToSplineCurve
struct FRigUnit_FitChainToSplineCurve : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKeyCollection              Items;                                             // 0x160(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FControlRigSpline                     Spline;                                            // 0x170(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EControlRigCurveAlignment         Alignment;                                         // 0x188(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8313[0x3];                                     // Fixing Size After Last Property..
	float                                        Minimum;                                           // 0x18C(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0x190(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SamplingPrecision;                                 // 0x194(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PrimaryAxis;                                       // 0x198(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SecondaryAxis;                                     // 0x1B0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PoleVectorPosition;                                // 0x1C8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations;                                         // 0x1E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ERigVMAnimEasingType              RotationEaseType;                                  // 0x1F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8314[0x3];                                     // Fixing Size After Last Property..
	float                                        Weight;                                            // 0x1F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x1F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8315[0x7];                                     // Fixing Size After Last Property..
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings;                                     // 0x200(0x90)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_FitChainToCurve_WorkData     WorkData;                                          // 0x290(0x98)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_8316[0x8];                                     // Fixing Size Of Struct..
};

// 0x1D0 (0x330 - 0x160)
// ScriptStruct ControlRigSpline.RigUnit_FitChainToSplineCurveItemArray
struct FRigUnit_FitChainToSplineCurveItemArray : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FControlRigSpline                     Spline;                                            // 0x170(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EControlRigCurveAlignment         Alignment;                                         // 0x188(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8317[0x3];                                     // Fixing Size After Last Property..
	float                                        Minimum;                                           // 0x18C(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0x190(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SamplingPrecision;                                 // 0x194(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PrimaryAxis;                                       // 0x198(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SecondaryAxis;                                     // 0x1B0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PoleVectorPosition;                                // 0x1C8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations;                                         // 0x1E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ERigVMAnimEasingType              RotationEaseType;                                  // 0x1F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8318[0x3];                                     // Fixing Size After Last Property..
	float                                        Weight;                                            // 0x1F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x1F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8319[0x7];                                     // Fixing Size After Last Property..
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings;                                     // 0x200(0x90)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_FitChainToCurve_WorkData     WorkData;                                          // 0x290(0x98)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_831A[0x8];                                     // Fixing Size Of Struct..
};

// 0x30 (0x190 - 0x160)
// ScriptStruct ControlRigSpline.RigUnit_FitSplineCurveToChain
struct FRigUnit_FitSplineCurveToChain : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKeyCollection              Items;                                             // 0x160(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FControlRigSpline                     Spline;                                            // 0x170(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_831B[0x8];                                     // Fixing Size Of Struct..
};

// 0x30 (0x190 - 0x160)
// ScriptStruct ControlRigSpline.RigUnit_FitSplineCurveToChainItemArray
struct FRigUnit_FitSplineCurveToChainItemArray : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FControlRigSpline                     Spline;                                            // 0x170(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_831C[0x8];                                     // Fixing Size Of Struct..
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRigSpline.RigUnit_ClosestParameterFromControlRigSpline
struct FRigUnit_ClosestParameterFromControlRigSpline : public FRigUnit_ControlRigSplineBase
{
public:
	struct FControlRigSpline                     Spline;                                            // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVector                               Position;                                          // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        U;                                                 // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_831D[0x4];                                     // Fixing Size Of Struct..
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRigSpline.RigUnit_ParameterAtPercentage
struct FRigUnit_ParameterAtPercentage : public FRigUnit_ControlRigSplineBase
{
public:
	struct FControlRigSpline                     Spline;                                            // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        Percentage;                                        // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        U;                                                 // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
