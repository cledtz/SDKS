#pragma once

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
	uint8                                        Pad_5208[0x88];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortHomerComponent");
		return Clss;
	}

	void HandlePawnEmoteStopped(class UFortItemDefinition* MontageItemDef, class UFortPawn* PawnEmoting);
	void HandleLocalPlayerEliminatedPlayer(class UFortPlayerStateAthena* Player);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
