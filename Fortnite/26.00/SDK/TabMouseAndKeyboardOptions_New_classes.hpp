#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x438 - 0x430)
// WidgetBlueprintGeneratedClass TabMouseAndKeyboardOptions_New.TabMouseAndKeyboardOptions_New_C
class UTabMouseAndKeyboardOptions_New_C : public UFortTabMouseAndKeyboardOptions_TempNew
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UTabMouseAndKeyboardOptions_New_C* GetDefaultObj();

	void SettingValueChanged(double Value);
	void CenterOnTab();
	void ExecuteUbergraph_TabMouseAndKeyboardOptions_New(int32 EntryPoint, double K2Node_CustomEvent_Value);
};

}


