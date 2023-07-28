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

// 0x20 (0xC0 - 0xA0)
// BlueprintGeneratedClass VictoryCrownsKillFeedExtension.VictoryCrownsKillFeedExtension_C
class UVictoryCrownsKillFeedExtension_C : public UFortGameStateComponent_KillFeedExtension
{
public:
	class FString                                OverrideVictimStyle;                               // 0xA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                OverrideKillerStyle;                               // 0xB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VictoryCrownsKillFeedExtension_C");
		return Clss;
	}

	class FString CheckForOverrideVictimStyle(class UFortPlayerStateAthena* VictimPlayerStateAthena, const class FString& VictimStyle, bool CallFunc_IsValid_ReturnValue, class UFortGameStateAthena* CallFunc_GetGameStateAthena_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UFortGameStateComponent_VictoryCrowns* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsCrownBearer_ReturnValue);
	class FString CheckForOverrideKillerStyle(class UFortPlayerStateAthena* KillerPlayerStateAthena, const class FString& KillerStyle, bool CallFunc_IsValid_ReturnValue, class UFortGameStateAthena* CallFunc_GetGameStateAthena_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UFortGameStateComponent_VictoryCrowns* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsCrownBearer_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
