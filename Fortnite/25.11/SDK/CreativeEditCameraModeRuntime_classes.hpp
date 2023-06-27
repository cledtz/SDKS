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

// 0x30 (0x308 - 0x2D8)
// Class CreativeEditCameraModeRuntime.FortCreativeEditCameraController
class AFortCreativeEditCameraController : public AFortFirstPersonCameraController
{
public:
	struct FCreativeOptionVariableBase           WantsToImmersiveEdit;                              // 0x2D8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_8042[0x28];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCreativeEditCameraController");
		return Clss;
	}

	void ServerSetImmersiveEdit(bool bWantsToImmersiveEdit, bool bIsCreativeEditModeEnabled);
	void OnWantsToImmersiveEditChanged(class UFortCreativeOption* CreativeOption, uint8 IndexValue);
	void OnCreativeEditModeChanged(bool bIsCreativeEditModeEnabled);
	void HandleWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
