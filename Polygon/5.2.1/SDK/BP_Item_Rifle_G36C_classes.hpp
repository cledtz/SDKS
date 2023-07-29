#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x758 - 0x750)
// BlueprintGeneratedClass BP_Item_Rifle_G36C.BP_Item_Rifle_G36C_C
class UBP_Item_Rifle_G36C_C : public UItem_Gun_Rifle
{
public:
	class UStaticMeshComponent*                  Sight;                                             // 0x750(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_Item_Rifle_G36C_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
