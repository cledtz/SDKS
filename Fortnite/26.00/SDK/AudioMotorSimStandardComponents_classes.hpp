#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x150 - 0xA8)
// Class AudioMotorSimStandardComponents.BoostMotorSimComponent
class UBoostMotorSimComponent : public UAudioMotorSimComponent
{
public:
	float                                        ThrottleScale;                                     // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterpExp;                                         // 0xAC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterpTime;                                        // 0xB0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ScaleThrottleWithBoostStrength;                    // 0xB4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bModifyPitch;                                      // 0xB5(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B6B[0x2];                                     // Fixing Size After Last Property 
	float                                        PitchModifierInterpSpeed;                          // 0xB8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B6C[0x4];                                     // Fixing Size After Last Property 
	struct FRuntimeFloatCurve                    BoostToPitchCurve;                                 // 0xC0(0x88)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B6D[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UBoostMotorSimComponent* GetDefaultObj();

};

// 0x60 (0x108 - 0xA8)
// Class AudioMotorSimStandardComponents.MotorPhysicsSimComponent
class UMotorPhysicsSimComponent : public UAudioMotorSimComponent
{
public:
	float                                        Weight;                                            // 0xA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EngineTorque;                                      // 0xAC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BrakingHorsePower;                                 // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B6E[0x4];                                     // Fixing Size After Last Property 
	TArray<float>                                GearRatios;                                        // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        ClutchedGearRatio;                                 // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseInfiniteGears;                                 // 0xCC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlwaysDownshiftToZerothGear;                      // 0xCD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B6F[0x2];                                     // Fixing Size After Last Property 
	float                                        InfiniteGearRatio;                                 // 0xD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UpShiftMaxRpm;                                     // 0xD4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DownShiftStartRpm;                                 // 0xD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClutchedForceModifier;                             // 0xDC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EngineGearRatio;                                   // 0xE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EngineFriction;                                    // 0xE4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GroundFriction;                                    // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WindResistancePerVelocity;                         // 0xEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThrottleInterpolationTime;                         // 0xF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RpmInterpSpeed;                                    // 0xF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnGearChangedEvent;                                // 0xF8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMotorPhysicsSimComponent* GetDefaultObj();

};

// 0x90 (0x138 - 0xA8)
// Class AudioMotorSimStandardComponents.ResistanceMotorSimComponent
class UResistanceMotorSimComponent : public UAudioMotorSimComponent
{
public:
	float                                        UpSpeedMaxFriction;                                // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinSpeed;                                          // 0xAC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    SideSpeedFrictionCurve;                            // 0xB0(0x88)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UResistanceMotorSimComponent* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class AudioMotorSimStandardComponents.ReverseMotorSimComponent
class UReverseMotorSimComponent : public UAudioMotorSimComponent
{
public:
	float                                        ReverseEngineResistanceModifier;                   // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B80[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UReverseMotorSimComponent* GetDefaultObj();

};

// 0x48 (0xF0 - 0xA8)
// Class AudioMotorSimStandardComponents.RevLimiterMotorSimComponent
class URevLimiterMotorSimComponent : public UAudioMotorSimComponent
{
public:
	float                                        LimitTime;                                         // 0xA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DecelScale;                                        // 0xAC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AirMaxThrottleTime;                                // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SideSpeedThreshold;                                // 0xB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LimiterMaxRpm;                                     // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B85[0x4];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnRevLimiterHit;                                   // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRevLimiterStateChanged;                          // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B86[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class URevLimiterMotorSimComponent* GetDefaultObj();

};

// 0x38 (0xE0 - 0xA8)
// Class AudioMotorSimStandardComponents.RpmCurveMotorSimComponent
class URpmCurveMotorSimComponent : public UAudioMotorSimComponent
{
public:
	TArray<struct FMotorSimGearCurve>            Gears;                                             // 0xA8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        InterpSpeed;                                       // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B8A[0x4];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnUpShift;                                         // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnDownShift;                                       // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URpmCurveMotorSimComponent* GetDefaultObj();

};

// 0x40 (0xE8 - 0xA8)
// Class AudioMotorSimStandardComponents.ThrottleStateMotorSimComponent
class UThrottleStateMotorSimComponent : public UAudioMotorSimComponent
{
public:
	FMulticastInlineDelegateProperty_            OnThrottleEngaged;                                 // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnThrottleReleased;                                // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnEngineBlowoff;                                   // 0xC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                        BlowoffMinThrottleTime;                            // 0xD8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B8D[0xC];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UThrottleStateMotorSimComponent* GetDefaultObj();

};

// 0xA8 (0x150 - 0xA8)
// Class AudioMotorSimStandardComponents.VelocitySyncMotorSimComponent
class UVelocitySyncMotorSimComponent : public UAudioMotorSimComponent
{
public:
	float                                        NoThrottleTime;                                    // 0xA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpeedThreshold;                                    // 0xAC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    SpeedToRpmCurve;                                   // 0xB0(0x88)(Edit, NativeAccessSpecifierPublic)
	float                                        InterpSpeed;                                       // 0x138(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterpTime;                                        // 0x13C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FirstGearThrottleThreshold;                        // 0x140(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B91[0xC];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UVelocitySyncMotorSimComponent* GetDefaultObj();

};

}


