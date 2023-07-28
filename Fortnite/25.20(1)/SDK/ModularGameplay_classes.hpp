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

// 0x0 (0xA0 - 0xA0)
// Class ModularGameplay.GameFrameworkComponent
class UGameFrameworkComponent : public UActorComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameFrameworkComponent");
		return Clss;
	}

};

// 0x0 (0xA0 - 0xA0)
// Class ModularGameplay.ControllerComponent
class UControllerComponent : public UGameFrameworkComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControllerComponent");
		return Clss;
	}

};

// 0x208 (0x238 - 0x30)
// Class ModularGameplay.GameFrameworkComponentManager
class UGameFrameworkComponentManager : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_36D3[0x208];                                   // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameFrameworkComponentManager");
		return Clss;
	}

	bool UnregisterClassInitStateDelegate(TSoftClassPtr<class UActor> ActorClass, FDelegateProperty_ DelegateToRemove);
	bool UnregisterActorInitStateDelegate(class UActor* Actor, FDelegateProperty_ DelegateToRemove);
	void SendExtensionEvent(class UActor* Receiver, class FName EventName, bool bOnlyInGameWorlds);
	void RemoveReceiver(class UActor* Receiver);
	bool RegisterAndCallForClassInitState(TSoftClassPtr<class UActor> ActorClass, class FName FeatureName, const struct FGameplayTag& RequiredState, FDelegateProperty_ Delegate, bool bCallImmediately);
	bool RegisterAndCallForActorInitState(class UActor* Actor, class FName FeatureName, const struct FGameplayTag& RequiredState, FDelegateProperty_ Delegate, bool bCallImmediately);
	void AddReceiver(class UActor* Receiver, bool bAddOnlyInGameWorlds);
};

// 0x0 (0x28 - 0x28)
// Class ModularGameplay.GameFrameworkInitStateInterface
class UGameFrameworkInitStateInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameFrameworkInitStateInterface");
		return Clss;
	}

	bool UnregisterInitStateDelegate(FDelegateProperty_ Delegate);
	bool RegisterAndCallForInitStateChange(const struct FGameplayTag& RequiredState, FDelegateProperty_ Delegate, bool bCallImmediately);
	bool HasReachedInitState(const struct FGameplayTag& DesiredState);
	struct FGameplayTag GetInitState();
	class FName GetFeatureName();
};

// 0x0 (0xA0 - 0xA0)
// Class ModularGameplay.GameStateComponent
class UGameStateComponent : public UGameFrameworkComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameStateComponent");
		return Clss;
	}

};

// 0x0 (0xA0 - 0xA0)
// Class ModularGameplay.PawnComponent
class UPawnComponent : public UGameFrameworkComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PawnComponent");
		return Clss;
	}

};

// 0x0 (0xA0 - 0xA0)
// Class ModularGameplay.PlayerStateComponent
class UPlayerStateComponent : public UGameFrameworkComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayerStateComponent");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
