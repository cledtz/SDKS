#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EFortMantisTechniqueActivationInputType : uint8
{
	None                           = 0,
	Primary                        = 1,
	Secondary                      = 2,
	Max_Invalid                    = 3,
	EFortMantisTechniqueActivationInputType_MAX = 4,
};

enum class EFortMantisTechniqueActivationTimingType : uint8
{
	None                           = 0,
	Pressed                        = 1,
	Released                       = 2,
	EFortMantisTechniqueActivationTimingType_MAX = 3,
};

enum class EFortMantisTechniqueAnimationType : uint8
{
	SingleMontage                  = 0,
	DynamicMontage                 = 1,
	AnimInstance                   = 2,
	EFortMantisTechniqueAnimationType_MAX = 3,
};

enum class EFortMantisTechniqueRootMotionType : uint8
{
	None                           = 0,
	ExtractFromMontageAndWarp      = 1,
	EFortMantisTechniqueRootMotionType_MAX = 2,
};

enum class EFortMantisNotifyEvent : uint8
{
	Invalid                        = 0,
	Branch                         = 1,
	EndTechnique                   = 2,
	EFortMantisNotifyEvent_MAX     = 3,
};

enum class EFortMantisNotifyWindow : uint8
{
	Invalid                        = 0,
	Input                          = 1,
	Execution                      = 2,
	Damage                         = 3,
	RootMotionWarp                 = 4,
	EFortMantisNotifyWindow_MAX    = 5,
};

enum class EFortMantisNotifyRotationWarpRateRule : uint8
{
	Snap                           = 0,
	WindowDurationLerp             = 1,
	EFortMantisNotifyRotationWarpRateRule_MAX = 2,
};

enum class EFortMantisBranchRule : uint8
{
	Off                            = 0,
	Any                            = 1,
	Starter                        = 2,
	EFortMantisBranchRule_MAX      = 3,
};

