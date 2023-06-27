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

// 0x0 (0xA0 - 0xA0)
// BlueprintGeneratedClass WaterMaterialInteractHandler.WaterMaterialInteractHandler_C
class UWaterMaterialInteractHandler_C : public UFortCurieElementInteractWithMaterialHandlerWater
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WaterMaterialInteractHandler_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
