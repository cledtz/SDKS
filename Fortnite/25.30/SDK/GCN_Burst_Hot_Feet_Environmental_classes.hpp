#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x211 - 0x210)
// BlueprintGeneratedClass GCN_Burst_Hot_Feet_Environmental.GCN_Burst_Hot_Feet_Environmental_C
class UGCN_Burst_Hot_Feet_Environmental_C : public UFortGameplayCueNotify_Burst
{
public:
	bool                                         NewVar_0;                                          // 0x210(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCN_Burst_Hot_Feet_Environmental_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
