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

enum class EFBIKBoneLimitType : uint8
{
	Free                           = 0,
	Limit                          = 1,
	Locked                         = 2,
	EFBIKBoneLimitType_MAX         = 3,
};

enum class EPoleVectorOption : uint8
{
	Direction                      = 0,
	Location                       = 1,
	EPoleVectorOption_MAX          = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct FullBodyIK.FBIKBoneLimit
struct FFBIKBoneLimit
{
public:
	enum class EFBIKBoneLimitType                LimitType_X;                                       // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFBIKBoneLimitType                LimitType_Y;                                       // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFBIKBoneLimitType                LimitType_Z;                                       // 0x2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A95[0x5];                                     // Fixing Size After Last Property..
	struct FVector                               Limit;                                             // 0x8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct FullBodyIK.FBIKConstraintOption
struct FFBIKConstraintOption
{
public:
	struct FRigElementKey                        Item;                                              // 0x0(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseStiffness;                                     // 0x9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A96[0x6];                                     // Fixing Size After Last Property..
	struct FVector                               LinearStiffness;                                   // 0x10(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AngularStiffness;                                  // 0x28(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseAngularLimit;                                  // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A97[0x7];                                     // Fixing Size After Last Property..
	struct FFBIKBoneLimit                        AngularLimit;                                      // 0x48(0x20)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bUsePoleVector;                                    // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPoleVectorOption                 PoleVectorOption;                                  // 0x69(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A98[0x6];                                     // Fixing Size After Last Property..
	struct FVector                               PoleVector;                                        // 0x70(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              OffsetRotation;                                    // 0x88(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct FullBodyIK.MotionProcessInput
struct FMotionProcessInput
{
public:
	bool                                         bForceEffectorRotationTarget;                      // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyApplyWhenReachedToTarget;                     // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct FullBodyIK.FBIKDebugOption
struct FFBIKDebugOption
{
public:
	bool                                         bDrawDebugHierarchy;                               // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bColorAngularMotionStrength;                       // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bColorLinearMotionStrength;                        // 0x2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawDebugAxes;                                    // 0x3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawDebugEffector;                                // 0x4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawDebugConstraints;                             // 0x5(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A99[0xA];                                     // Fixing Size After Last Property..
	struct FTransform                            DrawWorldOffset;                                   // 0x10(0x60)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DrawSize;                                          // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A9A[0xC];                                     // Fixing Size Of Struct..
};

// 0x24 (0x24 - 0x0)
// ScriptStruct FullBodyIK.SolverInput
struct FSolverInput
{
public:
	float                                        LinearMotionStrength;                              // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinLinearMotionStrength;                           // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngularMotionStrength;                             // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinAngularMotionStrength;                          // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultTargetClamp;                                // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Precision;                                         // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damping;                                           // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxIterations;                                     // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseJacobianTranspose;                             // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A9B[0x3];                                     // Fixing Size Of Struct..
};

// 0x60 (0x60 - 0x0)
// ScriptStruct FullBodyIK.FBIKEndEffector
struct FFBIKEndEffector
{
public:
	struct FRigElementKey                        Item;                                              // 0x0(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Position;                                          // 0x8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PositionAlpha;                                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PositionDepth;                                     // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A9C[0x8];                                     // Fixing Size After Last Property..
	struct FQuat                                 Rotation;                                          // 0x30(0x20)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationAlpha;                                     // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RotationDepth;                                     // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Pull;                                              // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A9D[0x4];                                     // Fixing Size Of Struct..
};

// 0x198 (0x198 - 0x0)
// ScriptStruct FullBodyIK.RigUnit_FullbodyIK_WorkData
struct FRigUnit_FullbodyIK_WorkData
{
public:
	uint8                                        Pad_8A9E[0x198];                                   // Fixing Size Of Struct..
};

// 0x270 (0x3D0 - 0x160)
// ScriptStruct FullBodyIK.RigUnit_FullbodyIK
struct FRigUnit_FullbodyIK : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        Root;                                              // 0x160(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFBIKEndEffector>              Effectors;                                         // 0x168(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFBIKConstraintOption>         Constraints;                                       // 0x178(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FSolverInput                          SolverProperty;                                    // 0x188(0x24)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FMotionProcessInput                   MotionProperty;                                    // 0x1AC(0x2)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x1AE(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A9F[0x1];                                     // Fixing Size After Last Property..
	struct FFBIKDebugOption                      DebugOption;                                       // 0x1B0(0x80)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_FullbodyIK_WorkData          WorkData;                                          // 0x230(0x198)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AA0[0x8];                                     // Fixing Size Of Struct..
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
