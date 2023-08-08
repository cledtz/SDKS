#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xA90 - 0xA90)
// Class BelongTreaty_FloodRuntime.BelongTreatyProjectile
class UBelongTreatyProjectile : public UFortProjectileBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BelongTreatyProjectile");
		return Clss;
	}

	void GetStandingBaseAndConnected(float FloorDistanceTolerance, TArray<class UBuildingSMActor*>* OutNeighboringBuildingActors);
};

// 0x110 (0x5C0 - 0x4B0)
// Class BelongTreaty_FloodRuntime.BelongTreatyProjectileMovementComponent
class UBelongTreatyProjectileMovementComponent : public UFortProjectileMovementComponent_FloorSnapped
{
public:
	struct FGameplayTagQuery                     PhaseThroughActorsTagQuery;                        // 0x4B0(0x48)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        InitialProjectileSpeed;                            // 0x4F8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        StandardSpeed;                                     // 0x520(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	float                                        ServerSpawnTime;                                   // 0x548(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_24ED[0x4];                                     // Fixing Size After Last Property
	struct FTimerHandle                          EaseInRecurringTimerHandle;                        // 0x550(0x8)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTimerHandle                          EaseInTimerHandle;                                 // 0x558(0x8)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                           EaseInCurve;                                       // 0x560(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        TransitionDuration;                                // 0x568(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        EaseInUpdateFrequency;                             // 0x590(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                        Pad_24F0[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BelongTreatyProjectileMovementComponent");
		return Clss;
	}

	void OnRep_ServerSpawnTime();
	void AddHitActorsIgnoredWhenMoving(TArray<struct FHitResult>& HitsToAdd);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
