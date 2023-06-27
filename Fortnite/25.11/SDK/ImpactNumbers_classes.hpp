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

// 0x8 (0x620 - 0x618)
// BlueprintGeneratedClass ImpactNumbers.ImpactNumbers_C
class AImpactNumbers_C : public AFortDamageNumbersActor
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x618(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ImpactNumbers_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
