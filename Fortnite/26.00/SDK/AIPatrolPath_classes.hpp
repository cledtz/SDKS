#pragma once

// Dumped with Dumper-7!


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
	uint8                                        Pad_3E79[0x98];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAIPatrolPathEditorComponent* GetDefaultObj();

};

// 0x2D8 (0x378 - 0xA0)
// Class AIPatrolPath.AIPatrolPathComponent
class UAIPatrolPathComponent : public UActorComponent
{
public:
	uint8                                        Pad_3EBA[0x28];                                    // Fixing Size After Last Property 
	TArray<class FString>                        SharedOptionNames;                                 // 0xC8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TSoftClassPtr<class UPawn>                   DefaultAIPawn;                                     // 0xD8(0x20)(Edit, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UBuildingActor>            PathRendererClass;                                 // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAllowPartialPaths;                                // 0x100(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3EBD[0x7];                                     // Fixing Size After Last Property 
	struct FGameplayTagContainer                 UnableToPlaceNewDeviceTags;                        // 0x108(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FNavAgentProperties                   CachedAIAgentProperties;                           // 0x128(0x30)(Transient, DuplicateTransient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNavigationSystemV1*                   CachedNavSystem;                                   // 0x158(0x8)(ZeroConstructor, Transient, DuplicateTransient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNavigationData*                       CachedNavData;                                     // 0x160(0x8)(ZeroConstructor, Transient, DuplicateTransient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UNavigationQueryFilter>    CachedFilterClass;                                 // 0x168(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3EC1[0x10];                                    // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnPatrolPointFailedToReach;                        // 0x180(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnPatrolPointReached;                              // 0x190(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnPatrolPathStarted;                               // 0x1A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnPatrolPathStopped;                               // 0x1B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_3EC3[0x8];                                     // Fixing Size After Last Property 
	TArray<class UActor*>                        PatrolPath;                                        // 0x1C8(0x10)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FPatrolPathSegmentDetails             PathSegmentDetails;                                // 0x1D8(0x108)(Transient, DuplicateTransient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3EC4[0x10];                                    // Fixing Size After Last Property 
	class UAIPatrolPathComponent*                CopiedFrom;                                        // 0x2F0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UActor*                                CurrentCloningNode;                                // 0x2F8(0x8)(ZeroConstructor, Transient, DuplicateTransient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3EC5[0x8];                                     // Fixing Size After Last Property 
	class UAIPatrolPathComponent*                CopiedFromCut;                                     // 0x308(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortCreativePatrolPath*               PatrolPathActor;                                   // 0x310(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAthenaPatrolPoint*                PatrolPointActor;                                  // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UAIPatrolPathComponent*>        MultiSelectActorToEnterList;                       // 0x320(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3EC6[0x40];                                    // Fixing Size After Last Property 
	class UAIPatrolPathEditorComponent*          PatrolPathEditorComponent;                         // 0x370(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAIPatrolPathComponent* GetDefaultObj();

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
	void PatrolPointReached(class UFortAthenaPatrolPoint* PathPoint, class UAIController* Instigator);
	void PatrolPointFailedToReach(class UFortAthenaPatrolPoint* PathPoint, class UAIController* Instigator);
	void PatrolPathStopped(class UAIController* Instigator);
	void PatrolPathStarted(class UAIController* Instigator);
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


