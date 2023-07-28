#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xA0 - 0xA0)
// Class RockVehicleRuntime.RockVehicle_InteractionOverrideComponent
class URockVehicle_InteractionOverrideComponent : public UFortVehicleInteractionOverrideComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RockVehicle_InteractionOverrideComponent");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class RockVehicleRuntime.FortCheatManager_RockVehicle
class UFortCheatManager_RockVehicle : public UChildCheatManager
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCheatManager_RockVehicle");
		return Clss;
	}

	void RockVehicleSetVelocity(float X, float Y, float Z);
	void RockVehicleSetRotation(float Pitch, float Yaw, float Roll);
	void RockVehicleSetLocation(float X, float Y, float Z);
	void RockVehicleSetBalboaVelocity(float X, float Y, float Z);
};

// 0x240 (0x1D00 - 0x1AC0)
// Class RockVehicleRuntime.RockVehicle
class URockVehicle : public UFortAthenaSKVehicle
{
public:
	float                                        InputSwivelPitch;                                  // 0x1AC0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InputSwivelYaw;                                    // 0x1AC4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInputReverseCamera : 1;                           // Mask: 0x1, PropSize: 0x10x1AC8(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bHasDoubleJumped : 1;                              // Mask: 0x2, PropSize: 0x10x1AC8(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bHasDodged : 1;                                    // Mask: 0x4, PropSize: 0x10x1AC8(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_433 : 5;                                    // Fixing Bit-Field Size..
	bool                                         bFreeLookCamera;                                   // 0x1AC9(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_82C1[0x6];                                     // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            OnFreeCamToggled;                                  // 0x1AD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_82C2[0x1];                                     // Fixing Size After Last Property..
	struct FRockRuntimeConfigOverrides           RockRuntimeConfigs;                                // 0x1AE1(0x4)(Net, Transient, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_82C3[0x1B];                                    // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            OnSpringImpact;                                    // 0x1B00(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_82C4[0x78];                                    // Fixing Size After Last Property..
	class URockVehicleAnalyticsComponent*        RockAnalyticsComp;                                 // 0x1B88(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class URockVehicleAbility*>           VehicleAbilities;                                  // 0x1B90(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<TSoftClassPtr<class URockVehicleAbility>> VehicleAbilityTickOrder;                           // 0x1BA0(0x10)(Edit, ZeroConstructor, Config, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class UFortVehicleAudioController*           CachedVehicleAudioController;                      // 0x1BB0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URockVehicleAbility_Supersonic*        SupersonicAbility;                                 // 0x1BB8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URockVehicleAnimInstance*              RockAnimInstance;                                  // 0x1BC0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FFortAthenaVehicleInputState          PendingDriverInputState;                           // 0x1BC8(0x40)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FFortAthenaVehicleInputState          PrevDriverInputState;                              // 0x1C08(0x40)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FVector                               EnterExitImpulse;                                  // 0x1C48(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_82C5[0xA0];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RockVehicle");
		return Clss;
	}

	void ServerToggleFreeCam();
	void ServerSetLegacyDamageValues(bool bDamageFriendlyVehicles, bool bDamageOtherVehicles, bool bDamageOwnVehicle, bool bDamageAllowedFromOtherVehicle);
	void RockFreeCamToggledDelegate__DelegateSignature(bool bFreeCam);
	void OnSpringImpact__DelegateSignature(class FName Socket, float ImpactSpeed, struct FHitResult& OutHit);
	void OnRep_FreeLookCamera();
	float GetThrottleState();
	struct FFortAthenaVehicleInputState GetDriverInput();
	struct FRockRuntimeConfigOverrides GetCurrentRockRuntimeConfigOverrides();
};

// 0x10 (0xB0 - 0xA0)
// Class RockVehicleRuntime.RockVehicleAbility
class URockVehicleAbility : public UActorComponent
{
public:
	class URockVehicle*                          Vehicle;                                           // 0xA0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ActiveSeconds;                                     // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        LastDeactivationTimeSeconds;                       // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RockVehicleAbility");
		return Clss;
	}

	class URockVehicle* GetVehicle();
	float GetInactiveSeconds();
	float GetActiveSeconds();
};

