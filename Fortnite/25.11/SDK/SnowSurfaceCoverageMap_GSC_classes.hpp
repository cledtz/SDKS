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

// 0x0 (0x110 - 0x110)
// BlueprintGeneratedClass SnowSurfaceCoverageMap_GSC.SnowSurfaceCoverageMap_GSC_C
class USnowSurfaceCoverageMap_GSC_C : public UFortGameStateComponent_SurfaceCoverageMap
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SnowSurfaceCoverageMap_GSC_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
