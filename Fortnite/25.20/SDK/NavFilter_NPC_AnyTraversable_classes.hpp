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

// 0x0 (0x48 - 0x48)
// BlueprintGeneratedClass NavFilter_NPC_AnyTraversable.NavFilter_NPC_AnyTraversable_C
class UNavFilter_NPC_AnyTraversable_C : public UNavigationQueryFilter
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavFilter_NPC_AnyTraversable_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
