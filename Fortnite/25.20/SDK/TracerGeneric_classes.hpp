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

// 0x0 (0x370 - 0x370)
// BlueprintGeneratedClass TracerGeneric.TracerGeneric_C
class ATracerGeneric_C : public AFortTracerBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TracerGeneric_C");
		return Clss;
	}

	void UserConstructionScript(const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
