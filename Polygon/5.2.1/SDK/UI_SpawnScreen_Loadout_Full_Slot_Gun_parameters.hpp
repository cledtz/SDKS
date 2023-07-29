#pragma once

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

// 0x19 (0x19 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_Slot_Gun.UI_SpawnScreen_Loadout_Full_Slot_Gun_C.GetLoadoutUI
struct UUI_SpawnScreen_Loadout_Full_Slot_Gun_C_GetLoadoutUI_Params
{
public:
	class UUI_SpawnScreen_Loadout_C*             UI_SpawnScreen_Loadout;                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_PlayerController_Game_C*        K2Node_DynamicCast_AsBP_PG_Player_Controller_Game; // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x34 (0x34 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_Slot_Gun.UI_SpawnScreen_Loadout_Full_Slot_Gun_C.SetIsSelected
struct UUI_SpawnScreen_Loadout_Full_Slot_Gun_C_SetIsSelected_Params
{
public:
	bool                                         IsSelected;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3477[0x2];                                     // Fixing Size After Last Property
	struct FLinearColor                          Temp_struct_Variable;                              // 0x4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_1;                            // 0x14(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select_Default;                             // 0x24(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_Slot_Gun.UI_SpawnScreen_Loadout_Full_Slot_Gun_C.OnLoaded_BCFD5D964A014C0D8CF5FBB6EF869C26
struct UUI_SpawnScreen_Loadout_Full_Slot_Gun_C_OnLoaded_BCFD5D964A014C0D8CF5FBB6EF869C26_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_Slot_Gun.UI_SpawnScreen_Loadout_Full_Slot_Gun_C.PreConstruct
struct UUI_SpawnScreen_Loadout_Full_Slot_Gun_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_Slot_Gun.UI_SpawnScreen_Loadout_Full_Slot_Gun_C.BndEvt__UI_SpawnScreen_Loadout_Full_Slot_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UUI_SpawnScreen_Loadout_Full_Slot_Gun_C_BndEvt__UI_SpawnScreen_Loadout_Full_Slot_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_Slot_Gun.UI_SpawnScreen_Loadout_Full_Slot_Gun_C.BndEvt__UI_SpawnScreen_Loadout_Full_Slot_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UUI_SpawnScreen_Loadout_Full_Slot_Gun_C_BndEvt__UI_SpawnScreen_Loadout_Full_Slot_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_Slot_Gun.UI_SpawnScreen_Loadout_Full_Slot_Gun_C.BndEvt__UI_SpawnScreen_Loadout_Full_Slot_Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
struct UUI_SpawnScreen_Loadout_Full_Slot_Gun_C_BndEvt__UI_SpawnScreen_Loadout_Full_Slot_Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_Slot_Gun.UI_SpawnScreen_Loadout_Full_Slot_Gun_C.BndEvt__UI_SpawnScreen_Loadout_Full_Slot_Button_CustomizationSlot_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UUI_SpawnScreen_Loadout_Full_Slot_Gun_C_BndEvt__UI_SpawnScreen_Loadout_Full_Slot_Button_CustomizationSlot_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_Slot_Gun.UI_SpawnScreen_Loadout_Full_Slot_Gun_C.SetSlotInfo
struct UUI_SpawnScreen_Loadout_Full_Slot_Gun_C_SetSlotInfo_Params
{
public:
	class UClass*                                ItemClass;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    ItemJson;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0xC8 (0xC8 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_Slot_Gun.UI_SpawnScreen_Loadout_Full_Slot_Gun_C.ExecuteUbergraph_UI_SpawnScreen_Loadout_Full_Slot_Gun
struct UUI_SpawnScreen_Loadout_Full_Slot_Gun_C_ExecuteUbergraph_UI_SpawnScreen_Loadout_Full_Slot_Gun_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable;                              // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3488[0x7];                                     // Fixing Size After Last Property
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D;                   // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3489[0x6];                                     // Fixing Size After Last Property
	double                                       CallFunc_BreakVector2D_X;                          // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_348A[0x4];                                     // Fixing Size After Last Property
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue_1;       // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUI_SpawnScreen_Loadout_C*             CallFunc_GetLoadoutUI_UI_SpawnScreen_Loadout;      // 0x68(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUI_SpawnScreen_Loadout_C*             CallFunc_GetLoadoutUI_UI_SpawnScreen_Loadout_1;    // 0x70(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUI_SpawnScreen_Loadout_C*             CallFunc_GetLoadoutUI_UI_SpawnScreen_Loadout_2;    // 0x78(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_CustomEvent_ItemClass;                      // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    K2Node_CustomEvent_ItemJson;                       // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue_2;       // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_ClassDynamicCast_AsItem_Gun_General;        // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_348B[0x3];                                     // Fixing Size After Last Property
	int32                                        Temp_int_Variable_2;                               // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGunShootingType                  Temp_byte_Variable;                                // 0xA9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_348C[0x2];                                     // Fixing Size After Last Property
	int32                                        K2Node_Select_Default;                             // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xB0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast; // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast; // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_Slot_Gun.UI_SpawnScreen_Loadout_Full_Slot_Gun_C.OnPressed__DelegateSignature
struct UUI_SpawnScreen_Loadout_Full_Slot_Gun_C_OnPressed__DelegateSignature_Params
{
public:
	class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C* Slot;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_Slot_Gun.UI_SpawnScreen_Loadout_Full_Slot_Gun_C.OnHovered__DelegateSignature
struct UUI_SpawnScreen_Loadout_Full_Slot_Gun_C_OnHovered__DelegateSignature_Params
{
public:
	class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C* Slot;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHover;                                           // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
