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

// 0x978 (0x9C0 - 0x48)
// Class GrindRailRuntime.FortCameraModifier_Grinding
class UFortCameraModifier_Grinding : public UCameraModifier
{
public:
	struct FScalableFloat                        bUseNativeCalculation;                             // 0x48(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UCurveFloat*                           BlendInCurve;                                      // 0x70(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                           BlendOutCurve;                                     // 0x78(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SnapToGrindingLocation;                            // 0x80(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ADSAlphaInterpSpeed;                               // 0xA8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        CurrentForwardInterpSpeed;                         // 0xD0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxRightSpeedOldRangeForForward;                   // 0xF8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxRightSpeedNewRangeForForward;                   // 0x120(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinForwardSpeedOldRangeForForward;                 // 0x148(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxForwardSpeedOldRangeForForward;                 // 0x170(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinForwardSpeedNewRangeForForward;                 // 0x198(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxForwardSpeedNewRangeForForward;                 // 0x1C0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinUpSpeedOldRangeForForward;                      // 0x1E8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxUpSpeedOldRangeForForward;                      // 0x210(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinUpSpeedNewRangeForForward;                      // 0x238(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxUpSpeedNewRangeForForward;                      // 0x260(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BaseForwardMultiplier;                             // 0x288(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SpeedUpBoosterForwardMultiplier;                   // 0x2B0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SprintingForwardMultiplier;                        // 0x2D8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        RightSpeedOldRangeForRight;                        // 0x300(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        RightSpeedNewRangeForRight;                        // 0x328(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxUpSpeedOldRangeForRight;                        // 0x350(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxUpSpeedNewRangeForRight;                        // 0x378(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinForwardSpeedOldRangeForRight;                   // 0x3A0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxForwardSpeedOldRangeForRight;                   // 0x3C8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinForwardSpeedNewRangeForRight;                   // 0x3F0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxForwardSpeedNewRangeForRight;                   // 0x418(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BaseRightMultiplier;                               // 0x440(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SpeedUpBoostRightMultiplier;                       // 0x468(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SprintingRightMultiplier;                          // 0x490(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        CurrentRightInterpSpeed;                           // 0x4B8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        UpSpeedOldRangeForUp;                              // 0x4E0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        UpSpeedNewRangeForUp;                              // 0x508(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        CurrentUpInterpSpeed;                              // 0x530(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BaseUpMultiplier;                                  // 0x558(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SpeedUpBoostUpMultiplier;                          // 0x580(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SprintingUpMultiplier;                             // 0x5A8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinForwardSpeedOldRangeForLean;                    // 0x5D0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxForwardSpeedOldRangeForLean;                    // 0x5F8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinForwardSpeedNewRangeForLean;                    // 0x620(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxForwardSpeedNewRangeForLean;                    // 0x648(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MultiplierForMaxNewLeanRange;                      // 0x670(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        CurrentLeanInterpSpeed;                            // 0x698(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxSpeedOldRangeForFOV;                            // 0x6C0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxSpeedNewRangeForFOV;                            // 0x6E8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BaseFOV;                                           // 0x710(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SpeedUpBoosterFOV;                                 // 0x738(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SprintingFOV;                                      // 0x760(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        CurrentFOVInterpSpeed;                             // 0x788(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        DeltaDecreaseInZForOffset;                         // 0x7B0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        CurrentOffsetInterpSpeed;                          // 0x7D8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        StraightnessMultiplierForOffset;                   // 0x800(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        FinalOffsetForwardDelta;                           // 0x828(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        FinalOffsetUpDelta;                                // 0x850(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        FinalOffsetRightDelta;                             // 0x878(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_7FB1[0x50];                                    // Fixing Size After Last Property..
	bool                                         bCachedUseNativeCalculation;                       // 0x8F0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7FB2[0xCF];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCameraModifier_Grinding");
		return Clss;
	}

};

