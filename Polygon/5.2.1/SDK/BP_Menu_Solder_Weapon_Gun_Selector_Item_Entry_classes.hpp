#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x40 - 0x28)
// BlueprintGeneratedClass BP_Menu_Solder_Weapon_Gun_Selector_Item_Entry.BP_Menu_Solder_Weapon_Gun_Selector_Item_Entry_C
class UBP_Menu_Solder_Weapon_Gun_Selector_Item_Entry_C : public UObject
{
public:
	struct FST_ItemInfo                          GunInfo;                                           // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UUI_Menu_Solder_Weapon_Gun_Selector_Item_C* ItemRef;                                           // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_Menu_Solder_Weapon_Gun_Selector_Item_Entry_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
