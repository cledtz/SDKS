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

// 0x0 (0x850 - 0x850)
// BlueprintGeneratedClass MissionGen_AthenaSquad.MissionGen_AthenaSquad_C
class UMissionGen_AthenaSquad_C : public UFortMissionGenerator
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MissionGen_AthenaSquad_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
