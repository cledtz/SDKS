#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x400 - 0x3E8)
// Class MotdOverride.MotdWidgetBase
class UMotdWidgetBase : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_2346[0x18];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMotdWidgetBase* GetDefaultObj();

};

}


