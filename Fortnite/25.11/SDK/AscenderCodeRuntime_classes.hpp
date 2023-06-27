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
// Class AscenderCodeRuntime.FortCheatManager_AscenderZipline
class UFortCheatManager_AscenderZipline : public UChildCheatManager
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCheatManager_AscenderZipline");
		return Clss;
	}

	void RemoveAscenders(bool bRemoveAscendersOn);
};

// 0x358 (0xFE0 - 0xC88)
// Class AscenderCodeRuntime.FortAscenderZipline
class AFortAscenderZipline : public AFortAthenaSplineZipline
{
public:
	FMulticastInlineDelegateProperty_            OnAscenderSetupComplete;                           // 0xC88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FName                                  SplineTopAttachPointName;                          // 0xC98(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAutoFindSplineEndLocation;                        // 0xC9C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2326[0x3];                                     // Fixing Size After Last Property..
	float                                        SplineOffsetFromGround;                            // 0xCA0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CableOffsetFromSplineEnd;                          // 0xCA4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SplineLength;                                      // 0xCA8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2327[0x4];                                     // Fixing Size After Last Property..
	class UStaticMesh*                           SplineStaticMesh;                                  // 0xCB0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESplineMeshAxis                   MeshForwardAxis;                                   // 0xCB8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHandleReturning;                                  // 0xCB9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2328[0x2];                                     // Fixing Size After Last Property..
	float                                        HandleReturnSpeed;                                 // 0xCBC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCableDropping;                                    // 0xCC0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2329[0x3];                                     // Fixing Size After Last Property..
	float                                        CableDropSpeed;                                    // 0xCC4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        YawRotationOffsetWhileUsingHandle;                 // 0xCC8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        YawRotationOffsetWhileSlidingDown;                 // 0xCCC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseComplexSplineCollision;                        // 0xCD0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_232A[0x3];                                     // Fixing Size After Last Property..
	float                                        SimpleSplineCollisionRadius;                       // 0xCD4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SimpleSplineCollisionHeightExtension;              // 0xCD8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_232B[0x4];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        DescendMinDistanceFromBottom;                      // 0xCE0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AscendReachedEndHorizontalLaunchSpeed;             // 0xD08(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AscendReachedEndVerticalLaunchSpeed;               // 0xD30(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AscendJumpedOffHorizontalLaunchSpeed;              // 0xD58(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AscendJumpedOffVerticalLaunchSpeed;                // 0xD80(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        DescendReachedEndHorizontalLaunchSpeed;            // 0xDA8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        DescendReachedEndVerticalLaunchSpeed;              // 0xDD0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        DescendJumpedOffHorizontalLaunchSpeed;             // 0xDF8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        DescendJumpedOffVerticalLaunchSpeed;               // 0xE20(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        HandleActorHitPlayerHorizontalLaunchSpeed;         // 0xE48(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        HandleActorHitPlayerVerticalLaunchSpeed;           // 0xE70(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FVector                               HandleDestroyBuildingsOverlapExtents;              // 0xE98(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               PlayerDestroyBuildingsOverlapExtents;              // 0xEB0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               InitialSplineEndLocation;                          // 0xEC8(0x18)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               CurrentSplineEndLocation;                          // 0xEE0(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               TargetSplineEndLocation;                           // 0xEF8(0x18)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               CurrentHandleLocation;                             // 0xF10(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UPrimitiveComponent>    CurrentInteractComponent;                          // 0xF28(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class AFortPlayerPawn>        PawnUsingHandle;                                   // 0xF30(0x8)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class AFortPlayerPawn>        PreviousPawnUsingHandle;                           // 0xF38(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USplineMeshComponent*                  SplineMesh;                                        // 0xF40(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCapsuleComponent*                     SimpleSplineMeshCollision;                         // 0xF48(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class ABuildingActor>         FloorActor;                                        // 0xF50(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TWeakObjectPtr<class AFortPlayerPawn>> RotationLockedPawns;                               // 0xF58(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_232C[0x68];                                    // Fixing Size After Last Property..
	class UFortLinkToActorComponent*             LinkToActorComponent;                              // 0xFD0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortZiplineLinkComponent*             ZiplineLinkComponent;                              // 0xFD8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAscenderZipline");
		return Clss;
	}

	void SetupAscender(bool bFromConstruction, bool bFromReplication);
	void OnRep_TargetSplineEndLocation();
	void OnRep_PawnUsingHandle();
	void OnRep_InitialSplineEndLocation();
	void HandlePawnUsingHandleDied(class AFortPawn* DeadPawn);
	void HandleFloorActorHealthChanged();
	void HandleFloorActorDestroyed(class AActor* Actor);
	class UPrimitiveComponent* GetTopComponent();
	class AFortPlayerPawn* GetPawnUsingHandle();
	class UPrimitiveComponent* GetInteractComponentOverride(class AFortPlayerPawn* InteractingPawn, class UPrimitiveComponent* InteractComponent);
	class UPrimitiveComponent* GetHandleComponent();
	void BP_HandleUpdatedLoweringHandle();
	void BP_HandleUpdatedLoweringCable();
	void BP_HandleStoppedLoweringHandle();
	void BP_HandleStoppedLoweringCable();
	void BP_HandleStartedLoweringHandle();
	void BP_HandleStartedLoweringCable();
	void BP_HandlePlayerStoppedUsingHandle(class AFortPlayerPawn* Player);
	void BP_HandlePlayerStartedUsingHandle(class AFortPlayerPawn* Player);
	void ApplyStructureDamage(class ABuildingSMActor* BuildingActor, class AActor* DamageSource);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
