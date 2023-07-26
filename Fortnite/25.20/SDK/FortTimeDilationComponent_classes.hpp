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

// 0x0 (0xD8 - 0xD8)
// BlueprintGeneratedClass FortTimeDilationComponent.FortTimeDilationComponent_C
class UFortTimeDilationComponent_C : public UFortGameStateComponent_TimeDilation
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortTimeDilationComponent_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
