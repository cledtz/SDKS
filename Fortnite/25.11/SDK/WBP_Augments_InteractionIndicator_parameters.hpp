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

// 0x39 (0x39 - 0x0)
// Function WBP_Augments_InteractionIndicator.WBP_Augments_InteractionIndicator_C.GetInteractText
struct UWBP_Augments_InteractionIndicator_C_GetInteractText_Params
{
public:
	class FText                                  InteractText;                                      // 0x0(0x18)(Parm, OutParm)
	bool                                         Result;                                            // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A086[0x7];                                     // Fixing Size After Last Property..
	class FText                                  CallFunc_GetInteractText_InteractText;             // 0x20(0x18)()
	bool                                         CallFunc_GetInteractText_Result;                   // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_Augments_InteractionIndicator.WBP_Augments_InteractionIndicator_C.GetShowErrorsUsingDefaultWidget
struct UWBP_Augments_InteractionIndicator_C_GetShowErrorsUsingDefaultWidget_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Augments_InteractionIndicator.WBP_Augments_InteractionIndicator_C.OnLoaded_2E66591C48A272F0C04BFB94B42C632F
struct UWBP_Augments_InteractionIndicator_C_OnLoaded_2E66591C48A272F0C04BFB94B42C632F_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Augments_InteractionIndicator.WBP_Augments_InteractionIndicator_C.OnContextInfoUpdated
struct UWBP_Augments_InteractionIndicator_C_OnContextInfoUpdated_Params
{
public:
	class UFortInteractContextInfo*              ContextInfo;                                       // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function WBP_Augments_InteractionIndicator.WBP_Augments_InteractionIndicator_C.SetAugmentIcon
struct UWBP_Augments_InteractionIndicator_C_SetAugmentIcon_Params
{
public:
	TSoftObjectPtr<class UObject>                Asset;                                             // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x169 (0x169 - 0x0)
// Function WBP_Augments_InteractionIndicator.WBP_Augments_InteractionIndicator_C.ExecuteUbergraph_WBP_Augments_InteractionIndicator
struct UWBP_Augments_InteractionIndicator_C_ExecuteUbergraph_WBP_Augments_InteractionIndicator_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A087[0x4];                                     // Fixing Size After Last Property..
	class UFortInteractContextInfo*              K2Node_Event_ContextInfo;                          // 0x8(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A088[0x7];                                     // Fixing Size After Last Property..
	class AFortPickup*                           K2Node_DynamicCast_AsFort_Pickup;                  // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A089[0x7];                                     // Fixing Size After Last Property..
	TSoftObjectPtr<class UObject>                K2Node_CustomEvent_Asset;                          // 0x30(0x28)(HasGetValueTypeHash)
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A08A[0x7];                                     // Fixing Size After Last Property..
	class UFortItemDefinition*                   CallFunc_GetItemDefinitionBP_ReturnValue;          // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerAugmentItemDefinition*      K2Node_DynamicCast_AsFort_Player_Augment_Item_Definition; // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortRarity                       CallFunc_GetRarity_ReturnValue;                    // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A08B[0x6];                                     // Fixing Size After Last Property..
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A08C[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayEventData                    K2Node_MakeStruct_GameplayEventData;               // 0x90(0xB0)()
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x140(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A08D[0x4];                                     // Fixing Size After Last Property..
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x150(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable;                              // 0x158(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D;                   // 0x160(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
