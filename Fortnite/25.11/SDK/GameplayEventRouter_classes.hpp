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

// 0x50 (0x80 - 0x30)
// Class GameplayEventRouter.AsyncAction_StartListeningToEvent
class UAsyncAction_StartListeningToEvent : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnEventReceived;                                   // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E24[0x40];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AsyncAction_StartListeningToEvent");
		return Clss;
	}

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
	uint8                                        Pad_1E27[0x40];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AsyncAction_StartListeningToStatefulEvent");
		return Clss;
	}

	void StopListeningToStatefulEvent();
	class UAsyncAction_StartListeningToStatefulEvent* StartListeningToStatefulEvent(class UObject* WorldContextObject, class UGameplayEventRouterComponent* Target, class UScriptStruct* EventType, class UObject* Context, enum class EEventBubblingRule EventBubblingRule);
	bool GetPayload(int32& OutPayload);
};

// 0x228 (0x2C8 - 0xA0)
// Class GameplayEventRouter.GameplayEventRouterComponent
class UGameplayEventRouterComponent : public UActorComponent
{
public:
	uint8                                        Pad_1E2D[0x228];                                   // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayEventRouterComponent");
		return Clss;
	}

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

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayEventRouterOwnerInterface");
		return Clss;
	}

	TSubclassOf<class UGameplayEventRouterComponent> GetEventRouterClass();
};

// 0xB0 (0xE0 - 0x30)
// Class GameplayEventRouter.GameplayEventRouterSubsytem
class UGameplayEventRouterSubsytem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_1E2E[0xB0];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayEventRouterSubsytem");
		return Clss;
	}

	class UGameplayEventRouterComponent* GetGlobalEventRouter(class UObject* WorldContextObject);
	class UGameplayEventRouterComponent* GetEventRouter(class UClass* Scope, class AActor* ContextActor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
