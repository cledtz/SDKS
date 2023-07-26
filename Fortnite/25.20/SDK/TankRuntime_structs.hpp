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

enum class ETankAimingMode : uint8
{
	CameraRotationNoTrace          = 0,
	CameraTraceFromPivotSocket     = 1,
	CameraTraceFromDistanceScalar  = 2,
	ETankAimingMode_MAX            = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x1C0 (0x1C0 - 0x0)
// ScriptStruct TankRuntime.TankWeaponAimingData
struct FTankWeaponAimingData
{
public:
	int32                                        SeatIndex;                                         // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAimRotationLerpWithEasing;                        // 0x4(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_80AD[0x3];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        AimRotationLerpSpeed;                              // 0x8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    AimYawRotationEasingCurve;                         // 0x30(0x88)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    AimPitchRotationEasingCurve;                       // 0xB8(0x88)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	enum class ETankAimingMode                   AimingMode;                                        // 0x140(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_80AE[0x7];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        AimingCameraToMuzzleDistanceScalar;                // 0x148(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        AimingWhileTargetingCameraToMuzzleDistanceScalar;  // 0x170(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        AimingPitchAdjust;                                 // 0x198(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct TankRuntime.TankAnimAimingData
struct FTankAnimAimingData
{
public:
	uint8                                        Pad_80AF[0x60];                                    // Fixing Size Of Struct..
};

// 0x38 (0x38 - 0x0)
// ScriptStruct TankRuntime.ServerSocketTransformOverride
struct FServerSocketTransformOverride
{
public:
	class FName                                  SocketName;                                        // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_80B0[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               PivotOffset;                                       // 0x8(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OffsetFromPivot;                                   // 0x20(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct TankRuntime.TankAudioUpdateContext
struct FTankAudioUpdateContext
{
public:
	bool                                         bIsAwake;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_80B1[0x3];                                     // Fixing Size After Last Property..
	float                                        SpeedParamValue;                                   // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeftTrackPower;                                    // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RightTrackPower;                                   // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TurningParamValue;                                 // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentGear;                                       // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccelSpeedThreshold;                               // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastGearChangeTime;                                // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccelWaitTime;                                     // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTurningRight;                                     // 0x24(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTurningLeft;                                      // 0x25(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPreviousTryMotion;                                // 0x26(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_80B2[0x1];                                     // Fixing Size After Last Property..
	float                                        LastForwardSpeed;                                  // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeUntilAccelOneShotFade;                         // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DecelSpeedThreshold;                               // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EngineIdleThreshold;                               // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             WeaponsMovementThreshold;                          // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CannonSocketName;                                  // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TurretSocketName;                                  // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SurfaceID;                                         // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_80B3[0x4];                                     // Fixing Size After Last Property..
	class UAudioComponent*                       DecelOneShot;                                      // 0x58(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioComponent*                       AccelOneShot;                                      // 0x60(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioComponent*                       TurningOneShot;                                    // 0x68(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortLayeredAudioComponent*            TracksLeftAudio;                                   // 0x70(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortLayeredAudioComponent*            TracksRightAudio;                                  // 0x78(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_80B4[0x38];                                    // Fixing Size Of Struct..
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
