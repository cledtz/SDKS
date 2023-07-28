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

// 0x14 (0x14 - 0x0)
// Function CommonConversationRuntime.ConversationNode.GetDebugParticipantColor
struct UConversationNode_GetDebugParticipantColor_Params
{
public:
	struct FGameplayTag                          ParticipantID;                                     // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ReturnValue;                                       // 0x4(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// Function CommonConversationRuntime.ConversationChoiceNode.FillChoice
struct UConversationChoiceNode_FillChoice_Params
{
public:
	struct FConversationContext                  Context;                                           // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FClientConversationOptionEntry        ChoiceEntry;                                       // 0x38(0x70)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function CommonConversationRuntime.ConversationContextHelpers.ReturnToLastClientChoice
struct UConversationContextHelpers_ReturnToLastClientChoice_Params
{
public:
	struct FConversationContext                  Context;                                           // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FConversationTaskResult               ReturnValue;                                       // 0x38(0x80)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function CommonConversationRuntime.ConversationContextHelpers.ReturnToCurrentClientChoice
struct UConversationContextHelpers_ReturnToCurrentClientChoice_Params
{
public:
	struct FConversationContext                  Context;                                           // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FConversationTaskResult               ReturnValue;                                       // 0x38(0x80)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function CommonConversationRuntime.ConversationContextHelpers.ReturnToConversationStart
struct UConversationContextHelpers_ReturnToConversationStart_Params
{
public:
	struct FConversationContext                  Context;                                           // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FConversationTaskResult               ReturnValue;                                       // 0x38(0x80)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x100 (0x100 - 0x0)
// Function CommonConversationRuntime.ConversationContextHelpers.PauseConversationAndSendClientChoices
struct UConversationContextHelpers_PauseConversationAndSendClientChoices_Params
{
public:
	struct FConversationContext                  Context;                                           // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FClientConversationMessage            Message;                                           // 0x38(0x48)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FConversationTaskResult               ReturnValue;                                       // 0x80(0x80)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function CommonConversationRuntime.ConversationContextHelpers.MakeConversationParticipant
struct UConversationContextHelpers_MakeConversationParticipant_Params
{
public:
	struct FConversationContext                  Context;                                           // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UActor*                                ParticipantActor;                                  // 0x38(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ParticipantTag;                                    // 0x40(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41C6[0x4];                                     // Fixing Size Of Struct..
};

// 0x48 (0x48 - 0x0)
// Function CommonConversationRuntime.ConversationContextHelpers.GetCurrentConversationNodeHandle
struct UConversationContextHelpers_GetCurrentConversationNodeHandle_Params
{
public:
	struct FConversationContext                  Context;                                           // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FConversationNodeHandle               ReturnValue;                                       // 0x38(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function CommonConversationRuntime.ConversationContextHelpers.GetConversationParticipantActor
struct UConversationContextHelpers_GetConversationParticipantActor_Params
{
public:
	struct FConversationContext                  Context;                                           // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ParticipantTag;                                    // 0x38(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41C7[0x4];                                     // Fixing Size After Last Property..
	class UActor*                                ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function CommonConversationRuntime.ConversationContextHelpers.GetConversationParticipant
struct UConversationContextHelpers_GetConversationParticipant_Params
{
public:
	struct FConversationContext                  Context;                                           // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ParticipantTag;                                    // 0x38(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41C8[0x4];                                     // Fixing Size After Last Property..
	class UConversationParticipantComponent*     ReturnValue;                                       // 0x40(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function CommonConversationRuntime.ConversationContextHelpers.GetConversationInstance
struct UConversationContextHelpers_GetConversationInstance_Params
{
public:
	struct FConversationContext                  Context;                                           // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UConversationInstance*                 ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonConversationRuntime.ConversationContextHelpers.FindConversationComponent
struct UConversationContextHelpers_FindConversationComponent_Params
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UConversationParticipantComponent*     ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// Function CommonConversationRuntime.ConversationContextHelpers.CanConversationContinue
struct UConversationContextHelpers_CanConversationContinue_Params
{
public:
	struct FConversationTaskResult               ConversationTasResult;                             // 0x0(0x80)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x80(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41C9[0x7];                                     // Fixing Size Of Struct..
};

// 0xE8 (0xE8 - 0x0)
// Function CommonConversationRuntime.ConversationContextHelpers.AdvanceConversationWithChoice
struct UConversationContextHelpers_AdvanceConversationWithChoice_Params
{
public:
	struct FConversationContext                  Context;                                           // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAdvanceConversationRequest           Choice;                                            // 0x38(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FConversationTaskResult               ReturnValue;                                       // 0x68(0x80)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function CommonConversationRuntime.ConversationContextHelpers.AdvanceConversation
struct UConversationContextHelpers_AdvanceConversation_Params
{
public:
	struct FConversationContext                  Context;                                           // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FConversationTaskResult               ReturnValue;                                       // 0x38(0x80)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function CommonConversationRuntime.ConversationContextHelpers.AbortConversation
struct UConversationContextHelpers_AbortConversation_Params
{
public:
	struct FConversationContext                  Context;                                           // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FConversationTaskResult               ReturnValue;                                       // 0x38(0x80)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function CommonConversationRuntime.ConversationLibrary.StartConversation
struct UConversationLibrary_StartConversation_Params
{
public:
	struct FGameplayTag                          ConversationEntryTag;                              // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41CE[0x4];                                     // Fixing Size After Last Property..
	class UActor*                                Instigator;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          InstigatorTag;                                     // 0x10(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41CF[0x4];                                     // Fixing Size After Last Property..
	class UActor*                                Target;                                            // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          TargetTag;                                         // 0x20(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41D0[0x4];                                     // Fixing Size After Last Property..
	TSubclassOf<class UConversationInstance>     ConversationInstanceClass;                         // 0x28(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UConversationInstance*                 ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function CommonConversationRuntime.ConversationTaskNode.IsRequirementSatisfied
struct UConversationTaskNode_IsRequirementSatisfied_Params
{
public:
	struct FConversationContext                  Context;                                           // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	enum class EConversationRequirementResult    ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41D1[0x7];                                     // Fixing Size Of Struct..
};

// 0x14 (0x14 - 0x0)
// Function CommonConversationRuntime.ConversationTaskNode.GetNodeBodyColor
struct UConversationTaskNode_GetNodeBodyColor_Params
{
public:
	struct FLinearColor                          BodyColor;                                         // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41D2[0x3];                                     // Fixing Size Of Struct..
};

// 0x48 (0x48 - 0x0)
// Function CommonConversationRuntime.ConversationTaskNode.GatherStaticExtraData
struct UConversationTaskNode_GatherStaticExtraData_Params
{
public:
	struct FConversationContext                  Context;                                           // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FConversationNodeParameterPair> InOutExtraData;                                    // 0x38(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function CommonConversationRuntime.ConversationTaskNode.ExecuteTaskNode
struct UConversationTaskNode_ExecuteTaskNode_Params
{
public:
	struct FConversationContext                  Context;                                           // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FConversationTaskResult               ReturnValue;                                       // 0x38(0x80)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function CommonConversationRuntime.ConversationTaskNode.ExecuteClientEffects
struct UConversationTaskNode_ExecuteClientEffects_Params
{
public:
	struct FConversationContext                  Context;                                           // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function CommonConversationRuntime.ConversationParticipantComponent.ServerAdvanceConversation
struct UConversationParticipantComponent_ServerAdvanceConversation_Params
{
public:
	struct FAdvanceConversationRequest           InChoicePicked;                                    // 0x0(0x30)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function CommonConversationRuntime.ConversationParticipantComponent.RequestServerAdvanceConversation
struct UConversationParticipantComponent_RequestServerAdvanceConversation_Params
{
public:
	struct FAdvanceConversationRequest           InChoicePicked;                                    // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonConversationRuntime.ConversationParticipantComponent.OnRep_ConversationsActive
struct UConversationParticipantComponent_OnRep_ConversationsActive_Params
{
public:
	int32                                        OldConversationsActive;                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonConversationRuntime.ConversationParticipantComponent.IsInActiveConversation
struct UConversationParticipantComponent_IsInActiveConversation_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CommonConversationRuntime.ConversationParticipantComponent.GetParticipantDisplayName
struct UConversationParticipantComponent_GetParticipantDisplayName_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonConversationRuntime.ConversationParticipantComponent.GetParticipantActor
struct UConversationParticipantComponent_GetParticipantActor_Params
{
public:
	struct FGameplayTag                          ParticipantTag;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41D5[0x4];                                     // Fixing Size After Last Property..
	class UActor*                                ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonConversationRuntime.ConversationParticipantComponent.ClientUpdateParticipants
struct UConversationParticipantComponent_ClientUpdateParticipants_Params
{
public:
	struct FConversationParticipants             InParticipants;                                    // 0x0(0x10)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function CommonConversationRuntime.ConversationParticipantComponent.ClientUpdateConversationTaskChoiceData
struct UConversationParticipantComponent_ClientUpdateConversationTaskChoiceData_Params
{
public:
	struct FConversationNodeHandle               Handle;                                            // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FClientConversationOptionEntry        OptionEntry;                                       // 0x10(0x70)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonConversationRuntime.ConversationParticipantComponent.ClientUpdateConversations
struct UConversationParticipantComponent_ClientUpdateConversations_Params
{
public:
	int32                                        InConversationsActive;                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function CommonConversationRuntime.ConversationParticipantComponent.ClientUpdateConversation
struct UConversationParticipantComponent_ClientUpdateConversation_Params
{
public:
	struct FClientConversationMessagePayload     Message;                                           // 0x0(0x78)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonConversationRuntime.ConversationParticipantComponent.ClientStartConversation
struct UConversationParticipantComponent_ClientStartConversation_Params
{
public:
	struct FConversationParticipants             InParticipants;                                    // 0x0(0x10)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonConversationRuntime.ConversationParticipantComponent.ClientExitConversation
struct UConversationParticipantComponent_ClientExitConversation_Params
{
public:
	struct FConversationParticipants             InParticipants;                                    // 0x0(0x10)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonConversationRuntime.ConversationParticipantComponent.ClientExecuteTaskAndSideEffects
struct UConversationParticipantComponent_ClientExecuteTaskAndSideEffects_Params
{
public:
	struct FConversationNodeHandle               Handle;                                            // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function CommonConversationRuntime.ConversationRequirementNode.IsRequirementSatisfied
struct UConversationRequirementNode_IsRequirementSatisfied_Params
{
public:
	struct FConversationContext                  Context;                                           // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	enum class EConversationRequirementResult    ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41DB[0x7];                                     // Fixing Size Of Struct..
};

// 0x38 (0x38 - 0x0)
// Function CommonConversationRuntime.ConversationSideEffectNode.ServerCauseSideEffect
struct UConversationSideEffectNode_ServerCauseSideEffect_Params
{
public:
	struct FConversationContext                  Context;                                           // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function CommonConversationRuntime.ConversationSideEffectNode.ClientCauseSideEffect
struct UConversationSideEffectNode_ClientCauseSideEffect_Params
{
public:
	struct FConversationContext                  Context;                                           // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
