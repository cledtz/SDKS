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

// 0xA0 (0x3B0 - 0x310)
// Class MotherGameplayUI.AvocadoEaterHealthBarWidget
class UAvocadoEaterHealthBarWidget : public UFortHUDElementWidget
{
public:
	struct FEventMessageTag                      AttachedMessageTag;                                // 0x310(0x4)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7BBE[0x4];                                     // Fixing Size After Last Property..
	class UScriptStruct*                         AttachedMessageType;                               // 0x318(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FEventMessageTag                      DetachedMessageTag;                                // 0x320(0x4)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7BBF[0x4];                                     // Fixing Size After Last Property..
	class UScriptStruct*                         DetachedMessageType;                               // 0x328(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FEventMessageTag                      SetMarkerPositionMessageTag;                       // 0x330(0x4)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7BC0[0x4];                                     // Fixing Size After Last Property..
	class UScriptStruct*                         SetMarkerPositionMessageType;                      // 0x338(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  SetMarkerPositionMessagePropertyName;              // 0x340(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FEventMessageTag                      TargetDamagedMessageTag;                           // 0x344(0x4)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UScriptStruct*                         TargetDamagedMessageType;                          // 0x348(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7BC1[0x60];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AvocadoEaterHealthBarWidget");
		return Clss;
	}

	void OnTargetDamaged();
	void OnSetMarkerPosition(float MarkerPosition);
	void OnParasiteDetached();
	void OnParasiteAttached();
};

// 0x20 (0x340 - 0x320)
// Class MotherGameplayUI.FortGravyGoblinReticleExtensionWidget
class UFortGravyGoblinReticleExtensionWidget : public UFortWeaponReticleExtensionWidgetBase
{
public:
	uint8                                        Pad_7BC2[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortGravyGoblinReticleExtensionWidget");
		return Clss;
	}

	void OnItemInactivatable();
	void OnItemActivatable();
};

// 0x0 (0x320 - 0x320)
// Class MotherGameplayUI.FortLlamaRoasterReticleExtensionWidget
class UFortLlamaRoasterReticleExtensionWidget : public UFortWeaponReticleExtensionWidgetBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortLlamaRoasterReticleExtensionWidget");
		return Clss;
	}

};

// 0x60 (0x380 - 0x320)
// Class MotherGameplayUI.FortPaddleGingerReticleExtensionWidget
class UFortPaddleGingerReticleExtensionWidget : public UFortWeaponReticleExtensionWidgetBase
{
public:
	class UFortKeybindWidget*                    Keybind_ActivateAction;                            // 0x320(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortKeybindWidget*                    Keybind_CycleCategoryAction;                       // 0x328(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortKeybindWidget*                    Keybind_CyclePropAction;                           // 0x330(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7BC3[0x48];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPaddleGingerReticleExtensionWidget");
		return Clss;
	}

	void OnPropIndexChanged(class FText& CategoryText, int32 PropIndex, int32 MaxPropCount, int32 CategoryIndex, int32 MaxCategoryCount);
	void OnPropActivationChanged(bool Activated);
};

// 0x0 (0x320 - 0x320)
// Class MotherGameplayUI.FortReactorGradeReticleExtensionWidget
class UFortReactorGradeReticleExtensionWidget : public UFortWeaponReticleExtensionWidgetBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortReactorGradeReticleExtensionWidget");
		return Clss;
	}

	void OnUpdateChargeToMin(float ChargePercent);
	void OnUpdateChargeToAutoDischarge(float ChargePercent);
	void OnMinimumChargeReached();
};

// 0x28 (0xA8 - 0x80)
// Class MotherGameplayUI.FortMobileActionBBE_GravyGoblinRotate
class UFortMobileActionBBE_GravyGoblinRotate : public UFortMobileActionButtonBehaviorExtension
{
public:
	struct FGameplayTag                          GravyGoblinTag;                                    // 0x80(0x4)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7BC4[0x24];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMobileActionBBE_GravyGoblinRotate");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
