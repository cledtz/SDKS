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

// 0x4 (0x4 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortAugmentSelectionToolAbility.SetHighlightedChoiceIndex
struct UFortAugmentSelectionToolAbility_SetHighlightedChoiceIndex_Params
{
public:
	int32                                        NewChoiceIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortAugmentSelectionToolAbility.OnSelectedChoiceIndex
struct UFortAugmentSelectionToolAbility_OnSelectedChoiceIndex_Params
{
public:
	int32                                        ChoiceIndex;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortAugmentSelectionToolAbility.OnRerollPressedAndCannotAfford
struct UFortAugmentSelectionToolAbility_OnRerollPressedAndCannotAfford_Params
{
public:
};

// 0x2 (0x2 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortAugmentSelectionToolAbility.OnHoldRerollInputChanged
struct UFortAugmentSelectionToolAbility_OnHoldRerollInputChanged_Params
{
public:
	bool                                         bIsPressed;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCompletedHold;                                    // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortAugmentSelectionToolAbility.OnHighlightSelectionUpdated
struct UFortAugmentSelectionToolAbility_OnHighlightSelectionUpdated_Params
{
public:
	int32                                        NewHighlightedChoiceIndex;                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.TryIncrementUnlockRollCount
struct UFortBattleRoyalePlayerAugmentSystem_TryIncrementUnlockRollCount_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.TryClaimUnlock
struct UFortBattleRoyalePlayerAugmentSystem_TryClaimUnlock_Params
{
public:
	struct FFortAugmentPassiveUnlockResult       ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.ResetMatchAugments
struct UFortBattleRoyalePlayerAugmentSystem_ResetMatchAugments_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.OnServerAugmentGrantTimestampReplicated
struct UFortBattleRoyalePlayerAugmentSystem_OnServerAugmentGrantTimestampReplicated_Params
{
public:
	float                                        ServerGrantStartTimestamp;                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.OnRep_ServerGrantingStartedTimestamp
struct UFortBattleRoyalePlayerAugmentSystem_OnRep_ServerGrantingStartedTimestamp_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.OnPossedPawnChanged
struct UFortBattleRoyalePlayerAugmentSystem_OnPossedPawnChanged_Params
{
public:
	class APawn*                                 OldPawn;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                 NewPawn;                                           // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.OnMatchAugmentsReset
struct UFortBattleRoyalePlayerAugmentSystem_OnMatchAugmentsReset_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// DelegateFunction PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.OnBattleRoyaleMatchAugmentResetDelegate__DelegateSignature
struct UFortBattleRoyalePlayerAugmentSystem_OnBattleRoyaleMatchAugmentResetDelegate__DelegateSignature_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.HandlePossessedPawnChanged
struct UFortBattleRoyalePlayerAugmentSystem_HandlePossessedPawnChanged_Params
{
public:
	class APawn*                                 OldPawn;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                 NewPawn;                                           // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.GetServerGrantingStartedTimestamp
struct UFortBattleRoyalePlayerAugmentSystem_GetServerGrantingStartedTimestamp_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.ChooseUnlockFromList
struct UFortBattleRoyalePlayerAugmentSystem_ChooseUnlockFromList_Params
{
public:
	TArray<struct FPlayerAugmentLockStatus>      LockedList;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FFortAugmentPassiveUnlockResult       ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.BP_GetAugmentPlayerPawn
struct UFortBattleRoyalePlayerAugmentSystem_BP_GetAugmentPlayerPawn_Params
{
public:
	enum class EFortBRAugmentSystemCastResult    OutExec;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7EBC[0x7];                                     // Fixing Size After Last Property..
	class AFortPlayerPawn*                       OutFortPlayerPawn;                                 // 0x8(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.BP_GetAugmentController
struct UFortBattleRoyalePlayerAugmentSystem_BP_GetAugmentController_Params
{
public:
	enum class EFortBRAugmentSystemCastResult    OutExec;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7EBD[0x7];                                     // Fixing Size After Last Property..
	class AController*                           OutController;                                     // 0x8(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.BlueprintAugmentLog
struct UFortBattleRoyalePlayerAugmentSystem_BlueprintAugmentLog_Params
{
public:
	class FString                                Message;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBattleRoyaleBPAugmentLogVerbosity Verbosity;                                         // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutonomousProxyOnly;                              // 0x11(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7EBE[0x6];                                     // Fixing Size Of Struct..
};

// 0x4 (0x4 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.AuthoritySetServerGrantingStartedTimestamp
struct UFortBattleRoyalePlayerAugmentSystem_AuthoritySetServerGrantingStartedTimestamp_Params
{
public:
	float                                        ServerTimestamp;                                   // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortContextualTutorial_MultipleAugmentsQueued.HandleBindCompletionTrigger
struct UFortContextualTutorial_MultipleAugmentsQueued_HandleBindCompletionTrigger_Params
{
public:
	class AFortPlayerControllerZone*             FortPCZone;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortContextualTutorial_MultipleAugmentsQueued.HandleBindActivationTrigger
struct UFortContextualTutorial_MultipleAugmentsQueued_HandleBindActivationTrigger_Params
{
public:
	class AFortPlayerControllerZone*             FortPCZone;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortContextualTutorial_MultipleAugmentsQueued.CompletionEventCallback
struct UFortContextualTutorial_MultipleAugmentsQueued_CompletionEventCallback_Params
{
public:
	bool                                         bIsOpened;                                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bViewingAugmentInventory;                          // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortContextualTutorial_MultipleAugmentsQueued.ActivationEventCallback
struct UFortContextualTutorial_MultipleAugmentsQueued_ActivationEventCallback_Params
{
public:
	int8                                         NumPendingAugmentsToGrant;                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.ServerRequestReroll
struct UFortControllerComponent_AugmentGrantingSystem_ServerRequestReroll_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.ServerGrantAugment
struct UFortControllerComponent_AugmentGrantingSystem_ServerGrantAugment_Params
{
public:
	class UFortPlayerAugmentItemDefinition*      ChosenAugmentDef;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnSelectedAugmentForGrantDelegate__DelegateSignature
struct UFortControllerComponent_AugmentGrantingSystem_OnSelectedAugmentForGrantDelegate__DelegateSignature_Params
{
public:
	class UFortPlayerAugmentItemDefinition*      SelectedAugment;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// DelegateFunction PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnReplicateNumPendingAugmentsToGrantDelegate__DelegateSignature
struct UFortControllerComponent_AugmentGrantingSystem_OnReplicateNumPendingAugmentsToGrantDelegate__DelegateSignature_Params
{
public:
	int8                                         NumPendingAugmentsToGrant;                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnRep_SelectorItemEntry
struct UFortControllerComponent_AugmentGrantingSystem_OnRep_SelectorItemEntry_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnRep_ReplicatedNumPendingAugmentsToGrant
struct UFortControllerComponent_AugmentGrantingSystem_OnRep_ReplicatedNumPendingAugmentsToGrant_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnRep_ReplicatedAugmentChoices
struct UFortControllerComponent_AugmentGrantingSystem_OnRep_ReplicatedAugmentChoices_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnRep_NumLockedSelectionChoices
struct UFortControllerComponent_AugmentGrantingSystem_OnRep_NumLockedSelectionChoices_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnRep_NumFreeRerolls
struct UFortControllerComponent_AugmentGrantingSystem_OnRep_NumFreeRerolls_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// DelegateFunction PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnNumLockedSelectionChoicesUpdatedDelegate__DelegateSignature
struct UFortControllerComponent_AugmentGrantingSystem_OnNumLockedSelectionChoicesUpdatedDelegate__DelegateSignature_Params
{
public:
	int32                                        NewNumFreeRerolls;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnMinigameStarted
struct UFortControllerComponent_AugmentGrantingSystem_OnMinigameStarted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnLocalUnequipAugmentSelectionPressed
struct UFortControllerComponent_AugmentGrantingSystem_OnLocalUnequipAugmentSelectionPressed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// DelegateFunction PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnLocalRerollDelegate__DelegateSignature
struct UFortControllerComponent_AugmentGrantingSystem_OnLocalRerollDelegate__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnLocalEquipAugmentSelectionPressed
struct UFortControllerComponent_AugmentGrantingSystem_OnLocalEquipAugmentSelectionPressed_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// DelegateFunction PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnFreeRerollsUpdatedDelegate__DelegateSignature
struct UFortControllerComponent_AugmentGrantingSystem_OnFreeRerollsUpdatedDelegate__DelegateSignature_Params
{
public:
	int32                                        NewNumFreeRerolls;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnAvailableAugmentsForGrantingUpdatedDelegate__DelegateSignature
struct UFortControllerComponent_AugmentGrantingSystem_OnAvailableAugmentsForGrantingUpdatedDelegate__DelegateSignature_Params
{
public:
	class UFortControllerComponent_AugmentGrantingSystem* GrantingComponent;                                 // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnAuthorityRequestAugmentChoicesDelegate__DelegateSignature
struct UFortControllerComponent_AugmentGrantingSystem_OnAuthorityRequestAugmentChoicesDelegate__DelegateSignature_Params
{
public:
	TArray<class UFortPlayerAugmentItemDefinition*> IgnoreInRoll;                                      // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.IsSelectionItemEquipped
struct UFortControllerComponent_AugmentGrantingSystem_IsSelectionItemEquipped_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.IsSelectionChoicesLocked
struct UFortControllerComponent_AugmentGrantingSystem_IsSelectionChoicesLocked_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.HandleUnHolsteredEvent
struct UFortControllerComponent_AugmentGrantingSystem_HandleUnHolsteredEvent_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.HandleToggleFullscreenMap
struct UFortControllerComponent_AugmentGrantingSystem_HandleToggleFullscreenMap_Params
{
public:
	bool                                         bVisible;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.HandlePossessedPawnChanged
struct UFortControllerComponent_AugmentGrantingSystem_HandlePossessedPawnChanged_Params
{
public:
	class APawn*                                 OldPawn;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                 NewPawn;                                           // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.HandleHolsteredEvent
struct UFortControllerComponent_AugmentGrantingSystem_HandleHolsteredEvent_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.HandleGamePhaseChanged
struct UFortControllerComponent_AugmentGrantingSystem_HandleGamePhaseChanged_Params
{
public:
	enum class EAthenaGamePhase                  GamePhase;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.HandleChangedBuildMode
struct UFortControllerComponent_AugmentGrantingSystem_HandleChangedBuildMode_Params
{
public:
	bool                                         bEnteredBuildMode;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.GetPendingAugmentsToGrant
struct UFortControllerComponent_AugmentGrantingSystem_GetPendingAugmentsToGrant_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.GetNumFreeRerolls
struct UFortControllerComponent_AugmentGrantingSystem_GetNumFreeRerolls_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.GetAvailableAugmentsToGrant
struct UFortControllerComponent_AugmentGrantingSystem_GetAvailableAugmentsToGrant_Params
{
public:
	TArray<struct FPlayerAugmentChoiceDatum>     ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.GetAugmentGrantingComponentFromController
struct UFortControllerComponent_AugmentGrantingSystem_GetAugmentGrantingComponentFromController_Params
{
public:
	class AController*                           Controller;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortControllerComponent_AugmentGrantingSystem* ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.ClientSelectAvailableAugmentToGrant
struct UFortControllerComponent_AugmentGrantingSystem_ClientSelectAvailableAugmentToGrant_Params
{
public:
	class UFortPlayerAugmentItemDefinition*      ChosenAugmentDef;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// DelegateFunction PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.CanSelectAugmentChangedDelegate__DelegateSignature
struct UFortControllerComponent_AugmentGrantingSystem_CanSelectAugmentChangedDelegate__DelegateSignature_Params
{
public:
	bool                                         bCanSelectAugment;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.CanReroll
struct UFortControllerComponent_AugmentGrantingSystem_CanReroll_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.AuthoritySetAvailableAugmentChoices
struct UFortControllerComponent_AugmentGrantingSystem_AuthoritySetAvailableAugmentChoices_Params
{
public:
	TArray<struct FPlayerAugmentChoiceDatum>     AvailableAugmentsToGrant;                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.AuthorityResetAugmentData
struct UFortControllerComponent_AugmentGrantingSystem_AuthorityResetAugmentData_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.AuthorityRequestSelectionToolItemGrant
struct UFortControllerComponent_AugmentGrantingSystem_AuthorityRequestSelectionToolItemGrant_Params
{
public:
	class UObject*                               Instigator;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.AuthorityIncrementLockedSelectionChoices
struct UFortControllerComponent_AugmentGrantingSystem_AuthorityIncrementLockedSelectionChoices_Params
{
public:
	int32                                        NumLocksToAdd;                                     // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.AuthorityGrantNewAugment
struct UFortControllerComponent_AugmentGrantingSystem_AuthorityGrantNewAugment_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.AuthorityGrantFreeReroll
struct UFortControllerComponent_AugmentGrantingSystem_AuthorityGrantFreeReroll_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function PlayerAugmentsCodeRuntime.AugmentFuctionLibrary.GiveAugmentWithPreventDropping
struct UAugmentFuctionLibrary_GiveAugmentWithPreventDropping_Params
{
public:
	class UFortPlayerAugmentItemDefinition*      ChosenAugmentDef;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FInterfaceProperty_                          InventoryOwner;                                    // 0x8(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortWorldItem*                        ReturnValue;                                       // 0x18(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.UpdatedTimerProgress
struct UFortControllerComponent_AugmentUIEvents_UpdatedTimerProgress_Params
{
public:
	float                                        TimeRemaining;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimePercentage;                                    // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.SetNumGrantableAugmentsForPlaylist
struct UFortControllerComponent_AugmentUIEvents_SetNumGrantableAugmentsForPlaylist_Params
{
public:
	int32                                        NewNumRounds;                                      // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.OnGrantTimerProgressUpdatedDelegate__DelegateSignature
struct UFortControllerComponent_AugmentUIEvents_OnGrantTimerProgressUpdatedDelegate__DelegateSignature_Params
{
public:
	float                                        TimeRemaining;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimePercentage;                                    // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// DelegateFunction PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.OnAugmentToolViewSwapDelegate__DelegateSignature
struct UFortControllerComponent_AugmentUIEvents_OnAugmentToolViewSwapDelegate__DelegateSignature_Params
{
public:
	bool                                         ViewingInventoryAugments;                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// DelegateFunction PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.OnAugmentStartedSelectionOfChoiceDelegate__DelegateSignature
struct UFortControllerComponent_AugmentUIEvents_OnAugmentStartedSelectionOfChoiceDelegate__DelegateSignature_Params
{
public:
	int32                                        ChoiceIndex;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// DelegateFunction PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.OnAugmentSelectorOpenedStatusChangedDelegate__DelegateSignature
struct UFortControllerComponent_AugmentUIEvents_OnAugmentSelectorOpenedStatusChangedDelegate__DelegateSignature_Params
{
public:
	bool                                         bIsOpened;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bViewingInventory;                                 // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// DelegateFunction PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.OnAugmentSelectorHighlightedChoiceDelegate__DelegateSignature
struct UFortControllerComponent_AugmentUIEvents_OnAugmentSelectorHighlightedChoiceDelegate__DelegateSignature_Params
{
public:
	int32                                        ChoiceIndex;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// DelegateFunction PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.OnAugmentGrantingTimersResetForMatchDelegate__DelegateSignature
struct UFortControllerComponent_AugmentUIEvents_OnAugmentGrantingTimersResetForMatchDelegate__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// DelegateFunction PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.OnAugmentGrantingTimersFinishedForMatchDelegate__DelegateSignature
struct UFortControllerComponent_AugmentUIEvents_OnAugmentGrantingTimersFinishedForMatchDelegate__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.NotifyGrantingTimersReset
struct UFortControllerComponent_AugmentUIEvents_NotifyGrantingTimersReset_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.NotifyGrantingTimersFinished
struct UFortControllerComponent_AugmentUIEvents_NotifyGrantingTimersFinished_Params
{
public:
};

// 0x2 (0x2 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.HandleAugmentSelectorOpenedStatusChanged
struct UFortControllerComponent_AugmentUIEvents_HandleAugmentSelectorOpenedStatusChanged_Params
{
public:
	bool                                         bIsOpened;                                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bViewingInventory;                                 // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.AugmentHoldInputRerollChangedDelegate__DelegateSignature
struct UFortControllerComponent_AugmentUIEvents_AugmentHoldInputRerollChangedDelegate__DelegateSignature_Params
{
public:
	enum class EAugmentHoldInputRerollState      HoldState;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7EC6[0x3];                                     // Fixing Size After Last Property..
	float                                        HoldDurationSeconds;                               // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.HandleMcpProfilesInitialized
struct UFortControllerComponent_PlayerAugmentPersistence_HandleMcpProfilesInitialized_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.HandleCollectionDataTableLoaded
struct UFortControllerComponent_PlayerAugmentPersistence_HandleCollectionDataTableLoaded_Params
{
public:
	TSoftObjectPtr<class UFortCollectionsDataTable> CollectionsDataTableSoftPtr;                       // 0x0(0x28)(Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.HandleCollectionDataLoaded
struct UFortControllerComponent_PlayerAugmentPersistence_HandleCollectionDataLoaded_Params
{
public:
	TSoftObjectPtr<class UFortCollectionData>    BaseCollectionDataSoftPtr;                         // 0x0(0x28)(Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.HandleAthenaGamePhaseChanged
struct UFortControllerComponent_PlayerAugmentPersistence_HandleAthenaGamePhaseChanged_Params
{
public:
	enum class EAthenaGamePhase                  GamePhase;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.GetRollCountSinceLastRandomUnlock
struct UFortControllerComponent_PlayerAugmentPersistence_GetRollCountSinceLastRandomUnlock_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.GetLockStatusForAll
struct UFortControllerComponent_PlayerAugmentPersistence_GetLockStatusForAll_Params
{
public:
	TArray<struct FPlayerAugmentLockStatus>      OutLockStatusArray;                                // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.GetLockStatus
struct UFortControllerComponent_PlayerAugmentPersistence_GetLockStatus_Params
{
public:
	class UFortPlayerAugmentItemDefinition*      PlayerAugmentItemDefinition;                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlayerAugmentLockStatus              ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.GetLockedList
struct UFortControllerComponent_PlayerAugmentPersistence_GetLockedList_Params
{
public:
	TArray<struct FPlayerAugmentLockStatus>      OutLockedList;                                     // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bIncludeSharedAugments;                            // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7ECA[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.GetCarryOverPlayerAugments
struct UFortControllerComponent_PlayerAugmentPersistence_GetCarryOverPlayerAugments_Params
{
public:
	TArray<struct FCarryOverPlayerAugment>       OutCarryOverPlayerAugments;                        // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.AuthorityUnlockPlayerAugment
struct UFortControllerComponent_PlayerAugmentPersistence_AuthorityUnlockPlayerAugment_Params
{
public:
	class UFortPlayerAugmentItemDefinition*      PlayerAugmentToUnlock;                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.AuthoritySetRollCountSinceLastRandomUnlock
struct UFortControllerComponent_PlayerAugmentPersistence_AuthoritySetRollCountSinceLastRandomUnlock_Params
{
public:
	int32                                        NewRollCount;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.AuthoritySetCarryOverPlayerAugments
struct UFortControllerComponent_PlayerAugmentPersistence_AuthoritySetCarryOverPlayerAugments_Params
{
public:
	TArray<struct FCarryOverPlayerAugment>       NewCarryOverPlayerAugments;                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortMcpCollectionPlayerAugment.MarkSeenForPlayer
struct UFortMcpCollectionPlayerAugment_MarkSeenForPlayer_Params
{
public:
	class AFortPlayerController*                 PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          VariantTag;                                        // 0x8(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7ECD[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortMcpCollectionPlayerAugment.AddToPlayerCollection
struct UFortMcpCollectionPlayerAugment_AddToPlayerCollection_Params
{
public:
	class AFortPlayerController*                 PlayerController;                                  // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          PlayerAugmentVariantTag;                           // 0x8(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7ECE[0x4];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.StartAugmentGrantingFlow
struct UFortPlayerAugmentCheatManager_StartAugmentGrantingFlow_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.SetPlayerAugmentRollCountSinceLastUnlock
struct UFortPlayerAugmentCheatManager_SetPlayerAugmentRollCountSinceLastUnlock_Params
{
public:
	int32                                        RollCount;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.ServerLogDynamicWeightsForPlayer
struct UFortPlayerAugmentCheatManager_ServerLogDynamicWeightsForPlayer_Params
{
public:
	bool                                         bVeryDetailedReport;                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.ResetAugmentGrantingToSeed
struct UFortPlayerAugmentCheatManager_ResetAugmentGrantingToSeed_Params
{
public:
	int32                                        Seed;                                              // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.RemoveAllAugmentsFromBots
struct UFortPlayerAugmentCheatManager_RemoveAllAugmentsFromBots_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.RemoveAllAugments
struct UFortPlayerAugmentCheatManager_RemoveAllAugments_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.LogPlayerAugmentsLockStatus
struct UFortPlayerAugmentCheatManager_LogPlayerAugmentsLockStatus_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.GiveAugmentToBots
struct UFortPlayerAugmentCheatManager_GiveAugmentToBots_Params
{
public:
	class FString                                AugmentName;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.GiveAugment
struct UFortPlayerAugmentCheatManager_GiveAugment_Params
{
public:
	class FString                                AugmentName;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.ForceSelectionAugments
struct UFortPlayerAugmentCheatManager_ForceSelectionAugments_Params
{
public:
	class FString                                AugmentNameFirst;                                  // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AugmentNameSecond;                                 // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.CollectPlayerAugment
struct UFortPlayerAugmentCheatManager_CollectPlayerAugment_Params
{
public:
	class FString                                TagMatch;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.CollectAllPlayerAugments
struct UFortPlayerAugmentCheatManager_CollectAllPlayerAugments_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.SetAugmentMatchDataCacheFloat
struct UFortPlayerStateComponent_PlayerAugmentSystem_SetAugmentMatchDataCacheFloat_Params
{
public:
	struct FGameplayTag                          TargetAugmentCacheTag;                             // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7ED0[0x4];                                     // Fixing Size After Last Property..
	double                                       InData;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.OnRep_ActiveAugments
struct UFortPlayerStateComponent_PlayerAugmentSystem_OnRep_ActiveAugments_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// DelegateFunction PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.OnAugmentListUpdatedEventDispatcher__DelegateSignature
struct UFortPlayerStateComponent_PlayerAugmentSystem_OnAugmentListUpdatedEventDispatcher__DelegateSignature_Params
{
public:
	class UFortPlayerStateComponent_PlayerAugmentSystem* AugmentComponent;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.HandlePlayerPawnSpawned
struct UFortPlayerStateComponent_PlayerAugmentSystem_HandlePlayerPawnSpawned_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.HandleBotPlayerPawnSpawned
struct UFortPlayerStateComponent_PlayerAugmentSystem_HandleBotPlayerPawnSpawned_Params
{
public:
	class AFortAthenaAIBotController*            BotController;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPlayerPawnAthena*                 BotPawn;                                           // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.GetAugmentMatchDataCacheFloat
struct UFortPlayerStateComponent_PlayerAugmentSystem_GetAugmentMatchDataCacheFloat_Params
{
public:
	enum class EAugmentExecResult                OutExec;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7ED1[0x3];                                     // Fixing Size After Last Property..
	struct FGameplayTag                          TargetAugmentCacheTag;                             // 0x4(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.GetAugmentComponentValidated
struct UFortPlayerStateComponent_PlayerAugmentSystem_GetAugmentComponentValidated_Params
{
public:
	enum class EAugmentExecResult                OutExec;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7ED2[0x7];                                     // Fixing Size After Last Property..
	class AActor*                                PlayerContextActor;                                // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPlayerStateComponent_PlayerAugmentSystem* ReturnValue;                                       // 0x10(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.GetAugmentComponent
struct UFortPlayerStateComponent_PlayerAugmentSystem_GetAugmentComponent_Params
{
public:
	class AActor*                                PlayerContextActor;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPlayerStateComponent_PlayerAugmentSystem* ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.GetActiveAugments
struct UFortPlayerStateComponent_PlayerAugmentSystem_GetActiveAugments_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UFortPlayerAugmentItemDefinition*> ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.ClientClearMatchAugmentDataCache
struct UFortPlayerStateComponent_PlayerAugmentSystem_ClientClearMatchAugmentDataCache_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