// 0x100 (0xA78 - 0x978)
// Class GrindRailRuntime.FortGrindRail
class AFortGrindRail : public ABuildingGameplayActor
{
public:
	TArray<class USplineMeshComponent*>          GrindRailMeshes;                                   // 0x978(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<struct FGrindRailBoosterInfo>         BoosterInfos;                                      // 0x988(0x10)(BlueprintVisible, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class USplineComponent*                      SplineComponent;                                   // 0x998(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        EnableBoosters;                                    // 0x9A0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        EnableGrinding;                                    // 0x9C8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        EnableProjectileCollision;                         // 0x9F0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	bool                                         bDisableBooster;                                   // 0xA18(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7FB7[0xF];                                     // Fixing Size After Last Property..
	TSoftObjectPtr<class AFortGrindRail>         HeadConnectedRail;                                 // 0xA28(0x28)(Edit, EditConst, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class AFortGrindRail>         TailConnectedRail;                                 // 0xA50(0x28)(Edit, EditConst, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortGrindRail");
		return Clss;
	}

	void UpdateTransientComponentTransforms(const TArray<class USceneComponent*>& TransientSceneComponents);
	void SetupMeshInfo(class USplineMeshComponent* SplineMeshComponent);
	void OnRep_DisableBooster();
	void OnPlaylistDataReady(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags);
	void NativeGetNextPositionToGrind(float DistanceToTravel, float CurrentDistanceAlongSpline, float RightLeanValue, struct FVector* OutNextLocation, bool* bGotToEnd, float* NextLocationOnRail, enum class EGrindRailBoosterMode* BoosterMode, bool* bHitObstacle, bool* bNewRail, float* DistanceAlongNewRail, class AFortGrindRail** TheNewRail, bool* bNewRailReverseDirection);
	bool IsTipCapped(bool bStartTip);
	bool IsGrindRailEnabled();
	bool HasTailConnection();
	bool HasHeadConnection();
	void GenerateMeshesAlongSpline();
	void ForceClearBoosters();
	void BPRerunConstructionScript();
};

// 0x0 (0x978 - 0x978)
// Class GrindRailRuntime.FortGrindRailConnector
class AFortGrindRailConnector : public ABuildingGameplayActor
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortGrindRailConnector");
		return Clss;
	}

};

