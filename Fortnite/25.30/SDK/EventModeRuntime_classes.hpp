#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x180 (0x220 - 0xA0)
// Class EventModeRuntime.FortGameFrameworkComponent_EventMode
class UFortGameFrameworkComponent_EventMode : public UGameFrameworkComponent
{
public:
	uint8                                        Pad_4F13[0x60];                                    // Fixing Size After Last Property
	TSoftObjectPtr<class UFortWeaponItemDefinition> ActivatorAsset;                                    // 0x100(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FUIExtension>                  UIExtensions;                                      // 0x128(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TMap<struct FGameplayTag, TSoftClassPtr<class UWidget>> TaggedUIExtensions;                                // 0x138(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<struct FEventModeFocusActor>          FocusActors;                                       // 0x188(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_4F15[0x8];                                     // Fixing Size After Last Property
	class UInputComponent*                       InputComponent;                                    // 0x1A0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FEventModeWidgetCachedData>    CachedWidgetData;                                  // 0x1A8(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UActor>                 CurrentlyFocusedActor;                             // 0x1B8(0x28)(Transient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4F16[0x40];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortGameFrameworkComponent_EventMode");
		return Clss;
	}

	void OnPlayerPawnPossessed(class UPawn* PossessedPawn);
	void OnExitVehicle();
	void OnEnterVehicle();
	bool GetIsFocusing();
	bool GetIsFocusAvailable();
	bool GetIsEventModeActive();
};

// 0x0 (0x1210 - 0x1210)
// Class EventModeRuntime.FortWeapon_EventMode
class UFortWeapon_EventMode : public UFortWeapon
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortWeapon_EventMode");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
