#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x3D0 - 0x3C8)
// BlueprintGeneratedClass BP_PG_PlayerState_Menu.BP_PG_PlayerState_Menu_C
class UBP_PG_PlayerState_Menu_C : public UPG_PlayerState_Menu
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x3C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_PG_PlayerState_Menu_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
