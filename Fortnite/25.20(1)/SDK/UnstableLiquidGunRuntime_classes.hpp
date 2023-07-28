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

// 0x150 (0xBE0 - 0xA90)
// Class UnstableLiquidGunRuntime.FortLiquidGunProjectile
class UFortLiquidGunProjectile : public UFortProjectileBase
{
public:
	class USceneComponent*                       AttachComponent;                                   // 0xA90(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AttachOffset;                                      // 0xA98(0x18)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProjectileIndex;                                   // 0xAB0(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_281E[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               StopNormal;                                        // 0xAB8(0x18)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULiquidRibbonManager*                  RibbonManager;                                     // 0xAD0(0x8)(BlueprintVisible, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScalableFloat                        MinDistBetweenProjectilesForSplineCollisionTest;   // 0xAD8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScalableFloat                        MinDistBetweenInLineProjectilesForSplineCollisionTest; // 0xB00(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScalableFloat                        MinProjectileVelocityAngleToBeInLine;              // 0xB28(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 BroadSphereOverlapTraceChannel;                    // 0xB50(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_281F[0x3];                                     // Fixing Size After Last Property..
	class FName                                  CapsuleTraceProfileName;                           // 0xB54(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCapsuleTraceComplex;                              // 0xB58(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2820[0x7];                                     // Fixing Size After Last Property..
	struct FVector_NetQuantize                   RandomDetachmentAngleFirstHalf;                    // 0xB60(0x18)(BlueprintVisible, BlueprintReadOnly, Net, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                   RandomDetachmentAngleSecondHalf;                   // 0xB78(0x18)(BlueprintVisible, BlueprintReadOnly, Net, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawDebugCollision;                               // 0xB90(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDrawDebugCollisionOnlyCapsuleTraceHits;           // 0xB91(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ELiquidRibbonDetachmentReason     DetachmentReason;                                  // 0xB92(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2821[0x4D];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortLiquidGunProjectile");
		return Clss;
	}

	void SetDetachmentReason(enum class ELiquidRibbonDetachmentReason InDetachmentReason);
	void HandleSplineHit(struct FHitResult& Hit);
	enum class ELiquidRibbonDetachmentReason GetDetachmentReason();
};

// 0x1B8 (0x448 - 0x290)
// Class UnstableLiquidGunRuntime.LiquidRibbonManager
class ULiquidRibbonManager : public UActor
{
public:
	int32                                        PointsPerSegment;                                  // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2826[0x4];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        MaxSegmentLengthBeforeBreak;                       // 0x298(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        SplineCurveTension;                                // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinPointSize;                                      // 0x2C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxPointSize;                                      // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumPointsAtMinPointSize;                           // 0x2CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumPointsAtMaxPointSize;                           // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SplineLengthForSizeCalculation;                    // 0x2D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumPointsToTaperDownSplineEndSize;                 // 0x2D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinSplineEndTaperSize;                             // 0x2DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TaperSizeAtDetachment_RemapClosenessToBreakageOldMin; // 0x2E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TaperSizeAtDetachment_RemapClosenessToBreakageOldMax; // 0x2E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinPointSizePercentForFlashIntensity;              // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxPointSizePercentForFlashIntensity;              // 0x2EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PositionsNiagaraParamName;                         // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RibbonIDsNiagaraParamName;                         // 0x2F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RibbonVisibilitiesNiagaraParamName;                // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FlashIntensitiesNiagaraParamName;                  // 0x2FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RibbonSizesNiagaraParamName;                       // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2827[0x4];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        CalculateBaseCurlOffset_MaxSegmentLength;          // 0x308(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScalableFloat                        CalculateBaseCurlOffset_MaxTimeSinceDetachment;    // 0x330(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScalableFloat                        CalculateBaseCurlOffset_TowardPerpendicularMult;   // 0x358(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScalableFloat                        CalculateBaseCurlOffset_TowardEndMult;             // 0x380(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScalableFloat                        CalculateBaseCurlOffset_TowardRandomMult;          // 0x3A8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UCurveFloat*                           TimeSinceDetachmentCurlCurve;                      // 0x3D0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScalableFloat                        TimeSinceDetachmentCurlCurve_MaxTime;              // 0x3D8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                        CurlingMaxClosenessToBreakage;                     // 0x400(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2828[0x4];                                     // Fixing Size After Last Property..
	TArray<float>                                SegmentLengths;                                    // 0x408(0x10)(BlueprintVisible, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<struct FLiquidRibbonSplineDetachment> Detachments;                                       // 0x418(0x10)(BlueprintVisible, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<struct FLiquidRibbonSplineSegment>    SplineSegments;                                    // 0x428(0x10)(BlueprintVisible, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class UFortLiquidGunProjectile*>      Projectiles_Native;                                // 0x438(0x10)(BlueprintVisible, ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

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
	void CalculateSplinePointsAndSetNiagaraData(TArray<class UFortLiquidGunProjectile*>& Projectiles, bool bAttachSplineToMuzzle, class UNiagaraComponent* NiagaraComponent, TArray<struct FVector>* OutAllPositions, TArray<int32>* OutRibbonIDs, TArray<bool>* OutRibbonVisibilities, TArray<float>* OutFlashIntensities, TArray<int32>* OutRibbonSizes);
	TArray<struct FLiquidRibbonSplineSegment> CalculateSegments(TArray<struct FVector>& Points, float Tension);
	float CalculatePointSize(int32 SegmentIndex, int32 PointIndex);
	float CalculatePointFlashIntensity(int32 PointSize);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
