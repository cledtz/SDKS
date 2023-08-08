#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xF8 - 0xF8)
// BlueprintGeneratedClass Athena_Grenade_Base_WhipTracker.Athena_Grenade_Base_WhipTracker_C
class UAthena_Grenade_Base_WhipTracker_C : public UBulletWhipTrackerComponent_Default_C
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Athena_Grenade_Base_WhipTracker_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