// 0x2E8 (0x730 - 0x448)
// Class GrindRailRuntime.FortGrindRailLayerAnimInstance
class UFortGrindRailLayerAnimInstance : public UFortBaseLayerAnimInstance
{
public:
	class UAnimMontage*                          LancePickaxeMontage;                               // 0x448(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          ScythePickaxeMontage;                              // 0x450(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          FruitCakePickaxeMontage;                           // 0x458(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  LeanAlphaCurve;                                    // 0x460(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  MeleeTwistCurve;                                   // 0x464(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InterruptibleCurve;                                // 0x468(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7FB9[0x4];                                     // Fixing Size After Last Property..
	TMap<class FName, float>                     SlopeWarpingCurveMap;                              // 0x470(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	double                                       LeanBwdVelocityThreshold;                          // 0x4C0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedAnimRelevancyData              BwdStartCachedData;                                // 0x4C8(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_7FBA[0x4];                                     // Fixing Size After Last Property..
	double                                       IsMovingThresholdSpeed;                            // 0x4E0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       NoisePlayRateSprintSpeedThreshold;                 // 0x4E8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             NoisePlayRateNormalSpeedInputRange;                // 0x4F0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             NoisePlayRateNormalSpeedOutputRange;               // 0x500(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             NoisePlayRateHighSpeedInputRange;                  // 0x510(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             NoisePlayRateHighSpeedOutputRange;                 // 0x520(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             CombatNoisePlayRateSpeedInputRange;                // 0x530(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             CombatNoisePlayRateSpeedOutputRange;               // 0x540(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       CombatNoiseAlphaTargeting;                         // 0x550(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       CombatNoiseAlphaNonTargeting;                      // 0x558(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       RootLeanAlphaInterpSpeed;                          // 0x560(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       SlopeWarpAlphaInterpSpeed;                         // 0x568(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       SplineRelativeAimYawDeltaThreshold;                // 0x570(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       AimYawSmoothInterpolationCoefficient;              // 0x578(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       IsSmoothingYawThreshold;                           // 0x580(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       LeanBWDThreshold;                                  // 0x588(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       MuteUpperBodyAlphaMeleeWeapon;                     // 0x590(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       MuteUpperBodyAlphaNonMeleeWeapon;                  // 0x598(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       MuteUpperBodyAlphaFruitcakePickaxe;                // 0x5A0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       MuteUpperBodyAlphaLanceSyctheOrDualWeild;          // 0x5A8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       BaseLeanDirection;                                 // 0x5B0(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsGrinding;                                       // 0x5B8(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7FBB[0x7];                                     // Fixing Size After Last Property..
	double                                       CurrentSpeed;                                      // 0x5C0(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       LeanDirection;                                     // 0x5C8(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSprinting;                                        // 0x5D0(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7FBC[0x7];                                     // Fixing Size After Last Property..
	double                                       LeanForward;                                       // 0x5D8(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsWeaponActive;                                   // 0x5E0(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7FBD[0x7];                                     // Fixing Size After Last Property..
	struct FRotator                              SplineRelativeAim;                                 // 0x5E8(0x18)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortAnimInput_GrindRail              GrindRailInput;                                    // 0x600(0x18)(BlueprintVisible, Transient, NoDestructor, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UFortPawnComponent_GrindRail> GrindingComponent;                                 // 0x618(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UCharacterMovementComponent> MovementComponent;                                 // 0x620(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AFortPlayerPawn>        FortPlayerPawn;                                    // 0x628(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsFalling;                                        // 0x630(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7FBE[0x7];                                     // Fixing Size After Last Property..
	double                                       LeanAlpha;                                         // 0x638(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsMoving;                                         // 0x640(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShould180Turn;                                    // 0x641(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldPlayEntry;                                  // 0x642(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7FBF[0x5];                                     // Fixing Size After Last Property..
	double                                       NoisePlayRate;                                     // 0x648(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLeanBwd;                                        // 0x650(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLeft180Turn;                                    // 0x651(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShould180TurnAgain;                               // 0x652(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsTurning;                                        // 0x653(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldExitLocomotion;                             // 0x654(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsBoosting;                                       // 0x655(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEarlyExitFromEntry;                               // 0x656(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAimFWD;                                           // 0x657(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAimBWD;                                           // 0x658(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAimLFT;                                           // 0x659(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAimRGT;                                           // 0x65A(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7FC0[0x5];                                     // Fixing Size After Last Property..
	double                                       AimFWDDeltaAngleDegrees;                           // 0x660(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       AimBWDDeltaAngleDegrees;                           // 0x668(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       AimLFTDeltaAngleDegrees;                           // 0x670(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       AimRGTDeltaAngleDegrees;                           // 0x678(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       NegativeYaw;                                       // 0x680(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              MeleeTwistRot;                                     // 0x688(0x18)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	double                                       BwdStartCachedTime;                                // 0x6A0(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Velocity;                                          // 0x6A8(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsEntryLeft;                                      // 0x6B0(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsEntryFromAir;                                   // 0x6B1(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsEntryRight;                                     // 0x6B2(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnteredFromInteraction;                           // 0x6B3(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7FC1[0x4];                                     // Fixing Size After Last Property..
	double                                       SlopeWarpAlpha;                                    // 0x6B8(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       SplineRelativeAimYaw;                              // 0x6C0(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       AimYawSmoothed;                                    // 0x6C8(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSmoothingYaw;                                   // 0x6D0(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7FC2[0x7];                                     // Fixing Size After Last Property..
	double                                       LastSplineRelativeAimYaw;                          // 0x6D8(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       RootLeanAlpha;                                     // 0x6E0(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       MuteUpperBodyAlpha;                                // 0x6E8(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLanceType;                                      // 0x6F0(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWasSprinting;                                     // 0x6F1(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStateRuleToBoostLoop;                             // 0x6F2(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInAction;                                       // 0x6F3(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7FC3[0x4];                                     // Fixing Size After Last Property..
	double                                       CombatNoisePlayRate;                               // 0x6F8(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       CombatNoiseAlpha;                                  // 0x700(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsTwoHandedMelee;                                 // 0x708(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldCorrectUpperBody;                           // 0x709(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBothHandsDown;                                    // 0x70A(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7FC4[0x5];                                     // Fixing Size After Last Property..
	double                                       TurnInPlaceAnimCurveValue;                         // 0x710(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       TurnRotationAmountCurveValue;                      // 0x718(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7FC5[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortGrindRailLayerAnimInstance");
		return Clss;
	}

	void HandleBegunGrinding(bool bWasAlreadyGrinding, bool bWasJumpingFromRail, bool bFromInteraction, const struct FVector& PreviousPlayerLocation);
	void AnimNotify_IdleEnter(class UAnimNotify* Notify);
	void AnimNotify_EntryExit(class UAnimNotify* Notify);
	void AnimNotify_EntryEnter(class UAnimNotify* Notify);
};

