#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x170 (0x210 - 0xA0)
// Class EventModeRuntime.FortGameFrameworkComponent_EventMode
class UFortGameFrameworkComponent_EventMode : public UGameFrameworkComponent
{
public:
	uint8                                        Pad_B8A[0x60];                                     // Fixing Size After Last Property 
	TSoftObjectPtr<class UFortWeaponItemDefinition> ActivatorAsset;                                    // 0x100(0x20)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FUIExtension>                  UIExtensions;                                      // 0x120(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TMap<struct FGameplayTag, TSoftClassPtr<class UWidget>> TaggedUIExtensions;                                // 0x130(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<struct FEventModeFocusActor>          FocusActors;                                       // 0x180(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_B8E[0x8];                                      // Fixing Size After Last Property 
	class UInputComponent*                       InputComponent;                                    // 0x198(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FEventModeWidgetCachedData>    CachedWidgetData;                                  // 0x1A0(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UActor>                 CurrentlyFocusedActor;                             // 0x1B0(0x20)(Transient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_B92[0x40];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortGameFrameworkComponent_EventMode* GetDefaultObj();

	void OnPlayerPawnPossessed(class UPawn* PossessedPawn);
	void OnExitVehicle();
	void OnEnterVehicle();
	bool GetIsFocusing();
	bool GetIsFocusAvailable();
	bool GetIsEventModeActive();
};

// 0x0 (0x11F8 - 0x11F8)
// Class EventModeRuntime.FortWeapon_EventMode
class UFortWeapon_EventMode : public UFortWeapon
{
public:

	static class UClass* StaticClass();
	static class UFortWeapon_EventMode* GetDefaultObj();

};

}


