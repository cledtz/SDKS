#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x80 - 0x30)
// Class GameplayEventRouter.AsyncAction_StartListeningToEvent
class UAsyncAction_StartListeningToEvent : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnEventReceived;                                   // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1169[0x40];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAsyncAction_StartListeningToEvent* GetDefaultObj();

	void StopListeningToEvent();
	class UAsyncAction_StartListeningToEvent* StartListeningToEvent(class UObject* WorldContextObject, class UGameplayEventRouterComponent* Target, class UScriptStruct* EventType, class UObject* Context, enum class EEventBubblingRule EventBubblingRule);
	bool GetPayload(int32& OutPayload);
};

// 0x70 (0xA0 - 0x30)
// Class GameplayEventRouter.AsyncAction_StartListeningToStatefulEvent
class UAsyncAction_StartListeningToStatefulEvent : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnEventReceived;                                   // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSavedEventStateExists;                           // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnEventStateCleared;                               // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1193[0x40];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAsyncAction_StartListeningToStatefulEvent* GetDefaultObj();

	void StopListeningToStatefulEvent();
	class UAsyncAction_StartListeningToStatefulEvent* StartListeningToStatefulEvent(class UObject* WorldContextObject, class UGameplayEventRouterComponent* Target, class UScriptStruct* EventType, class UObject* Context, enum class EEventBubblingRule EventBubblingRule);
	bool GetPayload(int32& OutPayload);
};

// 0x238 (0x2D8 - 0xA0)
// Class GameplayEventRouter.GameplayEventRouterComponent
class UGameplayEventRouterComponent : public UActorComponent
{
public:
	uint8                                        Pad_11CB[0x238];                                   // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGameplayEventRouterComponent* GetDefaultObj();

	void StopListeningToEvent(struct FGameplayEventListenerHandle& HandleToRemove);
	bool K2_BroadcastStatefulEvent(int32& EventData, class UObject* EventContext);
	bool K2_BroadcastEvent(int32& EventData, class UObject* EventContext);
	bool HasValidEventState(class UScriptStruct* EventType, class UObject* Context);
	void ClearEventStateByContext(class UScriptStruct* EventType, class UObject* Context);
	void ClearEventState(class UScriptStruct* EventType);
};

// 0x0 (0x28 - 0x28)
// Class GameplayEventRouter.GameplayEventRouterOwnerInterface
class UGameplayEventRouterOwnerInterface : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UGameplayEventRouterOwnerInterface* GetDefaultObj();

	TSubclassOf<class UGameplayEventRouterComponent> GetEventRouterClass();
};

// 0xB0 (0xE0 - 0x30)
// Class GameplayEventRouter.GameplayEventRouterSubsytem
class UGameplayEventRouterSubsytem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_11E3[0xB0];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGameplayEventRouterSubsytem* GetDefaultObj();

	class UGameplayEventRouterComponent* GetGlobalEventRouter(class UObject* WorldContextObject);
	class UGameplayEventRouterComponent* GetEventRouter(class UClass* Scope, class UActor* ContextActor);
};

}


