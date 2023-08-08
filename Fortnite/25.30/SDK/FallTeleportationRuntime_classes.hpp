#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0x170 - 0xA0)
// Class FallTeleportationRuntime.FortFallTeleportSpawnerComponent
class UFortFallTeleportSpawnerComponent : public UActorComponent
{
public:
	TSoftClassPtr<class UActor>                  PlayerPawnReceiverClass;                           // 0xA0(0x28)(Edit, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortFallTeleportComponentBase> ComponentToAddClass;                               // 0xC8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TeleportEnabled;                                   // 0xD0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        RemoveComponentRequestTimeOffset;                  // 0xF8(0x28)(Edit, Config, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_503B[0x50];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortFallTeleportSpawnerComponent");
		return Clss;
	}

	void HandleWarmupCountdownEndTimeUpdated(float NewEndTime);
	void HandleGamePhaseChanged(struct FFortGamePhaseUpdatedEvent& Event);
};

// 0x0 (0x28 - 0x28)
// Class FallTeleportationRuntime.FortFallTeleportCheatManager
class UFortFallTeleportCheatManager : public UChildCheatManager
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortFallTeleportCheatManager");
		return Clss;
	}

	void EnableFallTeleportationIndefinitely();
};

// 0x150 (0x1F0 - 0xA0)
// Class FallTeleportationRuntime.FortFallTeleportComponentBase
class UFortFallTeleportComponentBase : public UActorComponent
{
public:
	struct FScalableFloat                        TeleportEnabled;                                   // 0xA0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ContinuousTeleportUpdateEnabled;                   // 0xC8(0x28)(Edit, Config, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ForceTeleportZHeight;                              // 0xF0(0x28)(Edit, Config, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SphereTraceRadius;                                 // 0x118(0x28)(Edit, Config, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	float                                        WalkingLocationUpdateRate;                         // 0x140(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ZHeightThresholdCheckRate;                         // 0x144(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TeleportZModifier;                                 // 0x148(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DistanceFromPawnToTraceLocation;                   // 0x14C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class UActor>>            TeleportOnBlocklist;                               // 0x150(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class FName                                  NoTeleportActorTag;                                // 0x160(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5044[0x4];                                     // Fixing Size After Last Property
	struct FVector                               SafeManualLocation;                                // 0x168(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UGameplayEffect>           TeleportGEClass;                                   // 0x180(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               TeleportLocation;                                  // 0x188(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               FallbackLocation;                                  // 0x1A0(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bValidFallbackLocation;                            // 0x1B8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bTeleporting;                                      // 0x1B9(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5045[0x2];                                     // Fixing Size After Last Property
	int32                                        TeleportLimitBeforeFail;                           // 0x1BC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        TeleportCount;                                     // 0x1C0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5046[0x4];                                     // Fixing Size After Last Property
	class UFortPlayerPawnAthena*                 OwningPawn;                                        // 0x1C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5047[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortFallTeleportComponentBase");
		return Clss;
	}

	void UpdateLastGroundLocation(class UCharacter* Character, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	bool IsValidActorToTeleportOn(class UActor* ActorToTeleportOn);
	bool IsTeleportLocationValid(struct FVector& LocationToTest);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
