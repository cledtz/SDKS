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

// 0xC0 (0x168 - 0xA8)
// Class VehicleAudioRuntime.FortMotorSimComponent_PatternPlayer
class UFortMotorSimComponent_PatternPlayer : public UAudioMotorSimComponent
{
public:
	float                                        PatternResetCooldown;                              // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7C5E[0x4];                                     // Fixing Size After Last Property..
	struct FFortMotorSimPatternState             DriftState;                                        // 0xB0(0x30)(Edit, NativeAccessSpecifierPublic)
	struct FFortMotorSimPatternState             AirState;                                          // 0xE0(0x30)(Edit, NativeAccessSpecifierPublic)
	struct FFortMotorSimPatternState             StartlineState;                                    // 0x110(0x30)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_7C5F[0x20];                                    // Fixing Size After Last Property..
	class UCurveVector*                          CurrentCurve;                                      // 0x160(0x8)(BlueprintVisible, ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMotorSimComponent_PatternPlayer");
		return Clss;
	}

};

// 0x70 (0x118 - 0xA8)
// Class VehicleAudioRuntime.FortMotorSimComponent_SurfaceModifier
class UFortMotorSimComponent_SurfaceModifier : public UAudioMotorSimComponent
{
public:
	TMap<class FName, class UCurveFloat*>        Surfaces;                                          // 0xA8(0x50)(Edit, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FVector2f                             ThrottleRange;                                     // 0xF8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        OnsetInterpTime;                                   // 0x100(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7C60[0x4];                                     // Fixing Size After Last Property..
	class UCurveFloat*                           CurrentCurve;                                      // 0x108(0x8)(BlueprintVisible, ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7C61[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMotorSimComponent_SurfaceModifier");
		return Clss;
	}

	void SetSurface(class FName NewSurface);
};

// 0x0 (0x28 - 0x28)
// Class VehicleAudioRuntime.VehicleAudioLifecycleInterface
class UVehicleAudioLifecycleInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VehicleAudioLifecycleInterface");
		return Clss;
	}

	void OnUpdate(float DeltaSeconds);
	void OnShutdown();
	void OnInit();
};

// 0x60 (0x2F0 - 0x290)
// Class VehicleAudioRuntime.FortVehicleAudioController
class UFortVehicleAudioController : public UActor
{
public:
	uint8                                        Pad_7C62[0x8];                                     // Fixing Size After Last Property..
	class UFortVehicleSoundData*                 VehicleSoundData;                                  // 0x298(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7C63[0x4];                                     // Fixing Size After Last Property..
	int32                                        CurrentSignificance;                               // 0x2A4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bListenerInRange;                                  // 0x2A8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bForceUpdatePastListenerRange;                     // 0x2A9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRedlineAllowed;                                   // 0x2AA(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7C64[0x1];                                     // Fixing Size After Last Property..
	float                                        JitterTime;                                        // 0x2AC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortAthenaVehicle*                    VehicleBase;                                       // 0x2B0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortPhysicsVehicleConfigs*            PhysicsVehicleConfigs;                             // 0x2B8(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortLayeredAudioComponent*            LayeredAudioComponent;                             // 0x2C0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAudioParameterComponent*              AudioParameterComponent;                           // 0x2C8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAudioMotorModelComponent*             AudioMotorModelComponent;                          // 0x2D0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UREVComponent*                         REVComponent;                                      // 0x2D8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UFortVehicleSoundComponent*>    VehicleSoundComponents;                            // 0x2E0(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortVehicleAudioController");
		return Clss;
	}

	void UpdateMotorModelNative(float DeltaSeconds);
	void Update(float DeltaSeconds);
	void Shutdown();
	void SetVehicle(class UFortAthenaVehicle* InVehicle);
	void SetRedlineActive(bool bEnabled);
	void SetLayeredAudioComponent(class UFortLayeredAudioComponent* InComponent);
	bool IsNativizationEnabled();
	void Init();
	class UFortAthenaVehicle* GetVehicleActor();
	float GetThrottleNative();
	class UREVComponent* GetREVComponent();
	bool GetRedlineActive();
	class UFortPhysicsVehicleConfigs* GetPhysicsVehicleConfigs();
	class UFortLayeredAudioComponent* GetLayeredAudioComponent();
	float GetJitterTime();
	float GetBrakingNative();
	class UAudioParameterComponent* GetAudioParameterComponent();
	class UAudioMotorModelComponent* GetAudioMotorModelComponent();
	void CacheJitterTime();
};

// 0x10 (0xB0 - 0xA0)
// Class VehicleAudioRuntime.FortVehicleSoundComponent
class UFortVehicleSoundComponent : public UActorComponent
{
public:
	uint8                                        Pad_7C65[0x8];                                     // Fixing Size After Last Property..
	TWeakObjectPtr<class UFortVehicleAudioController> AudioController;                                   // 0xA8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortVehicleSoundComponent");
		return Clss;
	}

	void Update(float DeltaSeconds);
	void Shutdown();
	void Init();
	class UFortAthenaVehicle* GetVehicleActor();
	class USceneComponent* GetRootComponent();
	class UREVComponent* GetREVComponent();
	class UFortPhysicsVehicleConfigs* GetPhysicsVehicleConfigs();
	class UAudioMotorModelComponent* GetMotorModelComponent();
	class UFortLayeredAudioComponent* GetLayeredAudioComponent();
	class UAudioParameterComponent* GetAudioParameterComponent();
	class UFortVehicleAudioController* GetAudioController();
};

// 0x40 (0xF0 - 0xB0)
// Class VehicleAudioRuntime.FortVehicleSoundComponent_Speed
class UFortVehicleSoundComponent_Speed : public UFortVehicleSoundComponent
{
public:
	struct FFortAudioFloatParameter              Speed;                                             // 0xB0(0x38)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_7C66[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortVehicleSoundComponent_Speed");
		return Clss;
	}

	void OnReversedChanged(bool bReversing);
};

// 0xA8 (0x158 - 0xB0)
// Class VehicleAudioRuntime.FortVehicleSoundComponent_Surface
class UFortVehicleSoundComponent_Surface : public UFortVehicleSoundComponent
{
public:
	struct FFortVehicleSoundComponent_SurfaceContext Context;                                           // 0xB0(0xA8)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortVehicleSoundComponent_Surface");
		return Clss;
	}

	void OnSurfaceChanged(enum class EPhysicalSurface NewSurface);
	void OnSkiddingChanged(bool bNewState);
	void OnInAirChanged(bool bNewState);
	void OnBrakingChanged(bool bNewState);
};

// 0x40 (0x70 - 0x30)
// Class VehicleAudioRuntime.FortVehicleSoundData
class UFortVehicleSoundData : public UDataAsset
{
public:
	TArray<class UFortVehicleSoundComponent*>    SoundComponents;                                   // 0x30(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                        MaxListenerDistance;                               // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUpdateDataFromController;                         // 0x44(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7C67[0x3];                                     // Fixing Size After Last Property..
	float                                        MaxBrakeThreshold;                                 // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThrottleMultiplier;                                // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SurfaceFrictionModifier;                           // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MotorFrictionModifier;                             // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             FrictionJitter;                                    // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanShiftOverride;                                 // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7C68[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortVehicleSoundData");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
