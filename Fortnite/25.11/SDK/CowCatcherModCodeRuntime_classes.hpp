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

// 0x8 (0x980 - 0x978)
// Class CowCatcherModCodeRuntime.CowCatcherBarricadeBase
class ACowCatcherBarricadeBase : public ABuildingGameplayActor
{
public:
	uint8                                        Pad_7F42[0x8];                                     // Fixing Size Of Struct..

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
