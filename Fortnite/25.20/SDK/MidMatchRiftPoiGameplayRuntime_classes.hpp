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

// 0xE8 (0x378 - 0x290)
// Class MidMatchRiftPoiGameplayRuntime.MidMatchRiftPoiManagerActor
class AMidMatchRiftPoiManagerActor : public AActor
{
public:
	uint8                                        Pad_8C[0x8];                                       // Fixing Size After Last Property..
	uint8                                        bCanBeMarked : 1;                                  // Mask: 0x1, PropSize: 0x10x298(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bBlockMarking : 1;                                 // Mask: 0x2, PropSize: 0x10x298(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_3 : 6;                                      // Fixing Bit-Field Size..
	uint8                                        Pad_8D[0x7];                                       // Fixing Size After Last Property..
	struct FMarkedActorDisplayInfo               MarkerDisplay;                                     // 0x2A0(0xB8)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FVector                               MarkerPositionOffset;                              // 0x358(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDynamicLandBrushApplied;                          // 0x370(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8E[0x7];                                       // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MidMatchRiftPoiManagerActor");
		return Clss;
	}

	void SetDynamicLandBrush(struct FSlateBrush& LandIcon);
};

// 0xE8 (0x378 - 0x290)
// Class MidMatchRiftPoiGameplayRuntime.MidmatchRiftPoiSpawnIndicator
class AMidmatchRiftPoiSpawnIndicator : public AActor
{
public:
	uint8                                        Pad_90[0x10];                                      // Fixing Size After Last Property..
	uint8                                        bCanBeMarked : 1;                                  // Mask: 0x1, PropSize: 0x10x2A0(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bBlockMarking : 1;                                 // Mask: 0x2, PropSize: 0x10x2A0(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_4 : 6;                                      // Fixing Bit-Field Size..
	uint8                                        Pad_91[0x7];                                       // Fixing Size After Last Property..
	struct FMarkedActorDisplayInfo               MarkerDisplay;                                     // 0x2A8(0xB8)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FVector                               MarkerPositionOffset;                              // 0x360(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

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