// 0x58 (0x108 - 0xB0)
// Class RockVehicleRuntime.RockVehicleAbility_Physics
class URockVehicleAbility_Physics : public URockVehicleAbility
{
public:
	bool                                         bShouldStayActive;                                 // 0xB0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_82C6[0x7];                                     // Fixing Size After Last Property..
	struct FFortAthenaVehicleInputState          InputState;                                        // 0xB8(0x40)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_82C7[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RockVehicleAbility_Physics");
		return Clss;
	}

};

// 0x60 (0x168 - 0x108)
// Class RockVehicleRuntime.RockVehicleAbility_AirControl
class URockVehicleAbility_AirControl : public URockVehicleAbility_Physics
{
public:
	uint8                                        Pad_82C8[0x18];                                    // Fixing Size After Last Property..
	struct FVector                               TorqueAccel;                                       // 0x120(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TorqueDamping;                                     // 0x138(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DisableForDodgeTime;                               // 0x150(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAnyWheelsOnGround;                                // 0x154(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDodgeActive;                                      // 0x155(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAutoUprightActive;                                // 0x156(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_82C9[0x1];                                     // Fixing Size After Last Property..
	class URockVehicleAbility_Dodge*             DodgeAbility;                                      // 0x158(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URockVehicleAbility_AutoUpright*       AutoUprightAbility;                                // 0x160(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RockVehicleAbility_AirControl");
		return Clss;
	}

};

// 0x108 (0x210 - 0x108)
// Class RockVehicleRuntime.RockVehicleAbility_AutoUpright
class URockVehicleAbility_AutoUpright : public URockVehicleAbility_Physics
{
public:
	uint8                                        Pad_82CA[0x18];                                    // Fixing Size After Last Property..
	struct FRockScalableFloat                    RollTorque;                                        // 0x120(0x30)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FRockScalableFloat                    PitchTorque;                                       // 0x150(0x30)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FRockScalableFloat                    PushForce;                                         // 0x180(0x30)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FRockScalableFloat                    MinActiveSeconds;                                  // 0x1B0(0x30)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	class URockVehicleAbility_Dodge*             DodgeAbility;                                      // 0x1E0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        LastWorldContactFrame;                             // 0x1E8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_82CB[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               LastContactNormal;                                 // 0x1F0(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bWheelsOnGround;                                   // 0x208(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAnyWheelsOnGround;                                // 0x209(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDodgeActive;                                      // 0x20A(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bBodyContact;                                      // 0x20B(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TimeSinceLastBodyContact;                          // 0x20C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RockVehicleAbility_AutoUpright");
		return Clss;
	}

};

// 0x68 (0x170 - 0x108)
// Class RockVehicleRuntime.RockVehicleAbility_Boost
class URockVehicleAbility_Boost : public URockVehicleAbility_Physics
{
public:
	uint8                                        Pad_82CC[0x18];                                    // Fixing Size After Last Property..
	struct FRockScalableFloat                    BoostAccel;                                        // 0x120(0x30)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnBoostFailed;                                     // 0x150(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class URockVehicleBoostTank*                 BoostTank;                                         // 0x160(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bHasBoost;                                         // 0x168(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_82CD[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RockVehicleAbility_Boost");
		return Clss;
	}

};

// 0x88 (0x128 - 0xA0)
// Class RockVehicleRuntime.RockVehicleBoostTank
class URockVehicleBoostTank : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnSecondsChanged;                                  // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FRockScalableFloat                    StartSeconds;                                      // 0xB0(0x30)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRockScalableFloat                    MaxSeconds;                                        // 0xE0(0x30)(Edit, BlueprintVisible, Net, NativeAccessSpecifierPublic)
	enum class ERockBoostLogic                   BoostLogic;                                        // 0x110(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_82CE[0x3];                                     // Fixing Size After Last Property..
	float                                        BoostRechargeRate;                                 // 0x114(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoostRechargeDelay;                                // 0x118(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SecondsRemaining;                                  // 0x11C(0x4)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_82CF[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RockVehicleBoostTank");
		return Clss;
	}

	void OnRep_SecondsRemaining(float PrevValue);
	bool IsBoostFull();
	bool HasBoost();
	void GiveBoost(float Seconds);
	float GetPercentRemaining();
	float GetMaxBoostInSeconds();
};

