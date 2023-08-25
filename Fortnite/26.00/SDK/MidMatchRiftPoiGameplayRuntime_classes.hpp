#pragma once

// Dumped with Dumper-7!


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

	static class UClass* StaticClass();
	static class UMidmatchRiftPoiCheatManager* GetDefaultObj();

	void SpawnMidmatchPoiNearestLocation(struct FVector& Location);
	void SpawnMidmatchPoiFurthestLocation(struct FVector& Location);
	void MidmatchRiftPoiSpawnNearestToPawnLocation();
	void MidmatchRiftPoiSpawnFurthestFromPawnLocation();
};

// 0xD8 (0x368 - 0x290)
// Class MidMatchRiftPoiGameplayRuntime.MidMatchRiftPoiManagerActor
class UMidMatchRiftPoiManagerActor : public UActor
{
public:
	uint8                                        Pad_35A4[0x8];                                     // Fixing Size After Last Property 
	uint8                                        bCanBeMarked : 1;                                  // Mask: 0x1, PropSize: 0x10x298(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bBlockMarking : 1;                                 // Mask: 0x2, PropSize: 0x10x298(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_1FC : 6;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_35A6[0x7];                                     // Fixing Size After Last Property 
	struct FMarkedActorDisplayInfo               MarkerDisplay;                                     // 0x2A0(0xA8)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FVector                               MarkerPositionOffset;                              // 0x348(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDynamicLandBrushApplied;                          // 0x360(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_35A7[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMidMatchRiftPoiManagerActor* GetDefaultObj();

	void SetDynamicLandBrush(struct FSlateBrush& LandIcon);
};

// 0xD8 (0x368 - 0x290)
// Class MidMatchRiftPoiGameplayRuntime.MidmatchRiftPoiSpawnIndicator
class UMidmatchRiftPoiSpawnIndicator : public UActor
{
public:
	uint8                                        Pad_35BE[0x10];                                    // Fixing Size After Last Property 
	uint8                                        bCanBeMarked : 1;                                  // Mask: 0x1, PropSize: 0x10x2A0(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bBlockMarking : 1;                                 // Mask: 0x2, PropSize: 0x10x2A0(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_1FD : 6;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_35C1[0x7];                                     // Fixing Size After Last Property 
	struct FMarkedActorDisplayInfo               MarkerDisplay;                                     // 0x2A8(0xA8)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FVector                               MarkerPositionOffset;                              // 0x350(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMidmatchRiftPoiSpawnIndicator* GetDefaultObj();

	void TeleportVehicleActor(class UActor* VehicleActor, struct FVector& TeleportLocation);
	bool IsActorInDataLayerInstance(class UActor* Actor, class UDataLayerInstance* DataLayerInstance);
};

}


