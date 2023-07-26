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
// BlueprintGeneratedClass FireSelfInteractHandler.FireSelfInteractHandler_C
class UFireSelfInteractHandler_C : public UFortCurieElementInteractWithSameElementHandlerFire
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FireSelfInteractHandler_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
