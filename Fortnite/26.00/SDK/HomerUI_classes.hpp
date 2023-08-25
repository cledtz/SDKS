#pragma once

// Dumped with Dumper-7!


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
	uint8                                        Pad_4448[0x88];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortHomerComponent* GetDefaultObj();

	void HandlePawnEmoteStopped(class UFortItemDefinition* MontageItemDef, class UFortPawn* PawnEmoting);
	void HandleLocalPlayerEliminatedPlayer(class UFortPlayerStateAthena* Player);
};

}


