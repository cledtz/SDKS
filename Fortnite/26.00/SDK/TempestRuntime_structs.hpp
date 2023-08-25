#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ETempestState : uint8
{
	Unformed                       = 0,
	Forming                        = 1,
	Active                         = 2,
	Dissipating                    = 3,
	Complete                       = 4,
	ETempestState_MAX              = 5,
};

enum class ETempestMovementMode : uint8
{
	EnvQuery                       = 0,
	Path                           = 1,
	ETempestMovementMode_MAX       = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xC - 0x0)
// ScriptStruct TempestRuntime.TempestStateInfo
struct FTempestStateInfo
{
public:
	enum class ETempestState                     CurrentState;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48E1[0x3];                                     // Fixing Size After Last Property 
	float                                        StartTime;                                         // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndTime;                                           // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct TempestRuntime.TempestReplicatedMovementData
struct FTempestReplicatedMovementData
{
public:
	struct FVector                               TargetServerLocation;                              // 0x0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LastServerLocation;                                // 0x18(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 LastServerRotation;                                // 0x30(0x20)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct TempestRuntime.TempestStateChangeTimerInfo
struct FTempestStateChangeTimerInfo
{
public:
	uint8                                        Pad_48EE[0x8];                                     // Fixing Size Of Struct
};

}


