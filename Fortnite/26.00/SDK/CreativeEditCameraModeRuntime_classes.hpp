#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x398 - 0x368)
// Class CreativeEditCameraModeRuntime.FortCreativeEditCameraController
class UFortCreativeEditCameraController : public UFortFirstPersonCameraController
{
public:
	struct FCreativeOptionVariableBase           WantsToImmersiveEdit;                              // 0x368(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D6E[0x28];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortCreativeEditCameraController* GetDefaultObj();

	void ServerSetImmersiveEdit(bool bWantsToImmersiveEdit, bool bIsCreativeEditModeEnabled);
	void OnWantsToImmersiveEditChanged(class UFortCreativeOption* CreativeOption, uint8 IndexValue);
	void OnCreativeEditModeChanged(bool bIsCreativeEditModeEnabled);
	void HandleWeaponEquipped(class UFortWeapon* NewWeapon, class UFortWeapon* PrevWeapon);
};

}


