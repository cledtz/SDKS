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
// Class GeometryCollectionEngine.GeometryCollectionExternalRenderInterface
class UGeometryCollectionExternalRenderInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryCollectionExternalRenderInterface");
		return Clss;
	}

};

// 0x8 (0x38 - 0x30)
// Class GeometryCollectionEngine.GeometryCollectionISMPoolSubSystem
class UGeometryCollectionISMPoolSubSystem : public UWorldSubsystem
{
public:
	class AGeometryCollectionISMPoolActor*       ISMPoolActor;                                      // 0x30(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryCollectionISMPoolSubSystem");
		return Clss;
	}

};

// 0x2B0 (0x550 - 0x2A0)
// Class GeometryCollectionEngine.ChaosDestructionListener
class UChaosDestructionListener : public USceneComponent
{
public:
	uint8                                        bIsCollisionEventListeningEnabled : 1;             // Mask: 0x1, PropSize: 0x10x2A0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsBreakingEventListeningEnabled : 1;              // Mask: 0x2, PropSize: 0x10x2A0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsTrailingEventListeningEnabled : 1;              // Mask: 0x4, PropSize: 0x10x2A0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsRemovalEventListeningEnabled : 1;               // Mask: 0x8, PropSize: 0x10x2A0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1A1 : 4;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_18C0[0x3];                                     // Fixing Size After Last Property..
	struct FChaosCollisionEventRequestSettings   CollisionEventRequestSettings;                     // 0x2A4(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FChaosBreakingEventRequestSettings    BreakingEventRequestSettings;                      // 0x2BC(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FChaosTrailingEventRequestSettings    TrailingEventRequestSettings;                      // 0x2D4(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FChaosRemovalEventRequestSettings     RemovalEventRequestSettings;                       // 0x2EC(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_18C1[0x4];                                     // Fixing Size After Last Property..
	TSet<class AChaosSolverActor*>               ChaosSolverActors;                                 // 0x300(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, NativeAccessSpecifierPublic)
	TSet<class AGeometryCollectionActor*>        GeometryCollectionActors;                          // 0x350(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCollisionEvents;                                 // 0x3A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnBreakingEvents;                                  // 0x3B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTrailingEvents;                                  // 0x3C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRemovalEvents;                                   // 0x3D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_18C2[0x170];                                   // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ChaosDestructionListener");
		return Clss;
	}

	void SortTrailingEvents(TArray<struct FChaosTrailingEventData>& TrailingEvents, enum class EChaosTrailingSortMethod SortMethod);
	void SortRemovalEvents(TArray<struct FChaosRemovalEventData>& RemovalEvents, enum class EChaosRemovalSortMethod SortMethod);
	void SortCollisionEvents(TArray<struct FChaosCollisionEventData>& CollisionEvents, enum class EChaosCollisionSortMethod SortMethod);
	void SortBreakingEvents(TArray<struct FChaosBreakingEventData>& BreakingEvents, enum class EChaosBreakingSortMethod SortMethod);
	void SetTrailingEventRequestSettings(struct FChaosTrailingEventRequestSettings& InSettings);
	void SetTrailingEventEnabled(bool bIsEnabled);
	void SetRemovalEventRequestSettings(struct FChaosRemovalEventRequestSettings& InSettings);
	void SetRemovalEventEnabled(bool bIsEnabled);
	void SetCollisionEventRequestSettings(struct FChaosCollisionEventRequestSettings& InSettings);
	void SetCollisionEventEnabled(bool bIsEnabled);
	void SetBreakingEventRequestSettings(struct FChaosBreakingEventRequestSettings& InSettings);
	void SetBreakingEventEnabled(bool bIsEnabled);
	void RemoveGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor);
	void RemoveChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);
	bool IsEventListening();
	void AddGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor);
	void AddChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);
};

