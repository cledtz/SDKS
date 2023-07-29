#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x750 - 0x750)
// BlueprintGeneratedClass BP_Item_Pistol_Colt1911.BP_Item_Pistol_Colt1911_C
class UBP_Item_Pistol_Colt1911_C : public UItem_Gun_Pistol
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_Item_Pistol_Colt1911_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
