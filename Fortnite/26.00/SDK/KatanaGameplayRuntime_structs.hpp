#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EFortKatanaPrimaryAttackVariation : uint8
{
	OnGroundFirst                  = 0,
	OnGroundSecond                 = 1,
	InAir                          = 2,
	EFortKatanaPrimaryAttackVariation_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x98 - 0x0)
// ScriptStruct KatanaGameplayRuntime.FortKatanaPrimaryAttackVariationInfo
struct FFortKatanaPrimaryAttackVariationInfo
{
public:
	struct FScalableFloat                        Range;                                             // 0x0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        OffsetFromTarget;                                  // 0x28(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortAbilityTargetSelectionList       TargetSelectionList;                               // 0x50(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct KatanaGameplayRuntime.FortKatanaDashTargetingInfo
struct FFortKatanaDashTargetingInfo
{
public:
	struct FVector                               DashDirection;                                     // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DashDistance;                                      // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UActor>                 DashBlockingActor;                                 // 0x1C(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWasDashDirectionAdjusted;                         // 0x24(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38DF[0x3];                                     // Fixing Size After Last Property 
	TArray<class UActor*>                        DamagedActors;                                     // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        OutOfRangePercent;                                 // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38E0[0x4];                                     // Fixing Size Of Struct
};

// 0x8 (0x120 - 0x118)
// ScriptStruct KatanaGameplayRuntime.RootMotionSource_KatanaDashForce
struct FRootMotionSource_KatanaDashForce : public FRootMotionSource_MoveToForce
{
public:
	float                                        HeightAboveGround;                                 // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38E1[0x4];                                     // Fixing Size Of Struct
};

}


