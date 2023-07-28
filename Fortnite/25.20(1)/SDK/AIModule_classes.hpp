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

// 0x40 (0x68 - 0x28)
// Class AIModule.AIAsyncTaskBlueprintProxy
class UAIAsyncTaskBlueprintProxy : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E11[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AIAsyncTaskBlueprintProxy");
		return Clss;
	}

	void OnMoveCompleted(const struct FAIRequestID& RequestID, enum class EPathFollowingResult MovementResult);
};

// 0x0 (0x28 - 0x28)
// Class AIModule.AIResourceInterface
class UAIResourceInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AIResourceInterface");
		return Clss;
	}

};

// 0x0 (0x108 - 0x108)
// Class AIModule.AISenseBlueprintListener
class UAISenseBlueprintListener : public UUserDefinedStruct
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AISenseBlueprintListener");
		return Clss;
	}

};

// 0x20 (0x48 - 0x28)
// Class AIModule.AISenseConfig
class UAISenseConfig : public UObject
{
public:
	struct FColor                                DebugColor;                                        // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxAge;                                            // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bStartsEnabled : 1;                                // Mask: 0x1, PropSize: 0x10x30(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E12[0x17];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AISenseConfig");
		return Clss;
	}

};

// 0x8 (0x50 - 0x48)
// Class AIModule.AISenseConfig_Blueprint
class UAISenseConfig_Blueprint : public UAISenseConfig
{
public:
	TSubclassOf<class UAISense_Blueprint>        Implementation;                                    // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AISenseConfig_Blueprint");
		return Clss;
	}

};

// 0x18 (0x60 - 0x48)
// Class AIModule.AISenseConfig_Hearing
class UAISenseConfig_Hearing : public UAISenseConfig
{
public:
	TSubclassOf<class UAISense_Hearing>          Implementation;                                    // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HearingRange;                                      // 0x50(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LoSHearingRange;                                   // 0x54(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseLoSHearing : 1;                                // Mask: 0x1, PropSize: 0x10x58(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1E3 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_1E13[0x3];                                     // Fixing Size After Last Property..
	struct FAISenseAffiliationFilter             DetectionByAffiliation;                            // 0x5C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AISenseConfig_Hearing");
		return Clss;
	}

};

// 0x0 (0x48 - 0x48)
// Class AIModule.AISenseConfig_Prediction
class UAISenseConfig_Prediction : public UAISenseConfig
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AISenseConfig_Prediction");
		return Clss;
	}

};

// 0x28 (0x70 - 0x48)
// Class AIModule.AISenseConfig_Sight
class UAISenseConfig_Sight : public UAISenseConfig
{
public:
	TSubclassOf<class UAISense_Sight>            Implementation;                                    // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SightRadius;                                       // 0x50(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LoseSightRadius;                                   // 0x54(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PeripheralVisionAngleDegrees;                      // 0x58(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAISenseAffiliationFilter             DetectionByAffiliation;                            // 0x5C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	float                                        AutoSuccessRangeFromLastSeenLocation;              // 0x60(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PointOfViewBackwardOffset;                         // 0x64(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NearClippingRadius;                                // 0x68(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E14[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AISenseConfig_Sight");
		return Clss;
	}

};

// 0x0 (0x48 - 0x48)
// Class AIModule.AISenseConfig_Team
class UAISenseConfig_Team : public UAISenseConfig
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AISenseConfig_Team");
		return Clss;
	}

};

// 0x0 (0x48 - 0x48)
// Class AIModule.AISenseConfig_Touch
class UAISenseConfig_Touch : public UAISenseConfig
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AISenseConfig_Touch");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class AIModule.AISenseEvent
class UAISenseEvent : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AISenseEvent");
		return Clss;
	}

};

// 0x50 (0x78 - 0x28)
// Class AIModule.AISenseEvent_Damage
class UAISenseEvent_Damage : public UAISenseEvent
{
public:
	struct FAIDamageEvent                        Event;                                             // 0x28(0x50)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AISenseEvent_Damage");
		return Clss;
	}

};

// 0x38 (0x60 - 0x28)
// Class AIModule.AISenseEvent_Hearing
class UAISenseEvent_Hearing : public UAISenseEvent
{
public:
	struct FAINoiseEvent                         Event;                                             // 0x28(0x38)(Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AISenseEvent_Hearing");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class AIModule.CrowdAgentInterface
class UCrowdAgentInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CrowdAgentInterface");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class AIModule.EnvQueryTypes
class UEnvQueryTypes : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EnvQueryTypes");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class AIModule.EQSQueryResultSourceInterface
class UEQSQueryResultSourceInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EQSQueryResultSourceInterface");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class AIModule.GenericTeamAgentInterface
class UGenericTeamAgentInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GenericTeamAgentInterface");
		return Clss;
	}

};

// 0x68 (0x90 - 0x28)
// Class AIModule.PawnAction
class UPawnAction : public UObject
{
public:
	class UPawnAction*                           ChildAction;                                       // 0x28(0x8)(ZeroConstructor, Transient, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPawnAction*                           ParentAction;                                      // 0x30(0x8)(ZeroConstructor, Transient, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPawnActionsComponent*                 OwnerComponent;                                    // 0x38(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UObject*                               Instigator;                                        // 0x40(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBrainComponent*                       BrainComp;                                         // 0x48(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E15[0x30];                                    // Fixing Size After Last Property..
	uint8                                        bAllowNewSameClassInstance : 1;                    // Mask: 0x1, PropSize: 0x10x80(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bReplaceActiveSameClassInstance : 1;               // Mask: 0x2, PropSize: 0x10x80(0x1)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bShouldPauseMovement : 1;                          // Mask: 0x4, PropSize: 0x10x80(0x1)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bAlwaysNotifyOnFinished : 1;                       // Mask: 0x8, PropSize: 0x10x80(0x1)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E16[0xF];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PawnAction");
		return Clss;
	}

	enum class EAIRequestPriority GetActionPriority();
	void Finish(enum class EPawnActionResult WithResult);
	class UPawnAction* CreateActionInstance(class UObject* WorldContextObject, TSubclassOf<class UPawnAction> ActionClass);
};

// 0x38 (0xD8 - 0xA0)
// Class AIModule.PawnActionsComponent
class UPawnActionsComponent : public UActorComponent
{
public:
	class UPawn*                                 ControlledPawn;                                    // 0xA0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FPawnActionStack>              ActionStacks;                                      // 0xA8(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FPawnActionEvent>              ActionEvents;                                      // 0xB8(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UPawnAction*                           CurrentAction;                                     // 0xC8(0x8)(ZeroConstructor, Transient, Deprecated, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E1C[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PawnActionsComponent");
		return Clss;
	}

	bool K2_PushAction(class UPawnAction* NewAction, enum class EAIRequestPriority Priority, class UObject* Instigator);
	bool K2_PerformAction(class UPawn* Pawn, class UPawnAction* Action, enum class EAIRequestPriority Priority);
	enum class EPawnActionAbortState K2_ForceAbortAction(class UPawnAction* ActionToAbort);
	enum class EPawnActionAbortState K2_AbortAction(class UPawnAction* ActionToAbort);
};

// 0x0 (0x90 - 0x90)
// Class AIModule.PawnAction_BlueprintBase
class UPawnAction_BlueprintBase : public UPawnAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PawnAction_BlueprintBase");
		return Clss;
	}

	void ActionTick(class UPawn* ControlledPawn, float DeltaSeconds);
	void ActionStart(class UPawn* ControlledPawn);
	void ActionResume(class UPawn* ControlledPawn);
	void ActionPause(class UPawn* ControlledPawn);
	void ActionFinished(class UPawn* ControlledPawn, enum class EPawnActionResult WithResult);
};

// 0x60 (0xF0 - 0x90)
// Class AIModule.PawnAction_Move
class UPawnAction_Move : public UPawnAction
{
public:
	class UActor*                                GoalActor;                                         // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               GoalLocation;                                      // 0x98(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AcceptableRadius;                                  // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E1F[0x4];                                     // Fixing Size After Last Property..
	TSubclassOf<class UNavigationQueryFilter>    FilterClass;                                       // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bAllowStrafe : 1;                                  // Mask: 0x1, PropSize: 0x10xC0(0x1)(Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bFinishOnOverlap : 1;                              // Mask: 0x2, PropSize: 0x10xC0(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bUsePathfinding : 1;                               // Mask: 0x4, PropSize: 0x10xC0(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bAllowPartialPath : 1;                             // Mask: 0x8, PropSize: 0x10xC0(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bProjectGoalToNavigation : 1;                      // Mask: 0x10, PropSize: 0x10xC0(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bUpdatePathToGoal : 1;                             // Mask: 0x20, PropSize: 0x10xC0(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bAbortSubActionOnPathChange : 1;                   // Mask: 0x40, PropSize: 0x10xC0(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E20[0x2F];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PawnAction_Move");
		return Clss;
	}

};

// 0x20 (0xB0 - 0x90)
// Class AIModule.PawnAction_Repeat
class UPawnAction_Repeat : public UPawnAction
{
public:
	class UPawnAction*                           ActionToRepeat;                                    // 0x90(0x8)(ZeroConstructor, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPawnAction*                           RecentActionCopy;                                  // 0x98(0x8)(ZeroConstructor, Transient, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPawnActionFailHandling           ChildFailureHandlingMode;                          // 0xA0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E21[0xF];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PawnAction_Repeat");
		return Clss;
	}

};

// 0x28 (0xB8 - 0x90)
// Class AIModule.PawnAction_Sequence
class UPawnAction_Sequence : public UPawnAction
{
public:
	TArray<class UPawnAction*>                   ActionSequence;                                    // 0x90(0x10)(ZeroConstructor, Deprecated, UObjectWrapper, NativeAccessSpecifierPublic)
	enum class EPawnActionFailHandling           ChildFailureHandlingMode;                          // 0xA0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E22[0x7];                                     // Fixing Size After Last Property..
	class UPawnAction*                           RecentActionCopy;                                  // 0xA8(0x8)(ZeroConstructor, Transient, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E23[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PawnAction_Sequence");
		return Clss;
	}

};

// 0x10 (0xA0 - 0x90)
// Class AIModule.PawnAction_Wait
class UPawnAction_Wait : public UPawnAction
{
public:
	float                                        TimeToWait;                                        // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E24[0xC];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PawnAction_Wait");
		return Clss;
	}

};

