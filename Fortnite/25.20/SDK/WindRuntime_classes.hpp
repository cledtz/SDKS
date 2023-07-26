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

// 0x0 (0x15D0 - 0x15D0)
// Class WindRuntime.FortPlayerWindTunnelAnimInstance
class UFortPlayerWindTunnelAnimInstance : public UFortPlayerAnimInstanceProxy
{
public:
	uint8                                        bApplyWindSlideAdditive : 1;                       // Mask: 0x1, PropSize: 0x10x15C8(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7F4F[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPlayerWindTunnelAnimInstance");
		return Clss;
	}

};

// 0x18 (0x40 - 0x28)
// Class WindRuntime.WindCheatManager
class UWindCheatManager : public UChildCheatManager
{
public:
	TSubclassOf<class UGameplayEffect>           InflateEffectClass;                                // 0x28(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UGameplayEffect>           DeflateEffectClass;                                // 0x30(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MinBalloonsOnPlayer;                               // 0x38(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxBalloonsOnPlayer;                               // 0x3C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WindCheatManager");
		return Clss;
	}

	void ReleaseBalloonOnSelf(int32 NumBalloons);
	void InflateBalloonOnSelf(int32 NumBalloons);
};

// 0x108 (0x3A0 - 0x298)
// Class WindRuntime.WindField
class AWindField : public AFieldSystemActor
{
public:
	float                                        StartTime;                                         // 0x298(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StopTime;                                          // 0x29C(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IncomingDuration;                                  // 0x2A0(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutgoingDuration;                                  // 0x2A4(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StrengthMultiplier;                                // 0x2A8(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsActive;                                         // 0x2AC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7F52[0xF3];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WindField");
		return Clss;
	}

	void SetActive(bool bInIsActive);
	void RemoveIgnoredActor(class AActor* Actor);
	void RemoveCollider(class UShapeComponent* ShapeComponent);
	void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* Other, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* Other, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void AddIgnoredActor(class AActor* Actor);
	void AddCollider(class UShapeComponent* ShapeComponent);
};

// 0x90 (0x430 - 0x3A0)
// Class WindRuntime.LinearWindField
class ALinearWindField : public AWindField
{
public:
	struct FVector                               Direction;                                         // 0x3A0(0x18)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FieldStrength;                                     // 0x3B8(0x4)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ForceStrength;                                     // 0x3BC(0x4)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  PawnForceName;                                     // 0x3C0(0x4)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PawnForceStrength;                                 // 0x3C4(0x4)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URadialVector*                         RadialVector;                                      // 0x3C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URadialFalloff*                        RadialFalloff;                                     // 0x3D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOperatorField*                        OperatorField;                                     // 0x3D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7F53[0x50];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LinearWindField");
		return Clss;
	}

};

// 0x150 (0x4F0 - 0x3A0)
// Class WindRuntime.RadialWindField
class ARadialWindField : public AWindField
{
public:
	struct FScalableFloat                        FieldRadius;                                       // 0x3A0(0x28)(Edit, Transient, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        FieldStrength;                                     // 0x3C8(0x28)(Edit, Transient, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ForceRadius;                                       // 0x3F0(0x28)(Edit, Transient, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ForceStrength;                                     // 0x418(0x28)(Edit, Transient, Protected, NativeAccessSpecifierProtected)
	class UCurveFloat*                           ForceStrengthDistanceFalloff;                      // 0x440(0x8)(Edit, ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  PawnForceName;                                     // 0x448(0x4)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7F54[0x4];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        PawnForceStrength;                                 // 0x450(0x28)(Edit, Transient, Protected, NativeAccessSpecifierProtected)
	class UCurveFloat*                           PawnForceStrengthDistanceFalloff;                  // 0x478(0x8)(Edit, ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bPawnForceIsPush;                                  // 0x480(0x1)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7F55[0x7];                                     // Fixing Size After Last Property..
	class URadialVector*                         RadialVector;                                      // 0x488(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URadialFalloff*                        RadialFalloff;                                     // 0x490(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOperatorField*                        OperatorField;                                     // 0x498(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7F56[0x50];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RadialWindField");
		return Clss;
	}

};

