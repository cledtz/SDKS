#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EHoagieBoostState : uint8
{
	Unknown                        = 0,
	Ready                          = 1,
	Started                        = 2,
	Finished                       = 3,
	Failed                         = 4,
	EHoagieBoostState_MAX          = 5,
};

enum class EHoagieState : uint8
{
	STARTUP                        = 0,
	STARTUP_LIFT                   = 1,
	FLIGHT                         = 2,
	AUTO_LANDING                   = 3,
	SPIN_CRASHING                  = 4,
	CRASHING_NO_SPIN               = 5,
	CRASH_LANDED                   = 6,
	LANDED                         = 7,
	EXPLODING                      = 8,
	NONE                           = 9,
	EHoagieState_MAX               = 10,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x1E8 (0x1E8 - 0x0)
// ScriptStruct HoagieRuntime.FortHeliFlightModel
struct FFortHeliFlightModel
{
public:
	uint8                                        Pad_3C7C[0x1E0];                                   // Fixing Size After Last Property
	class UFortHoagieVehicleConfigs*             Configs;                                           // 0x1E0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct HoagieRuntime.RotorHit
struct FRotorHit
{
public:
	struct FActorInstanceHandle                  HitObjectHandle;                                   // 0x0(0x18)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastHitTimer;                                      // 0x18(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct HoagieRuntime.CachedSeatCollision
struct FCachedSeatCollision
{
public:
	int32                                        SeatIndex;                                         // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOccupied;                                         // 0x4(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C80[0x3];                                     // Fixing Size Of Struct
};

// 0x30 (0x30 - 0x0)
// ScriptStruct HoagieRuntime.ReplicatedHeliControlState
struct FReplicatedHeliControlState
{
public:
	struct FVector_NetQuantizeNormal             Up;                                                // 0x0(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal             Forward;                                           // 0x18(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct HoagieRuntime.HoagieCmd
struct FHoagieCmd
{
public:
	uint8                                        Pad_3C84[0x78];                                    // Fixing Size Of Struct
};

// 0x40 (0x1C8 - 0x188)
// ScriptStruct HoagieRuntime.HoagieInPersistent
struct FHoagieInPersistent : public FFortVehicleInPersistent
{
public:
	class UFortHoagieVehicleConfigs*             FortHoagieVehicleConfigs;                          // 0x188(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHoagieState                      CurrentHoagieState;                                // 0x190(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastRotorImpulseTime;                              // 0x194(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RotorHitLinearImpulse;                             // 0x198(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RotorHitAngularImpulse;                            // 0x1B0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1F0 (0x270 - 0x80)
// ScriptStruct HoagieRuntime.HoagieInternal
struct FHoagieInternal : public FFortVehicleInternalPersistent
{
public:
	struct FFortHeliFlightModel                  FlightModel;                                       // 0x80(0x1E8)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C88[0x8];                                     // Fixing Size Of Struct
};

// 0x0 (0x38 - 0x38)
// ScriptStruct HoagieRuntime.HoagieOutContinuous
struct FHoagieOutContinuous : public FFortVehicleOutContinuous
{
public:
};

// 0x0 (0x28 - 0x28)
// ScriptStruct HoagieRuntime.HoagieOutPersistent
struct FHoagieOutPersistent : public FFortVehicleOutPersistent
{
public:
};

// 0x148 (0x148 - 0x0)
// ScriptStruct HoagieRuntime.HoagieDeathEffectInfo
struct FHoagieDeathEffectInfo
{
public:
	float                                        Damage;                                            // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C8D[0x4];                                     // Fixing Size After Last Property
	struct FGameplayTagContainer                 DamageTags;                                        // 0x8(0x20)(NativeAccessSpecifierPublic)
	struct FVector                               Momentum;                                          // 0x28(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                            HitInfo;                                           // 0x40(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UFortPawn*                             InstigatedBy;                                      // 0x120(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                DamageCauser;                                      // 0x128(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x130(0x18)(NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
