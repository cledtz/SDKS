#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x1600 - 0x15C8)
// Class ResolveTurretRuntime.FortPlayerAnimInstance_AntiVehMountedTurret
class UFortPlayerAnimInstance_AntiVehMountedTurret : public UFortPlayerAnimInstanceProxy
{
public:
	struct FVector                               HandAttachL;                                       // 0x15C8(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HandAttachR;                                       // 0x15E0(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  HandAttachBoneNameL;                               // 0x15F8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  HandAttachBoneNameR;                               // 0x15FC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortPlayerAnimInstance_AntiVehMountedTurret* GetDefaultObj();

};

// 0x8 (0x620 - 0x618)
// Class ResolveTurretRuntime.FortVehicleAnimInstance_AntiVehMountedTurret
class UFortVehicleAnimInstance_AntiVehMountedTurret : public UFortMountedTurretAnimInstance
{
public:
	float                                        YawDeltaSmoothed;                                  // 0x618(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3217[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortVehicleAnimInstance_AntiVehMountedTurret* GetDefaultObj();

};

// 0x8 (0x620 - 0x618)
// Class ResolveTurretRuntime.FortVehicleAnimInstance_SevenMountedTurret
class UFortVehicleAnimInstance_SevenMountedTurret : public UFortMountedTurretAnimInstance
{
public:
	float                                        YawDeltaSmoothed;                                  // 0x618(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_321B[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortVehicleAnimInstance_SevenMountedTurret* GetDefaultObj();

};

}