// 0x10 (0x298 - 0x288)
// Class GeometryCollectionEngine.GeometryCollectionActor
class AGeometryCollectionActor : public AActor
{
public:
	class UGeometryCollectionComponent*          GeometryCollectionComponent;                       // 0x288(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent;              // 0x290(0x8)(ExportObject, ZeroConstructor, InstancedReference, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryCollectionActor");
		return Clss;
	}

	bool RaycastSingle(const struct FVector& Start, const struct FVector& End, struct FHitResult* OutHit);
};

// 0x28 (0x50 - 0x28)
// Class GeometryCollectionEngine.GeometryCollectionCache
class UGeometryCollectionCache : public UObject
{
public:
	struct FRecordedTransformTrack               RecordedData;                                      // 0x28(0x10)(NativeAccessSpecifierPrivate)
	class UGeometryCollection*                   SupportedCollection;                               // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGuid                                 CompatibleCollectionState;                         // 0x40(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryCollectionCache");
		return Clss;
	}

};

// 0x600 (0xBA0 - 0x5A0)
// Class GeometryCollectionEngine.GeometryCollectionComponent
class UGeometryCollectionComponent : public UMeshComponent
{
public:
	uint8                                        Pad_18D3[0x8];                                     // Fixing Size After Last Property..
	class AChaosSolverActor*                     ChaosSolverActor;                                  // 0x5A8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18D4[0xE8];                                    // Fixing Size After Last Property..
	class UGeometryCollection*                   RestCollection;                                    // 0x698(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AFieldSystemActor*>             InitializationFields;                              // 0x6A0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         Simulating;                                        // 0x6B0(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18D5[0x1];                                     // Fixing Size After Last Property..
	enum class EObjectStateTypeEnum              ObjectType;                                        // 0x6B2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18D6[0x1];                                     // Fixing Size After Last Property..
	int32                                        GravityGroupIndex;                                 // 0x6B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceMotionBlur;                                  // 0x6B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableClustering;                                  // 0x6B9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18D7[0x2];                                     // Fixing Size After Last Property..
	int32                                        ClusterGroupIndex;                                 // 0x6BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxClusterLevel;                                   // 0x6C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxSimulatedLevel;                                 // 0x6C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDamageModelTypeEnum              DamageModel;                                       // 0x6C8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18D8[0x7];                                     // Fixing Size After Last Property..
	TArray<float>                                DamageThreshold;                                   // 0x6D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bUseSizeSpecificDamageThreshold;                   // 0x6E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18D9[0x3];                                     // Fixing Size After Last Property..
	struct FGeometryCollectionDamagePropagationData DamagePropagationData;                             // 0x6E4(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bEnableDamageFromCollision;                        // 0x6F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowRemovalOnSleep;                              // 0x6F1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowRemovalOnBreak;                              // 0x6F2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EClusterConnectionTypeEnum        ClusterConnectionType;                             // 0x6F3(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CollisionGroup;                                    // 0x6F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollisionSampleFraction;                           // 0x6F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LinearEtherDrag;                                   // 0x6FC(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngularEtherDrag;                                  // 0x700(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18DA[0x4];                                     // Fixing Size After Last Property..
	class UChaosPhysicalMaterial*                PhysicalMaterial;                                  // 0x708(0x8)(ZeroConstructor, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInitialVelocityTypeEnum          InitialVelocityType;                               // 0x710(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18DB[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               InitialLinearVelocity;                             // 0x718(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InitialAngularVelocity;                            // 0x730(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicalMaterial*                     PhysicalMaterialOverride;                          // 0x748(0x8)(ZeroConstructor, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGeomComponentCacheParameters         CacheParameters;                                   // 0x750(0x50)(NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    RestTransforms;                                    // 0x7A0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            NotifyGeometryCollectionPhysicsStateChange;        // 0x7B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            NotifyGeometryCollectionPhysicsLoadingStateChange; // 0x7C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_18DC[0x18];                                    // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            OnChaosBreakEvent;                                 // 0x7E8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnChaosRemovalEvent;                               // 0x7F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnChaosCrumblingEvent;                             // 0x808(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_18DD[0x10];                                    // Fixing Size After Last Property..
	float                                        DesiredCacheTime;                                  // 0x828(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CachePlayback;                                     // 0x82C(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18DE[0x3];                                     // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            OnChaosPhysicsCollision;                           // 0x830(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bNotifyBreaks;                                     // 0x840(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNotifyCollisions;                                 // 0x841(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNotifyTrailing;                                   // 0x842(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNotifyRemovals;                                   // 0x843(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNotifyCrumblings;                                 // 0x844(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCrumblingEventIncludesChildren;                   // 0x845(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStoreVelocities;                                  // 0x846(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowBoneColors;                                   // 0x847(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseRootProxyForNavigation;                        // 0x848(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUpdateNavigationInTick;                           // 0x849(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_18DF[0x6];                                     // Fixing Size After Last Property..
	class AGeometryCollectionISMPoolActor*       ISMPool;                                           // 0x850(0x8)(ZeroConstructor, Deprecated, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAutoAssignISMPool;                                // 0x858(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOverrideCustomRenderer;                           // 0x859(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_18E0[0x6];                                     // Fixing Size After Last Property..
	TSubclassOf<class UObject>                   CustomRendererType;                                // 0x860(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGeometryCollectionExternalRenderInterface* CustomRenderer;                                    // 0x868(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableReplication;                                // 0x870(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableAbandonAfterLevel;                          // 0x871(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_18E1[0x2];                                     // Fixing Size After Last Property..
	class FName                                  AbandonedCollisionProfileName;                     // 0x874(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FName>                          CollisionProfilePerLevel;                          // 0x878(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	int32                                        ReplicationAbandonClusterLevel;                    // 0x888(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ReplicationAbandonAfterLevel;                      // 0x88C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ReplicationMaxPositionAndVelocityCorrectionLevel;  // 0x890(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_18E2[0x4];                                     // Fixing Size After Last Property..
	struct FGeometryCollectionRepData            RepData;                                           // 0x898(0x30)(Net, RepNotify, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_18E3[0x290];                                   // Fixing Size After Last Property..
	class UBodySetup*                            DummyBodySetup;                                    // 0xB58(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UChaosGameplayEventDispatcher*         EventDispatcher;                                   // 0xB60(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UInstancedStaticMeshComponent*> EmbeddedGeometryComponents;                        // 0xB68(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_18E4[0x28];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryCollectionComponent");
		return Clss;
	}

	void SetRestCollection(class UGeometryCollection* RestCollectionIn, bool bApplyAssetDefaults);
	void SetPerLevelCollisionProfileNames(TArray<class FName>& ProfileNames);
	void SetNotifyRemovals(bool bNewNotifyRemovals);
	void SetNotifyCrumblings(bool bNewNotifyCrumblings, bool bNewCrumblingEventIncludesChildren);
	void SetNotifyBreaks(bool bNewNotifyBreaks);
	void SetLocalRestTransforms(TArray<struct FTransform>& Transforms, bool bOnlyLeaves);
	void SetEnableDamageFromCollision(bool bValue);
	void SetDamageThreshold(TArray<float>& InDamageThreshold);
	void SetAnchoredByTransformedBox(const struct FBox& Box, const struct FTransform& Transform, bool bAnchored, int32 MaxLevel);
	void SetAnchoredByIndex(int32 Index, bool bAnchored);
	void SetAnchoredByBox(const struct FBox& WorldSpaceBox, bool bAnchored, int32 MaxLevel);
	void SetAbandonedParticleCollisionProfileName(class FName CollisionProfile);
	void RemoveAllAnchors();
	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo);
	void OnRep_RepData();
	void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent);
	void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent);
	bool IsRootBroken();
	struct FTransform GetRootInitialTransform();
	int32 GetRootIndex();
	struct FTransform GetRootCurrentTransform();
	void GetMassAndExtents(int32 ItemIndex, float* OutMass, struct FBox* OutExtents);
	struct FBox GetLocalBounds();
	TArray<struct FTransform> GetInitialLocalRestTransforms();
	int32 GetInitialLevel(int32 ItemIndex);
	class FString GetDebugInfo();
	TArray<float> GetDamageThreshold();
	void CrumbleCluster(int32 ItemIndex);
	void CrumbleActiveClusters();
	void ApplyPhysicsField(bool Enabled, enum class EGeometryCollectionPhysicsTypeEnum Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field);
	void ApplyLinearVelocity(int32 ItemIndex, struct FVector& LinearVelocity);
	void ApplyKinematicField(float Radius, const struct FVector& Position);
	void ApplyInternalStrain(int32 ItemIndex, struct FVector& Location, float Radius, int32 PropagationDepth, float PropagationFactor, float Strain);
	void ApplyExternalStrain(int32 ItemIndex, struct FVector& Location, float Radius, int32 PropagationDepth, float PropagationFactor, float Strain);
	void ApplyBreakingLinearVelocity(int32 ItemIndex, struct FVector& LinearVelocity);
	void ApplyBreakingAngularVelocity(int32 ItemIndex, struct FVector& AngularVelocity);
	void ApplyAssetDefaults();
	void ApplyAngularVelocity(int32 ItemIndex, struct FVector& AngularVelocity);
};

