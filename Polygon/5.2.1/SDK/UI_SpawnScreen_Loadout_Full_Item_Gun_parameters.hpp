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

// 0x5 (0x5 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_Item_Gun.UI_SpawnScreen_Loadout_Full_Item_Gun_C.SetIsEquipped
struct UUI_SpawnScreen_Loadout_Full_Item_Gun_C_SetIsEquipped_Params
{
public:
	bool                                         IsEquipped;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_Item_Gun.UI_SpawnScreen_Loadout_Full_Item_Gun_C.BndEvt__UI_SpawnScreen_Loadout_Full_Item_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UUI_SpawnScreen_Loadout_Full_Item_Gun_C_BndEvt__UI_SpawnScreen_Loadout_Full_Item_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_Item_Gun.UI_SpawnScreen_Loadout_Full_Item_Gun_C.BndEvt__UI_SpawnScreen_Loadout_Full_Item_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UUI_SpawnScreen_Loadout_Full_Item_Gun_C_BndEvt__UI_SpawnScreen_Loadout_Full_Item_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_Item_Gun.UI_SpawnScreen_Loadout_Full_Item_Gun_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
struct UUI_SpawnScreen_Loadout_Full_Item_Gun_C_BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_Item_Gun.UI_SpawnScreen_Loadout_Full_Item_Gun_C.Initialize
struct UUI_SpawnScreen_Loadout_Full_Item_Gun_C_Initialize_Params
{
public:
};

// 0x78 (0x78 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_Item_Gun.UI_SpawnScreen_Loadout_Full_Item_Gun_C.ExecuteUbergraph_UI_SpawnScreen_Loadout_Full_Item_Gun
struct UUI_SpawnScreen_Loadout_Full_Item_Gun_C_ExecuteUbergraph_UI_SpawnScreen_Loadout_Full_Item_Gun_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3497[0x4];                                     // Fixing Size After Last Property
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetStringField_ReturnValue;               // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                        K2Node_MakeArray_Array;                            // 0x30(0x10)(ConstParm, ReferenceParm)
	class UPG_PlayerState_Game*                  K2Node_DynamicCast_AsPG_Player_State_Game;         // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_349A[0x7];                                     // Fixing Size After Last Property
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_PlayerController_Game_C*        K2Node_DynamicCast_AsBP_PG_Player_Controller_Game; // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_349C[0x7];                                     // Fixing Size After Last Property
	TArray<class FString>                        CallFunc_EquipItems_ReturnValue;                   // 0x68(0x10)(ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_Item_Gun.UI_SpawnScreen_Loadout_Full_Item_Gun_C.OnPressed__DelegateSignature
struct UUI_SpawnScreen_Loadout_Full_Item_Gun_C_OnPressed__DelegateSignature_Params
{
public:
	class UUI_SpawnScreen_Loadout_Full_Item_Gun_C* Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_Item_Gun.UI_SpawnScreen_Loadout_Full_Item_Gun_C.OnHovered__DelegateSignature
struct UUI_SpawnScreen_Loadout_Full_Item_Gun_C_OnHovered__DelegateSignature_Params
{
public:
	class UUI_SpawnScreen_Loadout_Full_Item_Gun_C* Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHover;                                           // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