// 0x90 (0x3B8 - 0x328)
// Class AIModule.AIController
class UAIController : public UController
{
public:
	uint8                                        Pad_1E2A[0x38];                                    // Fixing Size After Last Property..
	uint8                                        bStartAILogicOnPossess : 1;                        // Mask: 0x1, PropSize: 0x10x360(0x1)(Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bStopAILogicOnUnposses : 1;                        // Mask: 0x2, PropSize: 0x10x360(0x1)(Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bLOSflag : 1;                                      // Mask: 0x4, PropSize: 0x10x360(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSkipExtraLOSChecks : 1;                           // Mask: 0x8, PropSize: 0x10x360(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAllowStrafe : 1;                                  // Mask: 0x10, PropSize: 0x10x360(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bWantsPlayerState : 1;                             // Mask: 0x20, PropSize: 0x10x360(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSetControlRotationFromPawnOrientation : 1;        // Mask: 0x40, PropSize: 0x10x360(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1E4 : 1;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_1E2B[0x7];                                     // Fixing Size After Last Property..
	class UPathFollowingComponent*               PathFollowingComponent;                            // 0x368(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBrainComponent*                       BrainComponent;                                    // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAIPerceptionComponent*                PerceptionComponent;                               // 0x378(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPawnActionsComponent*                 ActionsComp;                                       // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBlackboardComponent*                  Blackboard;                                        // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGameplayTasksComponent*               CachedGameplayTasksComponent;                      // 0x390(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UNavigationQueryFilter>    DefaultNavigationFilterClass;                      // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            ReceiveMoveCompleted;                              // 0x3A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E2C[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AIController");
		return Clss;
	}

	bool UseBlackboard(class UBlackboardData* BlackboardAsset, class UBlackboardComponent** BlackboardComponent);
	void UnclaimTaskResource(TSubclassOf<class UGameplayTaskResource> ResourceClass);
	void SetPathFollowingComponent(class UPathFollowingComponent* NewPFComponent);
	void SetMoveBlockDetection(bool bEnable);
	bool RunBehaviorTree(class UBehaviorTree* BTAsset);
	void OnUsingBlackBoard(class UBlackboardComponent* BlackboardComp, class UBlackboardData* BlackboardAsset);
	void OnGameplayTaskResourcesClaimed(const struct FGameplayResourceSet& NewlyClaimed, const struct FGameplayResourceSet& FreshlyReleased);
	enum class EPathFollowingRequestResult MoveToLocation(struct FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, TSubclassOf<class UNavigationQueryFilter> FilterClass, bool bAllowPartialPath);
	enum class EPathFollowingRequestResult MoveToActor(class UActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, TSubclassOf<class UNavigationQueryFilter> FilterClass, bool bAllowPartialPath);
	void K2_SetFocus(class UActor* NewFocus);
	void K2_SetFocalPoint(const struct FVector& FP);
	void K2_ClearFocus();
	bool HasPartialPath();
	class UPathFollowingComponent* GetPathFollowingComponent();
	enum class EPathFollowingStatus GetMoveStatus();
	struct FVector GetImmediateMoveDestination();
	class UActor* GetFocusActor();
	struct FVector GetFocalPointOnActor(class UActor* Actor);
	struct FVector GetFocalPoint();
	class UPawnActionsComponent* GetDeprecatedActionsComponent();
	class UAIPerceptionComponent* GetAIPerceptionComponent();
	void ClaimTaskResource(TSubclassOf<class UGameplayTaskResource> ResourceClass);
};

// 0x0 (0x38 - 0x38)
// Class AIModule.AIResource_Movement
class UAIResource_Movement : public UGameplayTaskResource
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AIResource_Movement");
		return Clss;
	}

};

// 0x0 (0x38 - 0x38)
// Class AIModule.AIResource_Logic
class UAIResource_Logic : public UGameplayTaskResource
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AIResource_Logic");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class AIModule.AISubsystem
class UAISubsystem : public UObject
{
public:
	uint8                                        Pad_1E2D[0x8];                                     // Fixing Size After Last Property..
	class UAISystem*                             AISystem;                                          // 0x30(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AISubsystem");
		return Clss;
	}

};

// 0xF8 (0x150 - 0x58)
// Class AIModule.AISystem
class UAISystem : public UAISystemBase
{
public:
	struct FSoftClassPath                        PerceptionSystemClassName;                         // 0x58(0x18)(Edit, ZeroConstructor, Config, GlobalConfig, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSoftClassPath                        HotSpotManagerClassName;                           // 0x70(0x18)(Edit, ZeroConstructor, Config, GlobalConfig, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSoftClassPath                        EnvQueryManagerClassName;                          // 0x88(0x18)(Edit, ZeroConstructor, Config, GlobalConfig, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AcceptanceRadius;                                  // 0xA0(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PathfollowingRegularPathPointAcceptanceRadius;     // 0xA4(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PathfollowingNavLinkAcceptanceRadius;              // 0xA8(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFinishMoveOnGoalOverlap;                          // 0xAC(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAcceptPartialPaths;                               // 0xAD(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowStrafing;                                    // 0xAE(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowControllersAsEQSQuerier;                     // 0xAF(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableDebuggerPlugin;                             // 0xB0(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForgetStaleActors;                                // 0xB1(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddBlackboardSelfKey;                             // 0xB2(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClearBBEntryOnBTEQSFail;                          // 0xB3(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBlackboardKeyDecoratorAllowsNoneAsValue;          // 0xB4(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 DefaultSightCollisionChannel;                      // 0xB5(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E2E[0x2];                                     // Fixing Size After Last Property..
	class UBehaviorTreeManager*                  BehaviorTreeManager;                               // 0xB8(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEnvQueryManager*                      EnvironmentQueryManager;                           // 0xC0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAIPerceptionSystem*                   PerceptionSystem;                                  // 0xC8(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UAIAsyncTaskBlueprintProxy*>    AllProxyObjects;                                   // 0xD0(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class UAIHotSpotManager*                     HotSpotManager;                                    // 0xE0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNavLocalGridManager*                  NavLocalGrids;                                     // 0xE8(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E2F[0x60];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AISystem");
		return Clss;
	}

	void AILoggingVerbose();
	void AIIgnorePlayers();
};

// 0x40 (0x68 - 0x28)
// Class AIModule.BehaviorTree
class UBehaviorTree : public UObject
{
public:
	uint8                                        Pad_1E30[0x8];                                     // Fixing Size After Last Property..
	class UBTCompositeNode*                      RootNode;                                          // 0x30(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlackboardData*                       BlackboardAsset;                                   // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UBTDecorator*>                  RootDecorators;                                    // 0x40(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FBTDecoratorLogic>             RootDecoratorOps;                                  // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E31[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BehaviorTree");
		return Clss;
	}

};

// 0x58 (0xF8 - 0xA0)
// Class AIModule.BrainComponent
class UBrainComponent : public UActorComponent
{
public:
	uint8                                        Pad_1E32[0x8];                                     // Fixing Size After Last Property..
	class UBlackboardComponent*                  BlackboardComp;                                    // 0xA8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAIController*                         AIOwner;                                           // 0xB0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E33[0x40];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BrainComponent");
		return Clss;
	}

	void StopLogic(const class FString& Reason);
	void StartLogic();
	void RestartLogic();
	bool IsRunning();
	bool IsPaused();
};

// 0x1A0 (0x298 - 0xF8)
// Class AIModule.BehaviorTreeComponent
class UBehaviorTreeComponent : public UBrainComponent
{
public:
	uint8                                        Pad_1E37[0x20];                                    // Fixing Size After Last Property..
	TArray<class UBTNode*>                       NodeInstances;                                     // 0x118(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E38[0x148];                                   // Fixing Size After Last Property..
	class UBehaviorTree*                         DefaultBehaviorTreeAsset;                          // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E39[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BehaviorTreeComponent");
		return Clss;
	}

	void SetDynamicSubtree(const struct FGameplayTag& InjectTag, class UBehaviorTree* BehaviorAsset);
	double GetTagCooldownEndTime(const struct FGameplayTag& CooldownTag);
	void AddCooldownTagDuration(const struct FGameplayTag& CooldownTag, float CooldownDuration, bool bAddToExistingDuration);
};

// 0x28 (0x50 - 0x28)
// Class AIModule.BehaviorTreeManager
class UBehaviorTreeManager : public UObject
{
public:
	int32                                        MaxDebuggerSteps;                                  // 0x28(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E3A[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FBehaviorTreeTemplateInfo>     LoadedTemplates;                                   // 0x30(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UBehaviorTreeComponent*>        ActiveComponents;                                  // 0x40(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BehaviorTreeManager");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class AIModule.BehaviorTreeTypes
class UBehaviorTreeTypes : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BehaviorTreeTypes");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class AIModule.BlackboardAssetProvider
class UBlackboardAssetProvider : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BlackboardAssetProvider");
		return Clss;
	}

	class UBlackboardData* GetBlackboardAsset();
};

// 0x108 (0x1A8 - 0xA0)
// Class AIModule.BlackboardComponent
class UBlackboardComponent : public UActorComponent
{
public:
	class UBrainComponent*                       BrainComp;                                         // 0xA0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBlackboardData*                       DefaultBlackboardAsset;                            // 0xA8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBlackboardData*                       BlackboardAsset;                                   // 0xB0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E4E[0x20];                                    // Fixing Size After Last Property..
	TArray<class UBlackboardKeyType*>            KeyInstances;                                      // 0xD8(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E4F[0xC0];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BlackboardComponent");
		return Clss;
	}

	void SetValueAsVector(class FName& KeyName, const struct FVector& VectorValue);
	void SetValueAsString(class FName& KeyName, const class FString& StringValue);
	void SetValueAsRotator(class FName& KeyName, const struct FRotator& VectorValue);
	void SetValueAsObject(class FName& KeyName, class UObject* ObjectValue);
	void SetValueAsName(class FName& KeyName, class FName NameValue);
	void SetValueAsInt(class FName& KeyName, int32 IntValue);
	void SetValueAsFloat(class FName& KeyName, float FloatValue);
	void SetValueAsEnum(class FName& KeyName, uint8 EnumValue);
	void SetValueAsClass(class FName& KeyName, class UClass* ClassValue);
	void SetValueAsBool(class FName& KeyName, bool BoolValue);
	bool IsVectorValueSet(class FName& KeyName);
	struct FVector GetValueAsVector(class FName& KeyName);
	class FString GetValueAsString(class FName& KeyName);
	struct FRotator GetValueAsRotator(class FName& KeyName);
	class UObject* GetValueAsObject(class FName& KeyName);
	class FName GetValueAsName(class FName& KeyName);
	int32 GetValueAsInt(class FName& KeyName);
	float GetValueAsFloat(class FName& KeyName);
	uint8 GetValueAsEnum(class FName& KeyName);
	class UClass* GetValueAsClass(class FName& KeyName);
	bool GetValueAsBool(class FName& KeyName);
	bool GetRotationFromEntry(class FName& KeyName, struct FRotator* ResultRotation);
	bool GetLocationFromEntry(class FName& KeyName, struct FVector* ResultLocation);
	void ClearValue(class FName& KeyName);
};

// 0x20 (0x50 - 0x30)
// Class AIModule.BlackboardData
class UBlackboardData : public UDataAsset
{
public:
	class UBlackboardData*                       Parent;                                            // 0x30(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FBlackboardEntry>              Keys;                                              // 0x38(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        bHasSynchronizedKeys : 1;                          // Mask: 0x1, PropSize: 0x10x48(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E50[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BlackboardData");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class AIModule.BlackboardKeyType
class UBlackboardKeyType : public UObject
{
public:
	uint8                                        Pad_1E51[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BlackboardKeyType");
		return Clss;
	}

};

// 0x0 (0x30 - 0x30)
// Class AIModule.BlackboardKeyType_Bool
class UBlackboardKeyType_Bool : public UBlackboardKeyType
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BlackboardKeyType_Bool");
		return Clss;
	}

};

// 0x8 (0x38 - 0x30)
// Class AIModule.BlackboardKeyType_Class
class UBlackboardKeyType_Class : public UBlackboardKeyType
{
public:
	TSubclassOf<class UObject>                   BaseClass;                                         // 0x30(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BlackboardKeyType_Class");
		return Clss;
	}

};

// 0x20 (0x50 - 0x30)
// Class AIModule.BlackboardKeyType_Enum
class UBlackboardKeyType_Enum : public UBlackboardKeyType
{
public:
	class UEnum*                                 EnumType;                                          // 0x30(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EnumName;                                          // 0x38(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsEnumNameValid : 1;                              // Mask: 0x1, PropSize: 0x10x48(0x1)(Edit, DisableEditOnInstance, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E52[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BlackboardKeyType_Enum");
		return Clss;
	}

};

// 0x0 (0x30 - 0x30)
// Class AIModule.BlackboardKeyType_Float
class UBlackboardKeyType_Float : public UBlackboardKeyType
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BlackboardKeyType_Float");
		return Clss;
	}

};

// 0x0 (0x30 - 0x30)
// Class AIModule.BlackboardKeyType_Int
class UBlackboardKeyType_Int : public UBlackboardKeyType
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BlackboardKeyType_Int");
		return Clss;
	}

};

// 0x0 (0x30 - 0x30)
// Class AIModule.BlackboardKeyType_Name
class UBlackboardKeyType_Name : public UBlackboardKeyType
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BlackboardKeyType_Name");
		return Clss;
	}

};

// 0x18 (0x48 - 0x30)
// Class AIModule.BlackboardKeyType_NativeEnum
class UBlackboardKeyType_NativeEnum : public UBlackboardKeyType
{
public:
	class FString                                EnumName;                                          // 0x30(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEnum*                                 EnumType;                                          // 0x40(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BlackboardKeyType_NativeEnum");
		return Clss;
	}

};

