#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x228 - 0x228)
// BlueprintGeneratedClass GCNS_GM_OnDisplayEmoji.GCNS_GM_OnDisplayEmoji_C
class UGCNS_GM_OnDisplayEmoji_C : public UGameplayCueNotify_OnDisplayEmoji
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCNS_GM_OnDisplayEmoji_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
