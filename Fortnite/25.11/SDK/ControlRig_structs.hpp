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

enum class ERigElementType : uint8
{
	None                           = 0,
	Bone                           = 1,
	Null                           = 2,
	Space                          = 2,
	Control                        = 4,
	Curve                          = 8,
	RigidBody                      = 16,
	Reference                      = 32,
	Last                           = 64,
	All                            = 63,
	ToResetAfterConstructionEvent  = 13,
	ERigElementType_MAX            = 65,
};

enum class ERigControlTransformChannel : uint8
{
	TranslationX                   = 0,
	TranslationY                   = 1,
	TranslationZ                   = 2,
	Pitch                          = 3,
	Yaw                            = 4,
	Roll                           = 5,
	ScaleX                         = 6,
	ScaleY                         = 7,
	ScaleZ                         = 8,
	ERigControlTransformChannel_MAX = 9,
};

enum class ERigControlVisibility : uint8
{
	UserDefined                    = 0,
	BasedOnSelection               = 1,
	ERigControlVisibility_MAX      = 2,
};

enum class ERigControlAxis : uint8
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	ERigControlAxis_MAX            = 3,
};

enum class ERigControlType : uint8
{
	Bool                           = 0,
	Float                          = 1,
	Integer                        = 2,
	Vector2D                       = 3,
	Position                       = 4,
	Scale                          = 5,
	Rotator                        = 6,
	Transform                      = 7,
	TransformNoScale               = 8,
	EulerTransform                 = 9,
	ERigControlType_MAX            = 10,
};

enum class ERigControlAnimationType : uint8
{
	AnimationControl               = 0,
	AnimationChannel               = 1,
	ProxyControl                   = 2,
	VisualCue                      = 3,
	ERigControlAnimationType_MAX   = 4,
};

enum class ERigExecutionType : uint8
{
	Runtime                        = 0,
	Editing                        = 1,
	Max                            = 2,
};

enum class ERigTransformStackEntryType : uint8
{
	TransformPose                  = 0,
	ControlOffset                  = 1,
	ControlShape                   = 2,
	CurveValue                     = 3,
	ERigTransformStackEntryType_MAX = 4,
};

enum class ERigTransformType : uint8
{
	InitialLocal                   = 0,
	CurrentLocal                   = 1,
	InitialGlobal                  = 2,
	CurrentGlobal                  = 3,
	NumTransformTypes              = 4,
	ERigTransformType_MAX          = 5,
};

enum class EControlRigInteractionType : uint8
{
	None                           = 0,
	Translate                      = 1,
	Rotate                         = 2,
	Scale                          = 4,
	All                            = 7,
	EControlRigInteractionType_MAX = 8,
};

enum class EControlRigVectorKind : uint8
{
	Direction                      = 0,
	Location                       = 1,
	EControlRigVectorKind_MAX      = 2,
};

enum class EControlRigComponentSpace : uint8
{
	WorldSpace                     = 0,
	ActorSpace                     = 1,
	ComponentSpace                 = 2,
	RigSpace                       = 3,
	LocalSpace                     = 4,
	Max                            = 5,
};

enum class EControlRigComponentMapDirection : uint8
{
	Input                          = 0,
	Output                         = 1,
	EControlRigComponentMapDirection_MAX = 2,
};

enum class ETransformSpaceMode : uint8
{
	LocalSpace                     = 0,
	GlobalSpace                    = 1,
	BaseSpace                      = 2,
	BaseJoint                      = 3,
	Max                            = 4,
};

enum class ETransformGetterType : uint8
{
	Initial                        = 0,
	Current                        = 1,
	Max                            = 2,
};

enum class EControlRigTestDataPlaybackMode : uint8
{
	Live                           = 0,
	ReplayInputs                   = 1,
	GroundTruth                    = 2,
	Max                            = 3,
};

enum class ECRSimConstraintType : uint8
{
	Distance                       = 0,
	DistanceFromA                  = 1,
	DistanceFromB                  = 2,
	Plane                          = 3,
	ECRSimConstraintType_MAX       = 4,
};

enum class ECRSimPointForceType : uint8
{
	Direction                      = 0,
	ECRSimPointForceType_MAX       = 1,
};

enum class ECRSimSoftCollisionType : uint8
{
	Plane                          = 0,
	Sphere                         = 1,
	Cone                           = 2,
	ECRSimSoftCollisionType_MAX    = 3,
};

enum class EControlRigFKRigExecuteMode : uint8
{
	Replace                        = 0,
	Additive                       = 1,
	Direct                         = 2,
	Max                            = 3,
};

enum class ERigBoneType : uint8
{
	Imported                       = 0,
	User                           = 1,
	ERigBoneType_MAX               = 2,
};

enum class ERigMetadataType : uint8
{
	Bool                           = 0,
	BoolArray                      = 1,
	Float                          = 2,
	FloatArray                     = 3,
	Int32                          = 4,
	Int32Array                     = 5,
	Name                           = 6,
	NameArray                      = 7,
	Vector                         = 8,
	VectorArray                    = 9,
	Rotator                        = 10,
	RotatorArray                   = 11,
	Quat                           = 12,
	QuatArray                      = 13,
	Transform                      = 14,
	TransformArray                 = 15,
	LinearColor                    = 16,
	LinearColorArray               = 17,
	RigElementKey                  = 18,
	RigElementKeyArray             = 19,
	Invalid                        = 20,
	ERigMetadataType_MAX           = 21,
};

enum class ERigHierarchyNotification : uint8
{
	ElementAdded                   = 0,
	ElementRemoved                 = 1,
	ElementRenamed                 = 2,
	ElementSelected                = 3,
	ElementDeselected              = 4,
	ParentChanged                  = 5,
	HierarchyReset                 = 6,
	ControlSettingChanged          = 7,
	ControlVisibilityChanged       = 8,
	ControlDrivenListChanged       = 9,
	ControlShapeTransformChanged   = 10,
	ParentWeightsChanged           = 11,
	InteractionBracketOpened       = 12,
	InteractionBracketClosed       = 13,
	ElementReordered               = 14,
	Max                            = 15,
};

enum class ERigEvent : uint8
{
	None                           = 0,
	RequestAutoKey                 = 1,
	OpenUndoBracket                = 2,
	CloseUndoBracket               = 3,
	Max                            = 4,
};

enum class EControlRigSetKey : uint8
{
	DoNotCare                      = 0,
	Always                         = 1,
	Never                          = 2,
	EControlRigSetKey_MAX          = 3,
};

enum class ERigControlValueType : uint8
{
	Initial                        = 0,
	Current                        = 1,
	Minimum                        = 2,
	Maximum                        = 3,
	ERigControlValueType_MAX       = 4,
};

enum class ERigSpaceType : uint8
{
	Global                         = 0,
	Bone                           = 1,
	Control                        = 2,
	Space                          = 3,
	ERigSpaceType_MAX              = 4,
};

enum class EMovieSceneControlRigSpaceType : uint8
{
	Parent                         = 0,
	World                          = 1,
	ControlRig                     = 2,
	EMovieSceneControlRigSpaceType_MAX = 3,
};

enum class EControlRigDrawHierarchyMode : uint8
{
	Axes                           = 0,
	Max                            = 1,
};

enum class EAimMode : uint8
{
	AimAtTarget                    = 0,
	OrientToTarget                 = 1,
	MAX                            = 2,
};

enum class EApplyTransformMode : uint8
{
	Override                       = 0,
	Additive                       = 1,
	Max                            = 2,
};

enum class ERigSwitchParentMode : uint8
{
	World                          = 0,
	DefaultParent                  = 1,
	ParentItem                     = 2,
	ERigSwitchParentMode_MAX       = 3,
};

enum class EControlRigCurveAlignment : uint8
{
	Front                          = 0,
	Stretched                      = 1,
	EControlRigCurveAlignment_MAX  = 2,
};

enum class EControlRigModifyBoneMode : uint8
{
	OverrideLocal                  = 0,
	OverrideGlobal                 = 1,
	AdditiveLocal                  = 2,
	AdditiveGlobal                 = 3,
	Max                            = 4,
};

