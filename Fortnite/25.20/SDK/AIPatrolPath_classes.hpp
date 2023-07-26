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

// 0x98 (0x650 - 0x5B8)
// Class AIPatrolPath.AIPatrolPathEditorComponent
class UAIPatrolPathEditorComponent : public UDebugDrawComponent
{
public:
	uint8                                        Pad_40D4[0x98];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AIPatrolPathEditorComponent");
		return Clss;
	}

};

// 0x2E0 (0x380 - 0xA0)
// Class AIPatrolPath.AIPatrolPathComponent
class UAIPatrolPathComponent : public UActorComponent
{
public:
	uint8                                        Pad_40D6[0x28];                                    // Fixing Size After Last Property..
	TArray<class FString>                        SharedOptionNames;                                 // 0xC8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TSoftClassPtr<class APawn>                   DefaultAIPawn;                                     // 0xD8(0x28)(Edit, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class ABuildingActor>            PathRendererClass;                                 // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAllowPartialPaths;                                // 0x108(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_40D7[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 UnableToPlaceNewDeviceTags;                        // 0x110(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FNavAgentProperties                   CachedAIAgentProperties;                           // 0x130(0x30)(Transient, DuplicateTransient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNavigationSystemV1*                   CachedNavSystem;                                   // 0x160(0x8)(ZeroConstructor, Transient, DuplicateTransient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ANavigationData*                       CachedNavData;                                     // 0x168(0x8)(ZeroConstructor, Transient, DuplicateTransient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UNavigationQueryFilter>    CachedFilterClass;                                 // 0x170(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_40D8[0x10];                                    // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            OnPatrolPointFailedToReach;                        // 0x188(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnPatrolPointReached;                              // 0x198(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnPatrolPathStarted;                               // 0x1A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnPatrolPathStopped;                               // 0x1B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_40D9[0x8];                                     // Fixing Size After Last Property..
	TArray<class AActor*>                        PatrolPath;                                        // 0x1D0(0x10)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FPatrolPathSegmentDetails             PathSegmentDetails;                                // 0x1E0(0x108)(Transient, DuplicateTransient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_40DA[0x10];                                    // Fixing Size After Last Property..
	class UAIPatrolPathComponent*                CopiedFrom;                                        // 0x2F8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AActor*                                CurrentCloningNode;                                // 0x300(0x8)(ZeroConstructor, Transient, DuplicateTransient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_40DB[0x8];                                     // Fixing Size After Last Property..
	class UAIPatrolPathComponent*                CopiedFromCut;                                     // 0x310(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AFortCreativePatrolPath*               PatrolPathActor;                                   // 0x318(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AFortAthenaPatrolPoint*                PatrolPointActor;                                  // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UAIPatrolPathComponent*>        MultiSelectActorToEnterList;                       // 0x328(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_40DC[0x40];                                    // Fixing Size After Last Property..
	class UAIPatrolPathEditorComponent*          PatrolPathEditorComponent;                         // 0x378(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AIPatrolPathComponent");
		return Clss;
	}

	void UpdateEditorComponent();
	bool ShouldRenderPath();
	void SetRenderPath(bool bRenderPath);
	void SetPatrolPathGroup(enum class EFortCreativePatrolPathGroup PatrolPathGroup);
	void SetPatrolPathEnabled(bool bIsEnabled);
	void SetPatrollingMode(enum class EPatrollingMode NewMode);
	void RequestRenderPath();
	void RenderToNextPoint();
	void RenderToNextAndPreviousPoint();
	bool RemovePoint();
	void PropagatePatrolPathPointIndexToDevice(int32 NewPatrolPathPointIndex);
	void PropagatePatrolPathIndexToDevice(int32 NewPatrolPathIndex);
	void PostFinishSpawningActor();
	void PatrolPointReached(class AFortAthenaPatrolPoint* PathPoint, class AAIController* Instigator);
	void PatrolPointFailedToReach(class AFortAthenaPatrolPoint* PathPoint, class AAIController* Instigator);
	void PatrolPathStopped(class AAIController* Instigator);
	void PatrolPathStarted(class AAIController* Instigator);
	void OnPatrolPathActorAssigned();
	void OnPathExtremitiesChanged(bool bIsStart, bool bIsEnd);
	void OnAnyPropertyChanged();
	void NotifyEditorUserOptionChanged(TArray<class FString>& UserOptions);
	bool HasValidPatrolPath();
	int32 GetPatrolPathPointIndexFromDevice();
	int32 GetPatrolPathPointIndex();
	class UAIPatrolPathComponent* GetPatrolPathPoint(int32 InPatrolPathIndex, int32 InPatrolPathPointIndex);
	int32 GetPatrolPathIndexFromDevice();
	int32 GetPatrolPathIndex();
	enum class EFortCreativePatrolPathGroup GetPatrolPathGroup();
	enum class EPatrollingMode GetPatrollingMode();
	TSubclassOf<class UNavigationQueryFilter> GetPatrolFilterOptions();
	bool GetNextAvailablePatrolPathIndex(int32* NextAvailableIndex);
	TArray<class UAIPatrolPathComponent*> GetLinkedPatrolPoints();
	void GeneratePathPoints(enum class EFortCreativePatrolPathGroup PatrolPathGroup, bool bGenerationCausedByDuplication);
	bool CanNextPointBeReached();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
