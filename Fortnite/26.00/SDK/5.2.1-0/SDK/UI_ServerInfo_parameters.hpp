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

// 0x1 (0x1 - 0x0)
// Function UI_ServerInfo.UI_ServerInfo_C.SetIsSelected
struct UUI_ServerInfo_C_SetIsSelected_Params
{
public:
	bool                                         IsSelected;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function UI_ServerInfo.UI_ServerInfo_C.Set Ping
struct UUI_ServerInfo_C_Set_Ping_Params
{
public:
	int32                                        Ping;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29A1[0x1];                                     // Fixing Size After Last Property 
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x8(0x18)(None)
};

// 0x238 (0x238 - 0x0)
// Function UI_ServerInfo.UI_ServerInfo_C.SetServerParameters
struct UUI_ServerInfo_C_SetServerParameters_Params
{
public:
	TArray<class FString>                        CallFunc_GetStringArrayField_ReturnValue;          // 0x0(0x10)(ReferenceParm)
	class FText                                  Temp_text_Variable;                                // 0x10(0x18)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29AF[0x4];                                     // Fixing Size After Last Property 
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x30(0x18)(None)
	float                                        CallFunc_GetNumberField_ReturnValue;               // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_1;             // 0x50(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x68(0x18)(None)
	bool                                         CallFunc_HasField_ReturnValue;                     // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29B1[0x7];                                     // Fixing Size After Last Property 
	class FString                                CallFunc_GetStringField_ReturnValue;               // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMapInfo                              CallFunc_GetDataTableRowFromName_OutRow;           // 0xA0(0xE0)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29B2[0x7];                                     // Fixing Size After Last Property 
	class FText                                  Temp_text_Variable_2;                              // 0x188(0x18)(None)
	enum class EGameMode                         CallFunc_Array_Get_Item;                           // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGameMode                         Temp_byte_Variable;                                // 0x1A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29B4[0x6];                                     // Fixing Size After Last Property 
	class FString                                CallFunc_GetStringField_ReturnValue_1;             // 0x1A8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  K2Node_Select_Default;                             // 0x1B8(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x1D0(0x18)(None)
	class FString                                CallFunc_GetStringField_ReturnValue_2;             // 0x1E8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasField_ReturnValue_1;                   // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x1F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1FA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29B9[0x5];                                     // Fixing Size After Last Property 
	class FString                                CallFunc_GetStringField_ReturnValue_3;             // 0x200(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x210(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29BB[0x7];                                     // Fixing Size After Last Property 
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x218(0x18)(None)
	double                                       CallFunc_FTrunc_A_ImplicitCast;                    // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB8 (0xB8 - 0x0)
// Function UI_ServerInfo.UI_ServerInfo_C.HoverButton
struct UUI_ServerInfo_C_HoverButton_Params
{
public:
	bool                                         Hover_;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         L_Hover_;                                          // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateColorStylingMode            Temp_byte_Variable;                                // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateColorStylingMode            Temp_byte_Variable_1;                              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29D2[0x2];                                     // Fixing Size After Last Property 
	struct FLinearColor                          Temp_struct_Variable;                              // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_1;                            // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29D3[0x3];                                     // Fixing Size After Last Property 
	struct FLinearColor                          Temp_struct_Variable_2;                            // 0x2C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_3;                            // 0x3C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29D8[0x3];                                     // Fixing Size After Last Property 
	struct FLinearColor                          Temp_struct_Variable_4;                            // 0x50(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_5;                            // 0x60(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select_Default;                             // 0x70(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select_Default_1;                           // 0x80(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateColorStylingMode            K2Node_Select_Default_2;                           // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29DA[0x3];                                     // Fixing Size After Last Property 
	struct FLinearColor                          K2Node_Select_Default_3;                           // 0x94(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0xA4(0x14)(None)
};

// 0x8 (0x8 - 0x0)
// Function UI_ServerInfo.UI_ServerInfo_C.OnLoaded_F93DBF9642E98A40ED7E4D94E7862904
struct UUI_ServerInfo_C_OnLoaded_F93DBF9642E98A40ED7E4D94E7862904_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_ServerInfo.UI_ServerInfo_C.BndEvt__Button_SelectServer_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
struct UUI_ServerInfo_C_BndEvt__Button_SelectServer_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_ServerInfo.UI_ServerInfo_C.BndEvt__Button_SelectServer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UUI_ServerInfo_C_BndEvt__Button_SelectServer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_ServerInfo.UI_ServerInfo_C.BndEvt__Button_SelectServer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UUI_ServerInfo_C_BndEvt__Button_SelectServer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_ServerInfo.UI_ServerInfo_C.BndEvt__Button_Connect_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
struct UUI_ServerInfo_C_BndEvt__Button_Connect_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_ServerInfo.UI_ServerInfo_C.Construct
struct UUI_ServerInfo_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_ServerInfo.UI_ServerInfo_C.ConnectToServer
struct UUI_ServerInfo_C_ConnectToServer_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_ServerInfo.UI_ServerInfo_C.SetRegionPing
struct UUI_ServerInfo_C_SetRegionPing_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function UI_ServerInfo.UI_ServerInfo_C.OnPingCompleted_Event
struct UUI_ServerInfo_C_OnPingCompleted_Event_Params
{
public:
	TArray<struct FPingQoSInfo>                  Result;                                            // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function UI_ServerInfo.UI_ServerInfo_C.OnConnectionFinished_Event
struct UUI_ServerInfo_C_OnConnectionFinished_Event_Params
{
public:
	bool                                         IsSuccessful;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function UI_ServerInfo.UI_ServerInfo_C.LoadMapTexture
struct UUI_ServerInfo_C_LoadMapTexture_Params
{
public:
	TSoftObjectPtr<class UTexture2D>             SoftTextureObject;                                 // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x1B8 (0x1B8 - 0x0)
// Function UI_ServerInfo.UI_ServerInfo_C.ExecuteUbergraph_UI_ServerInfo
struct UUI_ServerInfo_C_ExecuteUbergraph_UI_ServerInfo_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A1E[0x4];                                     // Fixing Size After Last Property 
	class UTask_Multiplayer_ConnectToServer_C*   CallFunc_CreateAction_ReturnValue;                 // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable;                              // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D;                   // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A21[0x2];                                     // Fixing Size After Last Property 
	int32                                        Temp_int_Array_Index_Variable;                     // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A23[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue;               // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A24[0x4];                                     // Fixing Size After Last Property 
	class FString                                CallFunc_GetStringField_ReturnValue;               // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAzureRegion                      CallFunc_GetRegionEnum_ReturnValue;                // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x6D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x6E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A28[0x1];                                     // Fixing Size After Last Property 
	TArray<struct FPingQoSInfo>                  K2Node_CustomEvent_result;                         // 0x70(0x10)(ConstParm, ReferenceParm)
	class UPingQoSSubsystem*                     CallFunc_GetEngineSubsystem_ReturnValue;           // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPingQoSInfo                          CallFunc_Array_Get_Item;                           // 0x88(0x40)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xC8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xDC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAzureRegion                      CallFunc_GetRegionEnum_ReturnValue_1;              // 0xDD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xDE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xDF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPingQoSSubsystem*                     CallFunc_GetEngineSubsystem_ReturnValue_1;         // 0xE0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0xE8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_IsSuccessful;                   // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A2F[0x7];                                     // Fixing Size After Last Property 
	class UPlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x100(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_PlayerController_Menu_C*        K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu; // 0x108(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A30[0x3];                                     // Fixing Size After Last Property 
	float                                        CallFunc_GetNumberField_ReturnValue;               // 0x114(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetNumberField_ReturnValue_1;             // 0x11C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetStringField_ReturnValue_1;             // 0x120(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue_1;                     // 0x130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A33[0x4];                                     // Fixing Size After Last Property 
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x138(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetStringField_ReturnValue_2;             // 0x140(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UBP_PG_PlayerController_Menu_C*        K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu_1; // 0x150(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A34[0x7];                                     // Fixing Size After Last Property 
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x160(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_PlayerController_Menu_C*        K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu_2; // 0x168(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A35[0x7];                                     // Fixing Size After Last Property 
	TSoftObjectPtr<class UTexture2D>             K2Node_CustomEvent_SoftTextureObject;              // 0x178(0x30)(HasGetValueTypeHash)
	double                                       CallFunc_FTrunc_A_ImplicitCast;                    // 0x1A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FTrunc_A_ImplicitCast_1;                  // 0x1B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_ServerInfo.UI_ServerInfo_C.ServerSelected__DelegateSignature
struct UUI_ServerInfo_C_ServerSelected__DelegateSignature_Params
{
public:
	class UUI_ServerInfo_C*                      Server_Info;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


