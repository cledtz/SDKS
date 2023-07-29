#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x500 - 0x4F8)
// BlueprintGeneratedClass BP_PG_GameState_Game.BP_PG_GameState_Game_C
class UBP_PG_GameState_Game_C : public UPG_GameState_Game
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x4F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_PG_GameState_Game_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
