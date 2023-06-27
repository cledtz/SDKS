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

// 0x2 (0x2 - 0x0)
// Function WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.UpdateCanOpenSelector
struct UWBP_Augment_SelectionTimer_C_UpdateCanOpenSelector_Params
{
public:
	bool                                         InPlayerAbleToOpenSelector;                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAugmentSelectionAvailable_IsEnabled;    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.OnHideTimerEventFinished
struct UWBP_Augment_SelectionTimer_C_OnHideTimerEventFinished_Params
{
public:
};

// 0x34 (0x34 - 0x0)
// Function WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.StartHideTimerEvent
struct UWBP_Augment_SelectionTimer_C_StartHideTimerEvent_Params
{
public:
	bool                                         CallFunc_IsUsingTouch_ReturnValue;                 // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMobileGame_ReturnValue;                 // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A05D[0x1];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_GetValueAsInteger_ReturnValue;            // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A05E[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x18(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A05F[0x4];                                     // Fixing Size After Last Property..
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x28(0x8)(NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE0 (0xE0 - 0x0)
// Function WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.OnNumPendingAugmentsToGrantUpdated
struct UWBP_Augment_SelectionTimer_C_OnNumPendingAugmentsToGrantUpdated_Params
{
public:
	int32                                        NumPendingAugmentsToGrant;                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DidValueIncrease;                                  // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A060[0x2];                                     // Fixing Size After Last Property..
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)()
	bool                                         CallFunc_InEditorOrPIE_ReturnValue;                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A061[0x7];                                     // Fixing Size After Last Property..
	class UAudioComponent*                       CallFunc_SpawnSound2D_ReturnValue;                 // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A062[0x6];                                     // Fixing Size After Last Property..
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue;              // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x40(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x90(0x10)(ReferenceParm)
	bool                                         CallFunc_IsAugmentSelectionAvailable_IsEnabled;    // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A063[0x7];                                     // Fixing Size After Last Property..
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xA8(0x18)()
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_2;             // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A064[0x6];                                     // Fixing Size After Last Property..
	class FText                                  K2Node_Select_Default;                             // 0xC8(0x18)()
};

// 0x198 (0x198 - 0x0)
// Function WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.SetMobileVisuals
struct UWBP_Augment_SelectionTimer_C_SetMobileVisuals_Params
{
public:
	float                                        Temp_real_Variable;                                // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A065[0x3];                                     // Fixing Size After Last Property..
	struct FVector2D                             Temp_struct_Variable;                              // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Temp_struct_Variable_1;                            // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A066[0x7];                                     // Fixing Size After Last Property..
	struct FVector2D                             Temp_struct_Variable_2;                            // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Temp_struct_Variable_3;                            // 0x40(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A067[0x7];                                     // Fixing Size After Last Property..
	struct FVector2D                             Temp_struct_Variable_4;                            // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Temp_struct_Variable_5;                            // 0x68(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_real_Variable_1;                              // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x7D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A068[0x2];                                     // Fixing Size After Last Property..
	class UOverlaySlot*                          CallFunc_SlotAsOverlaySlot_ReturnValue;            // 0x80(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A069[0x7];                                     // Fixing Size After Last Property..
	class UOverlaySlot*                          CallFunc_SlotAsOverlaySlot_ReturnValue_1;          // 0x90(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_4;                              // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x9A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_5;                              // 0x9B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A06A[0x4];                                     // Fixing Size After Last Property..
	class UOverlaySlot*                          CallFunc_SlotAsOverlaySlot_ReturnValue_2;          // 0xA0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                    CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0xA8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_4;                              // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasChild_ReturnValue;                     // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_5;                              // 0xB2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A06B[0x5];                                     // Fixing Size After Last Property..
	class UOverlaySlot*                          CallFunc_AddChildToOverlay_ReturnValue;            // 0xB8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_6;                              // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_6;                              // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_7;                              // 0xC2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_7;                              // 0xC3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A06C[0x4];                                     // Fixing Size After Last Property..
	struct FVector2D                             Temp_struct_Variable_6;                            // 0xC8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasChild_ReturnValue_1;                   // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xD9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A06D[0x6];                                     // Fixing Size After Last Property..
	class UHorizontalBoxSlot*                    CallFunc_AddChildToHorizontalBox_ReturnValue_1;    // 0xE0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Temp_struct_Variable_7;                            // 0xE8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_8;                              // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_8;                              // 0xF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_9;                              // 0xFA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_9;                              // 0xFB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVerticalAlignment                Temp_byte_Variable_10;                             // 0xFC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMobileGame_ReturnValue;                 // 0xFD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVerticalAlignment                Temp_byte_Variable_11;                             // 0xFE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A06E[0x1];                                     // Fixing Size After Last Property..
	class UHorizontalBoxSlot*                    CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;      // 0x100(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_10;                             // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A06F[0x3];                                     // Fixing Size After Last Property..
	float                                        Temp_real_Variable_2;                              // 0x10C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOverlaySlot*                          CallFunc_AddChildToOverlay_ReturnValue_1;          // 0x110(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_real_Variable_3;                              // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_11;                             // 0x11C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingTouch_ReturnValue;                 // 0x11D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x11E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A070[0x1];                                     // Fixing Size After Last Property..
	float                                        K2Node_Select_Default;                             // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVerticalAlignment                K2Node_Select_Default_1;                           // 0x124(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A071[0x3];                                     // Fixing Size After Last Property..
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x128(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default_2;                           // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A072[0x7];                                     // Fixing Size After Last Property..
	struct FVector2D                             K2Node_Select_Default_3;                           // 0x140(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_4;                           // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_5;                           // 0x151(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_6;                           // 0x152(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_7;                           // 0x153(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Select_Default_8;                           // 0x154(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             K2Node_Select_Default_9;                           // 0x158(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_MakeStruct_Margin_1;                        // 0x168(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                             K2Node_Select_Default_10;                          // 0x178(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             K2Node_Select_Default_11;                          // 0x188(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.PlayReminderAnimation
struct UWBP_Augment_SelectionTimer_C_PlayReminderAnimation_Params
{
public:
	bool                                         CallFunc_InEditorOrPIE_ReturnValue;                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A073[0x7];                                     // Fixing Size After Last Property..
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// Function WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.UpdateVisibility
struct UWBP_Augment_SelectionTimer_C_UpdateVisibility_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsCountdownVisible_ReturnValue;           // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMobileGame_ReturnValue;                 // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingTouch_ReturnValue;                 // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.OnAugmentReadyFadeInFinished
struct UWBP_Augment_SelectionTimer_C_OnAugmentReadyFadeInFinished_Params
{
public:
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.ResetAugmentReadyStateAnims
struct UWBP_Augment_SelectionTimer_C_ResetAugmentReadyStateAnims_Params
{
public:
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetEndTime_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A074[0x4];                                     // Fixing Size After Last Property..
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.ForceAugmentReadyState
struct UWBP_Augment_SelectionTimer_C_ForceAugmentReadyState_Params
{
public:
	bool                                         AugmentSelectionAvailable;                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_InEditorOrPIE_ReturnValue;                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A075[0x6];                                     // Fixing Size After Last Property..
	class UAudioComponent*                       CallFunc_SpawnSound2D_ReturnValue;                 // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.SetAugmentReadyState
struct UWBP_Augment_SelectionTimer_C_SetAugmentReadyState_Params
{
public:
	bool                                         AugmentSelectionAvailable;                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMobileGame_ReturnValue;                 // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingTouch_ReturnValue;                 // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x10(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A076[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.IsAugmentSelectionAvailable
struct UWBP_Augment_SelectionTimer_C_IsAugmentSelectionAvailable_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.OnLoaded_7B3490DB452F1589FC28169C2C321233
struct UWBP_Augment_SelectionTimer_C_OnLoaded_7B3490DB452F1589FC28169C2C321233_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.OnInitialized
struct UWBP_Augment_SelectionTimer_C_OnInitialized_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.OnAugmentGrantingTimersFinishedForMatch
struct UWBP_Augment_SelectionTimer_C_OnAugmentGrantingTimersFinishedForMatch_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.PreConstruct
struct UWBP_Augment_SelectionTimer_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.OnHUDElementVisibilityChanged
struct UWBP_Augment_SelectionTimer_C_OnHUDElementVisibilityChanged_Params
{
public:
	struct FGameplayTagContainer                 HiddenElementTagContainer;                         // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.OnPlayerChangedBuildMode
struct UWBP_Augment_SelectionTimer_C_OnPlayerChangedBuildMode_Params
{
public:
	bool                                         bEnteredBuildMode;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.Construct
struct UWBP_Augment_SelectionTimer_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.OnCountdownActivated
struct UWBP_Augment_SelectionTimer_C_OnCountdownActivated_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.OnCanSelectAugmentChanged
struct UWBP_Augment_SelectionTimer_C_OnCanSelectAugmentChanged_Params
{
public:
	bool                                         bCanSelectAugment;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF0 (0xF0 - 0x0)
// Function WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.ExecuteUbergraph_WBP_Augment_SelectionTimer
struct UWBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A077[0x4];                                     // Fixing Size After Last Property..
	class UObject*                               Temp_object_Variable;                              // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPaperSprite*                          K2Node_DynamicCast_AsPaper_Sprite;                 // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A078[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x1C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAugmentSelectionAvailable_IsEnabled;    // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A079[0x7];                                     // Fixing Size After Last Property..
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanSelectAugment_ReturnValue;             // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A07A[0x6];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 K2Node_Event_HiddenElementTagContainer;            // 0x40(0x20)(ConstParm)
	bool                                         CallFunc_HasTag_ReturnValue;                       // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasTag_ReturnValue_1;                     // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A07B[0x5];                                     // Fixing Size After Last Property..
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A07C[0x7];                                     // Fixing Size After Last Property..
	class APawn*                                 CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bEnteredBuildMode;              // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSkydiving_ReturnValue;                  // 0x8A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDBNO_ReturnValue;                       // 0x8B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x8C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x8D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A07D[0x2];                                     // Fixing Size After Last Property..
	class UWidget*                               K2Node_Select_Default;                             // 0x90(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A07E[0x7];                                     // Fixing Size After Last Property..
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A07F[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xB4(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMobileGame_ReturnValue;                 // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A080[0x7];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput; // 0xC8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0xD8(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bCanSelectAugment;                    // 0xE4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A081[0x3];                                     // Fixing Size After Last Property..
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0xE8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