// 0x8 (0x38 - 0x30)
// Class AIModule.BlackboardKeyType_Object
class UBlackboardKeyType_Object : public UBlackboardKeyType
{
public:
	TSubclassOf<class UObject>                   BaseClass;                                         // 0x30(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BlackboardKeyType_Object");
		return Clss;
	}

};

// 0x0 (0x30 - 0x30)
// Class AIModule.BlackboardKeyType_Rotator
class UBlackboardKeyType_Rotator : public UBlackboardKeyType
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BlackboardKeyType_Rotator");
		return Clss;
	}

};

// 0x10 (0x40 - 0x30)
// Class AIModule.BlackboardKeyType_String
class UBlackboardKeyType_String : public UBlackboardKeyType
{
public:
	class FString                                StringValue;                                       // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BlackboardKeyType_String");
		return Clss;
	}

};

// 0x0 (0x30 - 0x30)
// Class AIModule.BlackboardKeyType_Vector
class UBlackboardKeyType_Vector : public UBlackboardKeyType
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BlackboardKeyType_Vector");
		return Clss;
	}

};

// 0x30 (0x58 - 0x28)
// Class AIModule.BTNode
class UBTNode : public UObject
{
public:
	uint8                                        Pad_1E53[0x8];                                     // Fixing Size After Last Property..
	class FString                                NodeName;                                          // 0x30(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBehaviorTree*                         TreeAsset;                                         // 0x40(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBTCompositeNode*                      ParentNode;                                        // 0x48(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E54[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTNode");
		return Clss;
	}

};

// 0x8 (0x60 - 0x58)
// Class AIModule.BTAuxiliaryNode
class UBTAuxiliaryNode : public UBTNode
{
public:
	uint8                                        Pad_1E55[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTAuxiliaryNode");
		return Clss;
	}

};

// 0x28 (0x80 - 0x58)
// Class AIModule.BTCompositeNode
class UBTCompositeNode : public UBTNode
{
public:
	TArray<struct FBTCompositeChild>             Children;                                          // 0x58(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UBTService*>                    Services;                                          // 0x68(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        bApplyDecoratorScope : 1;                          // Mask: 0x1, PropSize: 0x10x78(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E56[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTCompositeNode");
		return Clss;
	}

};

// 0x8 (0x68 - 0x60)
// Class AIModule.BTDecorator
class UBTDecorator : public UBTAuxiliaryNode
{
public:
	uint8                                        BitPad_1E5 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        bInverseCondition : 1;                             // Mask: 0x80, PropSize: 0x10x60(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E57[0x3];                                     // Fixing Size After Last Property..
	enum class EBTFlowAbortMode                  FlowAbortMode;                                     // 0x64(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E58[0x3];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTDecorator");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class AIModule.BTFunctionLibrary
class UBTFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTFunctionLibrary");
		return Clss;
	}

	void StopUsingExternalEvent(class UBTNode* NodeOwner);
	void StartUsingExternalEvent(class UBTNode* NodeOwner, class UActor* OwningActor);
	void SetBlackboardValueAsVector(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, const struct FVector& Value);
	void SetBlackboardValueAsString(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, const class FString& Value);
	void SetBlackboardValueAsRotator(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, const struct FRotator& Value);
	void SetBlackboardValueAsObject(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, class UObject* Value);
	void SetBlackboardValueAsName(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, class FName Value);
	void SetBlackboardValueAsInt(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, int32 Value);
	void SetBlackboardValueAsFloat(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, float Value);
	void SetBlackboardValueAsEnum(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, uint8 Value);
	void SetBlackboardValueAsClass(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, class UClass* Value);
	void SetBlackboardValueAsBool(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, bool Value);
	class UBlackboardComponent* GetOwnersBlackboard(class UBTNode* NodeOwner);
	class UBehaviorTreeComponent* GetOwnerComponent(class UBTNode* NodeOwner);
	struct FVector GetBlackboardValueAsVector(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key);
	class FString GetBlackboardValueAsString(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key);
	struct FRotator GetBlackboardValueAsRotator(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key);
	class UObject* GetBlackboardValueAsObject(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key);
	class FName GetBlackboardValueAsName(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key);
	int32 GetBlackboardValueAsInt(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key);
	float GetBlackboardValueAsFloat(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key);
	uint8 GetBlackboardValueAsEnum(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key);
	class UClass* GetBlackboardValueAsClass(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key);
	bool GetBlackboardValueAsBool(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key);
	class UActor* GetBlackboardValueAsActor(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key);
	void ClearBlackboardValueAsVector(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key);
	void ClearBlackboardValue(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key);
};

// 0x10 (0x70 - 0x60)
// Class AIModule.BTService
class UBTService : public UBTAuxiliaryNode
{
public:
	float                                        Interval;                                          // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RandomDeviation;                                   // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bCallTickOnSearchStart : 1;                        // Mask: 0x1, PropSize: 0x10x68(0x1)(Edit, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bRestartTimerOnEachActivation : 1;                 // Mask: 0x2, PropSize: 0x10x68(0x1)(Edit, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E63[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTService");
		return Clss;
	}

};

// 0x18 (0x70 - 0x58)
// Class AIModule.BTTaskNode
class UBTTaskNode : public UBTNode
{
public:
	TArray<class UBTService*>                    Services;                                          // 0x58(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        bIgnoreRestartSelf : 1;                            // Mask: 0x1, PropSize: 0x10x68(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E64[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTTaskNode");
		return Clss;
	}

};

// 0x0 (0x80 - 0x80)
// Class AIModule.BTComposite_Selector
class UBTComposite_Selector : public UBTCompositeNode
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTComposite_Selector");
		return Clss;
	}

};

// 0x0 (0x80 - 0x80)
// Class AIModule.BTComposite_Sequence
class UBTComposite_Sequence : public UBTCompositeNode
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTComposite_Sequence");
		return Clss;
	}

};

// 0x8 (0x88 - 0x80)
// Class AIModule.BTComposite_SimpleParallel
class UBTComposite_SimpleParallel : public UBTCompositeNode
{
public:
	enum class EBTParallelMode                   FinishMode;                                        // 0x80(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E65[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTComposite_SimpleParallel");
		return Clss;
	}

};

// 0x28 (0x90 - 0x68)
// Class AIModule.BTDecorator_BlackboardBase
class UBTDecorator_BlackboardBase : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                BlackboardKey;                                     // 0x68(0x28)(Edit, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTDecorator_BlackboardBase");
		return Clss;
	}

};

// 0x30 (0xC0 - 0x90)
// Class AIModule.BTDecorator_Blackboard
class UBTDecorator_Blackboard : public UBTDecorator_BlackboardBase
{
public:
	int32                                        IntValue;                                          // 0x90(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FloatValue;                                        // 0x94(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                StringValue;                                       // 0x98(0x10)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                CachedDescription;                                 // 0xA8(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        OperationType;                                     // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EBTBlackboardRestart              NotifyObserver;                                    // 0xB9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E66[0x6];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTDecorator_Blackboard");
		return Clss;
	}

};

// 0x38 (0xA0 - 0x68)
// Class AIModule.BTDecorator_BlueprintBase
class UBTDecorator_BlueprintBase : public UBTDecorator
{
public:
	class UAIController*                         AIOwner;                                           // 0x68(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UActor*                                ActorOwner;                                        // 0x70(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FName>                          ObservedKeyNames;                                  // 0x78(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E6D[0x10];                                    // Fixing Size After Last Property..
	uint8                                        bShowPropertyDetails : 1;                          // Mask: 0x1, PropSize: 0x10x98(0x1)(Edit, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bCheckConditionOnlyBlackBoardChanges : 1;          // Mask: 0x2, PropSize: 0x10x98(0x1)(Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bIsObservingBB : 1;                                // Mask: 0x4, PropSize: 0x10x98(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E6E[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTDecorator_BlueprintBase");
		return Clss;
	}

	void ReceiveTickAI(class UAIController* OwnerController, class UPawn* ControlledPawn, float DeltaSeconds);
	void ReceiveTick(class UActor* OwnerActor, float DeltaSeconds);
	void ReceiveObserverDeactivatedAI(class UAIController* OwnerController, class UPawn* ControlledPawn);
	void ReceiveObserverDeactivated(class UActor* OwnerActor);
	void ReceiveObserverActivatedAI(class UAIController* OwnerController, class UPawn* ControlledPawn);
	void ReceiveObserverActivated(class UActor* OwnerActor);
	void ReceiveExecutionStartAI(class UAIController* OwnerController, class UPawn* ControlledPawn);
	void ReceiveExecutionStart(class UActor* OwnerActor);
	void ReceiveExecutionFinishAI(class UAIController* OwnerController, class UPawn* ControlledPawn, enum class EBTNodeResult NodeResult);
	void ReceiveExecutionFinish(class UActor* OwnerActor, enum class EBTNodeResult NodeResult);
	bool PerformConditionCheckAI(class UAIController* OwnerController, class UPawn* ControlledPawn);
	bool PerformConditionCheck(class UActor* OwnerActor);
	bool IsDecoratorObserverActive();
	bool IsDecoratorExecutionActive();
};

// 0x60 (0xC8 - 0x68)
// Class AIModule.BTDecorator_CheckGameplayTagsOnActor
class UBTDecorator_CheckGameplayTagsOnActor : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                ActorToCheck;                                      // 0x68(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	enum class EGameplayContainerMatchType       TagsToMatch;                                       // 0x90(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E6F[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 GameplayTags;                                      // 0x98(0x20)(Edit, Protected, NativeAccessSpecifierProtected)
	class FString                                CachedDescription;                                 // 0xB8(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTDecorator_CheckGameplayTagsOnActor");
		return Clss;
	}

};

// 0x58 (0xC0 - 0x68)
// Class AIModule.BTDecorator_CompareBBEntries
class UBTDecorator_CompareBBEntries : public UBTDecorator
{
public:
	enum class EBlackBoardEntryComparison        Operator;                                          // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E70[0x7];                                     // Fixing Size After Last Property..
	struct FBlackboardKeySelector                BlackboardKeyA;                                    // 0x70(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FBlackboardKeySelector                BlackboardKeyB;                                    // 0x98(0x28)(Edit, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTDecorator_CompareBBEntries");
		return Clss;
	}

};

// 0x0 (0xC0 - 0xC0)
// Class AIModule.BTDecorator_ConditionalLoop
class UBTDecorator_ConditionalLoop : public UBTDecorator_Blackboard
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTDecorator_ConditionalLoop");
		return Clss;
	}

};

// 0x88 (0xF0 - 0x68)
// Class AIModule.BTDecorator_ConeCheck
class UBTDecorator_ConeCheck : public UBTDecorator
{
public:
	float                                        ConeHalfAngle;                                     // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E71[0x4];                                     // Fixing Size After Last Property..
	struct FBlackboardKeySelector                ConeOrigin;                                        // 0x70(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                ConeDirection;                                     // 0x98(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                Observed;                                          // 0xC0(0x28)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E72[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTDecorator_ConeCheck");
		return Clss;
	}

};

// 0x8 (0x70 - 0x68)
// Class AIModule.BTDecorator_Cooldown
class UBTDecorator_Cooldown : public UBTDecorator
{
public:
	float                                        CoolDownTime;                                      // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E73[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTDecorator_Cooldown");
		return Clss;
	}

};

// 0x60 (0xC8 - 0x68)
// Class AIModule.BTDecorator_DoesPathExist
class UBTDecorator_DoesPathExist : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                BlackboardKeyA;                                    // 0x68(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FBlackboardKeySelector                BlackboardKeyB;                                    // 0x90(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	uint8                                        bUseSelf : 1;                                      // Mask: 0x1, PropSize: 0x10xB8(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1E6 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_1E74[0x3];                                     // Fixing Size After Last Property..
	enum class EPathExistanceQueryType           PathQueryType;                                     // 0xBC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E75[0x3];                                     // Fixing Size After Last Property..
	TSubclassOf<class UNavigationQueryFilter>    FilterClass;                                       // 0xC0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTDecorator_DoesPathExist");
		return Clss;
	}

};

