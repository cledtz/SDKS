#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EConversationTaskResultType : uint8
{
	Invalid                        = 0,
	AbortConversation              = 1,
	AdvanceConversation            = 2,
	AdvanceConversationWithChoice  = 3,
	PauseConversationAndSendClientChoices = 4,
	ReturnToLastClientChoice       = 5,
	ReturnToCurrentClientChoice    = 6,
	ReturnToConversationStart      = 7,
	EConversationTaskResultType_MAX = 8,
};

enum class EConversationRequirementResult : uint8
{
	Passed                         = 0,
	FailedButVisible               = 1,
	FailedAndHidden                = 2,
	EConversationRequirementResult_MAX = 3,
};

enum class EConversationChoiceType : uint8
{
	ServerOnly                     = 0,
	UserChoiceAvailable            = 1,
	UserChoiceUnavailable          = 2,
	EConversationChoiceType_MAX    = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct CommonConversationRuntime.ConversationNodeParameterPair
struct FConversationNodeParameterPair
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct CommonConversationRuntime.ClientConversationMessage
struct FClientConversationMessage
{
public:
	struct FGameplayTag                          SpeakerID;                                         // 0x0(0x4)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41DC[0x4];                                     // Fixing Size After Last Property..
	class FText                                  ParticipantDisplayName;                            // 0x8(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Text;                                              // 0x20(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FConversationNodeParameterPair> MetadataParameters;                                // 0x38(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CommonConversationRuntime.ConversationParticipantEntry
struct FConversationParticipantEntry
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ParticipantID;                                     // 0x8(0x4)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41DD[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CommonConversationRuntime.ConversationParticipants
struct FConversationParticipants
{
public:
	TArray<struct FConversationParticipantEntry> List;                                              // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CommonConversationRuntime.ConversationNodeHandle
struct FConversationNodeHandle
{
public:
	struct FGuid                                 NodeGUID;                                          // 0x0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct CommonConversationRuntime.ConversationChoiceReference
struct FConversationChoiceReference
{
public:
	struct FConversationNodeHandle               NodeReference;                                     // 0x0(0x10)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FConversationNodeParameterPair> NodeParameters;                                    // 0x10(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct CommonConversationRuntime.ClientConversationOptionEntry
struct FClientConversationOptionEntry
{
public:
	class FText                                  ChoiceText;                                        // 0x0(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 ChoiceTags;                                        // 0x18(0x20)(BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EConversationChoiceType           ChoiceType;                                        // 0x38(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41DE[0x7];                                     // Fixing Size After Last Property..
	struct FConversationChoiceReference          ChoiceReference;                                   // 0x40(0x20)(BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FConversationNodeParameterPair> ExtraData;                                         // 0x60(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct CommonConversationRuntime.ClientConversationMessagePayload
struct FClientConversationMessagePayload
{
public:
	struct FClientConversationMessage            Message;                                           // 0x0(0x48)(BlueprintVisible, NativeAccessSpecifierPublic)
	struct FConversationParticipants             Participants;                                      // 0x48(0x10)(BlueprintVisible, NativeAccessSpecifierPublic)
	struct FConversationNodeHandle               CurrentNode;                                       // 0x58(0x10)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FClientConversationOptionEntry> Options;                                           // 0x68(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct CommonConversationRuntime.AdvanceConversationRequest
struct FAdvanceConversationRequest
{
public:
	struct FConversationChoiceReference          Choice;                                            // 0x0(0x20)(BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FConversationNodeParameterPair> UserParameters;                                    // 0x20(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct CommonConversationRuntime.ConversationTaskResult
struct FConversationTaskResult
{
public:
	enum class EConversationTaskResultType       Type;                                              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_41DF[0x7];                                     // Fixing Size After Last Property..
	struct FAdvanceConversationRequest           AdvanceToChoice;                                   // 0x8(0x30)(NativeAccessSpecifierPrivate)
	struct FClientConversationMessage            Message;                                           // 0x38(0x48)(NativeAccessSpecifierPrivate)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct CommonConversationRuntime.ConversationContext
struct FConversationContext
{
public:
	class UConversationRegistry*                 ConversationRegistry;                              // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UConversationInstance*                 ActiveConversation;                                // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UConversationParticipantComponent*     ClientParticipant;                                 // 0x10(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UConversationTaskNode*                 TaskBeingConsidered;                               // 0x18(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FConversationNodeHandle>       ReturnScopeStack;                                  // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	bool                                         bServer;                                           // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_41E0[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CommonConversationRuntime.ConversationEntryList
struct FConversationEntryList
{
public:
	struct FGameplayTag                          EntryTag;                                          // 0x0(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41E1[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FGuid>                         DestinationList;                                   // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct CommonConversationRuntime.CommonDialogueBankParticipant
struct FCommonDialogueBankParticipant
{
public:
	class FText                                  FallbackName;                                      // 0x0(0x18)(NativeAccessSpecifierPublic)
	struct FGameplayTag                          ParticipantName;                                   // 0x18(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          NodeTint;                                          // 0x1C(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41E2[0x4];                                     // Fixing Size Of Struct..
};

// 0x60 (0x60 - 0x0)
// ScriptStruct CommonConversationRuntime.NetSerializeScriptStructCache_ConvVersion
struct FNetSerializeScriptStructCache_ConvVersion
{
public:
	TMap<class UScriptStruct*, int32>            ScriptStructsToIndex;                              // 0x0(0x50)(NativeAccessSpecifierPublic)
	TArray<class UScriptStruct*>                 IndexToScriptStructs;                              // 0x50(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CommonConversationRuntime.ConversationChoiceData
struct FConversationChoiceData
{
public:
	uint8                                        Pad_41E3[0x8];                                     // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// ScriptStruct CommonConversationRuntime.ConversationChoiceDataHandle
struct FConversationChoiceDataHandle
{
public:
	uint8                                        Pad_41E4[0x20];                                    // Fixing Size Of Struct..
};

// 0x80 (0x80 - 0x0)
// ScriptStruct CommonConversationRuntime.ConversationBranchPoint
struct FConversationBranchPoint
{
public:
	TArray<struct FConversationNodeHandle>       ReturnScopeStack;                                  // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FClientConversationOptionEntry        ClientChoice;                                      // 0x10(0x70)(NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
