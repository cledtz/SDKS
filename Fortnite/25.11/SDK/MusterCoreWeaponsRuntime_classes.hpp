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

// 0x90 (0xC90 - 0xC00)
// Class MusterCoreWeaponsRuntime.FortMusterExplosiveARProjectile
class AFortMusterExplosiveARProjectile : public AFortProjectileAthena
{
public:
	struct FVector                               HitLocation;                                       // 0xC00(0x18)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRotator                              HitRotation;                                       // 0xC18(0x18)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bHitPlayer;                                        // 0xC30(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3F47[0x3];                                     // Fixing Size After Last Property..
	float                                        DrawDistance;                                      // 0xC34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UParticleSystemComponent*              ProjectileTrail;                                   // 0xC38(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraSystem*                        NS_Explosion;                                      // 0xC40(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTag                          FeedbackCue;                                       // 0xC48(0x4)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3F48[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               DecalSize;                                         // 0xC50(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        DecalLifespan;                                     // 0xC68(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        TimebeforeDecalFadeOut;                            // 0xC6C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        DecalFadeOutDuration;                              // 0xC70(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3F49[0x4];                                     // Fixing Size After Last Property..
	class UMaterialInterface*                    DecalMaterial;                                     // 0xC78(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USoundBase*                            Cue_CloseSound;                                    // 0xC80(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USoundBase*                            Cue_DistantSound;                                  // 0xC88(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMusterExplosiveARProjectile");
		return Clss;
	}

	void SetHitRotation(struct FRotator& NewHitRotation);
	void SetHitPlayer(bool bWasHit);
	void SetHitLocation(struct FVector& NewHitLocation);
	void OnRep_HitLocation();
};

// 0x20 (0x370 - 0x350)
// Class MusterCoreWeaponsRuntime.MusterCoreWeaponsAnimInstance
class UMusterCoreWeaponsAnimInstance : public UAnimInstance
{
public:
	class AFortWeapon*                           OwningWeapon;                                      // 0x348(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsShotFired;                                      // 0x350(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F4A[0x3];                                     // Fixing Size After Last Property..
	int32                                        LocalAmmoCount;                                    // 0x354(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CylinderMaskAlpha;                                 // 0x358(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAmmoCountTwo;                                   // 0x35C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAmmoCountOne;                                   // 0x35D(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStateRuleFromFullToTwoAmmo;                       // 0x35E(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStateRuleFromTwoToOneAmmo;                        // 0x35F(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStateRuleFromOneToZero;                           // 0x360(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F4B[0xF];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MusterCoreWeaponsAnimInstance");
		return Clss;
	}

};

// 0x90 (0xC90 - 0xC00)
// Class MusterCoreWeaponsRuntime.FortExCaliberProjectile
class AFortExCaliberProjectile : public AFortProjectileAthena
{
public:
	bool                                         bSimulationRunning;                                // 0xC00(0x1)(BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3F4F[0x7];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        TimeToExplode;                                     // 0xC08(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	bool                                         bHasStopped;                                       // 0xC30(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3F50[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               HitNormal;                                         // 0xC38(0x18)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EPhysicalSurface                  SurfaceType;                                       // 0xC50(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3F51[0x3];                                     // Fixing Size After Last Property..
	class FName                                  SwordRevealMaterialParam;                          // 0xC54(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  EmissiveColorMaterialParam;                        // 0xC58(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  HDRMultiplierMaterialParam;                        // 0xC5C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FLinearColor                          EmissiveBlueColor;                                 // 0xC60(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FLinearColor                          EmissivePurpleColor;                               // 0xC70(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MinPitchForRotationAdjustment;                     // 0xC80(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxPitchForRotationAdjustment;                     // 0xC84(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3F52[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortExCaliberProjectile");
		return Clss;
	}

	void UnblockPawnCollision();
	void TriggerExplosion();
	void SetupSwordRevealEffects(class UStaticMeshComponent* ProjectileMesh, float SwordRevealAlpha, float ColorChangeAlpha, float HDRMultiplierAlpha);
	void SetupProjectileHitAudio(struct FVector& ProjectileImpactLocation, class AActor* HitActor);
	void SetFuseColorBasedOnTeam();
	void RestartSimulating();
	void PlayPreExplosionEfffects();
	void OnRep_bSimulationRunning();
	void OnAttachedBuildingDestroyed(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnAttachedActorDestroyed(class AActor* DestroyedActor);
	void BP_OnProjectileStopped();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
