#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x850 - 0x850)
// BlueprintGeneratedClass MissionGen_NoBuildBR_Solo.MissionGen_NoBuildBR_Solo_C
class UMissionGen_NoBuildBR_Solo_C : public UFortMissionGenerator
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MissionGen_NoBuildBR_Solo_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif