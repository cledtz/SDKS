#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x360 - 0x358)
// BlueprintGeneratedClass BP_Item_Skin_AK47_02.BP_Item_Skin_AK47_02_C
class UBP_Item_Skin_AK47_02_C : public UItem_Module_Skin
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x358(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_Item_Skin_AK47_02_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
