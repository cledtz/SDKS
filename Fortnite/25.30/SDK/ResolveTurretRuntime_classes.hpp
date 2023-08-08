#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x1600 - 0x15D0)
// Class ResolveTurretRuntime.FortPlayerAnimInstance_AntiVehMountedTurret
class UFortPlayerAnimInstance_AntiVehMountedTurret : public UFortPlayerAnimInstanceProxy
{
public:
	struct FVector                               HandAttachL;                                       // 0x15C8(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HandAttachR;                                       // 0x15E0(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  HandAttachBoneNameL;                               // 0x15F8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  HandAttachBoneNameR;                               // 0x15FC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPlayerAnimInstance_AntiVehMountedTurret");
		return Clss;
	}

};

// 0x8 (0x620 - 0x618)
// Class ResolveTurretRuntime.FortVehicleAnimInstance_AntiVehMountedTurret
class UFortVehicleAnimInstance_AntiVehMountedTurret : public UFortMountedTurretAnimInstance
{
public:
	float                                        YawDeltaSmoothed;                                  // 0x618(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39D2[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortVehicleAnimInstance_AntiVehMountedTurret");
		return Clss;
	}

};

// 0x8 (0x620 - 0x618)
// Class ResolveTurretRuntime.FortVehicleAnimInstance_SevenMountedTurret
class UFortVehicleAnimInstance_SevenMountedTurret : public UFortMountedTurretAnimInstance
{
public:
	float                                        YawDeltaSmoothed;                                  // 0x618(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39D4[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortVehicleAnimInstance_SevenMountedTurret");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
