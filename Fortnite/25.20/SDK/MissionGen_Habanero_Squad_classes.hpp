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
// BlueprintGeneratedClass MissionGen_Habanero_Squad.MissionGen_Habanero_Squad_C
class UMissionGen_Habanero_Squad_C : public UFortMissionGenerator
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MissionGen_Habanero_Squad_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
