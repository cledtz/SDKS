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

// 0x220 (0x220 - 0x0)
// Function UI_Scoreboard_Player_Menu_Report.UI_Scoreboard_Player_Menu_Report_C.OnMouseButtonDown_Background
struct UUI_Scoreboard_Player_Menu_Report_C_OnMouseButtonDown_Background_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x168(0xB8)()
};

// 0x19 (0x19 - 0x0)
// Function UI_Scoreboard_Player_Menu_Report.UI_Scoreboard_Player_Menu_Report_C.SetFocusToScoreboard
struct UUI_Scoreboard_Player_Menu_Report_C_SetFocusToScoreboard_Params
{
public:
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_PlayerController_Game_C*        K2Node_DynamicCast_AsBP_PG_Player_Controller_Game; // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x49 (0x49 - 0x0)
// Function UI_Scoreboard_Player_Menu_Report.UI_Scoreboard_Player_Menu_Report_C.OnPlayFabResponse_860D98224F067764473B2486553C01BB
struct UUI_Scoreboard_Player_Menu_Report_C_OnPlayFabResponse_860D98224F067764473B2486553C01BB_Params
{
public:
	struct FPlayFabBaseModel                     Response;                                          // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Successful;                                        // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Scoreboard_Player_Menu_Report.UI_Scoreboard_Player_Menu_Report_C.BndEvt__UI_Scoreboard_Player_Menu_Report_Button_Toxic_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UUI_Scoreboard_Player_Menu_Report_C_BndEvt__UI_Scoreboard_Player_Menu_Report_Button_Toxic_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Scoreboard_Player_Menu_Report.UI_Scoreboard_Player_Menu_Report_C.SendReport
struct UUI_Scoreboard_Player_Menu_Report_C_SendReport_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Scoreboard_Player_Menu_Report.UI_Scoreboard_Player_Menu_Report_C.BndEvt__UI_Scoreboard_Player_Menu_Report_Button_Cheater_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UUI_Scoreboard_Player_Menu_Report_C_BndEvt__UI_Scoreboard_Player_Menu_Report_Button_Cheater_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function UI_Scoreboard_Player_Menu_Report.UI_Scoreboard_Player_Menu_Report_C.SendReport_Success
struct UUI_Scoreboard_Player_Menu_Report_C_SendReport_Success_Params
{
public:
	struct FClientReportPlayerClientResult       Result;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class UObject*                               CustomData;                                        // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function UI_Scoreboard_Player_Menu_Report.UI_Scoreboard_Player_Menu_Report_C.SendReport_Failure
struct UUI_Scoreboard_Player_Menu_Report_C_SendReport_Failure_Params
{
public:
	struct FPlayFabError                         Error;                                             // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function UI_Scoreboard_Player_Menu_Report.UI_Scoreboard_Player_Menu_Report_C.OnMouseLeave
struct UUI_Scoreboard_Player_Menu_Report_C_OnMouseLeave_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function UI_Scoreboard_Player_Menu_Report.UI_Scoreboard_Player_Menu_Report_C.Construct
struct UUI_Scoreboard_Player_Menu_Report_C_Construct_Params
{
public:
};

// 0x200 (0x200 - 0x0)
// Function UI_Scoreboard_Player_Menu_Report.UI_Scoreboard_Player_Menu_Report_C.ExecuteUbergraph_UI_Scoreboard_Player_Menu_Report
struct UUI_Scoreboard_Player_Menu_Report_C_ExecuteUbergraph_UI_Scoreboard_Player_Menu_Report_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_339B[0x4];                                     // Fixing Size After Last Property
	struct FPlayFabBaseModel                     K2Node_CustomEvent_response;                       // 0x8(0x40)()
	class UObject*                               K2Node_CustomEvent_customData_2;                   // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_successful;                     // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_339C[0x3];                                     // Fixing Size After Last Property
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x54(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_339D[0x3];                                     // Fixing Size After Last Property
	class UObject*                               Temp_object_Variable;                              // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPlayFabBaseModel                     Temp_struct_Variable;                              // 0x70(0x40)()
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xB0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_339E[0x3];                                     // Fixing Size After Last Property
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0xC4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0xD4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_339F[0x3];                                     // Fixing Size After Last Property
	struct FClientReportPlayerClientResult       K2Node_CustomEvent_result;                         // 0xD8(0x10)(NoDestructor)
	class UObject*                               K2Node_CustomEvent_customData_1;                   // 0xE8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FClientReportPlayerClientRequest      K2Node_MakeStruct_ClientReportPlayerClientRequest; // 0xF0(0x30)()
	struct FPlayFabError                         K2Node_CustomEvent_error;                          // 0x120(0x38)()
	class UObject*                               K2Node_CustomEvent_customData;                     // 0x158(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabClientAPI*                     CallFunc_ReportPlayer_ReturnValue;                 // 0x160(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33A0[0x7];                                     // Fixing Size After Last Property
	struct FPointerEvent                         K2Node_Event_MouseEvent;                           // 0x170(0x78)(ConstParm)
	struct FVector2D                             CallFunc_GetMousePositionOnViewport_ReturnValue;   // 0x1E8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x1F8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
