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
// Class SOMRuntime.FortScriptedObjectMovement_GridProviderInterface
class UFortScriptedObjectMovement_GridProviderInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortScriptedObjectMovement_GridProviderInterface");
		return Clss;
	}

};

// 0x1C8 (0x458 - 0x290)
// Class SOMRuntime.FortScriptedObjectMovement_WorldPhaseSite
class AFortScriptedObjectMovement_WorldPhaseSite : public AActor
{
public:
	uint8                                        Pad_7F01[0x8];                                     // Fixing Size After Last Property..
	TArray<struct FFortScriptedObjectMovementPhaseData> Phases;                                            // 0x298(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        NumSimulatenousMovingObjects;                      // 0x2A8(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        PhaseIntervalSeconds;                              // 0x2D0(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_7F02[0x20];                                    // Fixing Size After Last Property..
	struct FScriptedObjectMovement_Grid          BaseGrid;                                          // 0x318(0xC8)(Transient, NativeAccessSpecifierPrivate)
	struct FScriptedObjectMovement_DynamicPathContext InProgressPath;                                    // 0x3E0(0x38)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UFortScriptedObjectMovement_Slot*> LeavingSlotStack;                                  // 0x418(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UFortScriptedObjectMovement_Slot*> DestinationSlotStack;                              // 0x428(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UFortScriptedObjectMovement_Slot*> OverflowSlotStack;                                 // 0x438(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class AFortScriptedObjectMovement_MovableObjectBase*> CurrentlyMovingObjects;                            // 0x448(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortScriptedObjectMovement_WorldPhaseSite");
		return Clss;
	}

};

// 0x10 (0x40 - 0x30)
// Class SOMRuntime.FortScriptedObjectMovement_SlotDefinition
class UFortScriptedObjectMovement_SlotDefinition : public UPrimaryDataAsset
{
public:
	TSubclassOf<class AFortScriptedObjectMovement_MovableObjectBase> ScriptedObjectClass;                               // 0x30(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ObjectScale;                                       // 0x38(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7F03[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortScriptedObjectMovement_SlotDefinition");
		return Clss;
	}

};

// 0x20 (0x640 - 0x620)
// Class SOMRuntime.FortScriptedObjectMovement_Slot
class UFortScriptedObjectMovement_Slot : public UStaticMeshComponent
{
public:
	class UFortScriptedObjectMovement_SlotDefinition* SlotDefinition;                                    // 0x620(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        ObjectRemoveOrder;                                 // 0x628(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7F04[0x4];                                     // Fixing Size After Last Property..
	class AFortScriptedObjectMovement_MovableObjectBase* SlottedObject;                                     // 0x630(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7F05[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortScriptedObjectMovement_Slot");
		return Clss;
	}

};

// 0x20 (0x2B0 - 0x290)
// Class SOMRuntime.FortScriptedObjectMovement_Structure
class AFortScriptedObjectMovement_Structure : public AActor
{
public:
	TArray<class UFortScriptedObjectMovement_Slot*> CachedObjectSlots;                                 // 0x290(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UFortScriptedObjectMovement_SlotDefinition*> CachedSlotDefinitions;                             // 0x2A0(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortScriptedObjectMovement_Structure");
		return Clss;
	}

};

// 0x120 (0x1C0 - 0xA0)
// Class SOMRuntime.FortGameStateComponent_ScriptedObjectMovementManager
class UFortGameStateComponent_ScriptedObjectMovementManager : public UFortGameStateComponent
{
public:
	uint8                                        Pad_7F06[0x8];                                     // Fixing Size After Last Property..
	TArray<class AFortScriptedObjectMovement_WorldPhaseSite*> WorldPhaseSites;                                   // 0xA8(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7F07[0x98];                                    // Fixing Size After Last Property..
	TArray<class AScriptedObjectMovement_StaticPath*> RegisteredStaticPaths;                             // 0x150(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	class AScriptedObjectMovement_StaticPath*    CurrentlyMovingStaticPath;                         // 0x160(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7F08[0x28];                                    // Fixing Size After Last Property..
	struct FScalableFloat                        StaticPathCooldownBetweenMoves;                    // 0x190(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7F09[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortGameStateComponent_ScriptedObjectMovementManager");
		return Clss;
	}

	void HandleCurrentPlaylistReady(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags);
};

