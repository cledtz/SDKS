#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x980 - 0x978)
// Class CowCatcherModCodeRuntime.CowCatcherBarricadeBase
class UCowCatcherBarricadeBase : public UBuildingGameplayActor
{
public:
	uint8                                        Pad_13A8[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UCowCatcherBarricadeBase* GetDefaultObj();

	void OnPlacementBlockedByPawnChanged(bool bBlockedByPawn);
	void BeginCheckingForTouchingPawns();
};

}


