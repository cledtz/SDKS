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

// 0x150 (0xBD0 - 0xA80)
// Class UnstableLiquidGunRuntime.FortLiquidGunProjectile
class AFortLiquidGunProjectile : public AFortProjectileBase
{
public:
	class USceneComponent*                       AttachComponent;                                   // 0xA80(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AttachOffset;                                      // 0xA88(0x18)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProjectileIndex;                                   // 0xAA0(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_859E[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               StopNormal;                                        // 0xAA8(0x18)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ALiquidRibbonManager*                  RibbonManager;                                     // 0xAC0(0x8)(BlueprintVisible, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScalableFloat                        MinDistBetweenProjectilesForSplineCollisionTest;   // 0xAC8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScalableFloat                        MinDistBetweenInLineProjectilesForSplineCollisionTest; // 0xAF0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScalableFloat                        MinProjectileVelocityAngleToBeInLine;              // 0xB18(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 BroadSphereOverlapTraceChannel;                    // 0xB40(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_859F[0x3];                                     // Fixing Size After Last Property..
	class FName                                  CapsuleTraceProfileName;                           // 0xB44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCapsuleTraceComplex;                              // 0xB48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_85A0[0x7];                                     // Fixing Size After Last Property..
	struct FVector_NetQuantize                   RandomDetachmentAngleFirstHalf;                    // 0xB50(0x18)(BlueprintVisible, BlueprintReadOnly, Net, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                   RandomDetachmentAngleSecondHalf;                   // 0xB68(0x18)(BlueprintVisible, BlueprintReadOnly, Net, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawDebugCollision;                               // 0xB80(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDrawDebugCollisionOnlyCapsuleTraceHits;           // 0xB81(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ELiquidRibbonDetachmentReason     DetachmentReason;                                  // 0xB82(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_85A1[0x4D];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortLiquidGunProjectile");
		return Clss;
	}

	void SetDetachmentReason(enum class ELiquidRibbonDetachmentReason InDetachmentReason);
	void HandleSplineHit(struct FHitResult& Hit);
	enum class ELiquidRibbonDetachmentReason GetDetachmentReason();
};

// 0x1B8 (0x440 - 0x288)
// Class UnstableLiquidGunRuntime.LiquidRibbonManager
class ALiquidRibbonManager : public AActor
{
public:
	int32                                        PointsPerSegment;                                  // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_85A6[0x4];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        MaxSegmentLengthBeforeBreak;                       // 0x290(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        SplineCurveTension;                                // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinPointSize;                                      // 0x2BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxPointSize;                                      // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumPointsAtMinPointSize;                           // 0x2C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumPointsAtMaxPointSize;                           // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SplineLengthForSizeCalculation;                    // 0x2CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumPointsToTaperDownSplineEndSize;                 // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinSplineEndTaperSize;                             // 0x2D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TaperSizeAtDetachment_RemapClosenessToBreakageOldMin; // 0x2D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TaperSizeAtDetachment_RemapClosenessToBreakageOldMax; // 0x2DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinPointSizePercentForFlashIntensity;              // 0x2E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxPointSizePercentForFlashIntensity;              // 0x2E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PositionsNiagaraParamName;                         // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RibbonIDsNiagaraParamName;                         // 0x2EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RibbonVisibilitiesNiagaraParamName;                // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FlashIntensitiesNiagaraParamName;                  // 0x2F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RibbonSizesNiagaraParamName;                       // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_85A7[0x4];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        CalculateBaseCurlOffset_MaxSegmentLength;          // 0x300(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScalableFloat                        CalculateBaseCurlOffset_MaxTimeSinceDetachment;    // 0x328(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScalableFloat                        CalculateBaseCurlOffset_TowardPerpendicularMult;   // 0x350(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScalableFloat                        CalculateBaseCurlOffset_TowardEndMult;             // 0x378(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScalableFloat                        CalculateBaseCurlOffset_TowardRandomMult;          // 0x3A0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UCurveFloat*                           TimeSinceDetachmentCurlCurve;                      // 0x3C8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScalableFloat                        TimeSinceDetachmentCurlCurve_MaxTime;              // 0x3D0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                        CurlingMaxClosenessToBreakage;                     // 0x3F8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_85A8[0x4];                                     // Fixing Size After Last Property..
	TArray<float>                                SegmentLengths;                                    // 0x400(0x10)(BlueprintVisible, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<struct FLiquidRibbonSplineDetachment> Detachments;                                       // 0x410(0x10)(BlueprintVisible, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<struct FLiquidRibbonSplineSegment>    SplineSegments;                                    // 0x420(0x10)(BlueprintVisible, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class AFortLiquidGunProjectile*>      Projectiles_Native;                                // 0x430(0x10)(BlueprintVisible, ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiquidRibbonManager");
		return Clss;
	}

	void SetNiagaraData(class UNiagaraComponent* NiagaraComponent, TArray<struct FVector>& Positions, TArray<int32>& RibbonIDs, TArray<bool>& RibbonVisibilities, TArray<float>& FlashIntensities, TArray<int32>& RibbonSizes);
	void RunSplineCollisionTestOnProjectiles();
	struct FVector GetPointOnSegment(float T, struct FLiquidRibbonSplineSegment& Segment);
	struct FLiquidRibbonSplineDetachment GetOrAddDetachment(int32 RibbonID, struct FLiquidRibbonSplineSegment& Segment);
	int32 GetFirstVisiblePointIndex();
	void CalculateSplinePointsAndSetNiagaraData(TArray<class AFortLiquidGunProjectile*>& Projectiles, bool bAttachSplineToMuzzle, class UNiagaraComponent* NiagaraComponent, TArray<struct FVector>* OutAllPositions, TArray<int32>* OutRibbonIDs, TArray<bool>* OutRibbonVisibilities, TArray<float>* OutFlashIntensities, TArray<int32>* OutRibbonSizes);
	TArray<struct FLiquidRibbonSplineSegment> CalculateSegments(TArray<struct FVector>& Points, float Tension);
	float CalculatePointSize(int32 SegmentIndex, int32 PointIndex);
	float CalculatePointFlashIntensity(int32 PointSize);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
