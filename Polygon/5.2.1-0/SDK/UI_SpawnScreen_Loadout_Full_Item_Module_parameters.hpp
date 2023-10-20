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

// 0x28 (0x28 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_Item_Module.UI_SpawnScreen_Loadout_Full_Item_Module_C.SetIsEquipped
struct UUI_SpawnScreen_Loadout_Full_Item_Module_C_SetIsEquipped_Params
{
public:
	bool                                         IsEquipped;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_291E[0x3];                                     // Fixing Size After Last Property 
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_PlayerController_Game_C*        K2Node_DynamicCast_AsBP_PG_Player_Controller_Game; // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2920[0x7];                                     // Fixing Size After Last Property 
	class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* CallFunc_GetModuleSlotByItemClass_Slot;            // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_Item_Module.UI_SpawnScreen_Loadout_Full_Item_Module_C.OnLoaded_F46AA7154D37694784704AA92D466588
struct UUI_SpawnScreen_Loadout_Full_Item_Module_C_OnLoaded_F46AA7154D37694784704AA92D466588_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_Item_Module.UI_SpawnScreen_Loadout_Full_Item_Module_C.PreConstruct
struct UUI_SpawnScreen_Loadout_Full_Item_Module_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_Item_Module.UI_SpawnScreen_Loadout_Full_Item_Module_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UUI_SpawnScreen_Loadout_Full_Item_Module_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_Item_Module.UI_SpawnScreen_Loadout_Full_Item_Module_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
struct UUI_SpawnScreen_Loadout_Full_Item_Module_C_BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_Item_Module.UI_SpawnScreen_Loadout_Full_Item_Module_C.Construct
struct UUI_SpawnScreen_Loadout_Full_Item_Module_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_Item_Module.UI_SpawnScreen_Loadout_Full_Item_Module_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UUI_SpawnScreen_Loadout_Full_Item_Module_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
public:
};

// 0xEA (0xEA - 0x0)
// Function UI_SpawnScreen_Loadout_Full_Item_Module.UI_SpawnScreen_Loadout_Full_Item_Module_C.ExecuteUbergraph_UI_SpawnScreen_Loadout_Full_Item_Module
struct UUI_SpawnScreen_Loadout_Full_Item_Module_C_ExecuteUbergraph_UI_SpawnScreen_Loadout_Full_Item_Module_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2931[0x4];                                     // Fixing Size After Last Property 
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2932[0x6];                                     // Fixing Size After Last Property 
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetStringField_ReturnValue;               // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UBP_PG_PlayerState_Game_C*             K2Node_DynamicCast_AsBP_PG_Player_State_Game;      // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2933[0x6];                                     // Fixing Size After Last Property 
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UBP_PG_PlayerController_Game_C*        K2Node_DynamicCast_AsBP_PG_Player_Controller_Game; // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x72(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2935[0x5];                                     // Fixing Size After Last Property 
	class FString                                CallFunc_GetStringField_ReturnValue_1;             // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_LowEntry_LocalVariable_Value__Object;       // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x98(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_Select_Default;                             // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                        K2Node_MakeArray_Array;                            // 0xB8(0x10)(ConstParm, ReferenceParm)
	TArray<class FString>                        CallFunc_SetGunModules_ReturnValue;                // 0xC8(0x10)(ReferenceParm)
	class UObject*                               Temp_object_Variable;                              // 0xD8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D;                   // 0xE0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0xE9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_Item_Module.UI_SpawnScreen_Loadout_Full_Item_Module_C.OnClick__DelegateSignature
struct UUI_SpawnScreen_Loadout_Full_Item_Module_C_OnClick__DelegateSignature_Params
{
public:
	class UUI_SpawnScreen_Loadout_Full_Item_Module_C* Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


