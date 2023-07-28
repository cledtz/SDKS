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

// 0x30 (0x30 - 0x0)
// Function WBP_Augments_InteractionIndicatorInfo.WBP_Augments_InteractionIndicatorInfo_C.SetAugmentInfo
struct UWBP_Augments_InteractionIndicatorInfo_C_SetAugmentInfo_Params
{
public:
	class UFortPlayerAugmentItemDefinition*      InAugmentItemDefinition;                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetHUDEffectImage_ReturnValue;            // 0x8(0x28)(UObjectWrapper, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Augments_InteractionIndicatorInfo.WBP_Augments_InteractionIndicatorInfo_C.OnLoaded_2A5949E64DAB0291DE31D1B67C0E8EB9
struct UWBP_Augments_InteractionIndicatorInfo_C_OnLoaded_2A5949E64DAB0291DE31D1B67C0E8EB9_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function WBP_Augments_InteractionIndicatorInfo.WBP_Augments_InteractionIndicatorInfo_C.SetAugmentIcon
struct UWBP_Augments_InteractionIndicatorInfo_C_SetAugmentIcon_Params
{
public:
	TSoftObjectPtr<class UObject>                Asset;                                             // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x64 (0x64 - 0x0)
// Function WBP_Augments_InteractionIndicatorInfo.WBP_Augments_InteractionIndicatorInfo_C.ExecuteUbergraph_WBP_Augments_InteractionIndicatorInfo
struct UWBP_Augments_InteractionIndicatorInfo_C_ExecuteUbergraph_WBP_Augments_InteractionIndicatorInfo_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9DE5[0x4];                                     // Fixing Size After Last Property..
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable;                              // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D;                   // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9DE6[0x7];                                     // Fixing Size After Last Property..
	TSoftObjectPtr<class UObject>                K2Node_CustomEvent_Asset;                          // 0x28(0x28)(HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x58(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
