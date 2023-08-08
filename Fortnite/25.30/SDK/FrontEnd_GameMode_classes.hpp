#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x7B8 - 0x7B0)
// BlueprintGeneratedClass FrontEnd_GameMode.FrontEnd_GameMode_C
class UFrontEnd_GameMode_C : public UFortGameModeFrontEnd
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x7B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FrontEnd_GameMode_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
