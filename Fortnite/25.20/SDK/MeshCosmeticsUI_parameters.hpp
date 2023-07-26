#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// Function MeshCosmeticsUI.FortVariantRedirectorTile.HandleBoundaryNavigation
struct UFortVariantRedirectorTile_HandleBoundaryNavigation_Params
{
public:
	enum class EUINavigation                     InNavigation;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7CEF[0x7];                                     // Fixing Size After Last Property..
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MeshCosmeticsUI.FortVariantSprayCustomizer.BP_SetVariantEditorMode
struct UFortVariantSprayCustomizer_BP_SetVariantEditorMode_Params
{
public:
	bool                                         bIsLockerMode;                                     // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function MeshCosmeticsUI.FortVariantSprayCustomizer.BP_SetChannelSlotIcon
struct UFortVariantSprayCustomizer_BP_SetChannelSlotIcon_Params
{
public:
	TSoftObjectPtr<class UObject>                ChannelSlotIcon;                                   // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MeshCosmeticsUI.FortVariantSprayCustomizerSetting.HandleSliderValueChanged
struct UFortVariantSprayCustomizerSetting_HandleSliderValueChanged_Params
{
public:
	float                                        NormalizedValue;                                   // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MeshCosmeticsUI.FortVariantSprayCustomizerSetting.BP_OnSetConstraints
struct UFortVariantSprayCustomizerSetting_BP_OnSetConstraints_Params
{
public:
	struct FFloatRange                           Constraints;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MeshCosmeticsUI.FortVariantSprayCustomizerSetting.BP_OnChangeValue
struct UFortVariantSprayCustomizerSetting_BP_OnChangeValue_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NormalizedValue;                                   // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