// 0xC0 (0x348 - 0x288)
// Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
class AGeometryCollectionDebugDrawActor : public AActor
{
public:
	struct FGeometryCollectionDebugDrawWarningMessage WarningMessage;                                    // 0x288(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_18E5[0x7];                                     // Fixing Size After Last Property..
	struct FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody;                                 // 0x290(0x18)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bDebugDrawWholeCollection;                         // 0x2A8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDebugDrawHierarchy;                               // 0x2A9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDebugDrawClustering;                              // 0x2AA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryCollectionDebugDrawActorHideGeometry HideGeometry;                                      // 0x2AB(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowRigidBodyId;                                  // 0x2AC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowRigidBodyCollision;                           // 0x2AD(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCollisionAtOrigin;                                // 0x2AE(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowRigidBodyTransform;                           // 0x2AF(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowRigidBodyInertia;                             // 0x2B0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowRigidBodyVelocity;                            // 0x2B1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowRigidBodyForce;                               // 0x2B2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowRigidBodyInfos;                               // 0x2B3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowTransformIndex;                               // 0x2B4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowTransform;                                    // 0x2B5(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowParent;                                       // 0x2B6(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowLevel;                                        // 0x2B7(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowConnectivityEdges;                            // 0x2B8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowGeometryIndex;                                // 0x2B9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowGeometryTransform;                            // 0x2BA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowBoundingBox;                                  // 0x2BB(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowFaces;                                        // 0x2BC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowFaceIndices;                                  // 0x2BD(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowFaceNormals;                                  // 0x2BE(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowSingleFace;                                   // 0x2BF(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SingleFaceIndex;                                   // 0x2C0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowVertices;                                     // 0x2C4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowVertexIndices;                                // 0x2C5(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowVertexNormals;                                // 0x2C6(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseActiveVisualization;                           // 0x2C7(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PointThickness;                                    // 0x2C8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LineThickness;                                     // 0x2CC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTextShadow;                                       // 0x2D0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18E6[0x3];                                     // Fixing Size After Last Property..
	float                                        TextScale;                                         // 0x2D4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NormalScale;                                       // 0x2D8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AxisScale;                                         // 0x2DC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArrowScale;                                        // 0x2E0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                RigidBodyIdColor;                                  // 0x2E4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RigidBodyTransformScale;                           // 0x2E8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                RigidBodyCollisionColor;                           // 0x2EC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                RigidBodyInertiaColor;                             // 0x2F0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                RigidBodyVelocityColor;                            // 0x2F4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                RigidBodyForceColor;                               // 0x2F8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                RigidBodyInfoColor;                                // 0x2FC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                TransformIndexColor;                               // 0x300(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TransformScale;                                    // 0x304(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                LevelColor;                                        // 0x308(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                ParentColor;                                       // 0x30C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ConnectivityEdgeThickness;                         // 0x310(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                GeometryIndexColor;                                // 0x314(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GeometryTransformScale;                            // 0x318(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                BoundingBoxColor;                                  // 0x31C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                FaceColor;                                         // 0x320(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                FaceIndexColor;                                    // 0x324(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                FaceNormalColor;                                   // 0x328(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                SingleFaceColor;                                   // 0x32C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                VertexColor;                                       // 0x330(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                VertexIndexColor;                                  // 0x334(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                VertexNormalColor;                                 // 0x338(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18E7[0x4];                                     // Fixing Size After Last Property..
	class UBillboardComponent*                   SpriteComponent;                                   // 0x340(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryCollectionDebugDrawActor");
		return Clss;
	}

};

