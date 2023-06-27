#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0xD0 - 0x0)
// ScriptStruct CloakGameplay.FortGameCueCloakModifier
struct FFortGameCueCloakModifier
{
public:
	struct FScalableFloat                        bCanBeEnabled;                                     // 0x0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        VisibilityModifierMultiplicative;                  // 0x28(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        VisibilityModifierAdditive;                        // 0x50(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AlphaTimeToEnabled;                                // 0x78(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AlphaTimeToDisabled;                               // 0xA0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        bCurrentlyEnabled : 1;                             // Mask: 0x1, PropSize: 0x10xC8(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_19C : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_1808[0x3];                                     // Fixing Size After Last Property..
	float                                        CurrentAlpha;                                      // 0xCC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
