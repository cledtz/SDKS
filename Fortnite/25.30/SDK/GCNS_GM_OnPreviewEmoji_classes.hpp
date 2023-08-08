#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x240 - 0x240)
// BlueprintGeneratedClass GCNS_GM_OnPreviewEmoji.GCNS_GM_OnPreviewEmoji_C
class UGCNS_GM_OnPreviewEmoji_C : public UGameplayCueNotify_OnPreviewEmoji
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCNS_GM_OnPreviewEmoji_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
