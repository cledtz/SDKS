#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0xAC (0xAC - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Selector_Item.UI_Menu_Solder_Weapon_Gun_Selector_Item_C.SetGunCurrentLevel
struct UUI_Menu_Solder_Weapon_Gun_Selector_Item_C_SetGunCurrentLevel_Params
{
public:
	int32                                        Level;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        L_XpForNextLevel;                                  // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                L_Class;                                           // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x10(0x18)(None)
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue;               // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue_1;             // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue_2;             // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    K2Node_LowEntry_LocalVariable_Value__Object;       // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetNumberField_ReturnValue;               // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AAD[0x4];                                     // Fixing Size After Last Property 
	class UClass*                                K2Node_ClassDynamicCast_AsItem_Gun_General;        // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasField_ReturnValue;                     // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AAF[0x6];                                     // Fixing Size After Last Property 
	TArray<int32>                                Temp_int_Variable;                                 // 0x60(0x10)(ReferenceParm)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                Temp_int_Variable_1;                               // 0x80(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AB4[0x6];                                     // Fixing Size After Last Property 
	double                                       CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetPercent_InPercent_ImplicitCast;        // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Selector_Item.UI_Menu_Solder_Weapon_Gun_Selector_Item_C.Reset
struct UUI_Menu_Solder_Weapon_Gun_Selector_Item_C_Reset_Params
{
public:
};

// 0x5 (0x5 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Selector_Item.UI_Menu_Solder_Weapon_Gun_Selector_Item_C.SetIsEquipped
struct UUI_Menu_Solder_Weapon_Gun_Selector_Item_C_SetIsEquipped_Params
{
public:
	bool                                         IsEquipped;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x100 (0x100 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Selector_Item.UI_Menu_Solder_Weapon_Gun_Selector_Item_C.ParseItemnfo
struct UUI_Menu_Solder_Weapon_Gun_Selector_Item_C_ParseItemnfo_Params
{
public:
	class UPlayFabJsonObject*                    L_ProgressCustomData;                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                L_GunClass;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               L_GeneralItemData;                                 // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AE9[0x3];                                     // Fixing Size After Last Property 
	int32                                        Temp_int_Array_Index_Variable;                     // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_LowEntry_LocalVariable_Value__Object;       // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AEA[0x7];                                     // Fixing Size After Last Property 
	TArray<int32>                                Temp_int_Variable;                                 // 0x30(0x10)(ReferenceParm)
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue;               // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue_1;             // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue_2;             // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasField_ReturnValue;                     // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AEE[0x7];                                     // Fixing Size After Last Property 
	TArray<int32>                                Temp_int_Variable_1;                               // 0x60(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Get_Item;                           // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AF0[0x4];                                     // Fixing Size After Last Property 
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetNumberField_ReturnValue;               // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AF2[0x3];                                     // Fixing Size After Last Property 
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Max_ReturnValue;                          // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AF3[0x4];                                     // Fixing Size After Last Property 
	TArray<int32>                                Temp_int_Variable_2;                               // 0x98(0x10)(ReferenceParm)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0xA8(0x18)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AF7[0x2];                                     // Fixing Size After Last Property 
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xD2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AFB[0x5];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue_3;             // 0xD8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetBoolField_ReturnValue;                 // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasField_ReturnValue_1;                   // 0xE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0xE2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AFD[0x5];                                     // Fixing Size After Last Property 
	class UClass*                                K2Node_ClassDynamicCast_AsItem_Gun_General;        // 0xE8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AFE[0x7];                                     // Fixing Size After Last Property 
	double                                       CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast; // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x49 (0x49 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Selector_Item.UI_Menu_Solder_Weapon_Gun_Selector_Item_C.OnPlayFabResponse_DC2AAA7343F70E47F780C6A0BD4D6CE7
struct UUI_Menu_Solder_Weapon_Gun_Selector_Item_C_OnPlayFabResponse_DC2AAA7343F70E47F780C6A0BD4D6CE7_Params
{
public:
	struct FPlayFabBaseModel                     Response;                                          // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Successful;                                        // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Selector_Item.UI_Menu_Solder_Weapon_Gun_Selector_Item_C.OnLoaded_E497B4384B301222317152BD4E72D8E6
struct UUI_Menu_Solder_Weapon_Gun_Selector_Item_C_OnLoaded_E497B4384B301222317152BD4E72D8E6_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Selector_Item.UI_Menu_Solder_Weapon_Gun_Selector_Item_C.BP_OnItemExpansionChanged
struct UUI_Menu_Solder_Weapon_Gun_Selector_Item_C_BP_OnItemExpansionChanged_Params
{
public:
	bool                                         bIsExpanded;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Selector_Item.UI_Menu_Solder_Weapon_Gun_Selector_Item_C.BP_OnItemSelectionChanged
struct UUI_Menu_Solder_Weapon_Gun_Selector_Item_C_BP_OnItemSelectionChanged_Params
{
public:
	bool                                         bIsSelected;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Selector_Item.UI_Menu_Solder_Weapon_Gun_Selector_Item_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UUI_Menu_Solder_Weapon_Gun_Selector_Item_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Selector_Item.UI_Menu_Solder_Weapon_Gun_Selector_Item_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UUI_Menu_Solder_Weapon_Gun_Selector_Item_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Selector_Item.UI_Menu_Solder_Weapon_Gun_Selector_Item_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
struct UUI_Menu_Solder_Weapon_Gun_Selector_Item_C_BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params
{
public:
};

// 0x68 (0x68 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Selector_Item.UI_Menu_Solder_Weapon_Gun_Selector_Item_C.ExecuteCloudScript_Success
struct UUI_Menu_Solder_Weapon_Gun_Selector_Item_C_ExecuteCloudScript_Success_Params
{
public:
	struct FClientExecuteCloudScriptResult       Result;                                            // 0x0(0x60)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x60(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Selector_Item.UI_Menu_Solder_Weapon_Gun_Selector_Item_C.ExecuteCloudScript_Failure
struct UUI_Menu_Solder_Weapon_Gun_Selector_Item_C_ExecuteCloudScript_Failure_Params
{
public:
	struct FPlayFabError                         Error;                                             // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Selector_Item.UI_Menu_Solder_Weapon_Gun_Selector_Item_C.OnListItemObjectSet
struct UUI_Menu_Solder_Weapon_Gun_Selector_Item_C_OnListItemObjectSet_Params
{
public:
	class UObject*                               ListItemObject;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Selector_Item.UI_Menu_Solder_Weapon_Gun_Selector_Item_C.BP_OnEntryReleased
struct UUI_Menu_Solder_Weapon_Gun_Selector_Item_C_BP_OnEntryReleased_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Selector_Item.UI_Menu_Solder_Weapon_Gun_Selector_Item_C.AsyncLoadIcon
struct UUI_Menu_Solder_Weapon_Gun_Selector_Item_C_AsyncLoadIcon_Params
{
public:
	TSoftObjectPtr<class UObject>                ItemIcon;                                          // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x3B9 (0x3B9 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Selector_Item.UI_Menu_Solder_Weapon_Gun_Selector_Item_C.ExecuteUbergraph_UI_Menu_Solder_Weapon_Gun_Selector_Item
struct UUI_Menu_Solder_Weapon_Gun_Selector_Item_C_ExecuteUbergraph_UI_Menu_Solder_Weapon_Gun_Selector_Item_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B6C[0x4];                                     // Fixing Size After Last Property 
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x20(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable;                              // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D;                   // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsExpanded;                          // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsSelected;                          // 0x4A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B70[0x5];                                     // Fixing Size After Last Property 
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_ConstructJsonObject_ReturnValue;          // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_PlayerController_Menu_C*        K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu; // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B73[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    K2Node_LowEntry_LocalVariable_Value__Object;       // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FClientExecuteCloudScriptRequest      K2Node_MakeStruct_ClientExecuteCloudScriptRequest; // 0x88(0x30)(None)
	class UPlayFabClientAPI*                     CallFunc_ExecuteCloudScript_ReturnValue;           // 0xB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B76[0x7];                                     // Fixing Size After Last Property 
	struct FPlayFabBaseModel                     Temp_struct_Variable;                              // 0xC8(0x40)(None)
	class UObject*                               Temp_object_Variable_1;                            // 0x108(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FClientExecuteCloudScriptResult       K2Node_CustomEvent_result;                         // 0x110(0x60)(None)
	class UObject*                               K2Node_CustomEvent_customData_1;                   // 0x170(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetBoolField_ReturnValue;                 // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B77[0x7];                                     // Fixing Size After Last Property 
	struct FPlayFabError                         K2Node_CustomEvent_error;                          // 0x180(0x38)(None)
	class UObject*                               K2Node_CustomEvent_customData;                     // 0x1B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x1C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x1C8(0x18)(None)
	class UBP_PG_PlayerController_Menu_C*        K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu_1; // 0x1E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x1E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B7B[0x7];                                     // Fixing Size After Last Property 
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x1F0(0x18)(None)
	bool                                         Temp_bool_Variable;                                // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B7D[0x7];                                     // Fixing Size After Last Property 
	struct FPlayFabBaseModel                     K2Node_CustomEvent_response;                       // 0x210(0x40)(None)
	class UObject*                               K2Node_CustomEvent_customData_2;                   // 0x250(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_successful;                     // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B7F[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CallFunc_ConstructJsonObject_ReturnValue_1;        // 0x260(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<enum class EModifiedData>             K2Node_MakeArray_Array;                            // 0x268(0x10)(ConstParm, ReferenceParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x278(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_2;        // 0x288(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPG_PlayerState_Base*                  K2Node_DynamicCast_AsPG_Player_State_Base;         // 0x290(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x298(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B82[0x7];                                     // Fixing Size After Last Property 
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_3;        // 0x2A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_PlayerController_Menu_C*        K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu_2; // 0x2A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x2B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B83[0x7];                                     // Fixing Size After Last Property 
	class UObject*                               K2Node_Event_ListItemObject;                       // 0x2B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_Menu_Solder_Weapon_Gun_Selector_Item_Entry_C* K2Node_DynamicCast_AsBP_Menu_Solder_Weapon_Gun_Selector_Item_Entry; // 0x2C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x2C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x2C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B85[0x6];                                     // Fixing Size After Last Property 
	class UUI_Menu_Solder_Weapon_Gun_Selector_EquippedGun_C* CallFunc_GetEquippedGunByItemClass_Gun;            // 0x2D0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUI_Menu_Solder_Weapon_Gun_Selector_EquippedGun_C* CallFunc_GetEquippedGunByItemClass_Gun_1;          // 0x2D8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ClassClass_ReturnValue;          // 0x2E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B89[0x7];                                     // Fixing Size After Last Property 
	class FString                                CallFunc_GetStringField_ReturnValue;               // 0x2E8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetStringField_ReturnValue_1;             // 0x2F8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_GetSlotByItemClass_Slot;                  // 0x308(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_ToLower_ReturnValue;                      // 0x310(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UUI_Menu_Solder_Weapon_Gun_Slot_C*     K2Node_DynamicCast_AsUI_Menu_Solder_Weapon_Gun_Slot; // 0x320(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0x328(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B8C[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue;               // 0x330(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_GetSlotByItemClass_Slot_1;                // 0x338(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x340(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B8E[0x7];                                     // Fixing Size After Last Property 
	class UUI_Menu_Solder_Weapon_Gun_Slot_C*     K2Node_DynamicCast_AsUI_Menu_Solder_Weapon_Gun_Slot_1; // 0x348(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_7;                     // 0x350(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B90[0x7];                                     // Fixing Size After Last Property 
	class UUI_Menu_Solder_Weapon_Gun_Slot_C*     K2Node_DynamicCast_AsUI_Menu_Solder_Weapon_Gun_Slot_2; // 0x358(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_8;                     // 0x360(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasField_ReturnValue;                     // 0x361(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasField_ReturnValue_1;                   // 0x362(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B93[0x5];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue_1;             // 0x368(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x370(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B95[0x7];                                     // Fixing Size After Last Property 
	TSoftObjectPtr<class UObject>                K2Node_CustomEvent_ItemIcon;                       // 0x378(0x30)(HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x3A8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x3B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


