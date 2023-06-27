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

// 0x8 (0x370 - 0x368)
// BlueprintGeneratedClass CMSLobbyDirector.CMSLobbyDirector_C
class ACMSLobbyDirector_C : public ADynamicBackgroundDirector
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x368(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CMSLobbyDirector_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
