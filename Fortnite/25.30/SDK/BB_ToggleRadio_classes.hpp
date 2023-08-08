#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x130 - 0x130)
// BlueprintGeneratedClass BB_ToggleRadio.BB_ToggleRadio_C
class UBB_ToggleRadio_C : public UFortMobileActionButtonBehavior_ToggleRadio
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BB_ToggleRadio_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
