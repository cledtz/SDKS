#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EArchetype : uint8
{
	Asian                          = 0,
	Black                          = 1,
	Caucasian                      = 2,
	Hispanic                       = 3,
	Alien                          = 4,
	Other                          = 5,
	EArchetype_MAX                 = 6,
};

enum class EGender : uint8
{
	Male                           = 0,
	Female                         = 1,
	Other                          = 2,
	EGender_MAX                    = 3,
};

enum class ETranslationUnit : uint8
{
	CM                             = 0,
	M                              = 1,
	ETranslationUnit_MAX           = 2,
};

enum class ERotationUnit : uint8
{
	Degrees                        = 0,
	Radians                        = 1,
	ERotationUnit_MAX              = 2,
};

enum class EDirection : uint8
{
	Left                           = 0,
	Right                          = 1,
	Up                             = 2,
	Down                           = 3,
	Front                          = 4,
	Back                           = 5,
	EDirection_MAX                 = 6,
};

enum class EDNADataLayer : uint8
{
	None                           = 0,
	Descriptor                     = 1,
	Definition                     = 3,
	Behavior                       = 7,
	Geometry                       = 11,
	GeometryWithoutBlendShapes     = 19,
	MachineLearnedBehavior         = 35,
	All                            = 47,
	EDNADataLayer_MAX              = 48,
};

enum class EActivationFunction : uint8
{
	Linear                         = 0,
	ReLU                           = 1,
	LeakyReLU                      = 2,
	Tanh                           = 3,
	Sigmoid                        = 4,
	EActivationFunction_MAX        = 5,
};

enum class ERigLogicCalculationType : uint8
{
	Scalar                         = 0,
	SSE                            = 1,
	AVX                            = 2,
	ERigLogicCalculationType_MAX   = 3,
};

enum class ELodUpdateOption : uint8
{
	LOD0Only                       = 0,
	LOD1AndHigher                  = 1,
	All                            = 2,
	ELodUpdateOption_MAX           = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x3 (0x3 - 0x0)
// ScriptStruct RigLogicModule.CoordinateSystem
struct FCoordinateSystem
{
public:
	enum class EDirection                        XAxis;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDirection                        YAxis;                                             // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDirection                        ZAxis;                                             // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct RigLogicModule.MeshBlendShapeChannelMapping
struct FMeshBlendShapeChannelMapping
{
public:
	int32                                        MeshIndex;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BlendShapeChannelIndex;                            // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct RigLogicModule.TextureCoordinate
struct FTextureCoordinate
{
public:
	float                                        U;                                                 // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        V;                                                 // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct RigLogicModule.VertexLayout
struct FVertexLayout
{
public:
	int32                                        Position;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TextureCoordinate;                                 // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Normal;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x58 - 0x10)
// ScriptStruct RigLogicModule.AnimNode_RigLogic
struct FAnimNode_RigLogic : public FAnimNode_Base
{
public:
	struct FPoseLink                             AnimSequence;                                      // 0x10(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FE6[0x38];                                    // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct RigLogicModule.RigUnit_RigLogic_IntArray
struct FRigUnit_RigLogic_IntArray
{
public:
	TArray<int32>                                Values;                                            // 0x0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct RigLogicModule.RigUnit_RigLogic_Data
struct FRigUnit_RigLogic_Data
{
public:
	TWeakObjectPtr<class USkeletalMeshComponent> SkelMeshComponent;                                 // 0x0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FE8[0x18];                                    // Fixing Size After Last Property
	TArray<int32>                                InputCurveIndices;                                 // 0x20(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<int32>                                HierarchyBoneIndices;                              // 0x30(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FRigUnit_RigLogic_IntArray>    MorphTargetCurveIndices;                           // 0x40(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FRigUnit_RigLogic_IntArray>    BlendShapeIndices;                                 // 0x50(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FRigUnit_RigLogic_IntArray>    CurveElementIndicesForAnimMaps;                    // 0x60(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FRigUnit_RigLogic_IntArray>    RigLogicIndicesForAnimMaps;                        // 0x70(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint32                                       CurrentLOD;                                        // 0x80(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FE9[0x4];                                     // Fixing Size Of Struct
};

// 0x90 (0x1F0 - 0x160)
// ScriptStruct RigLogicModule.RigUnit_RigLogic
struct FRigUnit_RigLogic : public FRigUnitMutable
{
public:
	struct FRigUnit_RigLogic_Data                Data;                                              // 0x160(0x88)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	bool                                         bIsInitialized;                                    // 0x1E8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1FEA[0x7];                                     // Fixing Size Of Struct
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