// 0x330 (0x438 - 0x108)
// Class RockVehicleRuntime.RockVehicleAbility_Dodge
class URockVehicleAbility_Dodge : public URockVehicleAbility_Physics
{
public:
	uint8                                        Pad_82D0[0x18];                                    // Fixing Size After Last Property..
	struct FRockDodgeImpulse                     ForwardImpulse;                                    // 0x120(0x60)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRockDodgeImpulse                     BackwardImpulse;                                   // 0x180(0x60)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRockDodgeImpulse                     SideImpulse;                                       // 0x1E0(0x60)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRockScalableFloat                    MinTimeAfterJump;                                  // 0x240(0x30)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRockScalableFloat                    MinTorqueTime;                                     // 0x270(0x30)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRockScalableFloat                    MaxTorqueTime;                                     // 0x2A0(0x30)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRockScalableFloat                    ForwardTorque;                                     // 0x2D0(0x30)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRockScalableFloat                    SideTorque;                                        // 0x300(0x30)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRockScalableFloat                    ZLiftTime;                                         // 0x330(0x30)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRockScalableFloat                    ZLiftAccel;                                        // 0x360(0x30)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRockScalableFloat                    ZDampingTime;                                      // 0x390(0x30)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRockScalableFloat                    ZDamping;                                          // 0x3C0(0x30)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRockScalableFloat                    InputThreshold;                                    // 0x3F0(0x30)(NativeAccessSpecifierPublic)
	struct FVector2D                             DodgeInput;                                        // 0x420(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWheelsOnGround;                                   // 0x430(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_82D1[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RockVehicleAbility_Dodge");
		return Clss;
	}

};

// 0x50 (0x158 - 0x108)
// Class RockVehicleRuntime.RockVehicleAbility_DoubleJump
class URockVehicleAbility_DoubleJump : public URockVehicleAbility_Physics
{
public:
	uint8                                        Pad_82D2[0x18];                                    // Fixing Size After Last Property..
	struct FRockScalableFloat                    JumpVelocity;                                      // 0x120(0x30)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class URockVehicleAbility_Jump*              JumpAbility;                                       // 0x150(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RockVehicleAbility_DoubleJump");
		return Clss;
	}

};

// 0xE8 (0x1F0 - 0x108)
// Class RockVehicleRuntime.RockVehicleAbility_Flip
class URockVehicleAbility_Flip : public URockVehicleAbility_Physics
{
public:
	uint8                                        Pad_82D3[0x18];                                    // Fixing Size After Last Property..
	struct FRockScalableFloat                    Impulse;                                           // 0x120(0x30)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRockScalableFloat                    Torque;                                            // 0x150(0x30)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRockScalableFloat                    Duration;                                          // 0x180(0x30)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRockScalableFloat                    ContactNormalThresholdDegrees;                     // 0x1B0(0x30)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bWheelsOnGround;                                   // 0x1E0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_82D4[0xF];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RockVehicleAbility_Flip");
		return Clss;
	}

};

// 0x58 (0x108 - 0xB0)
// Class RockVehicleRuntime.RockVehicleAbility_GroundTrails
class URockVehicleAbility_GroundTrails : public URockVehicleAbility
{
public:
	struct FGroundTrailsMap                      GroundTrailsMap;                                   // 0xB0(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	TArray<class FName>                          GroundTrailSockets;                                // 0xC8(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UNiagaraSystem*                        HandbrakeSystem;                                   // 0xD8(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UNiagaraComponent*>             GroundTrailComponents;                             // 0xE0(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UNiagaraComponent*>             HandbrakeComponents;                               // 0xF0(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_82D5[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RockVehicleAbility_GroundTrails");
		return Clss;
	}

	void SetEnabled(bool bValue);
	void OnSurfaceChanged(enum class EPhysicalSurface NewSurface);
};

// 0xD8 (0x1E0 - 0x108)
// Class RockVehicleRuntime.RockVehicleAbility_Jump
class URockVehicleAbility_Jump : public URockVehicleAbility_Physics
{
public:
	uint8                                        Pad_82D6[0x18];                                    // Fixing Size After Last Property..
	struct FRockScalableFloat                    JumpVelocity;                                      // 0x120(0x30)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRockScalableFloat                    JumpAccel;                                         // 0x150(0x30)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRockScalableFloat                    MinJumpSeconds;                                    // 0x180(0x30)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRockScalableFloat                    MaxJumpSeconds;                                    // 0x1B0(0x30)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RockVehicleAbility_Jump");
		return Clss;
	}

};

