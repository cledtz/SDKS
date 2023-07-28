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

// 0x0 (0x1AA1 - 0x1AA1)
// WidgetBlueprintGeneratedClass UEFN_Button_Regular.UEFN_Button_Regular_C
class UUEFN_Button_Regular_C : public UWBP_UIKit_Button_Regular_C
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UEFN_Button_Regular_C");
		return Clss;
	}

	void SetTextFromCppCode(class FText InText);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