// 0x0 (0x68 - 0x68)
// Class AIModule.BTDecorator_ForceSuccess
class UBTDecorator_ForceSuccess : public UBTDecorator
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTDecorator_ForceSuccess");
		return Clss;
	}

};

// 0x48 (0xD8 - 0x90)
// Class AIModule.BTDecorator_IsAtLocation
class UBTDecorator_IsAtLocation : public UBTDecorator_BlackboardBase
{
public:
	float                                        AcceptableRadius;                                  // 0x90(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E76[0x4];                                     // Fixing Size After Last Property..
	struct FAIDataProviderFloatValue             ParametrizedAcceptableRadius;                      // 0x98(0x38)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	enum class EFAIDistanceType                  GeometricDistanceType;                             // 0xD0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E77[0x3];                                     // Fixing Size After Last Property..
	uint8                                        bUseParametrizedRadius : 1;                        // Mask: 0x1, PropSize: 0x10xD4(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseNavAgentGoalLocation : 1;                      // Mask: 0x2, PropSize: 0x10xD4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPathFindingBasedTest : 1;                         // Mask: 0x4, PropSize: 0x10xD4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E78[0x3];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTDecorator_IsAtLocation");
		return Clss;
	}

};

// 0x8 (0x98 - 0x90)
// Class AIModule.BTDecorator_IsBBEntryOfClass
class UBTDecorator_IsBBEntryOfClass : public UBTDecorator_BlackboardBase
{
public:
	TSubclassOf<class UObject>                   TestClass;                                         // 0x90(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTDecorator_IsBBEntryOfClass");
		return Clss;
	}

};

// 0x60 (0xC8 - 0x68)
// Class AIModule.BTDecorator_KeepInCone
class UBTDecorator_KeepInCone : public UBTDecorator
{
public:
	float                                        ConeHalfAngle;                                     // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E79[0x4];                                     // Fixing Size After Last Property..
	struct FBlackboardKeySelector                ConeOrigin;                                        // 0x70(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                Observed;                                          // 0x98(0x28)(Edit, NativeAccessSpecifierPublic)
	uint8                                        bUseSelfAsOrigin : 1;                              // Mask: 0x1, PropSize: 0x10xC0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseSelfAsObserved : 1;                            // Mask: 0x2, PropSize: 0x10xC0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E7A[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTDecorator_KeepInCone");
		return Clss;
	}

};

// 0x10 (0x78 - 0x68)
// Class AIModule.BTDecorator_Loop
class UBTDecorator_Loop : public UBTDecorator
{
public:
	int32                                        NumLoops;                                          // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInfiniteLoop;                                     // 0x6C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E7B[0x3];                                     // Fixing Size After Last Property..
	float                                        InfiniteLoopTimeoutTime;                           // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E7C[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTDecorator_Loop");
		return Clss;
	}

};

// 0x0 (0x68 - 0x68)
// Class AIModule.BTDecorator_ReachedMoveGoal
class UBTDecorator_ReachedMoveGoal : public UBTDecorator
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTDecorator_ReachedMoveGoal");
		return Clss;
	}

};

// 0x10 (0x78 - 0x68)
// Class AIModule.BTDecorator_SetTagCooldown
class UBTDecorator_SetTagCooldown : public UBTDecorator
{
public:
	struct FGameplayTag                          CooldownTag;                                       // 0x68(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CooldownDuration;                                  // 0x6C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddToExistingDuration;                            // 0x70(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E7D[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTDecorator_SetTagCooldown");
		return Clss;
	}

};

// 0x10 (0x78 - 0x68)
// Class AIModule.BTDecorator_TagCooldown
class UBTDecorator_TagCooldown : public UBTDecorator
{
public:
	struct FGameplayTag                          CooldownTag;                                       // 0x68(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CooldownDuration;                                  // 0x6C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddToExistingDuration;                            // 0x70(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bActivatesCooldown;                                // 0x71(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E7E[0x6];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTDecorator_TagCooldown");
		return Clss;
	}

};

// 0x8 (0x70 - 0x68)
// Class AIModule.BTDecorator_TimeLimit
class UBTDecorator_TimeLimit : public UBTDecorator
{
public:
	float                                        TimeLimit;                                         // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E7F[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTDecorator_TimeLimit");
		return Clss;
	}

};

// 0x28 (0x98 - 0x70)
// Class AIModule.BTService_BlackboardBase
class UBTService_BlackboardBase : public UBTService
{
public:
	struct FBlackboardKeySelector                BlackboardKey;                                     // 0x70(0x28)(Edit, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTService_BlackboardBase");
		return Clss;
	}

};

// 0x28 (0x98 - 0x70)
// Class AIModule.BTService_BlueprintBase
class UBTService_BlueprintBase : public UBTService
{
public:
	class UAIController*                         AIOwner;                                           // 0x70(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UActor*                                ActorOwner;                                        // 0x78(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E82[0x10];                                    // Fixing Size After Last Property..
	uint8                                        bShowPropertyDetails : 1;                          // Mask: 0x1, PropSize: 0x10x90(0x1)(Edit, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bShowEventDetails : 1;                             // Mask: 0x2, PropSize: 0x10x90(0x1)(Edit, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E83[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTService_BlueprintBase");
		return Clss;
	}

	void ReceiveTickAI(class UAIController* OwnerController, class UPawn* ControlledPawn, float DeltaSeconds);
	void ReceiveTick(class UActor* OwnerActor, float DeltaSeconds);
	void ReceiveSearchStartAI(class UAIController* OwnerController, class UPawn* ControlledPawn);
	void ReceiveSearchStart(class UActor* OwnerActor);
	void ReceiveDeactivationAI(class UAIController* OwnerController, class UPawn* ControlledPawn);
	void ReceiveDeactivation(class UActor* OwnerActor);
	void ReceiveActivationAI(class UAIController* OwnerController, class UPawn* ControlledPawn);
	void ReceiveActivation(class UActor* OwnerActor);
	bool IsServiceActive();
};

// 0x8 (0xA0 - 0x98)
// Class AIModule.BTService_DefaultFocus
class UBTService_DefaultFocus : public UBTService_BlackboardBase
{
public:
	uint8                                        FocusPriority;                                     // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E84[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTService_DefaultFocus");
		return Clss;
	}

};

// 0x60 (0xF8 - 0x98)
// Class AIModule.BTService_RunEQS
class UBTService_RunEQS : public UBTService_BlackboardBase
{
public:
	struct FEQSParametrizedQueryExecutionRequest EQSRequest;                                        // 0x98(0x48)(Edit, Protected, NativeAccessSpecifierProtected)
	bool                                         bUpdateBBOnFail;                                   // 0xE0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E85[0x17];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTService_RunEQS");
		return Clss;
	}

};

// 0x28 (0x98 - 0x70)
// Class AIModule.BTTask_BlackboardBase
class UBTTask_BlackboardBase : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                BlackboardKey;                                     // 0x70(0x28)(Edit, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTTask_BlackboardBase");
		return Clss;
	}

};

// 0x38 (0xA8 - 0x70)
// Class AIModule.BTTask_BlueprintBase
class UBTTask_BlueprintBase : public UBTTaskNode
{
public:
	class UAIController*                         AIOwner;                                           // 0x70(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UActor*                                ActorOwner;                                        // 0x78(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FIntervalCountdown                    TickInterval;                                      // 0x80(0x8)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E88[0x18];                                    // Fixing Size After Last Property..
	uint8                                        bShowPropertyDetails : 1;                          // Mask: 0x1, PropSize: 0x10xA0(0x1)(Edit, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E89[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTTask_BlueprintBase");
		return Clss;
	}

	void SetFinishOnMessageWithId(class FName MessageName, int32 RequestID);
	void SetFinishOnMessage(class FName MessageName);
	void ReceiveTickAI(class UAIController* OwnerController, class UPawn* ControlledPawn, float DeltaSeconds);
	void ReceiveTick(class UActor* OwnerActor, float DeltaSeconds);
	void ReceiveExecuteAI(class UAIController* OwnerController, class UPawn* ControlledPawn);
	void ReceiveExecute(class UActor* OwnerActor);
	void ReceiveAbortAI(class UAIController* OwnerController, class UPawn* ControlledPawn);
	void ReceiveAbort(class UActor* OwnerActor);
	bool IsTaskExecuting();
	bool IsTaskAborting();
	void FinishExecute(bool bSuccess);
	void FinishAbort();
};

// 0x8 (0x78 - 0x70)
// Class AIModule.BTTask_FinishWithResult
class UBTTask_FinishWithResult : public UBTTaskNode
{
public:
	enum class EBTNodeResult                     Result;                                            // 0x70(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E8A[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTTask_FinishWithResult");
		return Clss;
	}

};

// 0x8 (0x78 - 0x70)
// Class AIModule.BTTask_GameplayTaskBase
class UBTTask_GameplayTaskBase : public UBTTaskNode
{
public:
	uint8                                        bWaitForGameplayTask : 1;                          // Mask: 0x1, PropSize: 0x10x70(0x1)(Edit, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E8B[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTTask_GameplayTaskBase");
		return Clss;
	}

};

// 0x8 (0x78 - 0x70)
// Class AIModule.BTTask_MakeNoise
class UBTTask_MakeNoise : public UBTTaskNode
{
public:
	float                                        Loudnes;                                           // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E8C[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTTask_MakeNoise");
		return Clss;
	}

};

// 0x18 (0xB0 - 0x98)
// Class AIModule.BTTask_MoveTo
class UBTTask_MoveTo : public UBTTask_BlackboardBase
{
public:
	float                                        AcceptableRadius;                                  // 0x98(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E8D[0x4];                                     // Fixing Size After Last Property..
	TSubclassOf<class UNavigationQueryFilter>    FilterClass;                                       // 0xA0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ObservedBlackboardValueTolerance;                  // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bObserveBlackboardValue : 1;                       // Mask: 0x1, PropSize: 0x10xAC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAllowStrafe : 1;                                  // Mask: 0x2, PropSize: 0x10xAC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAllowPartialPath : 1;                             // Mask: 0x4, PropSize: 0x10xAC(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bTrackMovingGoal : 1;                              // Mask: 0x8, PropSize: 0x10xAC(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRequireNavigableEndLocation : 1;                  // Mask: 0x10, PropSize: 0x10xAC(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bProjectGoalLocation : 1;                          // Mask: 0x20, PropSize: 0x10xAC(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bReachTestIncludesAgentRadius : 1;                 // Mask: 0x40, PropSize: 0x10xAC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bReachTestIncludesGoalRadius : 1;                  // Mask: 0x80, PropSize: 0x10xAC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bStopOnOverlap : 1;                                // Mask: 0x1, PropSize: 0x10xAD(0x1)(Edit, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bStopOnOverlapNeedsUpdate : 1;                     // Mask: 0x2, PropSize: 0x10xAD(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E8E[0x2];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTTask_MoveTo");
		return Clss;
	}

};

// 0x8 (0xB8 - 0xB0)
// Class AIModule.BTTask_MoveDirectlyToward
class UBTTask_MoveDirectlyToward : public UBTTask_MoveTo
{
public:
	uint8                                        bDisablePathUpdateOnGoalLocationChange : 1;        // Mask: 0x1, PropSize: 0x10xB0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bProjectVectorGoalToNavigation : 1;                // Mask: 0x2, PropSize: 0x10xB0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUpdatedDeprecatedProperties : 1;                  // Mask: 0x4, PropSize: 0x10xB0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E8F[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTTask_MoveDirectlyToward");
		return Clss;
	}

};

// 0x0 (0x70 - 0x70)
// Class AIModule.BTTask_PawnActionBase
class UBTTask_PawnActionBase : public UBTTaskNode
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTTask_PawnActionBase");
		return Clss;
	}

};

