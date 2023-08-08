#pragma once

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

// 0x358 (0xFF8 - 0xCA0)
// Class AscenderCodeRuntime.FortAscenderZipline
class UFortAscenderZipline : public UFortAthenaSplineZipline
{
public:
	FMulticastInlineDelegateProperty_            OnAscenderSetupComplete;                           // 0xCA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FName                                  SplineTopAttachPointName;                          // 0xCB0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAutoFindSplineEndLocation;                        // 0xCB4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A49[0x3];                                     // Fixing Size After Last Property
	float                                        SplineOffsetFromGround;                            // 0xCB8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CableOffsetFromSplineEnd;                          // 0xCBC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SplineLength;                                      // 0xCC0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A4C[0x4];                                     // Fixing Size After Last Property
	class UStaticMesh*                           SplineStaticMesh;                                  // 0xCC8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESplineMeshAxis                   MeshForwardAxis;                                   // 0xCD0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHandleReturning;                                  // 0xCD1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A4E[0x2];                                     // Fixing Size After Last Property
	float                                        HandleReturnSpeed;                                 // 0xCD4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCableDropping;                                    // 0xCD8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A51[0x3];                                     // Fixing Size After Last Property
	float                                        CableDropSpeed;                                    // 0xCDC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        YawRotationOffsetWhileUsingHandle;                 // 0xCE0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        YawRotationOffsetWhileSlidingDown;                 // 0xCE4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseComplexSplineCollision;                        // 0xCE8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A53[0x3];                                     // Fixing Size After Last Property
	float                                        SimpleSplineCollisionRadius;                       // 0xCEC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SimpleSplineCollisionHeightExtension;              // 0xCF0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A55[0x4];                                     // Fixing Size After Last Property
	struct FScalableFloat                        DescendMinDistanceFromBottom;                      // 0xCF8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AscendReachedEndHorizontalLaunchSpeed;             // 0xD20(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AscendReachedEndVerticalLaunchSpeed;               // 0xD48(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AscendJumpedOffHorizontalLaunchSpeed;              // 0xD70(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AscendJumpedOffVerticalLaunchSpeed;                // 0xD98(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        DescendReachedEndHorizontalLaunchSpeed;            // 0xDC0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        DescendReachedEndVerticalLaunchSpeed;              // 0xDE8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        DescendJumpedOffHorizontalLaunchSpeed;             // 0xE10(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        DescendJumpedOffVerticalLaunchSpeed;               // 0xE38(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        HandleActorHitPlayerHorizontalLaunchSpeed;         // 0xE60(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        HandleActorHitPlayerVerticalLaunchSpeed;           // 0xE88(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FVector                               HandleDestroyBuildingsOverlapExtents;              // 0xEB0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               PlayerDestroyBuildingsOverlapExtents;              // 0xEC8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               InitialSplineEndLocation;                          // 0xEE0(0x18)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               CurrentSplineEndLocation;                          // 0xEF8(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               TargetSplineEndLocation;                           // 0xF10(0x18)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               CurrentHandleLocation;                             // 0xF28(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UPrimitiveComponent>    CurrentInteractComponent;                          // 0xF40(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortPlayerPawn>        PawnUsingHandle;                                   // 0xF48(0x8)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortPlayerPawn>        PreviousPawnUsingHandle;                           // 0xF50(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USplineMeshComponent*                  SplineMesh;                                        // 0xF58(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCapsuleComponent*                     SimpleSplineMeshCollision;                         // 0xF60(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UBuildingActor>         FloorActor;                                        // 0xF68(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TWeakObjectPtr<class UFortPlayerPawn>> RotationLockedPawns;                               // 0xF70(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A61[0x68];                                    // Fixing Size After Last Property
	class UFortLinkToActorComponent*             LinkToActorComponent;                              // 0xFE8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortZiplineLinkComponent*             ZiplineLinkComponent;                              // 0xFF0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAscenderZipline");
		return Clss;
	}

	void SetupAscender(bool bFromConstruction, bool bFromReplication);
	void OnRep_TargetSplineEndLocation();
	void OnRep_PawnUsingHandle();
	void OnRep_InitialSplineEndLocation();
	void HandlePawnUsingHandleDied(class UFortPawn* DeadPawn);
	void HandleFloorActorHealthChanged();
	void HandleFloorActorDestroyed(class UActor* Actor);
	class UPrimitiveComponent* GetTopComponent();
	class UFortPlayerPawn* GetPawnUsingHandle();
	class UPrimitiveComponent* GetInteractComponentOverride(class UFortPlayerPawn* InteractingPawn, class UPrimitiveComponent* InteractComponent);
	class UPrimitiveComponent* GetHandleComponent();
	void BP_HandleUpdatedLoweringHandle();
	void BP_HandleUpdatedLoweringCable();
	void BP_HandleStoppedLoweringHandle();
	void BP_HandleStoppedLoweringCable();
	void BP_HandleStartedLoweringHandle();
	void BP_HandleStartedLoweringCable();
	void BP_HandlePlayerStoppedUsingHandle(class UFortPlayerPawn* Player);
	void BP_HandlePlayerStartedUsingHandle(class UFortPlayerPawn* Player);
	void ApplyStructureDamage(class UBuildingSMActor* BuildingActor, class UActor* DamageSource);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
