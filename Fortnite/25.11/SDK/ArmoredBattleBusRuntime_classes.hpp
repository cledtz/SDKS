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

// 0xC0 (0x1690 - 0x15D0)
// Class ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance
class UFortArmoredBattleBusPassengerAnimInstance : public UFortPlayerAnimInstanceProxy
{
public:
	struct FRotator                              PreviousVehicleRotator;                            // 0x15C8(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        SmoothedVehicleYawRate;                            // 0x15E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PawnSeat;                                          // 0x15E4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsFrontTurretPassenger;                           // 0x15E8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsRearTurretPassenger;                            // 0x15E9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40DF[0x2];                                     // Fixing Size After Last Property..
	float                                        Speed;                                             // 0x15EC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        YawDelta;                                          // 0x15F0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TurretYaw;                                         // 0x15F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TurretPitch;                                       // 0x15F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40E0[0x4];                                     // Fixing Size After Last Property..
	struct FRotator                              TurretYawRotator;                                  // 0x1600(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        SlopeRollDegreeAngle;                              // 0x1618(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SlopePitchDegreeAngle;                             // 0x161C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HandAttachL;                                       // 0x1620(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HandAttachR;                                       // 0x1638(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERelativeTransformSpace           TransformSpace;                                    // 0x1650(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40E1[0x3];                                     // Fixing Size After Last Property..
	float                                        UpdateYawDeltaSmoothedLerpRate;                    // 0x1654(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TurretPassengerFront;                              // 0x1658(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TurretPassengerRear;                               // 0x165C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FrontFootBoneName;                                 // 0x1660(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RearFootBoneName;                                  // 0x1664(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  GunHandAttachBoneName_FrontLeft;                   // 0x1668(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  GunHandAttachBoneName_RearLeft;                    // 0x166C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  GunHandAttachBoneName_FrontRight;                  // 0x1670(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  GunHandAttachBoneName_RearRight;                   // 0x1674(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PassengerBoneName_Front;                           // 0x1678(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PassengerBoneName_Rear;                            // 0x167C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TurretPitchDegMin;                                 // 0x1680(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TurretPitchDegMax;                                 // 0x1684(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LocalPlayerTurretPitchEaseRate;                    // 0x1688(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40E2[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortArmoredBattleBusPassengerAnimInstance");
		return Clss;
	}

	void UpdateYawDeltaSmoothed(class AFortAthenaVehicle* VehicleActor, class FName SocketName, struct FRotator& NewRotation, float* SmoothedYawValue);
	void UpdateSmoothedVehicleYawRate(class AFortAthenaVehicle* VehicleActor);
	void UpdateHandPositionsSlopeValues(class USkeletalMeshComponent* BusMeshComponent);
	struct FVector UnrotateHandAttachLocation(struct FVector& HandLocation, struct FVector& FootLocation, struct FRotator& FootRotation);
	struct FTransform GetPassengerTransform(class USkeletalMeshComponent* BusMeshComponent);
	struct FVector GetHandAttachLocation(class USkeletalMeshComponent* BusMeshComponent, class FName FrontHandAttachBoneName, class FName RearHandAttachBoneName);
	struct FTransform GetFootAttachTransform(class USkeletalMeshComponent* BusMeshComponent);
	void GenerateCharacterPitchAndYawForSlopedTerrain(class AFortAthenaVehicle* VehicleActor, float* TurretYaw, float* TurretPitch, struct FRotator* PawnYawRotator);
};

// 0x98 (0x690 - 0x5F8)
// Class ArmoredBattleBusRuntime.FortArmoredBattleBusVehicleAnimInstance
class UFortArmoredBattleBusVehicleAnimInstance : public UFortVehicleAnimInstance
{
public:
	float                                        FrontTurretAimPitch;                               // 0x5F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RearTurretAimPitch;                                // 0x5FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FrontYawDeltaSmoothed;                             // 0x600(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RearYawDeltaSmoothed;                              // 0x604(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SmoothedVehicleYawRate;                            // 0x608(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FrontYawDeltaSmoothedAlpha;                        // 0x60C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RearYawDeltaSmoothedAlpha;                         // 0x610(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40E6[0x4];                                     // Fixing Size After Last Property..
	struct FRotator                              FrontWeaponYaw;                                    // 0x618(0x18)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              RearWeaponYaw;                                     // 0x630(0x18)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              PreviousVehicleRotator;                            // 0x648(0x18)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bHasFrontTurretPassenger;                          // 0x660(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasRearTurretPassenger;                           // 0x661(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40E7[0x2];                                     // Fixing Size After Last Property..
	float                                        NetworkEaseRate;                                   // 0x664(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UpdateYawDeltaSmoothedLerpRate;                    // 0x668(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrontPassengerSeatIndex;                           // 0x66C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RearPassengerSeatIndex;                            // 0x670(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FrontPassengerYawOffset;                           // 0x674(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RearPassengerYawOffset;                            // 0x678(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FrontPassengerBoneName;                            // 0x67C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RearPassengerBoneName;                             // 0x680(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40E8[0xC];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortArmoredBattleBusVehicleAnimInstance");
		return Clss;
	}

	float UpdateYawDeltaSmoothed(class AFortAthenaVehicle* VehicleActor, class FName SocketName, const struct FRotator& NewRotation, float SmoothedYawValue);
	void UpdateTurretAimPitchWeaponYaw(class AFortAthenaVehicle* OwnerVehicle, class AFortPlayerPawn* GunnerActor, class FName SocketName, float YawOffset, float* TurretAimPitch, float* YawDeltaSmoothed, struct FRotator* WeaponYaw);
	float UpdateSmoothedVehicleYawRate(class AFortAthenaVehicle* VehicleActor, const struct FRotator& PreviousRotator);
	void GetPitchAndYaw(class AFortAthenaVehicle* VehicleActor, class AFortPlayerPawn* GunnerActor, float* AdjustedPitch, float* AdjustedYaw, bool* bIsLocalPlayerControlled, struct FRotator* YawRotator);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