// 0x40 (0xB0 - 0x70)
// Class AIModule.BTTask_PlayAnimation
class UBTTask_PlayAnimation : public UBTTaskNode
{
public:
	class UAnimationAsset*                       AnimationToPlay;                                   // 0x70(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLooping : 1;                                      // Mask: 0x1, PropSize: 0x10x78(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bNonBlocking : 1;                                  // Mask: 0x2, PropSize: 0x10x78(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1E7 : 6;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_1E90[0x7];                                     // Fixing Size After Last Property..
	class UBehaviorTreeComponent*                MyOwnerComp;                                       // 0x80(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                CachedSkelMesh;                                    // 0x88(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E91[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTTask_PlayAnimation");
		return Clss;
	}

};

// 0x8 (0x78 - 0x70)
// Class AIModule.BTTask_PlaySound
class UBTTask_PlaySound : public UBTTaskNode
{
public:
	class USoundCue*                             SoundToPlay;                                       // 0x70(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTTask_PlaySound");
		return Clss;
	}

};

// 0x8 (0x78 - 0x70)
// Class AIModule.BTTask_PushPawnAction
class UBTTask_PushPawnAction : public UBTTask_PawnActionBase
{
public:
	class UPawnAction*                           Action;                                            // 0x70(0x8)(ExportObject, ZeroConstructor, InstancedReference, Deprecated, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTTask_PushPawnAction");
		return Clss;
	}

};

// 0x8 (0xA0 - 0x98)
// Class AIModule.BTTask_RotateToFaceBBEntry
class UBTTask_RotateToFaceBBEntry : public UBTTask_BlackboardBase
{
public:
	float                                        Precision;                                         // 0x98(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E92[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTTask_RotateToFaceBBEntry");
		return Clss;
	}

};

// 0x8 (0x78 - 0x70)
// Class AIModule.BTTask_RunBehavior
class UBTTask_RunBehavior : public UBTTaskNode
{
public:
	class UBehaviorTree*                         BehaviorAsset;                                     // 0x70(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTTask_RunBehavior");
		return Clss;
	}

};

// 0x18 (0x88 - 0x70)
// Class AIModule.BTTask_RunBehaviorDynamic
class UBTTask_RunBehaviorDynamic : public UBTTaskNode
{
public:
	struct FGameplayTag                          InjectionTag;                                      // 0x70(0x4)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E93[0x4];                                     // Fixing Size After Last Property..
	class UBehaviorTree*                         DefaultBehaviorAsset;                              // 0x78(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBehaviorTree*                         BehaviorAsset;                                     // 0x80(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTTask_RunBehaviorDynamic");
		return Clss;
	}

};

// 0xC0 (0x158 - 0x98)
// Class AIModule.BTTask_RunEQSQuery
class UBTTask_RunEQSQuery : public UBTTask_BlackboardBase
{
public:
	class UEnvQuery*                             QueryTemplate;                                     // 0x98(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEnvNamedValue>                QueryParams;                                       // 0xA0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAIDynamicParam>               QueryConfig;                                       // 0xB0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EEnvQueryRunMode                  RunMode;                                           // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E94[0x7];                                     // Fixing Size After Last Property..
	struct FBlackboardKeySelector                EQSQueryBlackboardKey;                             // 0xC8(0x28)(NativeAccessSpecifierPublic)
	bool                                         bUseBBKey;                                         // 0xF0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E95[0x7];                                     // Fixing Size After Last Property..
	struct FEQSParametrizedQueryExecutionRequest EQSRequest;                                        // 0xF8(0x48)(Edit, NativeAccessSpecifierPublic)
	bool                                         bUpdateBBOnFail;                                   // 0x140(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E96[0x17];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTTask_RunEQSQuery");
		return Clss;
	}

};

// 0x10 (0x80 - 0x70)
// Class AIModule.BTTask_SetTagCooldown
class UBTTask_SetTagCooldown : public UBTTaskNode
{
public:
	struct FGameplayTag                          CooldownTag;                                       // 0x70(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddToExistingDuration;                            // 0x74(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E97[0x3];                                     // Fixing Size After Last Property..
	float                                        CooldownDuration;                                  // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E98[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTTask_SetTagCooldown");
		return Clss;
	}

};

// 0x8 (0x78 - 0x70)
// Class AIModule.BTTask_Wait
class UBTTask_Wait : public UBTTaskNode
{
public:
	float                                        WaitTime;                                          // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RandomDeviation;                                   // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTTask_Wait");
		return Clss;
	}

};

// 0x28 (0xA0 - 0x78)
// Class AIModule.BTTask_WaitBlackboardTime
class UBTTask_WaitBlackboardTime : public UBTTask_Wait
{
public:
	struct FBlackboardKeySelector                BlackboardKey;                                     // 0x78(0x28)(Edit, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTTask_WaitBlackboardTime");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class AIModule.AIBlueprintHelperLibrary
class UAIBlueprintHelperLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AIBlueprintHelperLibrary");
		return Clss;
	}

	void UnlockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic);
	class UPawn* SpawnAIFromClass(class UObject* WorldContextObject, TSubclassOf<class UPawn> PawnClass, class UBehaviorTree* BehaviorTree, const struct FVector& Location, const struct FRotator& Rotation, bool bNoCollisionFail, class UActor* Owner);
	void SimpleMoveToLocation(class UController* Controller, struct FVector& Goal);
	void SimpleMoveToActor(class UController* Controller, class UActor* Goal);
	void SendAIMessage(class UPawn* Target, class FName Message, class UObject* MessageSource, bool bSuccess);
	void LockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic);
	bool IsValidAIRotation(const struct FRotator& Rotation);
	bool IsValidAILocation(const struct FVector& Location);
	bool IsValidAIDirection(const struct FVector& DirectionVector);
	int32 GetNextNavLinkIndex(class UController* Controller);
	TArray<struct FVector> GetCurrentPathPoints(class UController* Controller);
	int32 GetCurrentPathIndex(class UController* Controller);
	class UNavigationPath* GetCurrentPath(class UController* Controller);
	class UBlackboardComponent* GetBlackboard(class UActor* Target);
	class UAIController* GetAIController(class UActor* ControlledActor);
	class UAIAsyncTaskBlueprintProxy* CreateMoveToProxyObject(class UObject* WorldContextObject, class UPawn* Pawn, const struct FVector& Destination, class UActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap);
};

// 0x0 (0x28 - 0x28)
// Class AIModule.AIDataProvider
class UAIDataProvider : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AIDataProvider");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class AIModule.AIDataProvider_QueryParams
class UAIDataProvider_QueryParams : public UAIDataProvider
{
public:
	class FName                                  ParamName;                                         // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatValue;                                        // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IntValue;                                          // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         BoolValue;                                         // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EA4[0x3];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AIDataProvider_QueryParams");
		return Clss;
	}

};

// 0x10 (0x48 - 0x38)
// Class AIModule.AIDataProvider_Random
class UAIDataProvider_Random : public UAIDataProvider_QueryParams
{
public:
	float                                        Min;                                               // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Max;                                               // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bInteger : 1;                                      // Mask: 0x1, PropSize: 0x10x40(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1EA5[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AIDataProvider_Random");
		return Clss;
	}

};

// 0x0 (0x3B8 - 0x3B8)
// Class AIModule.DetourCrowdAIController
class UDetourCrowdAIController : public UAIController
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DetourCrowdAIController");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class AIModule.EnvQueryContext
class UEnvQueryContext : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EnvQueryContext");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class AIModule.EnvQueryContext_BlueprintBase
class UEnvQueryContext_BlueprintBase : public UEnvQueryContext
{
public:
	uint8                                        Pad_1EA6[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EnvQueryContext_BlueprintBase");
		return Clss;
	}

	void ProvideSingleLocation(class UObject* QuerierObject, class UActor* QuerierActor, struct FVector* ResultingLocation);
	void ProvideSingleActor(class UObject* QuerierObject, class UActor* QuerierActor, class UActor** ResultingActor);
	void ProvideLocationsSet(class UObject* QuerierObject, class UActor* QuerierActor, TArray<struct FVector>* ResultingLocationSet);
	void ProvideActorsSet(class UObject* QuerierObject, class UActor* QuerierActor, TArray<class UActor*>* ResultingActorsSet);
};

// 0x0 (0x28 - 0x28)
// Class AIModule.EnvQueryContext_Item
class UEnvQueryContext_Item : public UEnvQueryContext
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EnvQueryContext_Item");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class AIModule.EnvQueryContext_Querier
class UEnvQueryContext_Querier : public UEnvQueryContext
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EnvQueryContext_Querier");
		return Clss;
	}

};

// 0x18 (0x48 - 0x30)
// Class AIModule.EnvQuery
class UEnvQuery : public UDataAsset
{
public:
	class FName                                  QueryName;                                         // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1EA7[0x4];                                     // Fixing Size After Last Property..
	TArray<class UEnvQueryOption*>               Options;                                           // 0x38(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EnvQuery");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class AIModule.EnvQueryDebugHelpers
class UEnvQueryDebugHelpers : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EnvQueryDebugHelpers");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class AIModule.EnvQueryNode
class UEnvQueryNode : public UObject
{
public:
	int32                                        VerNum;                                            // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EA8[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EnvQueryNode");
		return Clss;
	}

};

// 0x20 (0x50 - 0x30)
// Class AIModule.EnvQueryGenerator
class UEnvQueryGenerator : public UEnvQueryNode
{
public:
	class FString                                OptionName;                                        // 0x30(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UEnvQueryItemType>         ItemType;                                          // 0x40(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAutoSortTests : 1;                                // Mask: 0x1, PropSize: 0x10x48(0x1)(Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EA9[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EnvQueryGenerator");
		return Clss;
	}

};

// 0x50 (0x78 - 0x28)
// Class AIModule.EnvQueryInstanceBlueprintWrapper
class UEnvQueryInstanceBlueprintWrapper : public UObject
{
public:
	uint8                                        Pad_1EAD[0x8];                                     // Fixing Size After Last Property..
	int32                                        QueryID;                                           // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1EAE[0x24];                                    // Fixing Size After Last Property..
	TSubclassOf<class UEnvQueryItemType>         ItemType;                                          // 0x58(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        OptionIndex;                                       // 0x60(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1EAF[0x4];                                     // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            OnQueryFinishedEvent;                              // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EnvQueryInstanceBlueprintWrapper");
		return Clss;
	}

	void SetNamedParam(class FName ParamName, float Value);
	TArray<struct FVector> GetResultsAsLocations();
	TArray<class UActor*> GetResultsAsActors();
	bool GetQueryResultsAsLocations(TArray<struct FVector>* ResultLocations);
	bool GetQueryResultsAsActors(TArray<class UActor*>* ResultActors);
	float GetItemScore(int32 ItemIndex);
	void EQSQueryDoneSignature__DelegateSignature(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus);
};

// 0x120 (0x158 - 0x38)
// Class AIModule.EnvQueryManager
class UEnvQueryManager : public UAISubsystem
{
public:
	uint8                                        Pad_1EB1[0x70];                                    // Fixing Size After Last Property..
	TArray<struct FEnvQueryInstanceCache>        InstanceCache;                                     // 0xA8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class UEnvQueryContext*>              LocalContexts;                                     // 0xB8(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UEnvQueryInstanceBlueprintWrapper*> GCShieldedWrappers;                                // 0xC8(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_1EB2[0x54];                                    // Fixing Size After Last Property..
	float                                        MaxAllowedTestingTime;                             // 0x12C(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bTestQueriesUsingBreadth;                          // 0x130(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1EB3[0x3];                                     // Fixing Size After Last Property..
	int32                                        QueryCountWarningThreshold;                        // 0x134(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	double                                       QueryCountWarningInterval;                         // 0x138(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	double                                       ExecutionTimeWarningSeconds;                       // 0x140(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	double                                       HandlingResultTimeWarningSeconds;                  // 0x148(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	double                                       GenerationTimeWarningSeconds;                      // 0x150(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EnvQueryManager");
		return Clss;
	}

	class UEnvQueryInstanceBlueprintWrapper* RunEQSQuery(class UObject* WorldContextObject, class UEnvQuery* QueryTemplate, class UObject* Querier, enum class EEnvQueryRunMode RunMode, TSubclassOf<class UEnvQueryInstanceBlueprintWrapper> WrapperClass);
};

