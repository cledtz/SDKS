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

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Slot.UI_Menu_Solder_Weapon_Gun_Slot_C.Reset
struct UUI_Menu_Solder_Weapon_Gun_Slot_C_Reset_Params
{
public:
};

// 0xA4 (0xA4 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Slot.UI_Menu_Solder_Weapon_Gun_Slot_C.SetGunCurrentLevel
struct UUI_Menu_Solder_Weapon_Gun_Slot_C_SetGunCurrentLevel_Params
{
public:
	int32                                        Level;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        L_XpForNextLevel;                                  // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                L_Class;                                           // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                Temp_int_Variable;                                 // 0x10(0x10)(ReferenceParm)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x20(0x18)(None)
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue;               // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue_1;             // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue_2;             // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_ClassDynamicCast_AsItem_Gun_General;        // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56C[0x3];                                      // Fixing Size After Last Property 
	float                                        CallFunc_GetNumberField_ReturnValue;               // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasField_ReturnValue;                     // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56D[0x7];                                      // Fixing Size After Last Property 
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                Temp_int_Variable_1;                               // 0x78(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_571[0x6];                                      // Fixing Size After Last Property 
	double                                       CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetPercent_InPercent_ImplicitCast;        // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF0 (0xF0 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Slot.UI_Menu_Solder_Weapon_Gun_Slot_C.SetGunInfo
struct UUI_Menu_Solder_Weapon_Gun_Slot_C_SetGunInfo_Params
{
public:
	struct FST_ItemInfo                          WeaponInfo;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    L_ProgressCustomData;                              // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                L_GunClass;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                Temp_int_Variable;                                 // 0x20(0x10)(ReferenceParm)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_592[0x3];                                      // Fixing Size After Last Property 
	int32                                        Temp_int_Array_Index_Variable;                     // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_LowEntry_LocalVariable_Value__Object;       // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_595[0x3];                                      // Fixing Size After Last Property 
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_596[0x4];                                      // Fixing Size After Last Property 
	TArray<int32>                                Temp_int_Variable_1;                               // 0x50(0x10)(ReferenceParm)
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue;               // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue_1;             // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue_2;             // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                Temp_int_Variable_2;                               // 0x78(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Get_Item;                           // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_59A[0x4];                                      // Fixing Size After Last Property 
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xA2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_59F[0x1];                                      // Fixing Size After Last Property 
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetNumberField_ReturnValue;               // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Max_ReturnValue;                          // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A1[0x7];                                      // Fixing Size After Last Property 
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0xB8(0x18)(None)
	bool                                         CallFunc_HasField_ReturnValue;                     // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A3[0x7];                                      // Fixing Size After Last Property 
	class UClass*                                K2Node_ClassDynamicCast_AsItem_Gun_General;        // 0xD8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A4[0x7];                                      // Fixing Size After Last Property 
	double                                       CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast; // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Slot.UI_Menu_Solder_Weapon_Gun_Slot_C.OnLoaded_503BF7D84280753A745D10BCFB457159
struct UUI_Menu_Solder_Weapon_Gun_Slot_C_OnLoaded_503BF7D84280753A745D10BCFB457159_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Slot.UI_Menu_Solder_Weapon_Gun_Slot_C.OnSucceed_6B3CF19F4BF6A7EDC16A8990579E04C4
struct UUI_Menu_Solder_Weapon_Gun_Slot_C_OnSucceed_6B3CF19F4BF6A7EDC16A8990579E04C4_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Slot.UI_Menu_Solder_Weapon_Gun_Slot_C.PreConstruct
struct UUI_Menu_Solder_Weapon_Gun_Slot_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Slot.UI_Menu_Solder_Weapon_Gun_Slot_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
struct UUI_Menu_Solder_Weapon_Gun_Slot_C_BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Slot.UI_Menu_Solder_Weapon_Gun_Slot_C.Construct
struct UUI_Menu_Solder_Weapon_Gun_Slot_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Slot.UI_Menu_Solder_Weapon_Gun_Slot_C.BndEvt__UI_Menu_Solder_Weapon_Gun_Slot_Button_Customization_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UUI_Menu_Solder_Weapon_Gun_Slot_C_BndEvt__UI_Menu_Solder_Weapon_Gun_Slot_Button_Customization_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Slot.UI_Menu_Solder_Weapon_Gun_Slot_C.BndEvt__UI_Menu_Solder_Weapon_Gun_Slot_Button_Customization_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
struct UUI_Menu_Solder_Weapon_Gun_Slot_C_BndEvt__UI_Menu_Solder_Weapon_Gun_Slot_Button_Customization_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Slot.UI_Menu_Solder_Weapon_Gun_Slot_C.BndEvt__UI_Menu_Solder_Weapon_Gun_Slot_Button_Customization_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
struct UUI_Menu_Solder_Weapon_Gun_Slot_C_BndEvt__UI_Menu_Solder_Weapon_Gun_Slot_Button_Customization_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Slot.UI_Menu_Solder_Weapon_Gun_Slot_C.BndEvt__UI_Menu_Solder_Weapon_Gun_Slot_Button_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
struct UUI_Menu_Solder_Weapon_Gun_Slot_C_BndEvt__UI_Menu_Solder_Weapon_Gun_Slot_Button_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Slot.UI_Menu_Solder_Weapon_Gun_Slot_C.BndEvt__UI_Menu_Solder_Weapon_Gun_Slot_Button_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
struct UUI_Menu_Solder_Weapon_Gun_Slot_C_BndEvt__UI_Menu_Solder_Weapon_Gun_Slot_Button_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Slot.UI_Menu_Solder_Weapon_Gun_Slot_C.OnClickBack_Event
struct UUI_Menu_Solder_Weapon_Gun_Slot_C_OnClickBack_Event_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Slot.UI_Menu_Solder_Weapon_Gun_Slot_C.AsyncLoadIcon
struct UUI_Menu_Solder_Weapon_Gun_Slot_C_AsyncLoadIcon_Params
{
public:
	TSoftObjectPtr<class UTexture2D>             ItemIcon;                                          // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Slot.UI_Menu_Solder_Weapon_Gun_Slot_C.OnDark_Event
struct UUI_Menu_Solder_Weapon_Gun_Slot_C_OnDark_Event_Params
{
public:
};

// 0x170 (0x170 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Slot.UI_Menu_Solder_Weapon_Gun_Slot_C.ExecuteUbergraph_UI_Menu_Solder_Weapon_Gun_Slot
struct UUI_Menu_Solder_Weapon_Gun_Slot_C_ExecuteUbergraph_UI_Menu_Solder_Weapon_Gun_Slot_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5CF[0x4];                                      // Fixing Size After Last Property 
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_PlayerController_Menu_C*        K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu; // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5D3[0x3];                                      // Fixing Size After Last Property 
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x1C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5D4[0x4];                                      // Fixing Size After Last Property 
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable;                              // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D;                   // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGunSlot                          Temp_byte_Variable;                                // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5D6[0x6];                                      // Fixing Size After Last Property 
	class FText                                  Temp_text_Variable;                                // 0x50(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x68(0x18)(None)
	class UTask_Menu_CameraTransition_C*         CallFunc_CreateAction_ReturnValue;                 // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUI_CameraTransitions_DarkenScreen_C*  CallFunc_Create_ReturnValue;                       // 0x88(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x90(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0xA0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTask_Menu_GeneralMenuScreen_SetActivePage_C* CallFunc_CreateAction_ReturnValue_1;               // 0xB0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5DD[0x7];                                      // Fixing Size After Last Property 
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0xC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_Select_Default;                             // 0xC8(0x18)(None)
	class UBP_PG_PlayerController_Menu_C*        K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu_1; // 0xE0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5DF[0x7];                                      // Fixing Size After Last Property 
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0xF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0xF8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue_1;       // 0x100(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x108(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_2;        // 0x110(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_PlayerController_Menu_C*        K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu_2; // 0x118(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5E3[0x7];                                      // Fixing Size After Last Property 
	TSoftObjectPtr<class UTexture2D>             K2Node_CustomEvent_ItemIcon;                       // 0x128(0x30)(HasGetValueTypeHash)
	class FName                                  Temp_name_Variable;                                // 0x158(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x160(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Slot.UI_Menu_Solder_Weapon_Gun_Slot_C.OnHovered__DelegateSignature
struct UUI_Menu_Solder_Weapon_Gun_Slot_C_OnHovered__DelegateSignature_Params
{
public:
	class UUI_Menu_Solder_Weapon_Gun_Slot_C*     Slot;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHover;                                           // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Slot.UI_Menu_Solder_Weapon_Gun_Slot_C.OnSelected__DelegateSignature
struct UUI_Menu_Solder_Weapon_Gun_Slot_C_OnSelected__DelegateSignature_Params
{
public:
	class UUI_Menu_Solder_Weapon_Gun_Slot_C*     Slot;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


