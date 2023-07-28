#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// Function FortniteAIServer.FortAthenaAIBotEvaluator_Harvest.HandleUnconverted
struct UFortAthenaAIBotEvaluator_Harvest_HandleUnconverted_Params
{
public:
	class UFortPawn*                             UnconvertedPawn;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUnconvertReason                  UnconvertReason;                                   // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38D9[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function FortniteAIServer.FortAthenaAIBotEvaluator_Harvest.HandleConverted
struct UFortAthenaAIBotEvaluator_Harvest_HandleConverted_Params
{
public:
	class UFortPawn*                             InstigatorPawn;                                    // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPawn*                             ConvertedPawn;                                     // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function FortniteAIServer.FortWorldConditionTimeOfDayState.HandleTimeOfDayPhaseChange
struct UFortWorldConditionTimeOfDayState_HandleTimeOfDayPhaseChange_Params
{
public:
	enum class EFortDayPhase                     CurrentDayPhase;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortDayPhase                     PreviousDayPhase;                                  // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAtCreation;                                       // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAIServer.FortEQSPrevisActor.SetQueryTemplate
struct UFortEQSPrevisActor_SetQueryTemplate_Params
{
public:
	class UEnvQuery*                             InPrevisQueryTemplate;                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function FortniteAIServer.FortEQSPrevisActor.PrepForPrevis
struct UFortEQSPrevisActor_PrepForPrevis_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function FortniteAIServer.FortGameplayInteractionSmartObjectBehaviorDefinition.CanBeUsedBy
struct UFortGameplayInteractionSmartObjectBehaviorDefinition_CanBeUsedBy_Params
{
public:
	class UActor*                                User;                                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                SmartObjectActor;                                  // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_393B[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function FortniteAIServer.FortAthenaAIBotEvaluator_CharacterLaunched.OnZiplineStateChanged
struct UFortAthenaAIBotEvaluator_CharacterLaunched_OnZiplineStateChanged_Params
{
public:
	bool                                         bIsZiplining;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3947[0x7];                                     // Fixing Size After Last Property..
	class UFortPlayerPawn*                       FortPlayerPawn;                                    // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAIServer.FortAthenaAIBotEvaluator_Conversation.OnPlayerPawnSpawned
struct UFortAthenaAIBotEvaluator_Conversation_OnPlayerPawnSpawned_Params
{
public:
	class UFortAthenaAIBotController*            BotController;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPlayerPawnAthena*                 BotPawn;                                           // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAIServer.FortAthenaAIBotEvaluator_Converted.OnUnconvertedEvent
struct UFortAthenaAIBotEvaluator_Converted_OnUnconvertedEvent_Params
{
public:
	class UFortPawn*                             UnconvertedPawn;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUnconvertReason                  UnconvertReason;                                   // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3950[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function FortniteAIServer.FortAthenaAIBotEvaluator_Converted.OnConvertedEvent
struct UFortAthenaAIBotEvaluator_Converted_OnConvertedEvent_Params
{
public:
	class UFortPawn*                             InstigatorPawn;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPawn*                             ConvertedPawn;                                     // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAIServer.FortAthenaAIBotEvaluator_DBNO.OnAllyPawnDBNOStateChanged
struct UFortAthenaAIBotEvaluator_DBNO_OnAllyPawnDBNOStateChanged_Params
{
public:
	class UFortPawn*                             InPlayer;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInIsDBNO;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3957[0x7];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function FortniteAIServer.FortAthenaAIBotEvaluator_EvasiveManeuvers.OnMoveCompleted
struct UFortAthenaAIBotEvaluator_EvasiveManeuvers_OnMoveCompleted_Params
{
public:
	struct FAIRequestID                          RequestID;                                         // 0x0(0x4)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	enum class EPathFollowingResult              MovementResult;                                    // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_395D[0x3];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function FortniteAIServer.FortAthenaAIBotEvaluator_Heal.HandlePlayerHealthOrShieldChanged
struct UFortAthenaAIBotEvaluator_Heal_HandlePlayerHealthOrShieldChanged_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FortniteAIServer.FortAthenaAIBotEvaluator_Retreat.HandlePlayerHealthOrShieldChanged
struct UFortAthenaAIBotEvaluator_Retreat_HandlePlayerHealthOrShieldChanged_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function FortniteAIServer.FortAthenaAIBotEvaluator_Revive.OnCurrentTargetRevived
struct UFortAthenaAIBotEvaluator_Revive_OnCurrentTargetRevived_Params
{
public:
	class UFortPlayerPawn*                       RevivedPawn;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAIServer.FortAthenaAIBotEvaluator_SandTunnel.OnBotControllerAlertLevelChanged
struct UFortAthenaAIBotEvaluator_SandTunnel_OnBotControllerAlertLevelChanged_Params
{
public:
	class UFortAthenaAIBotController*            BotController;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAlertLevel                       OldAlertLevel;                                     // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAlertLevel                       NewAlertLevel;                                     // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3999[0x6];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function FortniteAIServer.FortAthenaAIBotEvaluator_SandTunnel.Jump
struct UFortAthenaAIBotEvaluator_SandTunnel_Jump_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function FortniteAIServer.FortAthenaAIBotEvaluator_SelectNextDynamicPOI.OnSafeZonePhaseChanged
struct UFortAthenaAIBotEvaluator_SelectNextDynamicPOI_OnSafeZonePhaseChanged_Params
{
public:
	struct FFortSafeZonePhaseUpdatedEvent        Event;                                             // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAIServer.FortAthenaAIBotEvaluator_SelectNextDynamicPOI.OnGamePhaseLogicReady
struct UFortAthenaAIBotEvaluator_SelectNextDynamicPOI_OnGamePhaseLogicReady_Params
{
public:
	struct FFortBattleRoyaleGamePhaseLogicComponentReadyEvent Event;                                             // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAIServer.FortAthenaAIBotEvaluator_Storm.OnSafeZoneStateChanged
struct UFortAthenaAIBotEvaluator_Storm_OnSafeZoneStateChanged_Params
{
public:
	enum class EFortSafeZoneState                NewState;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function FortniteAIServer.FortAthenaAIBotEvaluator_Storm.OnSafeZonePhaseChanged
struct UFortAthenaAIBotEvaluator_Storm_OnSafeZonePhaseChanged_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function FortniteAIServer.FortAthenaAIBotEvaluator_Zipline.OnZiplineStateChanged
struct UFortAthenaAIBotEvaluator_Zipline_OnZiplineStateChanged_Params
{
public:
	bool                                         bIsZiplining;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39BC[0x7];                                     // Fixing Size After Last Property..
	class UFortPlayerPawn*                       FortPlayerPawn;                                    // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAIServer.FortAthenaAIEvaluator_BlueprintBase.OnExit
struct UFortAthenaAIEvaluator_BlueprintBase_OnExit_Params
{
public:
	class UBehaviorTreeComponent*                OwnerComp;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAIServer.FortAthenaAIEvaluator_BlueprintBase.OnEnter
struct UFortAthenaAIEvaluator_BlueprintBase_OnEnter_Params
{
public:
	class UBehaviorTreeComponent*                OwnerComp;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAIServer.FortAthenaAIEvaluator_BlueprintBase.EvaluateStartingConditions
struct UFortAthenaAIEvaluator_BlueprintBase_EvaluateStartingConditions_Params
{
public:
	class UBehaviorTreeComponent*                OwnerComp;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39BE[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function FortniteAIServer.FortAthenaAIEvaluator_BlueprintBase.EvaluateOngoingConditions
struct UFortAthenaAIEvaluator_BlueprintBase_EvaluateOngoingConditions_Params
{
public:
	class UBehaviorTreeComponent*                OwnerComp;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39BF[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function FortniteAIServer.FortAthenaAIEvaluator_DormantUntilPhase.HandleGamePhaseStepChanged
struct UFortAthenaAIEvaluator_DormantUntilPhase_HandleGamePhaseStepChanged_Params
{
public:
	FInterfaceProperty_                          SafeZoneInterface;                                 // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAthenaGamePhaseStep              GamePhaseStep;                                     // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39C1[0x7];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function FortniteAIServer.FortAthenaBTService_ManageWeapon.ManageWeaponTargeting
struct UFortAthenaBTService_ManageWeapon_ManageWeaponTargeting_Params
{
public:
	class UBehaviorTreeComponent*                OwnerComp;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAIServer.FortAthenaBTService_Slide.OnStopSliding
struct UFortAthenaBTService_Slide_OnStopSliding_Params
{
public:
	class UFortPlayerPawn*                       Pawn;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAIServer.FortAthenaBTTask_Zipline.OnZiplineStateChanged
struct UFortAthenaBTTask_Zipline_OnZiplineStateChanged_Params
{
public:
	bool                                         bIsZiplining;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A07[0x7];                                     // Fixing Size After Last Property..
	class UFortPlayerPawn*                       FortPlayerPawn;                                    // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function FortniteAIServer.FortAthenaPlayContextualAnimTaskInstanceData.OnNotifyBeginReceived
struct UFortAthenaPlayContextualAnimTaskInstanceData_OnNotifyBeginReceived_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A21[0x4];                                     // Fixing Size After Last Property..
	struct FBranchingPointNotifyPayload          BranchingPointNotifyPayload;                       // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAIServer.FortAthenaPlayContextualAnimTaskInstanceData.OnMontageEnded
struct UFortAthenaPlayContextualAnimTaskInstanceData_OnMontageEnded_Params
{
public:
	class UAnimMontage*                          EndedMontage;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInterrupted;                                      // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A22[0x7];                                     // Fixing Size Of Struct..
};

// 0x28 (0x28 - 0x0)
// Function FortniteAIServer.FortAthenaPlayInteractionStateTreeTask.OnNotifyBeginReceived
struct UFortAthenaPlayInteractionStateTreeTask_OnNotifyBeginReceived_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A29[0x4];                                     // Fixing Size After Last Property..
	struct FBranchingPointNotifyPayload          BranchingPointNotifyPayload;                       // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAIServer.FortAthenaPlayInteractionStateTreeTask.OnMontageEnded
struct UFortAthenaPlayInteractionStateTreeTask_OnMontageEnded_Params
{
public:
	class UAnimMontage*                          EndedMontage;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInterrupted;                                      // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A2A[0x7];                                     // Fixing Size Of Struct..
};

// 0x28 (0x28 - 0x0)
// Function FortniteAIServer.FortAthenaPlayMontageStateTreeTask.HandleNotifyBeginReceived
struct UFortAthenaPlayMontageStateTreeTask_HandleNotifyBeginReceived_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A2F[0x4];                                     // Fixing Size After Last Property..
	struct FBranchingPointNotifyPayload          BranchingPointNotifyPayload;                       // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAIServer.FortAthenaPlayMontageStateTreeTask.HandleMontageEnded
struct UFortAthenaPlayMontageStateTreeTask_HandleMontageEnded_Params
{
public:
	class UAnimMontage*                          EndedMontage;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInterrupted;                                      // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A30[0x7];                                     // Fixing Size Of Struct..
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
