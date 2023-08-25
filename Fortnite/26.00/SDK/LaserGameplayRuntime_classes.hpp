#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x5A0 - 0x590)
// Class LaserGameplayRuntime.LaserCapsuleComponent
class ULaserCapsuleComponent : public UCapsuleComponent
{
public:
	enum class ECollisionEnabled                 CollisionWhenEnabled;                              // 0x590(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECollisionEnabled                 CollisionWhenDisabled;                             // 0x591(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A37[0xE];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class ULaserCapsuleComponent* GetDefaultObj();

};

// 0x8 (0xA8 - 0xA0)
// Class LaserGameplayRuntime.LaserGridEditorComponent
class ULaserGridEditorComponent : public UActorComponent
{
public:
	int32                                        VisualizeLaserGridPatternIndex;                    // 0xA0(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bVisualizeOutletIndex;                             // 0xA4(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A3D[0x3];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class ULaserGridEditorComponent* GetDefaultObj();

};

// 0x418 (0xD90 - 0x978)
// Class LaserGameplayRuntime.BuildingGameplayActorLaserGrid
class UBuildingGameplayActorLaserGrid : public UBuildingGameplayActor
{
public:
	FMulticastInlineDelegateProperty_            OnLaserGridTriggered;                              // 0x978(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLaserGridOutletDestroyed;                        // 0x988(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FLaserGridPattern>             LaserGridPatterns;                                 // 0x998(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	float                                        LaserPatternChangeWarningTime;                     // 0x9A8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A99[0x4];                                     // Fixing Size After Last Property 
	TMap<int32, class UBuildingActor*>           LaserOutletToBuildingAttachmentMap;                // 0x9B0(0x50)(Edit, DisableEditOnTemplate, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 IgnoreActorTags;                                   // 0xA00(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class ULaserCapsuleComponent>    LaserCapsuleComponentClass;                        // 0xA20(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRotator                              LaserCapsuleCollisionRotationOffset;               // 0xA28(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	int32                                        LaserCustomDataIndexForRandomizedVisuals;          // 0xA40(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A9B[0x4];                                     // Fixing Size After Last Property 
	struct FLaserGridConnectionArray             LaserGridConnections;                              // 0xA48(0x118)(Net, Transient, RepNotify, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<struct FLaserGridConnectionEntry>     LocalLaserGridConnections;                         // 0xB60(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FTransform                            LaserConnectionOffset;                             // 0xB70(0x60)(Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               LaserOutletConnectionOffset;                       // 0xBD0(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundBase*                            SoundOutletTransitionOn;                           // 0xBE8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundBase*                            SoundLaserTransitionPrimaryOutlet;                 // 0xBF0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundBase*                            SoundLaserTransitionSecondaryOutlet;               // 0xBF8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundBase*                            SoundLaserTransition;                              // 0xC00(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        OutletMaterialCustomDataIndex_EmissiveEnabled;     // 0xC08(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        OutletMaterialCustomDataIndex_DisableEmissivePulse; // 0xC0C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        OutletMaterialCustomDataIndex_AnimTimestamp;       // 0xC10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        OutletMaterialCustomDataIndex_AnimTimestampDuration; // 0xC14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaterialCosineWavePeriod;                          // 0xC18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A9E[0x4];                                     // Fixing Size After Last Property 
	struct FVector2D                             OutletMaterialTransitionOffTimestampOffset;        // 0xC20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        LaserMaterialCustomDataIndex_PulseEnabled;         // 0xC30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        LaserMaterialCustomDataIndex_RandomFlickeringSpeed; // 0xC34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        LaserMaterialCustomDataIndex_AnimTimestamp;        // 0xC38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        LaserMaterialCustomDataIndex_PulseTimeOffset;      // 0xC3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             LaserMaterialRandomFlickeringSpeed;                // 0xC40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLaserGridOutletArray                 LaserGridOutlets;                                  // 0xC50(0x120)(Net, Transient, Protected, NativeAccessSpecifierProtected)
	class UHierarchicalInstancedStaticMeshComponent* HISMComponentOutlet;                               // 0xD70(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UHierarchicalInstancedStaticMeshComponent* HISMComponentLaser;                                // 0xD78(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bEnabled;                                          // 0xD80(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3AA2[0x3];                                     // Fixing Size After Last Property 
	int32                                        LaserGridPatternIndex;                             // 0xD84(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTimerHandle                          LaserPatternTimerHandle;                           // 0xD88(0x8)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UBuildingGameplayActorLaserGrid* GetDefaultObj();

	void SetLaserGridEnable(bool bEnable);
	void OnRep_LaserGridConnections();
	void OnRep_bEnabled();
	void LaserGridTriggered(struct FLaserGridConnectionEntry& LaserConnectionData, class UActor* TriggeringActor);
	void LaserGridStateUpdated(bool bLaserGridEnabled);
	void HandlePatternTimerComplete_PreTransition();
	void HandlePatternTimerComplete_PostTransition();
	void HandleLaserCollisionOverlap(class UPrimitiveComponent* OverlappedComponent, class UActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void HandleAttachedBuildingActorDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* HitComponent, class FName BoneName, const struct FVector& Momentum);
	void GetActiveLaserGridConnections(TArray<struct FLaserGridConnectionEntry>* OutActiveLaserGridConnections);
	void CosmeticDestroyOutletInstance(struct FLaserGridOutletEntry& OutletEntry);
	bool CanActorTriggerLaserGrid(class UActor* TriggeringActor);
};

}


