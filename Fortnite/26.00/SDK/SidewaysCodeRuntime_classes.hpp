#pragma once

// Dumped with Dumper-7!


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

	static class UClass* StaticClass();
	static class USidewaysCheatManager* GetDefaultObj();

	void SetSidewaysState(enum class ESidewaysState SidewaysState);
};

// 0x8 (0xB0 - 0xA8)
// Class SidewaysCodeRuntime.FortControllerComponent_Sideways
class UFortControllerComponent_Sideways : public UFortControllerComponent
{
public:
	struct FTimerHandle                          UpdateClosestSidewaysHandle;                       // 0xA8(0x8)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortControllerComponent_Sideways* GetDefaultObj();

};

// 0x50 (0x148 - 0xF8)
// Class SidewaysCodeRuntime.PlayspaceComponent_SidewaysDimension
class UPlayspaceComponent_SidewaysDimension : public UFortPlayspaceComponent
{
public:
	uint8                                        Pad_38C3[0x48];                                    // Fixing Size After Last Property 
	class UAthenaAIServiceLoot*                  CachedAIServiceLoot;                               // 0x140(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UPlayspaceComponent_SidewaysDimension* GetDefaultObj();

};

// 0x0 (0xF8 - 0xF8)
// Class SidewaysCodeRuntime.PlayspaceComponent_SidewaysEncounter
class UPlayspaceComponent_SidewaysEncounter : public UFortPlayspaceComponent
{
public:

	static class UClass* StaticClass();
	static class UPlayspaceComponent_SidewaysEncounter* GetDefaultObj();

};

// 0x28 (0xC8 - 0xA0)
// Class SidewaysCodeRuntime.SidewaysStateComponent
class USidewaysStateComponent : public UGameFrameworkComponent
{
public:
	enum class ESidewaysState                    SidewaysState;                                     // 0xA0(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_38E2[0x7];                                     // Fixing Size After Last Property 
	class USidewaysPlayspace*                    SidewaysPlayspace;                                 // 0xA8(0x8)(Net, ZeroConstructor, RepNotify, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnSidewaysStateChangedDelegate;                    // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_38E3[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USidewaysStateComponent* GetDefaultObj();

	void SetSidewaysState(enum class ESidewaysState NewState, class USidewaysPlayspace* NewSidewaysPlayspace);
	void OnRep_SidewaysState(enum class ESidewaysState LastSidewaysState);
	void OnRep_SidewaysPlayspace(class USidewaysPlayspace* NewSidewaysPlayspace);
	void HandleSidewaysStateChanged(class USidewaysPlayspace* NewSidewaysPlayspace, enum class ESidewaysState OldState, enum class ESidewaysState NewState);
	enum class ESidewaysState GetSidewaysState();
};

// 0x48 (0x110 - 0xC8)
// Class SidewaysCodeRuntime.SidewaysStateComponent_Player
class USidewaysStateComponent_Player : public USidewaysStateComponent
{
public:
	TSoftObjectPtr<class UMaterialParameterCollection> SidewaysMaterialParameterCollection;               // 0xC8(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  SidewaysBubbleLocationParameterNamesForLocalPlayers[0x2]; // 0xE8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  SidewaysBubbleRadiusParameterNamesForLocalPlayers[0x2]; // 0xF0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        ExtraCorruptionRadius;                             // 0xF8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MinRadiusToHaveAnyCorruption;                      // 0xFC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxRadiusForScalingExtraCorruptionRadius;          // 0x100(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        UpdateFrequency;                                   // 0x104(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_38EA[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USidewaysStateComponent_Player* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class SidewaysCodeRuntime.SidewaysFeatureAction_HoldGlobalData
class USidewaysFeatureAction_HoldGlobalData : public UGameFeatureAction
{
public:
	TSoftObjectPtr<class UMaterialParameterCollection> SidewaysMaterialParameterCollection;               // 0x28(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  SidewaysBubbleLocationParameterNamesForLocalPlayers[0x2]; // 0x48(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  SidewaysBubbleRadiusParameterNamesForLocalPlayers[0x2]; // 0x50(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USidewaysFeatureAction_HoldGlobalData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class SidewaysCodeRuntime.SidewaysLibrary
class USidewaysLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USidewaysLibrary* GetDefaultObj();

	class USidewaysStateComponent* GetSidewaysStateComponent(class UActor* Owner);
};

// 0x0 (0x698 - 0x698)
// Class SidewaysCodeRuntime.SidewaysPlayspace
class USidewaysPlayspace : public UFortPlayspace
{
public:

	static class UClass* StaticClass();
	static class USidewaysPlayspace* GetDefaultObj();

	void RefreshActorsInSideways();
	void NotifySizeChanged();
};

// 0x0 (0x330 - 0x330)
// Class SidewaysCodeRuntime.SidewaysVolume
class USidewaysVolume : public UGameplayVolume
{
public:

	static class UClass* StaticClass();
	static class USidewaysVolume* GetDefaultObj();

};

}


