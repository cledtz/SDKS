#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x108 - 0x108)
// BlueprintGeneratedClass BP_PlayerStateCustomFeedMessages.BP_PlayerStateCustomFeedMessages_C
class UBP_PlayerStateCustomFeedMessages_C : public UFortPlayerStateComponent_CustomFeedMessage
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_PlayerStateCustomFeedMessages_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
