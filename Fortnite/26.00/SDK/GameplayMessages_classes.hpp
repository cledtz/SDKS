#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x98 - 0x30)
// Class GameplayMessages.AsyncAction_RegisterGameplayMessageReceiver
class UAsyncAction_RegisterGameplayMessageReceiver : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnMessageReceived;                                 // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            HandleSavedState;                                  // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            HandleStateCleared;                                // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_11F6[0x38];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAsyncAction_RegisterGameplayMessageReceiver* GetDefaultObj();

	void Unregister();
	class UAsyncAction_RegisterGameplayMessageReceiver* RegisterGameplayMessageReceiver(class UObject* WorldContextObject, const struct FEventMessageTag& Channel, class UScriptStruct* PayloadType, enum class EGameplayMessageMatchType MatchType, class UActor* ActorContext);
	bool GetPayload(int32& OutPayload);
};

// 0x0 (0x290 - 0x290)
// Class GameplayMessages.GameplayMessageReplicator
class UGameplayMessageReplicator : public UActor
{
public:

	static class UClass* StaticClass();
	static class UGameplayMessageReplicator* GetDefaultObj();

	void Multicast_ServerMessageTriggered(const struct FEventMessageTag& Channel, struct FReplicatedMessage& MessageData);
};

// 0xA8 (0xD8 - 0x30)
// Class GameplayMessages.GameplayMessageRouter
class UGameplayMessageRouter : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_1212[0xA0];                                    // Fixing Size After Last Property 
	class UGameplayMessageReplicator*            MessageReplicator;                                 // 0xD0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGameplayMessageRouter* GetDefaultObj();

	void K2_BroadcastMessage(const struct FEventMessageTag& Channel, int32& Message, bool bSaveToChannel, class UActor* ActorContext);
	bool HasValidSavedMessage(const struct FEventMessageTag& Channel);
	void ClearSavedMessage(const struct FEventMessageTag& Channel);
};

// 0x0 (0x28 - 0x28)
// Class GameplayMessages.BlueprintEventMessageTagLibrary
class UBlueprintEventMessageTagLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBlueprintEventMessageTagLibrary* GetDefaultObj();

	struct FEventMessageTag GetEventMessageTagFromGameplayTag(const struct FGameplayTag& InTag);
};

}


