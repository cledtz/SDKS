#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x968 - 0x968)
// BlueprintGeneratedClass GCNL_GeneralAccelerationFeedback.GCNL_GeneralAccelerationFeedback_C
class UGCNL_GeneralAccelerationFeedback_C : public UFortGameplayCueNotify_Loop
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