// 0xDD0 (0x1440 - 0x670)
// Class WindRuntime.WindSplineComponent
class UWindSplineComponent : public USplineComponent
{
public:
	uint8                                        Pad_7F59[0x18];                                    // Fixing Size After Last Property..
	struct FScalableFloat                        DisableSafeZonePhaseIndex;                         // 0x688(0x28)(Edit, NativeAccessSpecifierPrivate)
	class UStaticMesh*                           StaticMesh;                                        // 0x6B0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMesh*                           StartStaticMesh;                                   // 0x6B8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMesh*                           EndStaticMesh;                                     // 0x6C0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ESplineMeshAxis                   MeshForwardAxis;                                   // 0x6C8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7F5A[0x7];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        MeshRollVariance;                                  // 0x6D0(0x28)(Edit, NativeAccessSpecifierPrivate)
	class FName                                  ActiveSectionStartMaterialParamName;               // 0x6F8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  ActiveSectionEndMaterialParamName;                 // 0x6FC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        TargetingRefreshRate;                              // 0x700(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        TargetingRadius;                                   // 0x728(0x28)(Edit, NativeAccessSpecifierPrivate)
	TArray<enum class EObjectTypeQuery>          TargetObjectTypes;                                 // 0x750(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FGameplayTagQuery                     TargetTagQuery;                                    // 0x760(0x48)(Edit, NativeAccessSpecifierPrivate)
	struct FGameplayTagQuery                     BlockageTagQuery;                                  // 0x7A8(0x48)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        BlockageSubdivisions;                              // 0x7F0(0x28)(Edit, NativeAccessSpecifierPrivate)
	TArray<struct FWindSplineTargetEffects>      TargetEffects;                                     // 0x818(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	TMap<enum class EFortPhysicsObjectType, struct FScalableFloat> ObjectTypeToMaxTargetCount;                        // 0x828(0x50)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MaxTargetCountReachedExpelDuration;                // 0x878(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        SkydivingLandingAngle;                             // 0x8A0(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        RampUpSpeed;                                       // 0x8C8(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        RampDownSpeed;                                     // 0x8F0(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        ForwardForceFallOffStartDistance;                  // 0x918(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        ForwardForceMagnitude;                             // 0x940(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        ReverseForceMagnitude;                             // 0x968(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        ForwardForceDistanceFallOffExponent;               // 0x990(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        InwardForceInnerRadius;                            // 0x9B8(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        InwardForceOuterRadiusAcceleration;                // 0x9E0(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        InwardForceInnerRadiusDeceleration;                // 0xA08(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        InwardForceInnerRadiusSpeedThreshold;              // 0xA30(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        InwardForceOuterRadiusSpeedThreshold;              // 0xA58(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        InwardForceMaxReductionFromSteering;               // 0xA80(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        InwardForceMaxMultiplierWhenSteering;              // 0xAA8(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        InwardForceMaxSteerAngle;                          // 0xAD0(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        InwardForceLowVelocityThreshold;                   // 0xAF8(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        InwardForceLowVelocityMinValue;                    // 0xB20(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        InwardForceSteeringReduceAccelerationPower;        // 0xB48(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        InwardForceSteeringReduceDecelerationPower;        // 0xB70(0x28)(Edit, NativeAccessSpecifierPrivate)
	TMap<enum class EFortPhysicsSimSize, struct FWindSplineForceModifiers> SizeForceModifiers;                                // 0xB98(0x50)(Edit, NativeAccessSpecifierPrivate)
	TMap<enum class EFortPhysicsObjectType, struct FWindSplineForceModifiers> ObjectTypeForceModifiers;                          // 0xBE8(0x50)(Edit, NativeAccessSpecifierPrivate)
	TArray<struct FWindSplineTagBasedForceModifiers> QueryBasedForceModifiers;                          // 0xC38(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FGameplayTagQuery                     PawnSkydivingTimeLimitQuery;                       // 0xC48(0x48)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        PawnSkydivingTimeLimit;                            // 0xC90(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        PawnSkydivingMinDistanceAboveGround;               // 0xCB8(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        AutoWakeUpPhysicsObjects;                          // 0xCE0(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        FieldMagnitudeBase;                                // 0xD08(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        FieldMinMagnitudeAfterFalloff;                     // 0xD30(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        FieldMaxMagnitudeAfterFalloff;                     // 0xD58(0x28)(Edit, NativeAccessSpecifierPrivate)
	TSubclassOf<class UAnimInstance>             PlayerWindAnimationLayer;                          // 0xD80(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnWindSplineDisabled;                              // 0xD88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnWindSplineEnabled;                               // 0xD98(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	struct FWindSplineTargetData                 TargetData;                                        // 0xDA8(0x1B8)(Net, Transient, RepNotify, NativeAccessSpecifierPrivate)
	struct FWindSplineBlockageArray              Blockages;                                         // 0xF60(0x118)(Net, Transient, RepNotify, NativeAccessSpecifierPrivate)
	class UFieldSystemComponent*                 FieldSystemComponent;                              // 0x1078(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UUniformVector*                        UniformVector;                                     // 0x1080(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBoxFalloff*                           BoxFalloff;                                        // 0x1088(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UOperatorField*                        BoxOperatorField;                                  // 0x1090(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FWindSplineMeshData>           MeshDataArray;                                     // 0x1098(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<class UFXSystemComponent*>            FXComponents;                                      // 0x10A8(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7F5B[0x388];                                   // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WindSplineComponent");
		return Clss;
	}

	void OnRep_TargetData();
	void OnRep_Blockages();
	void HandleSafeZoneUpdated();
	void GetWindDataAtLocation(struct FVector& InTargetLocation, struct FVector* OutDirection, float* OutAttenuation);
	float GetTargetingRadius();
	void GetClosestActiveLocations(struct FVector& InTargetLocation, bool* bIsClosestPointActive, struct FVector* ClosestPointOnSpline, TArray<struct FVector>* ClosestActiveLocations);
	void Enable();
	void Disable();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
