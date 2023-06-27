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

// 0x0 (0x3B0 - 0x3B0)
// WidgetBlueprintGeneratedClass VideoPlayerWidget.VideoPlayerWidget_C
class UVideoPlayerWidget_C : public UFortVideoPlayerWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VideoPlayerWidget_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
