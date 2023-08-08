#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x318 - 0x2E8)
// Class CreativeEditCameraModeRuntime.FortCreativeEditCameraController
class UFortCreativeEditCameraController : public UFortFirstPersonCameraController
{
public:
	struct FCreativeOptionVariableBase           WantsToImmersiveEdit;                              // 0x2E8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4337[0x28];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCreativeEditCameraController");
		return Clss;
	}

	void ServerSetImmersiveEdit(bool bWantsToImmersiveEdit, bool bIsCreativeEditModeEnabled);
	void OnWantsToImmersiveEditChanged(class UFortCreativeOption* CreativeOption, uint8 IndexValue);
	void OnCreativeEditModeChanged(bool bIsCreativeEditModeEnabled);
	void HandleWeaponEquipped(class UFortWeapon* NewWeapon, class UFortWeapon* PrevWeapon);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
