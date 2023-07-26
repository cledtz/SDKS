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

// 0x8 (0x2B8 - 0x2B0)
// BlueprintGeneratedClass FrontEndSettingsBP.FrontEndSettingsBP_C
class AFrontEndSettingsBP_C : public AFrontEndSettings
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FrontEndSettingsBP_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
