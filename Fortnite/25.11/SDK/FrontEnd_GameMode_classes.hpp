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

// 0x8 (0x7A8 - 0x7A0)
// BlueprintGeneratedClass FrontEnd_GameMode.FrontEnd_GameMode_C
class AFrontEnd_GameMode_C : public AFortGameModeFrontEnd
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x7A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

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
