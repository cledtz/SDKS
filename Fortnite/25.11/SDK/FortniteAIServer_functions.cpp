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


// Function FortniteAIServer.FortWorldConditionTimeOfDayState.HandleTimeOfDayPhaseChange
// (Final, Native, Private)
// Parameters:
// enum class EFortDayPhase           CurrentDayPhase                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortDayPhase           PreviousDayPhase                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAtCreation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortWorldConditionTimeOfDayState::HandleTimeOfDayPhaseChange(enum class EFortDayPhase CurrentDayPhase, enum class EFortDayPhase PreviousDayPhase, bool bAtCreation)
{
	static auto Func = Class->GetFunction("FortWorldConditionTimeOfDayState", "HandleTimeOfDayPhaseChange");

	Params::UFortWorldConditionTimeOfDayState_HandleTimeOfDayPhaseChange_Params Parms;

	Parms.CurrentDayPhase = CurrentDayPhase;
	Parms.PreviousDayPhase = PreviousDayPhase;
	Parms.bAtCreation = bAtCreation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAIServer.FortEQSPrevisActor.SetQueryTemplate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UEnvQuery*                   InPrevisQueryTemplate                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortEQSPrevisActor::SetQueryTemplate(class UEnvQuery* InPrevisQueryTemplate)
{
	static auto Func = Class->GetFunction("FortEQSPrevisActor", "SetQueryTemplate");

	Params::AFortEQSPrevisActor_SetQueryTemplate_Params Parms;

	Parms.InPrevisQueryTemplate = InPrevisQueryTemplate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAIServer.FortEQSPrevisActor.PrepForPrevis
// (Event, Public, BlueprintEvent)
// Parameters:

void AFortEQSPrevisActor::PrepForPrevis()
{
	static auto Func = Class->GetFunction("FortEQSPrevisActor", "PrepForPrevis");

	Params::AFortEQSPrevisActor_PrepForPrevis_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAIServer.FortGameplayInteractionSmartObjectBehaviorDefinition.CanBeUsedBy
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      User                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      SmartObjectActor                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortGameplayInteractionSmartObjectBehaviorDefinition::CanBeUsedBy(class AActor* User, class AActor* SmartObjectActor)
{
	static auto Func = Class->GetFunction("FortGameplayInteractionSmartObjectBehaviorDefinition", "CanBeUsedBy");

	Params::UFortGameplayInteractionSmartObjectBehaviorDefinition_CanBeUsedBy_Params Parms;

	Parms.User = User;
	Parms.SmartObjectActor = SmartObjectActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAIServer.FortAthenaAIBotEvaluator_CharacterLaunched.OnZiplineStateChanged
// (Final, Native, Private)
// Parameters:
// bool                               bIsZiplining                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPlayerPawn*             FortPlayerPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotEvaluator_CharacterLaunched::OnZiplineStateChanged(bool bIsZiplining, class AFortPlayerPawn* FortPlayerPawn)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotEvaluator_CharacterLaunched", "OnZiplineStateChanged");

	Params::UFortAthenaAIBotEvaluator_CharacterLaunched_OnZiplineStateChanged_Params Parms;

	Parms.bIsZiplining = bIsZiplining;
	Parms.FortPlayerPawn = FortPlayerPawn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAIServer.FortAthenaAIBotEvaluator_Conversation.OnPlayerPawnSpawned
// (Final, Native, Private)
// Parameters:
// class AFortAthenaAIBotController*  BotController                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPlayerPawnAthena*       BotPawn                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotEvaluator_Conversation::OnPlayerPawnSpawned(class AFortAthenaAIBotController* BotController, class AFortPlayerPawnAthena* BotPawn)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotEvaluator_Conversation", "OnPlayerPawnSpawned");

	Params::UFortAthenaAIBotEvaluator_Conversation_OnPlayerPawnSpawned_Params Parms;

	Parms.BotController = BotController;
	Parms.BotPawn = BotPawn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAIServer.FortAthenaAIBotEvaluator_Converted.OnUnconvertedEvent
// (Final, Native, Protected)
// Parameters:
// class AFortPawn*                   UnconvertedPawn                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EUnconvertReason        UnconvertReason                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotEvaluator_Converted::OnUnconvertedEvent(class AFortPawn* UnconvertedPawn, enum class EUnconvertReason UnconvertReason)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotEvaluator_Converted", "OnUnconvertedEvent");

	Params::UFortAthenaAIBotEvaluator_Converted_OnUnconvertedEvent_Params Parms;

	Parms.UnconvertedPawn = UnconvertedPawn;
	Parms.UnconvertReason = UnconvertReason;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAIServer.FortAthenaAIBotEvaluator_Converted.OnConvertedEvent
// (Final, Native, Protected)
// Parameters:
// class AFortPawn*                   InstigatorPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPawn*                   ConvertedPawn                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotEvaluator_Converted::OnConvertedEvent(class AFortPawn* InstigatorPawn, class AFortPawn* ConvertedPawn)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotEvaluator_Converted", "OnConvertedEvent");

	Params::UFortAthenaAIBotEvaluator_Converted_OnConvertedEvent_Params Parms;

	Parms.InstigatorPawn = InstigatorPawn;
	Parms.ConvertedPawn = ConvertedPawn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAIServer.FortAthenaAIBotEvaluator_DBNO.OnAllyPawnDBNOStateChanged
// (Final, Native, Private)
// Parameters:
// class AFortPawn*                   InPlayer                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInIsDBNO                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotEvaluator_DBNO::OnAllyPawnDBNOStateChanged(class AFortPawn* InPlayer, bool bInIsDBNO)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotEvaluator_DBNO", "OnAllyPawnDBNOStateChanged");

	Params::UFortAthenaAIBotEvaluator_DBNO_OnAllyPawnDBNOStateChanged_Params Parms;

	Parms.InPlayer = InPlayer;
	Parms.bInIsDBNO = bInIsDBNO;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAIServer.FortAthenaAIBotEvaluator_EvasiveManeuvers.OnMoveCompleted
// (Final, Native, Public)
// Parameters:
// struct FAIRequestID                RequestID                                                        (Parm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EPathFollowingResult    MovementResult                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotEvaluator_EvasiveManeuvers::OnMoveCompleted(const struct FAIRequestID& RequestID, enum class EPathFollowingResult MovementResult)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotEvaluator_EvasiveManeuvers", "OnMoveCompleted");

	Params::UFortAthenaAIBotEvaluator_EvasiveManeuvers_OnMoveCompleted_Params Parms;

	Parms.RequestID = RequestID;
	Parms.MovementResult = MovementResult;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAIServer.FortAthenaAIBotEvaluator_Heal.HandlePlayerHealthOrShieldChanged
// (Final, Native, Private)
// Parameters:

void UFortAthenaAIBotEvaluator_Heal::HandlePlayerHealthOrShieldChanged()
{
	static auto Func = Class->GetFunction("FortAthenaAIBotEvaluator_Heal", "HandlePlayerHealthOrShieldChanged");

	Params::UFortAthenaAIBotEvaluator_Heal_HandlePlayerHealthOrShieldChanged_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAIServer.FortAthenaAIBotEvaluator_Retreat.HandlePlayerHealthOrShieldChanged
// (Final, Native, Protected)
// Parameters:

void UFortAthenaAIBotEvaluator_Retreat::HandlePlayerHealthOrShieldChanged()
{
	static auto Func = Class->GetFunction("FortAthenaAIBotEvaluator_Retreat", "HandlePlayerHealthOrShieldChanged");

	Params::UFortAthenaAIBotEvaluator_Retreat_HandlePlayerHealthOrShieldChanged_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAIServer.FortAthenaAIBotEvaluator_Revive.OnCurrentTargetRevived
// (Final, Native, Private)
// Parameters:
// class AFortPlayerPawn*             RevivedPawn                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotEvaluator_Revive::OnCurrentTargetRevived(class AFortPlayerPawn* RevivedPawn)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotEvaluator_Revive", "OnCurrentTargetRevived");

	Params::UFortAthenaAIBotEvaluator_Revive_OnCurrentTargetRevived_Params Parms;

	Parms.RevivedPawn = RevivedPawn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAIServer.FortAthenaAIBotEvaluator_SandTunnel.OnBotControllerAlertLevelChanged
// (Final, Native, Private)
// Parameters:
// class AFortAthenaAIBotController*  BotController                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAlertLevel             OldAlertLevel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAlertLevel             NewAlertLevel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotEvaluator_SandTunnel::OnBotControllerAlertLevelChanged(class AFortAthenaAIBotController* BotController, enum class EAlertLevel OldAlertLevel, enum class EAlertLevel NewAlertLevel)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotEvaluator_SandTunnel", "OnBotControllerAlertLevelChanged");

	Params::UFortAthenaAIBotEvaluator_SandTunnel_OnBotControllerAlertLevelChanged_Params Parms;

	Parms.BotController = BotController;
	Parms.OldAlertLevel = OldAlertLevel;
	Parms.NewAlertLevel = NewAlertLevel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAIServer.FortAthenaAIBotEvaluator_SandTunnel.Jump
// (Final, Native, Protected)
// Parameters:

void UFortAthenaAIBotEvaluator_SandTunnel::Jump()
{
	static auto Func = Class->GetFunction("FortAthenaAIBotEvaluator_SandTunnel", "Jump");

	Params::UFortAthenaAIBotEvaluator_SandTunnel_Jump_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAIServer.FortAthenaAIBotEvaluator_SelectNextDynamicPOI.OnSafeZonePhaseChanged
// (Final, Native, Private)
// Parameters:

void UFortAthenaAIBotEvaluator_SelectNextDynamicPOI::OnSafeZonePhaseChanged()
{
	static auto Func = Class->GetFunction("FortAthenaAIBotEvaluator_SelectNextDynamicPOI", "OnSafeZonePhaseChanged");

	Params::UFortAthenaAIBotEvaluator_SelectNextDynamicPOI_OnSafeZonePhaseChanged_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAIServer.FortAthenaAIBotEvaluator_Storm.OnSafeZoneStateChanged
// (Final, Native, Public)
// Parameters:
// enum class EFortSafeZoneState      NewState                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotEvaluator_Storm::OnSafeZoneStateChanged(enum class EFortSafeZoneState NewState)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotEvaluator_Storm", "OnSafeZoneStateChanged");

	Params::UFortAthenaAIBotEvaluator_Storm_OnSafeZoneStateChanged_Params Parms;

	Parms.NewState = NewState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAIServer.FortAthenaAIBotEvaluator_Storm.OnSafeZonePhaseChanged
// (Final, Native, Public)
// Parameters:

void UFortAthenaAIBotEvaluator_Storm::OnSafeZonePhaseChanged()
{
	static auto Func = Class->GetFunction("FortAthenaAIBotEvaluator_Storm", "OnSafeZonePhaseChanged");

	Params::UFortAthenaAIBotEvaluator_Storm_OnSafeZonePhaseChanged_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAIServer.FortAthenaAIBotEvaluator_Zipline.OnZiplineStateChanged
// (Final, Native, Protected)
// Parameters:
// bool                               bIsZiplining                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPlayerPawn*             FortPlayerPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotEvaluator_Zipline::OnZiplineStateChanged(bool bIsZiplining, class AFortPlayerPawn* FortPlayerPawn)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotEvaluator_Zipline", "OnZiplineStateChanged");

	Params::UFortAthenaAIBotEvaluator_Zipline_OnZiplineStateChanged_Params Parms;

	Parms.bIsZiplining = bIsZiplining;
	Parms.FortPlayerPawn = FortPlayerPawn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAIServer.FortAthenaAIEvaluator_BlueprintBase.OnExit
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UBehaviorTreeComponent*      OwnerComp                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIEvaluator_BlueprintBase::OnExit(class UBehaviorTreeComponent* OwnerComp)
{
	static auto Func = Class->GetFunction("FortAthenaAIEvaluator_BlueprintBase", "OnExit");

	Params::UFortAthenaAIEvaluator_BlueprintBase_OnExit_Params Parms;

	Parms.OwnerComp = OwnerComp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAIServer.FortAthenaAIEvaluator_BlueprintBase.OnEnter
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UBehaviorTreeComponent*      OwnerComp                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIEvaluator_BlueprintBase::OnEnter(class UBehaviorTreeComponent* OwnerComp)
{
	static auto Func = Class->GetFunction("FortAthenaAIEvaluator_BlueprintBase", "OnEnter");

	Params::UFortAthenaAIEvaluator_BlueprintBase_OnEnter_Params Parms;

	Parms.OwnerComp = OwnerComp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAIServer.FortAthenaAIEvaluator_BlueprintBase.EvaluateStartingConditions
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// class UBehaviorTreeComponent*      OwnerComp                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaAIEvaluator_BlueprintBase::EvaluateStartingConditions(class UBehaviorTreeComponent* OwnerComp)
{
	static auto Func = Class->GetFunction("FortAthenaAIEvaluator_BlueprintBase", "EvaluateStartingConditions");

	Params::UFortAthenaAIEvaluator_BlueprintBase_EvaluateStartingConditions_Params Parms;

	Parms.OwnerComp = OwnerComp;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAIServer.FortAthenaAIEvaluator_BlueprintBase.EvaluateOngoingConditions
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// class UBehaviorTreeComponent*      OwnerComp                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaAIEvaluator_BlueprintBase::EvaluateOngoingConditions(class UBehaviorTreeComponent* OwnerComp)
{
	static auto Func = Class->GetFunction("FortAthenaAIEvaluator_BlueprintBase", "EvaluateOngoingConditions");

	Params::UFortAthenaAIEvaluator_BlueprintBase_EvaluateOngoingConditions_Params Parms;

	Parms.OwnerComp = OwnerComp;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAIServer.FortAthenaAIEvaluator_DormantUntilPhase.HandleGamePhaseStepChanged
// (Final, Native, Private, HasOutParams)
// Parameters:
// FInterfaceProperty_                SafeZoneInterface                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAthenaGamePhaseStep    GamePhaseStep                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIEvaluator_DormantUntilPhase::HandleGamePhaseStepChanged(FInterfaceProperty_& SafeZoneInterface, enum class EAthenaGamePhaseStep GamePhaseStep)
{
	static auto Func = Class->GetFunction("FortAthenaAIEvaluator_DormantUntilPhase", "HandleGamePhaseStepChanged");

	Params::UFortAthenaAIEvaluator_DormantUntilPhase_HandleGamePhaseStepChanged_Params Parms;

	Parms.SafeZoneInterface = SafeZoneInterface;
	Parms.GamePhaseStep = GamePhaseStep;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAIServer.FortAthenaBTService_ManageWeapon.ManageWeaponTargeting
// (Final, Native, Protected, Const)
// Parameters:
// class UBehaviorTreeComponent*      OwnerComp                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaBTService_ManageWeapon::ManageWeaponTargeting(class UBehaviorTreeComponent* OwnerComp)
{
	static auto Func = Class->GetFunction("FortAthenaBTService_ManageWeapon", "ManageWeaponTargeting");

	Params::UFortAthenaBTService_ManageWeapon_ManageWeaponTargeting_Params Parms;

	Parms.OwnerComp = OwnerComp;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAIServer.FortAthenaBTService_Slide.OnStopSliding
// (Final, Native, Private)
// Parameters:
// class AFortPlayerPawn*             Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaBTService_Slide::OnStopSliding(class AFortPlayerPawn* Pawn)
{
	static auto Func = Class->GetFunction("FortAthenaBTService_Slide", "OnStopSliding");

	Params::UFortAthenaBTService_Slide_OnStopSliding_Params Parms;

	Parms.Pawn = Pawn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAIServer.FortAthenaBTTask_Zipline.OnZiplineStateChanged
// (Final, Native, Public)
// Parameters:
// bool                               bIsZiplining                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPlayerPawn*             FortPlayerPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaBTTask_Zipline::OnZiplineStateChanged(bool bIsZiplining, class AFortPlayerPawn* FortPlayerPawn)
{
	static auto Func = Class->GetFunction("FortAthenaBTTask_Zipline", "OnZiplineStateChanged");

	Params::UFortAthenaBTTask_Zipline_OnZiplineStateChanged_Params Parms;

	Parms.bIsZiplining = bIsZiplining;
	Parms.FortPlayerPawn = FortPlayerPawn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAIServer.FortAthenaPlayContextualAnimTaskInstanceData.OnNotifyBeginReceived
// (Final, Native, Public, HasOutParams)
// Parameters:
// class FName                        NotifyName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBranchingPointNotifyPayloadBranchingPointNotifyPayload                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UFortAthenaPlayContextualAnimTaskInstanceData::OnNotifyBeginReceived(class FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
{
	static auto Func = Class->GetFunction("FortAthenaPlayContextualAnimTaskInstanceData", "OnNotifyBeginReceived");

	Params::UFortAthenaPlayContextualAnimTaskInstanceData_OnNotifyBeginReceived_Params Parms;

	Parms.NotifyName = NotifyName;
	Parms.BranchingPointNotifyPayload = BranchingPointNotifyPayload;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAIServer.FortAthenaPlayContextualAnimTaskInstanceData.OnMontageEnded
// (Final, Native, Public)
// Parameters:
// class UAnimMontage*                EndedMontage                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInterrupted                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaPlayContextualAnimTaskInstanceData::OnMontageEnded(class UAnimMontage* EndedMontage, bool bInterrupted)
{
	static auto Func = Class->GetFunction("FortAthenaPlayContextualAnimTaskInstanceData", "OnMontageEnded");

	Params::UFortAthenaPlayContextualAnimTaskInstanceData_OnMontageEnded_Params Parms;

	Parms.EndedMontage = EndedMontage;
	Parms.bInterrupted = bInterrupted;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAIServer.FortAthenaPlayInteractionStateTreeTask.OnNotifyBeginReceived
// (Final, Native, Private, HasOutParams)
// Parameters:
// class FName                        NotifyName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBranchingPointNotifyPayloadBranchingPointNotifyPayload                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UFortAthenaPlayInteractionStateTreeTask::OnNotifyBeginReceived(class FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
{
	static auto Func = Class->GetFunction("FortAthenaPlayInteractionStateTreeTask", "OnNotifyBeginReceived");

	Params::UFortAthenaPlayInteractionStateTreeTask_OnNotifyBeginReceived_Params Parms;

	Parms.NotifyName = NotifyName;
	Parms.BranchingPointNotifyPayload = BranchingPointNotifyPayload;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAIServer.FortAthenaPlayInteractionStateTreeTask.OnMontageEnded
// (Final, Native, Private)
// Parameters:
// class UAnimMontage*                EndedMontage                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInterrupted                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaPlayInteractionStateTreeTask::OnMontageEnded(class UAnimMontage* EndedMontage, bool bInterrupted)
{
	static auto Func = Class->GetFunction("FortAthenaPlayInteractionStateTreeTask", "OnMontageEnded");

	Params::UFortAthenaPlayInteractionStateTreeTask_OnMontageEnded_Params Parms;

	Parms.EndedMontage = EndedMontage;
	Parms.bInterrupted = bInterrupted;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAIServer.FortAthenaPlayMontageStateTreeTask.HandleNotifyBeginReceived
// (Final, Native, Private, HasOutParams)
// Parameters:
// class FName                        NotifyName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBranchingPointNotifyPayloadBranchingPointNotifyPayload                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UFortAthenaPlayMontageStateTreeTask::HandleNotifyBeginReceived(class FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
{
	static auto Func = Class->GetFunction("FortAthenaPlayMontageStateTreeTask", "HandleNotifyBeginReceived");

	Params::UFortAthenaPlayMontageStateTreeTask_HandleNotifyBeginReceived_Params Parms;

	Parms.NotifyName = NotifyName;
	Parms.BranchingPointNotifyPayload = BranchingPointNotifyPayload;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAIServer.FortAthenaPlayMontageStateTreeTask.HandleMontageEnded
// (Final, Native, Private)
// Parameters:
// class UAnimMontage*                EndedMontage                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInterrupted                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaPlayMontageStateTreeTask::HandleMontageEnded(class UAnimMontage* EndedMontage, bool bInterrupted)
{
	static auto Func = Class->GetFunction("FortAthenaPlayMontageStateTreeTask", "HandleMontageEnded");

	Params::UFortAthenaPlayMontageStateTreeTask_HandleMontageEnded_Params Parms;

	Parms.EndedMontage = EndedMontage;
	Parms.bInterrupted = bInterrupted;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