// 0x210 (0xB90 - 0x980)
// Class SOMRuntime.FortScriptedObjectMovement_MovableObjectBase
class AFortScriptedObjectMovement_MovableObjectBase : public ABuildingGameplayActor
{
public:
	uint8                                        Pad_7F0B[0x70];                                    // Fixing Size After Last Property..
	int32                                        Editor_SkipMasterPathIndex;                        // 0x9F0(0x4)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Editor_SkipSubPathIndex;                           // 0x9F4(0x4)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Editor_NumStepsPerClick;                           // 0x9F8(0x4)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7F0C[0x24];                                    // Fixing Size After Last Property..
	class UFortScriptedObjectMovement_SlotDefinition* AssignedSlotDefinition;                            // 0xA20(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScriptedObjectMovement_DynamicPathContext MovementPath;                                      // 0xA28(0x38)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7F0D[0x8];                                     // Fixing Size After Last Property..
	class UStaticMesh*                           ScriptedObjectMesh;                                // 0xA68(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7F0E[0x18];                                    // Fixing Size After Last Property..
	bool                                         bDebugStaticMovement;                              // 0xA88(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWaitingForBeginPlaySkip;                          // 0xA89(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7F0F[0x6];                                     // Fixing Size After Last Property..
	class AScriptedObjectMovement_StaticPath*    StaticFollowPath;                                  // 0xA90(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7F10[0x8];                                     // Fixing Size After Last Property..
	struct FScriptedObjectMovement_StaticPathStepData CurrentStepData;                                   // 0xAA0(0xF0)(BlueprintVisible, BlueprintReadOnly, Net, Transient, RepNotify, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortScriptedObjectMovement_MovableObjectBase");
		return Clss;
	}

	void SetCanEverAffectNavigation(bool bCanEverAffectNavigation, class UActorComponent* TargetActorComponent);
	void OnRep_CurrentStepData();
	void NotifyStaticPathStepComplete(bool bReachedBeginPlaySkipStep);
	void HandleSlotDefinitionSlotted(class UFortScriptedObjectMovement_SlotDefinition* SlotDefinition);
	float GetStaticPathZOffsetHeight();
	void GetStaticPathTravelingBounds(struct FVector* OutBoxExtent);
	class UStaticMeshComponent* GetScriptedObjectStaticMeshComponent();
	void Editor_TryJumpToStartStep();
	void Editor_ResetObject();
	void Editor_PreviousStep();
	void Editor_NextStep();
	void Editor_DebugLogStaticPathTravelIndex();
	void Editor_ClearResetObjectLocation();
	void ConfigureStaticMeshToSlotDefinition(class UFortScriptedObjectMovement_SlotDefinition* SlotDefinition, class UStaticMeshComponent* StaticMeshComponent);
	void CheatDrawKeyframes();
	void Cheat_NetMulticast_SendDebugTimerInfo(float ServerTimeWhenQueryInvoked, float RemainingTime);
	bool BlockOverlappingStaticPathSteps();
	void BeginMovingToStaticPathNode(struct FScriptedObjectMovement_StaticPathStepData& StepData);
};

// 0x10 (0x40 - 0x30)
// Class SOMRuntime.ScriptedObjectMovement_CalendarCheatDefinition
class UScriptedObjectMovement_CalendarCheatDefinition : public UPrimaryDataAsset
{
public:
	TArray<struct FScriptedObjectMovement_StaticPathCalendarCheatDefinitionData> CheatCalendarEvents;                               // 0x30(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ScriptedObjectMovement_CalendarCheatDefinition");
		return Clss;
	}

};

// 0x258 (0x4E8 - 0x290)
// Class SOMRuntime.ScriptedObjectMovement_StaticPath
class AScriptedObjectMovement_StaticPath : public AActor
{
public:
	uint8                                        Pad_7F14[0x18];                                    // Fixing Size After Last Property..
	class USplineComponent*                      MasterSplinePath;                                  // 0x2A8(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FScriptedObjectMovement_StaticPathTravelerData> PathTravelers;                                     // 0x2B0(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<struct FScriptedObjectMovement_StaticPathSplineInputKeyData> SplineData;                                        // 0x2C0(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	float                                        StepSpacingDistance;                               // 0x2D0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7F15[0x4];                                     // Fixing Size After Last Property..
	TSoftObjectPtr<class UScriptedObjectMovement_CalendarCheatDefinition> CheatCalendarEventDefinition;                      // 0x2D8(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          MovementStyleTag;                                  // 0x300(0x4)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7F16[0x84];                                    // Fixing Size After Last Property..
	class FString                                EnterSplineCalendarEvent;                          // 0x388(0x10)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                ExitSplineCalendarEvent;                           // 0x398(0x10)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FStaticPathCalendarSplinePointGroup> OrderedCalendarEventPointGroups;                   // 0x3A8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_7F17[0x128];                                   // Fixing Size After Last Property..
	class UFortAsyncAction_CalendarMultiEventWatcher* CalendarWatcherAction;                             // 0x4E0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ScriptedObjectMovement_StaticPath");
		return Clss;
	}

	void UnlockAllPathsFromBeingRegenerated();
	void LockAllPathNodesFromBeingRegenerated();
	void HandleCalendarEventUpdated(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio);
	void HandleCalendarEventEnded(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio);
	void HandleCalendarEventActive(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio);
	void GeneratePathData();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