// 0x0 (0xA0 - 0xA0)
// Class GrindRailRuntime.GrindRailEditorComponent
class UGrindRailEditorComponent : public UActorComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GrindRailEditorComponent");
		return Clss;
	}

};

// 0x0 (0x30 - 0x30)
// Class GrindRailRuntime.GrindRailMovementControls
class UGrindRailMovementControls : public UFortMovementControls
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GrindRailMovementControls");
		return Clss;
	}

};

// 0x68 (0x110 - 0xA8)
// Class GrindRailRuntime.FortAthenaAIBotEvaluator_GrindRail
class UFortAthenaAIBotEvaluator_GrindRail : public UFortAthenaAIBotEvaluator
{
public:
	struct FGameplayTag                          GrindRailTag;                                      // 0xA8(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7FC6[0x4];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        GrindDuration;                                     // 0xB0(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        GrindDurationRandomDeviation;                      // 0xD8(0x28)(Edit, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7FC7[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_GrindRail");
		return Clss;
	}

};

// 0x190 (0xAF0 - 0x960)
// Class GrindRailRuntime.FortGameplayCueNotifyLoop_Grinding
class AFortGameplayCueNotifyLoop_Grinding : public AFortGameplayCueNotify_Loop
{
public:
	bool                                         bFeetHasLanded;                                    // 0x960(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableNativeAudioUpdate;                          // 0x961(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7FC8[0x2];                                     // Fixing Size After Last Property..
	float                                        ForwardChangedValueThreshold;                      // 0x964(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortAudioFloatParameter              Speed;                                             // 0x968(0x38)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortAudioFloatParameter              Forward;                                           // 0x9A0(0x38)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortAudioFloatParameter              Boost;                                             // 0x9D8(0x38)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortAudioFloatParameter              Curve;                                             // 0xA10(0x38)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortAudioFloatParameter              IsGrinding;                                        // 0xA48(0x38)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortAudioFloatParameter              IsSlowDown;                                        // 0xA80(0x38)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  LeanForwardSpeedName;                              // 0xAB8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TurnOnSpeedFXName;                                 // 0xABC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TurnOnSpeedFXThreshold;                            // 0xAC0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UFXSystemComponent>     EffectsComponent;                                  // 0xAC4(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7FC9[0x4];                                     // Fixing Size After Last Property..
	class UAudioComponent*                       AudioComponent;                                    // 0xAD0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0xAD8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortPawnComponent_GrindRail*          GrindComponent;                                    // 0xAE0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7FCA[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortGameplayCueNotifyLoop_Grinding");
		return Clss;
	}

	void OnForwardChanged(bool bNewState);
	void CacheReferences(class UAudioComponent* InAudioComponent, class UFXSystemComponent* InEffectsComponent, class AFortPlayerPawn* InPlayerPawn, class UFortPawnComponent_GrindRail* InGrindComponent);
};

