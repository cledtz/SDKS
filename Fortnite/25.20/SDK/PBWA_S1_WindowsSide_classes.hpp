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

// 0x0 (0xD40 - 0xD40)
// BlueprintGeneratedClass PBWA_S1_WindowsSide.PBWA_S1_WindowsSide_C
class APBWA_S1_WindowsSide_C : public ABuildingWall
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PBWA_S1_WindowsSide_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