enum class EFortMantisBranchPath : uint8
{
	Default                        = 0,
	Path_1                         = 1,
	Path_2                         = 2,
	Path_3                         = 3,
	Path_4                         = 4,
	Path_5                         = 5,
	Blocked                        = 6,
	EFortMantisBranchPath_MAX      = 7,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x140 (0x140 - 0x0)
// ScriptStruct MantisRuntime.FortMantisTechniqueMetadata
struct FFortMantisTechniqueMetadata
{
public:
	TMap<struct FGameplayTag, int32>             IntValues;                                         // 0x0(0x50)(BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, float>             FloatValues;                                       // 0x50(0x50)(BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, struct FVector>    VectorValues;                                      // 0xA0(0x50)(BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, class FString>     StringValues;                                      // 0xF0(0x50)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MantisRuntime.FortMantisRootMotionWarpInfo
struct FFortMantisRootMotionWarpInfo
{
public:
	TWeakObjectPtr<class UActor>                 WarpTarget;                                        // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector_NetQuantize                   LastValidWarpTargetLocation;                       // 0x8(0x18)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_21E : 1;                                    // Fixing Bit-Field Size
	uint8                                        bAllowTranslationWarp : 1;                         // Mask: 0x2, PropSize: 0x10x20(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bAllowRotationWarp : 1;                            // Mask: 0x4, PropSize: 0x10x20(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bSnapshotTargetLocation : 1;                       // Mask: 0x8, PropSize: 0x10x20(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D99[0x7];                                     // Fixing Size Of Struct
};

// 0x88 (0x160 - 0xD8)
// ScriptStruct MantisRuntime.FortRootMotionSource_Mantis
struct FFortRootMotionSource_Mantis : public FRootMotionSource
{
public:
	float                                        CurrentTechniqueTime;                              // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D9A[0x4];                                     // Fixing Size After Last Property
	class UAnimMontage*                          TechniqueMontage;                                  // 0xE0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortMantisRootMotionWarpInfo         WarpInfo;                                          // 0xE8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               LatestRepMovementLocation;                         // 0x110(0x18)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D9B[0x38];                                    // Fixing Size Of Struct
};

// 0x178 (0x180 - 0x8)
// ScriptStruct MantisRuntime.FortMantisTargetData
struct FFortMantisTargetData : public FGameplayAbilityTargetData
{
public:
	struct FFortMantisRootMotionWarpInfo         TechniqueWarpInfo;                                 // 0x8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	int32                                        TechniqueDataIndex;                                // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLockedOn;                                       // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D9E[0x3];                                     // Fixing Size After Last Property
	class FName                                  DynamicMontageName;                                // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D9F[0x4];                                     // Fixing Size After Last Property
	struct FFortMantisTechniqueMetadata          TechniqueMetadata;                                 // 0x40(0x140)(NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MantisRuntime.FortMantisTechniqueCharacterSettings
struct FFortMantisTechniqueCharacterSettings
{
public:
	bool                                         bDetachCharacterRotationFromCamera;                // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DA0[0x3];                                     // Fixing Size After Last Property
	float                                        ReattachCharacterRotationBlendTime;                // 0x4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReattachCharacterRotationBlendExponent;            // 0x8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WindupCharacterRotationRate;                       // 0xC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExecutionCharacterRotationRate;                    // 0x10(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RecoveryCharacterRotationRate;                     // 0x14(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x150 (0x150 - 0x0)
// ScriptStruct MantisRuntime.FortMantisTechniqueData
struct FFortMantisTechniqueData
{
public:
	class FName                                  Name;                                              // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStartsSequence;                                   // 0x4(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEndsSequence;                                     // 0x5(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DA2[0x2];                                     // Fixing Size After Last Property
	int32                                        MaxConsecutiveBranchesToSelf;                      // 0x8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortMantisTechniqueAnimationType AnimationType;                                     // 0xC(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DA5[0x3];                                     // Fixing Size After Last Property
	class UAnimMontage*                          Montage;                                           // 0x10(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, class UAnimMontage*>       DynamicMontages;                                   // 0x18(0x50)(Edit, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	class FName                                  DefaultDynamicMontageName;                         // 0x68(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortMantisTechniqueRootMotionType RootMotionType;                                    // 0x6C(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DAD[0x3];                                     // Fixing Size After Last Property
	float                                        InputWindowDelay;                                  // 0x70(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortMantisTechniqueActivationInputType ActivationInputType;                               // 0x74(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortMantisTechniqueActivationTimingType ActivationTimingType;                              // 0x75(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DB0[0x2];                                     // Fixing Size After Last Property
	float                                        MinInputHoldDuration;                              // 0x78(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxInputHoldDuration;                              // 0x7C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 ActivationGameplayCues;                            // 0x80(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                     ActivationTagQuery;                                // 0xA0(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                     OngoingTagQuery;                                   // 0xE8(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ActivationApplicationTag;                          // 0x130(0x4)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          DamageApplicationTag;                              // 0x134(0x4)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortMantisTechniqueCharacterSettings CharacterSettings;                                 // 0x138(0x18)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct MantisRuntime.FortMantisTechniqueBranch
struct FFortMantisTechniqueBranch
{
public:
	class FName                                  FromTechnique;                                     // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ToTechnique;                                       // 0x4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortMantisBranchPath             BranchPath;                                        // 0x8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DB6[0x3];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MantisRuntime.FortMantisMontageData
struct FFortMantisMontageData
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DB8[0x10];                                    // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MantisRuntime.FortMantisReplicatedAnimInstanceInfo
struct FFortMantisReplicatedAnimInstanceInfo
{
public:
	bool                                         bIsTechniqueActive;                                // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DBE[0x3];                                     // Fixing Size After Last Property
	class FName                                  ActiveTechniqueName;                               // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ActiveTechniqueIndex;                              // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ActiveTechniqueConsecutiveBranchesToSelf;          // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct MantisRuntime.FortMantisRootMotionWarpInfoNetSerializerConfig
struct FFortMantisRootMotionWarpInfoNetSerializerConfig : public FNetSerializerConfig
{
public:
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