// 0xB68 (0xC10 - 0xA8)
// Class GrindRailRuntime.FortPawnComponent_GrindRail
class UFortPawnComponent_GrindRail : public UFortPawnComponent
{
public:
	uint8                                        Pad_7FD0[0x8];                                     // Fixing Size After Last Property..
	bool                                         bUseNativeSpeedCalculation;                        // 0xB0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7FD1[0x7];                                     // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            GrindRailChangedDelegate;                          // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            BegunGrindingDelegate;                             // 0xC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            HitObstacleWhenGrindingDelegate;                   // 0xD8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            BoosterModeChangedDelegate;                        // 0xE8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            SprintingStateChangedDelegate;                     // 0xF8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            EndedGrindingDelegate;                             // 0x108(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                        LeanForward;                                       // 0x118(0x4)(BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeanRight;                                         // 0x11C(0x4)(BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BaseLeanRight;                                     // 0x120(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentSpeedAlongSpline;                           // 0x124(0x4)(BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CurrentDirection;                                  // 0x128(0x18)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGrindRailBoosterMode             CurrentBoosterMode;                                // 0x140(0x1)(BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShould180Turn;                                    // 0x141(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShould180TurnAgain;                               // 0x142(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseProtoRotation;                                 // 0x143(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7FD2[0x4];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        BaseMaxLeanAngularSpeed;                           // 0x148(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BaseLeanInterpSpeed;                               // 0x170(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class AFortGrindRail>         ReplicatedGrindingRail;                            // 0x198(0x8)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class AFortGrindRail>         PreviousGrindingRail;                              // 0x1A0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class AFortGrindRail>         GrindingRail;                                      // 0x1A8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class AFortGrindRail>         NextGrindingRail;                                  // 0x1B0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsGrinding;                                       // 0x1B8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsGrindJumping;                                   // 0x1B9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsSprinting;                                      // 0x1BA(0x1)(BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bWeaponHolstered;                                  // 0x1BB(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bJumpInputReady;                                   // 0x1BC(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7FD3[0x3];                                     // Fixing Size After Last Property..
	float                                        GrindStartDistance;                                // 0x1C0(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CurrentDistanceAlongSpline;                        // 0x1C4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               NativeLastRailLocation;                            // 0x1C8(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        NativeMaxSpeed;                                    // 0x1E0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7FD4[0x4];                                     // Fixing Size After Last Property..
	struct FRotator                              GoalRotation;                                      // 0x1E8(0x18)(BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bIs180Turning;                                     // 0x200(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7FD5[0x3];                                     // Fixing Size After Last Property..
	float                                        HorizontalSplineAngleDeltaDegrees;                 // 0x204(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxAllowedInclineSplinePitch;                      // 0x208(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxAllowedDeclineSplinePitch;                      // 0x230(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxAllowedShootingSplinePitch;                     // 0x258(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TurnAngleThreshold;                                // 0x280(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AnimatedTurnDuration;                              // 0x2A8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BaseGrindRailYawRotationInterpSpeed;               // 0x2D0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        InclineGrindRailPitchRotationInterpSpeed;          // 0x2F8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        DeclineGrindRailPitchRotationInterpSpeed;          // 0x320(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ShootingGrindRailRotationInterpSpeed;              // 0x348(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        NextGrindRailDetectionOffset;                      // 0x370(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTag                          CancelGrindingTag;                                 // 0x398(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7FD6[0x4];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        GrindInteractionReentryCooldownTime;               // 0x3A0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ForceGrindingFromWalking;                          // 0x3C8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinTimeBeforeJumpSinceEntry;                       // 0x3F0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        CancelSprintLeanBackThreshold;                     // 0x418(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        WeaponHolsterCooldown;                             // 0x440(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        WeaponIsShootingCooldown;                          // 0x468(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        GravityForceWhenGoingDown;                         // 0x490(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        GravityForceWhenGoingUp;                           // 0x4B8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BoosterSprintingAccelerationOnSlowDownBooster;     // 0x4E0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BoosterAccelerationOnSpeedUpBooster;               // 0x508(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BoosterSlowDownBoosterDragMultiplier;              // 0x530(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BoosterSlowDownBoosterGoalSpeed;                   // 0x558(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BoosterMaxSpeed;                                   // 0x580(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ShootingMaxSpeedMultiplier;                        // 0x5A8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AngleForMaxSpeedIncreaseFromDownwardSlope;         // 0x5D0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxSpeedIncreaseFromDownwardSlope;                 // 0x5F8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxDragForSpeedSoftCap;                            // 0x620(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SpeedHardCap;                                      // 0x648(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SprintingAcceleration;                             // 0x670(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SprintingMaxSpeed;                                 // 0x698(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SpeedThresholdForTurn;                             // 0x6C0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TimeToTurnAround;                                  // 0x6E8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SpeedForMaxLeanAcceleration;                       // 0x710(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SpeedForMinLeanAcceleration;                       // 0x738(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxLeanAcceleration;                               // 0x760(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinLeanAcceleration;                               // 0x788(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        CanAccelerateByLeaningIntoTurns;                   // 0x7B0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        CurvatureForMaxLeanIntoTurnsAcceleration;          // 0x7D8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        LeanIntoTurnsMaxAcceleration;                      // 0x800(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        IncreasedMaxSpeedFromLeanIntoTurn;                 // 0x828(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        UseNewCalculationForSidewaysLeanBoost;             // 0x850(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SidewaysLeanBoostReductionRate;                    // 0x878(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SpeedForMaxBaseAcceleration;                       // 0x8A0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SpeedForMinBaseAcceleration;                       // 0x8C8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxBaseAcceleration;                               // 0x8F0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinBaseAcceleration;                               // 0x918(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BaseGoalSpeed;                                     // 0x940(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BaseMaxSpeed;                                      // 0x968(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        EnableFriction;                                    // 0x990(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BaseGoalDecelerationSpeed;                         // 0x9B8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        FrictionWhenNotLeaning;                            // 0x9E0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SpeedMultiplierOnHitRailCap;                       // 0xA08(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinSpeedAfterBouncedOffRailCap;                    // 0xA30(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_7FD7[0x1B8];                                   // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPawnComponent_GrindRail");
		return Clss;
	}

	void SetMovementStatus(struct FVector& NewStatus);
	void SetIsSprinting(bool bNewIsSprinting);
	void SetGrindDistanceOnSpline(float NewDistanceOnSpline);
	void SetGrindBaseActor(class AActor* NewBaseActor);
	void ServerUpdateWeaponHolstered(bool bNewHolstered, bool bPlayEquipAnim);
	void RemoveMoveIgnoreActors();
	void OnWalkingBaseChanged(class AFortPawn* Pawn, class AActor* NewBase);
	void OnRep_IsSprinting();
	void OnRep_GrindingRail();
	void OnRep_CurrentBoosterMode(enum class EGrindRailBoosterMode PreviousBoosterMode);
	void OnReloadInput();
	void OnMovementModeChanged(class ACharacter* InCharacter, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	void OnJumpInput(bool bPressed);
	void OnIgnoredBuildingEndPlay(class AActor* Actor, enum class EEndPlayReason EndPlayReason);
	void OnBaseMeshReady(class AFortPlayerPawn* Pawn, class USkeletalMeshComponent* MeshComponent);
	bool NativeIsShooting();
	bool IsWeaponADS();
	bool IsWeaponActive();
	bool IsUsingToggleSprint();
	bool IsGrinding();
	void HandleSprintInput(bool bPressed);
	void HandleRailJump();
	void HandleJumpOffEnd();
	void HandleHitWhenGrinding(struct FHitResult& Hit);
	void HandleGrindingEndedFromReplication();
	void HandleGrindingEnded();
	void HandleGrindingBegun();
	void HandleGrindFinishedAfterJumping();
	bool GetWantsToGrind();
	float GetSpeedHardCap();
	struct FVector GetMovementStatus();
	float GetLeanForwardSpeedNormalized();
	float GetHorizontalSplineAngleDeltaDegrees();
	bool GetGrindRequestJump();
	float GetGrindDistanceOnSpline();
	class AActor* GetGrindBaseActor();
	void GetCameraOrientedLeanValues(float RawLeanForward, float RawLeanRight, float* OrientedLeanForward, float* OrientedLeanRight);
	void EndGrinding(bool bSetEndMovementMode);
	void DrawDebugHUD(class AHUD* HUD, class UCanvas* Canvas);
	bool CanBeginGrinding();
	void CalculateVelocity(float DeltaTime, bool bReplayingMovement, struct FVector* OutVelocity);
	void BeginGrinding(class AFortGrindRail* GrindRail, float OptionalStartDistance, bool bFromInteraction);
	bool AttemptDestroyVehicleWhileGrinding(class AFortAthenaVehicle* Vehicle);
	void AddMoveIgnoreActor(class ABuildingActor* BuildingActor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
