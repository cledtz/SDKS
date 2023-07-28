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

// 0x8 (0x988 - 0x980)
// Class CowCatcherModCodeRuntime.CowCatcherBarricadeBase
class UCowCatcherBarricadeBase : public UBuildingGameplayActor
{
public:
	uint8                                        Pad_7E94[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CowCatcherBarricadeBase");
		return Clss;
	}

	void OnPlacementBlockedByPawnChanged(bool bBlockedByPawn);
	void BeginCheckingForTouchingPawns();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
