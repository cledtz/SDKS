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

enum class EIKRigGoalSpace : uint8
{
	Component                      = 0,
	Additive                       = 1,
	World                          = 2,
	EIKRigGoalSpace_MAX            = 3,
};

enum class EIKRigGoalTransformSource : uint8
{
	Manual                         = 0,
	Bone                           = 1,
	ActorComponent                 = 2,
	EIKRigGoalTransformSource_MAX  = 3,
};

enum class ERetargetSourceOrTarget : uint8
{
	Source                         = 0,
	Target                         = 1,
	ERetargetSourceOrTarget_MAX    = 2,
};

enum class ERetargetTranslationMode : uint8
{
	None                           = 0,
	GloballyScaled                 = 1,
	Absolute                       = 2,
	ERetargetTranslationMode_MAX   = 3,
};

enum class ERetargetRotationMode : uint8
{
	Interpolated                   = 0,
	OneToOne                       = 1,
	OneToOneReversed               = 2,
	None                           = 3,
	ERetargetRotationMode_MAX      = 4,
};

enum class EBasicAxis : uint8
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	NegX                           = 3,
	NegY                           = 4,
	NegZ                           = 5,
	EBasicAxis_MAX                 = 6,
};

enum class EWarpingDirectionSource : uint8
{
	Goals                          = 0,
	Chain                          = 1,
	EWarpingDirectionSource_MAX    = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct IKRig.TargetChainFKSettings
struct FTargetChainFKSettings
{
public:
	bool                                         EnableFK;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERetargetRotationMode             RotationMode;                                      // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_459A[0x2];                                     // Fixing Size After Last Property..
	float                                        RotationAlpha;                                     // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERetargetTranslationMode          TranslationMode;                                   // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_459B[0x3];                                     // Fixing Size After Last Property..
	float                                        TranslationAlpha;                                  // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PoleVectorMatching;                                // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PoleVectorOffset;                                  // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct IKRig.TargetChainIKSettings
struct FTargetChainIKSettings
{
public:
	bool                                         EnableIK;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_459C[0x3];                                     // Fixing Size After Last Property..
	float                                        BlendToSource;                                     // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               BlendToSourceWeights;                              // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               StaticOffset;                                      // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               StaticLocalOffset;                                 // 0x38(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              StaticRotationOffset;                              // 0x50(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ScaleVertical;                                     // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Extension;                                         // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAffectedByIKWarping;                              // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_459D[0x7];                                     // Fixing Size Of Struct..
};

// 0x14 (0x14 - 0x0)
// ScriptStruct IKRig.TargetChainSpeedPlantSettings
struct FTargetChainSpeedPlantSettings
{
public:
	bool                                         EnableSpeedPlanting;                               // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_459E[0x3];                                     // Fixing Size After Last Property..
	class FName                                  SpeedCurveName;                                    // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpeedThreshold;                                    // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UnplantStiffness;                                  // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UnplantCriticalDamping;                            // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct IKRig.TargetChainSettings
struct FTargetChainSettings
{
public:
	struct FTargetChainFKSettings                FK;                                                // 0x0(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FTargetChainIKSettings                IK;                                                // 0x18(0x78)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FTargetChainSpeedPlantSettings        SpeedPlanting;                                     // 0x90(0x14)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_459F[0x4];                                     // Fixing Size Of Struct..
};

// 0x68 (0x68 - 0x0)
// ScriptStruct IKRig.TargetRootSettings
struct FTargetRootSettings
{
public:
	float                                        RotationAlpha;                                     // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TranslationAlpha;                                  // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendToSource;                                     // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_45A0[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               BlendToSourceWeights;                              // 0x10(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScaleHorizontal;                                   // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScaleVertical;                                     // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TranslationOffset;                                 // 0x30(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              RotationOffset;                                    // 0x48(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        AffectIKHorizontal;                                // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AffectIKVertical;                                  // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct IKRig.RetargetGlobalSettings
struct FRetargetGlobalSettings
{
public:
	bool                                         bEnableRoot;                                       // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableFK;                                         // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableIK;                                         // 0x2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWarping;                                          // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWarpingDirectionSource           DirectionSource;                                   // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBasicAxis                        ForwardDirection;                                  // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DirectionChain;                                    // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WarpForwards;                                      // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SidewaysOffset;                                    // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WarpSplay;                                         // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF8 (0xF8 - 0x0)
// ScriptStruct IKRig.RetargetProfile
struct FRetargetProfile
{
public:
	bool                                         bApplyTargetRetargetPose;                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_45A1[0x3];                                     // Fixing Size After Last Property..
	class FName                                  TargetRetargetPoseName;                            // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplySourceRetargetPose;                          // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_45A2[0x3];                                     // Fixing Size After Last Property..
	class FName                                  SourceRetargetPoseName;                            // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyChainSettings;                               // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_45A3[0x7];                                     // Fixing Size After Last Property..
	TMap<class FName, struct FTargetChainSettings> ChainSettings;                                     // 0x18(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bApplyRootSettings;                                // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_45A4[0x7];                                     // Fixing Size After Last Property..
	struct FTargetRootSettings                   RootSettings;                                      // 0x70(0x68)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bApplyGlobalSettings;                              // 0xD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_45A5[0x3];                                     // Fixing Size After Last Property..
	struct FRetargetGlobalSettings               GlobalSettings;                                    // 0xDC(0x1C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct IKRig.IKRigGoal
struct FIKRigGoal
{
public:
	class FName                                  Name;                                              // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EIKRigGoalTransformSource         TransformSource;                                   // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_45A6[0x3];                                     // Fixing Size After Last Property..
	struct FBoneReference                        SourceBone;                                        // 0x8(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_45A7[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Position;                                          // 0x18(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x30(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        PositionAlpha;                                     // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationAlpha;                                     // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EIKRigGoalSpace                   PositionSpace;                                     // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EIKRigGoalSpace                   RotationSpace;                                     // 0x51(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_45A8[0x6];                                     // Fixing Size After Last Property..
	struct FVector                               FinalBlendedPosition;                              // 0x58(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 FinalBlendedRotation;                              // 0x70(0x20)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x188 (0x1E0 - 0x58)
// ScriptStruct IKRig.AnimNode_IKRig
struct FAnimNode_IKRig : public FAnimNode_CustomProperty
{
public:
	struct FPoseLink                             Source;                                            // 0x58(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	class UIKRigDefinition*                      RigDefinitionAsset;                                // 0x68(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FIKRigGoal>                    Goals;                                             // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bStartFromRefPose;                                 // 0x80(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAnimAlphaInputType               AlphaInputType;                                    // 0x81(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlphaBoolEnabled;                                 // 0x82(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_45A9[0x1];                                     // Fixing Size After Last Property..
	float                                        Alpha;                                             // 0x84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x88(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FInputAlphaBoolBlend                  AlphaBoolBlend;                                    // 0x90(0x48)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  AlphaCurveName;                                    // 0xD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                  AlphaScaleBiasClamp;                               // 0xDC(0x30)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_45AA[0x4];                                     // Fixing Size After Last Property..
	class UIKRigProcessor*                       IKRigProcessor;                                    // 0x110(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_45AB[0xC0];                                    // Fixing Size After Last Property..
	float                                        ActualAlpha;                                       // 0x1D8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_45AC[0x4];                                     // Fixing Size Of Struct..
};

// 0x238 (0x248 - 0x10)
// ScriptStruct IKRig.AnimNode_RetargetPoseFromMesh
struct FAnimNode_RetargetPoseFromMesh : public FAnimNode_Base
{
public:
	TWeakObjectPtr<class USkeletalMeshComponent> SourceMeshComponent;                               // 0x10(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseAttachedParent;                                // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_45AD[0x7];                                     // Fixing Size After Last Property..
	class UIKRetargeter*                         IKRetargeterAsset;                                 // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRetargetProfile                      CustomRetargetProfile;                             // 0x28(0xF8)(Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	bool                                         bSuppressWarnings;                                 // 0x120(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCopyCurves;                                       // 0x121(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_45AE[0x6];                                     // Fixing Size After Last Property..
	class UIKRetargetProcessor*                  Processor;                                         // 0x128(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_45AF[0x118];                                   // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IKRig.IKRigGoalContainer
struct FIKRigGoalContainer
{
public:
	uint8                                        Pad_45B0[0x10];                                    // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// ScriptStruct IKRig.BoneChain
struct FBoneChain
{
public:
	class FName                                  ChainName;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneReference                        StartBone;                                         // 0x4(0xC)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        EndBone;                                           // 0x10(0xC)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  IKGoalName;                                        // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IKRig.RetargetDefinition
struct FRetargetDefinition
{
public:
	class FName                                  RootBone;                                          // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_45B1[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FBoneChain>                    BoneChains;                                        // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0xC (0xC - 0x0)
// ScriptStruct IKRig.GoalBone
struct FGoalBone
{
public:
	uint8                                        Pad_45B2[0xC];                                     // Fixing Size Of Struct..
};

// 0x38 (0x38 - 0x0)
// ScriptStruct IKRig.IKRigInputSkeleton
struct FIKRigInputSkeleton
{
public:
	uint8                                        Pad_45B3[0x38];                                    // Fixing Size Of Struct..
};

// 0x70 (0x70 - 0x0)
// ScriptStruct IKRig.IKRigSkeleton
struct FIKRigSkeleton
{
public:
	TArray<class FName>                          BoneNames;                                         // 0x0(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<int32>                                ParentIndices;                                     // 0x10(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<class FName>                          ExcludedBones;                                     // 0x20(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    CurrentPoseGlobal;                                 // 0x30(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    CurrentPoseLocal;                                  // 0x40(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    RefPoseGlobal;                                     // 0x50(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	uint8                                        Pad_45B4[0x10];                                    // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// ScriptStruct IKRig.RetargetChainMap
struct FRetargetChainMap
{
public:
	class FName                                  SourceChain;                                       // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TargetChain;                                       // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct IKRig.IKRetargetPose
struct FIKRetargetPose
{
public:
	struct FVector                               RootTranslationOffset;                             // 0x0(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class FName, struct FQuat>              BoneRotationOffsets;                               // 0x18(0x50)(Edit, NativeAccessSpecifierPrivate)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct IKRig.LimbSolverSettings
struct FLimbSolverSettings
{
public:
	float                                        ReachPrecision;                                    // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             HingeRotationAxis;                                 // 0x4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_45B5[0x3];                                     // Fixing Size After Last Property..
	int32                                        MaxIterations;                                     // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableLimit;                                      // 0xC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_45B6[0x3];                                     // Fixing Size After Last Property..
	float                                        MinRotationAngle;                                  // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAveragePull;                                      // 0x14(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_45B7[0x3];                                     // Fixing Size After Last Property..
	float                                        PullDistribution;                                  // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReachStepAlpha;                                    // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableTwistCorrection;                            // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             EndBoneForwardAxis;                                // 0x21(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_45B8[0x2];                                     // Fixing Size Of Struct..
};

// 0x68 (0x68 - 0x0)
// ScriptStruct IKRig.LimbLink
struct FLimbLink
{
public:
	uint8                                        Pad_45B9[0x68];                                    // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IKRig.LimbSolver
struct FLimbSolver
{
public:
	uint8                                        Pad_45BA[0x18];                                    // Fixing Size Of Struct..
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
