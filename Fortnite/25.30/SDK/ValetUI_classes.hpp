#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x128 - 0x120)
// Class ValetUI.FortMobileActionButtonBehavior_ValetBoost
class UFortMobileActionButtonBehavior_ValetBoost : public UFortMobileActionButtonBehavior
{
public:
	uint8                                        Pad_399D[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMobileActionButtonBehavior_ValetBoost");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
