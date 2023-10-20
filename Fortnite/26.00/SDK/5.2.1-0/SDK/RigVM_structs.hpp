#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ERigVMDrawSettings : uint8
{
	Points                         = 0,
	Lines                          = 1,
	LineStrip                      = 2,
	DynamicMesh                    = 3,
	ERigVMDrawSettings_MAX         = 4,
};

enum class ERigVMPinDirection : uint8
{
	Input                          = 0,
	Output                         = 1,
	IO                             = 2,
	Visible                        = 3,
	Hidden                         = 4,
	Invalid                        = 5,
	ERigVMPinDirection_MAX         = 6,
};

enum class ERigVMTransformSpace : uint8
{
	LocalSpace                     = 0,
	GlobalSpace                    = 1,
	Max                            = 2,
};

enum class ERigVMClampSpatialMode : uint8
{
	Plane                          = 0,
	Cylinder                       = 1,
	Sphere                         = 2,
	ERigVMClampSpatialMode_MAX     = 3,
};

enum class ERigVMBreakpointAction : uint8
{
	None                           = 0,
	Resume                         = 1,
	StepOver                       = 2,
	StepInto                       = 3,
	StepOut                        = 4,
	Max                            = 5,
};

enum class ERigVMParameterType : uint8
{
	Input                          = 0,
	Output                         = 1,
	Invalid                        = 2,
	ERigVMParameterType_MAX        = 3,
};

enum class ERigVMOpCode : uint8
{
	Execute_0_Operands             = 0,
	Execute_1_Operands             = 1,
	Execute_2_Operands             = 2,
	Execute_3_Operands             = 3,
	Execute_4_Operands             = 4,
	Execute_5_Operands             = 5,
	Execute_6_Operands             = 6,
	Execute_7_Operands             = 7,
	Execute_8_Operands             = 8,
	Execute_9_Operands             = 9,
	Execute_10_Operands            = 10,
	Execute_11_Operands            = 11,
	Execute_12_Operands            = 12,
	Execute_13_Operands            = 13,
	Execute_14_Operands            = 14,
	Execute_15_Operands            = 15,
	Execute_16_Operands            = 16,
	Execute_17_Operands            = 17,
	Execute_18_Operands            = 18,
	Execute_19_Operands            = 19,
	Execute_20_Operands            = 20,
	Execute_21_Operands            = 21,
	Execute_22_Operands            = 22,
	Execute_23_Operands            = 23,
	Execute_24_Operands            = 24,
	Execute_25_Operands            = 25,
	Execute_26_Operands            = 26,
	Execute_27_Operands            = 27,
	Execute_28_Operands            = 28,
	Execute_29_Operands            = 29,
	Execute_30_Operands            = 30,
	Execute_31_Operands            = 31,
	Execute_32_Operands            = 32,
	Execute_33_Operands            = 33,
	Execute_34_Operands            = 34,
	Execute_35_Operands            = 35,
	Execute_36_Operands            = 36,
	Execute_37_Operands            = 37,
	Execute_38_Operands            = 38,
	Execute_39_Operands            = 39,
	Execute_40_Operands            = 40,
	Execute_41_Operands            = 41,
	Execute_42_Operands            = 42,
	Execute_43_Operands            = 43,
	Execute_44_Operands            = 44,
	Execute_45_Operands            = 45,
	Execute_46_Operands            = 46,
	Execute_47_Operands            = 47,
	Execute_48_Operands            = 48,
	Execute_49_Operands            = 49,
	Execute_50_Operands            = 50,
	Execute_51_Operands            = 51,
	Execute_52_Operands            = 52,
	Execute_53_Operands            = 53,
	Execute_54_Operands            = 54,
	Execute_55_Operands            = 55,
	Execute_56_Operands            = 56,
	Execute_57_Operands            = 57,
	Execute_58_Operands            = 58,
	Execute_59_Operands            = 59,
	Execute_60_Operands            = 60,
	Execute_61_Operands            = 61,
	Execute_62_Operands            = 62,
	Execute_63_Operands            = 63,
	Execute_64_Operands            = 64,
	Zero                           = 65,
	BoolFalse                      = 66,
	BoolTrue                       = 67,
	Copy                           = 68,
	Increment                      = 69,
	Decrement                      = 70,
	Equals                         = 71,
	NotEquals                      = 72,
	JumpAbsolute                   = 73,
	JumpForward                    = 74,
	JumpBackward                   = 75,
	JumpAbsoluteIf                 = 76,
	JumpForwardIf                  = 77,
	JumpBackwardIf                 = 78,
	ChangeType                     = 79,
	Exit                           = 80,
	BeginBlock                     = 81,
	EndBlock                       = 82,
	ArrayReset                     = 83,
	ArrayGetNum                    = 84,
	ArraySetNum                    = 85,
	ArrayGetAtIndex                = 86,
	ArraySetAtIndex                = 87,
	ArrayAdd                       = 88,
	ArrayInsert                    = 89,
	ArrayRemove                    = 90,
	ArrayFind                      = 91,
	ArrayAppend                    = 92,
	ArrayClone                     = 93,
	ArrayIterator                  = 94,
	ArrayUnion                     = 95,
	ArrayDifference                = 96,
	ArrayIntersection              = 97,
	ArrayReverse                   = 98,
	InvokeEntry                    = 99,
	JumpToBranch                   = 100,
	Invalid                        = 101,
	FirstArrayOpCode               = 83,
	LastArrayOpCode                = 98,
	ERigVMOpCode_MAX               = 102,
};

enum class ERigVMCopyType : uint8
{
	Default                        = 0,
	FloatToDouble                  = 1,
	DoubleToFloat                  = 2,
	ERigVMCopyType_MAX             = 3,
};

enum class ERigVMMemoryType : uint8
{
	Work                           = 0,
	Literal                        = 1,
	External                       = 2,
	Debug                          = 3,
	Invalid                        = 4,
	ERigVMMemoryType_MAX           = 5,
};

enum class ERigVMRegisterType : uint8
{
	Plain                          = 0,
	String                         = 1,
	Name                           = 2,
	Struct                         = 3,
	Invalid                        = 4,
	ERigVMRegisterType_MAX         = 5,
};

enum class ERigVMUserWorkflowType : uint8
{
	Invalid                        = 0,
	NodeContext                    = 1,
	PinContext                     = 2,
	OnPinDefaultChanged            = 4,
	All                            = 7,
	ERigVMUserWorkflowType_MAX     = 8,
};

enum class ERigUnitDebugPointMode : uint8
{
	Point                          = 0,
	Vector                         = 1,
	Max                            = 2,
};

enum class ERigUnitDebugTransformMode : uint8
{
	Point                          = 0,
	Axes                           = 1,
	Box                            = 2,
	Max                            = 3,
};

enum class ERigUnitVisualDebugPointMode : uint8
{
	Point                          = 0,
	Vector                         = 1,
	Max                            = 2,
};

enum class ERBFKernelType : uint8
{
	Gaussian                       = 0,
	Exponential                    = 1,
	Linear                         = 2,
	Cubic                          = 3,
	Quintic                        = 4,
	ERBFKernelType_MAX             = 5,
};

enum class ERBFQuatDistanceType : uint8
{
	Euclidean                      = 0,
	ArcLength                      = 1,
	SwingAngle                     = 2,
	TwistAngle                     = 3,
	ERBFQuatDistanceType_MAX       = 4,
};

enum class ERBFVectorDistanceType : uint8
{
	Euclidean                      = 0,
	Manhattan                      = 1,
	ArcLength                      = 2,
	ERBFVectorDistanceType_MAX     = 3,
};

enum class ERigVMAnimEasingType : uint8
{
	Linear                         = 0,
	QuadraticEaseIn                = 1,
	QuadraticEaseOut               = 2,
	QuadraticEaseInOut             = 3,
	CubicEaseIn                    = 4,
	CubicEaseOut                   = 5,
	CubicEaseInOut                 = 6,
	QuarticEaseIn                  = 7,
	QuarticEaseOut                 = 8,
	QuarticEaseInOut               = 9,
	QuinticEaseIn                  = 10,
	QuinticEaseOut                 = 11,
	QuinticEaseInOut               = 12,
	SineEaseIn                     = 13,
	SineEaseOut                    = 14,
	SineEaseInOut                  = 15,
	CircularEaseIn                 = 16,
	CircularEaseOut                = 17,
	CircularEaseInOut              = 18,
	ExponentialEaseIn              = 19,
	ExponentialEaseOut             = 20,
	ExponentialEaseInOut           = 21,
	ElasticEaseIn                  = 22,
	ElasticEaseOut                 = 23,
	ElasticEaseInOut               = 24,
	BackEaseIn                     = 25,
	BackEaseOut                    = 26,
	BackEaseInOut                  = 27,
	BounceEaseIn                   = 28,
	BounceEaseOut                  = 29,
	BounceEaseInOut                = 30,
	ERigVMAnimEasingType_MAX       = 31,
};

enum class ERigVMSimPointIntegrateType : uint8
{
	Verlet                         = 0,
	SemiExplicitEuler              = 1,
	ERigVMSimPointIntegrateType_MAX = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0xD0 - 0x0)
// ScriptStruct RigVM.RigVMDrawInstruction
struct FRigVMDrawInstruction
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMDrawSettings                PrimitiveType;                                     // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_152B[0x7];                                     // Fixing Size After Last Property 
	TArray<struct FVector>                       Positions;                                         // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x20(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_152D[0xC];                                     // Fixing Size After Last Property 
	struct FTransform                            Transform;                                         // 0x40(0x60)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_152E[0x30];                                    // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// ScriptStruct RigVM.RigVMDrawContainer