// 0x18 (0x40 - 0x28)
// Class AIModule.EnvQueryOption
class UEnvQueryOption : public UObject
{
public:
	class UEnvQueryGenerator*                    Generator;                                         // 0x28(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UEnvQueryTest*>                 Tests;                                             // 0x30(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EnvQueryOption");
		return Clss;
	}

};

// 0x1C8 (0x1F8 - 0x30)
// Class AIModule.EnvQueryTest
class UEnvQueryTest : public UEnvQueryNode
{
public:
	int32                                        TestOrder;                                         // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEnvTestPurpose                   TestPurpose;                                       // 0x34(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EB4[0x3];                                     // Fixing Size After Last Property..
	class FString                                TestComment;                                       // 0x38(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEnvTestFilterOperator            MultipleContextFilterOp;                           // 0x48(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEnvTestScoreOperator             MultipleContextScoreOp;                            // 0x49(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEnvTestFilterType                FilterType;                                        // 0x4A(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EB5[0x5];                                     // Fixing Size After Last Property..
	struct FAIDataProviderBoolValue              BoolValue;                                         // 0x50(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             FloatValueMin;                                     // 0x88(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             FloatValueMax;                                     // 0xC0(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EB6[0x1];                                     // Fixing Size After Last Property..
	enum class EEnvTestScoreEquation             ScoringEquation;                                   // 0xF9(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEnvQueryTestClamping             ClampMinType;                                      // 0xFA(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEnvQueryTestClamping             ClampMaxType;                                      // 0xFB(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEQSNormalizationType             NormalizationType;                                 // 0xFC(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EB7[0x3];                                     // Fixing Size After Last Property..
	struct FAIDataProviderFloatValue             ScoreClampMin;                                     // 0x100(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             ScoreClampMax;                                     // 0x138(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             ScoringFactor;                                     // 0x170(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             ReferenceValue;                                    // 0x1A8(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bDefineReferenceValue;                             // 0x1E0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EB8[0xF];                                     // Fixing Size After Last Property..
	uint8                                        bWorkOnFloatValues : 1;                            // Mask: 0x1, PropSize: 0x10x1F0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1EB9[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EnvQueryTest");
		return Clss;
	}

};

// 0x38 (0x5F0 - 0x5B8)
// Class AIModule.EQSRenderingComponent
class UEQSRenderingComponent : public UDebugDrawComponent
{
public:
	uint8                                        Pad_1EBA[0x38];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EQSRenderingComponent");
		return Clss;
	}

};

// 0xA0 (0x700 - 0x660)
// Class AIModule.EQSTestingPawn
class UEQSTestingPawn : public UCharacter
{
public:
	uint8                                        Pad_1EBB[0x8];                                     // Fixing Size After Last Property..
	class UEnvQuery*                             QueryTemplate;                                     // 0x668(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEnvNamedValue>                QueryParams;                                       // 0x670(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAIDynamicParam>               QueryConfig;                                       // 0x680(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        TimeLimitPerStep;                                  // 0x690(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StepToDebugDraw;                                   // 0x694(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEnvQueryHightlightMode           HighlightMode;                                     // 0x698(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EBC[0x3];                                     // Fixing Size After Last Property..
	uint8                                        bDrawLabels : 1;                                   // Mask: 0x1, PropSize: 0x10x69C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawFailedItems : 1;                              // Mask: 0x2, PropSize: 0x10x69C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bReRunQueryOnlyOnFinishedMove : 1;                 // Mask: 0x4, PropSize: 0x10x69C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShouldBeVisibleInGame : 1;                        // Mask: 0x8, PropSize: 0x10x69C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bTickDuringGame : 1;                               // Mask: 0x10, PropSize: 0x10x69C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1E8 : 3;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_1EBD[0x3];                                     // Fixing Size After Last Property..
	enum class EEnvQueryRunMode                  QueryingMode;                                      // 0x6A0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EBE[0x7];                                     // Fixing Size After Last Property..
	struct FNavAgentProperties                   NavAgentProperties;                                // 0x6A8(0x30)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EBF[0x28];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EQSTestingPawn");
		return Clss;
	}

};

// 0x80 (0xD0 - 0x50)
// Class AIModule.EnvQueryGenerator_ActorsOfClass
class UEnvQueryGenerator_ActorsOfClass : public UEnvQueryGenerator
{
public:
	TSubclassOf<class UActor>                    SearchedActorClass;                                // 0x50(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIDataProviderBoolValue              GenerateOnlyActorsInRadius;                        // 0x58(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             SearchRadius;                                      // 0x90(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TSubclassOf<class UEnvQueryContext>          SearchCenter;                                      // 0xC8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EnvQueryGenerator_ActorsOfClass");
		return Clss;
	}

};

// 0x38 (0x88 - 0x50)
// Class AIModule.EnvQueryGenerator_BlueprintBase
class UEnvQueryGenerator_BlueprintBase : public UEnvQueryGenerator
{
public:
	class FText                                  GeneratorsActionDescription;                       // 0x50(0x18)(Edit, NativeAccessSpecifierPublic)
	TSubclassOf<class UEnvQueryContext>          Context;                                           // 0x68(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UEnvQueryItemType>         GeneratedItemType;                                 // 0x70(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EC0[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EnvQueryGenerator_BlueprintBase");
		return Clss;
	}

	class UObject* GetQuerier();
	void DoItemGenerationFromActors(TArray<class UActor*>& ContextActors);
	void DoItemGeneration(TArray<struct FVector>& ContextLocations);
	void AddGeneratedVector(const struct FVector& GeneratedVector);
	void AddGeneratedActor(class UActor* GeneratedActor);
};

// 0x20 (0x70 - 0x50)
// Class AIModule.EnvQueryGenerator_Composite
class UEnvQueryGenerator_Composite : public UEnvQueryGenerator
{
public:
	TArray<class UEnvQueryGenerator*>            Generators;                                        // 0x50(0x10)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        bAllowDifferentItemTypes : 1;                      // Mask: 0x1, PropSize: 0x10x60(0x1)(Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bHasMatchingItemType : 1;                          // Mask: 0x2, PropSize: 0x10x60(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1E9 : 6;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_1EC1[0x7];                                     // Fixing Size After Last Property..
	TSubclassOf<class UEnvQueryItemType>         ForcedItemType;                                    // 0x68(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EnvQueryGenerator_Composite");
		return Clss;
	}

};

// 0x38 (0x88 - 0x50)
// Class AIModule.EnvQueryGenerator_ProjectedPoints
class UEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator
{
public:
	struct FEnvTraceData                         ProjectionData;                                    // 0x50(0x38)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EnvQueryGenerator_ProjectedPoints");
		return Clss;
	}

};

// 0xF0 (0x178 - 0x88)
// Class AIModule.EnvQueryGenerator_Cone
class UEnvQueryGenerator_Cone : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue             AlignedPointsDistance;                             // 0x88(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FAIDataProviderFloatValue             ConeDegrees;                                       // 0xC0(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FAIDataProviderFloatValue             AngleStep;                                         // 0xF8(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FAIDataProviderFloatValue             Range;                                             // 0x130(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UEnvQueryContext>          CenterActor;                                       // 0x168(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bIncludeContextLocation : 1;                       // Mask: 0x1, PropSize: 0x10x170(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1EC2[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EnvQueryGenerator_Cone");
		return Clss;
	}

};

// 0x8 (0x58 - 0x50)
// Class AIModule.EnvQueryGenerator_CurrentLocation
class UEnvQueryGenerator_CurrentLocation : public UEnvQueryGenerator
{
public:
	TSubclassOf<class UEnvQueryContext>          QueryContext;                                      // 0x50(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EnvQueryGenerator_CurrentLocation");
		return Clss;
	}

};

// 0x150 (0x1D8 - 0x88)
// Class AIModule.EnvQueryGenerator_Donut
class UEnvQueryGenerator_Donut : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue             InnerRadius;                                       // 0x88(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             OuterRadius;                                       // 0xC0(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderIntValue               NumberOfRings;                                     // 0xF8(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderIntValue               PointsPerRing;                                     // 0x130(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FEnvDirection                         ArcDirection;                                      // 0x168(0x20)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             ArcAngle;                                          // 0x188(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUseSpiralPattern;                                 // 0x1C0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EC3[0x7];                                     // Fixing Size After Last Property..
	TSubclassOf<class UEnvQueryContext>          Center;                                            // 0x1C8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDefineArc : 1;                                    // Mask: 0x1, PropSize: 0x10x1D0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EC4[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EnvQueryGenerator_Donut");
		return Clss;
	}

};

// 0x198 (0x220 - 0x88)
// Class AIModule.EnvQueryGenerator_OnCircle
class UEnvQueryGenerator_OnCircle : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue             CircleRadius;                                      // 0x88(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             SpaceBetween;                                      // 0xC0(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderIntValue               NumberOfPoints;                                    // 0xF8(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	enum class EPointOnCircleSpacingMethod       PointOnCircleSpacingMethod;                        // 0x130(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EC5[0x7];                                     // Fixing Size After Last Property..
	struct FEnvDirection                         ArcDirection;                                      // 0x138(0x20)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             ArcAngle;                                          // 0x158(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                        AngleRadians;                                      // 0x190(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EC6[0x4];                                     // Fixing Size After Last Property..
	TSubclassOf<class UEnvQueryContext>          CircleCenter;                                      // 0x198(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreAnyContextActorsWhenGeneratingCircle;       // 0x1A0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EC7[0x7];                                     // Fixing Size After Last Property..
	struct FAIDataProviderFloatValue             CircleCenterZOffset;                               // 0x1A8(0x38)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FEnvTraceData                         TraceData;                                         // 0x1E0(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        bDefineArc : 1;                                    // Mask: 0x1, PropSize: 0x10x218(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EC8[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EnvQueryGenerator_OnCircle");
		return Clss;
	}

};

// 0x78 (0x100 - 0x88)
// Class AIModule.EnvQueryGenerator_SimpleGrid
class UEnvQueryGenerator_SimpleGrid : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue             GridSize;                                          // 0x88(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             SpaceBetween;                                      // 0xC0(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TSubclassOf<class UEnvQueryContext>          GenerateAround;                                    // 0xF8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EnvQueryGenerator_SimpleGrid");
		return Clss;
	}

};

// 0x78 (0x178 - 0x100)
// Class AIModule.EnvQueryGenerator_PathingGrid
class UEnvQueryGenerator_PathingGrid : public UEnvQueryGenerator_SimpleGrid
{
public:
	struct FAIDataProviderBoolValue              PathToItem;                                        // 0x100(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavigationQueryFilter>    NavigationFilter;                                  // 0x138(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             ScanRangeMultiplier;                               // 0x140(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EnvQueryGenerator_PathingGrid");
		return Clss;
	}

};

// 0x58 (0xA8 - 0x50)
// Class AIModule.EnvQueryGenerator_PerceivedActors
class UEnvQueryGenerator_PerceivedActors : public UEnvQueryGenerator
{
public:
	TSubclassOf<class UActor>                    AllowedActorClass;                                 // 0x50(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FAIDataProviderFloatValue             SearchRadius;                                      // 0x58(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UEnvQueryContext>          ListenerContext;                                   // 0x90(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UAISense>                  SenseToUse;                                        // 0x98(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIncludeKnownActors;                               // 0xA0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1EC9[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EnvQueryGenerator_PerceivedActors");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class AIModule.EnvQueryItemType
class UEnvQueryItemType : public UObject
{
public:
	uint8                                        Pad_1ECA[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EnvQueryItemType");
		return Clss;
	}

};

// 0x0 (0x30 - 0x30)
// Class AIModule.EnvQueryItemType_VectorBase
class UEnvQueryItemType_VectorBase : public UEnvQueryItemType
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EnvQueryItemType_VectorBase");
		return Clss;
	}

};