// 0x98 (0x1A0 - 0x108)
// Class RockVehicleRuntime.RockVehicleAbility_StickyWheels
class URockVehicleAbility_StickyWheels : public URockVehicleAbility_Physics
{
public:
	uint8                                        Pad_82D7[0x18];                                    // Fixing Size After Last Property..
	struct FRockScalableFloat                    StickyForceScaleGround;                            // 0x120(0x30)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FRockScalableFloat                    StickyForceScaleWall;                              // 0x150(0x30)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FVector                               ContactNormal;                                     // 0x180(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Scale;                                             // 0x198(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAnyWheelsOnGround;                                // 0x19C(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_82D8[0x3];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RockVehicleAbility_StickyWheels");
		return Clss;
	}

};

// 0xC8 (0x178 - 0xB0)
// Class RockVehicleRuntime.RockVehicleAbility_Supersonic
class URockVehicleAbility_Supersonic : public URockVehicleAbility
{
public:
	FMulticastInlineDelegateProperty_            OnTrailsActivate;                                  // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTrailsDeactivate;                                // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FRockScalableFloat                    TurnOffTime;                                       // 0xD0(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FRockScalableFloat                    TurnOnTime;                                        // 0x100(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	bool                                         bUseTurnOnTimeRequirement;                         // 0x130(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_82D9[0x7];                                     // Fixing Size After Last Property..
	struct FRockScalableFloat                    TurnOffSpeedBuffer;                                // 0x138(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	float                                        TimeBelowSupersonic;                               // 0x168(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        WorldTimeSupersonicExceeded;                       // 0x16C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_82DA[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RockVehicleAbility_Supersonic");
		return Clss;
	}

};

// 0x38 (0xD8 - 0xA0)
// Class RockVehicleRuntime.RockVehicleAnalyticsComponent
class URockVehicleAnalyticsComponent : public UActorComponent
{
public:
	uint8                                        Pad_82E1[0x8];                                     // Fixing Size After Last Property..
	struct FRockVehicleAnalyticsSession          CurrentSession;                                    // 0xA8(0x28)(Transient, NoDestructor, NativeAccessSpecifierPrivate)
	class URockVehicle*                          Vehicle;                                           // 0xD0(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RockVehicleAnalyticsComponent");
		return Clss;
	}

	void OnSupersonicStart(class UActorComponent* InComp, bool bInReset);
	void OnSupersonicEnd(class UActorComponent* InComp);
	void OnPawnExitedSeat(FInterfaceProperty_& InVehicle, class UFortPawn* InPlayerPawn, int32 InSeatIndex);
	void OnPawnEnteredSeat(FInterfaceProperty_& InVehicle, class UFortPawn* InPlayerPawn, int32 InSeatIndex);
	void OnJumped(class UActorComponent* InComp, bool bInReset);
	void OnDoubleJumped(class UActorComponent* InComp, bool bInReset);
	void OnDodged(class UActorComponent* InComp, bool bInReset);
};

// 0x188 (0x780 - 0x5F8)
// Class RockVehicleRuntime.RockVehicleAnimInstance
class URockVehicleAnimInstance : public UFortVehicleAnimInstance
{
public:
	struct FBouncyChassisState                   BouncyChassis;                                     // 0x5F8(0xC)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FRockVehicleWheelAnimInfo             WheelInfoFR;                                       // 0x604(0x14)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FRockVehicleWheelAnimInfo             WheelInfoFL;                                       // 0x618(0x14)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FRockVehicleWheelAnimInfo             WheelInfoBR;                                       // 0x62C(0x14)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FRockVehicleWheelAnimInfo             WheelInfoBL;                                       // 0x640(0x14)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        WheelLerpSpeed;                                    // 0x654(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_82E2[0x128];                                   // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RockVehicleAnimInstance");
		return Clss;
	}

};

// 0xF0 (0x3E0 - 0x2F0)
// Class RockVehicleRuntime.RockVehicleAudioController
class URockVehicleAudioController : public UFortVehicleAudioController
{
public:
	struct FRuntimeFloatCurve                    SideSpeedToSkidVolume;                             // 0x2F0(0x88)(Edit, NativeAccessSpecifierPublic)
	float                                        SurfaceTypeInterpSpeed;                            // 0x378(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_82E3[0x4];                                     // Fixing Size After Last Property..
	class UAudioComponent*                       TireSurfaceComponent;                              // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioComponent*                       AirLoopComponent;                                  // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioComponent*                       SuperSonicComponent;                               // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInWater;                                          // 0x398(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_82E4[0x7];                                     // Fixing Size After Last Property..
	class UAudioMotorModelComponent*             MotorModel;                                        // 0x3A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URockVehicle*                          CachedVehicle;                                     // 0x3A8(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_82E5[0x30];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RockVehicleAudioController");
		return Clss;
	}

	void SetSurfaceTypeParam(float NewSurfaceParam);
	void SetBoosting(bool bNewBoosting);
	void OnInAirUpdated(bool bNewInAir);
	class UAudioMotorModelComponent* GetMotorSimComponent();
};

