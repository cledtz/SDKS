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

// 0x0 (0x90 - 0x90)
// BlueprintGeneratedClass BBE_AugmentShoot.BBE_AugmentShoot_C
class UBBE_AugmentShoot_C : public UFortMobileActionBBE_AugmentShoot
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BBE_AugmentShoot_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
