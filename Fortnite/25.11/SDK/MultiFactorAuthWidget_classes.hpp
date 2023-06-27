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

// 0x0 (0x578 - 0x578)
// WidgetBlueprintGeneratedClass MultiFactorAuthWidget.MultiFactorAuthWidget_C
class UMultiFactorAuthWidget_C : public UFortMultiFactorAuthWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MultiFactorAuthWidget_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
