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

// 0x0 (0x80 - 0x80)
// BlueprintGeneratedClass WaterFireInteractHandler.WaterFireInteractHandler_C
class UWaterFireInteractHandler_C : public UFortCurieElementInteractWithElementHandler
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WaterFireInteractHandler_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
