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
// Class STW_MapPickupDisplayRuntime.STW_PlayerControllerComponent_MapPickupDisplay
class USTW_PlayerControllerComponent_MapPickupDisplay : public UActorComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("STW_PlayerControllerComponent_MapPickupDisplay");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
