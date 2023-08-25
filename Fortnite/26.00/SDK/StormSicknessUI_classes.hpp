#pragma once

// Dumped with Dumper-7!


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
	uint8                                        Pad_47B9[0x40];                                    // Fixing Size After Last Property 
	struct FFortPrioritizedWidgetData            PrioritizationData;                                // 0x350(0x2)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_47BA[0x6];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UStormSicknessWarningWidgetBase* GetDefaultObj();

};

}


