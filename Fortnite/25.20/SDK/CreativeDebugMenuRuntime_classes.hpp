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

// 0x110 (0x1B8 - 0xA8)
// Class CreativeDebugMenuRuntime.FortControllerComponent_CreativeDebugger
class UFortControllerComponent_CreativeDebugger : public UFortControllerComponent
{
public:
	uint8                                        Pad_37D2[0x8];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        DebuggerEnabledByDataRegistry;                     // 0xB0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        VerseDebugDrawEnabledByDataRegistry;               // 0xD8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        NavigationMeshEnabledByDataRegistry;               // 0x100(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        NavigationPathsEnabledByDataRegistry;              // 0x128(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        GhostModeEnabledByDataRegistry;                    // 0x150(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        InvincibilityEnabledByDataRegistry;                // 0x178(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortControllerComponent_AIDebugger> AIDebuggerClass;                                   // 0x1A0(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_37D3[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortControllerComponent_CreativeDebugger");
		return Clss;
	}

	void OnPlayerSpawned(class AFortPlayerController* PC);
	void OnMutatorUpdated();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
