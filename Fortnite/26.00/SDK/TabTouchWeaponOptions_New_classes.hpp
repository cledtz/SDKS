#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x438 - 0x430)
// WidgetBlueprintGeneratedClass TabTouchWeaponOptions_New.TabTouchWeaponOptions_New_C
class UTabTouchWeaponOptions_New_C : public UFortTabTouchWeaponOptions_TempNew
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UTabTouchWeaponOptions_New_C* GetDefaultObj();

	void SettingValueChanged(double Value);
	void CenterOnTab();
	void ExecuteUbergraph_TabTouchWeaponOptions_New(int32 EntryPoint, double K2Node_CustomEvent_Value);
};

}


