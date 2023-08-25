#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0xCA0 - 0xC10)
// Class MusterCoreWeaponsRuntime.FortMusterExplosiveARProjectile
class UFortMusterExplosiveARProjectile : public UFortProjectileAthena
{
public:
	struct FVector                               HitLocation;                                       // 0xC10(0x18)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRotator                              HitRotation;                                       // 0xC28(0x18)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bHitPlayer;                                        // 0xC40(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B53[0x3];                                     // Fixing Size After Last Property 
	float                                        DrawDistance;                                      // 0xC44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UParticleSystemComponent*              ProjectileTrail;                                   // 0xC48(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraSystem*                        NS_Explosion;                                      // 0xC50(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTag                          FeedbackCue;                                       // 0xC58(0x4)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1B54[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               DecalSize;                                         // 0xC60(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        DecalLifespan;                                     // 0xC78(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        TimebeforeDecalFadeOut;                            // 0xC7C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        DecalFadeOutDuration;                              // 0xC80(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1B56[0x4];                                     // Fixing Size After Last Property 
	class UMaterialInterface*                    DecalMaterial;                                     // 0xC88(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USoundBase*                            Cue_CloseSound;                                    // 0xC90(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USoundBase*                            Cue_DistantSound;                                  // 0xC98(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortMusterExplosiveARProjectile* GetDefaultObj();

	void SetHitRotation(struct FRotator& NewHitRotation);
	void SetHitPlayer(bool bWasHit);
	void SetHitLocation(struct FVector& NewHitLocation);
	void OnRep_HitLocation();
};

// 0x28 (0x370 - 0x348)
// Class MusterCoreWeaponsRuntime.MusterCoreWeaponsAnimInstance
class UMusterCoreWeaponsAnimInstance : public UAnimInstance
{
public:
	class UFortWeapon*                           OwningWeapon;                                      // 0x348(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsShotFired;                                      // 0x350(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B5D[0x3];                                     // Fixing Size After Last Property 
	int32                                        LocalAmmoCount;                                    // 0x354(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CylinderMaskAlpha;                                 // 0x358(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAmmoCountTwo;                                   // 0x35C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAmmoCountOne;                                   // 0x35D(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStateRuleFromFullToTwoAmmo;                       // 0x35E(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStateRuleFromTwoToOneAmmo;                        // 0x35F(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStateRuleFromOneToZero;                           // 0x360(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B5F[0xF];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMusterCoreWeaponsAnimInstance* GetDefaultObj();

};

// 0x90 (0xCA0 - 0xC10)
// Class MusterCoreWeaponsRuntime.FortExCaliberProjectile
class UFortExCaliberProjectile : public UFortProjectileAthena
{
public:
	bool                                         bSimulationRunning;                                // 0xC10(0x1)(BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B7E[0x7];                                     // Fixing Size After Last Property 
	struct FScalableFloat                        TimeToExplode;                                     // 0xC18(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	bool                                         bHasStopped;                                       // 0xC40(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B7F[0x7];                                     // Fixing Size After Last Property 
	struct FVector                               HitNormal;                                         // 0xC48(0x18)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EPhysicalSurface                  SurfaceType;                                       // 0xC60(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B81[0x3];                                     // Fixing Size After Last Property 
	class FName                                  SwordRevealMaterialParam;                          // 0xC64(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  EmissiveColorMaterialParam;                        // 0xC68(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  HDRMultiplierMaterialParam;                        // 0xC6C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FLinearColor                          EmissiveBlueColor;                                 // 0xC70(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FLinearColor                          EmissivePurpleColor;                               // 0xC80(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MinPitchForRotationAdjustment;                     // 0xC90(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxPitchForRotationAdjustment;                     // 0xC94(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1B84[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortExCaliberProjectile* GetDefaultObj();

	void UnblockPawnCollision();
	void TriggerExplosion();
	void SetupSwordRevealEffects(class UStaticMeshComponent* ProjectileMesh, float SwordRevealAlpha, float ColorChangeAlpha, float HDRMultiplierAlpha);
	void SetupProjectileHitAudio(struct FVector& ProjectileImpactLocation, class UActor* HitActor);
	void SetFuseColorBasedOnTeam();
	void RestartSimulating();
	void PlayPreExplosionEfffects();
	void OnRep_bSimulationRunning();
	void OnAttachedBuildingDestroyed(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnAttachedActorDestroyed(class UActor* DestroyedActor);
	void BP_OnProjectileStopped();
};

}


