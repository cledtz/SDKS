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

// 0x0 (0x80 - 0x80)
// BlueprintGeneratedClass BBE_TankTargetADS.BBE_TankTargetADS_C
class UBBE_TankTargetADS_C : public UFortMobileActionButtonBehaviorExtension
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BBE_TankTargetADS_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
