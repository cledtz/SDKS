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

// 0x0 (0x210 - 0x210)
// BlueprintGeneratedClass GCN_Burst_PlayerImpact.GCN_Burst_PlayerImpact_C
class UGCN_Burst_PlayerImpact_C : public UFortGameplayCueNotify_Burst
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCN_Burst_PlayerImpact_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
