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
// BlueprintGeneratedClass VictoryCrownGameStateComponent.VictoryCrownGameStateComponent_C
class UVictoryCrownGameStateComponent_C : public UFortGameStateComponent_VictoryCrowns
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VictoryCrownGameStateComponent_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