// 0x200 (0x1D40 - 0x1B40)
// Class RockVehicleRuntime.RockVehicleCameraMode
class URockVehicleCameraMode : public UFortCameraMode_AthenaVehicle
{
public:
	float                                        SwivelPitchMax;                                    // 0x1B40(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SwivelYawMax;                                      // 0x1B44(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GroundNormalInterpRate;                            // 0x1B48(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GroundNormalAirInterpRate;                         // 0x1B4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GroundYawRate;                                     // 0x1B50(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WallYawRate;                                       // 0x1B54(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterpToGroundTime;                                // 0x1B58(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterpToAirTime;                                   // 0x1B5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AverageVelocityInterpRate;                         // 0x1B60(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_82E6[0x4];                                     // Fixing Size After Last Property..
	struct FRuntimeFloatCurve                    AirRotationInterpRateForSpeed;                     // 0x1B68(0x88)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	float                                        FocusOffsetInterpRate;                             // 0x1BF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DistanceSpeedScale;                                // 0x1BF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DistanceOffsetMin;                                 // 0x1BF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DistanceOffsetMax;                                 // 0x1BFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DistanceInterpRate;                                // 0x1C00(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxSpeedFOVOffset;                                 // 0x1C04(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SupersonicFOVOffset;                               // 0x1C08(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FOVInterpRate;                                     // 0x1C0C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRockCameraSettings                   CameraSettings;                                    // 0x1C10(0x1C)(Edit, BlueprintVisible, BlueprintReadOnly, Config, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_82E7[0x4];                                     // Fixing Size After Last Property..
	class URockVehicle*                          VehicleTarget;                                     // 0x1C30(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class URockVehicleAbility_Jump*              JumpAbility;                                       // 0x1C38(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_82E8[0x100];                                   // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RockVehicleCameraMode");
		return Clss;
	}

};

// 0x608 (0xEB0 - 0x8A8)
// Class RockVehicleRuntime.RockVehicleConfigs
class URockVehicleConfigs : public UFortPhysicsVehicleConfigs
{
public:
	struct FRockVehicleAxleConfig                FrontAxle;                                         // 0x8A8(0x34)(Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
	struct FRockVehicleAxleConfig                BackAxle;                                          // 0x8DC(0x34)(Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
	struct FRockVehicleDriveConfig               Drive;                                             // 0x910(0x510)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	struct FRockVehicleDemoConfig                DemolitionConfiguration;                           // 0xE20(0x28)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	struct FRockScalableFloat                    MaxLinearSpeed;                                    // 0xE48(0x30)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRockScalableFloat                    SupersonicSpeed;                                   // 0xE78(0x30)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        MaxAngularSpeed;                                   // 0xEA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SafeBuildingLandingDegrees;                        // 0xEAC(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RockVehicleConfigs");
		return Clss;
	}

};

// 0x20 (0x2B0 - 0x290)
// Class RockVehicleRuntime.RockVehicleManager
class URockVehicleManager : public UActor
{
public:
	uint8                                        Pad_82E9[0x10];                                    // Fixing Size After Last Property..
	TArray<class URockVehicle*>                  RockVehicles;                                      // 0x2A0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RockVehicleManager");
		return Clss;
	}

};

// 0x8 (0x38 - 0x30)
// Class RockVehicleRuntime.RockVehicleWorldSubsystem
class URockVehicleWorldSubsystem : public UWorldSubsystem
{
public:
	class URockVehicleManager*                   VehicleManager;                                    // 0x30(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RockVehicleWorldSubsystem");
		return Clss;
	}

};

// 0x0 (0x4B0 - 0x4B0)
// Class RockVehicleRuntime.StreamingRadioPlayerComponent_Rock
class UStreamingRadioPlayerComponent_Rock : public UStreamingRadioPlayerComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("StreamingRadioPlayerComponent_Rock");
		return Clss;
	}

	void VehicleExploded(class UController* LastDamageInstigator, class UFortAthenaVehicle* Vehicle);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
