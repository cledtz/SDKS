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


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x100 - 0xD8)
// ScriptStruct WindRuntime.RootMotionSource_ConstantWindForce
struct FRootMotionSource_ConstantWindForce : public FRootMotionSource
{
public:
	struct FVector                               Force;                                             // 0xD8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           StrengthOverTime;                                  // 0xF0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7F5C[0x8];                                     // Fixing Size Of Struct..
};

// 0x1F0 (0x1F0 - 0x0)
// ScriptStruct WindRuntime.PhysicsWindSplineAsyncInPersistent
struct FPhysicsWindSplineAsyncInPersistent
{
public:
	uint8                                        Pad_7F5D[0x1F0];                                   // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// ScriptStruct WindRuntime.PhysicsWindSplineAsyncOutContinuous
struct FPhysicsWindSplineAsyncOutContinuous
{
public:
	uint8                                        Pad_7F5E[0x1];                                     // Fixing Size Of Struct..
};

// 0x1C (0x28 - 0xC)
// ScriptStruct WindRuntime.WindSplineTargetDatum
struct FWindSplineTargetDatum : public FFastArraySerializerItem
{
public:
	TWeakObjectPtr<class AActor>                 Target;                                            // 0xC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7F5F[0x14];                                    // Fixing Size Of Struct..
};

// 0xB0 (0x1B8 - 0x108)
// ScriptStruct WindRuntime.WindSplineTargetData
struct FWindSplineTargetData : public FFastArraySerializer
{
public:
	TArray<struct FWindSplineTargetDatum>        Items;                                             // 0x108(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_7F60[0xA0];                                    // Fixing Size Of Struct..
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct WindRuntime.WindSplineForceModifiers
struct FWindSplineForceModifiers
{
public:
	struct FScalableFloat                        ForwardForceMagnitudeMultiplier;                   // 0x0(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FScalableFloat                        ReverseForceMagnitudeMultiplier;                   // 0x28(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FScalableFloat                        InwardForceOuterRadiusAccelerationMultiplier;      // 0x50(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FScalableFloat                        InwardForceInnerRadiusDecelerationMultiplier;      // 0x78(0x28)(Edit, NativeAccessSpecifierPublic)
};

// 0xE8 (0xE8 - 0x0)
// ScriptStruct WindRuntime.WindSplineTagBasedForceModifiers
struct FWindSplineTagBasedForceModifiers
{
public:
	struct FGameplayTagQuery                     Query;                                             // 0x0(0x48)(Edit, NativeAccessSpecifierPublic)
	struct FWindSplineForceModifiers             Modifier;                                          // 0x48(0xA0)(Edit, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct WindRuntime.WindSplineTargetEffects
struct FWindSplineTargetEffects
{
public:
	struct FGameplayTagQuery                     Filter;                                            // 0x0(0x48)(Edit, NativeAccessSpecifierPublic)
	struct FGameplayTag                          Cue;                                               // 0x48(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7F61[0x4];                                     // Fixing Size After Last Property..
	TArray<TSubclassOf<class UGameplayEffect>>   GameplayEffects;                                   // 0x50(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct WindRuntime.WindSplineBlockageID
struct FWindSplineBlockageID
{
public:
	uint32                                       ID;                                                // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct WindRuntime.WindSplineSubDivBlockage
struct FWindSplineSubDivBlockage
{
public:
	int32                                        SubDivIdx;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartSectionLength;                                // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24 (0x30 - 0xC)
// ScriptStruct WindRuntime.WindSplineBlockage
struct FWindSplineBlockage : public FFastArraySerializerItem
{
public:
	struct FWindSplineBlockageID                 ID;                                                // 0xC(0x4)(NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FWindSplineSubDivBlockage>     SubDivBlockages;                                   // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        ActivationTime;                                    // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DeactivationTime;                                  // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7F62[0x8];                                     // Fixing Size Of Struct..
};

// 0x10 (0x118 - 0x108)
// ScriptStruct WindRuntime.WindSplineBlockageArray
struct FWindSplineBlockageArray : public FFastArraySerializer
{
public:
	TArray<struct FWindSplineBlockage>           Items;                                             // 0x108(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct WindRuntime.WindSplineMeshData
struct FWindSplineMeshData
{
public:
	uint8                                        Pad_7F63[0x8];                                     // Fixing Size After Last Property..
	TArray<class UMaterialInstanceDynamic*>      MeshMaterials;                                     // 0x8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