enum class EConstraintInterpType : uint8
{
	Average                        = 0,
	Shortest                       = 1,
	Max                            = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct ControlRig.RigElementKey
struct FRigElementKey
{
public:
	enum class ERigElementType                   Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B66[0x3];                                     // Fixing Size After Last Property..
	class FName                                  Name;                                              // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct ControlRig.RigBaseElement
struct FRigBaseElement
{
public:
	uint8                                        Pad_3B67[0x8];                                     // Fixing Size After Last Property..
	struct FRigElementKey                        Key;                                               // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                NameString;                                        // 0x10(0x10)(ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        Index;                                             // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SubIndex;                                          // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3B68[0xA8];                                    // Fixing Size After Last Property..
	int32                                        CreatedAtInstructionIndex;                         // 0xD0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3B69[0x8];                                     // Fixing Size After Last Property..
	bool                                         bSelected;                                         // 0xDC(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3B6A[0x3];                                     // Fixing Size Of Struct..
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ControlRig.RigComputedTransform
struct FRigComputedTransform
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct ControlRig.RigLocalAndGlobalTransform
struct FRigLocalAndGlobalTransform
{
public:
	struct FRigComputedTransform                 Local;                                             // 0x0(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigComputedTransform                 Global;                                            // 0x60(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B6B[0x10];                                    // Fixing Size Of Struct..
};

// 0x1A0 (0x1A0 - 0x0)
// ScriptStruct ControlRig.RigCurrentAndInitialTransform
struct FRigCurrentAndInitialTransform
{
public:
	struct FRigLocalAndGlobalTransform           Current;                                           // 0x0(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigLocalAndGlobalTransform           Initial;                                           // 0xD0(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1E0 (0x2C0 - 0xE0)
// ScriptStruct ControlRig.RigTransformElement
struct FRigTransformElement : public FRigBaseElement
{
public:
	struct FRigCurrentAndInitialTransform        Pose;                                              // 0xE0(0x1A0)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B6C[0x40];                                    // Fixing Size Of Struct..
};

// 0x100 (0x3C0 - 0x2C0)
// ScriptStruct ControlRig.RigMultiParentElement
struct FRigMultiParentElement : public FRigTransformElement
{
public:
	uint8                                        Pad_3B6D[0x100];                                   // Fixing Size Of Struct..
};

// 0x2 (0x2 - 0x0)
// ScriptStruct ControlRig.RigControlLimitEnabled
struct FRigControlLimitEnabled
{
public:
	bool                                         bMinimum;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMaximum;                                          // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x84 (0x84 - 0x0)
// ScriptStruct ControlRig.RigControlValueStorage
struct FRigControlValueStorage
{
public:
	float                                        Float00;                                           // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float01;                                           // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float02;                                           // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float03;                                           // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float10;                                           // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float11;                                           // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float12;                                           // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float13;                                           // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float20;                                           // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float21;                                           // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float22;                                           // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float23;                                           // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float30;                                           // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float31;                                           // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float32;                                           // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float33;                                           // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float00_2;                                         // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float01_2;                                         // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float02_2;                                         // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float03_2;                                         // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float10_2;                                         // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float11_2;                                         // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float12_2;                                         // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float13_2;                                         // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float20_2;                                         // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float21_2;                                         // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float22_2;                                         // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float23_2;                                         // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float30_2;                                         // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float31_2;                                         // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float32_2;                                         // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float33_2;                                         // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bValid;                                            // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B6E[0x3];                                     // Fixing Size Of Struct..
};

// 0x84 (0x84 - 0x0)
// ScriptStruct ControlRig.RigControlValue
struct FRigControlValue
{
public:
	struct FRigControlValueStorage               FloatStorage;                                      // 0x0(0x84)(NoDestructor, NativeAccessSpecifierPrivate)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ControlRig.RigControlElementCustomization
struct FRigControlElementCustomization
{
public:
	TArray<struct FRigElementKey>                AvailableSpaces;                                   // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRigElementKey>                RemovedSpaces;                                     // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1B0 (0x1B0 - 0x0)
// ScriptStruct ControlRig.RigControlSettings
struct FRigControlSettings
{
public:
	enum class ERigControlAnimationType          AnimationType;                                     // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigControlType                   ControlType;                                       // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B6F[0x2];                                     // Fixing Size After Last Property..
	class FName                                  DisplayName;                                       // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigControlAxis                   PrimaryAxis;                                       // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsCurve;                                          // 0x9(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B70[0x6];                                     // Fixing Size After Last Property..
	TArray<struct FRigControlLimitEnabled>       LimitEnabled;                                      // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bDrawLimits;                                       // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B71[0x3];                                     // Fixing Size After Last Property..
	struct FRigControlValue                      MinimumValue;                                      // 0x24(0x84)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigControlValue                      MaximumValue;                                      // 0xA8(0x84)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bShapeVisible;                                     // 0x12C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigControlVisibility             ShapeVisibility;                                   // 0x12D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B72[0x2];                                     // Fixing Size After Last Property..
	class FName                                  ShapeName;                                         // 0x130(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ShapeColor;                                        // 0x134(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsTransientControl;                               // 0x144(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B73[0x3];                                     // Fixing Size After Last Property..
	class UEnum*                                 ControlEnum;                                       // 0x148(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigControlElementCustomization       Customization;                                     // 0x150(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FRigElementKey>                DrivenControls;                                    // 0x170(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B74[0x10];                                    // Fixing Size After Last Property..
	bool                                         bGroupWithParentControl;                           // 0x190(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRestrictSpaceSwitching;                           // 0x191(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B75[0x6];                                     // Fixing Size After Last Property..
	TArray<enum class ERigControlTransformChannel> FilteredChannels;                                  // 0x198(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EEulerRotationOrder               PreferredRotationOrder;                            // 0x1A8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B76[0x7];                                     // Fixing Size Of Struct..
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ControlRig.RigPreferredEulerAngles
struct FRigPreferredEulerAngles
{
public:
	enum class EEulerRotationOrder               RotationOrder;                                     // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B77[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               Current;                                           // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Initial;                                           // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x530 (0x8F0 - 0x3C0)
// ScriptStruct ControlRig.RigControlElement
struct FRigControlElement : public FRigMultiParentElement
{
public:
	struct FRigControlSettings                   Settings;                                          // 0x3C0(0x1B0)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigCurrentAndInitialTransform        Offset;                                            // 0x570(0x1A0)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigCurrentAndInitialTransform        Shape;                                             // 0x710(0x1A0)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigPreferredEulerAngles              PreferredEulerAngles;                              // 0x8B0(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_3B78[0x8];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ControlRig.RigInfluenceEntry
struct FRigInfluenceEntry
{
public:
	struct FRigElementKey                        Source;                                            // 0x0(0x8)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FRigElementKey>                AffectedList;                                      // 0x8(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct ControlRig.RigInfluenceMap
struct FRigInfluenceMap
{
public:
	class FName                                  EventName;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3B79[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FRigInfluenceEntry>            Entries;                                           // 0x8(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TMap<struct FRigElementKey, int32>           KeyToIndex;                                        // 0x18(0x50)(Protected, NativeAccessSpecifierProtected)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ControlRig.RigInfluenceMapPerEvent
struct FRigInfluenceMapPerEvent
{
public:
	TArray<struct FRigInfluenceMap>              Maps;                                              // 0x0(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TMap<class FName, int32>                     EventToIndex;                                      // 0x10(0x50)(Protected, NativeAccessSpecifierProtected)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct ControlRig.RigHierarchySettings
struct FRigHierarchySettings
{
public:
	int32                                        ProceduralElementLimit;                            // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x140 (0x148 - 0x8)
// ScriptStruct ControlRig.MovieSceneControlRigInstanceData
struct FMovieSceneControlRigInstanceData : public FMovieSceneSequenceInstanceData
{
public:
	bool                                         bAdditive;                                         // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyBoneFilter;                                  // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B7A[0x6];                                     // Fixing Size After Last Property..
	struct FInputBlendPose                       BoneFilter;                                        // 0x10(0x10)(NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel               Weight;                                            // 0x20(0x110)(NativeAccessSpecifierPublic)
	struct FMovieSceneEvaluationOperand          Operand;                                           // 0x130(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B7B[0x4];                                     // Fixing Size Of Struct..
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct ControlRig.RigTransformStackEntry
struct FRigTransformStackEntry
{
public:
	struct FRigElementKey                        Key;                                               // 0x0(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigTransformStackEntryType       EntryType;                                         // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigTransformType                 TransformType;                                     // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B7C[0x6];                                     // Fixing Size After Last Property..
	struct FTransform                            OldTransform;                                      // 0x10(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            NewTransform;                                      // 0x70(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAffectChildren;                                   // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B7D[0x7];                                     // Fixing Size After Last Property..
	TArray<class FString>                        Callstack;                                         // 0xD8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B7E[0x8];                                     // Fixing Size Of Struct..
};

// 0x8 (0x2C8 - 0x2C0)
// ScriptStruct ControlRig.RigSingleParentElement
struct FRigSingleParentElement : public FRigTransformElement
{
public:
	uint8                                        Pad_3B7F[0x8];                                     // Fixing Size Of Struct..
};

// 0xC (0xC - 0x0)
// ScriptStruct ControlRig.RigElementWeight
struct FRigElementWeight
{
public:
	float                                        Location;                                          // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Rotation;                                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct ControlRig.RigElementParentConstraint
struct FRigElementParentConstraint
{
public:
	uint8                                        Pad_3B80[0x90];                                    // Fixing Size Of Struct..
};

// 0x8 (0x2D0 - 0x2C8)
// ScriptStruct ControlRig.RigBoneElement
struct FRigBoneElement : public FRigSingleParentElement
{
public:
	enum class ERigBoneType                      BoneType;                                          // 0x2C8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B81[0x7];                                     // Fixing Size Of Struct..
};

// 0x0 (0x3C0 - 0x3C0)
// ScriptStruct ControlRig.RigNullElement
struct FRigNullElement : public FRigMultiParentElement
{
public:
};

// 0x8 (0xE8 - 0xE0)
// ScriptStruct ControlRig.RigCurveElement
struct FRigCurveElement : public FRigBaseElement
{
public:
	uint8                                        Pad_3B82[0x8];                                     // Fixing Size Of Struct..
};

// 0x4 (0x4 - 0x0)
// ScriptStruct ControlRig.RigRigidBodySettings
struct FRigRigidBodySettings
{
public:
	float                                        Mass;                                              // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x2D0 - 0x2C8)
// ScriptStruct ControlRig.RigRigidBodyElement
struct FRigRigidBodyElement : public FRigSingleParentElement
{
public:
	struct FRigRigidBodySettings                 Settings;                                          // 0x2C8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B83[0x4];                                     // Fixing Size Of Struct..
};

// 0x18 (0x2E0 - 0x2C8)
// ScriptStruct ControlRig.RigReferenceElement
struct FRigReferenceElement : public FRigSingleParentElement
{
public:
	uint8                                        Pad_3B84[0x18];                                    // Fixing Size Of Struct..
};

// 0x1E0 (0x1E0 - 0x0)
// ScriptStruct ControlRig.RigHierarchyCopyPasteContentPerElement
struct FRigHierarchyCopyPasteContentPerElement
{
public:
	struct FRigElementKey                        Key;                                               // 0x0(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Content;                                           // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRigElementKey>                Parents;                                           // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRigElementWeight>             ParentWeights;                                     // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B85[0x8];                                     // Fixing Size After Last Property..
	struct FRigCurrentAndInitialTransform        Pose;                                              // 0x40(0x1A0)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ControlRig.RigHierarchyCopyPasteContent
struct FRigHierarchyCopyPasteContent
{
public:
	TArray<struct FRigHierarchyCopyPasteContentPerElement> Elements;                                          // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<enum class ERigElementType>           Types;                                             // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        Contents;                                          // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    LocalTransforms;                                   // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    GlobalTransforms;                                  // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x150 - 0xF0)
// ScriptStruct ControlRig.ControlRigExecuteContext
struct FControlRigExecuteContext : public FRigVMExecuteContext
{
public:
	uint8                                        Pad_3B86[0x60];                                    // Fixing Size Of Struct..
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit
struct FRigUnit : public FRigVMStruct
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_DebugBase
struct FRigUnit_DebugBase : public FRigUnit
{
public:
};

// 0x158 (0x160 - 0x8)
// ScriptStruct ControlRig.RigUnitMutable
struct FRigUnitMutable : public FRigUnit
{
public:
	uint8                                        Pad_3B87[0x8];                                     // Fixing Size After Last Property..
	struct FControlRigExecuteContext             ExecuteContext;                                    // 0x10(0x150)(Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)
};

// 0x0 (0x160 - 0x160)
// ScriptStruct ControlRig.RigUnit_DebugBaseMutable
struct FRigUnit_DebugBaseMutable : public FRigUnitMutable
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_HighlevelBase
struct FRigUnit_HighlevelBase : public FRigUnit
{
public:
};

// 0x0 (0x160 - 0x160)
// ScriptStruct ControlRig.RigUnit_HighlevelBaseMutable
struct FRigUnit_HighlevelBaseMutable : public FRigUnitMutable
{
public:
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ControlRig.StructReference
struct FStructReference
{
public:
	uint8                                        Pad_3B88[0x8];                                     // Fixing Size Of Struct..
};

// 0x2 (0x2 - 0x0)
// ScriptStruct ControlRig.ControlRigIOSettings
struct FControlRigIOSettings
{
public:
	bool                                         bUpdatePose;                                       // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUpdateCurves;                                     // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct ControlRig.ControlRigAnimNodeEventName
struct FControlRigAnimNodeEventName
{
public:
	class FName                                  EventName;                                         // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x218 (0x270 - 0x58)
// ScriptStruct ControlRig.AnimNode_ControlRigBase
struct FAnimNode_ControlRigBase : public FAnimNode_CustomProperty
{
public:
	struct FPoseLink                             Source;                                            // 0x58(0x10)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bResetInputPoseToInitial;                          // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bTransferInputPose;                                // 0x69(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bTransferInputCurves;                              // 0x6A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bTransferPoseInGlobalSpace;                        // 0x6B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3B89[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FBoneReference>                InputBonesToTransfer;                              // 0x70(0x10)(Edit, ZeroConstructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_3B8A[0x1C0];                                   // Fixing Size After Last Property..
	TWeakObjectPtr<class UNodeMappingContainer>  NodeMappingContainer;                              // 0x240(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FControlRigIOSettings                 InputSettings;                                     // 0x248(0x2)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FControlRigIOSettings                 OutputSettings;                                    // 0x24A(0x2)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bExecute;                                          // 0x24C(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3B8B[0xB];                                     // Fixing Size After Last Property..
	TArray<struct FControlRigAnimNodeEventName>  EventQueue;                                        // 0x258(0x10)(Edit, ZeroConstructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_3B8C[0x8];                                     // Fixing Size Of Struct..
};

// 0x200 (0x470 - 0x270)
// ScriptStruct ControlRig.AnimNode_ControlRig
struct FAnimNode_ControlRig : public FAnimNode_ControlRigBase
{
public:
	TSubclassOf<class UControlRig>               ControlRigClass;                                   // 0x270(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UControlRig*                           ControlRig;                                        // 0x278(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        Alpha;                                             // 0x280(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EAnimAlphaInputType               AlphaInputType;                                    // 0x284(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bAlphaBoolEnabled : 1;                             // Mask: 0x1, PropSize: 0x10x285(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bSetRefPoseFromSkeleton : 1;                       // Mask: 0x2, PropSize: 0x10x285(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_235 : 6;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_3B8D[0x2];                                     // Fixing Size After Last Property..
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x288(0x8)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	struct FInputAlphaBoolBlend                  AlphaBoolBlend;                                    // 0x290(0x48)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	class FName                                  AlphaCurveName;                                    // 0x2D8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FInputScaleBiasClamp                  AlphaScaleBiasClamp;                               // 0x2DC(0x30)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3B8E[0x4];                                     // Fixing Size After Last Property..
	TMap<class FName, class FName>               InputMapping;                                      // 0x310(0x50)(NativeAccessSpecifierPrivate)
	TMap<class FName, class FName>               OutputMapping;                                     // 0x360(0x50)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_3B8F[0xB0];                                    // Fixing Size After Last Property..
	int32                                        LODThreshold;                                      // 0x460(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3B90[0xC];                                     // Fixing Size Of Struct..
};

// 0x8 (0x278 - 0x270)
// ScriptStruct ControlRig.AnimNode_ControlRig_ExternalSource
struct FAnimNode_ControlRig_ExternalSource : public FAnimNode_ControlRigBase
{
public:
	TWeakObjectPtr<class UControlRig>            ControlRig;                                        // 0x270(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0xA8 (0x7A0 - 0x6F8)
// ScriptStruct ControlRig.ControlRigAnimInstanceProxy
struct FControlRigAnimInstanceProxy : public FAnimInstanceProxy
{
public:
	uint8                                        Pad_3B91[0xA8];                                    // Fixing Size Of Struct..
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct ControlRig.ControlRigComponentMappedElement
struct FControlRigComponentMappedElement
{
public:
	struct FSoftComponentReference               ComponentReference;                                // 0x0(0x48)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        TransformIndex;                                    // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TransformName;                                     // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigElementType                   ElementType;                                       // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B92[0x3];                                     // Fixing Size After Last Property..
	class FName                                  ElementName;                                       // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigComponentMapDirection  Direction;                                         // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B93[0x7];                                     // Fixing Size After Last Property..
	struct FTransform                            Offset;                                            // 0x60(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigComponentSpace         Space;                                             // 0xC4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B94[0x3];                                     // Fixing Size After Last Property..
	class USceneComponent*                       SceneComponent;                                    // 0xC8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ElementIndex;                                      // 0xD0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SubIndex;                                          // 0xD4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B95[0x8];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.ControlRigComponentMappedComponent
struct FControlRigComponentMappedComponent
{
public:
	class USceneComponent*                       Component;                                         // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ElementName;                                       // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigElementType                   ElementType;                                       // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigComponentMapDirection  Direction;                                         // 0xD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B96[0x2];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ControlRig.ControlRigComponentMappedBone
struct FControlRigComponentMappedBone
{
public:
	class FName                                  Source;                                            // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Target;                                            // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ControlRig.ControlRigComponentMappedCurve
struct FControlRigComponentMappedCurve
{
public:
	class FName                                  Source;                                            // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Target;                                            // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1B0 (0x1B0 - 0x0)
// ScriptStruct ControlRig.ControlShapeActorCreationParam
struct FControlShapeActorCreationParam
{
public:
	uint8                                        Pad_3B97[0x1B0];                                   // Fixing Size Of Struct..
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct ControlRig.ControlRigShapeDefinition
struct FControlRigShapeDefinition
{
public:
	class FName                                  ShapeName;                                         // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B98[0x4];                                     // Fixing Size After Last Property..
	TSoftObjectPtr<class UStaticMesh>            StaticMesh;                                        // 0x8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Transform;                                         // 0x30(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B99[0x10];                                    // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ControlRig.ControlRigTestDataVariable
struct FControlRigTestDataVariable
{
public:
	class FName                                  Name;                                              // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CPPType;                                           // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ControlRig.CachedRigElement
struct FCachedRigElement
{
public:
	struct FRigElementKey                        Key;                                               // 0x0(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint16                                       Index;                                             // 0x8(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3B9A[0x2];                                     // Fixing Size After Last Property..
	int32                                        ContainerVersion;                                  // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3B9B[0x8];                                     // Fixing Size Of Struct..
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct ControlRig.RigPoseElement
struct FRigPoseElement
{
public:
	struct FCachedRigElement                     Index;                                             // 0x0(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B9C[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            GlobalTransform;                                   // 0x20(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            LocalTransform;                                    // 0x80(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurveValue;                                        // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B9D[0xC];                                     // Fixing Size Of Struct..
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ControlRig.RigPose
struct FRigPose
{
public:
	TArray<struct FRigPoseElement>               Elements;                                          // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        HierarchyTopologyVersion;                          // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PoseHash;                                          // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B9E[0x58];                                    // Fixing Size Of Struct..
};

// 0x90 (0x90 - 0x0)
// ScriptStruct ControlRig.ControlRigTestDataFrame
struct FControlRigTestDataFrame
{
public:
	double                                       AbsoluteTime;                                      // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       DeltaTime;                                         // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FControlRigTestDataVariable>   Variables;                                         // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	struct FRigPose                              Pose;                                              // 0x20(0x70)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ControlRig.ControlRigValidationContext
struct FControlRigValidationContext
{
public:
	uint8                                        Pad_3B9F[0x28];                                    // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ControlRig.CRSimContainer
struct FCRSimContainer
{
public:
	uint8                                        Pad_3BA0[0x8];                                     // Fixing Size After Last Property..
	float                                        TimeStep;                                          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccumulatedTime;                                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeLeftForStep;                                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BA1[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.CRSimLinearSpring
struct FCRSimLinearSpring
{
public:
	int32                                        SubjectA;                                          // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SubjectB;                                          // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Coefficient;                                       // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Equilibrium;                                       // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ControlRig.CRSimPointConstraint
struct FCRSimPointConstraint
{
public:
	enum class ECRSimConstraintType              Type;                                              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BA2[0x3];                                     // Fixing Size After Last Property..
	int32                                        SubjectA;                                          // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SubjectB;                                          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BA3[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               DataA;                                             // 0x10(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               DataB;                                             // 0x28(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct ControlRig.CRSimSoftCollision
struct FCRSimSoftCollision
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x60)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECRSimSoftCollisionType           ShapeType;                                         // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BA4[0x3];                                     // Fixing Size After Last Property..
	float                                        MinimumDistance;                                   // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumDistance;                                   // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMAnimEasingType              FalloffType;                                       // 0x6C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BA5[0x3];                                     // Fixing Size After Last Property..
	float                                        Coefficient;                                       // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInverted;                                         // 0x74(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BA6[0xB];                                     // Fixing Size Of Struct..
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ControlRig.CRSimPointForce
struct FCRSimPointForce
{
public:
	enum class ECRSimPointForceType              ForceType;                                         // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BA7[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               Vector;                                            // 0x8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Coefficient;                                       // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNormalize;                                        // 0x24(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BA8[0x3];                                     // Fixing Size Of Struct..
};

// 0x60 (0x78 - 0x18)
// ScriptStruct ControlRig.CRSimPointContainer
struct FCRSimPointContainer : public FCRSimContainer
{
public:
	TArray<struct FRigVMSimPoint>                Points;                                            // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCRSimLinearSpring>            Springs;                                           // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCRSimPointForce>              Forces;                                            // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCRSimSoftCollision>           CollisionVolumes;                                  // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCRSimPointConstraint>         Constraints;                                       // 0x58(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRigVMSimPoint>                PreviousStep;                                      // 0x68(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x140 (0x140 - 0x0)
// ScriptStruct ControlRig.ConstraintNodeData
struct FConstraintNodeData
{
public:
	struct FTransform                            RelativeParent;                                    // 0x0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FConstraintOffset                     ConstraintOffset;                                  // 0x60(0xC0)(NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  LinkedNode;                                        // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BA9[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FTransformConstraint>          Constraints;                                       // 0x128(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3BAA[0x8];                                     // Fixing Size Of Struct..
};

// 0x10 (0x88 - 0x78)
// ScriptStruct ControlRig.AnimationHierarchy
struct FAnimationHierarchy : public FNodeHierarchyWithUserData
{
public:
	TArray<struct FConstraintNodeData>           UserData;                                          // 0x78(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigElement
struct FRigElement
{
public:
	uint8                                        Pad_3BAB[0x8];                                     // Fixing Size After Last Property..
	class FName                                  Name;                                              // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x150 (0x160 - 0x10)
// ScriptStruct ControlRig.RigBone
struct FRigBone : public FRigElement
{
public:
	class FName                                  ParentName;                                        // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ParentIndex;                                       // 0x14(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BAC[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            InitialTransform;                                  // 0x20(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            GlobalTransform;                                   // 0x80(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            LocalTransform;                                    // 0xE0(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                Dependents;                                        // 0x140(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	enum class ERigBoneType                      Type;                                              // 0x150(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BAD[0xF];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigBoneHierarchy
struct FRigBoneHierarchy
{
public:
	TArray<struct FRigBone>                      Bones;                                             // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x330 (0x340 - 0x10)
// ScriptStruct ControlRig.RigControl
struct FRigControl : public FRigElement
{
public:
	enum class ERigControlType                   ControlType;                                       // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BAE[0x3];                                     // Fixing Size After Last Property..
	class FName                                  DisplayName;                                       // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ParentName;                                        // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ParentIndex;                                       // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SpaceName;                                         // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SpaceIndex;                                        // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BAF[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            OffsetTransform;                                   // 0x30(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigControlValue                      InitialValue;                                      // 0x90(0x84)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigControlValue                      Value;                                             // 0x114(0x84)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	enum class ERigControlAxis                   PrimaryAxis;                                       // 0x198(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsCurve;                                          // 0x199(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAnimatable;                                       // 0x19A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLimitTranslation;                                 // 0x19B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLimitRotation;                                    // 0x19C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLimitScale;                                       // 0x19D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawLimits;                                       // 0x19E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BB0[0x1];                                     // Fixing Size After Last Property..
	struct FRigControlValue                      MinimumValue;                                      // 0x1A0(0x84)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigControlValue                      MaximumValue;                                      // 0x224(0x84)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bGizmoEnabled;                                     // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGizmoVisible;                                     // 0x2A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BB1[0x2];                                     // Fixing Size After Last Property..
	class FName                                  GizmoName;                                         // 0x2AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            GizmoTransform;                                    // 0x2B0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          GizmoColor;                                        // 0x310(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                Dependents;                                        // 0x320(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	bool                                         bIsTransientControl;                               // 0x330(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BB2[0x7];                                     // Fixing Size After Last Property..
	class UEnum*                                 ControlEnum;                                       // 0x338(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigControlHierarchy
struct FRigControlHierarchy
{
public:
	TArray<struct FRigControl>                   Controls;                                          // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x8 (0x18 - 0x10)
// ScriptStruct ControlRig.RigCurve
struct FRigCurve : public FRigElement
{
public:
	float                                        Value;                                             // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BB3[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigCurveContainer
struct FRigCurveContainer
{
public:
	TArray<struct FRigCurve>                     Curves;                                            // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0xD0 (0xE0 - 0x10)
// ScriptStruct ControlRig.RigSpace
struct FRigSpace : public FRigElement
{
public:
	enum class ERigSpaceType                     SpaceType;                                         // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BB4[0x3];                                     // Fixing Size After Last Property..
	class FName                                  ParentName;                                        // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ParentIndex;                                       // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BB5[0x4];                                     // Fixing Size After Last Property..
	struct FTransform                            InitialTransform;                                  // 0x20(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            LocalTransform;                                    // 0x80(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigSpaceHierarchy
struct FRigSpaceHierarchy
{
public:
	TArray<struct FRigSpace>                     Spaces;                                            // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ControlRig.RigHierarchyContainer
struct FRigHierarchyContainer
{
public:
	struct FRigBoneHierarchy                     BoneHierarchy;                                     // 0x0(0x10)(NativeAccessSpecifierPublic)
	struct FRigSpaceHierarchy                    SpaceHierarchy;                                    // 0x10(0x10)(NativeAccessSpecifierPublic)
	struct FRigControlHierarchy                  ControlHierarchy;                                  // 0x20(0x10)(NativeAccessSpecifierPublic)
	struct FRigCurveContainer                    CurveContainer;                                    // 0x30(0x10)(NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct ControlRig.RigHierarchyRef
struct FRigHierarchyRef
{
public:
	uint8                                        Pad_3BB6[0x1];                                     // Fixing Size Of Struct..
};

// 0x14 (0x14 - 0x0)
// ScriptStruct ControlRig.RigControlModifiedContext
struct FRigControlModifiedContext
{
public:
	uint8                                        Pad_3BB7[0x14];                                    // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigElementKeyCollection
struct FRigElementKeyCollection
{
public:
	TArray<struct FRigElementKey>                Keys;                                              // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ControlRig.RigEventContext
struct FRigEventContext
{
public:
	uint8                                        Pad_3BB8[0x20];                                    // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ControlRig.RigBaseMetadata
struct FRigBaseMetadata
{
public:
	uint8                                        Pad_3BB9[0x10];                                    // Fixing Size After Last Property..
	class FName                                  Name;                                              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ERigMetadataType                  Type;                                              // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3BBA[0xB];                                     // Fixing Size Of Struct..
};

// 0x8 (0x28 - 0x20)
// ScriptStruct ControlRig.RigBoolMetadata
struct FRigBoolMetadata : public FRigBaseMetadata
{
public:
	bool                                         Value;                                             // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3BBB[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x30 - 0x20)
// ScriptStruct ControlRig.RigBoolArrayMetadata
struct FRigBoolArrayMetadata : public FRigBaseMetadata
{
public:
	TArray<bool>                                 Value;                                             // 0x20(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x8 (0x28 - 0x20)
// ScriptStruct ControlRig.RigFloatMetadata
struct FRigFloatMetadata : public FRigBaseMetadata
{
public:
	float                                        Value;                                             // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3BBC[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x30 - 0x20)
// ScriptStruct ControlRig.RigFloatArrayMetadata
struct FRigFloatArrayMetadata : public FRigBaseMetadata
{
public:
	TArray<float>                                Value;                                             // 0x20(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x8 (0x28 - 0x20)
// ScriptStruct ControlRig.RigInt32Metadata
struct FRigInt32Metadata : public FRigBaseMetadata
{
public:
	int32                                        Value;                                             // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3BBD[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x30 - 0x20)
// ScriptStruct ControlRig.RigInt32ArrayMetadata
struct FRigInt32ArrayMetadata : public FRigBaseMetadata
{
public:
	TArray<int32>                                Value;                                             // 0x20(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x8 (0x28 - 0x20)
// ScriptStruct ControlRig.RigNameMetadata
struct FRigNameMetadata : public FRigBaseMetadata
{
public:
	class FName                                  Value;                                             // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3BBE[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x30 - 0x20)
// ScriptStruct ControlRig.RigNameArrayMetadata
struct FRigNameArrayMetadata : public FRigBaseMetadata
{
public:
	TArray<class FName>                          Value;                                             // 0x20(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x18 (0x38 - 0x20)
// ScriptStruct ControlRig.RigVectorMetadata
struct FRigVectorMetadata : public FRigBaseMetadata
{
public:
	struct FVector                               Value;                                             // 0x20(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x10 (0x30 - 0x20)
// ScriptStruct ControlRig.RigVectorArrayMetadata
struct FRigVectorArrayMetadata : public FRigBaseMetadata
{
public:
	TArray<struct FVector>                       Value;                                             // 0x20(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x18 (0x38 - 0x20)
// ScriptStruct ControlRig.RigRotatorMetadata
struct FRigRotatorMetadata : public FRigBaseMetadata
{
public:
	struct FRotator                              Value;                                             // 0x20(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
};

// 0x10 (0x30 - 0x20)
// ScriptStruct ControlRig.RigRotatorArrayMetadata
struct FRigRotatorArrayMetadata : public FRigBaseMetadata
{
public:
	TArray<struct FRotator>                      Value;                                             // 0x20(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x20 (0x40 - 0x20)
// ScriptStruct ControlRig.RigQuatMetadata
struct FRigQuatMetadata : public FRigBaseMetadata
{
public:
	struct FQuat                                 Value;                                             // 0x20(0x20)(IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x10 (0x30 - 0x20)
// ScriptStruct ControlRig.RigQuatArrayMetadata
struct FRigQuatArrayMetadata : public FRigBaseMetadata
{
public:
	TArray<struct FQuat>                         Value;                                             // 0x20(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x60 (0x80 - 0x20)
// ScriptStruct ControlRig.RigTransformMetadata
struct FRigTransformMetadata : public FRigBaseMetadata
{
public:
	struct FTransform                            Value;                                             // 0x20(0x60)(IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x10 (0x30 - 0x20)
// ScriptStruct ControlRig.RigTransformArrayMetadata
struct FRigTransformArrayMetadata : public FRigBaseMetadata
{
public:
	TArray<struct FTransform>                    Value;                                             // 0x20(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x10 (0x30 - 0x20)
// ScriptStruct ControlRig.RigLinearColorMetadata
struct FRigLinearColorMetadata : public FRigBaseMetadata
{
public:
	struct FLinearColor                          Value;                                             // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x10 (0x30 - 0x20)
// ScriptStruct ControlRig.RigLinearColorArrayMetadata
struct FRigLinearColorArrayMetadata : public FRigBaseMetadata
{
public:
	TArray<struct FLinearColor>                  Value;                                             // 0x20(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x8 (0x28 - 0x20)
// ScriptStruct ControlRig.RigElementKeyMetadata
struct FRigElementKeyMetadata : public FRigBaseMetadata
{
public:
	struct FRigElementKey                        Value;                                             // 0x20(0x8)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x10 (0x30 - 0x20)
// ScriptStruct ControlRig.RigElementKeyArrayMetadata
struct FRigElementKeyArrayMetadata : public FRigBaseMetadata
{
public:
	TArray<struct FRigElementKey>                Value;                                             // 0x20(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigInfluenceEntryModifier
struct FRigInfluenceEntryModifier
{
public:
	TArray<struct FRigElementKey>                AffectedList;                                      // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x30 - 0x10)
// ScriptStruct ControlRig.AnimNode_ControlRigInputPose
struct FAnimNode_ControlRigInputPose : public FAnimNode_Base
{
public:
	struct FPoseLink                             InputPose;                                         // 0x10(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BBF[0x10];                                    // Fixing Size Of Struct..
};

// 0xA8 (0x7A0 - 0x6F8)
// ScriptStruct ControlRig.ControlRigLayerInstanceProxy
struct FControlRigLayerInstanceProxy : public FAnimInstanceProxy
{
public:
	uint8                                        Pad_3BC0[0xA8];                                    // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ControlRig.ControlRigSequenceObjectReference
struct FControlRigSequenceObjectReference
{
public:
	TSubclassOf<class UControlRig>               ControlRigClass;                                   // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.ControlRigSequenceObjectReferences
struct FControlRigSequenceObjectReferences
{
public:
	TArray<struct FControlRigSequenceObjectReference> Array;                                             // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ControlRig.ControlRigSequenceObjectReferenceMap
struct FControlRigSequenceObjectReferenceMap
{
public:
	TArray<struct FGuid>                         BindingIds;                                        // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FControlRigSequenceObjectReferences> References;                                        // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x110 (0x110 - 0x0)
// ScriptStruct ControlRig.EnumParameterNameAndCurve
struct FEnumParameterNameAndCurve
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BC1[0x4];                                     // Fixing Size After Last Property..
	struct FMovieSceneByteChannel                ParameterCurve;                                    // 0x8(0x108)(NativeAccessSpecifierPublic)
};

// 0x108 (0x108 - 0x0)
// ScriptStruct ControlRig.IntegerParameterNameAndCurve
struct FIntegerParameterNameAndCurve
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BC2[0x4];                                     // Fixing Size After Last Property..
	struct FMovieSceneIntegerChannel             ParameterCurve;                                    // 0x8(0x100)(NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct ControlRig.MovieSceneControlRigSpaceBaseKey
struct FMovieSceneControlRigSpaceBaseKey
{
public:
	enum class EMovieSceneControlRigSpaceType    SpaceType;                                         // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BC3[0x3];                                     // Fixing Size After Last Property..
	struct FRigElementKey                        ControlRigElement;                                 // 0x4(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0x110 - 0x50)
// ScriptStruct ControlRig.MovieSceneControlRigSpaceChannel
struct FMovieSceneControlRigSpaceChannel : public FMovieSceneChannel
{
public:
	TArray<struct FFrameNumber>                  KeyTimes;                                          // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneControlRigSpaceBaseKey> KeyValues;                                         // 0x60(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FMovieSceneKeyHandleMap               KeyHandles;                                        // 0x70(0x88)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3BC4[0x18];                                    // Fixing Size Of Struct..
};

// 0x118 (0x118 - 0x0)
// ScriptStruct ControlRig.SpaceControlNameAndChannel
struct FSpaceControlNameAndChannel
{
public:
	class FName                                  ControlName;                                       // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BC5[0x4];                                     // Fixing Size After Last Property..
	struct FMovieSceneControlRigSpaceChannel     SpaceCurve;                                        // 0x8(0x110)(NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ControlRig.ChannelMapInfo
struct FChannelMapInfo
{
public:
	int32                                        ControlIndex;                                      // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalChannelIndex;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChannelIndex;                                      // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ParentControlIndex;                                // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ChannelTypeName;                                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDoesHaveSpace;                                    // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BC6[0x3];                                     // Fixing Size After Last Property..
	int32                                        SpaceChannelIndex;                                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaskIndex;                                         // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CategoryIndex;                                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BC7[0x4];                                     // Fixing Size After Last Property..
	TArray<uint32>                               ConstraintsIndex;                                  // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0xC0 - 0x80)
// ScriptStruct ControlRig.MovieSceneControlRigParameterTemplate
struct FMovieSceneControlRigParameterTemplate : public FMovieSceneParameterSectionTemplate
{
public:
	TArray<struct FEnumParameterNameAndCurve>    Enums;                                             // 0x80(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FIntegerParameterNameAndCurve> Integers;                                          // 0x90(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FSpaceControlNameAndChannel>   Spaces;                                            // 0xA0(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FConstraintAndActiveChannel>   Constraints;                                       // 0xB0(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ControlRig.ControlRigSettingsPerPinBool
struct FControlRigSettingsPerPinBool
{
public:
	TMap<class FString, bool>                    Values;                                            // 0x0(0x50)(Edit, NativeAccessSpecifierPublic)
};

// 0x230 (0x230 - 0x0)
// ScriptStruct ControlRig.RigControlCopy
struct FRigControlCopy
{
public:
	uint8                                        Pad_3BC8[0x10];                                    // Fixing Size After Last Property..
	class FName                                  Name;                                              // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigControlType                   ControlType;                                       // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BC9[0x3];                                     // Fixing Size After Last Property..
	struct FRigControlValue                      Value;                                             // 0x18(0x84)(NoDestructor, NativeAccessSpecifierPublic)
	struct FRigElementKey                        ParentKey;                                         // 0x9C(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BCA[0xC];                                     // Fixing Size After Last Property..
	struct FTransform                            OffsetTransform;                                   // 0xB0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            ParentTransform;                                   // 0x110(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            LocalTransform;                                    // 0x170(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            GlobalTransform;                                   // 0x1D0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ControlRig.ControlRigControlPose
struct FControlRigControlPose
{
public:
	TArray<struct FRigControlCopy>               CopyOfControls;                                    // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BCB[0x50];                                    // Fixing Size Of Struct..
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigDispatchFactory
struct FRigDispatchFactory : public FRigVMDispatchFactory
{
public:
};

// 0x30 (0x48 - 0x18)
// ScriptStruct ControlRig.RigDispatch_AnimAttributeBase
struct FRigDispatch_AnimAttributeBase : public FRigDispatchFactory
{
public:
	uint8                                        Pad_3BCC[0x30];                                    // Fixing Size Of Struct..
};

// 0x0 (0x48 - 0x48)
// ScriptStruct ControlRig.RigDispatch_GetAnimAttribute
struct FRigDispatch_GetAnimAttribute : public FRigDispatch_AnimAttributeBase
{
public:
};

// 0x0 (0x48 - 0x48)
// ScriptStruct ControlRig.RigDispatch_SetAnimAttribute
struct FRigDispatch_SetAnimAttribute : public FRigDispatch_AnimAttributeBase
{
public:
};

// 0x70 (0x78 - 0x8)
// ScriptStruct ControlRig.RigUnit_SphereTraceWorld
struct FRigUnit_SphereTraceWorld : public FRigUnit
{
public:
	struct FVector                               Start;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               End;                                               // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 Channel;                                           // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BCD[0x3];                                     // Fixing Size After Last Property..
	float                                        Radius;                                            // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHit;                                              // 0x40(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BCE[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               HitLocation;                                       // 0x48(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitNormal;                                         // 0x60(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x78 - 0x8)
// ScriptStruct ControlRig.RigUnit_SphereTraceByTraceChannel
struct FRigUnit_SphereTraceByTraceChannel : public FRigUnit
{
public:
	struct FVector                               Start;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               End;                                               // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETraceTypeQuery                   TraceChannel;                                      // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BCF[0x3];                                     // Fixing Size After Last Property..
	float                                        Radius;                                            // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHit;                                              // 0x40(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BD0[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               HitLocation;                                       // 0x48(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitNormal;                                         // 0x60(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x80 - 0x8)
// ScriptStruct ControlRig.RigUnit_SphereTraceByObjectTypes
struct FRigUnit_SphereTraceByObjectTypes : public FRigUnit
{
public:
	struct FVector                               Start;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               End;                                               // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class EObjectTypeQuery>          ObjectTypes;                                       // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHit;                                              // 0x4C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BD1[0x3];                                     // Fixing Size After Last Property..
	struct FVector                               HitLocation;                                       // 0x50(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitNormal;                                         // 0x68(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x178 (0x180 - 0x8)
// ScriptStruct ControlRig.RigUnit_Control
struct FRigUnit_Control : public FRigUnit
{
public:
	struct FEulerTransform                       Transform;                                         // 0x8(0x48)(Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Base;                                              // 0x50(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            InitTransform;                                     // 0xB0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Result;                                            // 0x110(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransformFilter                      Filter;                                            // 0x170(0x9)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bIsInitialized;                                    // 0x179(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BD2[0x6];                                     // Fixing Size Of Struct..
};

// 0x60 (0x1E0 - 0x180)
// ScriptStruct ControlRig.RigUnit_Control_StaticMesh
struct FRigUnit_Control_StaticMesh : public FRigUnit_Control
{
public:
	struct FTransform                            MeshTransform;                                     // 0x180(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigDispatch_GetUserData
struct FRigDispatch_GetUserData : public FRigDispatchFactory
{
public:
};

// 0x40 (0x1A0 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetupShapeLibraryFromUserData
struct FRigUnit_SetupShapeLibraryFromUserData : public FRigUnitMutable
{
public:
	class FString                                Namespace;                                         // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Path;                                              // 0x170(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LibraryName;                                       // 0x180(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReplaceExisting;                                   // 0x190(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         LogShapeLibraries;                                 // 0x191(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BD3[0xE];                                     // Fixing Size Of Struct..
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_ShapeExists
struct FRigUnit_ShapeExists : public FRigUnit
{
public:
	class FName                                  ShapeName;                                         // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BD4[0x3];                                     // Fixing Size Of Struct..
};

// 0x100 (0x200 - 0x100)
// ScriptStruct ControlRig.RigUnit_DebugBezier
struct FRigUnit_DebugBezier : public FRigVMFunction_DebugBaseMutable
{
public:
	struct FRigVMFourPointBezier                 Bezier;                                            // 0x100(0x60)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        MinimumU;                                          // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumU;                                          // 0x164(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x168(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x178(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Detail;                                            // 0x17C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0x180(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BD5[0xC];                                     // Fixing Size After Last Property..
	struct FTransform                            WorldOffset;                                       // 0x190(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x1F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BD6[0xF];                                     // Fixing Size Of Struct..
};

// 0x100 (0x200 - 0x100)
// ScriptStruct ControlRig.RigUnit_DebugBezierItemSpace
struct FRigUnit_DebugBezierItemSpace : public FRigVMFunction_DebugBaseMutable
{
public:
	struct FRigVMFourPointBezier                 Bezier;                                            // 0x100(0x60)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        MinimumU;                                          // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumU;                                          // 0x164(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x168(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x178(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Detail;                                            // 0x17C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Space;                                             // 0x180(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BD7[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            WorldOffset;                                       // 0x190(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x1F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BD8[0xF];                                     // Fixing Size Of Struct..
};

// 0x1E8 (0x1F0 - 0x8)
// ScriptStruct ControlRig.RigUnit_DebugHierarchy
struct FRigUnit_DebugHierarchy : public FRigVMFunction_DebugBase
{
public:
	uint8                                        Pad_3BD9[0x8];                                     // Fixing Size After Last Property..
	struct FControlRigExecuteContext             ExecuteContext;                                    // 0x10(0x150)(Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x164(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x174(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BDA[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            WorldOffset;                                       // 0x180(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x1E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BDB[0xF];                                     // Fixing Size Of Struct..
};

// 0x258 (0x260 - 0x8)
// ScriptStruct ControlRig.RigUnit_DebugPose
struct FRigUnit_DebugPose : public FRigVMFunction_DebugBase
{
public:
	uint8                                        Pad_3BDC[0x8];                                     // Fixing Size After Last Property..
	struct FControlRigExecuteContext             ExecuteContext;                                    // 0x10(0x150)(Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	struct FRigPose                              Pose;                                              // 0x160(0x70)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x1D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x1D4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x1E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BDD[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            WorldOffset;                                       // 0x1F0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x250(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BDE[0xF];                                     // Fixing Size Of Struct..
};

// 0xC0 (0x220 - 0x160)
// ScriptStruct ControlRig.RigUnit_DebugLine
struct FRigUnit_DebugLine : public FRigUnit_DebugBaseMutable
{
public:
	struct FVector                               A;                                                 // 0x160(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               B;                                                 // 0x178(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x190(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x1A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0x1A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BDF[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            WorldOffset;                                       // 0x1B0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x210(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BE0[0xF];                                     // Fixing Size Of Struct..
};

// 0xC0 (0x220 - 0x160)
// ScriptStruct ControlRig.RigUnit_DebugLineItemSpace
struct FRigUnit_DebugLineItemSpace : public FRigUnit_DebugBaseMutable
{
public:
	struct FVector                               A;                                                 // 0x160(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               B;                                                 // 0x178(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x190(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x1A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Space;                                             // 0x1A4(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BE1[0x4];                                     // Fixing Size After Last Property..
	struct FTransform                            WorldOffset;                                       // 0x1B0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x210(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BE2[0xF];                                     // Fixing Size Of Struct..
};

// 0xA0 (0x200 - 0x160)
// ScriptStruct ControlRig.RigUnit_DebugLineStrip
struct FRigUnit_DebugLineStrip : public FRigUnit_DebugBaseMutable
{
public:
	TArray<struct FVector>                       Points;                                            // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x170(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x180(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0x184(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BE3[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            WorldOffset;                                       // 0x190(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x1F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BE4[0xF];                                     // Fixing Size Of Struct..
};

// 0xA0 (0x200 - 0x160)
// ScriptStruct ControlRig.RigUnit_DebugLineStripItemSpace
struct FRigUnit_DebugLineStripItemSpace : public FRigUnit_DebugBaseMutable
{
public:
	TArray<struct FVector>                       Points;                                            // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x170(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x180(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Space;                                             // 0x184(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BE5[0x4];                                     // Fixing Size After Last Property..
	struct FTransform                            WorldOffset;                                       // 0x190(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x1F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BE6[0xF];                                     // Fixing Size Of Struct..
};

// 0xF0 (0x250 - 0x160)
// ScriptStruct ControlRig.RigUnit_DebugRectangle
struct FRigUnit_DebugRectangle : public FRigUnit_DebugBaseMutable
{
public:
	struct FTransform                            Transform;                                         // 0x160(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x1C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x1D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x1D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0x1D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BE7[0x4];                                     // Fixing Size After Last Property..
	struct FTransform                            WorldOffset;                                       // 0x1E0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x240(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BE8[0xF];                                     // Fixing Size Of Struct..
};

// 0xF0 (0x250 - 0x160)
// ScriptStruct ControlRig.RigUnit_DebugRectangleItemSpace
struct FRigUnit_DebugRectangleItemSpace : public FRigUnit_DebugBaseMutable
{
public:
	struct FTransform                            Transform;                                         // 0x160(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x1C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x1D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x1D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Space;                                             // 0x1D8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            WorldOffset;                                       // 0x1E0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x240(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BE9[0xF];                                     // Fixing Size Of Struct..
};

// 0x100 (0x260 - 0x160)
// ScriptStruct ControlRig.RigUnit_DebugArc
struct FRigUnit_DebugArc : public FRigUnit_DebugBaseMutable
{
public:
	struct FTransform                            Transform;                                         // 0x160(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x1C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x1D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumDegrees;                                    // 0x1D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumDegrees;                                    // 0x1D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x1DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Detail;                                            // 0x1E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0x1E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BEA[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            WorldOffset;                                       // 0x1F0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x250(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BEB[0xF];                                     // Fixing Size Of Struct..
};

// 0x100 (0x260 - 0x160)
// ScriptStruct ControlRig.RigUnit_DebugArcItemSpace
struct FRigUnit_DebugArcItemSpace : public FRigUnit_DebugBaseMutable
{
public:
	struct FTransform                            Transform;                                         // 0x160(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x1C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x1D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumDegrees;                                    // 0x1D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumDegrees;                                    // 0x1D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x1DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Detail;                                            // 0x1E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Space;                                             // 0x1E4(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BEC[0x4];                                     // Fixing Size After Last Property..
	struct FTransform                            WorldOffset;                                       // 0x1F0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x250(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BED[0xF];                                     // Fixing Size Of Struct..
};

// 0xF8 (0x100 - 0x8)
// ScriptStruct ControlRig.RigUnit_DebugTransform
struct FRigUnit_DebugTransform : public FRigUnit_DebugBase
{
public:
	uint8                                        Pad_3BEE[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            Transform;                                         // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigUnitDebugTransformMode        Mode;                                              // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BEF[0x3];                                     // Fixing Size After Last Property..
	struct FLinearColor                          Color;                                             // 0x74(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0x8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            WorldOffset;                                       // 0x90(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0xF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BF0[0xF];                                     // Fixing Size Of Struct..
};

// 0xF0 (0x250 - 0x160)
// ScriptStruct ControlRig.RigUnit_DebugTransformMutable
struct FRigUnit_DebugTransformMutable : public FRigUnit_DebugBaseMutable
{
public:
	struct FTransform                            Transform;                                         // 0x160(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigUnitDebugTransformMode        Mode;                                              // 0x1C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BF1[0x3];                                     // Fixing Size After Last Property..
	struct FLinearColor                          Color;                                             // 0x1C4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x1D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x1D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0x1DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            WorldOffset;                                       // 0x1E0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x240(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BF2[0xF];                                     // Fixing Size Of Struct..
};

// 0x100 (0x260 - 0x160)
// ScriptStruct ControlRig.RigUnit_DebugTransformMutableItemSpace
struct FRigUnit_DebugTransformMutableItemSpace : public FRigUnit_DebugBaseMutable
{
public:
	struct FTransform                            Transform;                                         // 0x160(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigUnitDebugTransformMode        Mode;                                              // 0x1C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BF3[0x3];                                     // Fixing Size After Last Property..
	struct FLinearColor                          Color;                                             // 0x1C4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x1D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x1D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Space;                                             // 0x1DC(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BF4[0xC];                                     // Fixing Size After Last Property..
	struct FTransform                            WorldOffset;                                       // 0x1F0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x250(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BF5[0xF];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigUnit_DebugTransformArrayMutable_WorkData
struct FRigUnit_DebugTransformArrayMutable_WorkData
{
public:
	TArray<struct FTransform>                    DrawTransforms;                                    // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xB0 (0x210 - 0x160)
// ScriptStruct ControlRig.RigUnit_DebugTransformArrayMutable
struct FRigUnit_DebugTransformArrayMutable : public FRigUnit_DebugBaseMutable
{
public:
	TArray<struct FTransform>                    Transforms;                                        // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ERigUnitDebugTransformMode        Mode;                                              // 0x170(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BF6[0x3];                                     // Fixing Size After Last Property..
	struct FLinearColor                          Color;                                             // 0x174(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x184(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x188(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0x18C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            WorldOffset;                                       // 0x190(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x1F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BF7[0x7];                                     // Fixing Size After Last Property..
	struct FRigUnit_DebugTransformArrayMutable_WorkData WorkData;                                          // 0x1F8(0x10)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BF8[0x8];                                     // Fixing Size Of Struct..
};

// 0xC0 (0x220 - 0x160)
// ScriptStruct ControlRig.RigUnit_DebugTransformArrayMutableItemSpace
struct FRigUnit_DebugTransformArrayMutableItemSpace : public FRigUnit_DebugBaseMutable
{
public:
	TArray<struct FTransform>                    Transforms;                                        // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                ParentIndices;                                     // 0x170(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ERigUnitDebugTransformMode        Mode;                                              // 0x180(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BF9[0x3];                                     // Fixing Size After Last Property..
	struct FLinearColor                          Color;                                             // 0x184(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x194(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x198(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Space;                                             // 0x19C(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BFA[0xC];                                     // Fixing Size After Last Property..
	struct FTransform                            WorldOffset;                                       // 0x1B0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x210(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BFB[0xF];                                     // Fixing Size Of Struct..
};

// 0x0 (0x100 - 0x100)
// ScriptStruct ControlRig.RigUnit_StartProfilingTimer
struct FRigUnit_StartProfilingTimer : public FRigVMFunction_DebugBaseMutable
{
public:
};

// 0x30 (0x130 - 0x100)
// ScriptStruct ControlRig.RigUnit_EndProfilingTimer
struct FRigUnit_EndProfilingTimer : public FRigVMFunction_DebugBaseMutable
{
public:
	int32                                        NumberOfMeasurements;                              // 0x100(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BFC[0x4];                                     // Fixing Size After Last Property..
	class FString                                Prefix;                                            // 0x108(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccumulatedTime;                                   // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MeasurementsLeft;                                  // 0x11C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInitialized;                                    // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BFD[0xF];                                     // Fixing Size Of Struct..
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_VisualDebugVector
struct FRigUnit_VisualDebugVector : public FRigUnit_DebugBase
{
public:
	struct FVector                               Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigUnitVisualDebugPointMode      Mode;                                              // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BFE[0x2];                                     // Fixing Size After Last Property..
	struct FLinearColor                          Color;                                             // 0x24(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneSpace;                                         // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct ControlRig.RigUnit_VisualDebugVectorItemSpace
struct FRigUnit_VisualDebugVectorItemSpace : public FRigUnit_DebugBase
{
public:
	struct FVector                               Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigUnitVisualDebugPointMode      Mode;                                              // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BFF[0x2];                                     // Fixing Size After Last Property..
	struct FLinearColor                          Color;                                             // 0x24(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Space;                                             // 0x3C(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C00[0x4];                                     // Fixing Size Of Struct..
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_VisualDebugQuat
struct FRigUnit_VisualDebugQuat : public FRigUnit_DebugBase
{
public:
	uint8                                        Pad_3C01[0x8];                                     // Fixing Size After Last Property..
	struct FQuat                                 Value;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C02[0x3];                                     // Fixing Size After Last Property..
	float                                        Thickness;                                         // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneSpace;                                         // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_VisualDebugQuatItemSpace
struct FRigUnit_VisualDebugQuatItemSpace : public FRigUnit_DebugBase
{
public:
	uint8                                        Pad_3C03[0x8];                                     // Fixing Size After Last Property..
	struct FQuat                                 Value;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C04[0x3];                                     // Fixing Size After Last Property..
	float                                        Thickness;                                         // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Space;                                             // 0x3C(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C05[0xC];                                     // Fixing Size Of Struct..
};

// 0x78 (0x80 - 0x8)
// ScriptStruct ControlRig.RigUnit_VisualDebugTransform
struct FRigUnit_VisualDebugTransform : public FRigUnit_DebugBase
{
public:
	uint8                                        Pad_3C06[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            Value;                                             // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C07[0x3];                                     // Fixing Size After Last Property..
	float                                        Thickness;                                         // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneSpace;                                         // 0x7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_VisualDebugTransformItemSpace
struct FRigUnit_VisualDebugTransformItemSpace : public FRigUnit_DebugBase
{
public:
	uint8                                        Pad_3C08[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            Value;                                             // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C09[0x3];                                     // Fixing Size After Last Property..
	float                                        Thickness;                                         // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Space;                                             // 0x7C(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C0A[0xC];                                     // Fixing Size Of Struct..
};

// 0xB8 (0xC0 - 0x8)
// ScriptStruct ControlRig.RigUnit_ConvertTransform
struct FRigUnit_ConvertTransform : public FRigUnit
{
public:
	uint8                                        Pad_3C0B[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            Input;                                             // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEulerTransform                       Result;                                            // 0x70(0x48)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C0C[0x8];                                     // Fixing Size Of Struct..
};

// 0xA8 (0xB0 - 0x8)
// ScriptStruct ControlRig.RigUnit_ConvertEulerTransform
struct FRigUnit_ConvertEulerTransform : public FRigUnit
{
public:
	struct FEulerTransform                       Input;                                             // 0x8(0x48)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Result;                                            // 0x50(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_ConvertRotation
struct FRigUnit_ConvertRotation : public FRigUnit
{
public:
	struct FRotator                              Input;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FQuat                                 Result;                                            // 0x20(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x40 - 0x40)
// ScriptStruct ControlRig.RigUnit_ConvertVectorRotation
struct FRigUnit_ConvertVectorRotation : public FRigUnit_ConvertRotation
{
public:
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_ConvertQuaternion
struct FRigUnit_ConvertQuaternion : public FRigUnit
{
public:
	uint8                                        Pad_3C0D[0x8];                                     // Fixing Size After Last Property..
	struct FQuat                                 Input;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Result;                                            // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C0E[0x8];                                     // Fixing Size Of Struct..
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_ConvertVectorToRotation
struct FRigUnit_ConvertVectorToRotation : public FRigUnit
{
public:
	struct FVector                               Input;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Result;                                            // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_ConvertVectorToQuaternion
struct FRigUnit_ConvertVectorToQuaternion : public FRigUnit
{
public:
	struct FVector                               Input;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 Result;                                            // 0x20(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_ConvertRotationToVector
struct FRigUnit_ConvertRotationToVector : public FRigUnit
{
public:
	struct FRotator                              Input;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_ConvertQuaternionToVector
struct FRigUnit_ConvertQuaternionToVector : public FRigUnit
{
public:
	uint8                                        Pad_3C0F[0x8];                                     // Fixing Size After Last Property..
	struct FQuat                                 Input;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C10[0x8];                                     // Fixing Size Of Struct..
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_ToSwingAndTwist
struct FRigUnit_ToSwingAndTwist : public FRigUnit
{
public:
	uint8                                        Pad_3C11[0x8];                                     // Fixing Size After Last Property..
	struct FQuat                                 Input;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TwistAxis;                                         // 0x30(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C12[0x8];                                     // Fixing Size After Last Property..
	struct FQuat                                 Swing;                                             // 0x50(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 Twist;                                             // 0x70(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_BinaryFloatOp
struct FRigUnit_BinaryFloatOp : public FRigUnit
{
public:
	float                                        Argument0;                                         // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Argument1;                                         // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C13[0x4];                                     // Fixing Size Of Struct..
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_Multiply_FloatFloat
struct FRigUnit_Multiply_FloatFloat : public FRigUnit_BinaryFloatOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_Add_FloatFloat
struct FRigUnit_Add_FloatFloat : public FRigUnit_BinaryFloatOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_Subtract_FloatFloat
struct FRigUnit_Subtract_FloatFloat : public FRigUnit_BinaryFloatOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_Divide_FloatFloat
struct FRigUnit_Divide_FloatFloat : public FRigUnit_BinaryFloatOp
{
public:
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_Clamp_Float
struct FRigUnit_Clamp_Float : public FRigUnit
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Min;                                               // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Max;                                               // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_MapRange_Float
struct FRigUnit_MapRange_Float : public FRigUnit
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinIn;                                             // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxIn;                                             // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinOut;                                            // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxOut;                                            // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x70 - 0x8)
// ScriptStruct ControlRig.RigUnit_BinaryQuaternionOp
struct FRigUnit_BinaryQuaternionOp : public FRigUnit
{
public:
	uint8                                        Pad_3C14[0x8];                                     // Fixing Size After Last Property..
	struct FQuat                                 Argument0;                                         // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 Argument1;                                         // 0x30(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 Result;                                            // 0x50(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x70 - 0x70)
// ScriptStruct ControlRig.RigUnit_MultiplyQuaternion
struct FRigUnit_MultiplyQuaternion : public FRigUnit_BinaryQuaternionOp
{
public:
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_UnaryQuaternionOp
struct FRigUnit_UnaryQuaternionOp : public FRigUnit
{
public:
	uint8                                        Pad_3C15[0x8];                                     // Fixing Size After Last Property..
	struct FQuat                                 Argument;                                          // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 Result;                                            // 0x30(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x50 - 0x50)
// ScriptStruct ControlRig.RigUnit_InverseQuaterion
struct FRigUnit_InverseQuaterion : public FRigUnit_UnaryQuaternionOp
{
public:
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_QuaternionToAxisAndAngle
struct FRigUnit_QuaternionToAxisAndAngle : public FRigUnit
{
public:
	uint8                                        Pad_3C16[0x8];                                     // Fixing Size After Last Property..
	struct FQuat                                 Argument;                                          // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Axis;                                              // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Angle;                                             // 0x48(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C17[0x4];                                     // Fixing Size Of Struct..
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_QuaternionFromAxisAndAngle
struct FRigUnit_QuaternionFromAxisAndAngle : public FRigUnit
{
public:
	struct FVector                               Axis;                                              // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Angle;                                             // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C18[0xC];                                     // Fixing Size After Last Property..
	struct FQuat                                 Result;                                            // 0x30(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_QuaternionToAngle
struct FRigUnit_QuaternionToAngle : public FRigUnit
{
public:
	struct FVector                               Axis;                                              // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 Argument;                                          // 0x20(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Angle;                                             // 0x40(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C19[0xC];                                     // Fixing Size Of Struct..
};

// 0x128 (0x130 - 0x8)
// ScriptStruct ControlRig.RigUnit_BinaryTransformOp
struct FRigUnit_BinaryTransformOp : public FRigUnit
{
public:
	uint8                                        Pad_3C1A[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            Argument0;                                         // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Argument1;                                         // 0x70(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Result;                                            // 0xD0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x130 - 0x130)
// ScriptStruct ControlRig.RigUnit_MultiplyTransform
struct FRigUnit_MultiplyTransform : public FRigUnit_BinaryTransformOp
{
public:
};

// 0x0 (0x130 - 0x130)
// ScriptStruct ControlRig.RigUnit_GetRelativeTransform
struct FRigUnit_GetRelativeTransform : public FRigUnit_BinaryTransformOp
{
public:
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_BinaryVectorOp
struct FRigUnit_BinaryVectorOp : public FRigUnit
{
public:
	struct FVector                               Argument0;                                         // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Argument1;                                         // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x50 - 0x50)
// ScriptStruct ControlRig.RigUnit_Multiply_VectorVector
struct FRigUnit_Multiply_VectorVector : public FRigUnit_BinaryVectorOp
{
public:
};

// 0x0 (0x50 - 0x50)
// ScriptStruct ControlRig.RigUnit_Add_VectorVector
struct FRigUnit_Add_VectorVector : public FRigUnit_BinaryVectorOp
{
public:
};

// 0x0 (0x50 - 0x50)
// ScriptStruct ControlRig.RigUnit_Subtract_VectorVector
struct FRigUnit_Subtract_VectorVector : public FRigUnit_BinaryVectorOp
{
public:
};

// 0x0 (0x50 - 0x50)
// ScriptStruct ControlRig.RigUnit_Divide_VectorVector
struct FRigUnit_Divide_VectorVector : public FRigUnit_BinaryVectorOp
{
public:
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_Distance_VectorVector
struct FRigUnit_Distance_VectorVector : public FRigUnit
{
public:
	struct FVector                               Argument0;                                         // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Argument1;                                         // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C1B[0x4];                                     // Fixing Size Of Struct..
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorBezierFourPoint
struct FRigUnit_MathVectorBezierFourPoint : public FRigVMFunction_MathVectorBase
{
public:
	struct FRigVMFourPointBezier                 Bezier;                                            // 0x8(0x60)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        T;                                                 // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C1C[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Result;                                            // 0x70(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Tangent;                                           // 0x88(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x68 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorMakeBezierFourPoint
struct FRigUnit_MathVectorMakeBezierFourPoint : public FRigVMFunction_MathVectorBase
{
public:
	struct FRigVMFourPointBezier                 Bezier;                                            // 0x8(0x60)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct ControlRig.AimTarget
struct FAimTarget
{
public:
	float                                        Weight;                                            // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C1D[0xC];                                     // Fixing Size After Last Property..
	struct FTransform                            Transform;                                         // 0x10(0x60)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AlignVector;                                       // 0x70(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C1E[0x8];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigUnit_AimConstraint_WorkData
struct FRigUnit_AimConstraint_WorkData
{
public:
	TArray<struct FConstraintData>               ConstraintData;                                    // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x70 (0x1D0 - 0x160)
// ScriptStruct ControlRig.RigUnit_AimConstraint
struct FRigUnit_AimConstraint : public FRigUnitMutable
{
public:
	class FName                                  Joint;                                             // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAimMode                          AimMode;                                           // 0x164(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAimMode                          UpMode;                                            // 0x165(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C1F[0x2];                                     // Fixing Size After Last Property..
	struct FVector                               AimVector;                                         // 0x168(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               UpVector;                                          // 0x180(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAimTarget>                    AimTargets;                                        // 0x198(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAimTarget>                    UpTargets;                                         // 0x1A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FRigUnit_AimConstraint_WorkData       WorkData;                                          // 0x1B8(0x10)(NativeAccessSpecifierPublic)
	uint8                                        Pad_3C20[0x8];                                     // Fixing Size Of Struct..
};

// 0xF0 (0x250 - 0x160)
// ScriptStruct ControlRig.RigUnit_ApplyFK
struct FRigUnit_ApplyFK : public FRigUnitMutable
{
public:
	class FName                                  Joint;                                             // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C21[0xC];                                     // Fixing Size After Last Property..
	struct FTransform                            Transform;                                         // 0x170(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransformFilter                      Filter;                                            // 0x1D0(0x9)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class EApplyTransformMode               ApplyTransformMode;                                // 0x1D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETransformSpaceMode               ApplyTransformSpace;                               // 0x1DA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C22[0x5];                                     // Fixing Size After Last Property..
	struct FTransform                            BaseTransform;                                     // 0x1E0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BaseJoint;                                         // 0x240(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C23[0xC];                                     // Fixing Size Of Struct..
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ControlRig.BlendTarget
struct FBlendTarget
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x60)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C24[0xC];                                     // Fixing Size Of Struct..
};

// 0xD8 (0xE0 - 0x8)
// ScriptStruct ControlRig.RigUnit_BlendTransform
struct FRigUnit_BlendTransform : public FRigUnit
{
public:
	uint8                                        Pad_3C25[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            Source;                                            // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FBlendTarget>                  Targets;                                           // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FTransform                            Result;                                            // 0x80(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE0 (0x240 - 0x160)
// ScriptStruct ControlRig.RigUnit_GetJointTransform
struct FRigUnit_GetJointTransform : public FRigUnitMutable
{
public:
	class FName                                  Joint;                                             // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETransformGetterType              Type;                                              // 0x164(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETransformSpaceMode               TransformSpace;                                    // 0x165(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C26[0xA];                                     // Fixing Size After Last Property..
	struct FTransform                            BaseTransform;                                     // 0x170(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BaseJoint;                                         // 0x1D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C27[0xC];                                     // Fixing Size After Last Property..
	struct FTransform                            Output;                                            // 0x1E0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x310 (0x470 - 0x160)
// ScriptStruct ControlRig.RigUnit_TwoBoneIKFK
struct FRigUnit_TwoBoneIKFK : public FRigUnitMutable
{
public:
	class FName                                  StartJoint;                                        // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EndJoint;                                          // 0x164(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PoleTarget;                                        // 0x168(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Spin;                                              // 0x180(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C28[0xC];                                     // Fixing Size After Last Property..
	struct FTransform                            EndEffector;                                       // 0x190(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IKBlend;                                           // 0x1F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C29[0xC];                                     // Fixing Size After Last Property..
	struct FTransform                            StartJointFKTransform;                             // 0x200(0x60)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTransform                            MidJointFKTransform;                               // 0x260(0x60)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTransform                            EndJointFKTransform;                               // 0x2C0(0x60)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        PreviousFKIKBlend;                                 // 0x320(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3C2A[0xC];                                     // Fixing Size After Last Property..
	struct FTransform                            StartJointIKTransform;                             // 0x330(0x60)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTransform                            MidJointIKTransform;                               // 0x390(0x60)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTransform                            EndJointIKTransform;                               // 0x3F0(0x60)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        StartJointIndex;                                   // 0x450(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        MidJointIndex;                                     // 0x454(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        EndJointIndex;                                     // 0x458(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        UpperLimbLength;                                   // 0x45C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        LowerLimbLength;                                   // 0x460(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsInitialized;                                    // 0x464(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3C2B[0xB];                                     // Fixing Size Of Struct..
};

// 0x78 (0x80 - 0x8)
// ScriptStruct ControlRig.RigUnit_DrawContainerGetInstruction
struct FRigUnit_DrawContainerGetInstruction : public FRigUnit
{
public:
	class FName                                  InstructionName;                                   // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0xC(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C2C[0x4];                                     // Fixing Size After Last Property..
	struct FTransform                            Transform;                                         // 0x20(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x180 - 0x160)
// ScriptStruct ControlRig.RigUnit_DrawContainerSetColor
struct FRigUnit_DrawContainerSetColor : public FRigUnitMutable
{
public:
	class FName                                  InstructionName;                                   // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x164(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C2D[0xC];                                     // Fixing Size Of Struct..
};

// 0x10 (0x170 - 0x160)
// ScriptStruct ControlRig.RigUnit_DrawContainerSetThickness
struct FRigUnit_DrawContainerSetThickness : public FRigUnitMutable
{
public:
	class FName                                  InstructionName;                                   // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x164(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C2E[0x8];                                     // Fixing Size Of Struct..
};

// 0x70 (0x1D0 - 0x160)
// ScriptStruct ControlRig.RigUnit_DrawContainerSetTransform
struct FRigUnit_DrawContainerSetTransform : public FRigUnitMutable
{
public:
	class FName                                  InstructionName;                                   // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C2F[0xC];                                     // Fixing Size After Last Property..
	struct FTransform                            Transform;                                         // 0x170(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x158 (0x160 - 0x8)
// ScriptStruct ControlRig.RigUnit_BeginExecution
struct FRigUnit_BeginExecution : public FRigUnit
{
public:
	uint8                                        Pad_3C30[0x8];                                     // Fixing Size After Last Property..
	struct FControlRigExecuteContext             ExecuteContext;                                    // 0x10(0x150)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionBase
struct FRigUnit_CollectionBase : public FRigUnit
{
public:
};

// 0x0 (0x160 - 0x160)
// ScriptStruct ControlRig.RigUnit_CollectionBaseMutable
struct FRigUnit_CollectionBaseMutable : public FRigUnitMutable
{
public:
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionChain
struct FRigUnit_CollectionChain : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKey                        FirstItem;                                         // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        LastItem;                                          // 0x10(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Reverse;                                           // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C31[0x7];                                     // Fixing Size After Last Property..
	struct FRigElementKeyCollection              Collection;                                        // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionChainArray
struct FRigUnit_CollectionChainArray : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKey                        FirstItem;                                         // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        LastItem;                                          // 0x10(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Reverse;                                           // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C32[0x7];                                     // Fixing Size After Last Property..
	TArray<struct FRigElementKey>                Items;                                             // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionNameSearch
struct FRigUnit_CollectionNameSearch : public FRigUnit_CollectionBase
{
public:
	class FName                                  PartialName;                                       // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigElementType                   TypeToSearch;                                      // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C33[0x3];                                     // Fixing Size After Last Property..
	struct FRigElementKeyCollection              Collection;                                        // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionNameSearchArray
struct FRigUnit_CollectionNameSearchArray : public FRigUnit_CollectionBase
{
public:
	class FName                                  PartialName;                                       // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigElementType                   TypeToSearch;                                      // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C34[0x3];                                     // Fixing Size After Last Property..
	TArray<struct FRigElementKey>                Items;                                             // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionChildren
struct FRigUnit_CollectionChildren : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKey                        Parent;                                            // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeParent;                                    // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRecursive;                                        // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigElementType                   TypeToSearch;                                      // 0x12(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C35[0x5];                                     // Fixing Size After Last Property..
	struct FRigElementKeyCollection              Collection;                                        // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionChildrenArray
struct FRigUnit_CollectionChildrenArray : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKey                        Parent;                                            // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeParent;                                    // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRecursive;                                        // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigElementType                   TypeToSearch;                                      // 0x12(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C36[0x5];                                     // Fixing Size After Last Property..
	TArray<struct FRigElementKey>                Items;                                             // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionGetAll
struct FRigUnit_CollectionGetAll : public FRigUnit_CollectionBase
{
public:
	enum class ERigElementType                   TypeToSearch;                                      // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C37[0x7];                                     // Fixing Size After Last Property..
	TArray<struct FRigElementKey>                Items;                                             // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionReplaceItems
struct FRigUnit_CollectionReplaceItems : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKeyCollection              Items;                                             // 0x8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Old;                                               // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  New;                                               // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RemoveInvalidItems;                                // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowDuplicates;                                  // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C38[0x6];                                     // Fixing Size After Last Property..
	struct FRigElementKeyCollection              Collection;                                        // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionReplaceItemsArray
struct FRigUnit_CollectionReplaceItemsArray : public FRigUnit_CollectionBase
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FName                                  Old;                                               // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  New;                                               // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RemoveInvalidItems;                                // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowDuplicates;                                  // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C39[0x6];                                     // Fixing Size After Last Property..
	TArray<struct FRigElementKey>                Result;                                            // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionItems
struct FRigUnit_CollectionItems : public FRigUnit_CollectionBase
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bAllowDuplicates;                                  // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C3A[0x7];                                     // Fixing Size After Last Property..
	struct FRigElementKeyCollection              Collection;                                        // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionGetItems
struct FRigUnit_CollectionGetItems : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKeyCollection              Collection;                                        // 0x8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRigElementKey>                Items;                                             // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionGetParentIndices
struct FRigUnit_CollectionGetParentIndices : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKeyCollection              Collection;                                        // 0x8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                ParentIndices;                                     // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionGetParentIndicesItemArray
struct FRigUnit_CollectionGetParentIndicesItemArray : public FRigUnit_CollectionBase
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                ParentIndices;                                     // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionUnion
struct FRigUnit_CollectionUnion : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKeyCollection              A;                                                 // 0x8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKeyCollection              B;                                                 // 0x18(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowDuplicates;                                  // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C3B[0x7];                                     // Fixing Size After Last Property..
	struct FRigElementKeyCollection              Collection;                                        // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionIntersection
struct FRigUnit_CollectionIntersection : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKeyCollection              A;                                                 // 0x8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKeyCollection              B;                                                 // 0x18(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKeyCollection              Collection;                                        // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionDifference
struct FRigUnit_CollectionDifference : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKeyCollection              A;                                                 // 0x8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKeyCollection              B;                                                 // 0x18(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKeyCollection              Collection;                                        // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionReverse
struct FRigUnit_CollectionReverse : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKeyCollection              Collection;                                        // 0x8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKeyCollection              Reversed;                                          // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionCount
struct FRigUnit_CollectionCount : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKeyCollection              Collection;                                        // 0x8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C3C[0x4];                                     // Fixing Size Of Struct..
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionItemAtIndex
struct FRigUnit_CollectionItemAtIndex : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKeyCollection              Collection;                                        // 0x8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Item;                                              // 0x1C(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C3D[0x4];                                     // Fixing Size Of Struct..
};

// 0x180 (0x2E0 - 0x160)
// ScriptStruct ControlRig.RigUnit_CollectionLoop
struct FRigUnit_CollectionLoop : public FRigUnit_CollectionBaseMutable
{
public:
	class FName                                  BlockToRun;                                        // 0x160(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C3E[0x4];                                     // Fixing Size After Last Property..
	struct FRigElementKeyCollection              Collection;                                        // 0x168(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Item;                                              // 0x178(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x180(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x184(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Ratio;                                             // 0x188(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C3F[0x4];                                     // Fixing Size After Last Property..
	struct FControlRigExecuteContext             Completed;                                         // 0x190(0x150)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionAddItem
struct FRigUnit_CollectionAddItem : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKeyCollection              Collection;                                        // 0x8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Item;                                              // 0x18(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKeyCollection              Result;                                            // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_DynamicHierarchyBase
struct FRigUnit_DynamicHierarchyBase : public FRigUnit
{
public:
};

// 0x0 (0x160 - 0x160)
// ScriptStruct ControlRig.RigUnit_DynamicHierarchyBaseMutable
struct FRigUnit_DynamicHierarchyBaseMutable : public FRigUnitMutable
{
public:
};

// 0x10 (0x170 - 0x160)
// ScriptStruct ControlRig.RigUnit_AddParent
struct FRigUnit_AddParent : public FRigUnit_DynamicHierarchyBaseMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x160(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Parent;                                            // 0x168(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x170 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetDefaultParent
struct FRigUnit_SetDefaultParent : public FRigUnit_DynamicHierarchyBaseMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x160(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Parent;                                            // 0x168(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x180 - 0x160)
// ScriptStruct ControlRig.RigUnit_SwitchParent
struct FRigUnit_SwitchParent : public FRigUnit_DynamicHierarchyBaseMutable
{
public:
	enum class ERigSwitchParentMode              Mode;                                              // 0x160(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C40[0x3];                                     // Fixing Size After Last Property..
	struct FRigElementKey                        Child;                                             // 0x164(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Parent;                                            // 0x16C(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMaintainGlobal;                                   // 0x174(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C41[0xB];                                     // Fixing Size Of Struct..
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetParentWeights
struct FRigUnit_HierarchyGetParentWeights : public FRigUnit_DynamicHierarchyBase
{
public:
	struct FRigElementKey                        Child;                                             // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRigElementWeight>             Weights;                                           // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FRigElementKeyCollection              Parents;                                           // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetParentWeightsArray
struct FRigUnit_HierarchyGetParentWeightsArray : public FRigUnit_DynamicHierarchyBase
{
public:
	struct FRigElementKey                        Child;                                             // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRigElementWeight>             Weights;                                           // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRigElementKey>                Parents;                                           // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x180 - 0x160)
// ScriptStruct ControlRig.RigUnit_HierarchySetParentWeights
struct FRigUnit_HierarchySetParentWeights : public FRigUnit_DynamicHierarchyBaseMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x160(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRigElementWeight>             Weights;                                           // 0x168(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C42[0x8];                                     // Fixing Size Of Struct..
};

// 0x0 (0x160 - 0x160)
// ScriptStruct ControlRig.RigUnit_HierarchyReset
struct FRigUnit_HierarchyReset : public FRigUnit_DynamicHierarchyBaseMutable
{
public:
};

// 0x20 (0x180 - 0x160)
// ScriptStruct ControlRig.RigUnit_HierarchyImportFromSkeleton
struct FRigUnit_HierarchyImportFromSkeleton : public FRigUnit_DynamicHierarchyBaseMutable
{
public:
	class FName                                  Namespace;                                         // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeCurves;                                    // 0x164(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C43[0x3];                                     // Fixing Size After Last Property..
	TArray<struct FRigElementKey>                Items;                                             // 0x168(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C44[0x8];                                     // Fixing Size Of Struct..
};

// 0x10 (0x170 - 0x160)
// ScriptStruct ControlRig.RigUnit_HierarchyRemoveElement
struct FRigUnit_HierarchyRemoveElement : public FRigUnit_DynamicHierarchyBaseMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x160(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSuccess;                                          // 0x168(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C45[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x178 - 0x160)
// ScriptStruct ControlRig.RigUnit_HierarchyAddElement
struct FRigUnit_HierarchyAddElement : public FRigUnit_DynamicHierarchyBaseMutable
{
public:
	struct FRigElementKey                        Parent;                                            // 0x160(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x168(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Item;                                              // 0x16C(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C46[0x4];                                     // Fixing Size Of Struct..
};

// 0x78 (0x1F0 - 0x178)
// ScriptStruct ControlRig.RigUnit_HierarchyAddBone
struct FRigUnit_HierarchyAddBone : public FRigUnit_HierarchyAddElement
{
public:
	uint8                                        Pad_3C47[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            Transform;                                         // 0x180(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x1E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C48[0xF];                                     // Fixing Size Of Struct..
};

// 0x78 (0x1F0 - 0x178)
// ScriptStruct ControlRig.RigUnit_HierarchyAddNull
struct FRigUnit_HierarchyAddNull : public FRigUnit_HierarchyAddElement
{
public:
	uint8                                        Pad_3C49[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            Transform;                                         // 0x180(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x1E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C4A[0xF];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControl_Settings
struct FRigUnit_HierarchyAddControl_Settings
{
public:
	uint8                                        Pad_3C4B[0x8];                                     // Fixing Size After Last Property..
	class FName                                  DisplayName;                                       // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C4C[0x4];                                     // Fixing Size Of Struct..
};

// 0x80 (0x80 - 0x0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControl_ShapeSettings
struct FRigUnit_HierarchyAddControl_ShapeSettings
{
public:
	bool                                         bVisible;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C4D[0x3];                                     // Fixing Size After Last Property..
	class FName                                  Name;                                              // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C4E[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            Transform;                                         // 0x20(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControl_ProxySettings
struct FRigUnit_HierarchyAddControl_ProxySettings
{
public:
	bool                                         bIsProxy;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C4F[0x7];                                     // Fixing Size After Last Property..
	TArray<struct FRigElementKey>                DrivenControls;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ERigControlVisibility             ShapeVisibility;                                   // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C50[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlFloat_LimitSettings
struct FRigUnit_HierarchyAddControlFloat_LimitSettings
{
public:
	struct FRigControlLimitEnabled               Limit;                                             // 0x0(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C51[0x2];                                     // Fixing Size After Last Property..
	float                                        MinValue;                                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxValue;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawLimits;                                       // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C52[0x3];                                     // Fixing Size Of Struct..
};

// 0xC0 (0xD0 - 0x10)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlFloat_Settings
struct FRigUnit_HierarchyAddControlFloat_Settings : public FRigUnit_HierarchyAddControl_Settings
{
public:
	enum class ERigControlAxis                   PrimaryAxis;                                       // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C53[0x3];                                     // Fixing Size After Last Property..
	struct FRigUnit_HierarchyAddControlFloat_LimitSettings Limits;                                            // 0x14(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C54[0xC];                                     // Fixing Size After Last Property..
	struct FRigUnit_HierarchyAddControl_ShapeSettings Shape;                                             // 0x30(0x80)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_HierarchyAddControl_ProxySettings Proxy;                                             // 0xB0(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x68 (0x1E0 - 0x178)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlElement
struct FRigUnit_HierarchyAddControlElement : public FRigUnit_HierarchyAddElement
{
public:
	uint8                                        Pad_3C55[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            OffsetTransform;                                   // 0x180(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE0 (0x2C0 - 0x1E0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlFloat
struct FRigUnit_HierarchyAddControlFloat : public FRigUnit_HierarchyAddControlElement
{
public:
	float                                        InitialValue;                                      // 0x1E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C56[0xC];                                     // Fixing Size After Last Property..
	struct FRigUnit_HierarchyAddControlFloat_Settings Settings;                                          // 0x1F0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlInteger_LimitSettings
struct FRigUnit_HierarchyAddControlInteger_LimitSettings
{
public:
	struct FRigControlLimitEnabled               Limit;                                             // 0x0(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C57[0x2];                                     // Fixing Size After Last Property..
	int32                                        MinValue;                                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxValue;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawLimits;                                       // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C58[0x3];                                     // Fixing Size Of Struct..
};

// 0xC0 (0xD0 - 0x10)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlInteger_Settings
struct FRigUnit_HierarchyAddControlInteger_Settings : public FRigUnit_HierarchyAddControl_Settings
{
public:
	enum class ERigControlAxis                   PrimaryAxis;                                       // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C59[0x3];                                     // Fixing Size After Last Property..
	struct FRigUnit_HierarchyAddControlInteger_LimitSettings Limits;                                            // 0x14(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C5A[0xC];                                     // Fixing Size After Last Property..
	struct FRigUnit_HierarchyAddControl_ShapeSettings Shape;                                             // 0x30(0x80)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_HierarchyAddControl_ProxySettings Proxy;                                             // 0xB0(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0xE0 (0x2C0 - 0x1E0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlInteger
struct FRigUnit_HierarchyAddControlInteger : public FRigUnit_HierarchyAddControlElement
{
public:
	int32                                        InitialValue;                                      // 0x1E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C5B[0xC];                                     // Fixing Size After Last Property..
	struct FRigUnit_HierarchyAddControlInteger_Settings Settings;                                          // 0x1F0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector2D_LimitSettings
struct FRigUnit_HierarchyAddControlVector2D_LimitSettings
{
public:
	struct FRigControlLimitEnabled               LimitX;                                            // 0x0(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigControlLimitEnabled               LimitY;                                            // 0x2(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C5C[0x4];                                     // Fixing Size After Last Property..
	struct FVector2D                             MinValue;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             MaxValue;                                          // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawLimits;                                       // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C5D[0x7];                                     // Fixing Size Of Struct..
};

// 0xF0 (0x100 - 0x10)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector2D_Settings
struct FRigUnit_HierarchyAddControlVector2D_Settings : public FRigUnit_HierarchyAddControl_Settings
{
public:
	enum class ERigControlAxis                   PrimaryAxis;                                       // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C5E[0x7];                                     // Fixing Size After Last Property..
	struct FRigUnit_HierarchyAddControlVector2D_LimitSettings Limits;                                            // 0x18(0x30)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C5F[0x8];                                     // Fixing Size After Last Property..
	struct FRigUnit_HierarchyAddControl_ShapeSettings Shape;                                             // 0x50(0x80)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_HierarchyAddControl_ProxySettings Proxy;                                             // 0xD0(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<enum class ERigControlTransformChannel> FilteredChannels;                                  // 0xF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x110 (0x2F0 - 0x1E0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector2D
struct FRigUnit_HierarchyAddControlVector2D : public FRigUnit_HierarchyAddControlElement
{
public:
	struct FVector2D                             InitialValue;                                      // 0x1E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigUnit_HierarchyAddControlVector2D_Settings Settings;                                          // 0x1F0(0x100)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector_LimitSettings
struct FRigUnit_HierarchyAddControlVector_LimitSettings
{
public:
	struct FRigControlLimitEnabled               LimitX;                                            // 0x0(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigControlLimitEnabled               LimitY;                                            // 0x2(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigControlLimitEnabled               LimitZ;                                            // 0x4(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C60[0x2];                                     // Fixing Size After Last Property..
	struct FVector                               MinValue;                                          // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               MaxValue;                                          // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawLimits;                                       // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C61[0x7];                                     // Fixing Size Of Struct..
};

// 0x100 (0x110 - 0x10)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector_Settings
struct FRigUnit_HierarchyAddControlVector_Settings : public FRigUnit_HierarchyAddControl_Settings
{
public:
	bool                                         bIsPosition;                                       // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C62[0x7];                                     // Fixing Size After Last Property..
	struct FRigUnit_HierarchyAddControlVector_LimitSettings Limits;                                            // 0x18(0x40)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C63[0x8];                                     // Fixing Size After Last Property..
	struct FRigUnit_HierarchyAddControl_ShapeSettings Shape;                                             // 0x60(0x80)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_HierarchyAddControl_ProxySettings Proxy;                                             // 0xE0(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<enum class ERigControlTransformChannel> FilteredChannels;                                  // 0x100(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x130 (0x310 - 0x1E0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector
struct FRigUnit_HierarchyAddControlVector : public FRigUnit_HierarchyAddControlElement
{
public:
	struct FVector                               InitialValue;                                      // 0x1E0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C64[0x8];                                     // Fixing Size After Last Property..
	struct FRigUnit_HierarchyAddControlVector_Settings Settings;                                          // 0x200(0x110)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlRotator_LimitSettings
struct FRigUnit_HierarchyAddControlRotator_LimitSettings
{
public:
	struct FRigControlLimitEnabled               LimitPitch;                                        // 0x0(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigControlLimitEnabled               LimitYaw;                                          // 0x2(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigControlLimitEnabled               LimitRoll;                                         // 0x4(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C65[0x2];                                     // Fixing Size After Last Property..
	struct FRotator                              MinValue;                                          // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              MaxValue;                                          // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bDrawLimits;                                       // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C66[0x7];                                     // Fixing Size Of Struct..
};

// 0xF0 (0x100 - 0x10)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlRotator_Settings
struct FRigUnit_HierarchyAddControlRotator_Settings : public FRigUnit_HierarchyAddControl_Settings
{
public:
	struct FRigUnit_HierarchyAddControlRotator_LimitSettings Limits;                                            // 0x10(0x40)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_HierarchyAddControl_ShapeSettings Shape;                                             // 0x50(0x80)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_HierarchyAddControl_ProxySettings Proxy;                                             // 0xD0(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<enum class ERigControlTransformChannel> FilteredChannels;                                  // 0xF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x120 (0x300 - 0x1E0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlRotator
struct FRigUnit_HierarchyAddControlRotator : public FRigUnit_HierarchyAddControlElement
{
public:
	struct FRotator                              InitialValue;                                      // 0x1E0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C67[0x8];                                     // Fixing Size After Last Property..
	struct FRigUnit_HierarchyAddControlRotator_Settings Settings;                                          // 0x200(0x100)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0xB0 (0xC0 - 0x10)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlTransform_Settings
struct FRigUnit_HierarchyAddControlTransform_Settings : public FRigUnit_HierarchyAddControl_Settings
{
public:
	struct FRigUnit_HierarchyAddControl_ShapeSettings Shape;                                             // 0x10(0x80)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_HierarchyAddControl_ProxySettings Proxy;                                             // 0x90(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<enum class ERigControlTransformChannel> FilteredChannels;                                  // 0xB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x120 (0x300 - 0x1E0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlTransform
struct FRigUnit_HierarchyAddControlTransform : public FRigUnit_HierarchyAddControlElement
{
public:
	struct FTransform                            InitialValue;                                      // 0x1E0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigUnit_HierarchyAddControlTransform_Settings Settings;                                          // 0x240(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x8 (0x180 - 0x178)
// ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelBool
struct FRigUnit_HierarchyAddAnimationChannelBool : public FRigUnit_HierarchyAddElement
{
public:
	bool                                         InitialValue;                                      // 0x178(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         MinimumValue;                                      // 0x179(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         MaximumValue;                                      // 0x17A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C68[0x5];                                     // Fixing Size Of Struct..
};

// 0x18 (0x190 - 0x178)
// ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelFloat
struct FRigUnit_HierarchyAddAnimationChannelFloat : public FRigUnit_HierarchyAddElement
{
public:
	float                                        InitialValue;                                      // 0x178(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumValue;                                      // 0x17C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumValue;                                      // 0x180(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C69[0xC];                                     // Fixing Size Of Struct..
};

// 0x18 (0x190 - 0x178)
// ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelInteger
struct FRigUnit_HierarchyAddAnimationChannelInteger : public FRigUnit_HierarchyAddElement
{
public:
	int32                                        InitialValue;                                      // 0x178(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinimumValue;                                      // 0x17C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaximumValue;                                      // 0x180(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C6A[0xC];                                     // Fixing Size Of Struct..
};

// 0x38 (0x1B0 - 0x178)
// ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelVector2D
struct FRigUnit_HierarchyAddAnimationChannelVector2D : public FRigUnit_HierarchyAddElement
{
public:
	struct FVector2D                             InitialValue;                                      // 0x178(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             MinimumValue;                                      // 0x188(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             MaximumValue;                                      // 0x198(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C6B[0x8];                                     // Fixing Size Of Struct..
};

// 0x48 (0x1C0 - 0x178)
// ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelVector
struct FRigUnit_HierarchyAddAnimationChannelVector : public FRigUnit_HierarchyAddElement
{
public:
	struct FVector                               InitialValue;                                      // 0x178(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               MinimumValue;                                      // 0x190(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               MaximumValue;                                      // 0x1A8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x1C0 - 0x178)
// ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelRotator
struct FRigUnit_HierarchyAddAnimationChannelRotator : public FRigUnit_HierarchyAddElement
{
public:
	struct FRotator                              InitialValue;                                      // 0x178(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              MinimumValue;                                      // 0x190(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              MaximumValue;                                      // 0x1A8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetShapeSettings
struct FRigUnit_HierarchyGetShapeSettings : public FRigUnit_DynamicHierarchyBase
{
public:
	struct FRigElementKey                        Item;                                              // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigUnit_HierarchyAddControl_ShapeSettings Settings;                                          // 0x10(0x80)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x90 (0x1F0 - 0x160)
// ScriptStruct ControlRig.RigUnit_HierarchySetShapeSettings
struct FRigUnit_HierarchySetShapeSettings : public FRigUnit_DynamicHierarchyBaseMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x160(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C6C[0x8];                                     // Fixing Size After Last Property..
	struct FRigUnit_HierarchyAddControl_ShapeSettings Settings;                                          // 0x170(0x80)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyBase
struct FRigUnit_HierarchyBase : public FRigUnit
{
public:
};

// 0x0 (0x160 - 0x160)
// ScriptStruct ControlRig.RigUnit_HierarchyBaseMutable
struct FRigUnit_HierarchyBaseMutable : public FRigUnitMutable
{
public:
};

// 0x40 (0x48 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetParent
struct FRigUnit_HierarchyGetParent : public FRigUnit_HierarchyBase
{
public:
	struct FRigElementKey                        Child;                                             // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Parent;                                            // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedChild;                                       // 0x18(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedParent;                                      // 0x30(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetParents
struct FRigUnit_HierarchyGetParents : public FRigUnit_HierarchyBase
{
public:
	struct FRigElementKey                        Child;                                             // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeChild;                                     // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReverse;                                          // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C6D[0x6];                                     // Fixing Size After Last Property..
	struct FRigElementKeyCollection              Parents;                                           // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedChild;                                       // 0x28(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKeyCollection              CachedParents;                                     // 0x40(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetParentsItemArray
struct FRigUnit_HierarchyGetParentsItemArray : public FRigUnit_HierarchyBase
{
public:
	struct FRigElementKey                        Child;                                             // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeChild;                                     // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReverse;                                          // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C6E[0x6];                                     // Fixing Size After Last Property..
	TArray<struct FRigElementKey>                Parents;                                           // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedChild;                                       // 0x28(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKeyCollection              CachedParents;                                     // 0x40(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetChildren
struct FRigUnit_HierarchyGetChildren : public FRigUnit_HierarchyBase
{
public:
	struct FRigElementKey                        Parent;                                            // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeParent;                                    // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRecursive;                                        // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C6F[0x6];                                     // Fixing Size After Last Property..
	struct FRigElementKeyCollection              Children;                                          // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedParent;                                      // 0x28(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKeyCollection              CachedChildren;                                    // 0x40(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetSiblings
struct FRigUnit_HierarchyGetSiblings : public FRigUnit_HierarchyBase
{
public:
	struct FRigElementKey                        Item;                                              // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeItem;                                      // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C70[0x7];                                     // Fixing Size After Last Property..
	struct FRigElementKeyCollection              Siblings;                                          // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedItem;                                        // 0x28(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKeyCollection              CachedSiblings;                                    // 0x40(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetSiblingsItemArray
struct FRigUnit_HierarchyGetSiblingsItemArray : public FRigUnit_HierarchyBase
{
public:
	struct FRigElementKey                        Item;                                              // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeItem;                                      // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C71[0x7];                                     // Fixing Size After Last Property..
	TArray<struct FRigElementKey>                Siblings;                                          // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedItem;                                        // 0x28(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKeyCollection              CachedSiblings;                                    // 0x40(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetPose
struct FRigUnit_HierarchyGetPose : public FRigUnit_HierarchyBase
{
public:
	bool                                         Initial;                                           // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigElementType                   ElementType;                                       // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C72[0x6];                                     // Fixing Size After Last Property..
	struct FRigElementKeyCollection              ItemsToGet;                                        // 0x10(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigPose                              Pose;                                              // 0x20(0x70)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetPoseItemArray
struct FRigUnit_HierarchyGetPoseItemArray : public FRigUnit_HierarchyBase
{
public:
	bool                                         Initial;                                           // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigElementType                   ElementType;                                       // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C73[0x6];                                     // Fixing Size After Last Property..
	TArray<struct FRigElementKey>                ItemsToGet;                                        // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FRigPose                              Pose;                                              // 0x20(0x70)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x90 (0x1F0 - 0x160)
// ScriptStruct ControlRig.RigUnit_HierarchySetPose
struct FRigUnit_HierarchySetPose : public FRigUnit_HierarchyBaseMutable
{
public:
	struct FRigPose                              Pose;                                              // 0x160(0x70)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class ERigElementType                   ElementType;                                       // 0x1D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x1D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C74[0x6];                                     // Fixing Size After Last Property..
	struct FRigElementKeyCollection              ItemsToSet;                                        // 0x1D8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x1E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C75[0x4];                                     // Fixing Size Of Struct..
};

// 0x90 (0x1F0 - 0x160)
// ScriptStruct ControlRig.RigUnit_HierarchySetPoseItemArray
struct FRigUnit_HierarchySetPoseItemArray : public FRigUnit_HierarchyBaseMutable
{
public:
	struct FRigPose                              Pose;                                              // 0x160(0x70)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class ERigElementType                   ElementType;                                       // 0x1D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x1D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C76[0x6];                                     // Fixing Size After Last Property..
	TArray<struct FRigElementKey>                ItemsToSet;                                        // 0x1D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x1E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C77[0x4];                                     // Fixing Size Of Struct..
};

// 0x78 (0x80 - 0x8)
// ScriptStruct ControlRig.RigUnit_PoseIsEmpty
struct FRigUnit_PoseIsEmpty : public FRigUnit_HierarchyBase
{
public:
	struct FRigPose                              Pose;                                              // 0x8(0x70)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         IsEmpty;                                           // 0x78(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C78[0x7];                                     // Fixing Size Of Struct..
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_PoseGetItems
struct FRigUnit_PoseGetItems : public FRigUnit_HierarchyBase
{
public:
	struct FRigPose                              Pose;                                              // 0x8(0x70)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class ERigElementType                   ElementType;                                       // 0x78(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C79[0x7];                                     // Fixing Size After Last Property..
	struct FRigElementKeyCollection              Items;                                             // 0x80(0x10)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_PoseGetItemsItemArray
struct FRigUnit_PoseGetItemsItemArray : public FRigUnit_HierarchyBase
{
public:
	struct FRigPose                              Pose;                                              // 0x8(0x70)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class ERigElementType                   ElementType;                                       // 0x78(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C7A[0x7];                                     // Fixing Size After Last Property..
	TArray<struct FRigElementKey>                Items;                                             // 0x80(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x120 (0x128 - 0x8)
// ScriptStruct ControlRig.RigUnit_PoseGetDelta
struct FRigUnit_PoseGetDelta : public FRigUnit_HierarchyBase
{
public:
	struct FRigPose                              PoseA;                                             // 0x8(0x70)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRigPose                              PoseB;                                             // 0x78(0x70)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        PositionThreshold;                                 // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationThreshold;                                 // 0xEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScaleThreshold;                                    // 0xF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurveThreshold;                                    // 0xF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigElementType                   ElementType;                                       // 0xF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0xF9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C7B[0x6];                                     // Fixing Size After Last Property..
	struct FRigElementKeyCollection              ItemsToCompare;                                    // 0x100(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PosesAreEqual;                                     // 0x110(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C7C[0x7];                                     // Fixing Size After Last Property..
	struct FRigElementKeyCollection              ItemsWithDelta;                                    // 0x118(0x10)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF8 (0x100 - 0x8)
// ScriptStruct ControlRig.RigUnit_PoseGetTransform
struct FRigUnit_PoseGetTransform : public FRigUnit_HierarchyBase
{
public:
	struct FRigPose                              Pose;                                              // 0x8(0x70)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Item;                                              // 0x78(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Valid;                                             // 0x81(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C7D[0xE];                                     // Fixing Size After Last Property..
	struct FTransform                            Transform;                                         // 0x90(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurveValue;                                        // 0xF0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CachedPoseElementIndex;                            // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CachedPoseHash;                                    // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C7E[0x4];                                     // Fixing Size Of Struct..
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_PoseGetTransformArray
struct FRigUnit_PoseGetTransformArray : public FRigUnit_HierarchyBase
{
public:
	struct FRigPose                              Pose;                                              // 0x8(0x70)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x78(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Valid;                                             // 0x79(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C7F[0x6];                                     // Fixing Size After Last Property..
	TArray<struct FTransform>                    Transforms;                                        // 0x80(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_PoseGetCurve
struct FRigUnit_PoseGetCurve : public FRigUnit_HierarchyBase
{
public:
	struct FRigPose                              Pose;                                              // 0x8(0x70)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FName                                  Curve;                                             // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Valid;                                             // 0x7C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C80[0x3];                                     // Fixing Size After Last Property..
	float                                        CurveValue;                                        // 0x80(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CachedPoseElementIndex;                            // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CachedPoseHash;                                    // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C81[0x4];                                     // Fixing Size Of Struct..
};

// 0x2A0 (0x400 - 0x160)
// ScriptStruct ControlRig.RigUnit_PoseLoop
struct FRigUnit_PoseLoop : public FRigUnit_HierarchyBaseMutable
{
public:
	class FName                                  BlockToRun;                                        // 0x160(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C82[0x4];                                     // Fixing Size After Last Property..
	struct FRigPose                              Pose;                                              // 0x168(0x70)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Item;                                              // 0x1D8(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            GlobalTransform;                                   // 0x1E0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            LocalTransform;                                    // 0x240(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurveValue;                                        // 0x2A0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x2A4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x2A8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Ratio;                                             // 0x2AC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FControlRigExecuteContext             Completed;                                         // 0x2B0(0x150)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x158 (0x160 - 0x8)
// ScriptStruct ControlRig.RigUnit_InteractionExecution
struct FRigUnit_InteractionExecution : public FRigUnit
{
public:
	uint8                                        Pad_3C83[0x8];                                     // Fixing Size After Last Property..
	struct FControlRigExecuteContext             ExecuteContext;                                    // 0x10(0x150)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
};

// 0x158 (0x160 - 0x8)
// ScriptStruct ControlRig.RigUnit_InverseExecution
struct FRigUnit_InverseExecution : public FRigUnit
{
public:
	uint8                                        Pad_3C84[0x8];                                     // Fixing Size After Last Property..
	struct FControlRigExecuteContext             ExecuteContext;                                    // 0x10(0x150)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_IsInteracting
struct FRigUnit_IsInteracting : public FRigUnit
{
public:
	bool                                         bIsInteracting;                                    // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsTranslating;                                    // 0x9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsRotating;                                       // 0xA(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsScaling;                                        // 0xB(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C85[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FRigElementKey>                Items;                                             // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_ItemBase
struct FRigUnit_ItemBase : public FRigUnit
{
public:
};

// 0x0 (0x160 - 0x160)
// ScriptStruct ControlRig.RigUnit_ItemBaseMutable
struct FRigUnit_ItemBaseMutable : public FRigUnitMutable
{
public:
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_ItemExists
struct FRigUnit_ItemExists : public FRigUnit_ItemBase
{
public:
	struct FRigElementKey                        Item;                                              // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Exists;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C86[0x7];                                     // Fixing Size After Last Property..
	struct FCachedRigElement                     CachedIndex;                                       // 0x18(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_ItemReplace
struct FRigUnit_ItemReplace : public FRigUnit_ItemBase
{
public:
	struct FRigElementKey                        Item;                                              // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Old;                                               // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  New;                                               // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Result;                                            // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_ItemEquals
struct FRigUnit_ItemEquals : public FRigUnit_ItemBase
{
public:
	struct FRigElementKey                        A;                                                 // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        B;                                                 // 0x10(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C87[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_ItemNotEquals
struct FRigUnit_ItemNotEquals : public FRigUnit_ItemBase
{
public:
	struct FRigElementKey                        A;                                                 // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        B;                                                 // 0x10(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C88[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_ItemTypeEquals
struct FRigUnit_ItemTypeEquals : public FRigUnit_ItemBase
{
public:
	struct FRigElementKey                        A;                                                 // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        B;                                                 // 0x10(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C89[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_ItemTypeNotEquals
struct FRigUnit_ItemTypeNotEquals : public FRigUnit_ItemBase
{
public:
	struct FRigElementKey                        A;                                                 // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        B;                                                 // 0x10(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C8A[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_ItemToName
struct FRigUnit_ItemToName : public FRigUnit_ItemBase
{
public:
	struct FRigElementKey                        Value;                                             // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Result;                                            // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C8B[0x4];                                     // Fixing Size Of Struct..
};

// 0x158 (0x160 - 0x8)
// ScriptStruct ControlRig.RigUnit_PrepareForExecution
struct FRigUnit_PrepareForExecution : public FRigUnit
{
public:
	uint8                                        Pad_3C8C[0x8];                                     // Fixing Size After Last Property..
	struct FControlRigExecuteContext             ExecuteContext;                                    // 0x10(0x150)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
};

// 0x698 (0x6A0 - 0x8)
// ScriptStruct ControlRig.RigUnit_SequenceExecution
struct FRigUnit_SequenceExecution : public FRigUnit
{
public:
	uint8                                        Pad_3C8D[0x8];                                     // Fixing Size After Last Property..
	struct FControlRigExecuteContext             ExecuteContext;                                    // 0x10(0x150)(Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	struct FControlRigExecuteContext             A;                                                 // 0x160(0x150)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	struct FControlRigExecuteContext             B;                                                 // 0x2B0(0x150)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	struct FControlRigExecuteContext             C;                                                 // 0x400(0x150)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	struct FControlRigExecuteContext             D;                                                 // 0x550(0x150)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
};

// 0x3F8 (0x400 - 0x8)
// ScriptStruct ControlRig.RigUnit_SequenceAggregate
struct FRigUnit_SequenceAggregate : public FRigUnit
{
public:
	uint8                                        Pad_3C8E[0x8];                                     // Fixing Size After Last Property..
	struct FControlRigExecuteContext             ExecuteContext;                                    // 0x10(0x150)(Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	struct FControlRigExecuteContext             A;                                                 // 0x160(0x150)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	struct FControlRigExecuteContext             B;                                                 // 0x2B0(0x150)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
};

// 0x90 (0x1F0 - 0x160)
// ScriptStruct ControlRig.RigUnit_AddBoneTransform
struct FRigUnit_AddBoneTransform : public FRigUnitMutable
{
public:
	class FName                                  bone;                                              // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C8F[0xC];                                     // Fixing Size After Last Property..
	struct FTransform                            Transform;                                         // 0x170(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x1D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPostMultiply;                                     // 0x1D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x1D5(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C90[0x2];                                     // Fixing Size After Last Property..
	struct FCachedRigElement                     CachedBone;                                        // 0x1D8(0x18)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_Item
struct FRigUnit_Item : public FRigUnit
{
public:
	struct FRigElementKey                        Item;                                              // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_ItemArray
struct FRigUnit_ItemArray : public FRigUnit
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_BoneName
struct FRigUnit_BoneName : public FRigUnit
{
public:
	class FName                                  bone;                                              // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C91[0x4];                                     // Fixing Size Of Struct..
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_SpaceName
struct FRigUnit_SpaceName : public FRigUnit
{
public:
	class FName                                  Space;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C92[0x4];                                     // Fixing Size Of Struct..
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_ControlName
struct FRigUnit_ControlName : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C93[0x4];                                     // Fixing Size Of Struct..
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetAnimationChannelBase
struct FRigUnit_GetAnimationChannelBase : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Channel;                                           // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C94[0x3];                                     // Fixing Size After Last Property..
	struct FRigElementKey                        CachedChannelKey;                                  // 0x14(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CachedChannelHash;                                 // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x28 - 0x20)
// ScriptStruct ControlRig.RigUnit_GetBoolAnimationChannel
struct FRigUnit_GetBoolAnimationChannel : public FRigUnit_GetAnimationChannelBase
{
public:
	bool                                         Value;                                             // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C95[0x7];                                     // Fixing Size Of Struct..
};

// 0x8 (0x28 - 0x20)
// ScriptStruct ControlRig.RigUnit_GetFloatAnimationChannel
struct FRigUnit_GetFloatAnimationChannel : public FRigUnit_GetAnimationChannelBase
{
public:
	float                                        Value;                                             // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C96[0x4];                                     // Fixing Size Of Struct..
};

// 0x8 (0x28 - 0x20)
// ScriptStruct ControlRig.RigUnit_GetIntAnimationChannel
struct FRigUnit_GetIntAnimationChannel : public FRigUnit_GetAnimationChannelBase
{
public:
	int32                                        Value;                                             // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C97[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x30 - 0x20)
// ScriptStruct ControlRig.RigUnit_GetVector2DAnimationChannel
struct FRigUnit_GetVector2DAnimationChannel : public FRigUnit_GetAnimationChannelBase
{
public:
	struct FVector2D                             Value;                                             // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x38 - 0x20)
// ScriptStruct ControlRig.RigUnit_GetVectorAnimationChannel
struct FRigUnit_GetVectorAnimationChannel : public FRigUnit_GetAnimationChannelBase
{
public:
	struct FVector                               Value;                                             // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x38 - 0x20)
// ScriptStruct ControlRig.RigUnit_GetRotatorAnimationChannel
struct FRigUnit_GetRotatorAnimationChannel : public FRigUnit_GetAnimationChannelBase
{
public:
	struct FRotator                              Value;                                             // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x80 - 0x20)
// ScriptStruct ControlRig.RigUnit_GetTransformAnimationChannel
struct FRigUnit_GetTransformAnimationChannel : public FRigUnit_GetAnimationChannelBase
{
public:
	struct FTransform                            Value;                                             // 0x20(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x150 (0x170 - 0x20)
// ScriptStruct ControlRig.RigUnit_SetAnimationChannelBase
struct FRigUnit_SetAnimationChannelBase : public FRigUnit_GetAnimationChannelBase
{
public:
	struct FControlRigExecuteContext             ExecuteContext;                                    // 0x20(0x150)(Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)
};

// 0x10 (0x180 - 0x170)
// ScriptStruct ControlRig.RigUnit_SetBoolAnimationChannel
struct FRigUnit_SetBoolAnimationChannel : public FRigUnit_SetAnimationChannelBase
{
public:
	bool                                         Value;                                             // 0x170(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C98[0xF];                                     // Fixing Size Of Struct..
};

// 0x10 (0x180 - 0x170)
// ScriptStruct ControlRig.RigUnit_SetFloatAnimationChannel
struct FRigUnit_SetFloatAnimationChannel : public FRigUnit_SetAnimationChannelBase
{
public:
	float                                        Value;                                             // 0x170(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C99[0xC];                                     // Fixing Size Of Struct..
};

// 0x10 (0x180 - 0x170)
// ScriptStruct ControlRig.RigUnit_SetIntAnimationChannel
struct FRigUnit_SetIntAnimationChannel : public FRigUnit_SetAnimationChannelBase
{
public:
	int32                                        Value;                                             // 0x170(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C9A[0xC];                                     // Fixing Size Of Struct..
};

// 0x10 (0x180 - 0x170)
// ScriptStruct ControlRig.RigUnit_SetVector2DAnimationChannel
struct FRigUnit_SetVector2DAnimationChannel : public FRigUnit_SetAnimationChannelBase
{
public:
	struct FVector2D                             Value;                                             // 0x170(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x190 - 0x170)
// ScriptStruct ControlRig.RigUnit_SetVectorAnimationChannel
struct FRigUnit_SetVectorAnimationChannel : public FRigUnit_SetAnimationChannelBase
{
public:
	struct FVector                               Value;                                             // 0x170(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C9B[0x8];                                     // Fixing Size Of Struct..
};

// 0x20 (0x190 - 0x170)
// ScriptStruct ControlRig.RigUnit_SetRotatorAnimationChannel
struct FRigUnit_SetRotatorAnimationChannel : public FRigUnit_SetAnimationChannelBase
{
public:
	struct FRotator                              Value;                                             // 0x170(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C9C[0x8];                                     // Fixing Size Of Struct..
};

// 0x60 (0x1D0 - 0x170)
// ScriptStruct ControlRig.RigUnit_SetTransformAnimationChannel
struct FRigUnit_SetTransformAnimationChannel : public FRigUnit_SetAnimationChannelBase
{
public:
	struct FTransform                            Value;                                             // 0x170(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetBoneTransform
struct FRigUnit_GetBoneTransform : public FRigUnit
{
public:
	class FName                                  bone;                                              // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C9D[0x3];                                     // Fixing Size After Last Property..
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedBone;                                        // 0x70(0x18)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C9E[0x8];                                     // Fixing Size Of Struct..
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlInitialTransform
struct FRigUnit_GetControlInitialTransform : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C9F[0x3];                                     // Fixing Size After Last Property..
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x70(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CA0[0x8];                                     // Fixing Size Of Struct..
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlBool
struct FRigUnit_GetControlBool : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         BoolValue;                                         // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CA1[0x3];                                     // Fixing Size After Last Property..
	struct FCachedRigElement                     CachedControlIndex;                                // 0x10(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlFloat
struct FRigUnit_GetControlFloat : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatValue;                                        // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Minimum;                                           // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x18(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlInteger
struct FRigUnit_GetControlInteger : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IntegerValue;                                      // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Minimum;                                           // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Maximum;                                           // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x18(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlVector2D
struct FRigUnit_GetControlVector2D : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CA2[0x4];                                     // Fixing Size After Last Property..
	struct FVector2D                             Vector;                                            // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Minimum;                                           // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Maximum;                                           // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x40(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x70 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlVector
struct FRigUnit_GetControlVector : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CA3[0x3];                                     // Fixing Size After Last Property..
	struct FVector                               Vector;                                            // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Minimum;                                           // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Maximum;                                           // 0x40(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x58(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x70 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlRotator
struct FRigUnit_GetControlRotator : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CA4[0x3];                                     // Fixing Size After Last Property..
	struct FRotator                              Rotator;                                           // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              Minimum;                                           // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              Maximum;                                           // 0x40(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x58(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x148 (0x150 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlTransform
struct FRigUnit_GetControlTransform : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CA5[0x3];                                     // Fixing Size After Last Property..
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Minimum;                                           // 0x70(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Maximum;                                           // 0xD0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x130(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CA6[0x8];                                     // Fixing Size Of Struct..
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetCurveValue
struct FRigUnit_GetCurveValue : public FRigUnit
{
public:
	class FName                                  Curve;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Valid;                                             // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CA7[0x3];                                     // Fixing Size After Last Property..
	float                                        Value;                                             // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CA8[0x4];                                     // Fixing Size After Last Property..
	struct FCachedRigElement                     CachedCurveIndex;                                  // 0x18(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetInitialBoneTransform
struct FRigUnit_GetInitialBoneTransform : public FRigUnit
{
public:
	class FName                                  bone;                                              // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CA9[0x3];                                     // Fixing Size After Last Property..
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedBone;                                        // 0x70(0x18)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CAA[0x8];                                     // Fixing Size Of Struct..
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetRelativeBoneTransform
struct FRigUnit_GetRelativeBoneTransform : public FRigUnit
{
public:
	class FName                                  bone;                                              // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedBone;                                        // 0x70(0x18)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedSpace;                                       // 0x88(0x18)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xB0 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetRelativeTransformForItem
struct FRigUnit_GetRelativeTransformForItem : public FRigUnit
{
public:
	struct FRigElementKey                        Child;                                             // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bChildInitial;                                     // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CAB[0x3];                                     // Fixing Size After Last Property..
	struct FRigElementKey                        Parent;                                            // 0x14(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bParentInitial;                                    // 0x1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CAC[0x3];                                     // Fixing Size After Last Property..
	struct FTransform                            RelativeTransform;                                 // 0x20(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedChild;                                       // 0x80(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedParent;                                      // 0x98(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetSpaceTransform
struct FRigUnit_GetSpaceTransform : public FRigUnit
{
public:
	class FName                                  Space;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              SpaceType;                                         // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CAD[0x3];                                     // Fixing Size After Last Property..
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedSpaceIndex;                                  // 0x70(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CAE[0x8];                                     // Fixing Size Of Struct..
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetTransform
struct FRigUnit_GetTransform : public FRigUnit
{
public:
	struct FRigElementKey                        Item;                                              // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CAF[0xE];                                     // Fixing Size After Last Property..
	struct FTransform                            Transform;                                         // 0x20(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedIndex;                                       // 0x80(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CB0[0x8];                                     // Fixing Size Of Struct..
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetTransformArray
struct FRigUnit_GetTransformArray : public FRigUnit
{
public:
	struct FRigElementKeyCollection              Items;                                             // 0x8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x19(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CB1[0x6];                                     // Fixing Size After Last Property..
	TArray<struct FTransform>                    Transforms;                                        // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCachedRigElement>             CachedIndex;                                       // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetTransformItemArray
struct FRigUnit_GetTransformItemArray : public FRigUnit
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x19(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CB2[0x6];                                     // Fixing Size After Last Property..
	TArray<struct FTransform>                    Transforms;                                        // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCachedRigElement>             CachedIndex;                                       // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x48 - 0x18)
// ScriptStruct ControlRig.RigDispatch_MetadataBase
struct FRigDispatch_MetadataBase : public FRigDispatchFactory
{
public:
	uint8                                        Pad_3CB3[0x30];                                    // Fixing Size Of Struct..
};

// 0x0 (0x48 - 0x48)
// ScriptStruct ControlRig.RigDispatch_GetMetadata
struct FRigDispatch_GetMetadata : public FRigDispatch_MetadataBase
{
public:
};

// 0x0 (0x48 - 0x48)
// ScriptStruct ControlRig.RigDispatch_SetMetadata
struct FRigDispatch_SetMetadata : public FRigDispatch_MetadataBase
{
public:
};

// 0x30 (0x190 - 0x160)
// ScriptStruct ControlRig.RigUnit_RemoveMetadata
struct FRigUnit_RemoveMetadata : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x160(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x168(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Removed;                                           // 0x16C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CB4[0x3];                                     // Fixing Size After Last Property..
	struct FCachedRigElement                     CachedIndex;                                       // 0x170(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CB5[0x8];                                     // Fixing Size Of Struct..
};

// 0x30 (0x190 - 0x160)
// ScriptStruct ControlRig.RigUnit_RemoveAllMetadata
struct FRigUnit_RemoveAllMetadata : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x160(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Removed;                                           // 0x168(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CB6[0x7];                                     // Fixing Size After Last Property..
	struct FCachedRigElement                     CachedIndex;                                       // 0x170(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CB7[0x8];                                     // Fixing Size Of Struct..
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_HasMetadata
struct FRigUnit_HasMetadata : public FRigUnit
{
public:
	struct FRigElementKey                        Item;                                              // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigMetadataType                  Type;                                              // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Found;                                             // 0x15(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CB8[0x2];                                     // Fixing Size After Last Property..
	struct FCachedRigElement                     CachedIndex;                                       // 0x18(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_FindItemsWithMetadata
struct FRigUnit_FindItemsWithMetadata : public FRigUnit
{
public:
	class FName                                  Name;                                              // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigMetadataType                  Type;                                              // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CB9[0x3];                                     // Fixing Size After Last Property..
	TArray<struct FRigElementKey>                Items;                                             // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetMetadataTags
struct FRigUnit_GetMetadataTags : public FRigUnit
{
public:
	struct FRigElementKey                        Item;                                              // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          Tags;                                              // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedIndex;                                       // 0x20(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x190 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetMetadataTag
struct FRigUnit_SetMetadataTag : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x160(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Tag;                                               // 0x168(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CBA[0x4];                                     // Fixing Size After Last Property..
	struct FCachedRigElement                     CachedIndex;                                       // 0x170(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CBB[0x8];                                     // Fixing Size Of Struct..
};

// 0x30 (0x190 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetMetadataTagArray
struct FRigUnit_SetMetadataTagArray : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x160(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          Tags;                                              // 0x168(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedIndex;                                       // 0x178(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x190 - 0x160)
// ScriptStruct ControlRig.RigUnit_RemoveMetadataTag
struct FRigUnit_RemoveMetadataTag : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x160(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Tag;                                               // 0x168(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Removed;                                           // 0x16C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CBC[0x3];                                     // Fixing Size After Last Property..
	struct FCachedRigElement                     CachedIndex;                                       // 0x170(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CBD[0x8];                                     // Fixing Size Of Struct..
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_HasMetadataTag
struct FRigUnit_HasMetadataTag : public FRigUnit
{
public:
	struct FRigElementKey                        Item;                                              // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Tag;                                               // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Found;                                             // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CBE[0x3];                                     // Fixing Size After Last Property..
	struct FCachedRigElement                     CachedIndex;                                       // 0x18(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_HasMetadataTagArray
struct FRigUnit_HasMetadataTagArray : public FRigUnit
{
public:
	struct FRigElementKey                        Item;                                              // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          Tags;                                              // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         Found;                                             // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CBF[0x7];                                     // Fixing Size After Last Property..
	struct FCachedRigElement                     CachedIndex;                                       // 0x28(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_FindItemsWithMetadataTag
struct FRigUnit_FindItemsWithMetadataTag : public FRigUnit
{
public:
	class FName                                  Tag;                                               // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CC0[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FRigElementKey>                Items;                                             // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_FindItemsWithMetadataTagArray
struct FRigUnit_FindItemsWithMetadataTagArray : public FRigUnit
{
public:
	TArray<class FName>                          Tags;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRigElementKey>                Items;                                             // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_FilterItemsByMetadataTags
struct FRigUnit_FilterItemsByMetadataTags : public FRigUnit
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          Tags;                                              // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         Inclusive;                                         // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CC1[0x7];                                     // Fixing Size After Last Property..
	TArray<struct FRigElementKey>                Result;                                            // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCachedRigElement>             CachedIndices;                                     // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x90 (0x1F0 - 0x160)
// ScriptStruct ControlRig.RigUnit_OffsetTransformForItem
struct FRigUnit_OffsetTransformForItem : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x160(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CC2[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            OffsetTransform;                                   // 0x170(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x1D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x1D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CC3[0x3];                                     // Fixing Size After Last Property..
	struct FCachedRigElement                     CachedIndex;                                       // 0x1D8(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x190 (0x2F0 - 0x160)
// ScriptStruct ControlRig.RigUnit_ParentSwitchConstraint
struct FRigUnit_ParentSwitchConstraint : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Subject;                                           // 0x160(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ParentIndex;                                       // 0x168(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CC4[0x4];                                     // Fixing Size After Last Property..
	struct FRigElementKeyCollection              Parents;                                           // 0x170(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            InitialGlobalTransform;                            // 0x180(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x1E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CC5[0xC];                                     // Fixing Size After Last Property..
	struct FTransform                            Transform;                                         // 0x1F0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Switched;                                          // 0x250(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CC6[0x7];                                     // Fixing Size After Last Property..
	struct FCachedRigElement                     CachedSubject;                                     // 0x258(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedParent;                                      // 0x270(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CC7[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            RelativeOffset;                                    // 0x290(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x190 (0x2F0 - 0x160)
// ScriptStruct ControlRig.RigUnit_ParentSwitchConstraintArray
struct FRigUnit_ParentSwitchConstraintArray : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Subject;                                           // 0x160(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ParentIndex;                                       // 0x168(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CC8[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FRigElementKey>                Parents;                                           // 0x170(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FTransform                            InitialGlobalTransform;                            // 0x180(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x1E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CC9[0xC];                                     // Fixing Size After Last Property..
	struct FTransform                            Transform;                                         // 0x1F0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Switched;                                          // 0x250(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CCA[0x7];                                     // Fixing Size After Last Property..
	struct FCachedRigElement                     CachedSubject;                                     // 0x258(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedParent;                                      // 0x270(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CCB[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            RelativeOffset;                                    // 0x290(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD8 (0xE0 - 0x8)
// ScriptStruct ControlRig.RigUnit_ProjectTransformToNewParent
struct FRigUnit_ProjectTransformToNewParent : public FRigUnit
{
public:
	struct FRigElementKey                        Child;                                             // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bChildInitial;                                     // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CCC[0x3];                                     // Fixing Size After Last Property..
	struct FRigElementKey                        OldParent;                                         // 0x14(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOldParentInitial;                                 // 0x1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CCD[0x3];                                     // Fixing Size After Last Property..
	struct FRigElementKey                        NewParent;                                         // 0x20(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNewParentInitial;                                 // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CCE[0x7];                                     // Fixing Size After Last Property..
	struct FTransform                            Transform;                                         // 0x30(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedChild;                                       // 0x90(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedOldParent;                                   // 0xA8(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedNewParent;                                   // 0xC0(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CCF[0x8];                                     // Fixing Size Of Struct..
};

// 0x30 (0x190 - 0x160)
// ScriptStruct ControlRig.RigUnit_PropagateTransform
struct FRigUnit_PropagateTransform : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x160(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRecomputeGlobal;                                  // 0x168(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyToChildren;                                  // 0x169(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRecursive;                                        // 0x16A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CD0[0x5];                                     // Fixing Size After Last Property..
	struct FCachedRigElement                     CachedIndex;                                       // 0x170(0x18)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CD1[0x8];                                     // Fixing Size Of Struct..
};

// 0x20 (0x180 - 0x160)
// ScriptStruct ControlRig.RigUnit_SendEvent
struct FRigUnit_SendEvent : public FRigUnitMutable
{
public:
	enum class ERigEvent                         Event;                                             // 0x160(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CD2[0x3];                                     // Fixing Size After Last Property..
	struct FRigElementKey                        Item;                                              // 0x164(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OffsetInSeconds;                                   // 0x16C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnable;                                           // 0x170(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyDuringInteraction;                            // 0x171(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CD3[0xE];                                     // Fixing Size Of Struct..
};

// 0xF0 (0x250 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetBoneInitialTransform
struct FRigUnit_SetBoneInitialTransform : public FRigUnitMutable
{
public:
	class FName                                  bone;                                              // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CD4[0xC];                                     // Fixing Size After Last Property..
	struct FTransform                            Transform;                                         // 0x170(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Result;                                            // 0x1D0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x230(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x231(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CD5[0x6];                                     // Fixing Size After Last Property..
	struct FCachedRigElement                     CachedBone;                                        // 0x238(0x18)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x1C0 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetBoneRotation
struct FRigUnit_SetBoneRotation : public FRigUnitMutable
{
public:
	class FName                                  bone;                                              // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CD6[0xC];                                     // Fixing Size After Last Property..
	struct FQuat                                 Rotation;                                          // 0x170(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x190(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CD7[0x3];                                     // Fixing Size After Last Property..
	float                                        Weight;                                            // 0x194(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x198(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CD8[0x7];                                     // Fixing Size After Last Property..
	struct FCachedRigElement                     CachedBone;                                        // 0x1A0(0x18)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CD9[0x8];                                     // Fixing Size Of Struct..
};

// 0x100 (0x260 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetBoneTransform
struct FRigUnit_SetBoneTransform : public FRigUnitMutable
{
public:
	class FName                                  bone;                                              // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CDA[0xC];                                     // Fixing Size After Last Property..
	struct FTransform                            Transform;                                         // 0x170(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Result;                                            // 0x1D0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x230(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CDB[0x3];                                     // Fixing Size After Last Property..
	float                                        Weight;                                            // 0x234(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x238(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CDC[0x7];                                     // Fixing Size After Last Property..
	struct FCachedRigElement                     CachedBone;                                        // 0x240(0x18)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CDD[0x8];                                     // Fixing Size Of Struct..
};

// 0x50 (0x1B0 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetBoneTranslation
struct FRigUnit_SetBoneTranslation : public FRigUnitMutable
{
public:
	class FName                                  bone;                                              // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CDE[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Translation;                                       // 0x168(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x180(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CDF[0x3];                                     // Fixing Size After Last Property..
	float                                        Weight;                                            // 0x184(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x188(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CE0[0x7];                                     // Fixing Size After Last Property..
	struct FCachedRigElement                     CachedBone;                                        // 0x190(0x18)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CE1[0x8];                                     // Fixing Size Of Struct..
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlColor
struct FRigUnit_GetControlColor : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0xC(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CE2[0x4];                                     // Fixing Size After Last Property..
	struct FCachedRigElement                     CachedControlIndex;                                // 0x20(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x190 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetControlColor
struct FRigUnit_SetControlColor : public FRigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x164(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CE3[0x4];                                     // Fixing Size After Last Property..
	struct FCachedRigElement                     CachedControlIndex;                                // 0x178(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlDrivenList
struct FRigUnit_GetControlDrivenList : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CE4[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FRigElementKey>                Driven;                                            // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x20(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x190 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetControlDrivenList
struct FRigUnit_SetControlDrivenList : public FRigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CE5[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FRigElementKey>                Driven;                                            // 0x168(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x178(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x1F0 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetControlOffset
struct FRigUnit_SetControlOffset : public FRigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CE6[0xC];                                     // Fixing Size After Last Property..
	struct FTransform                            Offset;                                            // 0x170(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x1D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CE7[0x7];                                     // Fixing Size After Last Property..
	struct FCachedRigElement                     CachedControlIndex;                                // 0x1D8(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetShapeTransform
struct FRigUnit_GetShapeTransform : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CE8[0x4];                                     // Fixing Size After Last Property..
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x70(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CE9[0x8];                                     // Fixing Size Of Struct..
};

// 0x90 (0x1F0 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetShapeTransform
struct FRigUnit_SetShapeTransform : public FRigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CEA[0xC];                                     // Fixing Size After Last Property..
	struct FTransform                            Transform;                                         // 0x170(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x1D0(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CEB[0x8];                                     // Fixing Size Of Struct..
};

// 0x20 (0x180 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetControlBool
struct FRigUnit_SetControlBool : public FRigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         BoolValue;                                         // 0x164(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CEC[0x3];                                     // Fixing Size After Last Property..
	struct FCachedRigElement                     CachedControlIndex;                                // 0x168(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ControlRig.RigUnit_SetMultiControlBool_Entry
struct FRigUnit_SetMultiControlBool_Entry
{
public:
	class FName                                  Control;                                           // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         BoolValue;                                         // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CED[0x3];                                     // Fixing Size Of Struct..
};

// 0x20 (0x180 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetMultiControlBool
struct FRigUnit_SetMultiControlBool : public FRigUnitMutable
{
public:
	TArray<struct FRigUnit_SetMultiControlBool_Entry> Entries;                                           // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCachedRigElement>             CachedControlIndices;                              // 0x170(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x190 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetControlFloat
struct FRigUnit_SetControlFloat : public FRigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x164(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatValue;                                        // 0x168(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CEE[0x4];                                     // Fixing Size After Last Property..
	struct FCachedRigElement                     CachedControlIndex;                                // 0x170(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CEF[0x8];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ControlRig.RigUnit_SetMultiControlFloat_Entry
struct FRigUnit_SetMultiControlFloat_Entry
{
public:
	class FName                                  Control;                                           // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatValue;                                        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x190 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetMultiControlFloat
struct FRigUnit_SetMultiControlFloat : public FRigUnitMutable
{
public:
	TArray<struct FRigUnit_SetMultiControlFloat_Entry> Entries;                                           // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x170(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CF0[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FCachedRigElement>             CachedControlIndices;                              // 0x178(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CF1[0x8];                                     // Fixing Size Of Struct..
};

// 0x30 (0x190 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetControlInteger
struct FRigUnit_SetControlInteger : public FRigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Weight;                                            // 0x164(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IntegerValue;                                      // 0x168(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CF2[0x4];                                     // Fixing Size After Last Property..
	struct FCachedRigElement                     CachedControlIndex;                                // 0x170(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CF3[0x8];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ControlRig.RigUnit_SetMultiControlInteger_Entry
struct FRigUnit_SetMultiControlInteger_Entry
{
public:
	class FName                                  Control;                                           // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IntegerValue;                                      // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x190 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetMultiControlInteger
struct FRigUnit_SetMultiControlInteger : public FRigUnitMutable
{
public:
	TArray<struct FRigUnit_SetMultiControlInteger_Entry> Entries;                                           // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x170(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CF4[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FCachedRigElement>             CachedControlIndices;                              // 0x178(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CF5[0x8];                                     // Fixing Size Of Struct..
};

// 0x30 (0x190 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetControlVector2D
struct FRigUnit_SetControlVector2D : public FRigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x164(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Vector;                                            // 0x168(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x178(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ControlRig.RigUnit_SetMultiControlVector2D_Entry
struct FRigUnit_SetMultiControlVector2D_Entry
{
public:
	class FName                                  Control;                                           // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CF6[0x4];                                     // Fixing Size After Last Property..
	struct FVector2D                             Vector;                                            // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x190 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetMultiControlVector2D
struct FRigUnit_SetMultiControlVector2D : public FRigUnitMutable
{
public:
	TArray<struct FRigUnit_SetMultiControlVector2D_Entry> Entries;                                           // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x170(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CF7[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FCachedRigElement>             CachedControlIndices;                              // 0x178(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CF8[0x8];                                     // Fixing Size Of Struct..
};

// 0x40 (0x1A0 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetControlVector
struct FRigUnit_SetControlVector : public FRigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x164(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Vector;                                            // 0x168(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x180(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CF9[0x7];                                     // Fixing Size After Last Property..
	struct FCachedRigElement                     CachedControlIndex;                                // 0x188(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x1A0 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetControlRotator
struct FRigUnit_SetControlRotator : public FRigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x164(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotator;                                           // 0x168(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x180(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CFA[0x7];                                     // Fixing Size After Last Property..
	struct FCachedRigElement                     CachedControlIndex;                                // 0x188(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ControlRig.RigUnit_SetMultiControlRotator_Entry
struct FRigUnit_SetMultiControlRotator_Entry
{
public:
	class FName                                  Control;                                           // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CFB[0x4];                                     // Fixing Size After Last Property..
	struct FRotator                              Rotator;                                           // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CFC[0x7];                                     // Fixing Size Of Struct..
};

// 0x30 (0x190 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetMultiControlRotator
struct FRigUnit_SetMultiControlRotator : public FRigUnitMutable
{
public:
	TArray<struct FRigUnit_SetMultiControlRotator_Entry> Entries;                                           // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x170(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CFD[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FCachedRigElement>             CachedControlIndices;                              // 0x178(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CFE[0x8];                                     // Fixing Size Of Struct..
};

// 0x90 (0x1F0 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetControlTransform
struct FRigUnit_SetControlTransform : public FRigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x164(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CFF[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            Transform;                                         // 0x170(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x1D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D00[0x7];                                     // Fixing Size After Last Property..
	struct FCachedRigElement                     CachedControlIndex;                                // 0x1D8(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlVisibility
struct FRigUnit_GetControlVisibility : public FRigUnit
{
public:
	struct FRigElementKey                        Item;                                              // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVisible;                                          // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D01[0x7];                                     // Fixing Size After Last Property..
	struct FCachedRigElement                     CachedControlIndex;                                // 0x18(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x190 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetControlVisibility
struct FRigUnit_SetControlVisibility : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x160(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Pattern;                                           // 0x168(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVisible;                                          // 0x178(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D02[0x7];                                     // Fixing Size After Last Property..
	TArray<struct FCachedRigElement>             CachedControlIndices;                              // 0x180(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x180 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetCurveValue
struct FRigUnit_SetCurveValue : public FRigUnitMutable
{
public:
	class FName                                  Curve;                                             // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x164(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedCurveIndex;                                  // 0x168(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0xB0 (0x210 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetRelativeBoneTransform
struct FRigUnit_SetRelativeBoneTransform : public FRigUnitMutable
{
public:
	class FName                                  bone;                                              // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0x164(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D03[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            Transform;                                         // 0x170(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x1D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x1D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D04[0x3];                                     // Fixing Size After Last Property..
	struct FCachedRigElement                     CachedBone;                                        // 0x1D8(0x18)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedSpaceIndex;                                  // 0x1F0(0x18)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D05[0x8];                                     // Fixing Size Of Struct..
};

// 0xC0 (0x220 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetRelativeTransformForItem
struct FRigUnit_SetRelativeTransformForItem : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x160(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Parent;                                            // 0x168(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bParentInitial;                                    // 0x170(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D06[0xF];                                     // Fixing Size After Last Property..
	struct FTransform                            Value;                                             // 0x180(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x1E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x1E4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D07[0x3];                                     // Fixing Size After Last Property..
	struct FCachedRigElement                     CachedChild;                                       // 0x1E8(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedParent;                                      // 0x200(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D08[0x8];                                     // Fixing Size Of Struct..
};

// 0x70 (0x1D0 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetRelativeTranslationForItem
struct FRigUnit_SetRelativeTranslationForItem : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x160(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Parent;                                            // 0x168(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bParentInitial;                                    // 0x170(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D09[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               Value;                                             // 0x178(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x190(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x194(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D0A[0x3];                                     // Fixing Size After Last Property..
	struct FCachedRigElement                     CachedChild;                                       // 0x198(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedParent;                                      // 0x1B0(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D0B[0x8];                                     // Fixing Size Of Struct..
};

// 0x80 (0x1E0 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetRelativeRotationForItem
struct FRigUnit_SetRelativeRotationForItem : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x160(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Parent;                                            // 0x168(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bParentInitial;                                    // 0x170(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D0C[0xF];                                     // Fixing Size After Last Property..
	struct FQuat                                 Value;                                             // 0x180(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x1A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x1A4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D0D[0x3];                                     // Fixing Size After Last Property..
	struct FCachedRigElement                     CachedChild;                                       // 0x1A8(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedParent;                                      // 0x1C0(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D0E[0x8];                                     // Fixing Size Of Struct..
};

// 0xF0 (0x250 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetSpaceInitialTransform
struct FRigUnit_SetSpaceInitialTransform : public FRigUnitMutable
{
public:
	class FName                                  SpaceName;                                         // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D0F[0xC];                                     // Fixing Size After Last Property..
	struct FTransform                            Transform;                                         // 0x170(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Result;                                            // 0x1D0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x230(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D10[0x7];                                     // Fixing Size After Last Property..
	struct FCachedRigElement                     CachedSpaceIndex;                                  // 0x238(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x1F0 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetSpaceTransform
struct FRigUnit_SetSpaceTransform : public FRigUnitMutable
{
public:
	class FName                                  Space;                                             // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x164(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D11[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            Transform;                                         // 0x170(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              SpaceType;                                         // 0x1D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D12[0x7];                                     // Fixing Size After Last Property..
	struct FCachedRigElement                     CachedSpaceIndex;                                  // 0x1D8(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x1F0 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetTransform
struct FRigUnit_SetTransform : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x160(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x168(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x169(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D13[0x6];                                     // Fixing Size After Last Property..
	struct FTransform                            Value;                                             // 0x170(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x1D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x1D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D14[0x3];                                     // Fixing Size After Last Property..
	struct FCachedRigElement                     CachedIndex;                                       // 0x1D8(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x1B0 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetTranslation
struct FRigUnit_SetTranslation : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x160(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x168(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x169(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D15[0x6];                                     // Fixing Size After Last Property..
	struct FVector                               Value;                                             // 0x170(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x188(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x18C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D16[0x3];                                     // Fixing Size After Last Property..
	struct FCachedRigElement                     CachedIndex;                                       // 0x190(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D17[0x8];                                     // Fixing Size Of Struct..
};

// 0x50 (0x1B0 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetRotation
struct FRigUnit_SetRotation : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x160(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x168(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x169(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D18[0x6];                                     // Fixing Size After Last Property..
	struct FQuat                                 Value;                                             // 0x170(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x190(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x194(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D19[0x3];                                     // Fixing Size After Last Property..
	struct FCachedRigElement                     CachedIndex;                                       // 0x198(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x1B0 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetScale
struct FRigUnit_SetScale : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x160(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x168(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x169(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D1A[0x6];                                     // Fixing Size After Last Property..
	struct FVector                               Scale;                                             // 0x170(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x188(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x18C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D1B[0x3];                                     // Fixing Size After Last Property..
	struct FCachedRigElement                     CachedIndex;                                       // 0x190(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D1C[0x8];                                     // Fixing Size Of Struct..
};

// 0x40 (0x1A0 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetTransformArray
struct FRigUnit_SetTransformArray : public FRigUnitMutable
{
public:
	struct FRigElementKeyCollection              Items;                                             // 0x160(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x170(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x171(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D1D[0x6];                                     // Fixing Size After Last Property..
	TArray<struct FTransform>                    Transforms;                                        // 0x178(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x188(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x18C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D1E[0x3];                                     // Fixing Size After Last Property..
	TArray<struct FCachedRigElement>             CachedIndex;                                       // 0x190(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x1A0 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetTransformItemArray
struct FRigUnit_SetTransformItemArray : public FRigUnitMutable
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x170(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x171(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D1F[0x6];                                     // Fixing Size After Last Property..
	TArray<struct FTransform>                    Transforms;                                        // 0x178(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x188(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x18C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D20[0x3];                                     // Fixing Size After Last Property..
	TArray<struct FCachedRigElement>             CachedIndex;                                       // 0x190(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x180 - 0x160)
// ScriptStruct ControlRig.RigUnit_UnsetCurveValue
struct FRigUnit_UnsetCurveValue : public FRigUnitMutable
{
public:
	class FName                                  Curve;                                             // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D21[0x4];                                     // Fixing Size After Last Property..
	struct FCachedRigElement                     CachedCurveIndex;                                  // 0x168(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0xC8 (0xD0 - 0x8)
// ScriptStruct ControlRig.RigUnit_ToWorldSpace_Transform
struct FRigUnit_ToWorldSpace_Transform : public FRigUnit
{
public:
	uint8                                        Pad_3D22[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            Value;                                             // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            World;                                             // 0x70(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC8 (0xD0 - 0x8)
// ScriptStruct ControlRig.RigUnit_ToRigSpace_Transform
struct FRigUnit_ToRigSpace_Transform : public FRigUnit
{
public:
	uint8                                        Pad_3D23[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            Value;                                             // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Global;                                            // 0x70(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_ToWorldSpace_Location
struct FRigUnit_ToWorldSpace_Location : public FRigUnit
{
public:
	struct FVector                               Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               World;                                             // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_ToRigSpace_Location
struct FRigUnit_ToRigSpace_Location : public FRigUnit
{
public:
	struct FVector                               Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Global;                                            // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_ToWorldSpace_Rotation
struct FRigUnit_ToWorldSpace_Rotation : public FRigUnit
{
public:
	uint8                                        Pad_3D24[0x8];                                     // Fixing Size After Last Property..
	struct FQuat                                 Value;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 World;                                             // 0x30(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_ToRigSpace_Rotation
struct FRigUnit_ToRigSpace_Rotation : public FRigUnit
{
public:
	uint8                                        Pad_3D25[0x8];                                     // Fixing Size After Last Property..
	struct FQuat                                 Value;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 Global;                                            // 0x30(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ControlRig.RigUnit_BoneHarmonics_BoneTarget
struct FRigUnit_BoneHarmonics_BoneTarget
{
public:
	class FName                                  bone;                                              // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Ratio;                                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct ControlRig.RigUnit_Harmonics_TargetItem
struct FRigUnit_Harmonics_TargetItem
{
public:
	struct FRigElementKey                        Item;                                              // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Ratio;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ControlRig.RigUnit_BoneHarmonics_WorkData
struct FRigUnit_BoneHarmonics_WorkData
{
public:
	TArray<struct FCachedRigElement>             CachedItems;                                       // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector                               WaveTime;                                          // 0x10(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0x220 - 0x160)
// ScriptStruct ControlRig.RigUnit_BoneHarmonics
struct FRigUnit_BoneHarmonics : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigUnit_BoneHarmonics_BoneTarget> Bones;                                             // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	struct FVector                               WaveSpeed;                                         // 0x170(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WaveFrequency;                                     // 0x188(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WaveAmplitude;                                     // 0x1A0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WaveOffset;                                        // 0x1B8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WaveNoise;                                         // 0x1D0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMAnimEasingType              WaveEase;                                          // 0x1E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D26[0x3];                                     // Fixing Size After Last Property..
	float                                        WaveMinimum;                                       // 0x1EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WaveMaximum;                                       // 0x1F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEulerRotationOrder               RotationOrder;                                     // 0x1F4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x1F5(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D27[0x2];                                     // Fixing Size After Last Property..
	struct FRigUnit_BoneHarmonics_WorkData       WorkData;                                          // 0x1F8(0x28)(Transient, NativeAccessSpecifierPublic)
};

// 0xC0 (0x220 - 0x160)
// ScriptStruct ControlRig.RigUnit_ItemHarmonics
struct FRigUnit_ItemHarmonics : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigUnit_Harmonics_TargetItem> Targets;                                           // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	struct FVector                               WaveSpeed;                                         // 0x170(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WaveFrequency;                                     // 0x188(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WaveAmplitude;                                     // 0x1A0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WaveOffset;                                        // 0x1B8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WaveNoise;                                         // 0x1D0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMAnimEasingType              WaveEase;                                          // 0x1E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D28[0x3];                                     // Fixing Size After Last Property..
	float                                        WaveMinimum;                                       // 0x1EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WaveMaximum;                                       // 0x1F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEulerRotationOrder               RotationOrder;                                     // 0x1F4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D29[0x3];                                     // Fixing Size After Last Property..
	struct FRigUnit_BoneHarmonics_WorkData       WorkData;                                          // 0x1F8(0x28)(Transient, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ControlRig.RigUnit_ChainHarmonics_Reach
struct FRigUnit_ChainHarmonics_Reach
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D2A[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               ReachTarget;                                       // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReachAxis;                                         // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReachMinimum;                                      // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReachMaximum;                                      // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMAnimEasingType              ReachEase;                                         // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D2B[0x7];                                     // Fixing Size Of Struct..
};

// 0x78 (0x78 - 0x0)
// ScriptStruct ControlRig.RigUnit_ChainHarmonics_Wave
struct FRigUnit_ChainHarmonics_Wave
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D2C[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               WaveFrequency;                                     // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WaveAmplitude;                                     // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WaveOffset;                                        // 0x38(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WaveNoise;                                         // 0x50(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WaveMinimum;                                       // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WaveMaximum;                                       // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMAnimEasingType              WaveEase;                                          // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D2D[0x7];                                     // Fixing Size Of Struct..
};

// 0x58 (0x58 - 0x0)
// ScriptStruct ControlRig.RigUnit_ChainHarmonics_Pendulum
struct FRigUnit_ChainHarmonics_Pendulum
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D2E[0x3];                                     // Fixing Size After Last Property..
	float                                        PendulumStiffness;                                 // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PendulumGravity;                                   // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PendulumBlend;                                     // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PendulumDrag;                                      // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PendulumMinimum;                                   // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PendulumMaximum;                                   // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMAnimEasingType              PendulumEase;                                      // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D2F[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               UnwindAxis;                                        // 0x38(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UnwindMinimum;                                     // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UnwindMaximum;                                     // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct ControlRig.RigUnit_ChainHarmonics_WorkData
struct FRigUnit_ChainHarmonics_WorkData
{
public:
	struct FVector                               Time;                                              // 0x0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCachedRigElement>             Items;                                             // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                Ratio;                                             // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       LocalTip;                                          // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       PendulumTip;                                       // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       PendulumPosition;                                  // 0x58(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       PendulumVelocity;                                  // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       HierarchyLine;                                     // 0x78(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       VelocityLines;                                     // 0x88(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x2D0 (0x430 - 0x160)
// ScriptStruct ControlRig.RigUnit_ChainHarmonics
struct FRigUnit_ChainHarmonics : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  ChainRoot;                                         // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D30[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Speed;                                             // 0x168(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigUnit_ChainHarmonics_Reach         Reach;                                             // 0x180(0x48)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_ChainHarmonics_Wave          Wave;                                              // 0x1C8(0x78)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    WaveCurve;                                         // 0x240(0x88)(Edit, BlueprintVisible, EditConst, NativeAccessSpecifierPublic)
	struct FRigUnit_ChainHarmonics_Pendulum      Pendulum;                                          // 0x2C8(0x58)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bDrawDebug;                                        // 0x320(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D31[0xF];                                     // Fixing Size After Last Property..
	struct FTransform                            DrawWorldOffset;                                   // 0x330(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigUnit_ChainHarmonics_WorkData      WorkData;                                          // 0x390(0x98)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D32[0x8];                                     // Fixing Size Of Struct..
};

// 0x2D0 (0x430 - 0x160)
// ScriptStruct ControlRig.RigUnit_ChainHarmonicsPerItem
struct FRigUnit_ChainHarmonicsPerItem : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        ChainRoot;                                         // 0x160(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Speed;                                             // 0x168(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigUnit_ChainHarmonics_Reach         Reach;                                             // 0x180(0x48)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_ChainHarmonics_Wave          Wave;                                              // 0x1C8(0x78)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    WaveCurve;                                         // 0x240(0x88)(Edit, BlueprintVisible, EditConst, NativeAccessSpecifierPublic)
	struct FRigUnit_ChainHarmonics_Pendulum      Pendulum;                                          // 0x2C8(0x58)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bDrawDebug;                                        // 0x320(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D33[0xF];                                     // Fixing Size After Last Property..
	struct FTransform                            DrawWorldOffset;                                   // 0x330(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigUnit_ChainHarmonics_WorkData      WorkData;                                          // 0x390(0x98)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D34[0x8];                                     // Fixing Size Of Struct..
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ControlRig.RigUnit_AimBone_Target
struct FRigUnit_AimBone_Target
{
public:
	float                                        Weight;                                            // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D35[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Axis;                                              // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Target;                                            // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigVectorKind             Kind;                                              // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D36[0x3];                                     // Fixing Size After Last Property..
	class FName                                  Space;                                             // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ControlRig.RigUnit_AimItem_Target
struct FRigUnit_AimItem_Target
{
public:
	float                                        Weight;                                            // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D37[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Axis;                                              // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Target;                                            // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigVectorKind             Kind;                                              // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D38[0x3];                                     // Fixing Size After Last Property..
	struct FRigElementKey                        Space;                                             // 0x3C(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D39[0x4];                                     // Fixing Size Of Struct..
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ControlRig.RigUnit_AimBone_DebugSettings
struct FRigUnit_AimBone_DebugSettings
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D3A[0x3];                                     // Fixing Size After Last Property..
	float                                        Scale;                                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D3B[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            WorldOffset;                                       // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x218 (0x220 - 0x8)
// ScriptStruct ControlRig.RigUnit_AimBoneMath
struct FRigUnit_AimBoneMath : public FRigUnit_HighlevelBase
{
public:
	uint8                                        Pad_3D3C[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            InputTransform;                                    // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigUnit_AimItem_Target               Primary;                                           // 0x70(0x48)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_AimItem_Target               Secondary;                                         // 0xB8(0x48)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x100(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D3D[0xC];                                     // Fixing Size After Last Property..
	struct FTransform                            Result;                                            // 0x110(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigUnit_AimBone_DebugSettings        DebugSettings;                                     // 0x170(0x70)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     PrimaryCachedSpace;                                // 0x1E0(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     SecondaryCachedSpace;                              // 0x1F8(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInitialized;                                    // 0x210(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D3E[0xF];                                     // Fixing Size Of Struct..
};

// 0x150 (0x2B0 - 0x160)
// ScriptStruct ControlRig.RigUnit_AimBone
struct FRigUnit_AimBone : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  bone;                                              // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D3F[0x4];                                     // Fixing Size After Last Property..
	struct FRigUnit_AimBone_Target               Primary;                                           // 0x168(0x40)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_AimBone_Target               Secondary;                                         // 0x1A8(0x40)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x1E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x1EC(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D40[0x3];                                     // Fixing Size After Last Property..
	struct FRigUnit_AimBone_DebugSettings        DebugSettings;                                     // 0x1F0(0x70)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedBoneIndex;                                   // 0x260(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     PrimaryCachedSpace;                                // 0x278(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     SecondaryCachedSpace;                              // 0x290(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInitialized;                                    // 0x2A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D41[0x7];                                     // Fixing Size Of Struct..
};

// 0x160 (0x2C0 - 0x160)
// ScriptStruct ControlRig.RigUnit_AimItem
struct FRigUnit_AimItem : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x160(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigUnit_AimItem_Target               Primary;                                           // 0x168(0x48)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_AimItem_Target               Secondary;                                         // 0x1B0(0x48)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x1F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D42[0x4];                                     // Fixing Size After Last Property..
	struct FRigUnit_AimBone_DebugSettings        DebugSettings;                                     // 0x200(0x70)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedItem;                                        // 0x270(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     PrimaryCachedSpace;                                // 0x288(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     SecondaryCachedSpace;                              // 0x2A0(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInitialized;                                    // 0x2B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D43[0x7];                                     // Fixing Size Of Struct..
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ControlRig.RigUnit_AimConstraint_WorldUp
struct FRigUnit_AimConstraint_WorldUp
{
public:
	struct FVector                               Target;                                            // 0x0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigVectorKind             Kind;                                              // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D44[0x3];                                     // Fixing Size After Last Property..
	struct FRigElementKey                        Space;                                             // 0x1C(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D45[0x4];                                     // Fixing Size Of Struct..
};

// 0x80 (0x80 - 0x0)
// ScriptStruct ControlRig.RigUnit_AimConstraint_AdvancedSettings
struct FRigUnit_AimConstraint_AdvancedSettings
{
public:
	struct FRigUnit_AimBone_DebugSettings        DebugSettings;                                     // 0x0(0x70)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class EEulerRotationOrder               RotationOrderForFilter;                            // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D46[0xF];                                     // Fixing Size Of Struct..
};

// 0xC (0xC - 0x0)
// ScriptStruct ControlRig.ConstraintParent
struct FConstraintParent
{
public:
	struct FRigElementKey                        Item;                                              // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x150 (0x2B0 - 0x160)
// ScriptStruct ControlRig.RigUnit_AimConstraintLocalSpaceOffset
struct FRigUnit_AimConstraintLocalSpaceOffset : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x160(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMaintainOffset;                                   // 0x168(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFilterOptionPerAxis                  Filter;                                            // 0x169(0x3)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D47[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               AimAxis;                                           // 0x170(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               UpAxis;                                            // 0x188(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigUnit_AimConstraint_WorldUp        WorldUp;                                           // 0x1A0(0x28)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FConstraintParent>             Parents;                                           // 0x1C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D48[0x8];                                     // Fixing Size After Last Property..
	struct FRigUnit_AimConstraint_AdvancedSettings AdvancedSettings;                                  // 0x1E0(0x80)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D49[0x4];                                     // Fixing Size After Last Property..
	struct FCachedRigElement                     WorldUpSpaceCache;                                 // 0x268(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     ChildCache;                                        // 0x280(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCachedRigElement>             ParentCaches;                                      // 0x298(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bIsInitialized;                                    // 0x2A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D4A[0x7];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ControlRig.RigUnit_CCDIK_RotationLimit
struct FRigUnit_CCDIK_RotationLimit
{
public:
	class FName                                  bone;                                              // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Limit;                                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct ControlRig.RigUnit_CCDIK_RotationLimitPerItem
struct FRigUnit_CCDIK_RotationLimitPerItem
{
public:
	struct FRigElementKey                        Item;                                              // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Limit;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct ControlRig.RigUnit_CCDIK_WorkData
struct FRigUnit_CCDIK_WorkData
{
public:
	TArray<struct FCCDIKChainLink>               Chain;                                             // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCachedRigElement>             CachedItems;                                       // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                RotationLimitIndex;                                // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                RotationLimitsPerItem;                             // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedEffector;                                    // 0x40(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x100 (0x260 - 0x160)
// ScriptStruct ControlRig.RigUnit_CCDIK
struct FRigUnit_CCDIK : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  StartBone;                                         // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EffectorBone;                                      // 0x164(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D4B[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            EffectorTransform;                                 // 0x170(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Precision;                                         // 0x1D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x1D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxIterations;                                     // 0x1D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStartFromTail;                                    // 0x1DC(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D4C[0x3];                                     // Fixing Size After Last Property..
	float                                        BaseRotationLimit;                                 // 0x1E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D4D[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FRigUnit_CCDIK_RotationLimit>  RotationLimits;                                    // 0x1E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x1F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D4E[0x7];                                     // Fixing Size After Last Property..
	struct FRigUnit_CCDIK_WorkData               WorkData;                                          // 0x200(0x58)(NativeAccessSpecifierPublic)
	uint8                                        Pad_3D4F[0x8];                                     // Fixing Size Of Struct..
};

// 0x100 (0x260 - 0x160)
// ScriptStruct ControlRig.RigUnit_CCDIKPerItem
struct FRigUnit_CCDIKPerItem : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKeyCollection              Items;                                             // 0x160(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            EffectorTransform;                                 // 0x170(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Precision;                                         // 0x1D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x1D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxIterations;                                     // 0x1D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStartFromTail;                                    // 0x1DC(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D50[0x3];                                     // Fixing Size After Last Property..
	float                                        BaseRotationLimit;                                 // 0x1E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D51[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FRigUnit_CCDIK_RotationLimitPerItem> RotationLimits;                                    // 0x1E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x1F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D52[0x7];                                     // Fixing Size After Last Property..
	struct FRigUnit_CCDIK_WorkData               WorkData;                                          // 0x200(0x58)(NativeAccessSpecifierPublic)
	uint8                                        Pad_3D53[0x8];                                     // Fixing Size Of Struct..
};

// 0x100 (0x260 - 0x160)
// ScriptStruct ControlRig.RigUnit_CCDIKItemArray
struct FRigUnit_CCDIKItemArray : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FTransform                            EffectorTransform;                                 // 0x170(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Precision;                                         // 0x1D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x1D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxIterations;                                     // 0x1D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStartFromTail;                                    // 0x1DC(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D54[0x3];                                     // Fixing Size After Last Property..
	float                                        BaseRotationLimit;                                 // 0x1E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D55[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FRigUnit_CCDIK_RotationLimitPerItem> RotationLimits;                                    // 0x1E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x1F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D56[0x7];                                     // Fixing Size After Last Property..
	struct FRigUnit_CCDIK_WorkData               WorkData;                                          // 0x200(0x58)(NativeAccessSpecifierPublic)
	uint8                                        Pad_3D57[0x8];                                     // Fixing Size Of Struct..
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ControlRig.RigUnit_DistributeRotation_Rotation
struct FRigUnit_DistributeRotation_Rotation
{
public:
	struct FQuat                                 Rotation;                                          // 0x0(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Ratio;                                             // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D58[0xC];                                     // Fixing Size Of Struct..
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ControlRig.RigUnit_DistributeRotation_WorkData
struct FRigUnit_DistributeRotation_WorkData
{
public:
	TArray<struct FCachedRigElement>             CachedItems;                                       // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                ItemRotationA;                                     // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                ItemRotationB;                                     // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                ItemRotationT;                                     // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    ItemLocalTransforms;                               // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x80 (0x1E0 - 0x160)
// ScriptStruct ControlRig.RigUnit_DistributeRotation
struct FRigUnit_DistributeRotation : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  StartBone;                                         // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EndBone;                                           // 0x164(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRigUnit_DistributeRotation_Rotation> Rotations;                                         // 0x168(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ERigVMAnimEasingType              RotationEaseType;                                  // 0x178(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D59[0x3];                                     // Fixing Size After Last Property..
	float                                        Weight;                                            // 0x17C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x180(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D5A[0x7];                                     // Fixing Size After Last Property..
	struct FRigUnit_DistributeRotation_WorkData  WorkData;                                          // 0x188(0x50)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D5B[0x8];                                     // Fixing Size Of Struct..
};

// 0x80 (0x1E0 - 0x160)
// ScriptStruct ControlRig.RigUnit_DistributeRotationForCollection
struct FRigUnit_DistributeRotationForCollection : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKeyCollection              Items;                                             // 0x160(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRigUnit_DistributeRotation_Rotation> Rotations;                                         // 0x170(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ERigVMAnimEasingType              RotationEaseType;                                  // 0x180(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D5C[0x3];                                     // Fixing Size After Last Property..
	float                                        Weight;                                            // 0x184(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigUnit_DistributeRotation_WorkData  WorkData;                                          // 0x188(0x50)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D5D[0x8];                                     // Fixing Size Of Struct..
};

// 0x80 (0x1E0 - 0x160)
// ScriptStruct ControlRig.RigUnit_DistributeRotationForItemArray
struct FRigUnit_DistributeRotationForItemArray : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRigUnit_DistributeRotation_Rotation> Rotations;                                         // 0x170(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ERigVMAnimEasingType              RotationEaseType;                                  // 0x180(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D5E[0x3];                                     // Fixing Size After Last Property..
	float                                        Weight;                                            // 0x184(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigUnit_DistributeRotation_WorkData  WorkData;                                          // 0x188(0x50)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D5F[0x8];                                     // Fixing Size Of Struct..
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ControlRig.RigUnit_FABRIK_WorkData
struct FRigUnit_FABRIK_WorkData
{
public:
	TArray<struct FFABRIKChainLink>              Chain;                                             // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCachedRigElement>             CachedItems;                                       // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedEffector;                                    // 0x20(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0x220 - 0x160)
// ScriptStruct ControlRig.RigUnit_FABRIK
struct FRigUnit_FABRIK : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  StartBone;                                         // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EffectorBone;                                      // 0x164(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D60[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            EffectorTransform;                                 // 0x170(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Precision;                                         // 0x1D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x1D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x1D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D61[0x3];                                     // Fixing Size After Last Property..
	int32                                        MaxIterations;                                     // 0x1DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigUnit_FABRIK_WorkData              WorkData;                                          // 0x1E0(0x38)(Transient, NativeAccessSpecifierPublic)
	bool                                         bSetEffectorTransform;                             // 0x218(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D62[0x7];                                     // Fixing Size Of Struct..
};

// 0xC0 (0x220 - 0x160)
// ScriptStruct ControlRig.RigUnit_FABRIKPerItem
struct FRigUnit_FABRIKPerItem : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKeyCollection              Items;                                             // 0x160(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            EffectorTransform;                                 // 0x170(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Precision;                                         // 0x1D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x1D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x1D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D63[0x3];                                     // Fixing Size After Last Property..
	int32                                        MaxIterations;                                     // 0x1DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigUnit_FABRIK_WorkData              WorkData;                                          // 0x1E0(0x38)(Transient, NativeAccessSpecifierPublic)
	bool                                         bSetEffectorTransform;                             // 0x218(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D64[0x7];                                     // Fixing Size Of Struct..
};

// 0xC0 (0x220 - 0x160)
// ScriptStruct ControlRig.RigUnit_FABRIKItemArray
struct FRigUnit_FABRIKItemArray : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FTransform                            EffectorTransform;                                 // 0x170(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Precision;                                         // 0x1D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x1D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x1D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D65[0x3];                                     // Fixing Size After Last Property..
	int32                                        MaxIterations;                                     // 0x1DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigUnit_FABRIK_WorkData              WorkData;                                          // 0x1E0(0x38)(Transient, NativeAccessSpecifierPublic)
	bool                                         bSetEffectorTransform;                             // 0x218(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D66[0x7];                                     // Fixing Size Of Struct..
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ControlRig.RigUnit_FitChainToCurve_Rotation
struct FRigUnit_FitChainToCurve_Rotation
{
public:
	struct FQuat                                 Rotation;                                          // 0x0(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Ratio;                                             // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D67[0xC];                                     // Fixing Size Of Struct..
};

// 0x90 (0x90 - 0x0)
// ScriptStruct ControlRig.RigUnit_FitChainToCurve_DebugSettings
struct FRigUnit_FitChainToCurve_DebugSettings
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D68[0x3];                                     // Fixing Size After Last Property..
	float                                        Scale;                                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          CurveColor;                                        // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SegmentsColor;                                     // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D69[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            WorldOffset;                                       // 0x30(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct ControlRig.RigUnit_FitChainToCurve_WorkData
struct FRigUnit_FitChainToCurve_WorkData
{
public:
	float                                        ChainLength;                                       // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D6A[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FVector>                       ItemPositions;                                     // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                ItemSegments;                                      // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       CurvePositions;                                    // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                CurveSegments;                                     // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCachedRigElement>             CachedItems;                                       // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                ItemRotationA;                                     // 0x58(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                ItemRotationB;                                     // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                ItemRotationT;                                     // 0x78(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    ItemLocalTransforms;                               // 0x88(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x210 (0x370 - 0x160)
// ScriptStruct ControlRig.RigUnit_FitChainToCurve
struct FRigUnit_FitChainToCurve : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  StartBone;                                         // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EndBone;                                           // 0x164(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigVMFourPointBezier                 Bezier;                                            // 0x168(0x60)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class EControlRigCurveAlignment         Alignment;                                         // 0x1C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D6B[0x3];                                     // Fixing Size After Last Property..
	float                                        Minimum;                                           // 0x1CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0x1D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SamplingPrecision;                                 // 0x1D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PrimaryAxis;                                       // 0x1D8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SecondaryAxis;                                     // 0x1F0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PoleVectorPosition;                                // 0x208(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations;                                         // 0x220(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ERigVMAnimEasingType              RotationEaseType;                                  // 0x230(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D6C[0x3];                                     // Fixing Size After Last Property..
	float                                        Weight;                                            // 0x234(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x238(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D6D[0x7];                                     // Fixing Size After Last Property..
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings;                                     // 0x240(0x90)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_FitChainToCurve_WorkData     WorkData;                                          // 0x2D0(0x98)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D6E[0x8];                                     // Fixing Size Of Struct..
};

// 0x220 (0x380 - 0x160)
// ScriptStruct ControlRig.RigUnit_FitChainToCurvePerItem
struct FRigUnit_FitChainToCurvePerItem : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKeyCollection              Items;                                             // 0x160(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigVMFourPointBezier                 Bezier;                                            // 0x170(0x60)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class EControlRigCurveAlignment         Alignment;                                         // 0x1D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D6F[0x3];                                     // Fixing Size After Last Property..
	float                                        Minimum;                                           // 0x1D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0x1D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SamplingPrecision;                                 // 0x1DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PrimaryAxis;                                       // 0x1E0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SecondaryAxis;                                     // 0x1F8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PoleVectorPosition;                                // 0x210(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations;                                         // 0x228(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ERigVMAnimEasingType              RotationEaseType;                                  // 0x238(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D70[0x3];                                     // Fixing Size After Last Property..
	float                                        Weight;                                            // 0x23C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x240(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D71[0xF];                                     // Fixing Size After Last Property..
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings;                                     // 0x250(0x90)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_FitChainToCurve_WorkData     WorkData;                                          // 0x2E0(0x98)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D72[0x8];                                     // Fixing Size Of Struct..
};

// 0x220 (0x380 - 0x160)
// ScriptStruct ControlRig.RigUnit_FitChainToCurveItemArray
struct FRigUnit_FitChainToCurveItemArray : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FRigVMFourPointBezier                 Bezier;                                            // 0x170(0x60)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class EControlRigCurveAlignment         Alignment;                                         // 0x1D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D73[0x3];                                     // Fixing Size After Last Property..
	float                                        Minimum;                                           // 0x1D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0x1D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SamplingPrecision;                                 // 0x1DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PrimaryAxis;                                       // 0x1E0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SecondaryAxis;                                     // 0x1F8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PoleVectorPosition;                                // 0x210(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations;                                         // 0x228(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ERigVMAnimEasingType              RotationEaseType;                                  // 0x238(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D74[0x3];                                     // Fixing Size After Last Property..
	float                                        Weight;                                            // 0x23C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x240(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D75[0xF];                                     // Fixing Size After Last Property..
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings;                                     // 0x250(0x90)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_FitChainToCurve_WorkData     WorkData;                                          // 0x2E0(0x98)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D76[0x8];                                     // Fixing Size Of Struct..
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms_PerBone
struct FRigUnit_ModifyBoneTransforms_PerBone
{
public:
	class FName                                  bone;                                              // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D77[0xC];                                     // Fixing Size After Last Property..
	struct FTransform                            Transform;                                         // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigUnit_ModifyTransforms_WorkData
struct FRigUnit_ModifyTransforms_WorkData
{
public:
	TArray<struct FCachedRigElement>             CachedItems;                                       // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms_WorkData
struct FRigUnit_ModifyBoneTransforms_WorkData : public FRigUnit_ModifyTransforms_WorkData
{
public:
};

// 0x30 (0x190 - 0x160)
// ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms
struct FRigUnit_ModifyBoneTransforms : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigUnit_ModifyBoneTransforms_PerBone> BoneToModify;                                      // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x170(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeightMinimum;                                     // 0x174(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeightMaximum;                                     // 0x178(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigModifyBoneMode         Mode;                                              // 0x17C(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D78[0x3];                                     // Fixing Size After Last Property..
	struct FRigUnit_ModifyBoneTransforms_WorkData WorkData;                                          // 0x180(0x10)(Transient, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ControlRig.RigUnit_ModifyTransforms_PerItem
struct FRigUnit_ModifyTransforms_PerItem
{
public:
	struct FRigElementKey                        Item;                                              // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D79[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            Transform;                                         // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x190 - 0x160)
// ScriptStruct ControlRig.RigUnit_ModifyTransforms
struct FRigUnit_ModifyTransforms : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigUnit_ModifyTransforms_PerItem> ItemToModify;                                      // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x170(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeightMinimum;                                     // 0x174(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeightMaximum;                                     // 0x178(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigModifyBoneMode         Mode;                                              // 0x17C(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D7A[0x3];                                     // Fixing Size After Last Property..
	struct FRigUnit_ModifyTransforms_WorkData    WorkData;                                          // 0x180(0x10)(Transient, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct ControlRig.RigUnit_MultiFABRIK_WorkData
struct FRigUnit_MultiFABRIK_WorkData
{
public:
	uint8                                        Pad_3D7B[0x68];                                    // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ControlRig.RigUnit_MultiFABRIK_EndEffector
struct FRigUnit_MultiFABRIK_EndEffector
{
public:
	class FName                                  bone;                                              // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D7C[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Location;                                          // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0x200 - 0x160)
// ScriptStruct ControlRig.RigUnit_MultiFABRIK
struct FRigUnit_MultiFABRIK : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  RootBone;                                          // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D7D[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FRigUnit_MultiFABRIK_EndEffector> Effectors;                                         // 0x168(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Precision;                                         // 0x178(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x17C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D7E[0x3];                                     // Fixing Size After Last Property..
	int32                                        MaxIterations;                                     // 0x180(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D7F[0x4];                                     // Fixing Size After Last Property..
	struct FRigUnit_MultiFABRIK_WorkData         WorkData;                                          // 0x188(0x68)(Transient, NativeAccessSpecifierPublic)
	bool                                         bIsInitialized;                                    // 0x1F0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D80[0xF];                                     // Fixing Size Of Struct..
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ControlRig.RigUnit_SlideChain_WorkData
struct FRigUnit_SlideChain_WorkData
{
public:
	float                                        ChainLength;                                       // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D81[0x4];                                     // Fixing Size After Last Property..
	TArray<float>                                ItemSegments;                                      // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCachedRigElement>             CachedItems;                                       // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    Transforms;                                        // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    BlendedTransforms;                                 // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x1C0 - 0x160)
// ScriptStruct ControlRig.RigUnit_SlideChain
struct FRigUnit_SlideChain : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  StartBone;                                         // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EndBone;                                           // 0x164(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SlideAmount;                                       // 0x168(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x16C(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D82[0x3];                                     // Fixing Size After Last Property..
	struct FRigUnit_SlideChain_WorkData          WorkData;                                          // 0x170(0x48)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D83[0x8];                                     // Fixing Size Of Struct..
};

// 0x60 (0x1C0 - 0x160)
// ScriptStruct ControlRig.RigUnit_SlideChainPerItem
struct FRigUnit_SlideChainPerItem : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKeyCollection              Items;                                             // 0x160(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SlideAmount;                                       // 0x170(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x174(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D84[0x3];                                     // Fixing Size After Last Property..
	struct FRigUnit_SlideChain_WorkData          WorkData;                                          // 0x178(0x48)(Transient, NativeAccessSpecifierPublic)
};

// 0x60 (0x1C0 - 0x160)
// ScriptStruct ControlRig.RigUnit_SlideChainItemArray
struct FRigUnit_SlideChainItemArray : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        SlideAmount;                                       // 0x170(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x174(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D85[0x3];                                     // Fixing Size After Last Property..
	struct FRigUnit_SlideChain_WorkData          WorkData;                                          // 0x178(0x48)(Transient, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RegionScaleFactors
struct FRegionScaleFactors
{
public:
	float                                        PositiveWidth;                                     // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NegativeWidth;                                     // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PositiveHeight;                                    // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NegativeHeight;                                    // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct ControlRig.SphericalRegion
struct FSphericalRegion
{
public:
	uint8                                        Pad_3D86[0x14];                                    // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.SphericalPoseReaderDebugSettings
struct FSphericalPoseReaderDebugSettings
{
public:
	bool                                         bDrawDebug;                                        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDraw2D;                                           // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawLocalAxes;                                    // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D87[0x1];                                     // Fixing Size After Last Property..
	float                                        DebugScale;                                        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DebugSegments;                                     // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebugThickness;                                    // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x190 (0x2F0 - 0x160)
// ScriptStruct ControlRig.RigUnit_SphericalPoseReader
struct FRigUnit_SphericalPoseReader : public FRigUnit_HighlevelBaseMutable
{
public:
	float                                        OutputParam;                                       // 0x160(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        DriverItem;                                        // 0x164(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D88[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               DriverAxis;                                        // 0x170(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RotationOffset;                                    // 0x188(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ActiveRegionSize;                                  // 0x1A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRegionScaleFactors                   ActiveRegionScaleFactors;                          // 0x1A4(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        FalloffSize;                                       // 0x1B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRegionScaleFactors                   FalloffRegionScaleFactors;                         // 0x1B8(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         FlipWidthScaling;                                  // 0x1C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FlipHeightScaling;                                 // 0x1C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D89[0x2];                                     // Fixing Size After Last Property..
	struct FRigElementKey                        OptionalParentItem;                                // 0x1CC(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSphericalPoseReaderDebugSettings     Debug;                                             // 0x1D4(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSphericalRegion                      InnerRegion;                                       // 0x1E4(0x14)(Transient, NoDestructor, NativeAccessSpecifierPublic)
	struct FSphericalRegion                      OuterRegion;                                       // 0x1F8(0x14)(Transient, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D8A[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               DriverNormal;                                      // 0x210(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Driver2D;                                          // 0x228(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     DriverCache;                                       // 0x240(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     OptionalParentCache;                               // 0x258(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            LocalDriverTransformInit;                          // 0x270(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CachedRotationOffset;                              // 0x2D0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCachedInitTransforms;                             // 0x2E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D8B[0x7];                                     // Fixing Size Of Struct..
};

// 0x80 (0x80 - 0x0)
// ScriptStruct ControlRig.RigUnit_SpringIK_DebugSettings
struct FRigUnit_SpringIK_DebugSettings
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D8C[0x3];                                     // Fixing Size After Last Property..
	float                                        Scale;                                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D8D[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            WorldOffset;                                       // 0x20(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct ControlRig.RigUnit_SpringIK_WorkData
struct FRigUnit_SpringIK_WorkData
{
public:
	TArray<struct FCachedRigElement>             CachedBones;                                       // 0x0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedPoleVector;                                  // 0x10(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    Transforms;                                        // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FCRSimPointContainer                  Simulation;                                        // 0x38(0x78)(NativeAccessSpecifierPublic)
};

// 0x1B0 (0x310 - 0x160)
// ScriptStruct ControlRig.RigUnit_SpringIK
struct FRigUnit_SpringIK : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  StartBone;                                         // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EndBone;                                           // 0x164(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HierarchyStrength;                                 // 0x168(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EffectorStrength;                                  // 0x16C(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EffectorRatio;                                     // 0x170(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RootStrength;                                      // 0x174(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RootRatio;                                         // 0x178(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damping;                                           // 0x17C(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PoleVector;                                        // 0x180(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFlipPolePlane;                                    // 0x198(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigVectorKind             PoleVectorKind;                                    // 0x199(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D8E[0x2];                                     // Fixing Size After Last Property..
	class FName                                  PoleVectorSpace;                                   // 0x19C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PrimaryAxis;                                       // 0x1A0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SecondaryAxis;                                     // 0x1B8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLiveSimulation;                                   // 0x1D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D8F[0x3];                                     // Fixing Size After Last Property..
	int32                                        Iterations;                                        // 0x1D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLimitLocalPosition;                               // 0x1D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x1D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D90[0x6];                                     // Fixing Size After Last Property..
	struct FRigUnit_SpringIK_DebugSettings       DebugSettings;                                     // 0x1E0(0x80)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_SpringIK_WorkData            WorkData;                                          // 0x260(0xB0)(Transient, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ControlRig.ConstraintTarget
struct FConstraintTarget
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x60)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMaintainOffset;                                   // 0x64(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransformFilter                      Filter;                                            // 0x65(0x9)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D91[0x2];                                     // Fixing Size Of Struct..
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ControlRig.RigUnit_TransformConstraint_WorkData
struct FRigUnit_TransformConstraint_WorkData
{
public:
	TArray<struct FConstraintData>               ConstraintData;                                    // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<int32, int32>                           ConstraintDataToTargets;                           // 0x10(0x50)(NativeAccessSpecifierPublic)
};

// 0xF0 (0x250 - 0x160)
// ScriptStruct ControlRig.RigUnit_TransformConstraint
struct FRigUnit_TransformConstraint : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  bone;                                              // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETransformSpaceMode               BaseTransformSpace;                                // 0x164(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D92[0xB];                                     // Fixing Size After Last Property..
	struct FTransform                            BaseTransform;                                     // 0x170(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BaseBone;                                          // 0x1D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D93[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FConstraintTarget>             Targets;                                           // 0x1D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bUseInitialTransforms;                             // 0x1E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D94[0x7];                                     // Fixing Size After Last Property..
	struct FRigUnit_TransformConstraint_WorkData WorkData;                                          // 0x1F0(0x60)(Transient, NativeAccessSpecifierPrivate)
};

// 0xF0 (0x250 - 0x160)
// ScriptStruct ControlRig.RigUnit_TransformConstraintPerItem
struct FRigUnit_TransformConstraintPerItem : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x160(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETransformSpaceMode               BaseTransformSpace;                                // 0x168(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D95[0x7];                                     // Fixing Size After Last Property..
	struct FTransform                            BaseTransform;                                     // 0x170(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        BaseItem;                                          // 0x1D0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FConstraintTarget>             Targets;                                           // 0x1D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bUseInitialTransforms;                             // 0x1E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D96[0x7];                                     // Fixing Size After Last Property..
	struct FRigUnit_TransformConstraint_WorkData WorkData;                                          // 0x1F0(0x60)(Transient, NativeAccessSpecifierPrivate)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct ControlRig.RigUnit_ParentConstraint_AdvancedSettings
struct FRigUnit_ParentConstraint_AdvancedSettings
{
public:
	enum class EConstraintInterpType             InterpolationType;                                 // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEulerRotationOrder               RotationOrderForFilter;                            // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x1C0 - 0x160)
// ScriptStruct ControlRig.RigUnit_ParentConstraint
struct FRigUnit_ParentConstraint : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x160(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMaintainOffset;                                   // 0x168(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransformFilter                      Filter;                                            // 0x169(0x9)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D97[0x6];                                     // Fixing Size After Last Property..
	TArray<struct FConstraintParent>             Parents;                                           // 0x178(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FRigUnit_ParentConstraint_AdvancedSettings AdvancedSettings;                                  // 0x188(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D98[0x2];                                     // Fixing Size After Last Property..
	float                                        Weight;                                            // 0x18C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     ChildCache;                                        // 0x190(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCachedRigElement>             ParentCaches;                                      // 0x1A8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D99[0x8];                                     // Fixing Size Of Struct..
};

// 0x30 (0x190 - 0x160)
// ScriptStruct ControlRig.RigUnit_PositionConstraint
struct FRigUnit_PositionConstraint : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x160(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMaintainOffset;                                   // 0x168(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFilterOptionPerAxis                  Filter;                                            // 0x169(0x3)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D9A[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FConstraintParent>             Parents;                                           // 0x170(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x180(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D9B[0xC];                                     // Fixing Size Of Struct..
};

// 0x50 (0x1B0 - 0x160)
// ScriptStruct ControlRig.RigUnit_PositionConstraintLocalSpaceOffset
struct FRigUnit_PositionConstraintLocalSpaceOffset : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x160(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMaintainOffset;                                   // 0x168(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFilterOptionPerAxis                  Filter;                                            // 0x169(0x3)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D9C[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FConstraintParent>             Parents;                                           // 0x170(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x180(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D9D[0x4];                                     // Fixing Size After Last Property..
	struct FCachedRigElement                     ChildCache;                                        // 0x188(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCachedRigElement>             ParentCaches;                                      // 0x1A0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct ControlRig.RigUnit_RotationConstraint_AdvancedSettings
struct FRigUnit_RotationConstraint_AdvancedSettings
{
public:
	enum class EConstraintInterpType             InterpolationType;                                 // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEulerRotationOrder               RotationOrderForFilter;                            // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x190 - 0x160)
// ScriptStruct ControlRig.RigUnit_RotationConstraint
struct FRigUnit_RotationConstraint : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x160(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMaintainOffset;                                   // 0x168(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFilterOptionPerAxis                  Filter;                                            // 0x169(0x3)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D9E[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FConstraintParent>             Parents;                                           // 0x170(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FRigUnit_RotationConstraint_AdvancedSettings AdvancedSettings;                                  // 0x180(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D9F[0x2];                                     // Fixing Size After Last Property..
	float                                        Weight;                                            // 0x184(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DA0[0x8];                                     // Fixing Size Of Struct..
};

// 0x50 (0x1B0 - 0x160)
// ScriptStruct ControlRig.RigUnit_RotationConstraintLocalSpaceOffset
struct FRigUnit_RotationConstraintLocalSpaceOffset : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x160(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMaintainOffset;                                   // 0x168(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFilterOptionPerAxis                  Filter;                                            // 0x169(0x3)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DA1[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FConstraintParent>             Parents;                                           // 0x170(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FRigUnit_RotationConstraint_AdvancedSettings AdvancedSettings;                                  // 0x180(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DA2[0x2];                                     // Fixing Size After Last Property..
	float                                        Weight;                                            // 0x184(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     ChildCache;                                        // 0x188(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCachedRigElement>             ParentCaches;                                      // 0x1A0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x190 - 0x160)
// ScriptStruct ControlRig.RigUnit_ScaleConstraint
struct FRigUnit_ScaleConstraint : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x160(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMaintainOffset;                                   // 0x168(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFilterOptionPerAxis                  Filter;                                            // 0x169(0x3)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DA3[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FConstraintParent>             Parents;                                           // 0x170(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x180(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DA4[0xC];                                     // Fixing Size Of Struct..
};

// 0x50 (0x1B0 - 0x160)
// ScriptStruct ControlRig.RigUnit_ScaleConstraintLocalSpaceOffset
struct FRigUnit_ScaleConstraintLocalSpaceOffset : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x160(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMaintainOffset;                                   // 0x168(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFilterOptionPerAxis                  Filter;                                            // 0x169(0x3)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DA5[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FConstraintParent>             Parents;                                           // 0x170(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x180(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DA6[0x4];                                     // Fixing Size After Last Property..
	struct FCachedRigElement                     ChildCache;                                        // 0x188(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCachedRigElement>             ParentCaches;                                      // 0x1A0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ControlRig.RigUnit_TwistBones_WorkData
struct FRigUnit_TwistBones_WorkData
{
public:
	TArray<struct FCachedRigElement>             CachedItems;                                       // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                ItemRatios;                                        // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    ItemTransforms;                                    // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x80 (0x1E0 - 0x160)
// ScriptStruct ControlRig.RigUnit_TwistBones
struct FRigUnit_TwistBones : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  StartBone;                                         // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EndBone;                                           // 0x164(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TwistAxis;                                         // 0x168(0x18)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PoleAxis;                                          // 0x180(0x18)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMAnimEasingType              TwistEaseType;                                     // 0x198(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DA7[0x3];                                     // Fixing Size After Last Property..
	float                                        Weight;                                            // 0x19C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x1A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DA8[0x7];                                     // Fixing Size After Last Property..
	struct FRigUnit_TwistBones_WorkData          WorkData;                                          // 0x1A8(0x30)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DA9[0x8];                                     // Fixing Size Of Struct..
};

// 0x80 (0x1E0 - 0x160)
// ScriptStruct ControlRig.RigUnit_TwistBonesPerItem
struct FRigUnit_TwistBonesPerItem : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKeyCollection              Items;                                             // 0x160(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TwistAxis;                                         // 0x170(0x18)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PoleAxis;                                          // 0x188(0x18)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMAnimEasingType              TwistEaseType;                                     // 0x1A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DAA[0x3];                                     // Fixing Size After Last Property..
	float                                        Weight;                                            // 0x1A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x1A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DAB[0x7];                                     // Fixing Size After Last Property..
	struct FRigUnit_TwistBones_WorkData          WorkData;                                          // 0x1B0(0x30)(Transient, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimple_DebugSettings
struct FRigUnit_TwoBoneIKSimple_DebugSettings
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DAC[0x3];                                     // Fixing Size After Last Property..
	float                                        Scale;                                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DAD[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            WorldOffset;                                       // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C0 (0x320 - 0x160)
// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimple
struct FRigUnit_TwoBoneIKSimple : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  BoneA;                                             // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneB;                                             // 0x164(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EffectorBone;                                      // 0x168(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DAE[0x4];                                     // Fixing Size After Last Property..
	struct FTransform                            Effector;                                          // 0x170(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PrimaryAxis;                                       // 0x1D0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SecondaryAxis;                                     // 0x1E8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SecondaryAxisWeight;                               // 0x200(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DAF[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               PoleVector;                                        // 0x208(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigVectorKind             PoleVectorKind;                                    // 0x220(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DB0[0x3];                                     // Fixing Size After Last Property..
	class FName                                  PoleVectorSpace;                                   // 0x224(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableStretch;                                    // 0x228(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DB1[0x3];                                     // Fixing Size After Last Property..
	float                                        StretchStartRatio;                                 // 0x22C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StretchMaximumRatio;                               // 0x230(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x234(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoneALength;                                       // 0x238(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoneBLength;                                       // 0x23C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x240(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DB2[0xF];                                     // Fixing Size After Last Property..
	struct FRigUnit_TwoBoneIKSimple_DebugSettings DebugSettings;                                     // 0x250(0x70)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedBoneAIndex;                                  // 0x2C0(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedBoneBIndex;                                  // 0x2D8(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedEffectorBoneIndex;                           // 0x2F0(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedPoleVectorSpaceIndex;                        // 0x308(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1D0 (0x330 - 0x160)
// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimplePerItem
struct FRigUnit_TwoBoneIKSimplePerItem : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        ItemA;                                             // 0x160(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        ItemB;                                             // 0x168(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        EffectorItem;                                      // 0x170(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DB3[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            Effector;                                          // 0x180(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PrimaryAxis;                                       // 0x1E0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SecondaryAxis;                                     // 0x1F8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SecondaryAxisWeight;                               // 0x210(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DB4[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               PoleVector;                                        // 0x218(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigVectorKind             PoleVectorKind;                                    // 0x230(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DB5[0x3];                                     // Fixing Size After Last Property..
	struct FRigElementKey                        PoleVectorSpace;                                   // 0x234(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableStretch;                                    // 0x23C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DB6[0x3];                                     // Fixing Size After Last Property..
	float                                        StretchStartRatio;                                 // 0x240(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StretchMaximumRatio;                               // 0x244(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x248(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ItemALength;                                       // 0x24C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ItemBLength;                                       // 0x250(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x254(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DB7[0xB];                                     // Fixing Size After Last Property..
	struct FRigUnit_TwoBoneIKSimple_DebugSettings DebugSettings;                                     // 0x260(0x70)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedItemAIndex;                                  // 0x2D0(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedItemBIndex;                                  // 0x2E8(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedEffectorItemIndex;                           // 0x300(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedPoleVectorSpaceIndex;                        // 0x318(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x80 - 0x8)
// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimpleVectors
struct FRigUnit_TwoBoneIKSimpleVectors : public FRigUnit_HighlevelBase
{
public:
	struct FVector                               Root;                                              // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PoleVector;                                        // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Effector;                                          // 0x38(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableStretch;                                    // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DB8[0x3];                                     // Fixing Size After Last Property..
	float                                        StretchStartRatio;                                 // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StretchMaximumRatio;                               // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoneALength;                                       // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoneBLength;                                       // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DB9[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Elbow;                                             // 0x68(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x198 (0x1A0 - 0x8)
// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimpleTransforms
struct FRigUnit_TwoBoneIKSimpleTransforms : public FRigUnit_HighlevelBase
{
public:
	uint8                                        Pad_3DBA[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            Root;                                              // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PoleVector;                                        // 0x70(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DBB[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            Effector;                                          // 0x90(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PrimaryAxis;                                       // 0xF0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SecondaryAxis;                                     // 0x108(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SecondaryAxisWeight;                               // 0x120(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableStretch;                                    // 0x124(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DBC[0x3];                                     // Fixing Size After Last Property..
	float                                        StretchStartRatio;                                 // 0x128(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StretchMaximumRatio;                               // 0x12C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoneALength;                                       // 0x130(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoneBLength;                                       // 0x134(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DBD[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            Elbow;                                             // 0x140(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct ControlRig.RigUnit_PointSimulation_DebugSettings
struct FRigUnit_PointSimulation_DebugSettings
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DBE[0x3];                                     // Fixing Size After Last Property..
	float                                        Scale;                                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollisionScale;                                    // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawPointsAsSpheres;                              // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DBF[0x3];                                     // Fixing Size After Last Property..
	struct FLinearColor                          Color;                                             // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            WorldOffset;                                       // 0x20(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigUnit_PointSimulation_BoneTarget
struct FRigUnit_PointSimulation_BoneTarget
{
public:
	class FName                                  bone;                                              // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TranslationPoint;                                  // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PrimaryAimPoint;                                   // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SecondaryAimPoint;                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct ControlRig.RigUnit_PointSimulation_WorkData
struct FRigUnit_PointSimulation_WorkData
{
public:
	struct FCRSimPointContainer                  Simulation;                                        // 0x0(0x78)(NativeAccessSpecifierPublic)
	TArray<struct FCachedRigElement>             BoneIndices;                                       // 0x78(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x210 (0x310 - 0x100)
// ScriptStruct ControlRig.RigUnit_PointSimulation
struct FRigUnit_PointSimulation : public FRigVMFunction_SimBaseMutable
{
public:
	TArray<struct FRigVMSimPoint>                Points;                                            // 0x100(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCRSimLinearSpring>            Links;                                             // 0x110(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCRSimPointForce>              Forces;                                            // 0x120(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCRSimSoftCollision>           CollisionVolumes;                                  // 0x130(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        SimulatedStepsPerSecond;                           // 0x140(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMSimPointIntegrateType       IntegratorType;                                    // 0x144(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DC0[0x3];                                     // Fixing Size After Last Property..
	float                                        VerletBlend;                                       // 0x148(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DC1[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FRigUnit_PointSimulation_BoneTarget> BoneTargets;                                       // 0x150(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	bool                                         bLimitLocalPosition;                               // 0x160(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x161(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DC2[0x6];                                     // Fixing Size After Last Property..
	struct FVector                               PrimaryAimAxis;                                    // 0x168(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SecondaryAimAxis;                                  // 0x180(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DC3[0x8];                                     // Fixing Size After Last Property..
	struct FRigUnit_PointSimulation_DebugSettings DebugSettings;                                     // 0x1A0(0x80)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigVMFourPointBezier                 Bezier;                                            // 0x220(0x60)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_PointSimulation_WorkData     WorkData;                                          // 0x280(0x88)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DC4[0x8];                                     // Fixing Size Of Struct..
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_SpringInterp
struct FRigUnit_SpringInterp : public FRigVMFunction_SimBase
{
public:
	float                                        Current;                                           // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Target;                                            // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Stiffness;                                         // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CriticalDamping;                                   // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Mass;                                              // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatSpringState                     SpringState;                                       // 0x20(0xC)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DC5[0x4];                                     // Fixing Size Of Struct..
};

// 0x90 (0x98 - 0x8)
// ScriptStruct ControlRig.RigUnit_SpringInterpVector
struct FRigUnit_SpringInterpVector : public FRigVMFunction_SimBase
{
public:
	struct FVector                               Current;                                           // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Target;                                            // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Stiffness;                                         // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CriticalDamping;                                   // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Mass;                                              // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DC6[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Result;                                            // 0x48(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVectorSpringState                    SpringState;                                       // 0x60(0x38)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_SpringInterpV2
struct FRigUnit_SpringInterpV2 : public FRigVMFunction_SimBase
{
public:
	float                                        Target;                                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Strength;                                          // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CriticalDamping;                                   // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Force;                                             // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseCurrentInput;                                  // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DC7[0x3];                                     // Fixing Size After Last Property..
	float                                        Current;                                           // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetVelocityAmount;                              // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitializeFromTarget;                             // 0x24(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DC8[0x3];                                     // Fixing Size After Last Property..
	float                                        Result;                                            // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Velocity;                                          // 0x2C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SimulatedResult;                                   // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatSpringState                     SpringState;                                       // 0x34(0xC)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE8 - 0x8)
// ScriptStruct ControlRig.RigUnit_SpringInterpVectorV2
struct FRigUnit_SpringInterpVectorV2 : public FRigVMFunction_SimBase
{
public:
	struct FVector                               Target;                                            // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Strength;                                          // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CriticalDamping;                                   // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Force;                                             // 0x28(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseCurrentInput;                                  // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DC9[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               Current;                                           // 0x48(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetVelocityAmount;                              // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitializeFromTarget;                             // 0x64(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DCA[0x3];                                     // Fixing Size After Last Property..
	struct FVector                               Result;                                            // 0x68(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Velocity;                                          // 0x80(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SimulatedResult;                                   // 0x98(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVectorSpringState                    SpringState;                                       // 0xB0(0x38)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0x128 (0x130 - 0x8)
// ScriptStruct ControlRig.RigUnit_SpringInterpQuaternionV2
struct FRigUnit_SpringInterpQuaternionV2 : public FRigVMFunction_SimBase
{
public:
	uint8                                        Pad_3DCB[0x8];                                     // Fixing Size After Last Property..
	struct FQuat                                 Target;                                            // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Strength;                                          // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CriticalDamping;                                   // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Torque;                                            // 0x38(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseCurrentInput;                                  // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DCC[0xF];                                     // Fixing Size After Last Property..
	struct FQuat                                 Current;                                           // 0x60(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetVelocityAmount;                              // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitializeFromTarget;                             // 0x84(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DCD[0xB];                                     // Fixing Size After Last Property..
	struct FQuat                                 Result;                                            // 0x90(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AngularVelocity;                                   // 0xB0(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DCE[0x8];                                     // Fixing Size After Last Property..
	struct FQuat                                 SimulatedResult;                                   // 0xD0(0x20)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuaternionSpringState                SpringState;                                       // 0xF0(0x40)(NoDestructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
