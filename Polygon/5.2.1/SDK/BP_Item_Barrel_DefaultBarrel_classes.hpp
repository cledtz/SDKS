#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x348 - 0x348)
// BlueprintGeneratedClass BP_Item_Barrel_DefaultBarrel.BP_Item_Barrel_DefaultBarrel_C
class UBP_Item_Barrel_DefaultBarrel_C : public UItem_Module_Barrel
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_Item_Barrel_DefaultBarrel_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif