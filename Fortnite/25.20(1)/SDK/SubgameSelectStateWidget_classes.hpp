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

// 0x0 (0x418 - 0x418)
// WidgetBlueprintGeneratedClass SubgameSelectStateWidget.SubgameSelectStateWidget_C
class USubgameSelectStateWidget_C : public UStartUpUIStateWidget_SubgameSelect
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SubgameSelectStateWidget_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