// 0x18 (0xB8 - 0xA0)
// Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
class UGeometryCollectionDebugDrawComponent : public UActorComponent
{
public:
	class AGeometryCollectionDebugDrawActor*     GeometryCollectionDebugDrawActor;                  // 0xA0(0x8)(ZeroConstructor, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor;             // 0xA8(0x8)(Edit, ZeroConstructor, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18E8[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryCollectionDebugDrawComponent");
		return Clss;
	}

};

// 0x10 (0x298 - 0x288)
// Class GeometryCollectionEngine.GeometryCollectionISMPoolActor
class AGeometryCollectionISMPoolActor : public AActor
{
public:
	class UGeometryCollectionISMPoolComponent*   ISMPoolComp;                                       // 0x288(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGeometryCollectionISMPoolDebugDrawComponent* ISMPoolDebugDrawComp;                              // 0x290(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryCollectionISMPoolActor");
		return Clss;
	}

};

// 0xD0 (0x370 - 0x2A0)
// Class GeometryCollectionEngine.GeometryCollectionISMPoolComponent
class UGeometryCollectionISMPoolComponent : public USceneComponent
{
public:
	uint8                                        Pad_18E9[0xD0];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryCollectionISMPoolComponent");
		return Clss;
	}

};

// 0xA8 (0xD0 - 0x28)
// Class GeometryCollectionEngine.GeometryCollectionISMPoolRenderer
class UGeometryCollectionISMPoolRenderer : public UObject
{
public:
	uint8                                        Pad_18EA[0x8];                                     // Fixing Size After Last Property..
	class AGeometryCollectionISMPoolActor*       ISMPoolActor;                                      // 0x30(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_18EB[0x98];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryCollectionISMPoolRenderer");
		return Clss;
	}

};

