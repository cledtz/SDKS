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

// 0x0 (0x960 - 0x960)
// BlueprintGeneratedClass GCNL_GeneralAccelerationFeedback.GCNL_GeneralAccelerationFeedback_C
class AGCNL_GeneralAccelerationFeedback_C : public AFortGameplayCueNotify_Loop
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCNL_GeneralAccelerationFeedback_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
