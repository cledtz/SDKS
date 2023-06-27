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

// 0x28 (0x2B0 - 0x288)
// BlueprintGeneratedClass B_AthenaAlwaysLoadedContentHack.B_AthenaAlwaysLoadedContentHack_C
class AB_AthenaAlwaysLoadedContentHack_C : public AActor
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x288(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UObject*>                       HardObjectList;                                    // 0x290(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UClass*>                        HardClassList;                                     // 0x2A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_AthenaAlwaysLoadedContentHack_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
