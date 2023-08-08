#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ETractorBeamState : uint8
{
	TBS_Inactive                   = 0,
	TBS_Charging                   = 1,
	TBS_Active                     = 2,
	TBS_MAX                        = 3,
};

enum class ENevadaFlightStates : uint8
{
	FLIGHT                         = 0,
	CRASHING                       = 1,
	CRASHED                        = 2,
	REBOOTING                      = 3,
	LANDING                        = 4,
	LANDED                         = 5,
	IDLE                           = 6,
	NONE                           = 7,
	ENevadaFlightStates_MAX        = 8,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// ScriptStruct NevadaRuntime.NevadaAudioUpdateContext
struct FNevadaAudioUpdateContext
{
public:
	uint8                                        Pad_4D91[0x1];                                     // Fixing Size Of Struct
};

// 0x8 (0x40 - 0x38)
// ScriptStruct NevadaRuntime.NevadaOutContinuous
struct FNevadaOutContinuous : public FFortVehicleOutContinuous
{
public:
	float                                        AltimeterTraceHitDistance;                         // 0x38(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TractorBeamAppliedForceMagnitude;                  // 0x3C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x428 (0x450 - 0x28)
// ScriptStruct NevadaRuntime.NevadaOutPersistent
struct FNevadaOutPersistent : public FFortVehicleOutPersistent
{
public:
	uint8                                        Pad_4D95[0x428];                                   // Fixing Size Of Struct
};

// 0x14 (0x14 - 0x0)
// ScriptStruct NevadaRuntime.NevadaState
struct FNevadaState
{
public:
	enum class ENevadaFlightStates               CurrentStatus;                                     // 0x0(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D9A[0x3];                                     // Fixing Size After Last Property
	int32                                        LivesRemaining;                                    // 0x4(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHijackingActive;                                  // 0x8(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPilotBubbleCollisionEnabled;                      // 0x9(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D9B[0x2];                                     // Fixing Size After Last Property
	float                                        CurrentBatteryCharge;                              // 0xC(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCannonEnabled;                                    // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTractorBeamEnabled;                               // 0x11(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D9C[0x2];                                     // Fixing Size Of Struct
};

// 0x14 (0x14 - 0x0)
// ScriptStruct NevadaRuntime.NevadaMoveModeConfig
struct FNevadaMoveModeConfig
{
public:
	float                                        ThrustForce;                                       // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LiftForce;                                         // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxHorizontalSpeed;                                // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxVerticalSpeed;                                  // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DragForceMultiplier;                               // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct NevadaRuntime.DampedSpringConfig
struct FDampedSpringConfig
{
public:
	float                                        Stiffness;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damping;                                           // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxAccel;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x110 (0x298 - 0x188)
// ScriptStruct NevadaRuntime.NevadaInPersistent
struct FNevadaInPersistent : public FFortVehicleInPersistent
{
public:
	class UFortNevadaVehicleConfigs*             FortNevadaVehicleConfigs;                          // 0x188(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBoostThrust;                                      // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBoostDrag;                                        // 0x191(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4DA5[0x2];                                     // Fixing Size After Last Property
	float                                        TractorBeamExtraLengthForExtents;                  // 0x194(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseTractorBeamUprightForce;                       // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4DA6[0x7];                                     // Fixing Size After Last Property
	struct FVector                               CrashingDesiredUp;                                 // 0x1A0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENevadaFlightStates               CurrentVehicleState;                               // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4DA7[0xDF];                                    // Fixing Size Of Struct
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
