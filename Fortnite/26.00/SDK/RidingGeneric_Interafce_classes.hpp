#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass RidingGeneric_Interafce.RidingGeneric_Interafce_C
class URidingGeneric_Interafce_C : public UInterface
{
public:

	static class UClass* StaticClass();
	static class URidingGeneric_Interafce_C* GetDefaultObj();

	void ToggleRidingAlternative();
	void GetRidingInfoFromTarget(double* JumpAttachGroundHeightMin, double* JumpAttachGroundHeightBuffer, bool* UsesAltRidingMessage);
};

}


