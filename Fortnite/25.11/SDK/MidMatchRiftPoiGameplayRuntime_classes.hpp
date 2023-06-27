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

// 0x0 (0x28 - 0x28)
// Class MidMatchRiftPoiGameplayRuntime.MidmatchRiftPoiCheatManager
class UMidmatchRiftPoiCheatManager : public UChildCheatManager
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MidmatchRiftPoiCheatManager");
		return Clss;
	}

	void SpawnMidmatchPoiNearestLocation(struct FVector& Location);
	void SpawnMidmatchPoiFurthestLocation(struct FVector& Location);
	void MidmatchRiftPoiSpawnNearestToPawnLocation();
	void MidmatchRiftPoiSpawnFurthestFromPawnLocation();
};

// 0xE8 (0x370 - 0x288)
// Class MidMatchRiftPoiGameplayRuntime.MidMatchRiftPoiManagerActor
class AMidMatchRiftPoiManagerActor : public AActor
{
public:
	uint8                                        Pad_82AD[0x8];                                     // Fixing Size After Last Property..
	uint8                                        bCanBeMarked : 1;                                  // Mask: 0x1, PropSize: 0x10x290(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bBlockMarking : 1;                                 // Mask: 0x2, PropSize: 0x10x290(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_43E : 6;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_82AE[0x7];                                     // Fixing Size After Last Property..
	struct FMarkedActorDisplayInfo               MarkerDisplay;                                     // 0x298(0xB8)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FVector                               MarkerPositionOffset;                              // 0x350(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDynamicLandBrushApplied;                          // 0x368(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_82AF[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MidMatchRiftPoiManagerActor");
		return Clss;
	}

	void SetDynamicLandBrush(struct FSlateBrush& LandIcon);
};

// 0xE8 (0x370 - 0x288)
// Class MidMatchRiftPoiGameplayRuntime.MidmatchRiftPoiSpawnIndicator
class AMidmatchRiftPoiSpawnIndicator : public AActor
{
public:
	uint8                                        Pad_82B1[0x10];                                    // Fixing Size After Last Property..
	uint8                                        bCanBeMarked : 1;                                  // Mask: 0x1, PropSize: 0x10x298(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bBlockMarking : 1;                                 // Mask: 0x2, PropSize: 0x10x298(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_43F : 6;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_82B2[0x7];                                     // Fixing Size After Last Property..
	struct FMarkedActorDisplayInfo               MarkerDisplay;                                     // 0x2A0(0xB8)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FVector                               MarkerPositionOffset;                              // 0x358(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MidmatchRiftPoiSpawnIndicator");
		return Clss;
	}

	void TeleportVehicleActor(class AActor* VehicleActor, struct FVector& TeleportLocation);
	bool IsActorInDataLayerInstance(class AActor* Actor, class UDataLayerInstance* DataLayerInstance);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
