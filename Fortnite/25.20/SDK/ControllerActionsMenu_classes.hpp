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

// 0x8 (0x560 - 0x558)
// WidgetBlueprintGeneratedClass ControllerActionsMenu.ControllerActionsMenu_C
class UControllerActionsMenu_C : public UFortControllerActionsMenu
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x558(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControllerActionsMenu_C");
		return Clss;
	}

	void BP_OnActivated();
	void ExecuteUbergraph_ControllerActionsMenu(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
