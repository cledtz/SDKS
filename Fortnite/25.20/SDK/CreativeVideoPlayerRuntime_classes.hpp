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

// 0x68 (0xB90 - 0xB28)
// Class CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility
class UCreativeVideoPlayerFullscreenGameplayAbility : public UFortGameplayAbility
{
public:
	TSubclassOf<class UGameplayEffect>           NoCollisionGameplayEffectClass;                    // 0xB28(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGameplayEffect>           NoDamageGameplayEffectClass;                       // 0xB30(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UGameplayEffect>>   AnimationStateGameplayEffectClasses;               // 0xB38(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TSubclassOf<class UUserWidget>               FullscreenWidgetClass;                             // 0xB48(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECreativeVideoPlayerFullscreenEffects FullscreenEffects;                                 // 0xB50(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPromptToConfirmFullscreen;                        // 0xB51(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDismissable;                                    // 0xB52(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_80BA[0x5];                                     // Fixing Size After Last Property..
	class UFortInputComponent*                   OverrideMovementInputComponent;                    // 0xB58(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortInputComponent*                   SelectFullscreenModeInputComponent;                // 0xB60(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FActiveGameplayEffectHandle>   ActiveGameplayEffects;                             // 0xB68(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	enum class ECreativeVideoPlayerFullscreenEffects RequestedFullscreenEffects;                        // 0xB78(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_80BB[0x7];                                     // Fixing Size After Last Property..
	class UUserWidget*                           VideoPlayerWidget;                                 // 0xB80(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bActivatedFullscreen;                              // 0xB88(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_80BC[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CreativeVideoPlayerFullscreenGameplayAbility");
		return Clss;
	}

	void ServerLeaveFullscreenMode();
	void ServerEnterFullscreenMode();
	void OnFullscreenUIEnds();
	void HandleEnterFullscreenActionReleased();
	void HandleEnterFullscreenActionPressed();
	void ExitFullscreenState();
	void EnterFullscreenStateWithOptions(const struct FCreativeVideoPlayerFullscreenOptions& Options);
	void EnterFullscreenState();
	void ClientTransitionToFullscreenVideo();
	void ClientLeaveFullscreenVideo();
};

// 0x0 (0x28 - 0x28)
// Class CreativeVideoPlayerRuntime.CreativeVideoPlayerFunctionLibrary
class UCreativeVideoPlayerFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CreativeVideoPlayerFunctionLibrary");
		return Clss;
	}

	void ShutdownFullscreenVideoMode(class AController* Controller);
};

// 0x10 (0x40 - 0x30)
// Class CreativeVideoPlayerRuntime.CreativeVideoPlayerWorldSubsystem
class UCreativeVideoPlayerWorldSubsystem : public UWorldSubsystem
{
public:
	FMulticastInlineDelegateProperty_            OnNotifyFullscreenChange;                          // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CreativeVideoPlayerWorldSubsystem");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
