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

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass WaterSelfInteractHandler.WaterSelfInteractHandler_C
class UWaterSelfInteractHandler_C : public UFortCurieElementInteractWithSameElementHandler
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WaterSelfInteractHandler_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