struct FRigVMDrawContainer
{
public:
	uint8                                        Pad_152F[0x8];                                     // Fixing Size After Last Property 
	TArray<struct FRigVMDrawInstruction>         Instructions;                                      // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct RigVM.RigVMRuntimeSettings
struct FRigVMRuntimeSettings
{
public:
	int32                                        MaximumArraySize;                                  // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1530[0x14];                                    // Fixing Size Of Struct
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct RigVM.RigVMExecuteContext
struct FRigVMExecuteContext
{
public:
	uint8                                        Pad_1539[0xF0];                                    // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// ScriptStruct RigVM.RigVMStruct
struct FRigVMStruct
{
public:
	uint8                                        Pad_153A[0x8];                                     // Fixing Size Of Struct
};

// 0x40 (0x40 - 0x0)
// ScriptStruct RigVM.RigVMSimPoint
struct FRigVMSimPoint
{
public:
	float                                        Mass;                                              // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Size;                                              // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LinearDamping;                                     // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InheritMotion;                                     // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Position;                                          // 0x10(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LinearVelocity;                                    // 0x28(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct RigVM.RigVMDispatchFactory
struct FRigVMDispatchFactory
{
public:
	uint8                                        Pad_153C[0x18];                                    // Fixing Size Of Struct
};

// 0x4 (0x4 - 0x0)
// ScriptStruct RigVM.RigVMUnknownType
struct FRigVMUnknownType
{
public:
	uint32                                       Hash;                                              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0xF8 (0x100 - 0x8)
// ScriptStruct RigVM.RigVMStructMutable
struct FRigVMStructMutable : public FRigVMStruct
{
public:
	uint8                                        Pad_153F[0x8];                                     // Fixing Size After Last Property 
	struct FRigVMExecuteContext                  ExecuteContext;                                    // 0x10(0xF0)(Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)
};

// 0x0 (0x100 - 0x100)
// ScriptStruct RigVM.RigVMFunction_DebugBaseMutable
struct FRigVMFunction_DebugBaseMutable : public FRigVMStructMutable
{
public:
};

// 0x60 (0x60 - 0x0)
// ScriptStruct RigVM.RigVMFourPointBezier
struct FRigVMFourPointBezier
{
public:
	struct FVector                               A;                                                 // 0x0(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               B;                                                 // 0x18(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               C;                                                 // 0x30(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               D;                                                 // 0x48(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct RigVM.RigVMFunction_DebugBase
struct FRigVMFunction_DebugBase : public FRigVMStruct
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathBase
struct FRigVMFunction_MathBase : public FRigVMStruct
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorBase
struct FRigVMFunction_MathVectorBase : public FRigVMFunction_MathBase
{
public:
};

// 0x0 (0x100 - 0x100)
// ScriptStruct RigVM.RigVMFunction_SimBaseMutable
struct FRigVMFunction_SimBaseMutable : public FRigVMStructMutable
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct RigVM.RigVMFunction_SimBase
struct FRigVMFunction_SimBase : public FRigVMStruct
{
public:
};

// 0x30 (0x30 - 0x0)
// ScriptStruct RigVM.RigVMExternalVariable
struct FRigVMExternalVariable
{
public:
	uint8                                        Pad_1544[0x30];                                    // Fixing Size Of Struct
};

// 0x0 (0x8 - 0x8)
// ScriptStruct RigVM.RigVMFunction_AnimBase
struct FRigVMFunction_AnimBase : public FRigVMStruct
{
public:
};

// 0x0 (0x100 - 0x100)
// ScriptStruct RigVM.RigVMFunction_MathMutableBase
struct FRigVMFunction_MathMutableBase : public FRigVMStructMutable
{
public:
};

// 0x40 (0x40 - 0x0)
// ScriptStruct RigVM.RigVMGraphFunctionIdentifier
struct FRigVMGraphFunctionIdentifier
{
public:
	struct FSoftObjectPath                       LibraryNode;                                       // 0x0(0x20)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       HostObject;                                        // 0x20(0x20)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct RigVM.RigVMGraphFunctionArgument
struct FRigVMGraphFunctionArgument
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DisplayName;                                       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CPPType;                                           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UObject>                CPPTypeObject;                                     // 0x18(0x30)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsArray;                                          // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMPinDirection                Direction;                                         // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1547[0x6];                                     // Fixing Size After Last Property 
	class FString                                DefaultValue;                                      // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsConst;                                          // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1548[0x7];                                     // Fixing Size After Last Property 
	TMap<class FString, class FText>             PathToTooltip;                                     // 0x68(0x50)(NativeAccessSpecifierPublic)
};

// 0x110 (0x110 - 0x0)
// ScriptStruct RigVM.RigVMGraphFunctionHeader
struct FRigVMGraphFunctionHeader
{
public:
	struct FRigVMGraphFunctionIdentifier         LibraryPointer;                                    // 0x0(0x40)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NodeTitle;                                         // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          NodeColor;                                         // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Tooltip;                                           // 0x68(0x18)(NativeAccessSpecifierPublic)
	class FString                                Category;                                          // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Keywords;                                          // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRigVMGraphFunctionArgument>   Arguments;                                         // 0xA0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FRigVMGraphFunctionIdentifier, uint32> Dependencies;                                      // 0xB0(0x50)(NativeAccessSpecifierPublic)
	TArray<struct FRigVMExternalVariable>        ExternalVariables;                                 // 0x100(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct RigVM.RigVMByteCodeEntry
struct FRigVMByteCodeEntry
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InstructionIndex;                                  // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct RigVM.RigVMBranchInfo
struct FRigVMBranchInfo
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Label;                                             // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InstructionIndex;                                  // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ArgumentIndex;                                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       FirstInstruction;                                  // 0x14(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       LastInstruction;                                   // 0x16(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct RigVM.RigVMByteCode
struct FRigVMByteCode
{
public:
	TArray<uint8>                                ByteCode;                                          // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	int32                                        NumInstructions;                                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_154F[0x4];                                     // Fixing Size After Last Property 
	TArray<struct FRigVMByteCodeEntry>           Entries;                                           // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FRigVMBranchInfo>              BranchInfos;                                       // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1550[0x58];                                    // Fixing Size Of Struct
};

// 0x58 (0x58 - 0x0)
// ScriptStruct RigVM.RigVMFunctionCompilationPropertyDescription
struct FRigVMFunctionCompilationPropertyDescription
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CPPType;                                           // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UObject>                CPPTypeObject;                                     // 0x18(0x30)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DefaultValue;                                      // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct RigVM.RigVMFunctionCompilationPropertyPath
struct FRigVMFunctionCompilationPropertyPath
{
public:
	int32                                        PropertyIndex;                                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1552[0x4];                                     // Fixing Size After Last Property 
	class FString                                HeadCPPType;                                       // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SegmentPath;                                       // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x6 (0x6 - 0x0)
// ScriptStruct RigVM.RigVMOperand
struct FRigVMOperand
{
public:
	enum class ERigVMMemoryType                  MemoryType;                                        // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1554[0x1];                                     // Fixing Size After Last Property 
	uint16                                       RegisterIndex;                                     // 0x2(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint16                                       RegisterOffset;                                    // 0x4(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x1C8 (0x1C8 - 0x0)
// ScriptStruct RigVM.RigVMFunctionCompilationData
struct FRigVMFunctionCompilationData
{
public:
	struct FRigVMByteCode                        ByteCode;                                          // 0x0(0x90)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          FunctionNames;                                     // 0x90(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRigVMFunctionCompilationPropertyDescription> WorkPropertyDescriptions;                          // 0xA0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRigVMFunctionCompilationPropertyPath> WorkPropertyPathDescriptions;                      // 0xB0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRigVMFunctionCompilationPropertyDescription> LiteralPropertyDescriptions;                       // 0xC0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRigVMFunctionCompilationPropertyPath> LiteralPropertyPathDescriptions;                   // 0xD0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRigVMFunctionCompilationPropertyDescription> DebugPropertyDescriptions;                         // 0xE0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRigVMFunctionCompilationPropertyPath> DebugPropertyPathDescriptions;                     // 0xF0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRigVMFunctionCompilationPropertyDescription> ExternalPropertyDescriptions;                      // 0x100(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRigVMFunctionCompilationPropertyPath> ExternalPropertyPathDescriptions;                  // 0x110(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<int32, class FName>                     ExternalRegisterIndexToVariable;                   // 0x120(0x50)(NativeAccessSpecifierPublic)
	TMap<class FString, struct FRigVMOperand>    Operands;                                          // 0x170(0x50)(NativeAccessSpecifierPublic)
	uint32                                       Hash;                                              // 0x1C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_155B[0x4];                                     // Fixing Size Of Struct
};

// 0x2E8 (0x2E8 - 0x0)
// ScriptStruct RigVM.RigVMGraphFunctionData
struct FRigVMGraphFunctionData
{
public:
	struct FRigVMGraphFunctionHeader             Header;                                            // 0x0(0x110)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigVMFunctionCompilationData         CompilationData;                                   // 0x110(0x1C8)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SerializedCollapsedNode;                           // 0x2D8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct RigVM.RigVMGraphFunctionStore
struct FRigVMGraphFunctionStore
{
public:
	TArray<struct FRigVMGraphFunctionData>       PublicFunctions;                                   // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRigVMGraphFunctionData>       PrivateFunctions;                                  // 0x10(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct RigVM.RigVMMemoryStatistics
struct FRigVMMemoryStatistics
{
public:
	int32                                        RegisterCount;                                     // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DataBytes;                                         // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalBytes;                                        // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct RigVM.RigVMByteCodeStatistics
struct FRigVMByteCodeStatistics
{
public:
	int32                                        InstructionCount;                                  // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DataBytes;                                         // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct RigVM.RigVMStatistics
struct FRigVMStatistics
{
public:
	int32                                        BytesForCDO;                                       // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BytesPerInstance;                                  // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigVMMemoryStatistics                LiteralMemory;                                     // 0x8(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigVMMemoryStatistics                WorkMemory;                                        // 0x14(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigVMMemoryStatistics                DebugMemory;                                       // 0x20(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        BytesForCaching;                                   // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigVMByteCodeStatistics              ByteCode;                                          // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct RigVM.RigVMParameter
struct FRigVMParameter
{
public:
	enum class ERigVMParameterType               Type;                                              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1565[0x3];                                     // Fixing Size After Last Property 
	class FName                                  Name;                                              // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        RegisterIndex;                                     // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                CPPType;                                           // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UScriptStruct*                         ScriptStruct;                                      // 0x20(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  ScriptStructPath;                                  // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct RigVM.RigVMBaseOp
struct FRigVMBaseOp
{
public:
	uint8                                        Pad_1568[0x1];                                     // Fixing Size Of Struct
};

// 0x3 (0x4 - 0x1)
// ScriptStruct RigVM.RigVMExecuteOp
struct FRigVMExecuteOp : public FRigVMBaseOp
{
public:
	uint8                                        Pad_1569[0x3];                                     // Fixing Size Of Struct
};

// 0x7 (0x8 - 0x1)
// ScriptStruct RigVM.RigVMUnaryOp
struct FRigVMUnaryOp : public FRigVMBaseOp
{
public:
	uint8                                        Pad_156A[0x7];                                     // Fixing Size Of Struct
};

// 0xD (0xE - 0x1)
// ScriptStruct RigVM.RigVMBinaryOp
struct FRigVMBinaryOp : public FRigVMBaseOp
{
public:
	uint8                                        Pad_156B[0xD];                                     // Fixing Size Of Struct
};

// 0x13 (0x14 - 0x1)
// ScriptStruct RigVM.RigVMTernaryOp
struct FRigVMTernaryOp : public FRigVMBaseOp
{
public:
	uint8                                        Pad_156C[0x13];                                    // Fixing Size Of Struct
};

// 0x19 (0x1A - 0x1)
// ScriptStruct RigVM.RigVMQuaternaryOp
struct FRigVMQuaternaryOp : public FRigVMBaseOp
{
public:
	uint8                                        Pad_156E[0x19];                                    // Fixing Size Of Struct
};

// 0x1F (0x20 - 0x1)
// ScriptStruct RigVM.RigVMQuinaryOp
struct FRigVMQuinaryOp : public FRigVMBaseOp
{
public:
	uint8                                        Pad_156F[0x1F];                                    // Fixing Size Of Struct
};

// 0x25 (0x26 - 0x1)
// ScriptStruct RigVM.RigVMSenaryOp
struct FRigVMSenaryOp : public FRigVMBaseOp
{
public:
	uint8                                        Pad_1570[0x25];                                    // Fixing Size Of Struct
};

// 0x11 (0x12 - 0x1)
// ScriptStruct RigVM.RigVMCopyOp
struct FRigVMCopyOp : public FRigVMBaseOp
{
public:
	uint8                                        Pad_1572[0x11];                                    // Fixing Size Of Struct
};

// 0x13 (0x14 - 0x1)
// ScriptStruct RigVM.RigVMComparisonOp
struct FRigVMComparisonOp : public FRigVMBaseOp
{
public:
	uint8                                        Pad_1573[0x13];                                    // Fixing Size Of Struct
};

// 0x7 (0x8 - 0x1)
// ScriptStruct RigVM.RigVMJumpOp
struct FRigVMJumpOp : public FRigVMBaseOp
{
public:
	uint8                                        Pad_1574[0x7];                                     // Fixing Size Of Struct
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RigVM.RigVMJumpIfOp
struct FRigVMJumpIfOp : public FRigVMUnaryOp
{
public:
	uint8                                        Pad_1575[0x8];                                     // Fixing Size Of Struct
};

// 0x0 (0x8 - 0x8)
// ScriptStruct RigVM.RigVMChangeTypeOp
struct FRigVMChangeTypeOp : public FRigVMUnaryOp
{
public:
};

// 0xB (0xC - 0x1)
// ScriptStruct RigVM.RigVMInvokeEntryOp
struct FRigVMInvokeEntryOp : public FRigVMBaseOp
{
public:
	uint8                                        Pad_1578[0xB];                                     // Fixing Size Of Struct
};

// 0x4 (0xC - 0x8)
// ScriptStruct RigVM.RigVMJumpToBranchOp
struct FRigVMJumpToBranchOp : public FRigVMUnaryOp
{
public:
	uint8                                        Pad_157A[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct RigVM.RigVMInstruction
struct FRigVMInstruction
{
public:
	uint64                                       ByteCodeIndex;                                     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMOpCode                      OpCode;                                            // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        OperandAlignment;                                  // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_157D[0x6];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct RigVM.RigVMInstructionArray
struct FRigVMInstructionArray
{
public:
	TArray<struct FRigVMInstruction>             Instructions;                                      // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct RigVM.RigVMBreakpoint
struct FRigVMBreakpoint
{
public:
	uint8                                        Pad_157E[0x28];                                    // Fixing Size Of Struct
};

// 0xF8 (0xF8 - 0x0)
// ScriptStruct RigVM.RigVMDebugInfo
struct FRigVMDebugInfo
{
public:
	uint8                                        Pad_157F[0xF8];                                    // Fixing Size Of Struct
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMDrawInterface
struct FRigVMDrawInterface : public FRigVMDrawContainer
{
public:
};

// 0xC (0xC - 0x0)
// ScriptStruct RigVM.RigVMSlice
struct FRigVMSlice
{
public:
	uint8                                        Pad_1580[0xC];                                     // Fixing Size Of Struct
};

// 0x108 (0x108 - 0x0)
// ScriptStruct RigVM.RigVMExtendedExecuteContext
struct FRigVMExtendedExecuteContext
{
public:
	uint8                                        Pad_1581[0x108];                                   // Fixing Size Of Struct
};

// 0x24 (0x24 - 0x0)
// ScriptStruct RigVM.RigVMRegister
struct FRigVMRegister
{
public:
	enum class ERigVMRegisterType                Type;                                              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1583[0x3];                                     // Fixing Size After Last Property 
	uint32                                       ByteIndex;                                         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       ElementSize;                                       // 0x8(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       ElementCount;                                      // 0xA(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       SliceCount;                                        // 0xC(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        AlignmentBytes;                                    // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1584[0x1];                                     // Fixing Size After Last Property 
	uint16                                       TrailingBytes;                                     // 0x10(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1586[0x2];                                     // Fixing Size After Last Property 
	class FName                                  Name;                                              // 0x14(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ScriptStructIndex;                                 // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsArray;                                          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDynamic;                                        // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1587[0x2];                                     // Fixing Size Of Struct
};

// 0x48 (0x48 - 0x0)
// ScriptStruct RigVM.RigVMRegisterOffset
struct FRigVMRegisterOffset
{
public:
	TArray<int32>                                Segments;                                          // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	enum class ERigVMRegisterType                Type;                                              // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1589[0x3];                                     // Fixing Size After Last Property 
	class FName                                  CPPType;                                           // 0x14(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_158B[0x4];                                     // Fixing Size After Last Property 
	class UScriptStruct*                         ScriptStruct;                                      // 0x20(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UScriptStruct*                         ParentScriptStruct;                                // 0x28(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        ArrayIndex;                                        // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint16                                       ElementSize;                                       // 0x34(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_158C[0x2];                                     // Fixing Size After Last Property 
	class FString                                CachedSegmentPath;                                 // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct RigVM.RigVMMemoryContainer
struct FRigVMMemoryContainer
{
public:
	bool                                         bUseNameMap;                                       // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMMemoryType                  MemoryType;                                        // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1590[0x6];                                     // Fixing Size After Last Property 
	TArray<struct FRigVMRegister>                Registers;                                         // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRigVMRegisterOffset>          RegisterOffsets;                                   // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint8>                                Data;                                              // 0x28(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<class UScriptStruct*>                 ScriptStructs;                                     // 0x38(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<class FName, int32>                     NameMap;                                           // 0x48(0x50)(Transient, NativeAccessSpecifierPublic)
	bool                                         bEncounteredErrorDuringLoad;                       // 0x98(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1592[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct RigVM.RigVMTemplateArgumentType
struct FRigVMTemplateArgumentType
{
public:
	class FName                                  CPPType;                                           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               CPPTypeObject;                                     // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct RigVM.RigVMUserWorkflow
struct FRigVMUserWorkflow
{
public:
	uint8                                        Pad_1597[0x8];                                     // Fixing Size After Last Property 
	class FString                                Title;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                Tooltip;                                           // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ERigVMUserWorkflowType            Type;                                              // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1598[0x17];                                    // Fixing Size After Last Property 
	FDelegateProperty_                           PerformDynamicDelegate;                            // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UObject>                   OptionsClass;                                      // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RigVM.RigVMFunction_AnimEasingType
struct FRigVMFunction_AnimEasingType : public FRigVMFunction_AnimBase
{
public:
	enum class ERigVMAnimEasingType              Type;                                              // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_159B[0x7];                                     // Fixing Size Of Struct
};

// 0x20 (0x28 - 0x8)
// ScriptStruct RigVM.RigVMFunction_AnimEasing
struct FRigVMFunction_AnimEasing : public FRigVMFunction_AnimBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMAnimEasingType              Type;                                              // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_159D[0x3];                                     // Fixing Size After Last Property 
	float                                        SourceMinimum;                                     // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SourceMaximum;                                     // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetMinimum;                                     // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetMaximum;                                     // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_159E[0x4];                                     // Fixing Size Of Struct
};

// 0xA8 (0xB0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_AnimEvalRichCurve
struct FRigVMFunction_AnimEvalRichCurve : public FRigVMFunction_AnimBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15A0[0x4];                                     // Fixing Size After Last Property 
	struct FRuntimeFloatCurve                    Curve;                                             // 0x10(0x88)(Edit, BlueprintVisible, EditConst, NativeAccessSpecifierPublic)
	float                                        SourceMinimum;                                     // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SourceMaximum;                                     // 0x9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetMinimum;                                     // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetMaximum;                                     // 0xA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0xA8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15A1[0x4];                                     // Fixing Size Of Struct
};

// 0x88 (0x90 - 0x8)
// ScriptStruct RigVM.RigVMFunction_AnimRichCurve
struct FRigVMFunction_AnimRichCurve : public FRigVMFunction_AnimBase
{
public:
	struct FRuntimeFloatCurve                    Curve;                                             // 0x8(0x88)(Edit, BlueprintVisible, EditConst, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RigVM.RigVMFunction_GetDeltaTime
struct FRigVMFunction_GetDeltaTime : public FRigVMFunction_AnimBase
{
public:
	float                                        Result;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15A5[0x4];                                     // Fixing Size Of Struct
};

// 0x20 (0x28 - 0x8)
// ScriptStruct RigVM.RigVMFunction_GetWorldTime
struct FRigVMFunction_GetWorldTime : public FRigVMFunction_AnimBase
{
public:
	float                                        Year;                                              // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Month;                                             // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Day;                                               // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeekDay;                                           // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Hours;                                             // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Minutes;                                           // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Seconds;                                           // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OverallSeconds;                                    // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RigVM.RigVMFunction_FramesToSeconds
struct FRigVMFunction_FramesToSeconds : public FRigVMFunction_AnimBase
{
public:
	float                                        Frames;                                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Seconds;                                           // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RigVM.RigVMFunction_SecondsToFrames
struct FRigVMFunction_SecondsToFrames : public FRigVMFunction_AnimBase
{
public:
	float                                        Seconds;                                           // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Frames;                                            // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0x1C0 - 0x100)
// ScriptStruct RigVM.RigVMFunction_DebugLine
struct FRigVMFunction_DebugLine : public FRigVMFunction_DebugBaseMutable
{
public:
	struct FVector                               A;                                                 // 0x100(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               B;                                                 // 0x118(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x130(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x140(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0x144(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15AB[0x4];                                     // Fixing Size After Last Property 
	struct FTransform                            WorldOffset;                                       // 0x150(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x1B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15AC[0xF];                                     // Fixing Size Of Struct
};

// 0xC0 (0x1C0 - 0x100)
// ScriptStruct RigVM.RigVMFunction_DebugLineNoSpace
struct FRigVMFunction_DebugLineNoSpace : public FRigVMFunction_DebugBaseMutable
{
public:
	struct FVector                               A;                                                 // 0x100(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               B;                                                 // 0x118(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x130(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x140(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15AD[0xC];                                     // Fixing Size After Last Property 
	struct FTransform                            WorldOffset;                                       // 0x150(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x1B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15AF[0xF];                                     // Fixing Size Of Struct
};

// 0xA0 (0x1A0 - 0x100)
// ScriptStruct RigVM.RigVMFunction_DebugLineStrip
struct FRigVMFunction_DebugLineStrip : public FRigVMFunction_DebugBaseMutable
{
public:
	TArray<struct FVector>                       Points;                                            // 0x100(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x110(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x120(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0x124(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15B1[0x4];                                     // Fixing Size After Last Property 
	struct FTransform                            WorldOffset;                                       // 0x130(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x190(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15B2[0xF];                                     // Fixing Size Of Struct
};

// 0xA0 (0x1A0 - 0x100)
// ScriptStruct RigVM.RigVMFunction_DebugLineStripNoSpace
struct FRigVMFunction_DebugLineStripNoSpace : public FRigVMFunction_DebugBaseMutable
{
public:
	TArray<struct FVector>                       Points;                                            // 0x100(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x110(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x120(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15B5[0xC];                                     // Fixing Size After Last Property 
	struct FTransform                            WorldOffset;                                       // 0x130(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x190(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15B6[0xF];                                     // Fixing Size Of Struct
};

// 0xB8 (0xC0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_DebugPoint
struct FRigVMFunction_DebugPoint : public FRigVMFunction_DebugBase
{
public:
	struct FVector                               Vector;                                            // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigUnitDebugPointMode            Mode;                                              // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15B8[0x3];                                     // Fixing Size After Last Property 
	struct FLinearColor                          Color;                                             // 0x24(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0x3C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15BA[0xC];                                     // Fixing Size After Last Property 
	struct FTransform                            WorldOffset;                                       // 0x50(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15BB[0xF];                                     // Fixing Size Of Struct
};

// 0xB0 (0x1B0 - 0x100)
// ScriptStruct RigVM.RigVMFunction_DebugPointMutable
struct FRigVMFunction_DebugPointMutable : public FRigVMFunction_DebugBaseMutable
{
public:
	struct FVector                               Vector;                                            // 0x100(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigUnitDebugPointMode            Mode;                                              // 0x118(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15BE[0x3];                                     // Fixing Size After Last Property 
	struct FLinearColor                          Color;                                             // 0x11C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x12C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x130(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0x134(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15C0[0x4];                                     // Fixing Size After Last Property 
	struct FTransform                            WorldOffset;                                       // 0x140(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x1A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15C1[0xF];                                     // Fixing Size Of Struct
};

// 0xF0 (0x1F0 - 0x100)
// ScriptStruct RigVM.RigVMFunction_DebugRectangle
struct FRigVMFunction_DebugRectangle : public FRigVMFunction_DebugBaseMutable
{
public:
	struct FTransform                            Transform;                                         // 0x100(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x170(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x174(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0x178(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            WorldOffset;                                       // 0x180(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x1E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15C5[0xF];                                     // Fixing Size Of Struct
};

// 0xF0 (0x1F0 - 0x100)
// ScriptStruct RigVM.RigVMFunction_DebugRectangleNoSpace
struct FRigVMFunction_DebugRectangleNoSpace : public FRigVMFunction_DebugBaseMutable
{
public:
	struct FTransform                            Transform;                                         // 0x100(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x170(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x174(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15C6[0x8];                                     // Fixing Size After Last Property 
	struct FTransform                            WorldOffset;                                       // 0x180(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x1E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15C7[0xF];                                     // Fixing Size Of Struct
};

// 0x100 (0x200 - 0x100)
// ScriptStruct RigVM.RigVMFunction_DebugArc
struct FRigVMFunction_DebugArc : public FRigVMFunction_DebugBaseMutable
{
public:
	struct FTransform                            Transform;                                         // 0x100(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x170(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumDegrees;                                    // 0x174(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumDegrees;                                    // 0x178(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x17C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Detail;                                            // 0x180(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0x184(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15CA[0x4];                                     // Fixing Size After Last Property 
	struct FTransform                            WorldOffset;                                       // 0x190(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x1F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15CB[0xF];                                     // Fixing Size Of Struct
};

// 0x100 (0x200 - 0x100)
// ScriptStruct RigVM.RigVMFunction_DebugArcNoSpace
struct FRigVMFunction_DebugArcNoSpace : public FRigVMFunction_DebugBaseMutable
{
public:
	struct FTransform                            Transform;                                         // 0x100(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x170(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumDegrees;                                    // 0x174(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumDegrees;                                    // 0x178(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x17C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Detail;                                            // 0x180(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15CD[0xC];                                     // Fixing Size After Last Property 
	struct FTransform                            WorldOffset;                                       // 0x190(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x1F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15CE[0xF];                                     // Fixing Size Of Struct
};

// 0x108 (0x110 - 0x8)
// ScriptStruct RigVM.RigVMFunction_DebugTransform
struct FRigVMFunction_DebugTransform : public FRigVMFunction_DebugBase
{
public:
	uint8                                        Pad_15D0[0x8];                                     // Fixing Size After Last Property 
	struct FTransform                            Transform;                                         // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigUnitDebugTransformMode        Mode;                                              // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15D2[0x3];                                     // Fixing Size After Last Property 
	struct FLinearColor                          Color;                                             // 0x74(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0x8C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15D4[0xC];                                     // Fixing Size After Last Property 
	struct FTransform                            WorldOffset;                                       // 0xA0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x100(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15D5[0xF];                                     // Fixing Size Of Struct
};

// 0x100 (0x200 - 0x100)
// ScriptStruct RigVM.RigVMFunction_DebugTransformMutable
struct FRigVMFunction_DebugTransformMutable : public FRigVMFunction_DebugBaseMutable
{
public:
	struct FTransform                            Transform;                                         // 0x100(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigUnitDebugTransformMode        Mode;                                              // 0x160(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15D8[0x3];                                     // Fixing Size After Last Property 
	struct FLinearColor                          Color;                                             // 0x164(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x174(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x178(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0x17C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15D9[0xC];                                     // Fixing Size After Last Property 
	struct FTransform                            WorldOffset;                                       // 0x190(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x1F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15DB[0xF];                                     // Fixing Size Of Struct
};

// 0xF0 (0x1F0 - 0x100)
// ScriptStruct RigVM.RigVMFunction_DebugTransformMutableNoSpace
struct FRigVMFunction_DebugTransformMutableNoSpace : public FRigVMFunction_DebugBaseMutable
{
public:
	struct FTransform                            Transform;                                         // 0x100(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigUnitDebugTransformMode        Mode;                                              // 0x160(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15DC[0x3];                                     // Fixing Size After Last Property 
	struct FLinearColor                          Color;                                             // 0x164(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x174(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x178(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15DD[0x4];                                     // Fixing Size After Last Property 
	struct FTransform                            WorldOffset;                                       // 0x180(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x1E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15DF[0xF];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct RigVM.RigVMFunction_DebugTransformArrayMutable_WorkData
struct FRigVMFunction_DebugTransformArrayMutable_WorkData
{
public:
	TArray<struct FTransform>                    DrawTransforms;                                    // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC0 (0x1C0 - 0x100)
// ScriptStruct RigVM.RigVMFunction_DebugTransformArrayMutable
struct FRigVMFunction_DebugTransformArrayMutable : public FRigVMFunction_DebugBaseMutable
{
public:
	TArray<struct FTransform>                    Transforms;                                        // 0x100(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ERigUnitDebugTransformMode        Mode;                                              // 0x110(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15E1[0x3];                                     // Fixing Size After Last Property 
	struct FLinearColor                          Color;                                             // 0x114(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x124(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x128(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0x12C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15E3[0xC];                                     // Fixing Size After Last Property 
	struct FTransform                            WorldOffset;                                       // 0x140(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x1A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15E5[0x7];                                     // Fixing Size After Last Property 
	struct FRigVMFunction_DebugTransformArrayMutable_WorkData WorkData;                                          // 0x1A8(0x10)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_15E6[0x8];                                     // Fixing Size Of Struct
};

// 0xB0 (0x1B0 - 0x100)
// ScriptStruct RigVM.RigVMFunction_DebugTransformArrayMutableNoSpace
struct FRigVMFunction_DebugTransformArrayMutableNoSpace : public FRigVMFunction_DebugBaseMutable
{
public:
	TArray<struct FTransform>                    Transforms;                                        // 0x100(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                ParentIndices;                                     // 0x110(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ERigUnitDebugTransformMode        Mode;                                              // 0x120(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15E9[0x3];                                     // Fixing Size After Last Property 
	struct FLinearColor                          Color;                                             // 0x124(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x134(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x138(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15EA[0x4];                                     // Fixing Size After Last Property 
	struct FTransform                            WorldOffset;                                       // 0x140(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x1A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15EB[0xF];                                     // Fixing Size Of Struct
};

// 0x40 (0x48 - 0x8)
// ScriptStruct RigVM.RigVMFunction_VisualDebugVector
struct FRigVMFunction_VisualDebugVector : public FRigVMFunction_DebugBase
{
public:
	struct FVector                               Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigUnitVisualDebugPointMode      Mode;                                              // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15EF[0x2];                                     // Fixing Size After Last Property 
	struct FLinearColor                          Color;                                             // 0x24(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneSpace;                                         // 0x3C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15F0[0x4];                                     // Fixing Size Of Struct
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RigVM.RigVMFunction_VisualDebugVectorNoSpace
struct FRigVMFunction_VisualDebugVectorNoSpace : public FRigVMFunction_DebugBase
{
public:
	struct FVector                               Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigUnitVisualDebugPointMode      Mode;                                              // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15F3[0x2];                                     // Fixing Size After Last Property 
	struct FLinearColor                          Color;                                             // 0x24(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15F4[0x4];                                     // Fixing Size Of Struct
};

// 0x48 (0x50 - 0x8)
// ScriptStruct RigVM.RigVMFunction_VisualDebugQuat
struct FRigVMFunction_VisualDebugQuat : public FRigVMFunction_DebugBase
{
public:
	uint8                                        Pad_15F8[0x8];                                     // Fixing Size After Last Property 
	struct FQuat                                 Value;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15F9[0x3];                                     // Fixing Size After Last Property 
	float                                        Thickness;                                         // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneSpace;                                         // 0x3C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15FA[0xC];                                     // Fixing Size Of Struct
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RigVM.RigVMFunction_VisualDebugQuatNoSpace
struct FRigVMFunction_VisualDebugQuatNoSpace : public FRigVMFunction_DebugBase
{
public:
	uint8                                        Pad_15FB[0x8];                                     // Fixing Size After Last Property 
	struct FQuat                                 Value;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15FC[0x3];                                     // Fixing Size After Last Property 
	float                                        Thickness;                                         // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15FE[0x4];                                     // Fixing Size Of Struct
};

// 0x88 (0x90 - 0x8)
// ScriptStruct RigVM.RigVMFunction_VisualDebugTransform
struct FRigVMFunction_VisualDebugTransform : public FRigVMFunction_DebugBase
{
public:
	uint8                                        Pad_15FF[0x8];                                     // Fixing Size After Last Property 
	struct FTransform                            Value;                                             // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1600[0x3];                                     // Fixing Size After Last Property 
	float                                        Thickness;                                         // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneSpace;                                         // 0x7C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1602[0xC];                                     // Fixing Size Of Struct
};

// 0x78 (0x80 - 0x8)
// ScriptStruct RigVM.RigVMFunction_VisualDebugTransformNoSpace
struct FRigVMFunction_VisualDebugTransformNoSpace : public FRigVMFunction_DebugBase
{
public:
	uint8                                        Pad_1603[0x8];                                     // Fixing Size After Last Property 
	struct FTransform                            Value;                                             // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1605[0x3];                                     // Fixing Size After Last Property 
	float                                        Thickness;                                         // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1606[0x4];                                     // Fixing Size Of Struct
};

// 0x110 (0x210 - 0x100)
// ScriptStruct RigVM.RigVMFunction_ForLoopCount
struct FRigVMFunction_ForLoopCount : public FRigVMStructMutable
{
public:
	class FName                                  BlockToRun;                                        // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x108(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x10C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Ratio;                                             // 0x110(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1609[0xC];                                     // Fixing Size After Last Property 
	struct FRigVMExecuteContext                  Completed;                                         // 0x120(0xF0)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
};

// 0x108 (0x110 - 0x8)
// ScriptStruct RigVM.RigVMFunction_UserDefinedEvent
struct FRigVMFunction_UserDefinedEvent : public FRigVMStruct
{
public:
	uint8                                        Pad_160C[0x8];                                     // Fixing Size After Last Property 
	struct FRigVMExecuteContext                  ExecuteContext;                                    // 0x10(0xF0)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	class FName                                  EventName;                                         // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_160D[0x8];                                     // Fixing Size Of Struct
};

// 0x0 (0x8 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathBoolBase
struct FRigVMFunction_MathBoolBase : public FRigVMFunction_MathBase
{
public:
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathBoolConstant
struct FRigVMFunction_MathBoolConstant : public FRigVMFunction_MathBoolBase
{
public:
	bool                                         Value;                                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_160E[0x7];                                     // Fixing Size Of Struct
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathBoolUnaryOp
struct FRigVMFunction_MathBoolUnaryOp : public FRigVMFunction_MathBoolBase
{
public:
	bool                                         Value;                                             // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1610[0x6];                                     // Fixing Size Of Struct
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathBoolBinaryOp
struct FRigVMFunction_MathBoolBinaryOp : public FRigVMFunction_MathBoolBase
{
public:
	bool                                         A;                                                 // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         B;                                                 // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0xA(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1614[0x5];                                     // Fixing Size Of Struct
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathBoolBinaryAggregateOp
struct FRigVMFunction_MathBoolBinaryAggregateOp : public FRigVMFunction_MathBoolBase
{
public:
	bool                                         A;                                                 // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         B;                                                 // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0xA(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1616[0x5];                                     // Fixing Size Of Struct
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathBoolMake
struct FRigVMFunction_MathBoolMake : public FRigVMFunction_MathBoolBase
{
public:
	bool                                         Value;                                             // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1617[0x7];                                     // Fixing Size Of Struct
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathBoolConstTrue
struct FRigVMFunction_MathBoolConstTrue : public FRigVMFunction_MathBoolConstant
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathBoolConstFalse
struct FRigVMFunction_MathBoolConstFalse : public FRigVMFunction_MathBoolConstant
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathBoolNot
struct FRigVMFunction_MathBoolNot : public FRigVMFunction_MathBoolUnaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathBoolAnd
struct FRigVMFunction_MathBoolAnd : public FRigVMFunction_MathBoolBinaryAggregateOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathBoolNand
struct FRigVMFunction_MathBoolNand : public FRigVMFunction_MathBoolBinaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathBoolNand2
struct FRigVMFunction_MathBoolNand2 : public FRigVMFunction_MathBoolBinaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathBoolOr
struct FRigVMFunction_MathBoolOr : public FRigVMFunction_MathBoolBinaryAggregateOp
{
public:
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathBoolEquals
struct FRigVMFunction_MathBoolEquals : public FRigVMFunction_MathBoolBase
{
public:
	bool                                         A;                                                 // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         B;                                                 // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0xA(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_161D[0x5];                                     // Fixing Size Of Struct
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathBoolNotEquals
struct FRigVMFunction_MathBoolNotEquals : public FRigVMFunction_MathBoolBase
{
public:
	bool                                         A;                                                 // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         B;                                                 // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0xA(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_161F[0x5];                                     // Fixing Size Of Struct
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathBoolToggled
struct FRigVMFunction_MathBoolToggled : public FRigVMFunction_MathBoolBase
{
public:
	bool                                         Value;                                             // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Toggled;                                           // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Initialized;                                       // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         LastValue;                                         // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1623[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathBoolFlipFlop
struct FRigVMFunction_MathBoolFlipFlop : public FRigVMFunction_MathBoolBase
{
public:
	bool                                         StartValue;                                        // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1624[0x3];                                     // Fixing Size After Last Property 
	float                                        Duration;                                          // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         LastValue;                                         // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1627[0x2];                                     // Fixing Size After Last Property 
	float                                        TimeLeft;                                          // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathBoolOnce
struct FRigVMFunction_MathBoolOnce : public FRigVMFunction_MathBoolBase
{
public:
	float                                        Duration;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         LastValue;                                         // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1629[0x2];                                     // Fixing Size After Last Property 
	float                                        TimeLeft;                                          // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_162A[0x4];                                     // Fixing Size Of Struct
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathBoolToFloat
struct FRigVMFunction_MathBoolToFloat : public FRigVMFunction_MathBoolBase
{
public:
	bool                                         Value;                                             // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_162C[0x3];                                     // Fixing Size After Last Property 
	float                                        Result;                                            // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathBoolToInteger
struct FRigVMFunction_MathBoolToInteger : public FRigVMFunction_MathBoolBase
{
public:
	bool                                         Value;                                             // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_162F[0x3];                                     // Fixing Size After Last Property 
	int32                                        Result;                                            // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathColorBase
struct FRigVMFunction_MathColorBase : public FRigVMFunction_MathBase
{
public:
};

// 0x30 (0x38 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathColorBinaryOp
struct FRigVMFunction_MathColorBinaryOp : public FRigVMFunction_MathColorBase
{
public:
	struct FLinearColor                          A;                                                 // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          B;                                                 // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Result;                                            // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathColorBinaryAggregateOp
struct FRigVMFunction_MathColorBinaryAggregateOp : public FRigVMFunction_MathColorBase
{
public:
	struct FLinearColor                          A;                                                 // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          B;                                                 // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Result;                                            // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathColorMake
struct FRigVMFunction_MathColorMake : public FRigVMFunction_MathColorBase
{
public:
	float                                        R;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        G;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        B;                                                 // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        A;                                                 // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Result;                                            // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathColorFromFloat
struct FRigVMFunction_MathColorFromFloat : public FRigVMFunction_MathColorBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Result;                                            // 0xC(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1639[0x4];                                     // Fixing Size Of Struct
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathColorFromDouble
struct FRigVMFunction_MathColorFromDouble : public FRigVMFunction_MathColorBase
{
public:
	double                                       Value;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Result;                                            // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x38 - 0x38)
// ScriptStruct RigVM.RigVMFunction_MathColorAdd
struct FRigVMFunction_MathColorAdd : public FRigVMFunction_MathColorBinaryAggregateOp
{
public:
};

// 0x0 (0x38 - 0x38)
// ScriptStruct RigVM.RigVMFunction_MathColorSub
struct FRigVMFunction_MathColorSub : public FRigVMFunction_MathColorBinaryOp
{
public:
};

// 0x0 (0x38 - 0x38)
// ScriptStruct RigVM.RigVMFunction_MathColorMul
struct FRigVMFunction_MathColorMul : public FRigVMFunction_MathColorBinaryAggregateOp
{
public:
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathColorLerp
struct FRigVMFunction_MathColorLerp : public FRigVMFunction_MathColorBase
{
public:
	struct FLinearColor                          A;                                                 // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          B;                                                 // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        T;                                                 // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Result;                                            // 0x2C(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_163D[0x4];                                     // Fixing Size Of Struct
};

// 0x0 (0x8 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathDoubleBase
struct FRigVMFunction_MathDoubleBase : public FRigVMFunction_MathBase
{
public:
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathDoubleConstant
struct FRigVMFunction_MathDoubleConstant : public FRigVMFunction_MathDoubleBase
{
public:
	double                                       Value;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathDoubleUnaryOp
struct FRigVMFunction_MathDoubleUnaryOp : public FRigVMFunction_MathDoubleBase
{
public:
	double                                       Value;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Result;                                            // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathDoubleBinaryOp
struct FRigVMFunction_MathDoubleBinaryOp : public FRigVMFunction_MathDoubleBase
{
public:
	double                                       A;                                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       B;                                                 // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Result;                                            // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathDoubleBinaryAggregateOp
struct FRigVMFunction_MathDoubleBinaryAggregateOp : public FRigVMFunction_MathDoubleBase
{
public:
	double                                       A;                                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       B;                                                 // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Result;                                            // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathDoubleMake
struct FRigVMFunction_MathDoubleMake : public FRigVMFunction_MathDoubleBase
{
public:
	double                                       Value;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathDoubleConstPi
struct FRigVMFunction_MathDoubleConstPi : public FRigVMFunction_MathDoubleConstant
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathDoubleConstHalfPi
struct FRigVMFunction_MathDoubleConstHalfPi : public FRigVMFunction_MathDoubleConstant
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathDoubleConstTwoPi
struct FRigVMFunction_MathDoubleConstTwoPi : public FRigVMFunction_MathDoubleConstant
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathDoubleConstE
struct FRigVMFunction_MathDoubleConstE : public FRigVMFunction_MathDoubleConstant
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct RigVM.RigVMFunction_MathDoubleAdd
struct FRigVMFunction_MathDoubleAdd : public FRigVMFunction_MathDoubleBinaryAggregateOp
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct RigVM.RigVMFunction_MathDoubleSub
struct FRigVMFunction_MathDoubleSub : public FRigVMFunction_MathDoubleBinaryOp
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct RigVM.RigVMFunction_MathDoubleMul
struct FRigVMFunction_MathDoubleMul : public FRigVMFunction_MathDoubleBinaryAggregateOp
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct RigVM.RigVMFunction_MathDoubleDiv
struct FRigVMFunction_MathDoubleDiv : public FRigVMFunction_MathDoubleBinaryOp
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct RigVM.RigVMFunction_MathDoubleMod
struct FRigVMFunction_MathDoubleMod : public FRigVMFunction_MathDoubleBinaryOp
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct RigVM.RigVMFunction_MathDoubleMin
struct FRigVMFunction_MathDoubleMin : public FRigVMFunction_MathDoubleBinaryAggregateOp
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct RigVM.RigVMFunction_MathDoubleMax
struct FRigVMFunction_MathDoubleMax : public FRigVMFunction_MathDoubleBinaryAggregateOp
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct RigVM.RigVMFunction_MathDoublePow
struct FRigVMFunction_MathDoublePow : public FRigVMFunction_MathDoubleBinaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathDoubleSqrt
struct FRigVMFunction_MathDoubleSqrt : public FRigVMFunction_MathDoubleUnaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathDoubleNegate
struct FRigVMFunction_MathDoubleNegate : public FRigVMFunction_MathDoubleUnaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathDoubleAbs
struct FRigVMFunction_MathDoubleAbs : public FRigVMFunction_MathDoubleUnaryOp
{
public:
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathDoubleFloor
struct FRigVMFunction_MathDoubleFloor : public FRigVMFunction_MathDoubleBase
{
public:
	double                                       Value;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Result;                                            // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Int;                                               // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_164B[0x4];                                     // Fixing Size Of Struct
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathDoubleCeil
struct FRigVMFunction_MathDoubleCeil : public FRigVMFunction_MathDoubleBase
{
public:
	double                                       Value;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Result;                                            // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Int;                                               // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_164D[0x4];                                     // Fixing Size Of Struct
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathDoubleRound
struct FRigVMFunction_MathDoubleRound : public FRigVMFunction_MathDoubleBase
{
public:
	double                                       Value;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Result;                                            // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Int;                                               // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1652[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathDoubleToInt
struct FRigVMFunction_MathDoubleToInt : public FRigVMFunction_MathDoubleBase
{
public:
	double                                       Value;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Result;                                            // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1653[0x4];                                     // Fixing Size Of Struct
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathDoubleSign
struct FRigVMFunction_MathDoubleSign : public FRigVMFunction_MathDoubleUnaryOp
{
public:
};

// 0x20 (0x28 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathDoubleClamp
struct FRigVMFunction_MathDoubleClamp : public FRigVMFunction_MathDoubleBase
{
public:
	double                                       Value;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Minimum;                                           // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Maximum;                                           // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Result;                                            // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathDoubleLerp
struct FRigVMFunction_MathDoubleLerp : public FRigVMFunction_MathDoubleBase
{
public:
	double                                       A;                                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       B;                                                 // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       T;                                                 // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Result;                                            // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathDoubleRemap
struct FRigVMFunction_MathDoubleRemap : public FRigVMFunction_MathDoubleBase
{
public:
	double                                       Value;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       SourceMinimum;                                     // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       SourceMaximum;                                     // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       TargetMinimum;                                     // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       TargetMaximum;                                     // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClamp;                                            // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1658[0x7];                                     // Fixing Size After Last Property 
	double                                       Result;                                            // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathDoubleEquals
struct FRigVMFunction_MathDoubleEquals : public FRigVMFunction_MathDoubleBase
{
public:
	double                                       A;                                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       B;                                                 // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_165D[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathDoubleNotEquals
struct FRigVMFunction_MathDoubleNotEquals : public FRigVMFunction_MathDoubleBase
{
public:
	double                                       A;                                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       B;                                                 // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1661[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathDoubleGreater
struct FRigVMFunction_MathDoubleGreater : public FRigVMFunction_MathDoubleBase
{
public:
	double                                       A;                                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       B;                                                 // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1663[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathDoubleLess
struct FRigVMFunction_MathDoubleLess : public FRigVMFunction_MathDoubleBase
{
public:
	double                                       A;                                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       B;                                                 // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1664[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathDoubleGreaterEqual
struct FRigVMFunction_MathDoubleGreaterEqual : public FRigVMFunction_MathDoubleBase
{
public:
	double                                       A;                                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       B;                                                 // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1668[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathDoubleLessEqual
struct FRigVMFunction_MathDoubleLessEqual : public FRigVMFunction_MathDoubleBase
{
public:
	double                                       A;                                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       B;                                                 // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_166A[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathDoubleIsNearlyZero
struct FRigVMFunction_MathDoubleIsNearlyZero : public FRigVMFunction_MathDoubleBase
{
public:
	double                                       Value;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Tolerance;                                         // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_166C[0x7];                                     // Fixing Size Of Struct
};

// 0x20 (0x28 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathDoubleIsNearlyEqual
struct FRigVMFunction_MathDoubleIsNearlyEqual : public FRigVMFunction_MathDoubleBase
{
public:
	double                                       A;                                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       B;                                                 // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Tolerance;                                         // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_166E[0x7];                                     // Fixing Size Of Struct
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathDoubleDeg
struct FRigVMFunction_MathDoubleDeg : public FRigVMFunction_MathDoubleUnaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathDoubleRad
struct FRigVMFunction_MathDoubleRad : public FRigVMFunction_MathDoubleUnaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathDoubleSin
struct FRigVMFunction_MathDoubleSin : public FRigVMFunction_MathDoubleUnaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathDoubleCos
struct FRigVMFunction_MathDoubleCos : public FRigVMFunction_MathDoubleUnaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathDoubleTan
struct FRigVMFunction_MathDoubleTan : public FRigVMFunction_MathDoubleUnaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathDoubleAsin
struct FRigVMFunction_MathDoubleAsin : public FRigVMFunction_MathDoubleUnaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathDoubleAcos
struct FRigVMFunction_MathDoubleAcos : public FRigVMFunction_MathDoubleUnaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathDoubleAtan
struct FRigVMFunction_MathDoubleAtan : public FRigVMFunction_MathDoubleUnaryOp
{
public:
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathDoubleLawOfCosine
struct FRigVMFunction_MathDoubleLawOfCosine : public FRigVMFunction_MathDoubleBase
{
public:
	double                                       A;                                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       B;                                                 // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       C;                                                 // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       AlphaAngle;                                        // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       BetaAngle;                                         // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       GammaAngle;                                        // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bValid;                                            // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1677[0x7];                                     // Fixing Size Of Struct
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathDoubleExponential
struct FRigVMFunction_MathDoubleExponential : public FRigVMFunction_MathDoubleUnaryOp
{
public:
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathDoubleArraySum
struct FRigVMFunction_MathDoubleArraySum : public FRigVMFunction_MathDoubleBase
{
public:
	TArray<double>                               Array;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	double                                       Sum;                                               // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathDoubleArrayAverage
struct FRigVMFunction_MathDoubleArrayAverage : public FRigVMFunction_MathDoubleBase
{
public:
	TArray<double>                               Array;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	double                                       Average;                                           // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathFloatBase
struct FRigVMFunction_MathFloatBase : public FRigVMFunction_MathBase
{
public:
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathFloatConstant
struct FRigVMFunction_MathFloatConstant : public FRigVMFunction_MathFloatBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_167B[0x4];                                     // Fixing Size Of Struct
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathFloatUnaryOp
struct FRigVMFunction_MathFloatUnaryOp : public FRigVMFunction_MathFloatBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathFloatBinaryOp
struct FRigVMFunction_MathFloatBinaryOp : public FRigVMFunction_MathFloatBase
{
public:
	float                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_167D[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathFloatBinaryAggregateOp
struct FRigVMFunction_MathFloatBinaryAggregateOp : public FRigVMFunction_MathFloatBase
{
public:
	float                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_167F[0x4];                                     // Fixing Size Of Struct
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathFloatMake
struct FRigVMFunction_MathFloatMake : public FRigVMFunction_MathFloatBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1681[0x4];                                     // Fixing Size Of Struct
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathFloatConstPi
struct FRigVMFunction_MathFloatConstPi : public FRigVMFunction_MathFloatConstant
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathFloatConstHalfPi
struct FRigVMFunction_MathFloatConstHalfPi : public FRigVMFunction_MathFloatConstant
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathFloatConstTwoPi
struct FRigVMFunction_MathFloatConstTwoPi : public FRigVMFunction_MathFloatConstant
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathFloatConstE
struct FRigVMFunction_MathFloatConstE : public FRigVMFunction_MathFloatConstant
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathFloatAdd
struct FRigVMFunction_MathFloatAdd : public FRigVMFunction_MathFloatBinaryAggregateOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathFloatSub
struct FRigVMFunction_MathFloatSub : public FRigVMFunction_MathFloatBinaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathFloatMul
struct FRigVMFunction_MathFloatMul : public FRigVMFunction_MathFloatBinaryAggregateOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathFloatDiv
struct FRigVMFunction_MathFloatDiv : public FRigVMFunction_MathFloatBinaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathFloatMod
struct FRigVMFunction_MathFloatMod : public FRigVMFunction_MathFloatBinaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathFloatMin
struct FRigVMFunction_MathFloatMin : public FRigVMFunction_MathFloatBinaryAggregateOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathFloatMax
struct FRigVMFunction_MathFloatMax : public FRigVMFunction_MathFloatBinaryAggregateOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathFloatPow
struct FRigVMFunction_MathFloatPow : public FRigVMFunction_MathFloatBinaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathFloatSqrt
struct FRigVMFunction_MathFloatSqrt : public FRigVMFunction_MathFloatUnaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathFloatNegate
struct FRigVMFunction_MathFloatNegate : public FRigVMFunction_MathFloatUnaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathFloatAbs
struct FRigVMFunction_MathFloatAbs : public FRigVMFunction_MathFloatUnaryOp
{
public:
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathFloatFloor
struct FRigVMFunction_MathFloatFloor : public FRigVMFunction_MathFloatBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Int;                                               // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_168C[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathFloatCeil
struct FRigVMFunction_MathFloatCeil : public FRigVMFunction_MathFloatBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Int;                                               // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_168E[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathFloatRound
struct FRigVMFunction_MathFloatRound : public FRigVMFunction_MathFloatBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Int;                                               // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1691[0x4];                                     // Fixing Size Of Struct
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathFloatToInt
struct FRigVMFunction_MathFloatToInt : public FRigVMFunction_MathFloatBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Result;                                            // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathFloatSign
struct FRigVMFunction_MathFloatSign : public FRigVMFunction_MathFloatUnaryOp
{
public:
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathFloatClamp
struct FRigVMFunction_MathFloatClamp : public FRigVMFunction_MathFloatBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Minimum;                                           // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathFloatLerp
struct FRigVMFunction_MathFloatLerp : public FRigVMFunction_MathFloatBase
{
public:
	float                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        T;                                                 // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathFloatRemap
struct FRigVMFunction_MathFloatRemap : public FRigVMFunction_MathFloatBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SourceMinimum;                                     // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SourceMaximum;                                     // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetMinimum;                                     // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetMaximum;                                     // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClamp;                                            // 0x1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_169A[0x3];                                     // Fixing Size After Last Property 
	float                                        Result;                                            // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_169B[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathFloatEquals
struct FRigVMFunction_MathFloatEquals : public FRigVMFunction_MathFloatBase
{
public:
	float                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_169E[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathFloatNotEquals
struct FRigVMFunction_MathFloatNotEquals : public FRigVMFunction_MathFloatBase
{
public:
	float                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16A0[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathFloatGreater
struct FRigVMFunction_MathFloatGreater : public FRigVMFunction_MathFloatBase
{
public:
	float                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16A2[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathFloatLess
struct FRigVMFunction_MathFloatLess : public FRigVMFunction_MathFloatBase
{
public:
	float                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16A5[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathFloatGreaterEqual
struct FRigVMFunction_MathFloatGreaterEqual : public FRigVMFunction_MathFloatBase
{
public:
	float                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16A8[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathFloatLessEqual
struct FRigVMFunction_MathFloatLessEqual : public FRigVMFunction_MathFloatBase
{
public:
	float                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16AA[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathFloatIsNearlyZero
struct FRigVMFunction_MathFloatIsNearlyZero : public FRigVMFunction_MathFloatBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Tolerance;                                         // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16AE[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathFloatIsNearlyEqual
struct FRigVMFunction_MathFloatIsNearlyEqual : public FRigVMFunction_MathFloatBase
{
public:
	float                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Tolerance;                                         // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16B2[0x3];                                     // Fixing Size Of Struct
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathFloatSelectBool
struct FRigVMFunction_MathFloatSelectBool : public FRigVMFunction_MathFloatBase
{
public:
	bool                                         Condition;                                         // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16B3[0x3];                                     // Fixing Size After Last Property 
	float                                        IfTrue;                                            // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IfFalse;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathFloatDeg
struct FRigVMFunction_MathFloatDeg : public FRigVMFunction_MathFloatUnaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathFloatRad
struct FRigVMFunction_MathFloatRad : public FRigVMFunction_MathFloatUnaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathFloatSin
struct FRigVMFunction_MathFloatSin : public FRigVMFunction_MathFloatUnaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathFloatCos
struct FRigVMFunction_MathFloatCos : public FRigVMFunction_MathFloatUnaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathFloatTan
struct FRigVMFunction_MathFloatTan : public FRigVMFunction_MathFloatUnaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathFloatAsin
struct FRigVMFunction_MathFloatAsin : public FRigVMFunction_MathFloatUnaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathFloatAcos
struct FRigVMFunction_MathFloatAcos : public FRigVMFunction_MathFloatUnaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathFloatAtan
struct FRigVMFunction_MathFloatAtan : public FRigVMFunction_MathFloatUnaryOp
{
public:
};

// 0x20 (0x28 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathFloatLawOfCosine
struct FRigVMFunction_MathFloatLawOfCosine : public FRigVMFunction_MathFloatBase
{
public:
	float                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        C;                                                 // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AlphaAngle;                                        // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BetaAngle;                                         // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GammaAngle;                                        // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bValid;                                            // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16BA[0x7];                                     // Fixing Size Of Struct
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathFloatExponential
struct FRigVMFunction_MathFloatExponential : public FRigVMFunction_MathFloatUnaryOp
{
public:
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathFloatArraySum
struct FRigVMFunction_MathFloatArraySum : public FRigVMFunction_MathFloatBase
{
public:
	TArray<float>                                Array;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Sum;                                               // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16BB[0x4];                                     // Fixing Size Of Struct
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathFloatArrayAverage
struct FRigVMFunction_MathFloatArrayAverage : public FRigVMFunction_MathFloatBase
{
public:
	TArray<float>                                Array;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Average;                                           // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16BC[0x4];                                     // Fixing Size Of Struct
};

// 0x0 (0x8 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathIntBase
struct FRigVMFunction_MathIntBase : public FRigVMFunction_MathBase
{
public:
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathIntUnaryOp
struct FRigVMFunction_MathIntUnaryOp : public FRigVMFunction_MathIntBase
{
public:
	int32                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Result;                                            // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathIntBinaryOp
struct FRigVMFunction_MathIntBinaryOp : public FRigVMFunction_MathIntBase
{
public:
	int32                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Result;                                            // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16BD[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathIntBinaryAggregateOp
struct FRigVMFunction_MathIntBinaryAggregateOp : public FRigVMFunction_MathIntBase
{
public:
	int32                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Result;                                            // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16C0[0x4];                                     // Fixing Size Of Struct
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathIntMake
struct FRigVMFunction_MathIntMake : public FRigVMFunction_MathIntBase
{
public:
	int32                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16C2[0x4];                                     // Fixing Size Of Struct
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathIntAdd
struct FRigVMFunction_MathIntAdd : public FRigVMFunction_MathIntBinaryAggregateOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathIntSub
struct FRigVMFunction_MathIntSub : public FRigVMFunction_MathIntBinaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathIntMul
struct FRigVMFunction_MathIntMul : public FRigVMFunction_MathIntBinaryAggregateOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathIntDiv
struct FRigVMFunction_MathIntDiv : public FRigVMFunction_MathIntBinaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathIntMod
struct FRigVMFunction_MathIntMod : public FRigVMFunction_MathIntBinaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathIntMin
struct FRigVMFunction_MathIntMin : public FRigVMFunction_MathIntBinaryAggregateOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathIntMax
struct FRigVMFunction_MathIntMax : public FRigVMFunction_MathIntBinaryAggregateOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathIntPow
struct FRigVMFunction_MathIntPow : public FRigVMFunction_MathIntBinaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathIntNegate
struct FRigVMFunction_MathIntNegate : public FRigVMFunction_MathIntUnaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathIntAbs
struct FRigVMFunction_MathIntAbs : public FRigVMFunction_MathIntUnaryOp
{
public:
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathIntToFloat
struct FRigVMFunction_MathIntToFloat : public FRigVMFunction_MathIntBase
{
public:
	int32                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathIntToDouble
struct FRigVMFunction_MathIntToDouble : public FRigVMFunction_MathIntBase
{
public:
	int32                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16CA[0x4];                                     // Fixing Size After Last Property 
	double                                       Result;                                            // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathIntSign
struct FRigVMFunction_MathIntSign : public FRigVMFunction_MathIntUnaryOp
{
public:
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathIntClamp
struct FRigVMFunction_MathIntClamp : public FRigVMFunction_MathIntBase
{
public:
	int32                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Minimum;                                           // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Maximum;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Result;                                            // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathIntEquals
struct FRigVMFunction_MathIntEquals : public FRigVMFunction_MathIntBase
{
public:
	int32                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16CE[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathIntNotEquals
struct FRigVMFunction_MathIntNotEquals : public FRigVMFunction_MathIntBase
{
public:
	int32                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16CF[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathIntGreater
struct FRigVMFunction_MathIntGreater : public FRigVMFunction_MathIntBase
{
public:
	int32                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16D0[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathIntLess
struct FRigVMFunction_MathIntLess : public FRigVMFunction_MathIntBase
{
public:
	int32                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16D4[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathIntGreaterEqual
struct FRigVMFunction_MathIntGreaterEqual : public FRigVMFunction_MathIntBase
{
public:
	int32                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16D5[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathIntLessEqual
struct FRigVMFunction_MathIntLessEqual : public FRigVMFunction_MathIntBase
{
public:
	int32                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16DA[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathIntArraySum
struct FRigVMFunction_MathIntArraySum : public FRigVMFunction_MathIntBase
{
public:
	TArray<int32>                                Array;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        Sum;                                               // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16DC[0x4];                                     // Fixing Size Of Struct
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathIntArrayAverage
struct FRigVMFunction_MathIntArrayAverage : public FRigVMFunction_MathIntBase
{
public:
	TArray<int32>                                Array;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        Average;                                           // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16DF[0x4];                                     // Fixing Size Of Struct
};

// 0x0 (0x8 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathMatrixBase
struct FRigVMFunction_MathMatrixBase : public FRigVMFunction_MathBase
{
public:
};

// 0x108 (0x110 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathMatrixUnaryOp
struct FRigVMFunction_MathMatrixUnaryOp : public FRigVMFunction_MathMatrixBase
{
public:
	uint8                                        Pad_16E0[0x8];                                     // Fixing Size After Last Property 
	struct FMatrix                               Value;                                             // 0x10(0x80)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMatrix                               Result;                                            // 0x90(0x80)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x188 (0x190 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathMatrixBinaryOp
struct FRigVMFunction_MathMatrixBinaryOp : public FRigVMFunction_MathMatrixBase
{
public:
	uint8                                        Pad_16E1[0x8];                                     // Fixing Size After Last Property 
	struct FMatrix                               A;                                                 // 0x10(0x80)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMatrix                               B;                                                 // 0x90(0x80)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMatrix                               Result;                                            // 0x110(0x80)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x188 (0x190 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathMatrixBinaryAggregateOp
struct FRigVMFunction_MathMatrixBinaryAggregateOp : public FRigVMFunction_MathMatrixBase
{
public:
	uint8                                        Pad_16E3[0x8];                                     // Fixing Size After Last Property 
	struct FMatrix                               A;                                                 // 0x10(0x80)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMatrix                               B;                                                 // 0x90(0x80)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMatrix                               Result;                                            // 0x110(0x80)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xE8 (0xF0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathMatrixToTransform
struct FRigVMFunction_MathMatrixToTransform : public FRigVMFunction_MathMatrixBase
{
public:
	uint8                                        Pad_16E6[0x8];                                     // Fixing Size After Last Property 
	struct FMatrix                               Value;                                             // 0x10(0x80)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Result;                                            // 0x90(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE8 (0xF0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathMatrixFromTransform
struct FRigVMFunction_MathMatrixFromTransform : public FRigVMFunction_MathMatrixBase
{
public:
	uint8                                        Pad_16E7[0x8];                                     // Fixing Size After Last Property 
	struct FTransform                            Transform;                                         // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMatrix                               Result;                                            // 0x70(0x80)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xE8 (0xF0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathMatrixFromTransformV2
struct FRigVMFunction_MathMatrixFromTransformV2 : public FRigVMFunction_MathMatrixBase
{
public:
	uint8                                        Pad_16EA[0x8];                                     // Fixing Size After Last Property 
	struct FTransform                            Value;                                             // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMatrix                               Result;                                            // 0x70(0x80)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xE8 (0xF0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathMatrixToVectors
struct FRigVMFunction_MathMatrixToVectors : public FRigVMFunction_MathMatrixBase
{
public:
	uint8                                        Pad_16ED[0x8];                                     // Fixing Size After Last Property 
	struct FMatrix                               Value;                                             // 0x10(0x80)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Origin;                                            // 0x90(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               X;                                                 // 0xA8(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Y;                                                 // 0xC0(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Z;                                                 // 0xD8(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE8 (0xF0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathMatrixFromVectors
struct FRigVMFunction_MathMatrixFromVectors : public FRigVMFunction_MathMatrixBase
{
public:
	struct FVector                               Origin;                                            // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               X;                                                 // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Y;                                                 // 0x38(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Z;                                                 // 0x50(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16EF[0x8];                                     // Fixing Size After Last Property 
	struct FMatrix                               Result;                                            // 0x70(0x80)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x190 - 0x190)
// ScriptStruct RigVM.RigVMFunction_MathMatrixMul
struct FRigVMFunction_MathMatrixMul : public FRigVMFunction_MathMatrixBinaryAggregateOp
{
public:
};

// 0x0 (0x110 - 0x110)
// ScriptStruct RigVM.RigVMFunction_MathMatrixInverse
struct FRigVMFunction_MathMatrixInverse : public FRigVMFunction_MathMatrixUnaryOp
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionBase
struct FRigVMFunction_MathQuaternionBase : public FRigVMFunction_MathBase
{
public:
};

// 0x48 (0x50 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionUnaryOp
struct FRigVMFunction_MathQuaternionUnaryOp : public FRigVMFunction_MathQuaternionBase
{
public:
	uint8                                        Pad_16F2[0x8];                                     // Fixing Size After Last Property 
	struct FQuat                                 Value;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 Result;                                            // 0x30(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x70 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionBinaryOp
struct FRigVMFunction_MathQuaternionBinaryOp : public FRigVMFunction_MathQuaternionBase
{
public:
	uint8                                        Pad_16F3[0x8];                                     // Fixing Size After Last Property 
	struct FQuat                                 A;                                                 // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 B;                                                 // 0x30(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 Result;                                            // 0x50(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x70 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionBinaryAggregateOp
struct FRigVMFunction_MathQuaternionBinaryAggregateOp : public FRigVMFunction_MathQuaternionBase
{
public:
	uint8                                        Pad_16F4[0x8];                                     // Fixing Size After Last Property 
	struct FQuat                                 A;                                                 // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 B;                                                 // 0x30(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 Result;                                            // 0x50(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionMake
struct FRigVMFunction_MathQuaternionMake : public FRigVMFunction_MathQuaternionBase
{
public:
	float                                        X;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Y;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Z;                                                 // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        W;                                                 // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16F8[0x8];                                     // Fixing Size After Last Property 
	struct FQuat                                 Result;                                            // 0x20(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionFromAxisAndAngle
struct FRigVMFunction_MathQuaternionFromAxisAndAngle : public FRigVMFunction_MathQuaternionBase
{
public:
	struct FVector                               Axis;                                              // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Angle;                                             // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16FA[0xC];                                     // Fixing Size After Last Property 
	struct FQuat                                 Result;                                            // 0x30(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionFromEuler
struct FRigVMFunction_MathQuaternionFromEuler : public FRigVMFunction_MathQuaternionBase
{
public:
	struct FVector                               Euler;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEulerRotationOrder               RotationOrder;                                     // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16FC[0xF];                                     // Fixing Size After Last Property 
	struct FQuat                                 Result;                                            // 0x30(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionFromRotator
struct FRigVMFunction_MathQuaternionFromRotator : public FRigVMFunction_MathQuaternionBase
{
public:
	struct FRotator                              Rotator;                                           // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FQuat                                 Result;                                            // 0x20(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionFromRotatorV2
struct FRigVMFunction_MathQuaternionFromRotatorV2 : public FRigVMFunction_MathQuaternionBase
{
public:
	struct FRotator                              Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FQuat                                 Result;                                            // 0x20(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x60 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionFromTwoVectors
struct FRigVMFunction_MathQuaternionFromTwoVectors : public FRigVMFunction_MathQuaternionBase
{
public:
	struct FVector                               A;                                                 // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               B;                                                 // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1701[0x8];                                     // Fixing Size After Last Property 
	struct FQuat                                 Result;                                            // 0x40(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionToAxisAndAngle
struct FRigVMFunction_MathQuaternionToAxisAndAngle : public FRigVMFunction_MathQuaternionBase
{
public:
	uint8                                        Pad_1702[0x8];                                     // Fixing Size After Last Property 
	struct FQuat                                 Value;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Axis;                                              // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Angle;                                             // 0x48(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1704[0x4];                                     // Fixing Size Of Struct
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionScale
struct FRigVMFunction_MathQuaternionScale : public FRigVMFunction_MathQuaternionBase
{
public:
	uint8                                        Pad_1706[0x8];                                     // Fixing Size After Last Property 
	struct FQuat                                 Value;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1707[0xC];                                     // Fixing Size Of Struct
};

// 0x58 (0x60 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionScaleV2
struct FRigVMFunction_MathQuaternionScaleV2 : public FRigVMFunction_MathQuaternionBase
{
public:
	uint8                                        Pad_1708[0x8];                                     // Fixing Size After Last Property 
	struct FQuat                                 Value;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Factor;                                            // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_170A[0xC];                                     // Fixing Size After Last Property 
	struct FQuat                                 Result;                                            // 0x40(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionToEuler
struct FRigVMFunction_MathQuaternionToEuler : public FRigVMFunction_MathQuaternionBase
{
public:
	uint8                                        Pad_170E[0x8];                                     // Fixing Size After Last Property 
	struct FQuat                                 Value;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEulerRotationOrder               RotationOrder;                                     // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1710[0x7];                                     // Fixing Size After Last Property 
	struct FVector                               Result;                                            // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionToRotator
struct FRigVMFunction_MathQuaternionToRotator : public FRigVMFunction_MathQuaternionBase
{
public:
	uint8                                        Pad_1711[0x8];                                     // Fixing Size After Last Property 
	struct FQuat                                 Value;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Result;                                            // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1712[0x8];                                     // Fixing Size Of Struct
};

// 0x0 (0x70 - 0x70)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionMul
struct FRigVMFunction_MathQuaternionMul : public FRigVMFunction_MathQuaternionBinaryAggregateOp
{
public:
};

// 0x0 (0x50 - 0x50)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionInverse
struct FRigVMFunction_MathQuaternionInverse : public FRigVMFunction_MathQuaternionUnaryOp
{
public:
};

// 0x78 (0x80 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionSlerp
struct FRigVMFunction_MathQuaternionSlerp : public FRigVMFunction_MathQuaternionBase
{
public:
	uint8                                        Pad_1714[0x8];                                     // Fixing Size After Last Property 
	struct FQuat                                 A;                                                 // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 B;                                                 // 0x30(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        T;                                                 // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1716[0xC];                                     // Fixing Size After Last Property 
	struct FQuat                                 Result;                                            // 0x60(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x60 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionEquals
struct FRigVMFunction_MathQuaternionEquals : public FRigVMFunction_MathQuaternionBase
{
public:
	uint8                                        Pad_1719[0x8];                                     // Fixing Size After Last Property 
	struct FQuat                                 A;                                                 // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 B;                                                 // 0x30(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x50(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_171B[0xF];                                     // Fixing Size Of Struct
};

// 0x58 (0x60 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionNotEquals
struct FRigVMFunction_MathQuaternionNotEquals : public FRigVMFunction_MathQuaternionBase
{
public:
	uint8                                        Pad_171C[0x8];                                     // Fixing Size After Last Property 
	struct FQuat                                 A;                                                 // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 B;                                                 // 0x30(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x50(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_171E[0xF];                                     // Fixing Size Of Struct
};

// 0x68 (0x70 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionSelectBool
struct FRigVMFunction_MathQuaternionSelectBool : public FRigVMFunction_MathQuaternionBase
{
public:
	bool                                         Condition;                                         // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1720[0x7];                                     // Fixing Size After Last Property 
	struct FQuat                                 IfTrue;                                            // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 IfFalse;                                           // 0x30(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 Result;                                            // 0x50(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x60 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionDot
struct FRigVMFunction_MathQuaternionDot : public FRigVMFunction_MathQuaternionBase
{
public:
	uint8                                        Pad_1722[0x8];                                     // Fixing Size After Last Property 
	struct FQuat                                 A;                                                 // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 B;                                                 // 0x30(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x50(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1724[0xC];                                     // Fixing Size Of Struct
};

// 0x0 (0x50 - 0x50)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionUnit
struct FRigVMFunction_MathQuaternionUnit : public FRigVMFunction_MathQuaternionUnaryOp
{
public:
};

// 0x58 (0x60 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionRotateVector
struct FRigVMFunction_MathQuaternionRotateVector : public FRigVMFunction_MathQuaternionBase
{
public:
	uint8                                        Pad_1728[0x8];                                     // Fixing Size After Last Property 
	struct FQuat                                 Transform;                                         // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Vector;                                            // 0x30(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x48(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionGetAxis
struct FRigVMFunction_MathQuaternionGetAxis : public FRigVMFunction_MathQuaternionBase
{
public:
	uint8                                        Pad_172A[0x8];                                     // Fixing Size After Last Property 
	struct FQuat                                 Quaternion;                                        // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             Axis;                                              // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_172C[0x7];                                     // Fixing Size After Last Property 
	struct FVector                               Result;                                            // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x90 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionSwingTwist
struct FRigVMFunction_MathQuaternionSwingTwist : public FRigVMFunction_MathQuaternionBase
{
public:
	uint8                                        Pad_1730[0x8];                                     // Fixing Size After Last Property 
	struct FQuat                                 Input;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TwistAxis;                                         // 0x30(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1731[0x8];                                     // Fixing Size After Last Property 
	struct FQuat                                 Swing;                                             // 0x50(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 Twist;                                             // 0x70(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionRotationOrder
struct FRigVMFunction_MathQuaternionRotationOrder : public FRigVMFunction_MathBase
{
public:
	enum class EEulerRotationOrder               RotationOrder;                                     // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1732[0x7];                                     // Fixing Size Of Struct
};

// 0x68 (0x70 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionMakeRelative
struct FRigVMFunction_MathQuaternionMakeRelative : public FRigVMFunction_MathQuaternionBase
{
public:
	uint8                                        Pad_1733[0x8];                                     // Fixing Size After Last Property 
	struct FQuat                                 Global;                                            // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 Parent;                                            // 0x30(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 Local;                                             // 0x50(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x70 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionMakeAbsolute
struct FRigVMFunction_MathQuaternionMakeAbsolute : public FRigVMFunction_MathQuaternionBase
{
public:
	uint8                                        Pad_1737[0x8];                                     // Fixing Size After Last Property 
	struct FQuat                                 Local;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 Parent;                                            // 0x30(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 Global;                                            // 0x50(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xC0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionMirrorTransform
struct FRigVMFunction_MathQuaternionMirrorTransform : public FRigVMFunction_MathQuaternionBase
{
public:
	uint8                                        Pad_173A[0x8];                                     // Fixing Size After Last Property 
	struct FQuat                                 Value;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             MirrorAxis;                                        // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             AxisToFlip;                                        // 0x31(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_173D[0xE];                                     // Fixing Size After Last Property 
	struct FTransform                            CentralTransform;                                  // 0x40(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 Result;                                            // 0xA0(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct RigVM.RigVMFunction_MathRBFInterpolateQuatWorkData
struct FRigVMFunction_MathRBFInterpolateQuatWorkData
{
public:
	uint8                                        Pad_173E[0x90];                                    // Fixing Size Of Struct
};

// 0x90 (0x90 - 0x0)
// ScriptStruct RigVM.RigVMFunction_MathRBFInterpolateVectorWorkData
struct FRigVMFunction_MathRBFInterpolateVectorWorkData
{
public:
	uint8                                        Pad_1740[0x90];                                    // Fixing Size Of Struct
};

// 0x0 (0x8 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathRBFInterpolateBase
struct FRigVMFunction_MathRBFInterpolateBase : public FRigVMFunction_MathBase
{
public:
};

// 0xE8 (0xF0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathRBFInterpolateQuatBase
struct FRigVMFunction_MathRBFInterpolateQuatBase : public FRigVMFunction_MathRBFInterpolateBase
{
public:
	uint8                                        Pad_1743[0x8];                                     // Fixing Size After Last Property 
	struct FQuat                                 Input;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERBFQuatDistanceType              DistanceFunction;                                  // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERBFKernelType                    SmoothingFunction;                                 // 0x31(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1745[0x2];                                     // Fixing Size After Last Property 
	float                                        SmoothingAngle;                                    // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNormalizeOutput;                                  // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1746[0x7];                                     // Fixing Size After Last Property 
	struct FVector                               TwistAxis;                                         // 0x40(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1747[0x8];                                     // Fixing Size After Last Property 
	struct FRigVMFunction_MathRBFInterpolateQuatWorkData WorkData;                                          // 0x60(0x90)(Transient, NativeAccessSpecifierPublic)
};

// 0xB8 (0xC0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathRBFInterpolateVectorBase
struct FRigVMFunction_MathRBFInterpolateVectorBase : public FRigVMFunction_MathRBFInterpolateBase
{
public:
	struct FVector                               Input;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERBFVectorDistanceType            DistanceFunction;                                  // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERBFKernelType                    SmoothingFunction;                                 // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1748[0x2];                                     // Fixing Size After Last Property 
	float                                        SmoothingRadius;                                   // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNormalizeOutput;                                  // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1749[0x7];                                     // Fixing Size After Last Property 
	struct FRigVMFunction_MathRBFInterpolateVectorWorkData WorkData;                                          // 0x30(0x90)(Transient, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct RigVM.MathRBFInterpolateQuatFloat_Target
struct FMathRBFInterpolateQuatFloat_Target
{
public:
	struct FQuat                                 Target;                                            // 0x0(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_174B[0xC];                                     // Fixing Size Of Struct
};

// 0x20 (0x110 - 0xF0)
// ScriptStruct RigVM.RigVMFunction_MathRBFInterpolateQuatFloat
struct FRigVMFunction_MathRBFInterpolateQuatFloat : public FRigVMFunction_MathRBFInterpolateQuatBase
{
public:
	TArray<struct FMathRBFInterpolateQuatFloat_Target> Targets;                                           // 0xF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Output;                                            // 0x100(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_174F[0xC];                                     // Fixing Size Of Struct
};

// 0x40 (0x40 - 0x0)
// ScriptStruct RigVM.MathRBFInterpolateQuatVector_Target
struct FMathRBFInterpolateQuatVector_Target
{
public:
	struct FQuat                                 Target;                                            // 0x0(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Value;                                             // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1753[0x8];                                     // Fixing Size Of Struct
};

// 0x30 (0x120 - 0xF0)
// ScriptStruct RigVM.RigVMFunction_MathRBFInterpolateQuatVector
struct FRigVMFunction_MathRBFInterpolateQuatVector : public FRigVMFunction_MathRBFInterpolateQuatBase
{
public:
	TArray<struct FMathRBFInterpolateQuatVector_Target> Targets;                                           // 0xF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector                               Output;                                            // 0x100(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1759[0x8];                                     // Fixing Size Of Struct
};

// 0x30 (0x30 - 0x0)
// ScriptStruct RigVM.MathRBFInterpolateQuatColor_Target
struct FMathRBFInterpolateQuatColor_Target
{
public:
	struct FQuat                                 Target;                                            // 0x0(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Value;                                             // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x110 - 0xF0)
// ScriptStruct RigVM.RigVMFunction_MathRBFInterpolateQuatColor
struct FRigVMFunction_MathRBFInterpolateQuatColor : public FRigVMFunction_MathRBFInterpolateQuatBase
{
public:
	TArray<struct FMathRBFInterpolateQuatColor_Target> Targets;                                           // 0xF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FLinearColor                          Output;                                            // 0x100(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct RigVM.MathRBFInterpolateQuatQuat_Target
struct FMathRBFInterpolateQuatQuat_Target
{
public:
	struct FQuat                                 Target;                                            // 0x0(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 Value;                                             // 0x20(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x120 - 0xF0)
// ScriptStruct RigVM.RigVMFunction_MathRBFInterpolateQuatQuat
struct FRigVMFunction_MathRBFInterpolateQuatQuat : public FRigVMFunction_MathRBFInterpolateQuatBase
{
public:
	TArray<struct FMathRBFInterpolateQuatQuat_Target> Targets;                                           // 0xF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FQuat                                 Output;                                            // 0x100(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct RigVM.MathRBFInterpolateQuatXform_Target
struct FMathRBFInterpolateQuatXform_Target
{
public:
	struct FQuat                                 Target;                                            // 0x0(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Value;                                             // 0x20(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x160 - 0xF0)
// ScriptStruct RigVM.RigVMFunction_MathRBFInterpolateQuatXform
struct FRigVMFunction_MathRBFInterpolateQuatXform : public FRigVMFunction_MathRBFInterpolateQuatBase
{
public:
	TArray<struct FMathRBFInterpolateQuatXform_Target> Targets;                                           // 0xF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FTransform                            Output;                                            // 0x100(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct RigVM.MathRBFInterpolateVectorFloat_Target
struct FMathRBFInterpolateVectorFloat_Target
{
public:
	struct FVector                               Target;                                            // 0x0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_175F[0x4];                                     // Fixing Size Of Struct
};

// 0x20 (0xE0 - 0xC0)
// ScriptStruct RigVM.RigVMFunction_MathRBFInterpolateVectorFloat
struct FRigVMFunction_MathRBFInterpolateVectorFloat : public FRigVMFunction_MathRBFInterpolateVectorBase
{
public:
	TArray<struct FMathRBFInterpolateVectorFloat_Target> Targets;                                           // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Output;                                            // 0xD0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1760[0xC];                                     // Fixing Size Of Struct
};

// 0x30 (0x30 - 0x0)
// ScriptStruct RigVM.MathRBFInterpolateVectorVector_Target
struct FMathRBFInterpolateVectorVector_Target
{
public:
	struct FVector                               Target;                                            // 0x0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Value;                                             // 0x18(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0xF0 - 0xC0)
// ScriptStruct RigVM.RigVMFunction_MathRBFInterpolateVectorVector
struct FRigVMFunction_MathRBFInterpolateVectorVector : public FRigVMFunction_MathRBFInterpolateVectorBase
{
public:
	TArray<struct FMathRBFInterpolateVectorVector_Target> Targets;                                           // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector                               Output;                                            // 0xD0(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1763[0x8];                                     // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// ScriptStruct RigVM.MathRBFInterpolateVectorColor_Target
struct FMathRBFInterpolateVectorColor_Target
{
public:
	struct FVector                               Target;                                            // 0x0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Value;                                             // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0xE0 - 0xC0)
// ScriptStruct RigVM.RigVMFunction_MathRBFInterpolateVectorColor
struct FRigVMFunction_MathRBFInterpolateVectorColor : public FRigVMFunction_MathRBFInterpolateVectorBase
{
public:
	TArray<struct FMathRBFInterpolateVectorColor_Target> Targets;                                           // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FLinearColor                          Output;                                            // 0xD0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct RigVM.MathRBFInterpolateVectorQuat_Target
struct FMathRBFInterpolateVectorQuat_Target
{
public:
	struct FVector                               Target;                                            // 0x0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1767[0x8];                                     // Fixing Size After Last Property 
	struct FQuat                                 Value;                                             // 0x20(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0xF0 - 0xC0)
// ScriptStruct RigVM.RigVMFunction_MathRBFInterpolateVectorQuat
struct FRigVMFunction_MathRBFInterpolateVectorQuat : public FRigVMFunction_MathRBFInterpolateVectorBase
{
public:
	TArray<struct FMathRBFInterpolateVectorQuat_Target> Targets;                                           // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FQuat                                 Output;                                            // 0xD0(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct RigVM.MathRBFInterpolateVectorXform_Target
struct FMathRBFInterpolateVectorXform_Target
{
public:
	struct FVector                               Target;                                            // 0x0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_176F[0x8];                                     // Fixing Size After Last Property 
	struct FTransform                            Value;                                             // 0x20(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x130 - 0xC0)
// ScriptStruct RigVM.RigVMFunction_MathRBFInterpolateVectorXform
struct FRigVMFunction_MathRBFInterpolateVectorXform : public FRigVMFunction_MathRBFInterpolateVectorBase
{
public:
	TArray<struct FMathRBFInterpolateVectorXform_Target> Targets;                                           // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FTransform                            Output;                                            // 0xD0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathTransformBase
struct FRigVMFunction_MathTransformBase : public FRigVMFunction_MathBase
{
public:
};

// 0x0 (0x100 - 0x100)
// ScriptStruct RigVM.RigVMFunction_MathTransformMutableBase
struct FRigVMFunction_MathTransformMutableBase : public FRigVMFunction_MathMutableBase
{
public:
};

// 0xC8 (0xD0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathTransformUnaryOp
struct FRigVMFunction_MathTransformUnaryOp : public FRigVMFunction_MathTransformBase
{
public:
	uint8                                        Pad_1775[0x8];                                     // Fixing Size After Last Property 
	struct FTransform                            Value;                                             // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Result;                                            // 0x70(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x128 (0x130 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathTransformBinaryOp
struct FRigVMFunction_MathTransformBinaryOp : public FRigVMFunction_MathTransformBase
{
public:
	uint8                                        Pad_1776[0x8];                                     // Fixing Size After Last Property 
	struct FTransform                            A;                                                 // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            B;                                                 // 0x70(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Result;                                            // 0xD0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x128 (0x130 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathTransformBinaryAggregateOp
struct FRigVMFunction_MathTransformBinaryAggregateOp : public FRigVMFunction_MathTransformBase
{
public:
	uint8                                        Pad_1777[0x8];                                     // Fixing Size After Last Property 
	struct FTransform                            A;                                                 // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            B;                                                 // 0x70(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Result;                                            // 0xD0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xC0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathTransformMake
struct FRigVMFunction_MathTransformMake : public FRigVMFunction_MathTransformBase
{
public:
	struct FVector                               Translation;                                       // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 Rotation;                                          // 0x20(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Scale;                                             // 0x40(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_177C[0x8];                                     // Fixing Size After Last Property 
	struct FTransform                            Result;                                            // 0x60(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xB0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathTransformFromEulerTransform
struct FRigVMFunction_MathTransformFromEulerTransform : public FRigVMFunction_MathTransformBase
{
public:
	struct FEulerTransform                       EulerTransform;                                    // 0x8(0x48)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Result;                                            // 0x50(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xB0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathTransformFromEulerTransformV2
struct FRigVMFunction_MathTransformFromEulerTransformV2 : public FRigVMFunction_MathTransformBase
{
public:
	struct FEulerTransform                       Value;                                             // 0x8(0x48)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Result;                                            // 0x50(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xC0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathTransformToEulerTransform
struct FRigVMFunction_MathTransformToEulerTransform : public FRigVMFunction_MathTransformBase
{
public:
	uint8                                        Pad_177E[0x8];                                     // Fixing Size After Last Property 
	struct FTransform                            Value;                                             // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEulerTransform                       Result;                                            // 0x70(0x48)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_177F[0x8];                                     // Fixing Size Of Struct
};

// 0x0 (0x130 - 0x130)
// ScriptStruct RigVM.RigVMFunction_MathTransformMul
struct FRigVMFunction_MathTransformMul : public FRigVMFunction_MathTransformBinaryAggregateOp
{
public:
};

// 0x128 (0x130 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathTransformMakeRelative
struct FRigVMFunction_MathTransformMakeRelative : public FRigVMFunction_MathTransformBase
{
public:
	uint8                                        Pad_1782[0x8];                                     // Fixing Size After Last Property 
	struct FTransform                            Global;                                            // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Parent;                                            // 0x70(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Local;                                             // 0xD0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x128 (0x130 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathTransformMakeAbsolute
struct FRigVMFunction_MathTransformMakeAbsolute : public FRigVMFunction_MathTransformBase
{
public:
	uint8                                        Pad_1784[0x8];                                     // Fixing Size After Last Property 
	struct FTransform                            Local;                                             // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Parent;                                            // 0x70(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Global;                                            // 0xD0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x190 - 0x100)
// ScriptStruct RigVM.RigVMFunction_MathTransformAccumulateArray
struct FRigVMFunction_MathTransformAccumulateArray : public FRigVMFunction_MathTransformMutableBase
{
public:
	TArray<struct FTransform>                    Transforms;                                        // 0x100(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              TargetSpace;                                       // 0x110(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_178B[0xF];                                     // Fixing Size After Last Property 
	struct FTransform                            Root;                                              // 0x120(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                ParentIndices;                                     // 0x180(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0xD0 - 0xD0)
// ScriptStruct RigVM.RigVMFunction_MathTransformInverse
struct FRigVMFunction_MathTransformInverse : public FRigVMFunction_MathTransformUnaryOp
{
public:
};

// 0x138 (0x140 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathTransformLerp
struct FRigVMFunction_MathTransformLerp : public FRigVMFunction_MathTransformBase
{
public:
	uint8                                        Pad_178E[0x8];                                     // Fixing Size After Last Property 
	struct FTransform                            A;                                                 // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            B;                                                 // 0x70(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        T;                                                 // 0xD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1790[0xC];                                     // Fixing Size After Last Property 
	struct FTransform                            Result;                                            // 0xE0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x128 (0x130 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathTransformSelectBool
struct FRigVMFunction_MathTransformSelectBool : public FRigVMFunction_MathTransformBase
{
public:
	bool                                         Condition;                                         // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1793[0x7];                                     // Fixing Size After Last Property 
	struct FTransform                            IfTrue;                                            // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            IfFalse;                                           // 0x70(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Result;                                            // 0xD0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathTransformRotateVector
struct FRigVMFunction_MathTransformRotateVector : public FRigVMFunction_MathTransformBase
{
public:
	uint8                                        Pad_1796[0x8];                                     // Fixing Size After Last Property 
	struct FTransform                            Transform;                                         // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Vector;                                            // 0x70(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x88(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathTransformTransformVector
struct FRigVMFunction_MathTransformTransformVector : public FRigVMFunction_MathTransformBase
{
public:
	uint8                                        Pad_1797[0x8];                                     // Fixing Size After Last Property 
	struct FTransform                            Transform;                                         // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x70(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x88(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x108 (0x110 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathTransformFromSRT
struct FRigVMFunction_MathTransformFromSRT : public FRigVMFunction_MathTransformBase
{
public:
	struct FVector                               Location;                                          // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Rotation;                                          // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEulerRotationOrder               RotationOrder;                                     // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_179A[0x7];                                     // Fixing Size After Last Property 
	struct FVector                               Scale;                                             // 0x40(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_179C[0x8];                                     // Fixing Size After Last Property 
	struct FTransform                            Transform;                                         // 0x60(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEulerTransform                       EulerTransform;                                    // 0xC0(0x48)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_179F[0x8];                                     // Fixing Size Of Struct
};

// 0x40 (0x48 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathTransformArrayToSRT
struct FRigVMFunction_MathTransformArrayToSRT : public FRigVMFunction_MathTransformBase
{
public:
	TArray<struct FTransform>                    Transforms;                                        // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       Translations;                                      // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FQuat>                         Rotations;                                         // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       Scales;                                            // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x158 (0x160 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathTransformClampSpatially
struct FRigVMFunction_MathTransformClampSpatially : public FRigVMFunction_MathTransformBase
{
public:
	uint8                                        Pad_17A5[0x8];                                     // Fixing Size After Last Property 
	struct FTransform                            Value;                                             // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             Axis;                                              // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMClampSpatialMode            Type;                                              // 0x71(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17A8[0x2];                                     // Fixing Size After Last Property 
	float                                        Minimum;                                           // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17AA[0x4];                                     // Fixing Size After Last Property 
	struct FTransform                            Space;                                             // 0x80(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawDebug;                                        // 0xE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17AC[0x3];                                     // Fixing Size After Last Property 
	struct FLinearColor                          DebugColor;                                        // 0xE4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebugThickness;                                    // 0xF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17AE[0x8];                                     // Fixing Size After Last Property 
	struct FTransform                            Result;                                            // 0x100(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x138 (0x140 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathTransformMirrorTransform
struct FRigVMFunction_MathTransformMirrorTransform : public FRigVMFunction_MathTransformBase
{
public:
	uint8                                        Pad_17B0[0x8];                                     // Fixing Size After Last Property 
	struct FTransform                            Value;                                             // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             MirrorAxis;                                        // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             AxisToFlip;                                        // 0x71(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17B2[0xE];                                     // Fixing Size After Last Property 
	struct FTransform                            CentralTransform;                                  // 0x80(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Result;                                            // 0xE0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorUnaryOp
struct FRigVMFunction_MathVectorUnaryOp : public FRigVMFunction_MathVectorBase
{
public:
	struct FVector                               Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorBinaryOp
struct FRigVMFunction_MathVectorBinaryOp : public FRigVMFunction_MathVectorBase
{
public:
	struct FVector                               A;                                                 // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               B;                                                 // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorBinaryAggregateOp
struct FRigVMFunction_MathVectorBinaryAggregateOp : public FRigVMFunction_MathVectorBase
{
public:
	struct FVector                               A;                                                 // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               B;                                                 // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorMake
struct FRigVMFunction_MathVectorMake : public FRigVMFunction_MathVectorBase
{
public:
	float                                        X;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Y;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Z;                                                 // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17B7[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               Result;                                            // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorFromFloat
struct FRigVMFunction_MathVectorFromFloat : public FRigVMFunction_MathVectorBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17B8[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               Result;                                            // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorFromDouble
struct FRigVMFunction_MathVectorFromDouble : public FRigVMFunction_MathVectorBase
{
public:
	double                                       Value;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x50 - 0x50)
// ScriptStruct RigVM.RigVMFunction_MathVectorAdd
struct FRigVMFunction_MathVectorAdd : public FRigVMFunction_MathVectorBinaryAggregateOp
{
public:
};

// 0x0 (0x50 - 0x50)
// ScriptStruct RigVM.RigVMFunction_MathVectorSub
struct FRigVMFunction_MathVectorSub : public FRigVMFunction_MathVectorBinaryOp
{
public:
};

// 0x0 (0x50 - 0x50)
// ScriptStruct RigVM.RigVMFunction_MathVectorMul
struct FRigVMFunction_MathVectorMul : public FRigVMFunction_MathVectorBinaryAggregateOp
{
public:
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorScale
struct FRigVMFunction_MathVectorScale : public FRigVMFunction_MathVectorBase
{
public:
	struct FVector                               Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Factor;                                            // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17BE[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               Result;                                            // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x50 - 0x50)
// ScriptStruct RigVM.RigVMFunction_MathVectorDiv
struct FRigVMFunction_MathVectorDiv : public FRigVMFunction_MathVectorBinaryOp
{
public:
};

// 0x0 (0x50 - 0x50)
// ScriptStruct RigVM.RigVMFunction_MathVectorMod
struct FRigVMFunction_MathVectorMod : public FRigVMFunction_MathVectorBinaryOp
{
public:
};

// 0x0 (0x50 - 0x50)
// ScriptStruct RigVM.RigVMFunction_MathVectorMin
struct FRigVMFunction_MathVectorMin : public FRigVMFunction_MathVectorBinaryAggregateOp
{
public:
};

// 0x0 (0x50 - 0x50)
// ScriptStruct RigVM.RigVMFunction_MathVectorMax
struct FRigVMFunction_MathVectorMax : public FRigVMFunction_MathVectorBinaryAggregateOp
{
public:
};

// 0x0 (0x38 - 0x38)
// ScriptStruct RigVM.RigVMFunction_MathVectorNegate
struct FRigVMFunction_MathVectorNegate : public FRigVMFunction_MathVectorUnaryOp
{
public:
};

// 0x0 (0x38 - 0x38)
// ScriptStruct RigVM.RigVMFunction_MathVectorAbs
struct FRigVMFunction_MathVectorAbs : public FRigVMFunction_MathVectorUnaryOp
{
public:
};

// 0x0 (0x38 - 0x38)
// ScriptStruct RigVM.RigVMFunction_MathVectorFloor
struct FRigVMFunction_MathVectorFloor : public FRigVMFunction_MathVectorUnaryOp
{
public:
};

// 0x0 (0x38 - 0x38)
// ScriptStruct RigVM.RigVMFunction_MathVectorCeil
struct FRigVMFunction_MathVectorCeil : public FRigVMFunction_MathVectorUnaryOp
{
public:
};

// 0x0 (0x38 - 0x38)
// ScriptStruct RigVM.RigVMFunction_MathVectorRound
struct FRigVMFunction_MathVectorRound : public FRigVMFunction_MathVectorUnaryOp
{
public:
};

// 0x0 (0x38 - 0x38)
// ScriptStruct RigVM.RigVMFunction_MathVectorSign
struct FRigVMFunction_MathVectorSign : public FRigVMFunction_MathVectorUnaryOp
{
public:
};

// 0x60 (0x68 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorClamp
struct FRigVMFunction_MathVectorClamp : public FRigVMFunction_MathVectorBase
{
public:
	struct FVector                               Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Minimum;                                           // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Maximum;                                           // 0x38(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x50(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorLerp
struct FRigVMFunction_MathVectorLerp : public FRigVMFunction_MathVectorBase
{
public:
	struct FVector                               A;                                                 // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               B;                                                 // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        T;                                                 // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17C6[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               Result;                                            // 0x40(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorRemap
struct FRigVMFunction_MathVectorRemap : public FRigVMFunction_MathVectorBase
{
public:
	struct FVector                               Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SourceMinimum;                                     // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SourceMaximum;                                     // 0x38(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetMinimum;                                     // 0x50(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetMaximum;                                     // 0x68(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClamp;                                            // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17CB[0x7];                                     // Fixing Size After Last Property 
	struct FVector                               Result;                                            // 0x88(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorEquals
struct FRigVMFunction_MathVectorEquals : public FRigVMFunction_MathVectorBase
{
public:
	struct FVector                               A;                                                 // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               B;                                                 // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17CC[0x7];                                     // Fixing Size Of Struct
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorNotEquals
struct FRigVMFunction_MathVectorNotEquals : public FRigVMFunction_MathVectorBase
{
public:
	struct FVector                               A;                                                 // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               B;                                                 // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17CF[0x7];                                     // Fixing Size Of Struct
};

// 0x20 (0x28 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorIsNearlyZero
struct FRigVMFunction_MathVectorIsNearlyZero : public FRigVMFunction_MathVectorBase
{
public:
	struct FVector                               Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Tolerance;                                         // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x24(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17D0[0x3];                                     // Fixing Size Of Struct
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorIsNearlyEqual
struct FRigVMFunction_MathVectorIsNearlyEqual : public FRigVMFunction_MathVectorBase
{
public:
	struct FVector                               A;                                                 // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               B;                                                 // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Tolerance;                                         // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x3C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17D1[0x3];                                     // Fixing Size Of Struct
};

// 0x50 (0x58 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorSelectBool
struct FRigVMFunction_MathVectorSelectBool : public FRigVMFunction_MathVectorBase
{
public:
	bool                                         Condition;                                         // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17D2[0x7];                                     // Fixing Size After Last Property 
	struct FVector                               IfTrue;                                            // 0x10(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               IfFalse;                                           // 0x28(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x40(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x38 - 0x38)
// ScriptStruct RigVM.RigVMFunction_MathVectorDeg
struct FRigVMFunction_MathVectorDeg : public FRigVMFunction_MathVectorUnaryOp
{
public:
};

// 0x0 (0x38 - 0x38)
// ScriptStruct RigVM.RigVMFunction_MathVectorRad
struct FRigVMFunction_MathVectorRad : public FRigVMFunction_MathVectorUnaryOp
{
public:
};

// 0x20 (0x28 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorLengthSquared
struct FRigVMFunction_MathVectorLengthSquared : public FRigVMFunction_MathVectorBase
{
public:
	struct FVector                               Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17D5[0x4];                                     // Fixing Size Of Struct
};

// 0x20 (0x28 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorLength
struct FRigVMFunction_MathVectorLength : public FRigVMFunction_MathVectorBase
{
public:
	struct FVector                               Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17D6[0x4];                                     // Fixing Size Of Struct
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorDistance
struct FRigVMFunction_MathVectorDistance : public FRigVMFunction_MathVectorBase
{
public:
	struct FVector                               A;                                                 // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               B;                                                 // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17D8[0x4];                                     // Fixing Size Of Struct
};

// 0x0 (0x50 - 0x50)
// ScriptStruct RigVM.RigVMFunction_MathVectorCross
struct FRigVMFunction_MathVectorCross : public FRigVMFunction_MathVectorBinaryOp
{
public:
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorDot
struct FRigVMFunction_MathVectorDot : public FRigVMFunction_MathVectorBase
{
public:
	struct FVector                               A;                                                 // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               B;                                                 // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17DC[0x4];                                     // Fixing Size Of Struct
};

// 0x0 (0x38 - 0x38)
// ScriptStruct RigVM.RigVMFunction_MathVectorUnit
struct FRigVMFunction_MathVectorUnit : public FRigVMFunction_MathVectorUnaryOp
{
public:
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorSetLength
struct FRigVMFunction_MathVectorSetLength : public FRigVMFunction_MathVectorBase
{
public:
	struct FVector                               Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Length;                                            // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17E1[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               Result;                                            // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorClampLength
struct FRigVMFunction_MathVectorClampLength : public FRigVMFunction_MathVectorBase
{
public:
	struct FVector                               Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumLength;                                     // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumLength;                                     // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorMirror
struct FRigVMFunction_MathVectorMirror : public FRigVMFunction_MathVectorBase
{
public:
	struct FVector                               Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Normal;                                            // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorAngle
struct FRigVMFunction_MathVectorAngle : public FRigVMFunction_MathVectorBase
{
public:
	struct FVector                               A;                                                 // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               B;                                                 // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17E4[0x4];                                     // Fixing Size Of Struct
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorParallel
struct FRigVMFunction_MathVectorParallel : public FRigVMFunction_MathVectorBase
{
public:
	struct FVector                               A;                                                 // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               B;                                                 // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17E9[0x7];                                     // Fixing Size Of Struct
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorOrthogonal
struct FRigVMFunction_MathVectorOrthogonal : public FRigVMFunction_MathVectorBase
{
public:
	struct FVector                               A;                                                 // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               B;                                                 // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17EA[0x7];                                     // Fixing Size Of Struct
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorBezierFourPoint
struct FRigVMFunction_MathVectorBezierFourPoint : public FRigVMFunction_MathVectorBase
{
public:
	struct FRigVMFourPointBezier                 Bezier;                                            // 0x8(0x60)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        T;                                                 // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17EC[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               Result;                                            // 0x70(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Tangent;                                           // 0x88(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x68 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorMakeBezierFourPoint
struct FRigVMFunction_MathVectorMakeBezierFourPoint : public FRigVMFunction_MathVectorBase
{
public:
	struct FRigVMFourPointBezier                 Bezier;                                            // 0x8(0x60)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xB8 (0xC0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorClampSpatially
struct FRigVMFunction_MathVectorClampSpatially : public FRigVMFunction_MathVectorBase
{
public:
	struct FVector                               Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             Axis;                                              // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMClampSpatialMode            Type;                                              // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17F0[0x2];                                     // Fixing Size After Last Property 
	float                                        Minimum;                                           // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17F1[0x4];                                     // Fixing Size After Last Property 
	struct FTransform                            Space;                                             // 0x30(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawDebug;                                        // 0x90(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17F2[0x3];                                     // Fixing Size After Last Property 
	struct FLinearColor                          DebugColor;                                        // 0x94(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebugThickness;                                    // 0xA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0xA8(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x88 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathIntersectPlane
struct FRigVMFunction_MathIntersectPlane : public FRigVMFunction_MathVectorBase
{
public:
	struct FVector                               Start;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Direction;                                         // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PlanePoint;                                        // 0x38(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PlaneNormal;                                       // 0x50(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x68(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Distance;                                          // 0x80(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17F9[0x4];                                     // Fixing Size Of Struct
};

// 0x68 (0x70 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathDistanceToPlane
struct FRigVMFunction_MathDistanceToPlane : public FRigVMFunction_MathVectorBase
{
public:
	struct FVector                               Point;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PlanePoint;                                        // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PlaneNormal;                                       // 0x38(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ClosestPointOnPlane;                               // 0x50(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SignedDistance;                                    // 0x68(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1802[0x4];                                     // Fixing Size Of Struct
};

// 0x48 (0x50 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorMakeRelative
struct FRigVMFunction_MathVectorMakeRelative : public FRigVMFunction_MathVectorBase
{
public:
	struct FVector                               Global;                                            // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Parent;                                            // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Local;                                             // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorMakeAbsolute
struct FRigVMFunction_MathVectorMakeAbsolute : public FRigVMFunction_MathVectorBase
{
public:
	struct FVector                               Local;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Parent;                                            // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Global;                                            // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xB0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorMirrorTransform
struct FRigVMFunction_MathVectorMirrorTransform : public FRigVMFunction_MathVectorBase
{
public:
	struct FVector                               Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             MirrorAxis;                                        // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             AxisToFlip;                                        // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1806[0xE];                                     // Fixing Size After Last Property 
	struct FTransform                            CentralTransform;                                  // 0x30(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x90(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1807[0x8];                                     // Fixing Size Of Struct
};

// 0x28 (0x30 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorArraySum
struct FRigVMFunction_MathVectorArraySum : public FRigVMFunction_MathVectorBase
{
public:
	TArray<struct FVector>                       Array;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector                               Sum;                                               // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorArrayAverage
struct FRigVMFunction_MathVectorArrayAverage : public FRigVMFunction_MathVectorBase
{
public:
	TArray<struct FVector>                       Array;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector                               Average;                                           // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct RigVM.RigVMFunction_NoiseFloat
struct FRigVMFunction_NoiseFloat : public FRigVMFunction_MathBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Speed;                                             // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Frequency;                                         // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Minimum;                                           // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1809[0x4];                                     // Fixing Size Of Struct
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RigVM.RigVMFunction_NoiseDouble
struct FRigVMFunction_NoiseDouble : public FRigVMFunction_MathBase
{
public:
	double                                       Value;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Speed;                                             // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Frequency;                                         // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Minimum;                                           // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Maximum;                                           // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Result;                                            // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Time;                                              // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x88 - 0x8)
// ScriptStruct RigVM.RigVMFunction_NoiseVector
struct FRigVMFunction_NoiseVector : public FRigVMFunction_MathBase
{
public:
	struct FVector                               Position;                                          // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Speed;                                             // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Frequency;                                         // 0x38(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Minimum;                                           // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x58(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Time;                                              // 0x70(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x90 - 0x8)
// ScriptStruct RigVM.RigVMFunction_NoiseVector2
struct FRigVMFunction_NoiseVector2 : public FRigVMFunction_MathBase
{
public:
	struct FVector                               Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Speed;                                             // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Frequency;                                         // 0x38(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Minimum;                                           // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Maximum;                                           // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x60(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Time;                                              // 0x78(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct RigVM.RigVMFunction_RandomFloat
struct FRigVMFunction_RandomFloat : public FRigVMFunction_MathBase
{
public:
	int32                                        Seed;                                              // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Minimum;                                           // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastResult;                                        // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LastSeed;                                          // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BaseSeed;                                          // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeLeft;                                          // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1811[0x4];                                     // Fixing Size Of Struct
};

// 0x50 (0x58 - 0x8)
// ScriptStruct RigVM.RigVMFunction_RandomVector
struct FRigVMFunction_RandomVector : public FRigVMFunction_MathBase
{
public:
	int32                                        Seed;                                              // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Minimum;                                           // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LastResult;                                        // 0x30(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LastSeed;                                          // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BaseSeed;                                          // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeLeft;                                          // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1815[0x4];                                     // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// ScriptStruct RigVM.RigVMMirrorSettings
struct FRigVMMirrorSettings
{
public:
	enum class EAxis                             MirrorAxis;                                        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             AxisToFlip;                                        // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1817[0x6];                                     // Fixing Size After Last Property 
	class FString                                SearchString;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReplaceString;                                     // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMDispatch_CoreBase
struct FRigVMDispatch_CoreBase : public FRigVMDispatchFactory
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMDispatch_ArrayBase
struct FRigVMDispatch_ArrayBase : public FRigVMDispatch_CoreBase
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMDispatch_ArrayBaseMutable
struct FRigVMDispatch_ArrayBaseMutable : public FRigVMDispatch_ArrayBase
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMDispatch_ArrayMake
struct FRigVMDispatch_ArrayMake : public FRigVMDispatch_ArrayBase
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMDispatch_ArrayReset
struct FRigVMDispatch_ArrayReset : public FRigVMDispatch_ArrayBaseMutable
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMDispatch_ArrayGetNum
struct FRigVMDispatch_ArrayGetNum : public FRigVMDispatch_ArrayBase
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMDispatch_ArraySetNum
struct FRigVMDispatch_ArraySetNum : public FRigVMDispatch_ArrayBaseMutable
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMDispatch_ArrayGetAtIndex
struct FRigVMDispatch_ArrayGetAtIndex : public FRigVMDispatch_ArrayBase
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMDispatch_ArraySetAtIndex
struct FRigVMDispatch_ArraySetAtIndex : public FRigVMDispatch_ArrayBaseMutable
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMDispatch_ArrayAdd
struct FRigVMDispatch_ArrayAdd : public FRigVMDispatch_ArraySetAtIndex
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMDispatch_ArrayInsert
struct FRigVMDispatch_ArrayInsert : public FRigVMDispatch_ArraySetAtIndex
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMDispatch_ArrayRemove
struct FRigVMDispatch_ArrayRemove : public FRigVMDispatch_ArrayBaseMutable
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMDispatch_ArrayReverse
struct FRigVMDispatch_ArrayReverse : public FRigVMDispatch_ArrayReset
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMDispatch_ArrayFind
struct FRigVMDispatch_ArrayFind : public FRigVMDispatch_ArrayBase
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMDispatch_ArrayAppend
struct FRigVMDispatch_ArrayAppend : public FRigVMDispatch_ArrayBaseMutable
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMDispatch_ArrayClone
struct FRigVMDispatch_ArrayClone : public FRigVMDispatch_ArrayBase
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMDispatch_ArrayUnion
struct FRigVMDispatch_ArrayUnion : public FRigVMDispatch_ArrayAppend
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMDispatch_ArrayDifference
struct FRigVMDispatch_ArrayDifference : public FRigVMDispatch_ArrayBase
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMDispatch_ArrayIntersection
struct FRigVMDispatch_ArrayIntersection : public FRigVMDispatch_ArrayDifference
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMDispatch_ArrayIterator
struct FRigVMDispatch_ArrayIterator : public FRigVMDispatch_ArrayBaseMutable
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMDispatch_CoreEquals
struct FRigVMDispatch_CoreEquals : public FRigVMDispatch_CoreBase
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMDispatch_CoreNotEquals
struct FRigVMDispatch_CoreNotEquals : public FRigVMDispatch_CoreEquals
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMDispatch_If
struct FRigVMDispatch_If : public FRigVMDispatch_CoreBase
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMDispatch_Print
struct FRigVMDispatch_Print : public FRigVMDispatchFactory
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMDispatch_SelectInt32
struct FRigVMDispatch_SelectInt32 : public FRigVMDispatch_CoreBase
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMDispatch_SwitchInt32
struct FRigVMDispatch_SwitchInt32 : public FRigVMDispatch_CoreBase
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct RigVM.RigVMFunction_ControlFlowBase
struct FRigVMFunction_ControlFlowBase : public FRigVMStruct
{
public:
};

// 0x3E8 (0x3F0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_ControlFlowBranch
struct FRigVMFunction_ControlFlowBranch : public FRigVMFunction_ControlFlowBase
{
public:
	uint8                                        Pad_1827[0x8];                                     // Fixing Size After Last Property 
	struct FRigVMExecuteContext                  ExecuteContext;                                    // 0x10(0xF0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         Condition;                                         // 0x100(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_182A[0xF];                                     // Fixing Size After Last Property 
	struct FRigVMExecuteContext                  TURR;                                              // 0x110(0xF0)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FRigVMExecuteContext                  FLASE;                                             // 0x200(0xF0)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FRigVMExecuteContext                  Completed;                                         // 0x2F0(0xF0)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FName                                  BlockToRun;                                        // 0x3E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_182C[0x8];                                     // Fixing Size Of Struct
};

// 0x0 (0x8 - 0x8)
// ScriptStruct RigVM.RigVMFunction_NameBase
struct FRigVMFunction_NameBase : public FRigVMStruct
{
public:
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_NameConcat
struct FRigVMFunction_NameConcat : public FRigVMFunction_NameBase
{
public:
	class FName                                  A;                                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  B;                                                 // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Result;                                            // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct RigVM.RigVMFunction_NameTruncate
struct FRigVMFunction_NameTruncate : public FRigVMFunction_NameBase
{
public:
	class FName                                  Name;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FromEnd;                                           // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_182F[0x3];                                     // Fixing Size After Last Property 
	class FName                                  Remainder;                                         // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Chopped;                                           // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct RigVM.RigVMFunction_NameReplace
struct FRigVMFunction_NameReplace : public FRigVMFunction_NameBase
{
public:
	class FName                                  Name;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Old;                                               // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  New;                                               // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Result;                                            // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_EndsWith
struct FRigVMFunction_EndsWith : public FRigVMFunction_NameBase
{
public:
	class FName                                  Name;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Ending;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1834[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_StartsWith
struct FRigVMFunction_StartsWith : public FRigVMFunction_NameBase
{
public:
	class FName                                  Name;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Start;                                             // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1835[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_Contains
struct FRigVMFunction_Contains : public FRigVMFunction_NameBase
{
public:
	class FName                                  Name;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Search;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1836[0x7];                                     // Fixing Size Of Struct
};

// 0x0 (0x8 - 0x8)
// ScriptStruct RigVM.RigVMFunction_StringBase
struct FRigVMFunction_StringBase : public FRigVMStruct
{
public:
};

// 0x30 (0x38 - 0x8)
// ScriptStruct RigVM.RigVMFunction_StringConcat
struct FRigVMFunction_StringConcat : public FRigVMFunction_StringBase
{
public:
	class FString                                A;                                                 // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                B;                                                 // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Result;                                            // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RigVM.RigVMFunction_StringTruncate
struct FRigVMFunction_StringTruncate : public FRigVMFunction_StringBase
{
public:
	class FString                                Name;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FromEnd;                                           // 0x1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_183A[0x3];                                     // Fixing Size After Last Property 
	class FString                                Remainder;                                         // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Chopped;                                           // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct RigVM.RigVMFunction_StringReplace
struct FRigVMFunction_StringReplace : public FRigVMFunction_StringBase
{
public:
	class FString                                Name;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Old;                                               // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                New;                                               // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Result;                                            // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct RigVM.RigVMFunction_StringEndsWith
struct FRigVMFunction_StringEndsWith : public FRigVMFunction_StringBase
{
public:
	class FString                                Name;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Ending;                                            // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_183D[0x7];                                     // Fixing Size Of Struct
};

// 0x28 (0x30 - 0x8)
// ScriptStruct RigVM.RigVMFunction_StringStartsWith
struct FRigVMFunction_StringStartsWith : public FRigVMFunction_StringBase
{
public:
	class FString                                Name;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Start;                                             // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1840[0x7];                                     // Fixing Size Of Struct
};

// 0x28 (0x30 - 0x8)
// ScriptStruct RigVM.RigVMFunction_StringContains
struct FRigVMFunction_StringContains : public FRigVMFunction_StringBase
{
public:
	class FString                                Name;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Search;                                            // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1844[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_StringLength
struct FRigVMFunction_StringLength : public FRigVMFunction_StringBase
{
public:
	class FString                                Value;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Length;                                            // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1846[0x4];                                     // Fixing Size Of Struct
};

// 0x20 (0x28 - 0x8)
// ScriptStruct RigVM.RigVMFunction_StringTrimWhitespace
struct FRigVMFunction_StringTrimWhitespace : public FRigVMFunction_StringBase
{
public:
	class FString                                Value;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Result;                                            // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct RigVM.RigVMFunction_StringToUppercase
struct FRigVMFunction_StringToUppercase : public FRigVMFunction_StringBase
{
public:
	class FString                                Value;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Result;                                            // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct RigVM.RigVMFunction_StringToLowercase
struct FRigVMFunction_StringToLowercase : public FRigVMFunction_StringBase
{
public:
	class FString                                Value;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Result;                                            // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct RigVM.RigVMFunction_StringReverse
struct FRigVMFunction_StringReverse : public FRigVMFunction_StringBase
{
public:
	class FString                                Value;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Reverse;                                           // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct RigVM.RigVMFunction_StringLeft
struct FRigVMFunction_StringLeft : public FRigVMFunction_StringBase
{
public:
	class FString                                Value;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_184F[0x4];                                     // Fixing Size After Last Property 
	class FString                                Result;                                            // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct RigVM.RigVMFunction_StringRight
struct FRigVMFunction_StringRight : public FRigVMFunction_StringBase
{
public:
	class FString                                Value;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1850[0x4];                                     // Fixing Size After Last Property 
	class FString                                Result;                                            // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct RigVM.RigVMFunction_StringMiddle
struct FRigVMFunction_StringMiddle : public FRigVMFunction_StringBase
{
public:
	class FString                                Value;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Start;                                             // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Result;                                            // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct RigVM.RigVMFunction_StringFind
struct FRigVMFunction_StringFind : public FRigVMFunction_StringBase
{
public:
	class FString                                Value;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Search;                                            // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Found;                                             // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1856[0x3];                                     // Fixing Size After Last Property 
	int32                                        Index;                                             // 0x2C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct RigVM.RigVMFunction_StringSplit
struct FRigVMFunction_StringSplit : public FRigVMFunction_StringBase
{
public:
	class FString                                Value;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Separator;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Result;                                            // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct RigVM.RigVMFunction_StringJoin
struct FRigVMFunction_StringJoin : public FRigVMFunction_StringBase
{
public:
	TArray<class FString>                        Values;                                            // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                Separator;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Result;                                            // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_StringPadInteger
struct FRigVMFunction_StringPadInteger : public FRigVMFunction_StringBase
{
public:
	int32                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Digits;                                            // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Result;                                            // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigDispatch_ToString
struct FRigDispatch_ToString : public FRigVMDispatchFactory
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigDispatch_FromString
struct FRigDispatch_FromString : public FRigVMDispatchFactory
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct RigVM.RigVMFunction_AccumulateBase
struct FRigVMFunction_AccumulateBase : public FRigVMFunction_SimBase
{
public:
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_AccumulateFloatAdd
struct FRigVMFunction_AccumulateFloatAdd : public FRigVMFunction_AccumulateBase
{
public:
	float                                        Increment;                                         // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InitialValue;                                      // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIntegrateDeltaTime;                               // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1863[0x3];                                     // Fixing Size After Last Property 
	float                                        Result;                                            // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccumulatedValue;                                  // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInitialized;                                    // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1864[0x3];                                     // Fixing Size Of Struct
};

// 0x70 (0x78 - 0x8)
// ScriptStruct RigVM.RigVMFunction_AccumulateVectorAdd
struct FRigVMFunction_AccumulateVectorAdd : public FRigVMFunction_AccumulateBase
{
public:
	struct FVector                               Increment;                                         // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InitialValue;                                      // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIntegrateDeltaTime;                               // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1865[0x7];                                     // Fixing Size After Last Property 
	struct FVector                               Result;                                            // 0x40(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AccumulatedValue;                                  // 0x58(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInitialized;                                    // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1866[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_AccumulateFloatMul
struct FRigVMFunction_AccumulateFloatMul : public FRigVMFunction_AccumulateBase
{
public:
	float                                        Multiplier;                                        // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InitialValue;                                      // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIntegrateDeltaTime;                               // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1868[0x3];                                     // Fixing Size After Last Property 
	float                                        Result;                                            // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccumulatedValue;                                  // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInitialized;                                    // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1869[0x3];                                     // Fixing Size Of Struct
};

// 0x70 (0x78 - 0x8)
// ScriptStruct RigVM.RigVMFunction_AccumulateVectorMul
struct FRigVMFunction_AccumulateVectorMul : public FRigVMFunction_AccumulateBase
{
public:
	struct FVector                               Multiplier;                                        // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InitialValue;                                      // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIntegrateDeltaTime;                               // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_186A[0x7];                                     // Fixing Size After Last Property 
	struct FVector                               Result;                                            // 0x40(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AccumulatedValue;                                  // 0x58(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInitialized;                                    // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_186B[0x7];                                     // Fixing Size Of Struct
};

// 0xA8 (0xB0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_AccumulateQuatMul
struct FRigVMFunction_AccumulateQuatMul : public FRigVMFunction_AccumulateBase
{
public:
	uint8                                        Pad_186D[0x8];                                     // Fixing Size After Last Property 
	struct FQuat                                 Multiplier;                                        // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 InitialValue;                                      // 0x30(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFlipOrder;                                        // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIntegrateDeltaTime;                               // 0x51(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_186F[0xE];                                     // Fixing Size After Last Property 
	struct FQuat                                 Result;                                            // 0x60(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 AccumulatedValue;                                  // 0x80(0x20)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInitialized;                                    // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1871[0xF];                                     // Fixing Size Of Struct
};

// 0x1A8 (0x1B0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_AccumulateTransformMul
struct FRigVMFunction_AccumulateTransformMul : public FRigVMFunction_AccumulateBase
{
public:
	uint8                                        Pad_1874[0x8];                                     // Fixing Size After Last Property 
	struct FTransform                            Multiplier;                                        // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            InitialValue;                                      // 0x70(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFlipOrder;                                        // 0xD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIntegrateDeltaTime;                               // 0xD1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1876[0xE];                                     // Fixing Size After Last Property 
	struct FTransform                            Result;                                            // 0xE0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            AccumulatedValue;                                  // 0x140(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInitialized;                                    // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1878[0xF];                                     // Fixing Size Of Struct
};

// 0x20 (0x28 - 0x8)
// ScriptStruct RigVM.RigVMFunction_AccumulateFloatLerp
struct FRigVMFunction_AccumulateFloatLerp : public FRigVMFunction_AccumulateBase
{
public:
	float                                        TargetValue;                                       // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InitialValue;                                      // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Blend;                                             // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIntegrateDeltaTime;                               // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1879[0x3];                                     // Fixing Size After Last Property 
	float                                        Result;                                            // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccumulatedValue;                                  // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInitialized;                                    // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_187B[0x7];                                     // Fixing Size Of Struct
};

// 0x70 (0x78 - 0x8)
// ScriptStruct RigVM.RigVMFunction_AccumulateVectorLerp
struct FRigVMFunction_AccumulateVectorLerp : public FRigVMFunction_AccumulateBase
{
public:
	struct FVector                               TargetValue;                                       // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InitialValue;                                      // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Blend;                                             // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIntegrateDeltaTime;                               // 0x3C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_187D[0x3];                                     // Fixing Size After Last Property 
	struct FVector                               Result;                                            // 0x40(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AccumulatedValue;                                  // 0x58(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInitialized;                                    // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_187F[0x7];                                     // Fixing Size Of Struct
};

// 0xA8 (0xB0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_AccumulateQuatLerp
struct FRigVMFunction_AccumulateQuatLerp : public FRigVMFunction_AccumulateBase
{
public:
	uint8                                        Pad_1880[0x8];                                     // Fixing Size After Last Property 
	struct FQuat                                 TargetValue;                                       // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 InitialValue;                                      // 0x30(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Blend;                                             // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIntegrateDeltaTime;                               // 0x54(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1882[0xB];                                     // Fixing Size After Last Property 
	struct FQuat                                 Result;                                            // 0x60(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 AccumulatedValue;                                  // 0x80(0x20)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInitialized;                                    // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1884[0xF];                                     // Fixing Size Of Struct
};

// 0x1A8 (0x1B0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_AccumulateTransformLerp
struct FRigVMFunction_AccumulateTransformLerp : public FRigVMFunction_AccumulateBase
{
public:
	uint8                                        Pad_1886[0x8];                                     // Fixing Size After Last Property 
	struct FTransform                            TargetValue;                                       // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            InitialValue;                                      // 0x70(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Blend;                                             // 0xD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIntegrateDeltaTime;                               // 0xD4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1887[0xB];                                     // Fixing Size After Last Property 
	struct FTransform                            Result;                                            // 0xE0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            AccumulatedValue;                                  // 0x140(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInitialized;                                    // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1888[0xF];                                     // Fixing Size Of Struct
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_AccumulateFloatRange
struct FRigVMFunction_AccumulateFloatRange : public FRigVMFunction_AccumulateBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Minimum;                                           // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccumulatedMinimum;                                // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccumulatedMaximum;                                // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInitialized;                                    // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_188B[0x3];                                     // Fixing Size Of Struct
};

// 0x80 (0x88 - 0x8)
// ScriptStruct RigVM.RigVMFunction_AccumulateVectorRange
struct FRigVMFunction_AccumulateVectorRange : public FRigVMFunction_AccumulateBase
{
public:
	struct FVector                               Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Minimum;                                           // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Maximum;                                           // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AccumulatedMinimum;                                // 0x50(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AccumulatedMaximum;                                // 0x68(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInitialized;                                    // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_188D[0x7];                                     // Fixing Size Of Struct
};

// 0x70 (0x78 - 0x8)
// ScriptStruct RigVM.RigVMFunction_AlphaInterp
struct FRigVMFunction_AlphaInterp : public FRigVMFunction_SimBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Bias;                                              // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMapRange;                                         // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1890[0x3];                                     // Fixing Size After Last Property 
	struct FInputRange                           InRange;                                           // 0x18(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FInputRange                           OutRange;                                          // 0x20(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bClampResult;                                      // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1891[0x3];                                     // Fixing Size After Last Property 
	float                                        ClampMin;                                          // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClampMax;                                          // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInterpResult;                                     // 0x34(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1892[0x3];                                     // Fixing Size After Last Property 
	float                                        InterpSpeedIncreasing;                             // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterpSpeedDecreasing;                             // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x40(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                  ScaleBiasClamp;                                    // 0x44(0x30)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1893[0x4];                                     // Fixing Size Of Struct
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_AlphaInterpVector
struct FRigVMFunction_AlphaInterpVector : public FRigVMFunction_SimBase
{
public:
	struct FVector                               Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Bias;                                              // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMapRange;                                         // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1896[0x3];                                     // Fixing Size After Last Property 
	struct FInputRange                           InRange;                                           // 0x2C(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FInputRange                           OutRange;                                          // 0x34(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bClampResult;                                      // 0x3C(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1898[0x3];                                     // Fixing Size After Last Property 
	float                                        ClampMin;                                          // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClampMax;                                          // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInterpResult;                                     // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_189A[0x3];                                     // Fixing Size After Last Property 
	float                                        InterpSpeedIncreasing;                             // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterpSpeedDecreasing;                             // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_189C[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               Result;                                            // 0x58(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                  ScaleBiasClamp;                                    // 0x70(0x30)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0xB8 (0xC0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_AlphaInterpQuat
struct FRigVMFunction_AlphaInterpQuat : public FRigVMFunction_SimBase
{
public:
	uint8                                        Pad_18A1[0x8];                                     // Fixing Size After Last Property 
	struct FQuat                                 Value;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Bias;                                              // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMapRange;                                         // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18A3[0x3];                                     // Fixing Size After Last Property 
	struct FInputRange                           InRange;                                           // 0x3C(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FInputRange                           OutRange;                                          // 0x44(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bClampResult;                                      // 0x4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18A5[0x3];                                     // Fixing Size After Last Property 
	float                                        ClampMin;                                          // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClampMax;                                          // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInterpResult;                                     // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18A7[0x3];                                     // Fixing Size After Last Property 
	float                                        InterpSpeedIncreasing;                             // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterpSpeedDecreasing;                             // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18A9[0xC];                                     // Fixing Size After Last Property 
	struct FQuat                                 Result;                                            // 0x70(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                  ScaleBiasClamp;                                    // 0x90(0x30)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_DeltaFromPreviousFloat
struct FRigVMFunction_DeltaFromPreviousFloat : public FRigVMFunction_SimBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Delta;                                             // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PreviousValue;                                     // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Cache;                                             // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInitialized;                                    // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18AA[0x7];                                     // Fixing Size Of Struct
};

// 0x68 (0x70 - 0x8)
// ScriptStruct RigVM.RigVMFunction_DeltaFromPreviousVector
struct FRigVMFunction_DeltaFromPreviousVector : public FRigVMFunction_SimBase
{
public:
	struct FVector                               Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Delta;                                             // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PreviousValue;                                     // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Cache;                                             // 0x50(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInitialized;                                    // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18AC[0x7];                                     // Fixing Size Of Struct
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_DeltaFromPreviousQuat
struct FRigVMFunction_DeltaFromPreviousQuat : public FRigVMFunction_SimBase
{
public:
	uint8                                        Pad_18AE[0x8];                                     // Fixing Size After Last Property 
	struct FQuat                                 Value;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 Delta;                                             // 0x30(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 PreviousValue;                                     // 0x50(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 Cache;                                             // 0x70(0x20)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInitialized;                                    // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18B0[0xF];                                     // Fixing Size Of Struct
};

// 0x198 (0x1A0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_DeltaFromPreviousTransform
struct FRigVMFunction_DeltaFromPreviousTransform : public FRigVMFunction_SimBase
{
public:
	uint8                                        Pad_18B2[0x8];                                     // Fixing Size After Last Property 
	struct FTransform                            Value;                                             // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Delta;                                             // 0x70(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            PreviousValue;                                     // 0xD0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Cache;                                             // 0x130(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInitialized;                                    // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18B4[0xF];                                     // Fixing Size Of Struct
};

// 0x28 (0x30 - 0x8)
// ScriptStruct RigVM.RigVMFunction_KalmanFloat
struct FRigVMFunction_KalmanFloat : public FRigVMFunction_SimBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BufferSize;                                        // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18B8[0x4];                                     // Fixing Size After Last Property 
	TArray<float>                                Buffer;                                            // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        LastInsertIndex;                                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18B9[0x4];                                     // Fixing Size Of Struct
};

// 0x50 (0x58 - 0x8)
// ScriptStruct RigVM.RigVMFunction_KalmanVector
struct FRigVMFunction_KalmanVector : public FRigVMFunction_SimBase
{
public:
	struct FVector                               Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BufferSize;                                        // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18BB[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               Result;                                            // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       Buffer;                                            // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        LastInsertIndex;                                   // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18BD[0x4];                                     // Fixing Size Of Struct
};

// 0xF8 (0x100 - 0x8)
// ScriptStruct RigVM.RigVMFunction_KalmanTransform
struct FRigVMFunction_KalmanTransform : public FRigVMFunction_SimBase
{
public:
	uint8                                        Pad_18C5[0x8];                                     // Fixing Size After Last Property 
	struct FTransform                            Value;                                             // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BufferSize;                                        // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18C6[0xC];                                     // Fixing Size After Last Property 
	struct FTransform                            Result;                                            // 0x80(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    Buffer;                                            // 0xE0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        LastInsertIndex;                                   // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18C7[0xC];                                     // Fixing Size Of Struct
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_Timeline
struct FRigVMFunction_Timeline : public FRigVMFunction_SimBase
{
public:
	float                                        Speed;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccumulatedValue;                                  // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInitialized;                                    // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18CC[0x3];                                     // Fixing Size Of Struct
};

// 0x30 (0x38 - 0x8)
// ScriptStruct RigVM.RigVMFunction_TimeLoop
struct FRigVMFunction_TimeLoop : public FRigVMFunction_SimBase
{
public:
	float                                        Speed;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Normalize;                                         // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18CE[0x3];                                     // Fixing Size After Last Property 
	float                                        Absolute;                                          // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Relative;                                          // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FlipFlop;                                          // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Even;                                              // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18D1[0x3];                                     // Fixing Size After Last Property 
	float                                        AccumulatedAbsolute;                               // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccumulatedRelative;                               // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumIterations;                                     // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInitialized;                                    // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18D2[0x7];                                     // Fixing Size Of Struct
};

// 0x40 (0x48 - 0x8)
// ScriptStruct RigVM.RigVMFunction_TimeOffsetFloat
struct FRigVMFunction_TimeOffsetFloat : public FRigVMFunction_SimBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SecondsAgo;                                        // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BufferSize;                                        // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeRange;                                         // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18D5[0x4];                                     // Fixing Size After Last Property 
	TArray<float>                                Buffer;                                            // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                DeltaTimes;                                        // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        LastInsertIndex;                                   // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UpperBound;                                        // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x70 - 0x8)
// ScriptStruct RigVM.RigVMFunction_TimeOffsetVector
struct FRigVMFunction_TimeOffsetVector : public FRigVMFunction_SimBase
{
public:
	struct FVector                               Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SecondsAgo;                                        // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BufferSize;                                        // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeRange;                                         // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18DB[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               Result;                                            // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       Buffer;                                            // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                DeltaTimes;                                        // 0x58(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        LastInsertIndex;                                   // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UpperBound;                                        // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x108 (0x110 - 0x8)
// ScriptStruct RigVM.RigVMFunction_TimeOffsetTransform
struct FRigVMFunction_TimeOffsetTransform : public FRigVMFunction_SimBase
{
public:
	uint8                                        Pad_18DE[0x8];                                     // Fixing Size After Last Property 
	struct FTransform                            Value;                                             // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SecondsAgo;                                        // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BufferSize;                                        // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeRange;                                         // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18E1[0x4];                                     // Fixing Size After Last Property 
	struct FTransform                            Result;                                            // 0x80(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    Buffer;                                            // 0xE0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                DeltaTimes;                                        // 0xF0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        LastInsertIndex;                                   // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UpperBound;                                        // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18E2[0x8];                                     // Fixing Size Of Struct
};

// 0xD0 (0xD8 - 0x8)
// ScriptStruct RigVM.RigVMFunction_VerletIntegrateVector
struct FRigVMFunction_VerletIntegrateVector : public FRigVMFunction_SimBase
{
public:
	struct FVector                               Target;                                            // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Strength;                                          // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damp;                                              // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Blend;                                             // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18E6[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               Force;                                             // 0x30(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Position;                                          // 0x48(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Velocity;                                          // 0x60(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Acceleration;                                      // 0x78(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigVMSimPoint                        Point;                                             // 0x90(0x40)(Transient, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bInitialized;                                      // 0xD0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18E7[0x7];                                     // Fixing Size Of Struct
};

}


