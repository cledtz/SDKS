#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xC0 - 0xC0)
// BlueprintGeneratedClass GSC_MiniMapDataOverride.GSC_MiniMapDataOverride_C
class UGSC_MiniMapDataOverride_C : public UFortGameStateComponent_MiniMapDataOverride
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GSC_MiniMapDataOverride_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
