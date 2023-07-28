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
// Class SidewaysCodeRuntime.SidewaysCheatManager
class USidewaysCheatManager : public UChildCheatManager
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SidewaysCheatManager");
		return Clss;
	}

	void SetSidewaysState(enum class ESidewaysState SidewaysState);
};

// 0x8 (0xB0 - 0xA8)
// Class SidewaysCodeRuntime.FortControllerComponent_Sideways
class UFortControllerComponent_Sideways : public UFortControllerComponent
{
public:
	struct FTimerHandle                          UpdateClosestSidewaysHandle;                       // 0xA8(0x8)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortControllerComponent_Sideways");
		return Clss;
	}

};

// 0x50 (0x148 - 0xF8)
// Class SidewaysCodeRuntime.PlayspaceComponent_SidewaysDimension
class UPlayspaceComponent_SidewaysDimension : public UFortPlayspaceComponent
{
public:
	uint8                                        Pad_7E20[0x48];                                    // Fixing Size After Last Property..
	class UAthenaAIServiceLoot*                  CachedAIServiceLoot;                               // 0x140(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayspaceComponent_SidewaysDimension");
		return Clss;
	}

};

// 0x0 (0xF8 - 0xF8)
// Class SidewaysCodeRuntime.PlayspaceComponent_SidewaysEncounter
class UPlayspaceComponent_SidewaysEncounter : public UFortPlayspaceComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayspaceComponent_SidewaysEncounter");
		return Clss;
	}

};

// 0x28 (0xC8 - 0xA0)
// Class SidewaysCodeRuntime.SidewaysStateComponent
class USidewaysStateComponent : public UGameFrameworkComponent
{
public:
	enum class ESidewaysState                    SidewaysState;                                     // 0xA0(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7E23[0x7];                                     // Fixing Size After Last Property..
	class USidewaysPlayspace*                    SidewaysPlayspace;                                 // 0xA8(0x8)(Net, ZeroConstructor, RepNotify, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnSidewaysStateChangedDelegate;                    // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_7E24[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SidewaysStateComponent");
		return Clss;
	}

	void SetSidewaysState(enum class ESidewaysState NewState, class USidewaysPlayspace* NewSidewaysPlayspace);
	void OnRep_SidewaysState(enum class ESidewaysState LastSidewaysState);
	void OnRep_SidewaysPlayspace(class USidewaysPlayspace* NewSidewaysPlayspace);
	void HandleSidewaysStateChanged(class USidewaysPlayspace* NewSidewaysPlayspace, enum class ESidewaysState OldState, enum class ESidewaysState NewState);
	enum class ESidewaysState GetSidewaysState();
};

// 0x50 (0x118 - 0xC8)
// Class SidewaysCodeRuntime.SidewaysStateComponent_Player
class USidewaysStateComponent_Player : public USidewaysStateComponent
{
public:
	TSoftObjectPtr<class UMaterialParameterCollection> SidewaysMaterialParameterCollection;               // 0xC8(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  SidewaysBubbleLocationParameterNamesForLocalPlayers[0x2]; // 0xF0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  SidewaysBubbleRadiusParameterNamesForLocalPlayers[0x2]; // 0xF8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        ExtraCorruptionRadius;                             // 0x100(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MinRadiusToHaveAnyCorruption;                      // 0x104(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxRadiusForScalingExtraCorruptionRadius;          // 0x108(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        UpdateFrequency;                                   // 0x10C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7E25[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SidewaysStateComponent_Player");
		return Clss;
	}

};

// 0x38 (0x60 - 0x28)
// Class SidewaysCodeRuntime.SidewaysFeatureAction_HoldGlobalData
class USidewaysFeatureAction_HoldGlobalData : public UGameFeatureAction
{
public:
	TSoftObjectPtr<class UMaterialParameterCollection> SidewaysMaterialParameterCollection;               // 0x28(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  SidewaysBubbleLocationParameterNamesForLocalPlayers[0x2]; // 0x50(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  SidewaysBubbleRadiusParameterNamesForLocalPlayers[0x2]; // 0x58(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SidewaysFeatureAction_HoldGlobalData");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class SidewaysCodeRuntime.SidewaysLibrary
class USidewaysLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SidewaysLibrary");
		return Clss;
	}

	class USidewaysStateComponent* GetSidewaysStateComponent(class UActor* Owner);
};

// 0x0 (0x698 - 0x698)
// Class SidewaysCodeRuntime.SidewaysPlayspace
class USidewaysPlayspace : public UFortPlayspace
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SidewaysPlayspace");
		return Clss;
	}

	void RefreshActorsInSideways();
	void NotifySizeChanged();
};

// 0x0 (0x338 - 0x338)
// Class SidewaysCodeRuntime.SidewaysVolume
class USidewaysVolume : public UGameplayVolume
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SidewaysVolume");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
