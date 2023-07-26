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

// 0x48 (0x358 - 0x310)
// Class StormSicknessUI.StormSicknessWarningWidgetBase
class UStormSicknessWarningWidgetBase : public UFortHUDElementWidget
{
public:
	uint8                                        Pad_8586[0x40];                                    // Fixing Size After Last Property..
	struct FFortPrioritizedWidgetData            PrioritizationData;                                // 0x350(0x2)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_8587[0x6];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("StormSicknessWarningWidgetBase");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
