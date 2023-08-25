#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x550 - 0x548)
// WidgetBlueprintGeneratedClass ControllerActionsMenu.ControllerActionsMenu_C
class UControllerActionsMenu_C : public UFortControllerActionsMenu
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x548(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UControllerActionsMenu_C* GetDefaultObj();

	void BP_OnActivated();
	void ExecuteUbergraph_ControllerActionsMenu(int32 EntryPoint);
};

}


