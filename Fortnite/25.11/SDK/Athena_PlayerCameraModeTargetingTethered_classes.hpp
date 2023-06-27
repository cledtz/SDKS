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

// 0x0 (0x1B30 - 0x1B30)
// BlueprintGeneratedClass Athena_PlayerCameraModeTargetingTethered.Athena_PlayerCameraModeTargetingTethered_C
class UAthena_PlayerCameraModeTargetingTethered_C : public UAthena_PlayerCameraModeRangedTargeting_C
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Athena_PlayerCameraModeTargetingTethered_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
