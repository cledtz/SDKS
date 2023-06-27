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

// 0x0 (0xD38 - 0xD38)
// BlueprintGeneratedClass PBWA_S1_HalfWallDoorSide.PBWA_S1_HalfWallDoorSide_C
class APBWA_S1_HalfWallDoorSide_C : public ABuildingWall
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PBWA_S1_HalfWallDoorSide_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
