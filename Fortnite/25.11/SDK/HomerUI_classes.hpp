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

// 0x88 (0x128 - 0xA0)
// Class HomerUI.FortHomerComponent
class UFortHomerComponent : public UActorComponent
{
public:
	uint8                                        Pad_8274[0x88];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortHomerComponent");
		return Clss;
	}

	void HandlePawnEmoteStopped(class UFortItemDefinition* MontageItemDef, class AFortPawn* PawnEmoting);
	void HandleLocalPlayerEliminatedPlayer(class AFortPlayerStateAthena* Player);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