// 0x170 (0x198 - 0x28)
// Class GeometryCollectionEngine.GeometryCollection
class UGeometryCollection : public UObject
{
public:
	uint8                                        Pad_18EC[0x10];                                    // Fixing Size After Last Property..
	bool                                         EnableClustering;                                  // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18ED[0x3];                                     // Fixing Size After Last Property..
	int32                                        ClusterGroupIndex;                                 // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxClusterLevel;                                   // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDamageModelTypeEnum              DamageModel;                                       // 0x44(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18EE[0x3];                                     // Fixing Size After Last Property..
	TArray<float>                                DamageThreshold;                                   // 0x48(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bUseSizeSpecificDamageThreshold;                   // 0x58(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PerClusterOnlyDamageThreshold;                     // 0x59(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18EF[0x2];                                     // Fixing Size After Last Property..
	struct FGeometryCollectionDamagePropagationData DamagePropagationData;                             // 0x5C(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class EClusterConnectionTypeEnum        ClusterConnectionType;                             // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18F0[0x3];                                     // Fixing Size After Last Property..
	float                                        ConnectionGraphBoundsFilteringMargin;              // 0x6C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>            Materials;                                         // 0x70(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FGeometryCollectionEmbeddedExemplar> EmbeddedGeometryExemplar;                          // 0x80(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bUseFullPrecisionUVs;                              // 0x90(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStripOnCook;                                      // 0x91(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStripRenderDataOnCook;                            // 0x92(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18F1[0x5];                                     // Fixing Size After Last Property..
	TSubclassOf<class UObject>                   CustomRendererType;                                // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGeometryCollectionProxyMeshData      RootProxyData;                                     // 0xA0(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FGeometryCollectionAutoInstanceMesh> AutoInstanceMeshes;                                // 0xB0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         EnableNanite;                                      // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18F2[0x7];                                     // Fixing Size After Last Property..
	class UPhysicalMaterial*                     PhysicsMaterial;                                   // 0xC8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDensityFromPhysicsMaterial;                       // 0xD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMassAsDensity;                                    // 0xD1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18F3[0x2];                                     // Fixing Size After Last Property..
	float                                        Mass;                                              // 0xD4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumMassClamp;                                  // 0xD8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bImportCollisionFromSource;                        // 0xDC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bScaleOnRemoval;                                   // 0xDD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRemoveOnMaxSleep;                                 // 0xDE(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18F4[0x1];                                     // Fixing Size After Last Property..
	struct FVector2D                             MaximumSleepTime;                                  // 0xE0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             RemovalDuration;                                   // 0xF0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSlowMovingAsSleeping;                             // 0x100(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18F5[0x3];                                     // Fixing Size After Last Property..
	float                                        SlowMovingVelocityThreshold;                       // 0x104(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGeometryCollectionSizeSpecificData> SizeSpecificData;                                  // 0x108(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         EnableRemovePiecesOnFracture;                      // 0x118(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18F6[0x7];                                     // Fixing Size After Last Property..
	TArray<class UMaterialInterface*>            RemoveOnFractureMaterials;                         // 0x120(0x10)(ZeroConstructor, Deprecated, UObjectWrapper, NativeAccessSpecifierPublic)
	class UDataflow*                             DataflowAsset;                                     // 0x130(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DataflowTerminal;                                  // 0x138(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 PersistentGuid;                                    // 0x148(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGuid                                 StateGuid;                                         // 0x158(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        RootIndex;                                         // 0x168(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        BoneSelectedMaterialIndex;                         // 0x16C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInterface*                    BoneSelectedMaterial;                              // 0x170(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_18F7[0x10];                                    // Fixing Size After Last Property..
	TArray<class UAssetUserData*>                AssetUserData;                                     // 0x188(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryCollection");
		return Clss;
	}

	void SetEnableNanite(bool bValue);
};

// 0xF8 (0x380 - 0x288)
// Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
class AGeometryCollectionRenderLevelSetActor : public AActor
{
public:
	class UVolumeTexture*                        TargetVolumeTexture;                               // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterial*                             RayMarchMaterial;                                  // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SurfaceTolerance;                                  // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Isovalue;                                          // 0x29C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Enabled;                                           // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RenderVolumeBoundingBox;                           // 0x2A1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18F8[0xDE];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryCollectionRenderLevelSetActor");
		return Clss;
	}

};

// 0x18 (0x5D0 - 0x5B8)
// Class GeometryCollectionEngine.GeometryCollectionISMPoolDebugDrawComponent
class UGeometryCollectionISMPoolDebugDrawComponent : public UDebugDrawComponent
{
public:
	bool                                         bShowGlobalStats;                                  // 0x5B8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowStats;                                        // 0x5B9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowBounds;                                       // 0x5BA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18F9[0x5];                                     // Fixing Size After Last Property..
	class UInstancedStaticMeshComponent*         SelectedComponent;                                 // 0x5C0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18FA[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryCollectionISMPoolDebugDrawComponent");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
