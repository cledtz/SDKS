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

// 0x8 (0x8 - 0x0)
// Function UI_Weapons.UI_Weapons_C.OnLoaded_321EB0874E76A481910ADFAA8B0A3201
struct UUI_Weapons_C_OnLoaded_321EB0874E76A481910ADFAA8B0A3201_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_Weapons.UI_Weapons_C.OnLoaded_E41DF5A1487589D026FEA2ADA77B92A5
struct UUI_Weapons_C_OnLoaded_E41DF5A1487589D026FEA2ADA77B92A5_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Weapons.UI_Weapons_C.OnSetPlayerState_Event
struct UUI_Weapons_C_OnSetPlayerState_Event_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Weapons.UI_Weapons_C.OnSetPrimaryGun_Event
struct UUI_Weapons_C_OnSetPrimaryGun_Event_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Weapons.UI_Weapons_C.OnSetSecondaryGun_Event
struct UUI_Weapons_C_OnSetSecondaryGun_Event_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function UI_Weapons.UI_Weapons_C.OnSetCurrentGun_Event
struct UUI_Weapons_C_OnSetCurrentGun_Event_Params
{
public:
	class UItem_Gun_General*                     OldCurrentGun;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function UI_Weapons.UI_Weapons_C.OnPossessedPawnChanged_Event
struct UUI_Weapons_C_OnPossessedPawnChanged_Event_Params
{
public:
	class UPawn*                                 OldPawn;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPawn*                                 NewPawn;                                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Weapons.UI_Weapons_C.Construct
struct UUI_Weapons_C_Construct_Params
{
public:
};

// 0x108 (0x108 - 0x0)
// Function UI_Weapons.UI_Weapons_C.ExecuteUbergraph_UI_Weapons
struct UUI_Weapons_C_ExecuteUbergraph_UI_Weapons_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x14(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x24(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x34(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E02[0x4];                                     // Fixing Size After Last Property 
	class UObject*                               K2Node_CustomEvent_Loaded_1;                       // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable;                              // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D;                   // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E04[0x7];                                     // Fixing Size After Last Property 
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable_1;                            // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D_1;                 // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x82(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x83(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E06[0x4];                                     // Fixing Size After Last Property 
	class UPlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x98(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_Game_Character_C*               K2Node_DynamicCast_AsBP_PG_Game_Character;         // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E07[0x7];                                     // Fixing Size After Last Property 
	class UBP_PG_PlayerState_Game_C*             K2Node_DynamicCast_AsBP_PG_Player_State_Game;      // 0xB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0xC2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xC3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0xC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E08[0x3];                                     // Fixing Size After Last Property 
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0xC8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UItem_Gun_General*                     K2Node_CustomEvent_OldCurrentGun;                  // 0xD8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0xE0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPawn*                                 K2Node_CustomEvent_OldPawn;                        // 0xE8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPawn*                                 K2Node_CustomEvent_NewPawn;                        // 0xF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0xF8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


