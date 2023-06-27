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

// 0x18 (0xC0 - 0xA8)
// Class TempestRuntime.FortAIControllerComponent_Tempest
class UFortAIControllerComponent_Tempest : public UFortControllerComponent
{
public:
	class UFortTimeOfDayWeatherComponent*        WeatherComponent;                                  // 0xA8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1586[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAIControllerComponent_Tempest");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class TempestRuntime.FortCheatManager_Tempest
class UFortCheatManager_Tempest : public UChildCheatManager
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCheatManager_Tempest");
		return Clss;
	}

	void EndTempestStorm(const class FString& StormName);
};

// 0x110 (0x1B0 - 0xA0)
// Class TempestRuntime.TempestMovementComponent
class UTempestMovementComponent : public UGameFrameworkComponent
{
public:
	struct FTempestReplicatedMovementData        MovementData;                                      // 0xA0(0x50)(Net, RepNotify, NoDestructor, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnTempestMovementStuck;                            // 0xF0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnTempestSafeZoneStateChanged;                     // 0x100(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	enum class ETempestMovementMode              MovementMode;                                      // 0x110(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1587[0x7];                                     // Fixing Size After Last Property..
	class UEnvQuery*                             FindNextMovementLocationQuery;                     // 0x118(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AFortAthenaPatrolPath*                 MovementPath;                                      // 0x120(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MovementSpeed;                                     // 0x128(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        RotationSpeed;                                     // 0x150(0x28)(Edit, NativeAccessSpecifierPrivate)
	uint8                                        bShouldIgnoreZMovement : 1;                        // Mask: 0x1, PropSize: 0x10x178(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bFloatOnWater : 1;                                 // Mask: 0x2, PropSize: 0x10x178(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_198 : 6;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_1588[0x7];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        WaterTraceZOffset;                                 // 0x180(0x28)(Edit, AdvancedDisplay, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1589[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TempestMovementComponent");
		return Clss;
	}

	void OnRep_MovementData();
};

// 0xD0 (0x170 - 0xA0)
// Class TempestRuntime.TempestStateMachineComponent
class UTempestStateMachineComponent : public UGameFrameworkComponent
{
public:
	bool                                         bDestroyOnCompletion;                              // 0xA0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_158A[0x7];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        FormationDuration;                                 // 0xA8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ActiveDuration;                                    // 0xD0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        DissipationDuration;                               // 0xF8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FTempestStateInfo                     CurrentStateInfo;                                  // 0x120(0xC)(Net, RepNotify, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_158B[0x1C];                                    // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            OnTempestStateChangedDelegate;                     // 0x148(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	uint8                                        Pad_158C[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TempestStateMachineComponent");
		return Clss;
	}

	void OnRep_CurrentStateInfo();
	struct FTempestStateInfo GetCurrentStateInfo();
	float GetCurrentStateCompletionPercentage();
	enum class ETempestState GetCurrentState();
	void ForceDissipate(const class FString& InDissipationReason);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
