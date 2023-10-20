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

// 0x98 (0x98 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Gunsmith.UI_Menu_Solder_Weapon_Gun_Gunsmith_C.Set Gun Current Level
struct UUI_Menu_Solder_Weapon_Gun_Gunsmith_C_Set_Gun_Current_Level_Params
{
public:
	int32                                        Level;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        L_XpForNextLevel;                                  // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                L_Class;                                           // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                Temp_int_Variable;                                 // 0x10(0x10)(ReferenceParm)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x20(0x18)(None)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_1;             // 0x48(0x18)(None)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                Temp_int_Variable_1;                               // 0x68(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1205[0x6];                                     // Fixing Size After Last Property 
	class UClass*                                K2Node_ClassDynamicCast_AsItem_Gun_General;        // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1206[0x3];                                     // Fixing Size After Last Property 
	float                                        CallFunc_SetPercent_InPercent_ImplicitCast;        // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Gunsmith.UI_Menu_Solder_Weapon_Gun_Gunsmith_C.ParseGunProgress
struct UUI_Menu_Solder_Weapon_Gun_Gunsmith_C_ParseGunProgress_Params
{
public:
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x0(0x18)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_1;             // 0x18(0x18)(None)
};

// 0x160 (0x160 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Gunsmith.UI_Menu_Solder_Weapon_Gun_Gunsmith_C.OnUpdateGunData
struct UUI_Menu_Solder_Weapon_Gun_Gunsmith_C_OnUpdateGunData_Params
{
public:
	class UPlayFabJsonObject*                    L_ProgressDataContainer_CustomData;                // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                L_GunClass;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1233[0x2];                                     // Fixing Size After Last Property 
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_LowEntry_LocalVariable_Value__Object;       // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_LoadAsset_Blocking_ReturnValue;           // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGunModulesInfo*                       K2Node_DynamicCast_AsGun_Modules_Info;             // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1238[0x7];                                     // Fixing Size After Last Property 
	struct FGunModuleInfo                        CallFunc_Array_Get_Item;                           // 0x48(0x40)(ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x8C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_123A[0x3];                                     // Fixing Size After Last Property 
	class UClass*                                K2Node_ClassDynamicCast_AsItem_Gun_General;        // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable_1;        // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_123B[0x2];                                     // Fixing Size After Last Property 
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_123D[0x3];                                     // Fixing Size After Last Property 
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0xA9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_123E[0x2];                                     // Fixing Size After Last Property 
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_123F[0x3];                                     // Fixing Size After Last Property 
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                Temp_int_Variable;                                 // 0xB8(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Get_Item_1;                         // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xD1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0xD2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1242[0x1];                                     // Fixing Size After Last Property 
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                        CallFunc_GetFieldNames_ReturnValue;                // 0xD8(0x10)(ReferenceParm)
	class FString                                CallFunc_Array_Get_Item_2;                         // 0xE8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0xFC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0xFD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1245[0x2];                                     // Fixing Size After Last Property 
	TArray<int32>                                Temp_int_Variable_1;                               // 0x100(0x10)(ReferenceParm)
	TArray<int32>                                Temp_int_Variable_2;                               // 0x110(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x124(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1248[0x3];                                     // Fixing Size After Last Property 
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x12C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x12D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x12E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_124A[0x1];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue;               // 0x130(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue_1;             // 0x138(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetNumberField_ReturnValue;               // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_124C[0x4];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue_2;             // 0x148(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Round_ReturnValue;                        // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasField_ReturnValue;                     // 0x154(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_124E[0x3];                                     // Fixing Size After Last Property 
	double                                       CallFunc_Round_A_ImplicitCast;                     // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3A (0x3A - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Gunsmith.UI_Menu_Solder_Weapon_Gun_Gunsmith_C.SetGunInfo
struct UUI_Menu_Solder_Weapon_Gun_Gunsmith_C_SetGunInfo_Params
{
public:
	struct FST_ItemInfo                          GunRef;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_ClassDynamicCast_AsItem_Gun_General;        // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1257[0x7];                                     // Fixing Size After Last Property 
	class UObject*                               CallFunc_LoadAsset_Blocking_ReturnValue;           // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGunModulesInfo*                       K2Node_DynamicCast_AsGun_Modules_Info;             // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1258[0x3];                                     // Fixing Size After Last Property 
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Gunsmith.UI_Menu_Solder_Weapon_Gun_Gunsmith_C.Reset
struct UUI_Menu_Solder_Weapon_Gun_Gunsmith_C_Reset_Params
{
public:
};

// 0x3C (0x3C - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Gunsmith.UI_Menu_Solder_Weapon_Gun_Gunsmith_C.Tick
struct UUI_Menu_Solder_Weapon_Gun_Gunsmith_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Gunsmith.UI_Menu_Solder_Weapon_Gun_Gunsmith_C.OnUpdatePlayerCombinedInfo_Event
struct UUI_Menu_Solder_Weapon_Gun_Gunsmith_C_OnUpdatePlayerCombinedInfo_Event_Params
{
public:
	TArray<enum class EModifiedData>             ModifiedData;                                      // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                CustomString;                                      // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Gunsmith.UI_Menu_Solder_Weapon_Gun_Gunsmith_C.OnWidgetActivate
struct UUI_Menu_Solder_Weapon_Gun_Gunsmith_C_OnWidgetActivate_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Gunsmith.UI_Menu_Solder_Weapon_Gun_Gunsmith_C.OnWidgetDeactivate
struct UUI_Menu_Solder_Weapon_Gun_Gunsmith_C_OnWidgetDeactivate_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Gunsmith.UI_Menu_Solder_Weapon_Gun_Gunsmith_C.BndEvt__UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Button_ResetRotation_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UUI_Menu_Solder_Weapon_Gun_Gunsmith_C_BndEvt__UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Button_ResetRotation_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Gunsmith.UI_Menu_Solder_Weapon_Gun_Gunsmith_C.BndEvt__UI_Menu_Solder_Weapon_Gun_Gunsmith_UI_Button_Attachments_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
struct UUI_Menu_Solder_Weapon_Gun_Gunsmith_C_BndEvt__UI_Menu_Solder_Weapon_Gun_Gunsmith_UI_Button_Attachments_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature_Params
{
public:
	class UUI_Button_C*                          Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Gunsmith.UI_Menu_Solder_Weapon_Gun_Gunsmith_C.BndEvt__UI_Menu_Solder_Weapon_Gun_Gunsmith_UI_Button_Progress_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature
struct UUI_Menu_Solder_Weapon_Gun_Gunsmith_C_BndEvt__UI_Menu_Solder_Weapon_Gun_Gunsmith_UI_Button_Progress_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature_Params
{
public:
	class UUI_Button_C*                          Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Gunsmith.UI_Menu_Solder_Weapon_Gun_Gunsmith_C.BndEvt__UI_Menu_Solder_Weapon_Gun_Gunsmith_Button_HideUI_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
struct UUI_Menu_Solder_Weapon_Gun_Gunsmith_C_BndEvt__UI_Menu_Solder_Weapon_Gun_Gunsmith_Button_HideUI_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Gunsmith.UI_Menu_Solder_Weapon_Gun_Gunsmith_C.BndEvt__UI_Menu_Solder_Weapon_Gun_Gunsmith_Button_HideUI_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
struct UUI_Menu_Solder_Weapon_Gun_Gunsmith_C_BndEvt__UI_Menu_Solder_Weapon_Gun_Gunsmith_Button_HideUI_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Gunsmith.UI_Menu_Solder_Weapon_Gun_Gunsmith_C.BndEvt__UI_Menu_Solder_Weapon_Gun_Gunsmith_Button_HideUI_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
struct UUI_Menu_Solder_Weapon_Gun_Gunsmith_C_BndEvt__UI_Menu_Solder_Weapon_Gun_Gunsmith_Button_HideUI_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Gunsmith.UI_Menu_Solder_Weapon_Gun_Gunsmith_C.BndEvt__UI_Menu_Solder_Weapon_Gun_Gunsmith_UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_K2Node_ComponentBoundEvent_0_OnClickBack__DelegateSignature
struct UUI_Menu_Solder_Weapon_Gun_Gunsmith_C_BndEvt__UI_Menu_Solder_Weapon_Gun_Gunsmith_UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_K2Node_ComponentBoundEvent_0_OnClickBack__DelegateSignature_Params
{
public:
};

// 0x170 (0x170 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Gunsmith.UI_Menu_Solder_Weapon_Gun_Gunsmith_C.ExecuteUbergraph_UI_Menu_Solder_Weapon_Gun_Gunsmith
struct UUI_Menu_Solder_Weapon_Gun_Gunsmith_C_ExecuteUbergraph_UI_Menu_Solder_Weapon_Gun_Gunsmith_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1295[0x3];                                     // Fixing Size After Last Property 
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x1F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x20(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_129A[0x3];                                     // Fixing Size After Last Property 
	class UPlayerState*                          CallFunc_GetPlayerState_ReturnValue;               // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPG_PlayerState_Menu*                  K2Node_DynamicCast_AsPG_Player_State_Menu;         // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_129C[0x6];                                     // Fixing Size After Last Property 
	class UClass*                                K2Node_ClassDynamicCast_AsItem_Gun_General;        // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_129D[0x7];                                     // Fixing Size After Last Property 
	class UPlayerState*                          CallFunc_GetPlayerState_ReturnValue_1;             // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_129E[0x7];                                     // Fixing Size After Last Property 
	class UPG_PlayerState_Menu*                  K2Node_DynamicCast_AsPG_Player_State_Menu_1;       // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12A0[0x7];                                     // Fixing Size After Last Property 
	class UActor*                                K2Node_Select_Default_1;                           // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInspectManagerComponent*              CallFunc_AddComponentByClass_ReturnValue;          // 0xB0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_4;                              // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12A1[0x7];                                     // Fixing Size After Last Property 
	class UPlayerState*                          CallFunc_GetPlayerState_ReturnValue_2;             // 0xC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPG_PlayerState_Menu*                  K2Node_DynamicCast_AsPG_Player_State_Menu_2;       // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12A4[0x7];                                     // Fixing Size After Last Property 
	class UClass*                                K2Node_ClassDynamicCast_AsItem_Gun_General_1;      // 0xD8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess_1;                // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0xE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12A5[0x6];                                     // Fixing Size After Last Property 
	TArray<enum class EModifiedData>             K2Node_CustomEvent_ModifiedData;                   // 0xE8(0x10)(ConstParm, ReferenceParm)
	class FString                                K2Node_CustomEvent_CustomString;                   // 0xF8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UActor*                                K2Node_Select_Default_2;                           // 0x108(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInspectManagerComponent*              CallFunc_GetComponentByClass_ReturnValue;          // 0x110(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPlayerState*                          CallFunc_GetPlayerState_ReturnValue_3;             // 0x118(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPG_PlayerState_Menu*                  K2Node_DynamicCast_AsPG_Player_State_Menu_3;       // 0x120(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12A6[0x7];                                     // Fixing Size After Last Property 
	class UClass*                                K2Node_ClassDynamicCast_AsItem_Gun_General_2;      // 0x130(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess_2;                // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x139(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12A7[0x6];                                     // Fixing Size After Last Property 
	class UUI_Button_C*                          K2Node_ComponentBoundEvent_Button_1;               // 0x140(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UActor*                                K2Node_Select_Default_3;                           // 0x148(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInspectManagerComponent*              CallFunc_GetComponentByClass_ReturnValue_1;        // 0x150(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUI_Button_C*                          K2Node_ComponentBoundEvent_Button;                 // 0x158(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x160(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x168(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Gunsmith.UI_Menu_Solder_Weapon_Gun_Gunsmith_C.OnClickBack__DelegateSignature
struct UUI_Menu_Solder_Weapon_Gun_Gunsmith_C_OnClickBack__DelegateSignature_Params
{
public:
};

}
}


