#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EFortScoutDroneTargetStatus : uint8
{
	None                           = 0,
	TooFar                         = 1,
	Pending                        = 2,
	Confirmed                      = 3,
	EFortScoutDroneTargetStatus_MAX = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// ScriptStruct ScoutDroneRuntime.FortScoutDroneDiveTransitionData
struct FFortScoutDroneDiveTransitionData
{
public:
	class UCurveFloat*                           Curve;                                             // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScalableFloat                        TransitionDuration;                                // 0x8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ScoutDroneRuntime.OnFortScoutDroneDeployed
struct FOnFortScoutDroneDeployed
{
public:
	TWeakObjectPtr<class UFortScoutDrone>        DeployedDrone;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct ScoutDroneRuntime.OnFortScoutDroneDismissed
struct FOnFortScoutDroneDismissed
{
public:
	struct FGameplayTag                          DismissalReason;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ScoutDroneRuntime.OnFortScoutDroneMarkedEnemies
struct FOnFortScoutDroneMarkedEnemies
{
public:
	struct FGameplayTag                          Source;                                            // 0x0(0x4)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_428E[0x4];                                     // Fixing Size After Last Property
	TArray<class UActor*>                        MarkedActors;                                      // 0x8(0x10)(BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct ScoutDroneRuntime.OnFortScoutDroneFinishedLongInteract
struct FOnFortScoutDroneFinishedLongInteract
{
public:
	uint8                                        Pad_428F[0x1];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ScoutDroneRuntime.ScoutDroneDeferredDestructionData
struct FScoutDroneDeferredDestructionData
{
public:
	float                                        DeposessDelay;                                     // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DestroyDelay;                                      // 0x4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          DismissalReason;                                   // 0x8(0x4)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ServerDismissStartTime;                            // 0xC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ScoutDroneRuntime.ScoutDronePickupTargets
struct FScoutDronePickupTargets
{
public:
	TArray<class UActor*>                        Items;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	class UFortPawn*                             DBNOPawn;                                          // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ScoutDroneRuntime.ScoutDroneStatusData
struct FScoutDroneStatusData
{
public:
	enum class EFortScoutDroneTargetStatus       Status;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4294[0x3];                                     // Fixing Size After Last Property
	float                                        ServerTimeStatusChanged;                           // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ScoutDroneRuntime.ScoutDroneInputTriggerableEvent
struct FScoutDroneInputTriggerableEvent
{
public:
	class FName                                  InputActionName;                                   // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4295[0x4];                                     // Fixing Size After Last Property
	class UInputAction*                          InputAction;                                       // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          GameplayEventToTrigger;                            // 0x10(0x4)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4296[0x4];                                     // Fixing Size Of Struct
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ScoutDroneRuntime.ScoutDroneCapsuleSizeData
struct FScoutDroneCapsuleSizeData
{
public:
	struct FScalableFloat                        CapsuleHalfHeight;                                 // 0x0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        CapsuleRadius;                                     // 0x28(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
