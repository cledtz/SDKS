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

// 0x0 (0x28 - 0x28)
// Class AudioGameplay.AudioComponentGroupExtension
class UAudioComponentGroupExtension : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioComponentGroupExtension");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class AudioGameplay.AudioGameplayCondition
class UAudioGameplayCondition : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioGameplayCondition");
		return Clss;
	}

	bool ConditionMet_Position(struct FVector& Position);
	bool ConditionMet();
};

// 0x0 (0x28 - 0x28)
// Class AudioGameplay.AudioGameplayVolumeInteraction
class UAudioGameplayVolumeInteraction : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioGameplayVolumeInteraction");
		return Clss;
	}

	void OnListenerExit();
	void OnListenerEnter();
};

// 0x1B0 (0x450 - 0x2A0)
// Class AudioGameplay.AudioComponentGroup
class UAudioComponentGroup : public USceneComponent
{
public:
	uint8                                        Pad_1E39[0x8];                                     // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            OnStopped;                                         // 0x2A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnKilled;                                          // 0x2B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnVirtualized;                                     // 0x2C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnUnvirtualized;                                   // 0x2D8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class UAudioComponent*>               Components;                                        // 0x2E8(0x10)(Edit, ExportObject, ZeroConstructor, EditConst, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<struct FAudioParameter>               ParamsToSet;                                       // 0x2F8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<struct FAudioParameter>               PersistentParams;                                  // 0x308(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
	TArray<FInterfaceProperty_>                  Extensions;                                        // 0x318(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E3A[0x128];                                   // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioComponentGroup");
		return Clss;
	}

	void UnsubscribeObject(class UObject* Object);
	void SubscribeToStringParam(class FName ParamName, FDelegateProperty_ Delegate);
	void SubscribeToEvent(class FName EventName, FDelegateProperty_ Delegate);
	void SubscribeToBool(class FName ParamName, FDelegateProperty_ Delegate);
	void StopSound(class USoundBase* Sound, float FadeTime);
	class UAudioComponentGroup* StaticGetOrCreateComponentGroup(class AActor* Actor);
	void SetVolumeMultiplier(float InVolume);
	void SetPitchMultiplier(float InPitch);
	void SetLowPassFilter(float InFrequency);
	void RemoveExtension(FInterfaceProperty_ NewExtension);
	bool IsVirtualized();
	bool IsPlayingAny();
	class FString GetStringParamValue(class FName ParamName);
	float GetFloatParamValue(class FName ParamName);
	bool GetBoolParamValue(class FName ParamName);
	void EnableVirtualization();
	void DisableVirtualization();
	void BroadcastStopAll();
	void BroadcastKill();
	void BroadcastEvent(class FName EventName);
	void AddExternalComponent(class UAudioComponent* ComponentToAdd);
	void AddExtension(FInterfaceProperty_ NewExtension);
};

// 0x8 (0xA8 - 0xA0)
// Class AudioGameplay.AudioGameplayComponent
class UAudioGameplayComponent : public UActorComponent
{
public:
	uint8                                        Pad_1E3B[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioGameplayComponent");
		return Clss;
	}

};

// 0x48 (0x78 - 0x30)
// Class AudioGameplay.AudioRequirementPreset
class UAudioRequirementPreset : public UDataAsset
{
public:
	struct FGameplayTagQuery                     Query;                                             // 0x30(0x48)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioRequirementPreset");
		return Clss;
	}

};

// 0x30 (0xD8 - 0xA8)
// Class AudioGameplay.AudioParameterComponent
class UAudioParameterComponent : public UAudioGameplayComponent
{
public:
	uint8                                        Pad_1E3C[0x10];                                    // Fixing Size After Last Property..
	TArray<TWeakObjectPtr<class UAudioComponent>> ActiveComponents;                                  // 0xB8(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<struct FAudioParameter>               Parameters;                                        // 0xC8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioParameterComponent");
		return Clss;
	}

	TArray<struct FAudioParameter> GetParameters();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