// 0x0 (0x30 - 0x30)
// Class AIModule.EnvQueryItemType_ActorBase
class UEnvQueryItemType_ActorBase : public UEnvQueryItemType_VectorBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EnvQueryItemType_ActorBase");
		return Clss;
	}

};

// 0x0 (0x30 - 0x30)
// Class AIModule.EnvQueryItemType_Actor
class UEnvQueryItemType_Actor : public UEnvQueryItemType_ActorBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EnvQueryItemType_Actor");
		return Clss;
	}

};

// 0x0 (0x30 - 0x30)
// Class AIModule.EnvQueryItemType_Direction
class UEnvQueryItemType_Direction : public UEnvQueryItemType_VectorBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EnvQueryItemType_Direction");
		return Clss;
	}

};

// 0x0 (0x30 - 0x30)
// Class AIModule.EnvQueryItemType_Point
class UEnvQueryItemType_Point : public UEnvQueryItemType_VectorBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EnvQueryItemType_Point");
		return Clss;
	}

};

// 0x10 (0x208 - 0x1F8)
// Class AIModule.EnvQueryTest_Distance
class UEnvQueryTest_Distance : public UEnvQueryTest
{
public:
	enum class EEnvTestDistance                  TestMode;                                          // 0x1F8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ECB[0x7];                                     // Fixing Size After Last Property..
	TSubclassOf<class UEnvQueryContext>          DistanceTo;                                        // 0x200(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EnvQueryTest_Distance");
		return Clss;
	}

};

// 0x48 (0x240 - 0x1F8)
// Class AIModule.EnvQueryTest_Dot
class UEnvQueryTest_Dot : public UEnvQueryTest
{
public:
	struct FEnvDirection                         LineA;                                             // 0x1F8(0x20)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FEnvDirection                         LineB;                                             // 0x218(0x20)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	enum class EEnvTestDot                       TestMode;                                          // 0x238(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAbsoluteValue;                                    // 0x239(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1ECC[0x6];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EnvQueryTest_Dot");
		return Clss;
	}

};

// 0x70 (0x268 - 0x1F8)
// Class AIModule.EnvQueryTest_GameplayTags
class UEnvQueryTest_GameplayTags : public UEnvQueryTest
{
public:
	struct FGameplayTagQuery                     TagQueryToMatch;                                   // 0x1F8(0x48)(Edit, Protected, NativeAccessSpecifierProtected)
	bool                                         bRejectIncompatibleItems;                          // 0x240(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUpdatedToUseQuery;                                // 0x241(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EGameplayContainerMatchType       TagsToMatch;                                       // 0x242(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1ECD[0x5];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 GameplayTags;                                      // 0x248(0x20)(Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EnvQueryTest_GameplayTags");
		return Clss;
	}

};

// 0x30 (0x228 - 0x1F8)
// Class AIModule.EnvQueryTest_Overlap
class UEnvQueryTest_Overlap : public UEnvQueryTest
{
public:
	struct FEnvOverlapData                       OverlapData;                                       // 0x1F8(0x30)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EnvQueryTest_Overlap");
		return Clss;
	}

};

// 0x88 (0x280 - 0x1F8)
// Class AIModule.EnvQueryTest_Pathfinding
class UEnvQueryTest_Pathfinding : public UEnvQueryTest
{
public:
	enum class EEnvTestPathfinding               TestMode;                                          // 0x1F8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ECE[0x7];                                     // Fixing Size After Last Property..
	TSubclassOf<class UEnvQueryContext>          Context;                                           // 0x200(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIDataProviderBoolValue              PathFromContext;                                   // 0x208(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderBoolValue              SkipUnreachable;                                   // 0x240(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavigationQueryFilter>    FilterClass;                                       // 0x278(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EnvQueryTest_Pathfinding");
		return Clss;
	}

};

// 0x38 (0x2B8 - 0x280)
// Class AIModule.EnvQueryTest_PathfindingBatch
class UEnvQueryTest_PathfindingBatch : public UEnvQueryTest_Pathfinding
{
public:
	struct FAIDataProviderFloatValue             ScanRangeMultiplier;                               // 0x280(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EnvQueryTest_PathfindingBatch");
		return Clss;
	}

};

// 0x38 (0x230 - 0x1F8)
// Class AIModule.EnvQueryTest_Project
class UEnvQueryTest_Project : public UEnvQueryTest
{
public:
	struct FEnvTraceData                         ProjectionData;                                    // 0x1F8(0x38)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EnvQueryTest_Project");
		return Clss;
	}

};

// 0x0 (0x1F8 - 0x1F8)
// Class AIModule.EnvQueryTest_Random
class UEnvQueryTest_Random : public UEnvQueryTest
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EnvQueryTest_Random");
		return Clss;
	}

};

// 0xE8 (0x2E0 - 0x1F8)
// Class AIModule.EnvQueryTest_Trace
class UEnvQueryTest_Trace : public UEnvQueryTest
{
public:
	struct FEnvTraceData                         TraceData;                                         // 0x1F8(0x38)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FAIDataProviderBoolValue              TraceFromContext;                                  // 0x230(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             ItemHeightOffset;                                  // 0x268(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             ContextHeightOffset;                               // 0x2A0(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic)
	TSubclassOf<class UEnvQueryContext>          Context;                                           // 0x2D8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EnvQueryTest_Trace");
		return Clss;
	}

};

// 0x18 (0x210 - 0x1F8)
// Class AIModule.EnvQueryTest_Volume
class UEnvQueryTest_Volume : public UEnvQueryTest
{
public:
	TSubclassOf<class UEnvQueryContext>          VolumeContext;                                     // 0x1F8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UVolume>                   VolumeClass;                                       // 0x200(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bDoComplexVolumeTest : 1;                          // Mask: 0x1, PropSize: 0x10x208(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bSkipTestIfNoVolumes : 1;                          // Mask: 0x2, PropSize: 0x10x208(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1ECF[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EnvQueryTest_Volume");
		return Clss;
	}

};

// 0x0 (0x3B8 - 0x3B8)
// Class AIModule.GridPathAIController
class UGridPathAIController : public UAIController
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GridPathAIController");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class AIModule.AIHotSpotManager
class UAIHotSpotManager : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AIHotSpotManager");
		return Clss;
	}

};

// 0x228 (0x2C8 - 0xA0)
// Class AIModule.PathFollowingComponent
class UPathFollowingComponent : public UActorComponent
{
public:
	uint8                                        Pad_1ED0[0x38];                                    // Fixing Size After Last Property..
	class UNavMovementComponent*                 MovementComp;                                      // 0xD8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1ED1[0x8];                                     // Fixing Size After Last Property..
	class UNavigationData*                       MyNavData;                                         // 0xE8(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1ED2[0x1D8];                                   // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PathFollowingComponent");
		return Clss;
	}

	void OnNavDataRegistered(class UNavigationData* NavData);
	void OnActorBump(class UActor* SelfActor, class UActor* OtherActor, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	struct FVector GetPathDestination();
	enum class EPathFollowingAction GetPathActionType();
};

// 0x50 (0x318 - 0x2C8)
// Class AIModule.CrowdFollowingComponent
class UCrowdFollowingComponent : public UPathFollowingComponent
{
public:
	uint8                                        Pad_1ED3[0x18];                                    // Fixing Size After Last Property..
	struct FVector                               CrowdAgentMoveDirection;                           // 0x2E0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ED4[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CrowdFollowingComponent");
		return Clss;
	}

	void SuspendCrowdSteering(bool bSuspend);
};

// 0xC8 (0xF0 - 0x28)
// Class AIModule.CrowdManager
class UCrowdManager : public UCrowdManagerBase
{
public:
	class UNavigationData*                       MyNavData;                                         // 0x28(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FCrowdAvoidanceConfig>         AvoidanceConfig;                                   // 0x30(0x10)(Edit, ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	TArray<struct FCrowdAvoidanceSamplingPattern> SamplingPatterns;                                  // 0x40(0x10)(Edit, ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	int32                                        MaxAgents;                                         // 0x50(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxAgentRadius;                                    // 0x54(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxAvoidedAgents;                                  // 0x58(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxAvoidedWalls;                                   // 0x5C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        NavmeshCheckInterval;                              // 0x60(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PathOptimizationInterval;                          // 0x64(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SeparationDirClamp;                                // 0x68(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PathOffsetRadiusMultiplier;                        // 0x6C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_1EA : 4;                                    // Fixing Bit-Field Size..
	uint8                                        bResolveCollisions : 1;                            // Mask: 0x10, PropSize: 0x10x70(0x1)(Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1ED5[0x7F];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CrowdManager");
		return Clss;
	}

};

// 0x30 (0x2F8 - 0x2C8)
// Class AIModule.GridPathFollowingComponent
class UGridPathFollowingComponent : public UPathFollowingComponent
{
public:
	class UNavLocalGridManager*                  GridManager;                                       // 0x2C8(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1ED6[0x28];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GridPathFollowingComponent");
		return Clss;
	}

};

// 0x0 (0x48 - 0x48)
// Class AIModule.NavFilter_AIControllerDefault
class UNavFilter_AIControllerDefault : public UNavigationQueryFilter
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavFilter_AIControllerDefault");
		return Clss;
	}

};

// 0x50 (0x2E0 - 0x290)
// Class AIModule.NavLinkProxy
class UNavLinkProxy : public UActor
{
public:
	uint8                                        Pad_1ED7[0x10];                                    // Fixing Size After Last Property..
	TArray<struct FNavigationLink>               PointLinks;                                        // 0x2A0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNavigationSegmentLink>        SegmentLinks;                                      // 0x2B0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class UNavLinkCustomComponent*               SmartLinkComp;                                     // 0x2C0(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bSmartLinkIsRelevant;                              // 0x2C8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ED8[0x7];                                     // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            OnSmartLinkReached;                                // 0x2D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavLinkProxy");
		return Clss;
	}

	void SetSmartLinkEnabled(bool bEnabled);
	void ResumePathFollowing(class UActor* Agent);
	void ReceiveSmartLinkReached(class UActor* Agent, struct FVector& Destination);
	bool IsSmartLinkEnabled();
	bool HasMovingAgents();
};

// 0x30 (0x58 - 0x28)
// Class AIModule.NavLocalGridManager
class UNavLocalGridManager : public UObject
{
public:
	uint8                                        Pad_1EE0[0x30];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavLocalGridManager");
		return Clss;
	}

	bool SetLocalNavigationGridDensity(class UObject* WorldContextObject, float CellSize);
	void RemoveLocalNavigationGrid(class UObject* WorldContextObject, int32 GridId, bool bRebuildGrids);
	bool FindLocalNavigationGridPath(class UObject* WorldContextObject, struct FVector& Start, struct FVector& End, TArray<struct FVector>* PathPoints);
	int32 AddLocalNavigationGridForPoints(class UObject* WorldContextObject, TArray<struct FVector>& Locations, int32 Radius2D, float Height, bool bRebuildGrids);
	int32 AddLocalNavigationGridForPoint(class UObject* WorldContextObject, struct FVector& Location, int32 Radius2D, float Height, bool bRebuildGrids);
	int32 AddLocalNavigationGridForCapsule(class UObject* WorldContextObject, struct FVector& Location, float CapsuleRadius, float CapsuleHalfHeight, int32 Radius2D, float Height, bool bRebuildGrids);
	int32 AddLocalNavigationGridForBox(class UObject* WorldContextObject, struct FVector& Location, const struct FVector& Extent, const struct FRotator& Rotation, int32 Radius2D, float Height, bool bRebuildGrids);
};

// 0x0 (0x28 - 0x28)
// Class AIModule.PathFollowingManager
class UPathFollowingManager : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PathFollowingManager");
		return Clss;
	}

};

