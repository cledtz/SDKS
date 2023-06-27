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

// 0x8 (0x1AA0 - 0x1A98)
// WidgetBlueprintGeneratedClass WBP_UIKit_Button_Loud.WBP_UIKit_Button_Loud_C
class UWBP_UIKit_Button_Loud_C : public UWBP_UIKit_ButtonCTA_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1A98(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WBP_UIKit_Button_Loud_C");
		return Clss;
	}

	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_UIKit_Button_Loud(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
