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

enum class EInteractionRange : uint8
{
	Preview                        = 0,
	Interaction                    = 1,
	EInteractionRange_MAX          = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteConversationRuntime.FortConversationEnterEvent
struct FFortConversationEnterEvent
{
public:
	class UPlayerController*                     PlayerController;                                  // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteConversationRuntime.FortConversationLeaveEvent
struct FFortConversationLeaveEvent
{
public:
	class UPlayerController*                     PlayerController;                                  // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct FortniteConversationRuntime.FortConversation_Spectator_EnterConversation
struct FFortConversation_Spectator_EnterConversation
{
public:
	uint8                                        Pad_7D3E[0x1];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// ScriptStruct FortniteConversationRuntime.FortConversation_Spectator_LeaveConversation
struct FFortConversation_Spectator_LeaveConversation
{
public:
	uint8                                        Pad_7D3F[0x1];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// ScriptStruct FortniteConversationRuntime.FortConversation_SetDialogMarkerClassEvent
struct FFortConversation_SetDialogMarkerClassEvent
{
public:
	uint8                                        Pad_7D40[0x1];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteConversationRuntime.NPCConversationIndicatorMessage
struct FNPCConversationIndicatorMessage
{
public:
	class UFortNonPlayerConversationParticipantComponent* NPCConversationComponent;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct FortniteConversationRuntime.FortConversation_NPC_AddIndicator
struct FFortConversation_NPC_AddIndicator : public FNPCConversationIndicatorMessage
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct FortniteConversationRuntime.FortConversation_NPC_RemoveIndicator
struct FFortConversation_NPC_RemoveIndicator : public FNPCConversationIndicatorMessage
{
public:
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteConversationRuntime.ConversationSettingDialogMarkerData
struct FConversationSettingDialogMarkerData
{
public:
	TSoftClassPtr<class UUserWidget>             DialogMarkerSoftClass;                             // 0x0(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteConversationRuntime.FortConversationConditionalMessage
struct FFortConversationConditionalMessage
{
public:
	class UFortConversationContextCondition*     Condition;                                         // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Message;                                           // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteConversationRuntime.FortConversationNodeConditionalMessages
struct FFortConversationNodeConditionalMessages
{
public:
	TArray<struct FFortConversationConditionalMessage> Messages;                                          // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
