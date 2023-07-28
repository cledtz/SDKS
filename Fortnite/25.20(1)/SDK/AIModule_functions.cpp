#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted
// (Final, Native, Public)
// Parameters:
// struct FAIRequestID                RequestID                                                        (Parm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EPathFollowingResult    MovementResult                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIAsyncTaskBlueprintProxy::OnMoveCompleted(const struct FAIRequestID& RequestID, enum class EPathFollowingResult MovementResult)
{
	static auto Func = Class->GetFunction("AIAsyncTaskBlueprintProxy", "OnMoveCompleted");

	Params::UAIAsyncTaskBlueprintProxy_OnMoveCompleted_Params Parms;

	Parms.RequestID = RequestID;
	Parms.MovementResult = MovementResult;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.PawnAction.GetActionPriority
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EAIRequestPriority      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EAIRequestPriority UPawnAction::GetActionPriority()
{
	static auto Func = Class->GetFunction("PawnAction", "GetActionPriority");

	Params::UPawnAction_GetActionPriority_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.PawnAction.Finish
// (Native, Protected, BlueprintCallable)
// Parameters:
// enum class EPawnActionResult       WithResult                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPawnAction::Finish(enum class EPawnActionResult WithResult)
{
	static auto Func = Class->GetFunction("PawnAction", "Finish");

	Params::UPawnAction_Finish_Params Parms;

	Parms.WithResult = WithResult;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.PawnAction.CreateActionInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UPawnAction>     ActionClass                                                      (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPawnAction*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPawnAction* UPawnAction::CreateActionInstance(class UObject* WorldContextObject, TSubclassOf<class UPawnAction> ActionClass)
{
	static auto Func = Class->GetFunction("PawnAction", "CreateActionInstance");

	Params::UPawnAction_CreateActionInstance_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.ActionClass = ActionClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.PawnActionsComponent.K2_PushAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPawnAction*                 NewAction                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAIRequestPriority      Priority                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Instigator                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPawnActionsComponent::K2_PushAction(class UPawnAction* NewAction, enum class EAIRequestPriority Priority, class UObject* Instigator)
{
	static auto Func = Class->GetFunction("PawnActionsComponent", "K2_PushAction");

	Params::UPawnActionsComponent_K2_PushAction_Params Parms;

	Parms.NewAction = NewAction;
	Parms.Priority = Priority;
	Parms.Instigator = Instigator;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.PawnActionsComponent.K2_PerformAction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPawn*                       Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPawnAction*                 Action                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAIRequestPriority      Priority                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPawnActionsComponent::K2_PerformAction(class UPawn* Pawn, class UPawnAction* Action, enum class EAIRequestPriority Priority)
{
	static auto Func = Class->GetFunction("PawnActionsComponent", "K2_PerformAction");

	Params::UPawnActionsComponent_K2_PerformAction_Params Parms;

	Parms.Pawn = Pawn;
	Parms.Action = Action;
	Parms.Priority = Priority;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.PawnActionsComponent.K2_ForceAbortAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPawnAction*                 ActionToAbort                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EPawnActionAbortState   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EPawnActionAbortState UPawnActionsComponent::K2_ForceAbortAction(class UPawnAction* ActionToAbort)
{
	static auto Func = Class->GetFunction("PawnActionsComponent", "K2_ForceAbortAction");

	Params::UPawnActionsComponent_K2_ForceAbortAction_Params Parms;

	Parms.ActionToAbort = ActionToAbort;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.PawnActionsComponent.K2_AbortAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPawnAction*                 ActionToAbort                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EPawnActionAbortState   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EPawnActionAbortState UPawnActionsComponent::K2_AbortAction(class UPawnAction* ActionToAbort)
{
	static auto Func = Class->GetFunction("PawnActionsComponent", "K2_AbortAction");

	Params::UPawnActionsComponent_K2_AbortAction_Params Parms;

	Parms.ActionToAbort = ActionToAbort;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.PawnAction_BlueprintBase.ActionTick
// (Event, Public, BlueprintEvent)
// Parameters:
// class UPawn*                       ControlledPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPawnAction_BlueprintBase::ActionTick(class UPawn* ControlledPawn, float DeltaSeconds)
{
	static auto Func = Class->GetFunction("PawnAction_BlueprintBase", "ActionTick");

	Params::UPawnAction_BlueprintBase_ActionTick_Params Parms;

	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.PawnAction_BlueprintBase.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class UPawn*                       ControlledPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPawnAction_BlueprintBase::ActionStart(class UPawn* ControlledPawn)
{
	static auto Func = Class->GetFunction("PawnAction_BlueprintBase", "ActionStart");

	Params::UPawnAction_BlueprintBase_ActionStart_Params Parms;

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.PawnAction_BlueprintBase.ActionResume
// (Event, Public, BlueprintEvent)
// Parameters:
// class UPawn*                       ControlledPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPawnAction_BlueprintBase::ActionResume(class UPawn* ControlledPawn)
{
	static auto Func = Class->GetFunction("PawnAction_BlueprintBase", "ActionResume");

	Params::UPawnAction_BlueprintBase_ActionResume_Params Parms;

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.PawnAction_BlueprintBase.ActionPause
// (Event, Public, BlueprintEvent)
// Parameters:
// class UPawn*                       ControlledPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPawnAction_BlueprintBase::ActionPause(class UPawn* ControlledPawn)
{
	static auto Func = Class->GetFunction("PawnAction_BlueprintBase", "ActionPause");

	Params::UPawnAction_BlueprintBase_ActionPause_Params Parms;

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.PawnAction_BlueprintBase.ActionFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// class UPawn*                       ControlledPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EPawnActionResult       WithResult                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPawnAction_BlueprintBase::ActionFinished(class UPawn* ControlledPawn, enum class EPawnActionResult WithResult)
{
	static auto Func = Class->GetFunction("PawnAction_BlueprintBase", "ActionFinished");

	Params::UPawnAction_BlueprintBase_ActionFinished_Params Parms;

	Parms.ControlledPawn = ControlledPawn;
	Parms.WithResult = WithResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.AIController.UseBlackboard
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UBlackboardData*             BlackboardAsset                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBlackboardComponent*        BlackboardComponent                                              (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIController::UseBlackboard(class UBlackboardData* BlackboardAsset, class UBlackboardComponent** BlackboardComponent)
{
	static auto Func = Class->GetFunction("AIController", "UseBlackboard");

	Params::UAIController_UseBlackboard_Params Parms;

	Parms.BlackboardAsset = BlackboardAsset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (BlackboardComponent != nullptr)
		*BlackboardComponent = Parms.BlackboardComponent;

	return Parms.ReturnValue;

}


// Function AIModule.AIController.UnclaimTaskResource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UGameplayTaskResource>ResourceClass                                                    (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIController::UnclaimTaskResource(TSubclassOf<class UGameplayTaskResource> ResourceClass)
{
	static auto Func = Class->GetFunction("AIController", "UnclaimTaskResource");

	Params::UAIController_UnclaimTaskResource_Params Parms;

	Parms.ResourceClass = ResourceClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AIController.SetPathFollowingComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPathFollowingComponent*     NewPFComponent                                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIController::SetPathFollowingComponent(class UPathFollowingComponent* NewPFComponent)
{
	static auto Func = Class->GetFunction("AIController", "SetPathFollowingComponent");

	Params::UAIController_SetPathFollowingComponent_Params Parms;

	Parms.NewPFComponent = NewPFComponent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AIController.SetMoveBlockDetection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIController::SetMoveBlockDetection(bool bEnable)
{
	static auto Func = Class->GetFunction("AIController", "SetMoveBlockDetection");

	Params::UAIController_SetMoveBlockDetection_Params Parms;

	Parms.bEnable = bEnable;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AIController.RunBehaviorTree
// (Native, Public, BlueprintCallable)
// Parameters:
// class UBehaviorTree*               BTAsset                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIController::RunBehaviorTree(class UBehaviorTree* BTAsset)
{
	static auto Func = Class->GetFunction("AIController", "RunBehaviorTree");

	Params::UAIController_RunBehaviorTree_Params Parms;

	Parms.BTAsset = BTAsset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.AIController.OnUsingBlackBoard
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UBlackboardComponent*        BlackboardComp                                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBlackboardData*             BlackboardAsset                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIController::OnUsingBlackBoard(class UBlackboardComponent* BlackboardComp, class UBlackboardData* BlackboardAsset)
{
	static auto Func = Class->GetFunction("AIController", "OnUsingBlackBoard");

	Params::UAIController_OnUsingBlackBoard_Params Parms;

	Parms.BlackboardComp = BlackboardComp;
	Parms.BlackboardAsset = BlackboardAsset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.AIController.OnGameplayTaskResourcesClaimed
// (Native, Public)
// Parameters:
// struct FGameplayResourceSet        NewlyClaimed                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FGameplayResourceSet        FreshlyReleased                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UAIController::OnGameplayTaskResourcesClaimed(const struct FGameplayResourceSet& NewlyClaimed, const struct FGameplayResourceSet& FreshlyReleased)
{
	static auto Func = Class->GetFunction("AIController", "OnGameplayTaskResourcesClaimed");

	Params::UAIController_OnGameplayTaskResourcesClaimed_Params Parms;

	Parms.NewlyClaimed = NewlyClaimed;
	Parms.FreshlyReleased = FreshlyReleased;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AIController.MoveToLocation
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Dest                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              AcceptanceRadius                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bStopOnOverlap                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUsePathfinding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bProjectDestinationToNavigation                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCanStrafe                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UNavigationQueryFilter>FilterClass                                                      (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowPartialPath                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EPathFollowingRequestResultReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EPathFollowingRequestResult UAIController::MoveToLocation(struct FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, TSubclassOf<class UNavigationQueryFilter> FilterClass, bool bAllowPartialPath)
{
	static auto Func = Class->GetFunction("AIController", "MoveToLocation");

	Params::UAIController_MoveToLocation_Params Parms;

	Parms.Dest = Dest;
	Parms.AcceptanceRadius = AcceptanceRadius;
	Parms.bStopOnOverlap = bStopOnOverlap;
	Parms.bUsePathfinding = bUsePathfinding;
	Parms.bProjectDestinationToNavigation = bProjectDestinationToNavigation;
	Parms.bCanStrafe = bCanStrafe;
	Parms.FilterClass = FilterClass;
	Parms.bAllowPartialPath = bAllowPartialPath;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.AIController.MoveToActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      Goal                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              AcceptanceRadius                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bStopOnOverlap                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUsePathfinding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCanStrafe                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UNavigationQueryFilter>FilterClass                                                      (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowPartialPath                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EPathFollowingRequestResultReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EPathFollowingRequestResult UAIController::MoveToActor(class UActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, TSubclassOf<class UNavigationQueryFilter> FilterClass, bool bAllowPartialPath)
{
	static auto Func = Class->GetFunction("AIController", "MoveToActor");

	Params::UAIController_MoveToActor_Params Parms;

	Parms.Goal = Goal;
	Parms.AcceptanceRadius = AcceptanceRadius;
	Parms.bStopOnOverlap = bStopOnOverlap;
	Parms.bUsePathfinding = bUsePathfinding;
	Parms.bCanStrafe = bCanStrafe;
	Parms.FilterClass = FilterClass;
	Parms.bAllowPartialPath = bAllowPartialPath;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.AIController.K2_SetFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      NewFocus                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIController::K2_SetFocus(class UActor* NewFocus)
{
	static auto Func = Class->GetFunction("AIController", "K2_SetFocus");

	Params::UAIController_K2_SetFocus_Params Parms;

	Parms.NewFocus = NewFocus;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AIController.K2_SetFocalPoint
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     FP                                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIController::K2_SetFocalPoint(const struct FVector& FP)
{
	static auto Func = Class->GetFunction("AIController", "K2_SetFocalPoint");

	Params::UAIController_K2_SetFocalPoint_Params Parms;

	Parms.FP = FP;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AIController.K2_ClearFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAIController::K2_ClearFocus()
{
	static auto Func = Class->GetFunction("AIController", "K2_ClearFocus");

	Params::UAIController_K2_ClearFocus_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AIController.HasPartialPath
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIController::HasPartialPath()
{
	static auto Func = Class->GetFunction("AIController", "HasPartialPath");

	Params::UAIController_HasPartialPath_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.AIController.GetPathFollowingComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPathFollowingComponent*     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPathFollowingComponent* UAIController::GetPathFollowingComponent()
{
	static auto Func = Class->GetFunction("AIController", "GetPathFollowingComponent");

	Params::UAIController_GetPathFollowingComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.AIController.GetMoveStatus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EPathFollowingStatus    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EPathFollowingStatus UAIController::GetMoveStatus()
{
	static auto Func = Class->GetFunction("AIController", "GetMoveStatus");

	Params::UAIController_GetMoveStatus_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.AIController.GetImmediateMoveDestination
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UAIController::GetImmediateMoveDestination()
{
	static auto Func = Class->GetFunction("AIController", "GetImmediateMoveDestination");

	Params::UAIController_GetImmediateMoveDestination_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.AIController.GetFocusActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UActor* UAIController::GetFocusActor()
{
	static auto Func = Class->GetFunction("AIController", "GetFocusActor");

	Params::UAIController_GetFocusActor_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.AIController.GetFocalPointOnActor
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UActor*                      Actor                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UAIController::GetFocalPointOnActor(class UActor* Actor)
{
	static auto Func = Class->GetFunction("AIController", "GetFocalPointOnActor");

	Params::UAIController_GetFocalPointOnActor_Params Parms;

	Parms.Actor = Actor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.AIController.GetFocalPoint
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UAIController::GetFocalPoint()
{
	static auto Func = Class->GetFunction("AIController", "GetFocalPoint");

	Params::UAIController_GetFocalPoint_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.AIController.GetDeprecatedActionsComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPawnActionsComponent*       ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPawnActionsComponent* UAIController::GetDeprecatedActionsComponent()
{
	static auto Func = Class->GetFunction("AIController", "GetDeprecatedActionsComponent");

	Params::UAIController_GetDeprecatedActionsComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.AIController.GetAIPerceptionComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAIPerceptionComponent*      ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAIPerceptionComponent* UAIController::GetAIPerceptionComponent()
{
	static auto Func = Class->GetFunction("AIController", "GetAIPerceptionComponent");

	Params::UAIController_GetAIPerceptionComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.AIController.ClaimTaskResource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UGameplayTaskResource>ResourceClass                                                    (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIController::ClaimTaskResource(TSubclassOf<class UGameplayTaskResource> ResourceClass)
{
	static auto Func = Class->GetFunction("AIController", "ClaimTaskResource");

	Params::UAIController_ClaimTaskResource_Params Parms;

	Parms.ResourceClass = ResourceClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AISystem.AILoggingVerbose
// (Exec, Native, Public)
// Parameters:

void UAISystem::AILoggingVerbose()
{
	static auto Func = Class->GetFunction("AISystem", "AILoggingVerbose");

	Params::UAISystem_AILoggingVerbose_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AISystem.AIIgnorePlayers
// (Exec, Native, Public)
// Parameters:

void UAISystem::AIIgnorePlayers()
{
	static auto Func = Class->GetFunction("AISystem", "AIIgnorePlayers");

	Params::UAISystem_AIIgnorePlayers_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BrainComponent.StopLogic
// (Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Reason                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBrainComponent::StopLogic(const class FString& Reason)
{
	static auto Func = Class->GetFunction("BrainComponent", "StopLogic");

	Params::UBrainComponent_StopLogic_Params Parms;

	Parms.Reason = Reason;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BrainComponent.StartLogic
// (Native, Public, BlueprintCallable)
// Parameters:

void UBrainComponent::StartLogic()
{
	static auto Func = Class->GetFunction("BrainComponent", "StartLogic");

	Params::UBrainComponent_StartLogic_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BrainComponent.RestartLogic
// (Native, Public, BlueprintCallable)
// Parameters:

void UBrainComponent::RestartLogic()
{
	static auto Func = Class->GetFunction("BrainComponent", "RestartLogic");

	Params::UBrainComponent_RestartLogic_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BrainComponent.IsRunning
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBrainComponent::IsRunning()
{
	static auto Func = Class->GetFunction("BrainComponent", "IsRunning");

	Params::UBrainComponent_IsRunning_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BrainComponent.IsPaused
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBrainComponent::IsPaused()
{
	static auto Func = Class->GetFunction("BrainComponent", "IsPaused");

	Params::UBrainComponent_IsPaused_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BehaviorTreeComponent.SetDynamicSubtree
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                InjectTag                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBehaviorTree*               BehaviorAsset                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBehaviorTreeComponent::SetDynamicSubtree(const struct FGameplayTag& InjectTag, class UBehaviorTree* BehaviorAsset)
{
	static auto Func = Class->GetFunction("BehaviorTreeComponent", "SetDynamicSubtree");

	Params::UBehaviorTreeComponent_SetDynamicSubtree_Params Parms;

	Parms.InjectTag = InjectTag;
	Parms.BehaviorAsset = BehaviorAsset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BehaviorTreeComponent.GetTagCooldownEndTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                CooldownTag                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

double UBehaviorTreeComponent::GetTagCooldownEndTime(const struct FGameplayTag& CooldownTag)
{
	static auto Func = Class->GetFunction("BehaviorTreeComponent", "GetTagCooldownEndTime");

	Params::UBehaviorTreeComponent_GetTagCooldownEndTime_Params Parms;

	Parms.CooldownTag = CooldownTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BehaviorTreeComponent.AddCooldownTagDuration
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                CooldownTag                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CooldownDuration                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddToExistingDuration                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBehaviorTreeComponent::AddCooldownTagDuration(const struct FGameplayTag& CooldownTag, float CooldownDuration, bool bAddToExistingDuration)
{
	static auto Func = Class->GetFunction("BehaviorTreeComponent", "AddCooldownTagDuration");

	Params::UBehaviorTreeComponent_AddCooldownTagDuration_Params Parms;

	Parms.CooldownTag = CooldownTag;
	Parms.CooldownDuration = CooldownDuration;
	Parms.bAddToExistingDuration = bAddToExistingDuration;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BlackboardAssetProvider.GetBlackboardAsset
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UBlackboardData*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UBlackboardData* UBlackboardAssetProvider::GetBlackboardAsset()
{
	static auto Func = Class->GetFunction("BlackboardAssetProvider", "GetBlackboardAsset");

	Params::UBlackboardAssetProvider_GetBlackboardAsset_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BlackboardComponent.SetValueAsVector
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     VectorValue                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBlackboardComponent::SetValueAsVector(class FName& KeyName, const struct FVector& VectorValue)
{
	static auto Func = Class->GetFunction("BlackboardComponent", "SetValueAsVector");

	Params::UBlackboardComponent_SetValueAsVector_Params Parms;

	Parms.KeyName = KeyName;
	Parms.VectorValue = VectorValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BlackboardComponent.SetValueAsString
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      StringValue                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBlackboardComponent::SetValueAsString(class FName& KeyName, const class FString& StringValue)
{
	static auto Func = Class->GetFunction("BlackboardComponent", "SetValueAsString");

	Params::UBlackboardComponent_SetValueAsString_Params Parms;

	Parms.KeyName = KeyName;
	Parms.StringValue = StringValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BlackboardComponent.SetValueAsRotator
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    VectorValue                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UBlackboardComponent::SetValueAsRotator(class FName& KeyName, const struct FRotator& VectorValue)
{
	static auto Func = Class->GetFunction("BlackboardComponent", "SetValueAsRotator");

	Params::UBlackboardComponent_SetValueAsRotator_Params Parms;

	Parms.KeyName = KeyName;
	Parms.VectorValue = VectorValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BlackboardComponent.SetValueAsObject
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ObjectValue                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBlackboardComponent::SetValueAsObject(class FName& KeyName, class UObject* ObjectValue)
{
	static auto Func = Class->GetFunction("BlackboardComponent", "SetValueAsObject");

	Params::UBlackboardComponent_SetValueAsObject_Params Parms;

	Parms.KeyName = KeyName;
	Parms.ObjectValue = ObjectValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BlackboardComponent.SetValueAsName
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        NameValue                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBlackboardComponent::SetValueAsName(class FName& KeyName, class FName NameValue)
{
	static auto Func = Class->GetFunction("BlackboardComponent", "SetValueAsName");

	Params::UBlackboardComponent_SetValueAsName_Params Parms;

	Parms.KeyName = KeyName;
	Parms.NameValue = NameValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BlackboardComponent.SetValueAsInt
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              IntValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBlackboardComponent::SetValueAsInt(class FName& KeyName, int32 IntValue)
{
	static auto Func = Class->GetFunction("BlackboardComponent", "SetValueAsInt");

	Params::UBlackboardComponent_SetValueAsInt_Params Parms;

	Parms.KeyName = KeyName;
	Parms.IntValue = IntValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BlackboardComponent.SetValueAsFloat
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FloatValue                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBlackboardComponent::SetValueAsFloat(class FName& KeyName, float FloatValue)
{
	static auto Func = Class->GetFunction("BlackboardComponent", "SetValueAsFloat");

	Params::UBlackboardComponent_SetValueAsFloat_Params Parms;

	Parms.KeyName = KeyName;
	Parms.FloatValue = FloatValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BlackboardComponent.SetValueAsEnum
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              EnumValue                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBlackboardComponent::SetValueAsEnum(class FName& KeyName, uint8 EnumValue)
{
	static auto Func = Class->GetFunction("BlackboardComponent", "SetValueAsEnum");

	Params::UBlackboardComponent_SetValueAsEnum_Params Parms;

	Parms.KeyName = KeyName;
	Parms.EnumValue = EnumValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BlackboardComponent.SetValueAsClass
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                      ClassValue                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBlackboardComponent::SetValueAsClass(class FName& KeyName, class UClass* ClassValue)
{
	static auto Func = Class->GetFunction("BlackboardComponent", "SetValueAsClass");

	Params::UBlackboardComponent_SetValueAsClass_Params Parms;

	Parms.KeyName = KeyName;
	Parms.ClassValue = ClassValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BlackboardComponent.SetValueAsBool
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               BoolValue                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBlackboardComponent::SetValueAsBool(class FName& KeyName, bool BoolValue)
{
	static auto Func = Class->GetFunction("BlackboardComponent", "SetValueAsBool");

	Params::UBlackboardComponent_SetValueAsBool_Params Parms;

	Parms.KeyName = KeyName;
	Parms.BoolValue = BoolValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BlackboardComponent.IsVectorValueSet
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBlackboardComponent::IsVectorValueSet(class FName& KeyName)
{
	static auto Func = Class->GetFunction("BlackboardComponent", "IsVectorValueSet");

	Params::UBlackboardComponent_IsVectorValueSet_Params Parms;

	Parms.KeyName = KeyName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BlackboardComponent.GetValueAsVector
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UBlackboardComponent::GetValueAsVector(class FName& KeyName)
{
	static auto Func = Class->GetFunction("BlackboardComponent", "GetValueAsVector");

	Params::UBlackboardComponent_GetValueAsVector_Params Parms;

	Parms.KeyName = KeyName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BlackboardComponent.GetValueAsString
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UBlackboardComponent::GetValueAsString(class FName& KeyName)
{
	static auto Func = Class->GetFunction("BlackboardComponent", "GetValueAsString");

	Params::UBlackboardComponent_GetValueAsString_Params Parms;

	Parms.KeyName = KeyName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BlackboardComponent.GetValueAsRotator
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UBlackboardComponent::GetValueAsRotator(class FName& KeyName)
{
	static auto Func = Class->GetFunction("BlackboardComponent", "GetValueAsRotator");

	Params::UBlackboardComponent_GetValueAsRotator_Params Parms;

	Parms.KeyName = KeyName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BlackboardComponent.GetValueAsObject
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UBlackboardComponent::GetValueAsObject(class FName& KeyName)
{
	static auto Func = Class->GetFunction("BlackboardComponent", "GetValueAsObject");

	Params::UBlackboardComponent_GetValueAsObject_Params Parms;

	Parms.KeyName = KeyName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BlackboardComponent.GetValueAsName
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UBlackboardComponent::GetValueAsName(class FName& KeyName)
{
	static auto Func = Class->GetFunction("BlackboardComponent", "GetValueAsName");

	Params::UBlackboardComponent_GetValueAsName_Params Parms;

	Parms.KeyName = KeyName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BlackboardComponent.GetValueAsInt
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UBlackboardComponent::GetValueAsInt(class FName& KeyName)
{
	static auto Func = Class->GetFunction("BlackboardComponent", "GetValueAsInt");

	Params::UBlackboardComponent_GetValueAsInt_Params Parms;

	Parms.KeyName = KeyName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BlackboardComponent.GetValueAsFloat
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UBlackboardComponent::GetValueAsFloat(class FName& KeyName)
{
	static auto Func = Class->GetFunction("BlackboardComponent", "GetValueAsFloat");

	Params::UBlackboardComponent_GetValueAsFloat_Params Parms;

	Parms.KeyName = KeyName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BlackboardComponent.GetValueAsEnum
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint8 UBlackboardComponent::GetValueAsEnum(class FName& KeyName)
{
	static auto Func = Class->GetFunction("BlackboardComponent", "GetValueAsEnum");

	Params::UBlackboardComponent_GetValueAsEnum_Params Parms;

	Parms.KeyName = KeyName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BlackboardComponent.GetValueAsClass
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UClass* UBlackboardComponent::GetValueAsClass(class FName& KeyName)
{
	static auto Func = Class->GetFunction("BlackboardComponent", "GetValueAsClass");

	Params::UBlackboardComponent_GetValueAsClass_Params Parms;

	Parms.KeyName = KeyName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BlackboardComponent.GetValueAsBool
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBlackboardComponent::GetValueAsBool(class FName& KeyName)
{
	static auto Func = Class->GetFunction("BlackboardComponent", "GetValueAsBool");

	Params::UBlackboardComponent_GetValueAsBool_Params Parms;

	Parms.KeyName = KeyName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BlackboardComponent.GetRotationFromEntry
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    ResultRotation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBlackboardComponent::GetRotationFromEntry(class FName& KeyName, struct FRotator* ResultRotation)
{
	static auto Func = Class->GetFunction("BlackboardComponent", "GetRotationFromEntry");

	Params::UBlackboardComponent_GetRotationFromEntry_Params Parms;

	Parms.KeyName = KeyName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (ResultRotation != nullptr)
		*ResultRotation = Parms.ResultRotation;

	return Parms.ReturnValue;

}


// Function AIModule.BlackboardComponent.GetLocationFromEntry
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ResultLocation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBlackboardComponent::GetLocationFromEntry(class FName& KeyName, struct FVector* ResultLocation)
{
	static auto Func = Class->GetFunction("BlackboardComponent", "GetLocationFromEntry");

	Params::UBlackboardComponent_GetLocationFromEntry_Params Parms;

	Parms.KeyName = KeyName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (ResultLocation != nullptr)
		*ResultLocation = Parms.ResultLocation;

	return Parms.ReturnValue;

}


// Function AIModule.BlackboardComponent.ClearValue
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBlackboardComponent::ClearValue(class FName& KeyName)
{
	static auto Func = Class->GetFunction("BlackboardComponent", "ClearValue");

	Params::UBlackboardComponent_ClearValue_Params Parms;

	Parms.KeyName = KeyName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BTFunctionLibrary.StopUsingExternalEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTFunctionLibrary::StopUsingExternalEvent(class UBTNode* NodeOwner)
{
	static auto Func = Class->GetFunction("BTFunctionLibrary", "StopUsingExternalEvent");

	Params::UBTFunctionLibrary_StopUsingExternalEvent_Params Parms;

	Parms.NodeOwner = NodeOwner;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BTFunctionLibrary.StartUsingExternalEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      OwningActor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTFunctionLibrary::StartUsingExternalEvent(class UBTNode* NodeOwner, class UActor* OwningActor)
{
	static auto Func = Class->GetFunction("BTFunctionLibrary", "StartUsingExternalEvent");

	Params::UBTFunctionLibrary_StartUsingExternalEvent_Params Parms;

	Parms.NodeOwner = NodeOwner;
	Parms.OwningActor = OwningActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsVector
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVector                     Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTFunctionLibrary::SetBlackboardValueAsVector(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, const struct FVector& Value)
{
	static auto Func = Class->GetFunction("BTFunctionLibrary", "SetBlackboardValueAsVector");

	Params::UBTFunctionLibrary_SetBlackboardValueAsVector_Params Parms;

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTFunctionLibrary::SetBlackboardValueAsString(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, const class FString& Value)
{
	static auto Func = Class->GetFunction("BTFunctionLibrary", "SetBlackboardValueAsString");

	Params::UBTFunctionLibrary_SetBlackboardValueAsString_Params Parms;

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FRotator                    Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UBTFunctionLibrary::SetBlackboardValueAsRotator(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, const struct FRotator& Value)
{
	static auto Func = Class->GetFunction("BTFunctionLibrary", "SetBlackboardValueAsRotator");

	Params::UBTFunctionLibrary_SetBlackboardValueAsRotator_Params Parms;

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsObject
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UObject*                     Value                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTFunctionLibrary::SetBlackboardValueAsObject(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, class UObject* Value)
{
	static auto Func = Class->GetFunction("BTFunctionLibrary", "SetBlackboardValueAsObject");

	Params::UBTFunctionLibrary_SetBlackboardValueAsObject_Params Parms;

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FName                        Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTFunctionLibrary::SetBlackboardValueAsName(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, class FName Value)
{
	static auto Func = Class->GetFunction("BTFunctionLibrary", "SetBlackboardValueAsName");

	Params::UBTFunctionLibrary_SetBlackboardValueAsName_Params Parms;

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsInt
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTFunctionLibrary::SetBlackboardValueAsInt(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, int32 Value)
{
	static auto Func = Class->GetFunction("BTFunctionLibrary", "SetBlackboardValueAsInt");

	Params::UBTFunctionLibrary_SetBlackboardValueAsInt_Params Parms;

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTFunctionLibrary::SetBlackboardValueAsFloat(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, float Value)
{
	static auto Func = Class->GetFunction("BTFunctionLibrary", "SetBlackboardValueAsFloat");

	Params::UBTFunctionLibrary_SetBlackboardValueAsFloat_Params Parms;

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// uint8                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTFunctionLibrary::SetBlackboardValueAsEnum(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, uint8 Value)
{
	static auto Func = Class->GetFunction("BTFunctionLibrary", "SetBlackboardValueAsEnum");

	Params::UBTFunctionLibrary_SetBlackboardValueAsEnum_Params Parms;

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsClass
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UClass*                      Value                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTFunctionLibrary::SetBlackboardValueAsClass(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, class UClass* Value)
{
	static auto Func = Class->GetFunction("BTFunctionLibrary", "SetBlackboardValueAsClass");

	Params::UBTFunctionLibrary_SetBlackboardValueAsClass_Params Parms;

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsBool
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTFunctionLibrary::SetBlackboardValueAsBool(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, bool Value)
{
	static auto Func = Class->GetFunction("BTFunctionLibrary", "SetBlackboardValueAsBool");

	Params::UBTFunctionLibrary_SetBlackboardValueAsBool_Params Parms;

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BTFunctionLibrary.GetOwnersBlackboard
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBlackboardComponent*        ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UBlackboardComponent* UBTFunctionLibrary::GetOwnersBlackboard(class UBTNode* NodeOwner)
{
	static auto Func = Class->GetFunction("BTFunctionLibrary", "GetOwnersBlackboard");

	Params::UBTFunctionLibrary_GetOwnersBlackboard_Params Parms;

	Parms.NodeOwner = NodeOwner;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BTFunctionLibrary.GetOwnerComponent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBehaviorTreeComponent*      ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UBehaviorTreeComponent* UBTFunctionLibrary::GetOwnerComponent(class UBTNode* NodeOwner)
{
	static auto Func = Class->GetFunction("BTFunctionLibrary", "GetOwnerComponent");

	Params::UBTFunctionLibrary_GetOwnerComponent_Params Parms;

	Parms.NodeOwner = NodeOwner;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsVector
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UBTFunctionLibrary::GetBlackboardValueAsVector(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key)
{
	static auto Func = Class->GetFunction("BTFunctionLibrary", "GetBlackboardValueAsVector");

	Params::UBTFunctionLibrary_GetBlackboardValueAsVector_Params Parms;

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UBTFunctionLibrary::GetBlackboardValueAsString(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key)
{
	static auto Func = Class->GetFunction("BTFunctionLibrary", "GetBlackboardValueAsString");

	Params::UBTFunctionLibrary_GetBlackboardValueAsString_Params Parms;

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UBTFunctionLibrary::GetBlackboardValueAsRotator(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key)
{
	static auto Func = Class->GetFunction("BTFunctionLibrary", "GetBlackboardValueAsRotator");

	Params::UBTFunctionLibrary_GetBlackboardValueAsRotator_Params Parms;

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsObject
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UBTFunctionLibrary::GetBlackboardValueAsObject(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key)
{
	static auto Func = Class->GetFunction("BTFunctionLibrary", "GetBlackboardValueAsObject");

	Params::UBTFunctionLibrary_GetBlackboardValueAsObject_Params Parms;

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UBTFunctionLibrary::GetBlackboardValueAsName(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key)
{
	static auto Func = Class->GetFunction("BTFunctionLibrary", "GetBlackboardValueAsName");

	Params::UBTFunctionLibrary_GetBlackboardValueAsName_Params Parms;

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsInt
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UBTFunctionLibrary::GetBlackboardValueAsInt(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key)
{
	static auto Func = Class->GetFunction("BTFunctionLibrary", "GetBlackboardValueAsInt");

	Params::UBTFunctionLibrary_GetBlackboardValueAsInt_Params Parms;

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UBTFunctionLibrary::GetBlackboardValueAsFloat(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key)
{
	static auto Func = Class->GetFunction("BTFunctionLibrary", "GetBlackboardValueAsFloat");

	Params::UBTFunctionLibrary_GetBlackboardValueAsFloat_Params Parms;

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// uint8                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint8 UBTFunctionLibrary::GetBlackboardValueAsEnum(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key)
{
	static auto Func = Class->GetFunction("BTFunctionLibrary", "GetBlackboardValueAsEnum");

	Params::UBTFunctionLibrary_GetBlackboardValueAsEnum_Params Parms;

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsClass
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UClass*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UClass* UBTFunctionLibrary::GetBlackboardValueAsClass(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key)
{
	static auto Func = Class->GetFunction("BTFunctionLibrary", "GetBlackboardValueAsClass");

	Params::UBTFunctionLibrary_GetBlackboardValueAsClass_Params Parms;

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsBool
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBTFunctionLibrary::GetBlackboardValueAsBool(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key)
{
	static auto Func = Class->GetFunction("BTFunctionLibrary", "GetBlackboardValueAsBool");

	Params::UBTFunctionLibrary_GetBlackboardValueAsBool_Params Parms;

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsActor
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UActor* UBTFunctionLibrary::GetBlackboardValueAsActor(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key)
{
	static auto Func = Class->GetFunction("BTFunctionLibrary", "GetBlackboardValueAsActor");

	Params::UBTFunctionLibrary_GetBlackboardValueAsActor_Params Parms;

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UBTFunctionLibrary::ClearBlackboardValueAsVector(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key)
{
	static auto Func = Class->GetFunction("BTFunctionLibrary", "ClearBlackboardValueAsVector");

	Params::UBTFunctionLibrary_ClearBlackboardValueAsVector_Params Parms;

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BTFunctionLibrary.ClearBlackboardValue
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UBTFunctionLibrary::ClearBlackboardValue(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key)
{
	static auto Func = Class->GetFunction("BTFunctionLibrary", "ClearBlackboardValue");

	Params::UBTFunctionLibrary_ClearBlackboardValue_Params Parms;

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAIController*               OwnerController                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPawn*                       ControlledPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTDecorator_BlueprintBase::ReceiveTickAI(class UAIController* OwnerController, class UPawn* ControlledPawn, float DeltaSeconds)
{
	static auto Func = Class->GetFunction("BTDecorator_BlueprintBase", "ReceiveTickAI");

	Params::UBTDecorator_BlueprintBase_ReceiveTickAI_Params Parms;

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UActor*                      OwnerActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTDecorator_BlueprintBase::ReceiveTick(class UActor* OwnerActor, float DeltaSeconds)
{
	static auto Func = Class->GetFunction("BTDecorator_BlueprintBase", "ReceiveTick");

	Params::UBTDecorator_BlueprintBase_ReceiveTick_Params Parms;

	Parms.OwnerActor = OwnerActor;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAIController*               OwnerController                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPawn*                       ControlledPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTDecorator_BlueprintBase::ReceiveObserverDeactivatedAI(class UAIController* OwnerController, class UPawn* ControlledPawn)
{
	static auto Func = Class->GetFunction("BTDecorator_BlueprintBase", "ReceiveObserverDeactivatedAI");

	Params::UBTDecorator_BlueprintBase_ReceiveObserverDeactivatedAI_Params Parms;

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UActor*                      OwnerActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTDecorator_BlueprintBase::ReceiveObserverDeactivated(class UActor* OwnerActor)
{
	static auto Func = Class->GetFunction("BTDecorator_BlueprintBase", "ReceiveObserverDeactivated");

	Params::UBTDecorator_BlueprintBase_ReceiveObserverDeactivated_Params Parms;

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAIController*               OwnerController                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPawn*                       ControlledPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTDecorator_BlueprintBase::ReceiveObserverActivatedAI(class UAIController* OwnerController, class UPawn* ControlledPawn)
{
	static auto Func = Class->GetFunction("BTDecorator_BlueprintBase", "ReceiveObserverActivatedAI");

	Params::UBTDecorator_BlueprintBase_ReceiveObserverActivatedAI_Params Parms;

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UActor*                      OwnerActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTDecorator_BlueprintBase::ReceiveObserverActivated(class UActor* OwnerActor)
{
	static auto Func = Class->GetFunction("BTDecorator_BlueprintBase", "ReceiveObserverActivated");

	Params::UBTDecorator_BlueprintBase_ReceiveObserverActivated_Params Parms;

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAIController*               OwnerController                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPawn*                       ControlledPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTDecorator_BlueprintBase::ReceiveExecutionStartAI(class UAIController* OwnerController, class UPawn* ControlledPawn)
{
	static auto Func = Class->GetFunction("BTDecorator_BlueprintBase", "ReceiveExecutionStartAI");

	Params::UBTDecorator_BlueprintBase_ReceiveExecutionStartAI_Params Parms;

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UActor*                      OwnerActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTDecorator_BlueprintBase::ReceiveExecutionStart(class UActor* OwnerActor)
{
	static auto Func = Class->GetFunction("BTDecorator_BlueprintBase", "ReceiveExecutionStart");

	Params::UBTDecorator_BlueprintBase_ReceiveExecutionStart_Params Parms;

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAIController*               OwnerController                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPawn*                       ControlledPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EBTNodeResult           NodeResult                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTDecorator_BlueprintBase::ReceiveExecutionFinishAI(class UAIController* OwnerController, class UPawn* ControlledPawn, enum class EBTNodeResult NodeResult)
{
	static auto Func = Class->GetFunction("BTDecorator_BlueprintBase", "ReceiveExecutionFinishAI");

	Params::UBTDecorator_BlueprintBase_ReceiveExecutionFinishAI_Params Parms;

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.NodeResult = NodeResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UActor*                      OwnerActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EBTNodeResult           NodeResult                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTDecorator_BlueprintBase::ReceiveExecutionFinish(class UActor* OwnerActor, enum class EBTNodeResult NodeResult)
{
	static auto Func = Class->GetFunction("BTDecorator_BlueprintBase", "ReceiveExecutionFinish");

	Params::UBTDecorator_BlueprintBase_ReceiveExecutionFinish_Params Parms;

	Parms.OwnerActor = OwnerActor;
	Parms.NodeResult = NodeResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAIController*               OwnerController                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPawn*                       ControlledPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBTDecorator_BlueprintBase::PerformConditionCheckAI(class UAIController* OwnerController, class UPawn* ControlledPawn)
{
	static auto Func = Class->GetFunction("BTDecorator_BlueprintBase", "PerformConditionCheckAI");

	Params::UBTDecorator_BlueprintBase_PerformConditionCheckAI_Params Parms;

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UActor*                      OwnerActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBTDecorator_BlueprintBase::PerformConditionCheck(class UActor* OwnerActor)
{
	static auto Func = Class->GetFunction("BTDecorator_BlueprintBase", "PerformConditionCheck");

	Params::UBTDecorator_BlueprintBase_PerformConditionCheck_Params Parms;

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBTDecorator_BlueprintBase::IsDecoratorObserverActive()
{
	static auto Func = Class->GetFunction("BTDecorator_BlueprintBase", "IsDecoratorObserverActive");

	Params::UBTDecorator_BlueprintBase_IsDecoratorObserverActive_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBTDecorator_BlueprintBase::IsDecoratorExecutionActive()
{
	static auto Func = Class->GetFunction("BTDecorator_BlueprintBase", "IsDecoratorExecutionActive");

	Params::UBTDecorator_BlueprintBase_IsDecoratorExecutionActive_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BTService_BlueprintBase.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAIController*               OwnerController                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPawn*                       ControlledPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTService_BlueprintBase::ReceiveTickAI(class UAIController* OwnerController, class UPawn* ControlledPawn, float DeltaSeconds)
{
	static auto Func = Class->GetFunction("BTService_BlueprintBase", "ReceiveTickAI");

	Params::UBTService_BlueprintBase_ReceiveTickAI_Params Parms;

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.BTService_BlueprintBase.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UActor*                      OwnerActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTService_BlueprintBase::ReceiveTick(class UActor* OwnerActor, float DeltaSeconds)
{
	static auto Func = Class->GetFunction("BTService_BlueprintBase", "ReceiveTick");

	Params::UBTService_BlueprintBase_ReceiveTick_Params Parms;

	Parms.OwnerActor = OwnerActor;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAIController*               OwnerController                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPawn*                       ControlledPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTService_BlueprintBase::ReceiveSearchStartAI(class UAIController* OwnerController, class UPawn* ControlledPawn)
{
	static auto Func = Class->GetFunction("BTService_BlueprintBase", "ReceiveSearchStartAI");

	Params::UBTService_BlueprintBase_ReceiveSearchStartAI_Params Parms;

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.BTService_BlueprintBase.ReceiveSearchStart
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UActor*                      OwnerActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTService_BlueprintBase::ReceiveSearchStart(class UActor* OwnerActor)
{
	static auto Func = Class->GetFunction("BTService_BlueprintBase", "ReceiveSearchStart");

	Params::UBTService_BlueprintBase_ReceiveSearchStart_Params Parms;

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAIController*               OwnerController                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPawn*                       ControlledPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTService_BlueprintBase::ReceiveDeactivationAI(class UAIController* OwnerController, class UPawn* ControlledPawn)
{
	static auto Func = Class->GetFunction("BTService_BlueprintBase", "ReceiveDeactivationAI");

	Params::UBTService_BlueprintBase_ReceiveDeactivationAI_Params Parms;

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.BTService_BlueprintBase.ReceiveDeactivation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UActor*                      OwnerActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTService_BlueprintBase::ReceiveDeactivation(class UActor* OwnerActor)
{
	static auto Func = Class->GetFunction("BTService_BlueprintBase", "ReceiveDeactivation");

	Params::UBTService_BlueprintBase_ReceiveDeactivation_Params Parms;

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.BTService_BlueprintBase.ReceiveActivationAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAIController*               OwnerController                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPawn*                       ControlledPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTService_BlueprintBase::ReceiveActivationAI(class UAIController* OwnerController, class UPawn* ControlledPawn)
{
	static auto Func = Class->GetFunction("BTService_BlueprintBase", "ReceiveActivationAI");

	Params::UBTService_BlueprintBase_ReceiveActivationAI_Params Parms;

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.BTService_BlueprintBase.ReceiveActivation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UActor*                      OwnerActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTService_BlueprintBase::ReceiveActivation(class UActor* OwnerActor)
{
	static auto Func = Class->GetFunction("BTService_BlueprintBase", "ReceiveActivation");

	Params::UBTService_BlueprintBase_ReceiveActivation_Params Parms;

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.BTService_BlueprintBase.IsServiceActive
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBTService_BlueprintBase::IsServiceActive()
{
	static auto Func = Class->GetFunction("BTService_BlueprintBase", "IsServiceActive");

	Params::UBTService_BlueprintBase_IsServiceActive_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FName                        MessageName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RequestID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTTask_BlueprintBase::SetFinishOnMessageWithId(class FName MessageName, int32 RequestID)
{
	static auto Func = Class->GetFunction("BTTask_BlueprintBase", "SetFinishOnMessageWithId");

	Params::UBTTask_BlueprintBase_SetFinishOnMessageWithId_Params Parms;

	Parms.MessageName = MessageName;
	Parms.RequestID = RequestID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BTTask_BlueprintBase.SetFinishOnMessage
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FName                        MessageName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTTask_BlueprintBase::SetFinishOnMessage(class FName MessageName)
{
	static auto Func = Class->GetFunction("BTTask_BlueprintBase", "SetFinishOnMessage");

	Params::UBTTask_BlueprintBase_SetFinishOnMessage_Params Parms;

	Parms.MessageName = MessageName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BTTask_BlueprintBase.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAIController*               OwnerController                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPawn*                       ControlledPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTTask_BlueprintBase::ReceiveTickAI(class UAIController* OwnerController, class UPawn* ControlledPawn, float DeltaSeconds)
{
	static auto Func = Class->GetFunction("BTTask_BlueprintBase", "ReceiveTickAI");

	Params::UBTTask_BlueprintBase_ReceiveTickAI_Params Parms;

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.BTTask_BlueprintBase.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UActor*                      OwnerActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTTask_BlueprintBase::ReceiveTick(class UActor* OwnerActor, float DeltaSeconds)
{
	static auto Func = Class->GetFunction("BTTask_BlueprintBase", "ReceiveTick");

	Params::UBTTask_BlueprintBase_ReceiveTick_Params Parms;

	Parms.OwnerActor = OwnerActor;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAIController*               OwnerController                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPawn*                       ControlledPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTTask_BlueprintBase::ReceiveExecuteAI(class UAIController* OwnerController, class UPawn* ControlledPawn)
{
	static auto Func = Class->GetFunction("BTTask_BlueprintBase", "ReceiveExecuteAI");

	Params::UBTTask_BlueprintBase_ReceiveExecuteAI_Params Parms;

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.BTTask_BlueprintBase.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UActor*                      OwnerActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTTask_BlueprintBase::ReceiveExecute(class UActor* OwnerActor)
{
	static auto Func = Class->GetFunction("BTTask_BlueprintBase", "ReceiveExecute");

	Params::UBTTask_BlueprintBase_ReceiveExecute_Params Parms;

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAIController*               OwnerController                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPawn*                       ControlledPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTTask_BlueprintBase::ReceiveAbortAI(class UAIController* OwnerController, class UPawn* ControlledPawn)
{
	static auto Func = Class->GetFunction("BTTask_BlueprintBase", "ReceiveAbortAI");

	Params::UBTTask_BlueprintBase_ReceiveAbortAI_Params Parms;

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.BTTask_BlueprintBase.ReceiveAbort
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UActor*                      OwnerActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTTask_BlueprintBase::ReceiveAbort(class UActor* OwnerActor)
{
	static auto Func = Class->GetFunction("BTTask_BlueprintBase", "ReceiveAbort");

	Params::UBTTask_BlueprintBase_ReceiveAbort_Params Parms;

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.BTTask_BlueprintBase.IsTaskExecuting
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBTTask_BlueprintBase::IsTaskExecuting()
{
	static auto Func = Class->GetFunction("BTTask_BlueprintBase", "IsTaskExecuting");

	Params::UBTTask_BlueprintBase_IsTaskExecuting_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BTTask_BlueprintBase.IsTaskAborting
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBTTask_BlueprintBase::IsTaskAborting()
{
	static auto Func = Class->GetFunction("BTTask_BlueprintBase", "IsTaskAborting");

	Params::UBTTask_BlueprintBase_IsTaskAborting_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BTTask_BlueprintBase.FinishExecute
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               bSuccess                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTTask_BlueprintBase::FinishExecute(bool bSuccess)
{
	static auto Func = Class->GetFunction("BTTask_BlueprintBase", "FinishExecute");

	Params::UBTTask_BlueprintBase_FinishExecute_Params Parms;

	Parms.bSuccess = bSuccess;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BTTask_BlueprintBase.FinishAbort
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UBTTask_BlueprintBase::FinishAbort()
{
	static auto Func = Class->GetFunction("BTTask_BlueprintBase", "FinishAbort");

	Params::UBTTask_BlueprintBase_FinishAbort_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAnimInstance*               AnimInstance                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUnlockMovement                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               UnlockAILogic                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIBlueprintHelperLibrary::UnlockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic)
{
	static auto Func = Class->GetFunction("AIBlueprintHelperLibrary", "UnlockAIResourcesWithAnimation");

	Params::UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Params Parms;

	Parms.AnimInstance = AnimInstance;
	Parms.bUnlockMovement = bUnlockMovement;
	Parms.UnlockAILogic = UnlockAILogic;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UPawn>           PawnClass                                                        (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBehaviorTree*               BehaviorTree                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Rotation                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bNoCollisionFail                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      Owner                                                            (Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPawn*                       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPawn* UAIBlueprintHelperLibrary::SpawnAIFromClass(class UObject* WorldContextObject, TSubclassOf<class UPawn> PawnClass, class UBehaviorTree* BehaviorTree, const struct FVector& Location, const struct FRotator& Rotation, bool bNoCollisionFail, class UActor* Owner)
{
	static auto Func = Class->GetFunction("AIBlueprintHelperLibrary", "SpawnAIFromClass");

	Params::UAIBlueprintHelperLibrary_SpawnAIFromClass_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PawnClass = PawnClass;
	Parms.BehaviorTree = BehaviorTree;
	Parms.Location = Location;
	Parms.Rotation = Rotation;
	Parms.bNoCollisionFail = bNoCollisionFail;
	Parms.Owner = Owner;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToLocation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UController*                 Controller                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Goal                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIBlueprintHelperLibrary::SimpleMoveToLocation(class UController* Controller, struct FVector& Goal)
{
	static auto Func = Class->GetFunction("AIBlueprintHelperLibrary", "SimpleMoveToLocation");

	Params::UAIBlueprintHelperLibrary_SimpleMoveToLocation_Params Parms;

	Parms.Controller = Controller;
	Parms.Goal = Goal;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UController*                 Controller                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      Goal                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIBlueprintHelperLibrary::SimpleMoveToActor(class UController* Controller, class UActor* Goal)
{
	static auto Func = Class->GetFunction("AIBlueprintHelperLibrary", "SimpleMoveToActor");

	Params::UAIBlueprintHelperLibrary_SimpleMoveToActor_Params Parms;

	Parms.Controller = Controller;
	Parms.Goal = Goal;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AIBlueprintHelperLibrary.SendAIMessage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPawn*                       Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Message                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     MessageSource                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSuccess                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIBlueprintHelperLibrary::SendAIMessage(class UPawn* Target, class FName Message, class UObject* MessageSource, bool bSuccess)
{
	static auto Func = Class->GetFunction("AIBlueprintHelperLibrary", "SendAIMessage");

	Params::UAIBlueprintHelperLibrary_SendAIMessage_Params Parms;

	Parms.Target = Target;
	Parms.Message = Message;
	Parms.MessageSource = MessageSource;
	Parms.bSuccess = bSuccess;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAnimInstance*               AnimInstance                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bLockMovement                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               LockAILogic                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIBlueprintHelperLibrary::LockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic)
{
	static auto Func = Class->GetFunction("AIBlueprintHelperLibrary", "LockAIResourcesWithAnimation");

	Params::UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Params Parms;

	Parms.AnimInstance = AnimInstance;
	Parms.bLockMovement = bLockMovement;
	Parms.LockAILogic = LockAILogic;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AIBlueprintHelperLibrary.IsValidAIRotation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                    Rotation                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIBlueprintHelperLibrary::IsValidAIRotation(const struct FRotator& Rotation)
{
	static auto Func = Class->GetFunction("AIBlueprintHelperLibrary", "IsValidAIRotation");

	Params::UAIBlueprintHelperLibrary_IsValidAIRotation_Params Parms;

	Parms.Rotation = Rotation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.AIBlueprintHelperLibrary.IsValidAILocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIBlueprintHelperLibrary::IsValidAILocation(const struct FVector& Location)
{
	static auto Func = Class->GetFunction("AIBlueprintHelperLibrary", "IsValidAILocation");

	Params::UAIBlueprintHelperLibrary_IsValidAILocation_Params Parms;

	Parms.Location = Location;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.AIBlueprintHelperLibrary.IsValidAIDirection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     DirectionVector                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIBlueprintHelperLibrary::IsValidAIDirection(const struct FVector& DirectionVector)
{
	static auto Func = Class->GetFunction("AIBlueprintHelperLibrary", "IsValidAIDirection");

	Params::UAIBlueprintHelperLibrary_IsValidAIDirection_Params Parms;

	Parms.DirectionVector = DirectionVector;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.AIBlueprintHelperLibrary.GetNextNavLinkIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UController*                 Controller                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAIBlueprintHelperLibrary::GetNextNavLinkIndex(class UController* Controller)
{
	static auto Func = Class->GetFunction("AIBlueprintHelperLibrary", "GetNextNavLinkIndex");

	Params::UAIBlueprintHelperLibrary_GetNextNavLinkIndex_Params Parms;

	Parms.Controller = Controller;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.AIBlueprintHelperLibrary.GetCurrentPathPoints
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UController*                 Controller                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FVector> UAIBlueprintHelperLibrary::GetCurrentPathPoints(class UController* Controller)
{
	static auto Func = Class->GetFunction("AIBlueprintHelperLibrary", "GetCurrentPathPoints");

	Params::UAIBlueprintHelperLibrary_GetCurrentPathPoints_Params Parms;

	Parms.Controller = Controller;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.AIBlueprintHelperLibrary.GetCurrentPathIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UController*                 Controller                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAIBlueprintHelperLibrary::GetCurrentPathIndex(class UController* Controller)
{
	static auto Func = Class->GetFunction("AIBlueprintHelperLibrary", "GetCurrentPathIndex");

	Params::UAIBlueprintHelperLibrary_GetCurrentPathIndex_Params Parms;

	Parms.Controller = Controller;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.AIBlueprintHelperLibrary.GetCurrentPath
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UController*                 Controller                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNavigationPath*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNavigationPath* UAIBlueprintHelperLibrary::GetCurrentPath(class UController* Controller)
{
	static auto Func = Class->GetFunction("AIBlueprintHelperLibrary", "GetCurrentPath");

	Params::UAIBlueprintHelperLibrary_GetCurrentPath_Params Parms;

	Parms.Controller = Controller;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.AIBlueprintHelperLibrary.GetBlackboard
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UActor*                      Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBlackboardComponent*        ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UBlackboardComponent* UAIBlueprintHelperLibrary::GetBlackboard(class UActor* Target)
{
	static auto Func = Class->GetFunction("AIBlueprintHelperLibrary", "GetBlackboard");

	Params::UAIBlueprintHelperLibrary_GetBlackboard_Params Parms;

	Parms.Target = Target;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.AIBlueprintHelperLibrary.GetAIController
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UActor*                      ControlledActor                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIController*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAIController* UAIBlueprintHelperLibrary::GetAIController(class UActor* ControlledActor)
{
	static auto Func = Class->GetFunction("AIBlueprintHelperLibrary", "GetAIController");

	Params::UAIBlueprintHelperLibrary_GetAIController_Params Parms;

	Parms.ControlledActor = ControlledActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPawn*                       Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Destination                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      TargetActor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              AcceptanceRadius                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bStopOnOverlap                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIAsyncTaskBlueprintProxy*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAIAsyncTaskBlueprintProxy* UAIBlueprintHelperLibrary::CreateMoveToProxyObject(class UObject* WorldContextObject, class UPawn* Pawn, const struct FVector& Destination, class UActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap)
{
	static auto Func = Class->GetFunction("AIBlueprintHelperLibrary", "CreateMoveToProxyObject");

	Params::UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Pawn = Pawn;
	Parms.Destination = Destination;
	Parms.TargetActor = TargetActor;
	Parms.AcceptanceRadius = AcceptanceRadius;
	Parms.bStopOnOverlap = bStopOnOverlap;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation
// (Event, Public, HasOutParams, HasDefaults, BlueprintEvent, Const)
// Parameters:
// class UObject*                     QuerierObject                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      QuerierActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ResultingLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnvQueryContext_BlueprintBase::ProvideSingleLocation(class UObject* QuerierObject, class UActor* QuerierActor, struct FVector* ResultingLocation)
{
	static auto Func = Class->GetFunction("EnvQueryContext_BlueprintBase", "ProvideSingleLocation");

	Params::UEnvQueryContext_BlueprintBase_ProvideSingleLocation_Params Parms;

	Parms.QuerierObject = QuerierObject;
	Parms.QuerierActor = QuerierActor;

	UObject::ProcessEvent(Func, &Parms);

	if (ResultingLocation != nullptr)
		*ResultingLocation = Parms.ResultingLocation;

}


// Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor
// (Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// class UObject*                     QuerierObject                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      QuerierActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      ResultingActor                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnvQueryContext_BlueprintBase::ProvideSingleActor(class UObject* QuerierObject, class UActor* QuerierActor, class UActor** ResultingActor)
{
	static auto Func = Class->GetFunction("EnvQueryContext_BlueprintBase", "ProvideSingleActor");

	Params::UEnvQueryContext_BlueprintBase_ProvideSingleActor_Params Parms;

	Parms.QuerierObject = QuerierObject;
	Parms.QuerierActor = QuerierActor;

	UObject::ProcessEvent(Func, &Parms);

	if (ResultingActor != nullptr)
		*ResultingActor = Parms.ResultingActor;

}


// Function AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet
// (Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// class UObject*                     QuerierObject                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      QuerierActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             ResultingLocationSet                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEnvQueryContext_BlueprintBase::ProvideLocationsSet(class UObject* QuerierObject, class UActor* QuerierActor, TArray<struct FVector>* ResultingLocationSet)
{
	static auto Func = Class->GetFunction("EnvQueryContext_BlueprintBase", "ProvideLocationsSet");

	Params::UEnvQueryContext_BlueprintBase_ProvideLocationsSet_Params Parms;

	Parms.QuerierObject = QuerierObject;
	Parms.QuerierActor = QuerierActor;

	UObject::ProcessEvent(Func, &Parms);

	if (ResultingLocationSet != nullptr)
		*ResultingLocationSet = Parms.ResultingLocationSet;

}


// Function AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet
// (Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// class UObject*                     QuerierObject                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      QuerierActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UActor*>              ResultingActorsSet                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEnvQueryContext_BlueprintBase::ProvideActorsSet(class UObject* QuerierObject, class UActor* QuerierActor, TArray<class UActor*>* ResultingActorsSet)
{
	static auto Func = Class->GetFunction("EnvQueryContext_BlueprintBase", "ProvideActorsSet");

	Params::UEnvQueryContext_BlueprintBase_ProvideActorsSet_Params Parms;

	Parms.QuerierObject = QuerierObject;
	Parms.QuerierActor = QuerierActor;

	UObject::ProcessEvent(Func, &Parms);

	if (ResultingActorsSet != nullptr)
		*ResultingActorsSet = Parms.ResultingActorsSet;

}


// Function AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParamName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnvQueryInstanceBlueprintWrapper::SetNamedParam(class FName ParamName, float Value)
{
	static auto Func = Class->GetFunction("EnvQueryInstanceBlueprintWrapper", "SetNamedParam");

	Params::UEnvQueryInstanceBlueprintWrapper_SetNamedParam_Params Parms;

	Parms.ParamName = ParamName;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FVector>             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FVector> UEnvQueryInstanceBlueprintWrapper::GetResultsAsLocations()
{
	static auto Func = Class->GetFunction("EnvQueryInstanceBlueprintWrapper", "GetResultsAsLocations");

	Params::UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UActor*>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UActor*> UEnvQueryInstanceBlueprintWrapper::GetResultsAsActors()
{
	static auto Func = Class->GetFunction("EnvQueryInstanceBlueprintWrapper", "GetResultsAsActors");

	Params::UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsLocations
// (Final, Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// TArray<struct FVector>             ResultLocations                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEnvQueryInstanceBlueprintWrapper::GetQueryResultsAsLocations(TArray<struct FVector>* ResultLocations)
{
	static auto Func = Class->GetFunction("EnvQueryInstanceBlueprintWrapper", "GetQueryResultsAsLocations");

	Params::UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsLocations_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (ResultLocations != nullptr)
		*ResultLocations = Parms.ResultLocations;

	return Parms.ReturnValue;

}


// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsActors
// (Final, Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// TArray<class UActor*>              ResultActors                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEnvQueryInstanceBlueprintWrapper::GetQueryResultsAsActors(TArray<class UActor*>* ResultActors)
{
	static auto Func = Class->GetFunction("EnvQueryInstanceBlueprintWrapper", "GetQueryResultsAsActors");

	Params::UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsActors_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (ResultActors != nullptr)
		*ResultActors = Parms.ResultActors;

	return Parms.ReturnValue;

}


// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ItemIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UEnvQueryInstanceBlueprintWrapper::GetItemScore(int32 ItemIndex)
{
	static auto Func = Class->GetFunction("EnvQueryInstanceBlueprintWrapper", "GetItemScore");

	Params::UEnvQueryInstanceBlueprintWrapper_GetItemScore_Params Parms;

	Parms.ItemIndex = ItemIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// DelegateFunction AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper*QueryInstance                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EEnvQueryStatus         QueryStatus                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnvQueryInstanceBlueprintWrapper::EQSQueryDoneSignature__DelegateSignature(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus)
{
	static auto Func = Class->GetFunction("EnvQueryInstanceBlueprintWrapper", "EQSQueryDoneSignature__DelegateSignature");

	Params::UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature_Params Parms;

	Parms.QueryInstance = QueryInstance;
	Parms.QueryStatus = QueryStatus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.EnvQueryManager.RunEQSQuery
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEnvQuery*                   QueryTemplate                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Querier                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EEnvQueryRunMode        RunMode                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UEnvQueryInstanceBlueprintWrapper>WrapperClass                                                     (Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEnvQueryInstanceBlueprintWrapper*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UEnvQueryInstanceBlueprintWrapper* UEnvQueryManager::RunEQSQuery(class UObject* WorldContextObject, class UEnvQuery* QueryTemplate, class UObject* Querier, enum class EEnvQueryRunMode RunMode, TSubclassOf<class UEnvQueryInstanceBlueprintWrapper> WrapperClass)
{
	static auto Func = Class->GetFunction("EnvQueryManager", "RunEQSQuery");

	Params::UEnvQueryManager_RunEQSQuery_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.QueryTemplate = QueryTemplate;
	Parms.Querier = Querier;
	Parms.RunMode = RunMode;
	Parms.WrapperClass = WrapperClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UEnvQueryGenerator_BlueprintBase::GetQuerier()
{
	static auto Func = Class->GetFunction("EnvQueryGenerator_BlueprintBase", "GetQuerier");

	Params::UEnvQueryGenerator_BlueprintBase_GetQuerier_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGenerationFromActors
// (Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// TArray<class UActor*>              ContextActors                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UEnvQueryGenerator_BlueprintBase::DoItemGenerationFromActors(TArray<class UActor*>& ContextActors)
{
	static auto Func = Class->GetFunction("EnvQueryGenerator_BlueprintBase", "DoItemGenerationFromActors");

	Params::UEnvQueryGenerator_BlueprintBase_DoItemGenerationFromActors_Params Parms;

	Parms.ContextActors = ContextActors;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration
// (Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// TArray<struct FVector>             ContextLocations                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UEnvQueryGenerator_BlueprintBase::DoItemGeneration(TArray<struct FVector>& ContextLocations)
{
	static auto Func = Class->GetFunction("EnvQueryGenerator_BlueprintBase", "DoItemGeneration");

	Params::UEnvQueryGenerator_BlueprintBase_DoItemGeneration_Params Parms;

	Parms.ContextLocations = ContextLocations;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector
// (Final, Native, Public, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FVector                     GeneratedVector                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnvQueryGenerator_BlueprintBase::AddGeneratedVector(const struct FVector& GeneratedVector)
{
	static auto Func = Class->GetFunction("EnvQueryGenerator_BlueprintBase", "AddGeneratedVector");

	Params::UEnvQueryGenerator_BlueprintBase_AddGeneratedVector_Params Parms;

	Parms.GeneratedVector = GeneratedVector;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UActor*                      GeneratedActor                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnvQueryGenerator_BlueprintBase::AddGeneratedActor(class UActor* GeneratedActor)
{
	static auto Func = Class->GetFunction("EnvQueryGenerator_BlueprintBase", "AddGeneratedActor");

	Params::UEnvQueryGenerator_BlueprintBase_AddGeneratedActor_Params Parms;

	Parms.GeneratedActor = GeneratedActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.PathFollowingComponent.OnNavDataRegistered
// (Final, Native, Protected)
// Parameters:
// class UNavigationData*             NavData                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPathFollowingComponent::OnNavDataRegistered(class UNavigationData* NavData)
{
	static auto Func = Class->GetFunction("PathFollowingComponent", "OnNavDataRegistered");

	Params::UPathFollowingComponent_OnNavDataRegistered_Params Parms;

	Parms.NavData = NavData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.PathFollowingComponent.OnActorBump
// (Native, Public, HasOutParams, HasDefaults)
// Parameters:
// class UActor*                      SelfActor                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      OtherActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     NormalImpulse                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  Hit                                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UPathFollowingComponent::OnActorBump(class UActor* SelfActor, class UActor* OtherActor, const struct FVector& NormalImpulse, struct FHitResult& Hit)
{
	static auto Func = Class->GetFunction("PathFollowingComponent", "OnActorBump");

	Params::UPathFollowingComponent_OnActorBump_Params Parms;

	Parms.SelfActor = SelfActor;
	Parms.OtherActor = OtherActor;
	Parms.NormalImpulse = NormalImpulse;
	Parms.Hit = Hit;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.PathFollowingComponent.GetPathDestination
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UPathFollowingComponent::GetPathDestination()
{
	static auto Func = Class->GetFunction("PathFollowingComponent", "GetPathDestination");

	Params::UPathFollowingComponent_GetPathDestination_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.PathFollowingComponent.GetPathActionType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EPathFollowingAction    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EPathFollowingAction UPathFollowingComponent::GetPathActionType()
{
	static auto Func = Class->GetFunction("PathFollowingComponent", "GetPathActionType");

	Params::UPathFollowingComponent_GetPathActionType_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.CrowdFollowingComponent.SuspendCrowdSteering
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bSuspend                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrowdFollowingComponent::SuspendCrowdSteering(bool bSuspend)
{
	static auto Func = Class->GetFunction("CrowdFollowingComponent", "SuspendCrowdSteering");

	Params::UCrowdFollowingComponent_SuspendCrowdSteering_Params Parms;

	Parms.bSuspend = bSuspend;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.NavLinkProxy.SetSmartLinkEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNavLinkProxy::SetSmartLinkEnabled(bool bEnabled)
{
	static auto Func = Class->GetFunction("NavLinkProxy", "SetSmartLinkEnabled");

	Params::UNavLinkProxy_SetSmartLinkEnabled_Params Parms;

	Parms.bEnabled = bEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.NavLinkProxy.ResumePathFollowing
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      Agent                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNavLinkProxy::ResumePathFollowing(class UActor* Agent)
{
	static auto Func = Class->GetFunction("NavLinkProxy", "ResumePathFollowing");

	Params::UNavLinkProxy_ResumePathFollowing_Params Parms;

	Parms.Agent = Agent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.NavLinkProxy.ReceiveSmartLinkReached
// (Event, Public, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// class UActor*                      Agent                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Destination                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNavLinkProxy::ReceiveSmartLinkReached(class UActor* Agent, struct FVector& Destination)
{
	static auto Func = Class->GetFunction("NavLinkProxy", "ReceiveSmartLinkReached");

	Params::UNavLinkProxy_ReceiveSmartLinkReached_Params Parms;

	Parms.Agent = Agent;
	Parms.Destination = Destination;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.NavLinkProxy.IsSmartLinkEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNavLinkProxy::IsSmartLinkEnabled()
{
	static auto Func = Class->GetFunction("NavLinkProxy", "IsSmartLinkEnabled");

	Params::UNavLinkProxy_IsSmartLinkEnabled_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.NavLinkProxy.HasMovingAgents
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNavLinkProxy::HasMovingAgents()
{
	static auto Func = Class->GetFunction("NavLinkProxy", "HasMovingAgents");

	Params::UNavLinkProxy_HasMovingAgents_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.NavLocalGridManager.SetLocalNavigationGridDensity
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CellSize                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNavLocalGridManager::SetLocalNavigationGridDensity(class UObject* WorldContextObject, float CellSize)
{
	static auto Func = Class->GetFunction("NavLocalGridManager", "SetLocalNavigationGridDensity");

	Params::UNavLocalGridManager_SetLocalNavigationGridDensity_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.CellSize = CellSize;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.NavLocalGridManager.RemoveLocalNavigationGrid
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              GridId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRebuildGrids                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNavLocalGridManager::RemoveLocalNavigationGrid(class UObject* WorldContextObject, int32 GridId, bool bRebuildGrids)
{
	static auto Func = Class->GetFunction("NavLocalGridManager", "RemoveLocalNavigationGrid");

	Params::UNavLocalGridManager_RemoveLocalNavigationGrid_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.GridId = GridId;
	Parms.bRebuildGrids = bRebuildGrids;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.NavLocalGridManager.FindLocalNavigationGridPath
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Start                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     End                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             PathPoints                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNavLocalGridManager::FindLocalNavigationGridPath(class UObject* WorldContextObject, struct FVector& Start, struct FVector& End, TArray<struct FVector>* PathPoints)
{
	static auto Func = Class->GetFunction("NavLocalGridManager", "FindLocalNavigationGridPath");

	Params::UNavLocalGridManager_FindLocalNavigationGridPath_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Start = Start;
	Parms.End = End;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (PathPoints != nullptr)
		*PathPoints = Parms.PathPoints;

	return Parms.ReturnValue;

}


// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoints
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             Locations                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Radius2D                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Height                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRebuildGrids                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UNavLocalGridManager::AddLocalNavigationGridForPoints(class UObject* WorldContextObject, TArray<struct FVector>& Locations, int32 Radius2D, float Height, bool bRebuildGrids)
{
	static auto Func = Class->GetFunction("NavLocalGridManager", "AddLocalNavigationGridForPoints");

	Params::UNavLocalGridManager_AddLocalNavigationGridForPoints_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Locations = Locations;
	Parms.Radius2D = Radius2D;
	Parms.Height = Height;
	Parms.bRebuildGrids = bRebuildGrids;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoint
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Radius2D                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Height                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRebuildGrids                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UNavLocalGridManager::AddLocalNavigationGridForPoint(class UObject* WorldContextObject, struct FVector& Location, int32 Radius2D, float Height, bool bRebuildGrids)
{
	static auto Func = Class->GetFunction("NavLocalGridManager", "AddLocalNavigationGridForPoint");

	Params::UNavLocalGridManager_AddLocalNavigationGridForPoint_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Location = Location;
	Parms.Radius2D = Radius2D;
	Parms.Height = Height;
	Parms.bRebuildGrids = bRebuildGrids;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForCapsule
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CapsuleRadius                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CapsuleHalfHeight                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Radius2D                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Height                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRebuildGrids                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UNavLocalGridManager::AddLocalNavigationGridForCapsule(class UObject* WorldContextObject, struct FVector& Location, float CapsuleRadius, float CapsuleHalfHeight, int32 Radius2D, float Height, bool bRebuildGrids)
{
	static auto Func = Class->GetFunction("NavLocalGridManager", "AddLocalNavigationGridForCapsule");

	Params::UNavLocalGridManager_AddLocalNavigationGridForCapsule_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Location = Location;
	Parms.CapsuleRadius = CapsuleRadius;
	Parms.CapsuleHalfHeight = CapsuleHalfHeight;
	Parms.Radius2D = Radius2D;
	Parms.Height = Height;
	Parms.bRebuildGrids = bRebuildGrids;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForBox
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Extent                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Rotation                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// int32                              Radius2D                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Height                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRebuildGrids                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UNavLocalGridManager::AddLocalNavigationGridForBox(class UObject* WorldContextObject, struct FVector& Location, const struct FVector& Extent, const struct FRotator& Rotation, int32 Radius2D, float Height, bool bRebuildGrids)
{
	static auto Func = Class->GetFunction("NavLocalGridManager", "AddLocalNavigationGridForBox");

	Params::UNavLocalGridManager_AddLocalNavigationGridForBox_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Location = Location;
	Parms.Extent = Extent;
	Parms.Rotation = Rotation;
	Parms.Radius2D = Radius2D;
	Parms.Height = Height;
	Parms.bRebuildGrids = bRebuildGrids;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.AIPerceptionComponent.SetSenseEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UAISense>        SenseClass                                                       (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnable                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIPerceptionComponent::SetSenseEnabled(TSubclassOf<class UAISense> SenseClass, bool bEnable)
{
	static auto Func = Class->GetFunction("AIPerceptionComponent", "SetSenseEnabled");

	Params::UAIPerceptionComponent_SetSenseEnabled_Params Parms;

	Parms.SenseClass = SenseClass;
	Parms.bEnable = bEnable;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AIPerceptionComponent.RequestStimuliListenerUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAIPerceptionComponent::RequestStimuliListenerUpdate()
{
	static auto Func = Class->GetFunction("AIPerceptionComponent", "RequestStimuliListenerUpdate");

	Params::UAIPerceptionComponent_RequestStimuliListenerUpdate_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AIPerceptionComponent.OnOwnerEndPlay
// (Final, Native, Public)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EEndPlayReason          EndPlayReason                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIPerceptionComponent::OnOwnerEndPlay(class UActor* Actor, enum class EEndPlayReason EndPlayReason)
{
	static auto Func = Class->GetFunction("AIPerceptionComponent", "OnOwnerEndPlay");

	Params::UAIPerceptionComponent_OnOwnerEndPlay_Params Parms;

	Parms.Actor = Actor;
	Parms.EndPlayReason = EndPlayReason;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AIPerceptionComponent.GetPerceivedHostileActorsBySense
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class UAISense>        SenseToUse                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UActor*>              OutActors                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UAIPerceptionComponent::GetPerceivedHostileActorsBySense(TSubclassOf<class UAISense> SenseToUse, TArray<class UActor*>* OutActors)
{
	static auto Func = Class->GetFunction("AIPerceptionComponent", "GetPerceivedHostileActorsBySense");

	Params::UAIPerceptionComponent_GetPerceivedHostileActorsBySense_Params Parms;

	Parms.SenseToUse = SenseToUse;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutActors != nullptr)
		*OutActors = Parms.OutActors;

}


// Function AIModule.AIPerceptionComponent.GetPerceivedHostileActors
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UActor*>              OutActors                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UAIPerceptionComponent::GetPerceivedHostileActors(TArray<class UActor*>* OutActors)
{
	static auto Func = Class->GetFunction("AIPerceptionComponent", "GetPerceivedHostileActors");

	Params::UAIPerceptionComponent_GetPerceivedHostileActors_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutActors != nullptr)
		*OutActors = Parms.OutActors;

}


// Function AIModule.AIPerceptionComponent.GetKnownPerceivedActors
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class UAISense>        SenseToUse                                                       (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UActor*>              OutActors                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UAIPerceptionComponent::GetKnownPerceivedActors(TSubclassOf<class UAISense> SenseToUse, TArray<class UActor*>* OutActors)
{
	static auto Func = Class->GetFunction("AIPerceptionComponent", "GetKnownPerceivedActors");

	Params::UAIPerceptionComponent_GetKnownPerceivedActors_Params Parms;

	Parms.SenseToUse = SenseToUse;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutActors != nullptr)
		*OutActors = Parms.OutActors;

}


// Function AIModule.AIPerceptionComponent.GetCurrentlyPerceivedActors
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class UAISense>        SenseToUse                                                       (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UActor*>              OutActors                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UAIPerceptionComponent::GetCurrentlyPerceivedActors(TSubclassOf<class UAISense> SenseToUse, TArray<class UActor*>* OutActors)
{
	static auto Func = Class->GetFunction("AIPerceptionComponent", "GetCurrentlyPerceivedActors");

	Params::UAIPerceptionComponent_GetCurrentlyPerceivedActors_Params Parms;

	Parms.SenseToUse = SenseToUse;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutActors != nullptr)
		*OutActors = Parms.OutActors;

}


// Function AIModule.AIPerceptionComponent.GetActorsPerception
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FActorPerceptionBlueprintInfoInfo                                                             (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIPerceptionComponent::GetActorsPerception(class UActor* Actor, struct FActorPerceptionBlueprintInfo* Info)
{
	static auto Func = Class->GetFunction("AIPerceptionComponent", "GetActorsPerception");

	Params::UAIPerceptionComponent_GetActorsPerception_Params Parms;

	Parms.Actor = Actor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Info != nullptr)
		*Info = Parms.Info;

	return Parms.ReturnValue;

}


// Function AIModule.AIPerceptionComponent.ForgetAll
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAIPerceptionComponent::ForgetAll()
{
	static auto Func = Class->GetFunction("AIPerceptionComponent", "ForgetAll");

	Params::UAIPerceptionComponent_ForgetAll_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UAISense>        SenseClass                                                       (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIPerceptionStimuliSourceComponent::UnregisterFromSense(TSubclassOf<class UAISense> SenseClass)
{
	static auto Func = Class->GetFunction("AIPerceptionStimuliSourceComponent", "UnregisterFromSense");

	Params::UAIPerceptionStimuliSourceComponent_UnregisterFromSense_Params Parms;

	Parms.SenseClass = SenseClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAIPerceptionStimuliSourceComponent::UnregisterFromPerceptionSystem()
{
	static auto Func = Class->GetFunction("AIPerceptionStimuliSourceComponent", "UnregisterFromPerceptionSystem");

	Params::UAIPerceptionStimuliSourceComponent_UnregisterFromPerceptionSystem_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAIPerceptionStimuliSourceComponent::RegisterWithPerceptionSystem()
{
	static auto Func = Class->GetFunction("AIPerceptionStimuliSourceComponent", "RegisterWithPerceptionSystem");

	Params::UAIPerceptionStimuliSourceComponent_RegisterWithPerceptionSystem_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UAISense>        SenseClass                                                       (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIPerceptionStimuliSourceComponent::RegisterForSense(TSubclassOf<class UAISense> SenseClass)
{
	static auto Func = Class->GetFunction("AIPerceptionStimuliSourceComponent", "RegisterForSense");

	Params::UAIPerceptionStimuliSourceComponent_RegisterForSense_Params Parms;

	Parms.SenseClass = SenseClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AIPerceptionSystem.ReportPerceptionEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAISenseEvent*               PerceptionEvent                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIPerceptionSystem::ReportPerceptionEvent(class UObject* WorldContextObject, class UAISenseEvent* PerceptionEvent)
{
	static auto Func = Class->GetFunction("AIPerceptionSystem", "ReportPerceptionEvent");

	Params::UAIPerceptionSystem_ReportPerceptionEvent_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PerceptionEvent = PerceptionEvent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AIPerceptionSystem.ReportEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAISenseEvent*               PerceptionEvent                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIPerceptionSystem::ReportEvent(class UAISenseEvent* PerceptionEvent)
{
	static auto Func = Class->GetFunction("AIPerceptionSystem", "ReportEvent");

	Params::UAIPerceptionSystem_ReportEvent_Params Parms;

	Parms.PerceptionEvent = PerceptionEvent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UAISense>        Sense                                                            (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIPerceptionSystem::RegisterPerceptionStimuliSource(class UObject* WorldContextObject, TSubclassOf<class UAISense> Sense, class UActor* Target)
{
	static auto Func = Class->GetFunction("AIPerceptionSystem", "RegisterPerceptionStimuliSource");

	Params::UAIPerceptionSystem_RegisterPerceptionStimuliSource_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Sense = Sense;
	Parms.Target = Target;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay
// (Final, Native, Protected)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EEndPlayReason          EndPlayReason                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIPerceptionSystem::OnPerceptionStimuliSourceEndPlay(class UActor* Actor, enum class EEndPlayReason EndPlayReason)
{
	static auto Func = Class->GetFunction("AIPerceptionSystem", "OnPerceptionStimuliSourceEndPlay");

	Params::UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Params Parms;

	Parms.Actor = Actor;
	Parms.EndPlayReason = EndPlayReason;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AIPerceptionSystem.GetSenseClassForStimulus
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAIStimulus                 Stimulus                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// TSubclassOf<class UAISense>        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSubclassOf<class UAISense> UAIPerceptionSystem::GetSenseClassForStimulus(class UObject* WorldContextObject, struct FAIStimulus& Stimulus)
{
	static auto Func = Class->GetFunction("AIPerceptionSystem", "GetSenseClassForStimulus");

	Params::UAIPerceptionSystem_GetSenseClassForStimulus_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Stimulus = Stimulus;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.AISense_Blueprint.OnUpdate
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class UAISenseEvent*>       EventsToProcess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAISense_Blueprint::OnUpdate(TArray<class UAISenseEvent*>& EventsToProcess)
{
	static auto Func = Class->GetFunction("AISense_Blueprint", "OnUpdate");

	Params::UAISense_Blueprint_OnUpdate_Params Parms;

	Parms.EventsToProcess = EventsToProcess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIModule.AISense_Blueprint.OnListenerUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// class UActor*                      ActorListener                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIPerceptionComponent*      PerceptionComponent                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAISense_Blueprint::OnListenerUpdated(class UActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent)
{
	static auto Func = Class->GetFunction("AISense_Blueprint", "OnListenerUpdated");

	Params::UAISense_Blueprint_OnListenerUpdated_Params Parms;

	Parms.ActorListener = ActorListener;
	Parms.PerceptionComponent = PerceptionComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.AISense_Blueprint.OnListenerUnregistered
// (Event, Public, BlueprintEvent)
// Parameters:
// class UActor*                      ActorListener                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIPerceptionComponent*      PerceptionComponent                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAISense_Blueprint::OnListenerUnregistered(class UActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent)
{
	static auto Func = Class->GetFunction("AISense_Blueprint", "OnListenerUnregistered");

	Params::UAISense_Blueprint_OnListenerUnregistered_Params Parms;

	Parms.ActorListener = ActorListener;
	Parms.PerceptionComponent = PerceptionComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.AISense_Blueprint.OnListenerRegistered
// (Event, Public, BlueprintEvent)
// Parameters:
// class UActor*                      ActorListener                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIPerceptionComponent*      PerceptionComponent                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAISense_Blueprint::OnListenerRegistered(class UActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent)
{
	static auto Func = Class->GetFunction("AISense_Blueprint", "OnListenerRegistered");

	Params::UAISense_Blueprint_OnListenerRegistered_Params Parms;

	Parms.ActorListener = ActorListener;
	Parms.PerceptionComponent = PerceptionComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.AISense_Blueprint.K2_OnNewPawn
// (Event, Public, BlueprintEvent)
// Parameters:
// class UPawn*                       NewPawn                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAISense_Blueprint::K2_OnNewPawn(class UPawn* NewPawn)
{
	static auto Func = Class->GetFunction("AISense_Blueprint", "K2_OnNewPawn");

	Params::UAISense_Blueprint_K2_OnNewPawn_Params Parms;

	Parms.NewPawn = NewPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.AISense_Blueprint.GetAllListenerComponents
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UAIPerceptionComponent*>ListenerComponents                                               (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UAISense_Blueprint::GetAllListenerComponents(TArray<class UAIPerceptionComponent*>* ListenerComponents)
{
	static auto Func = Class->GetFunction("AISense_Blueprint", "GetAllListenerComponents");

	Params::UAISense_Blueprint_GetAllListenerComponents_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (ListenerComponents != nullptr)
		*ListenerComponents = Parms.ListenerComponents;

}


// Function AIModule.AISense_Blueprint.GetAllListenerActors
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UActor*>              ListenerActors                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UAISense_Blueprint::GetAllListenerActors(TArray<class UActor*>* ListenerActors)
{
	static auto Func = Class->GetFunction("AISense_Blueprint", "GetAllListenerActors");

	Params::UAISense_Blueprint_GetAllListenerActors_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (ListenerActors != nullptr)
		*ListenerActors = Parms.ListenerActors;

}


// Function AIModule.AISense_Damage.ReportDamageEvent
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      Instigator                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DamageAmount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     EventLocation                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Tag                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAISense_Damage::ReportDamageEvent(class UObject* WorldContextObject, class UActor* DamagedActor, class UActor* Instigator, float DamageAmount, const struct FVector& EventLocation, const struct FVector& HitLocation, class FName Tag)
{
	static auto Func = Class->GetFunction("AISense_Damage", "ReportDamageEvent");

	Params::UAISense_Damage_ReportDamageEvent_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.DamagedActor = DamagedActor;
	Parms.Instigator = Instigator;
	Parms.DamageAmount = DamageAmount;
	Parms.EventLocation = EventLocation;
	Parms.HitLocation = HitLocation;
	Parms.Tag = Tag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AISense_Hearing.ReportNoiseEvent
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     NoiseLocation                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Loudness                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      Instigator                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxRange                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Tag                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAISense_Hearing::ReportNoiseEvent(class UObject* WorldContextObject, const struct FVector& NoiseLocation, float Loudness, class UActor* Instigator, float MaxRange, class FName Tag)
{
	static auto Func = Class->GetFunction("AISense_Hearing", "ReportNoiseEvent");

	Params::UAISense_Hearing_ReportNoiseEvent_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.NoiseLocation = NoiseLocation;
	Parms.Loudness = Loudness;
	Parms.Instigator = Instigator;
	Parms.MaxRange = MaxRange;
	Parms.Tag = Tag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AISense_Prediction.RequestPawnPredictionEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPawn*                       Requestor                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      PredictedActor                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PredictionTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAISense_Prediction::RequestPawnPredictionEvent(class UPawn* Requestor, class UActor* PredictedActor, float PredictionTime)
{
	static auto Func = Class->GetFunction("AISense_Prediction", "RequestPawnPredictionEvent");

	Params::UAISense_Prediction_RequestPawnPredictionEvent_Params Parms;

	Parms.Requestor = Requestor;
	Parms.PredictedActor = PredictedActor;
	Parms.PredictionTime = PredictionTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AISense_Prediction.RequestControllerPredictionEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAIController*               Requestor                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      PredictedActor                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PredictionTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAISense_Prediction::RequestControllerPredictionEvent(class UAIController* Requestor, class UActor* PredictedActor, float PredictionTime)
{
	static auto Func = Class->GetFunction("AISense_Prediction", "RequestControllerPredictionEvent");

	Params::UAISense_Prediction_RequestControllerPredictionEvent_Params Parms;

	Parms.Requestor = Requestor;
	Parms.PredictedActor = PredictedActor;
	Parms.PredictionTime = PredictionTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AISense_Touch.ReportTouchEvent
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      TouchReceiver                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      OtherActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAISense_Touch::ReportTouchEvent(class UObject* WorldContextObject, class UActor* TouchReceiver, class UActor* OtherActor, const struct FVector& Location)
{
	static auto Func = Class->GetFunction("AISense_Touch", "ReportTouchEvent");

	Params::UAISense_Touch_ReportTouchEvent_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.TouchReceiver = TouchReceiver;
	Parms.OtherActor = OtherActor;
	Parms.Location = Location;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.PawnSensingComponent.SetSensingUpdatesEnabled
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPawnSensingComponent::SetSensingUpdatesEnabled(bool bEnabled)
{
	static auto Func = Class->GetFunction("PawnSensingComponent", "SetSensingUpdatesEnabled");

	Params::UPawnSensingComponent_SetSensingUpdatesEnabled_Params Parms;

	Parms.bEnabled = bEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.PawnSensingComponent.SetSensingInterval
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewSensingInterval                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPawnSensingComponent::SetSensingInterval(float NewSensingInterval)
{
	static auto Func = Class->GetFunction("PawnSensingComponent", "SetSensingInterval");

	Params::UPawnSensingComponent_SetSensingInterval_Params Parms;

	Parms.NewSensingInterval = NewSensingInterval;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.PawnSensingComponent.SetPeripheralVisionAngle
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewPeripheralVisionAngle                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPawnSensingComponent::SetPeripheralVisionAngle(float NewPeripheralVisionAngle)
{
	static auto Func = Class->GetFunction("PawnSensingComponent", "SetPeripheralVisionAngle");

	Params::UPawnSensingComponent_SetPeripheralVisionAngle_Params Parms;

	Parms.NewPeripheralVisionAngle = NewPeripheralVisionAngle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UPawn*                       Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPawnSensingComponent::SeePawnDelegate__DelegateSignature(class UPawn* Pawn)
{
	static auto Func = Class->GetFunction("PawnSensingComponent", "SeePawnDelegate__DelegateSignature");

	Params::UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Params Parms;

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams, HasDefaults)
// Parameters:
// class UPawn*                       Instigator                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Volume                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPawnSensingComponent::HearNoiseDelegate__DelegateSignature(class UPawn* Instigator, struct FVector& Location, float Volume)
{
	static auto Func = Class->GetFunction("PawnSensingComponent", "HearNoiseDelegate__DelegateSignature");

	Params::UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Params Parms;

	Parms.Instigator = Instigator;
	Parms.Location = Location;
	Parms.Volume = Volume;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.PawnSensingComponent.GetPeripheralVisionCosine
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UPawnSensingComponent::GetPeripheralVisionCosine()
{
	static auto Func = Class->GetFunction("PawnSensingComponent", "GetPeripheralVisionCosine");

	Params::UPawnSensingComponent_GetPeripheralVisionCosine_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.PawnSensingComponent.GetPeripheralVisionAngle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UPawnSensingComponent::GetPeripheralVisionAngle()
{
	static auto Func = Class->GetFunction("PawnSensingComponent", "GetPeripheralVisionAngle");

	Params::UPawnSensingComponent_GetPeripheralVisionAngle_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.AITask_MoveTo.AIMoveTo
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UAIController*               Controller                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     GoalLocation                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      GoalActor                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              AcceptanceRadius                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAIOptionFlag           StopOnOverlap                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAIOptionFlag           AcceptPartialPath                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUsePathfinding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bLockAILogic                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseContinuousGoalTracking                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAIOptionFlag           ProjectGoalOnNavigation                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAITask_MoveTo*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAITask_MoveTo* UAITask_MoveTo::AIMoveTo(class UAIController* Controller, const struct FVector& GoalLocation, class UActor* GoalActor, float AcceptanceRadius, enum class EAIOptionFlag StopOnOverlap, enum class EAIOptionFlag AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuousGoalTracking, enum class EAIOptionFlag ProjectGoalOnNavigation)
{
	static auto Func = Class->GetFunction("AITask_MoveTo", "AIMoveTo");

	Params::UAITask_MoveTo_AIMoveTo_Params Parms;

	Parms.Controller = Controller;
	Parms.GoalLocation = GoalLocation;
	Parms.GoalActor = GoalActor;
	Parms.AcceptanceRadius = AcceptanceRadius;
	Parms.StopOnOverlap = StopOnOverlap;
	Parms.AcceptPartialPath = AcceptPartialPath;
	Parms.bUsePathfinding = bUsePathfinding;
	Parms.bLockAILogic = bLockAILogic;
	Parms.bUseContinuousGoalTracking = bUseContinuousGoalTracking;
	Parms.ProjectGoalOnNavigation = ProjectGoalOnNavigation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.AITask_RunEQS.RunEQS
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAIController*               Controller                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEnvQuery*                   QueryTemplate                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAITask_RunEQS*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAITask_RunEQS* UAITask_RunEQS::RunEQS(class UAIController* Controller, class UEnvQuery* QueryTemplate)
{
	static auto Func = Class->GetFunction("AITask_RunEQS", "RunEQS");

	Params::UAITask_RunEQS_RunEQS_Params Parms;

	Parms.Controller = Controller;
	Parms.QueryTemplate = QueryTemplate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
