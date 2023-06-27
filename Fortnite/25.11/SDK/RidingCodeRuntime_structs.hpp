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

enum class ERidingControlInputStyle : uint8
{
	SteeringControl                = 0,
	DirectControl                  = 1,
	ERidingControlInputStyle_MAX   = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// ScriptStruct RidingCodeRuntime.RidingControlInputStateReliable
struct FRidingControlInputStateReliable
{
public:
	uint8                                        bIsJumping : 1;                                    // Mask: 0x1, PropSize: 0x10x0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsUsingAbility : 1;                               // Mask: 0x2, PropSize: 0x10x0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsPetting : 1;                                    // Mask: 0x4, PropSize: 0x10x0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct RidingCodeRuntime.RidingControlInputStateUnreliable
struct FRidingControlInputStateUnreliable
{
public:
	uint8                                        RightAlphaQuantized;                               // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ForwardAlphaQuantized;                             // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct RidingCodeRuntime.RidingControlInputState
struct FRidingControlInputState
{
public:
	float                                        RightAlpha;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ForwardAlpha;                                      // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsJumping : 1;                                    // Mask: 0x1, PropSize: 0x10x8(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_41D : 1;                                    // Fixing Bit-Field Size..
	uint8                                        bIsUsingAbility : 1;                               // Mask: 0x4, PropSize: 0x10x8(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_41E : 1;                                    // Fixing Bit-Field Size..
	uint8                                        bIsPetting : 1;                                    // Mask: 0x10, PropSize: 0x10x8(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D86[0x3];                                     // Fixing Size Of Struct..
};

// 0x20 (0x28 - 0x8)
// ScriptStruct RidingCodeRuntime.RidingPlaylistBlacklistTableRow
struct FRidingPlaylistBlacklistTableRow : public FTableRowBase
{
public:
	struct FGameplayTagContainer                 PlaylistTags;                                      // 0x8(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct RidingCodeRuntime.PrimaryFireAnimMontageAnimCoreTypeOverride
struct FPrimaryFireAnimMontageAnimCoreTypeOverride
{
public:
	enum class EFortWeaponCoreAnimation          CoreTypeToOverride;                                // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D87[0x7];                                     // Fixing Size After Last Property..
	struct FFortGameplayAbilityMontageInfo       OverridingMontageInfo;                             // 0x8(0x58)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct RidingCodeRuntime.PrimaryFireAnimMontageTagOverride
struct FPrimaryFireAnimMontageTagOverride
{
public:
	struct FGameplayTag                          TagOverride;                                       // 0x0(0x4)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D88[0x4];                                     // Fixing Size After Last Property..
	struct FFortGameplayAbilityMontageInfo       OverridingMontageInfo;                             // 0x8(0x58)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct RidingCodeRuntime.RidingAttachmentBoundsOverride
struct FRidingAttachmentBoundsOverride
{
public:
	bool                                         bUseOverride;                                      // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D89[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               AttachSoftBounds;                                  // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AttachHardBounds;                                  // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x110 (0x110 - 0x0)
// ScriptStruct RidingCodeRuntime.RidingPettingData
struct FRidingPettingData
{
public:
	bool                                         bIsPettableCreature;                               // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D8A[0x7];                                     // Fixing Size After Last Property..
	struct FFortGameplayAbilityMontageInfo       RiderMalePettingMontageInfo;                       // 0x8(0x58)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FFortGameplayAbilityMontageInfo       RiderFemalePettingMontageInfo;                     // 0x60(0x58)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FFortGameplayAbilityMontageInfo       RidablePettingMontageInfo;                         // 0xB8(0x58)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct RidingCodeRuntime.RiderDismountLaunchVelocity
struct FRiderDismountLaunchVelocity
{
public:
	struct FScalableFloat                        DismountVelocityMultiplier;                        // 0x0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        DismountVelocityBaseForwardVelocity;               // 0x28(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        DismountVelocityBaseRightVelocity;                 // 0x50(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        DismountVelocityBaseUpVelocity;                    // 0x78(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bApplyDismountVelocityMultiplierToZVelocity;       // 0xA0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D8B[0x7];                                     // Fixing Size Of Struct..
};

// 0x58 (0x58 - 0x0)
// ScriptStruct RidingCodeRuntime.RidingAnalyticsData_Base
struct FRidingAnalyticsData_Base
{
public:
	uint8                                        Pad_7D8C[0x8];                                     // Fixing Size After Last Property..
	TSoftObjectPtr<class URiderComponent>        Rider;                                             // 0x8(0x28)(ExportObject, InstancedReference, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class URidableComponent>      Ridable;                                           // 0x30(0x28)(ExportObject, InstancedReference, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x58 - 0x58)
// ScriptStruct RidingCodeRuntime.RidingAnalyticsData_Started
struct FRidingAnalyticsData_Started : public FRidingAnalyticsData_Base
{
public:
};

// 0x38 (0x90 - 0x58)
// ScriptStruct RidingCodeRuntime.RidingAnalyticsData_Stopped
struct FRidingAnalyticsData_Stopped : public FRidingAnalyticsData_Base
{
public:
	float                                        TotalRidingTime;                                   // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RiderStartHealth;                                  // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RiderStartShield;                                  // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RiderEndHealth;                                    // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RiderEndShield;                                    // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TotalDistanceTraveled;                             // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        JumpUseCount;                                      // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AbilityUseCount;                                   // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RiderDamageDealt;                                  // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RiderDamageTaken;                                  // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RiderHealingReceived;                              // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RiderShieldGained;                                 // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRidableEliminated : 1;                            // Mask: 0x1, PropSize: 0x10x88(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRidableExhausted : 1;                             // Mask: 0x2, PropSize: 0x10x88(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D8D[0x7];                                     // Fixing Size Of Struct..
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