// 0xE8 (0x188 - 0xA0)
// Class AIModule.AIPerceptionComponent
class UAIPerceptionComponent : public UActorComponent
{
public:
	TArray<class UAISenseConfig*>                SensesConfig;                                      // 0xA0(0x10)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TSubclassOf<class UAISense>                  DominantSense;                                     // 0xB0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1EE4[0x8];                                     // Fixing Size After Last Property..
	class UAIController*                         AIOwner;                                           // 0xC0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1EE5[0x80];                                    // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            OnPerceptionUpdated;                               // 0x148(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTargetPerceptionForgotten;                       // 0x158(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTargetPerceptionUpdated;                         // 0x168(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTargetPerceptionInfoUpdated;                     // 0x178(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AIPerceptionComponent");
		return Clss;
	}

	void SetSenseEnabled(TSubclassOf<class UAISense> SenseClass, bool bEnable);
	void RequestStimuliListenerUpdate();
	void OnOwnerEndPlay(class UActor* Actor, enum class EEndPlayReason EndPlayReason);
	void GetPerceivedHostileActorsBySense(TSubclassOf<class UAISense> SenseToUse, TArray<class UActor*>* OutActors);
	void GetPerceivedHostileActors(TArray<class UActor*>* OutActors);
	void GetKnownPerceivedActors(TSubclassOf<class UAISense> SenseToUse, TArray<class UActor*>* OutActors);
	void GetCurrentlyPerceivedActors(TSubclassOf<class UAISense> SenseToUse, TArray<class UActor*>* OutActors);
	bool GetActorsPerception(class UActor* Actor, struct FActorPerceptionBlueprintInfo* Info);
	void ForgetAll();
};

// 0x0 (0x28 - 0x28)
// Class AIModule.AIPerceptionListenerInterface
class UAIPerceptionListenerInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AIPerceptionListenerInterface");
		return Clss;
	}

};

// 0x18 (0xB8 - 0xA0)
// Class AIModule.AIPerceptionStimuliSourceComponent
class UAIPerceptionStimuliSourceComponent : public UActorComponent
{
public:
	uint8                                        bAutoRegisterAsSource : 1;                         // Mask: 0x1, PropSize: 0x10xA0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_1EB : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_1EE6[0x7];                                     // Fixing Size After Last Property..
	TArray<TSubclassOf<class UAISense>>          RegisterAsSourceForSenses;                         // 0xA8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AIPerceptionStimuliSourceComponent");
		return Clss;
	}

	void UnregisterFromSense(TSubclassOf<class UAISense> SenseClass);
	void UnregisterFromPerceptionSystem();
	void RegisterWithPerceptionSystem();
	void RegisterForSense(TSubclassOf<class UAISense> SenseClass);
};

// 0xF8 (0x130 - 0x38)
// Class AIModule.AIPerceptionSystem
class UAIPerceptionSystem : public UAISubsystem
{
public:
	uint8                                        Pad_1EE9[0x50];                                    // Fixing Size After Last Property..
	TArray<class UAISense*>                      Senses;                                            // 0x88(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	float                                        PerceptionAgingRate;                               // 0x98(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1EEA[0x94];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AIPerceptionSystem");
		return Clss;
	}

	void ReportPerceptionEvent(class UObject* WorldContextObject, class UAISenseEvent* PerceptionEvent);
	void ReportEvent(class UAISenseEvent* PerceptionEvent);
	bool RegisterPerceptionStimuliSource(class UObject* WorldContextObject, TSubclassOf<class UAISense> Sense, class UActor* Target);
	void OnPerceptionStimuliSourceEndPlay(class UActor* Actor, enum class EEndPlayReason EndPlayReason);
	TSubclassOf<class UAISense> GetSenseClassForStimulus(class UObject* WorldContextObject, struct FAIStimulus& Stimulus);
};

// 0x50 (0x78 - 0x28)
// Class AIModule.AISense
class UAISense : public UObject
{
public:
	enum class EAISenseNotifyType                NotifyType;                                        // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1EEB[0x3];                                     // Fixing Size After Last Property..
	uint8                                        bWantsNewPawnNotification : 1;                     // Mask: 0x1, PropSize: 0x10x2C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bAutoRegisterAllPawnsAsSources : 1;                // Mask: 0x2, PropSize: 0x10x2C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_1EC : 6;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_1EEC[0x3];                                     // Fixing Size After Last Property..
	class UAIPerceptionSystem*                   PerceptionSystemInstance;                          // 0x30(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1EED[0x40];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AISense");
		return Clss;
	}

};

// 0x8 (0x50 - 0x48)
// Class AIModule.AISenseConfig_Damage
class UAISenseConfig_Damage : public UAISenseConfig
{
public:
	TSubclassOf<class UAISense_Damage>           Implementation;                                    // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AISenseConfig_Damage");
		return Clss;
	}

};

// 0x28 (0xA0 - 0x78)
// Class AIModule.AISense_Blueprint
class UAISense_Blueprint : public UAISense
{
public:
	TSubclassOf<class UUserDefinedStruct>        ListenerDataType;                                  // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UAIPerceptionComponent*>        ListenerContainer;                                 // 0x80(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UAISenseEvent*>                 UnprocessedEvents;                                 // 0x90(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AISense_Blueprint");
		return Clss;
	}

	float OnUpdate(TArray<class UAISenseEvent*>& EventsToProcess);
	void OnListenerUpdated(class UActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
	void OnListenerUnregistered(class UActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
	void OnListenerRegistered(class UActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
	void K2_OnNewPawn(class UPawn* NewPawn);
	void GetAllListenerComponents(TArray<class UAIPerceptionComponent*>* ListenerComponents);
	void GetAllListenerActors(TArray<class UActor*>* ListenerActors);
};

// 0x10 (0x88 - 0x78)
// Class AIModule.AISense_Damage
class UAISense_Damage : public UAISense
{
public:
	TArray<struct FAIDamageEvent>                RegisteredEvents;                                  // 0x78(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AISense_Damage");
		return Clss;
	}

	void ReportDamageEvent(class UObject* WorldContextObject, class UActor* DamagedActor, class UActor* Instigator, float DamageAmount, const struct FVector& EventLocation, const struct FVector& HitLocation, class FName Tag);
};

// 0x68 (0xE0 - 0x78)
// Class AIModule.AISense_Hearing
class UAISense_Hearing : public UAISense
{
public:
	TArray<struct FAINoiseEvent>                 NoiseEvents;                                       // 0x78(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	float                                        SpeedOfSoundSq;                                    // 0x88(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1EF2[0x54];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AISense_Hearing");
		return Clss;
	}

	void ReportNoiseEvent(class UObject* WorldContextObject, const struct FVector& NoiseLocation, float Loudness, class UActor* Instigator, float MaxRange, class FName Tag);
};

// 0x10 (0x88 - 0x78)
// Class AIModule.AISense_Prediction
class UAISense_Prediction : public UAISense
{
public:
	TArray<struct FAIPredictionEvent>            RegisteredEvents;                                  // 0x78(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AISense_Prediction");
		return Clss;
	}

	void RequestPawnPredictionEvent(class UPawn* Requestor, class UActor* PredictedActor, float PredictionTime);
	void RequestControllerPredictionEvent(class UAIController* Requestor, class UActor* PredictedActor, float PredictionTime);
};

// 0x130 (0x1A8 - 0x78)
// Class AIModule.AISense_Sight
class UAISense_Sight : public UAISense
{
public:
	uint8                                        Pad_1EF5[0xD8];                                    // Fixing Size After Last Property..
	int32                                        MaxTracesPerTick;                                  // 0x150(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxAsyncTracesPerTick;                             // 0x154(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MinQueriesPerTimeSliceCheck;                       // 0x158(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1EF6[0x4];                                     // Fixing Size After Last Property..
	double                                       MaxTimeSlicePerTick;                               // 0x160(0x8)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HighImportanceQueryDistanceThreshold;              // 0x168(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1EF7[0x4];                                     // Fixing Size After Last Property..
	float                                        MaxQueryImportance;                                // 0x170(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SightLimitQueryImportance;                         // 0x174(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PendingQueriesBudgetReductionRatio;                // 0x178(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseAsynchronousTraceForDefaultSightQueries;       // 0x17C(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1EF8[0x2B];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AISense_Sight");
		return Clss;
	}

};

// 0x10 (0x88 - 0x78)
// Class AIModule.AISense_Team
class UAISense_Team : public UAISense
{
public:
	TArray<struct FAITeamStimulusEvent>          RegisteredEvents;                                  // 0x78(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AISense_Team");
		return Clss;
	}

};

// 0x10 (0x88 - 0x78)
// Class AIModule.AISense_Touch
class UAISense_Touch : public UAISense
{
public:
	TArray<struct FAITouchEvent>                 RegisteredEvents;                                  // 0x78(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AISense_Touch");
		return Clss;
	}

	void ReportTouchEvent(class UObject* WorldContextObject, class UActor* TouchReceiver, class UActor* OtherActor, const struct FVector& Location);
};

// 0x0 (0x28 - 0x28)
// Class AIModule.AISightTargetInterface
class UAISightTargetInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AISightTargetInterface");
		return Clss;
	}

};

// 0x48 (0xE8 - 0xA0)
// Class AIModule.PawnSensingComponent
class UPawnSensingComponent : public UActorComponent
{
public:
	float                                        HearingThreshold;                                  // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LOSHearingThreshold;                               // 0xA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SightRadius;                                       // 0xA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SensingInterval;                                   // 0xAC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HearingMaxSoundAge;                                // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableSensingUpdates : 1;                         // Mask: 0x1, PropSize: 0x10xB4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOnlySensePlayers : 1;                             // Mask: 0x2, PropSize: 0x10xB4(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSeePawns : 1;                                     // Mask: 0x4, PropSize: 0x10xB4(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bHearNoises : 1;                                   // Mask: 0x8, PropSize: 0x10xB4(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1ED : 4;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_1EFA[0xB];                                     // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            OnSeePawn;                                         // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnHearNoise;                                       // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                        PeripheralVisionAngle;                             // 0xE0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PeripheralVisionCosine;                            // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PawnSensingComponent");
		return Clss;
	}

	void SetSensingUpdatesEnabled(bool bEnabled);
	void SetSensingInterval(float NewSensingInterval);
	void SetPeripheralVisionAngle(float NewPeripheralVisionAngle);
	void SeePawnDelegate__DelegateSignature(class UPawn* Pawn);
	void HearNoiseDelegate__DelegateSignature(class UPawn* Instigator, struct FVector& Location, float Volume);
	float GetPeripheralVisionCosine();
	float GetPeripheralVisionAngle();
};

// 0x8 (0x68 - 0x60)
// Class AIModule.AITask
class UAITask : public UGameplayTask
{
public:
	class UAIController*                         OwnerController;                                   // 0x60(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AITask");
		return Clss;
	}

};

// 0x0 (0x68 - 0x68)
// Class AIModule.AITask_LockLogic
class UAITask_LockLogic : public UAITask
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AITask_LockLogic");
		return Clss;
	}

};

// 0xB0 (0x118 - 0x68)
// Class AIModule.AITask_MoveTo
class UAITask_MoveTo : public UAITask
{
public:
	FMulticastInlineDelegateProperty_            OnRequestFailed;                                   // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnMoveFinished;                                    // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	struct FAIMoveRequest                        MoveRequest;                                       // 0x88(0x50)(Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1EFC[0x40];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AITask_MoveTo");
		return Clss;
	}

	class UAITask_MoveTo* AIMoveTo(class UAIController* Controller, const struct FVector& GoalLocation, class UActor* GoalActor, float AcceptanceRadius, enum class EAIOptionFlag StopOnOverlap, enum class EAIOptionFlag AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuousGoalTracking, enum class EAIOptionFlag ProjectGoalOnNavigation);
};

// 0x78 (0xE0 - 0x68)
// Class AIModule.AITask_RunEQS
class UAITask_RunEQS : public UAITask
{
public:
	uint8                                        Pad_1EFD[0x78];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AITask_RunEQS");
		return Clss;
	}

	class UAITask_RunEQS* RunEQS(class UAIController* Controller, class UEnvQuery* QueryTemplate);
};

// 0x0 (0x28 - 0x28)
// Class AIModule.VisualLoggerExtension
class UVisualLoggerExtension : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VisualLoggerExtension");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
