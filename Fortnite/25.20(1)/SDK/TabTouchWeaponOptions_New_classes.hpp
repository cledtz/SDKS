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

// 0x8 (0x448 - 0x440)
// WidgetBlueprintGeneratedClass TabTouchWeaponOptions_New.TabTouchWeaponOptions_New_C
class UTabTouchWeaponOptions_New_C : public UFortTabTouchWeaponOptions_TempNew
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x440(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TabTouchWeaponOptions_New_C");
		return Clss;
	}

	void SettingValueChanged(double Value);
	void CenterOnTab();
	void ExecuteUbergraph_TabTouchWeaponOptions_New(int32 EntryPoint, double K2Node_CustomEvent_Value);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
