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
// BlueprintGeneratedClass PBWA_W1_HalfWallDoorS.PBWA_W1_HalfWallDoorS_C
class APBWA_W1_HalfWallDoorS_C : public ABuildingWall
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PBWA_W1_HalfWallDoorS_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
