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

// 0xC5 (0xC5 - 0x0)
// Function UI_Menu_Squad_PlayerSlot.UI_Menu_Squad_PlayerSlot_C.SearchUserEntry
struct UUI_Menu_Squad_PlayerSlot_C_SearchUserEntry_Params
{
public:
	struct FUniqueNetIdRepl                      UserId;                                            // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UClientGameInstance*                   L_ClientGameInstance;                              // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      L_UserId;                                          // 0x38(0x30)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AB1[0x3];                                     // Fixing Size After Last Property
	int32                                        Temp_int_Array_Index_Variable;                     // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AB2[0x3];                                     // Fixing Size After Last Property
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AB4[0x4];                                     // Fixing Size After Last Property
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_UserEntry_C*                       CallFunc_SpawnObject_ReturnValue;                  // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AB5[0x4];                                     // Fixing Size After Last Property
	class UBP_PG_GameInstance_C*                 CallFunc_GetGameInstance_MyGameIntance;            // 0x98(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UUserEntry*                            CallFunc_Array_Get_Item;                           // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClientGameInstance*                   CallFunc_GetClientGameInstance_ReturnValue;        // 0xA8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_UserEntry_C*                       K2Node_DynamicCast_AsBP_User_Entry;                // 0xB0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AB7[0x3];                                     // Fixing Size After Last Property
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue; // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xC2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0xC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// Function UI_Menu_Squad_PlayerSlot.UI_Menu_Squad_PlayerSlot_C.Get_Button_Kick_ToolTipWidget_0
struct UUI_Menu_Squad_PlayerSlot_C_Get_Button_Kick_ToolTipWidget_0_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AC2[0x7];                                     // Fixing Size After Last Property
	class FText                                  Temp_text_Variable;                                // 0x10(0x18)()
	class FText                                  Temp_text_Variable_1;                              // 0x28(0x18)()
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue;     // 0x48(0x30)(HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue; // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AC4[0x7];                                     // Fixing Size After Last Property
	class UUI_Menu_Squad_Help_C*                 CallFunc_Create_ReturnValue;                       // 0x88(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_Select_Default;                             // 0x90(0x18)()
};

// 0x18 (0x18 - 0x0)
// Function UI_Menu_Squad_PlayerSlot.UI_Menu_Squad_PlayerSlot_C.Get_Button_Boost_ToolTipWidget_0
struct UUI_Menu_Squad_PlayerSlot_C_Get_Button_Boost_ToolTipWidget_0_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUI_Menu_Squad_Help_C*                 CallFunc_Create_ReturnValue;                       // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x69 (0x69 - 0x0)
// Function UI_Menu_Squad_PlayerSlot.UI_Menu_Squad_PlayerSlot_C.OnPromotePartyMemberComplete_53C3B59B4135F67BDD8461BBA8B65407
struct UUI_Menu_Squad_PlayerSlot_C_OnPromotePartyMemberComplete_53C3B59B4135F67BDD8461BBA8B65407_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPartyId*                              PartyId;                                           // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      MemberId;                                          // 0x38(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	enum class EPromoteMemberCompletionResult_   Result;                                            // 0x68(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x69 (0x69 - 0x0)
// Function UI_Menu_Squad_PlayerSlot.UI_Menu_Squad_PlayerSlot_C.OnCallFailed_53C3B59B4135F67BDD8461BBA8B65407
struct UUI_Menu_Squad_PlayerSlot_C_OnCallFailed_53C3B59B4135F67BDD8461BBA8B65407_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPartyId*                              PartyId;                                           // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      MemberId;                                          // 0x38(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	enum class EPromoteMemberCompletionResult_   Result;                                            // 0x68(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function UI_Menu_Squad_PlayerSlot.UI_Menu_Squad_PlayerSlot_C.OnLeavePartyComplete_1F83148846FB88D87A25DA9D374E4887
struct UUI_Menu_Squad_PlayerSlot_C_OnLeavePartyComplete_1F83148846FB88D87A25DA9D374E4887_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPartyId*                              PartyId;                                           // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ELeavePartyCompletionResult_      Result;                                            // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function UI_Menu_Squad_PlayerSlot.UI_Menu_Squad_PlayerSlot_C.OnCallFailed_1F83148846FB88D87A25DA9D374E4887
struct UUI_Menu_Squad_PlayerSlot_C_OnCallFailed_1F83148846FB88D87A25DA9D374E4887_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPartyId*                              PartyId;                                           // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ELeavePartyCompletionResult_      Result;                                            // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x69 (0x69 - 0x0)
// Function UI_Menu_Squad_PlayerSlot.UI_Menu_Squad_PlayerSlot_C.OnKickPartyMemberComplete_93FB9404410172EB228B94ABBFF55B60
struct UUI_Menu_Squad_PlayerSlot_C_OnKickPartyMemberComplete_93FB9404410172EB228B94ABBFF55B60_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPartyId*                              PartyId;                                           // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      MemberId;                                          // 0x38(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	enum class EKickMemberCompletionResult_      Result;                                            // 0x68(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x69 (0x69 - 0x0)
// Function UI_Menu_Squad_PlayerSlot.UI_Menu_Squad_PlayerSlot_C.OnCallFailed_93FB9404410172EB228B94ABBFF55B60
struct UUI_Menu_Squad_PlayerSlot_C_OnCallFailed_93FB9404410172EB228B94ABBFF55B60_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPartyId*                              PartyId;                                           // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      MemberId;                                          // 0x38(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	enum class EKickMemberCompletionResult_      Result;                                            // 0x68(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Squad_PlayerSlot.UI_Menu_Squad_PlayerSlot_C.BndEvt__UI_Squad_PlayerSlot_Button_Invite_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UUI_Menu_Squad_PlayerSlot_C_BndEvt__UI_Squad_PlayerSlot_Button_Invite_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function UI_Menu_Squad_PlayerSlot.UI_Menu_Squad_PlayerSlot_C.ParseUserData
struct UUI_Menu_Squad_PlayerSlot_C_ParseUserData_Params
{
public:
	struct FUniqueNetIdRepl                      UserId;                                            // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Squad_PlayerSlot.UI_Menu_Squad_PlayerSlot_C.BndEvt__UI_Squad_PlayerSlot_Button_Boost_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UUI_Menu_Squad_PlayerSlot_C_BndEvt__UI_Squad_PlayerSlot_Button_Boost_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Squad_PlayerSlot.UI_Menu_Squad_PlayerSlot_C.BndEvt__UI_Squad_PlayerSlot_Button_Kick_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UUI_Menu_Squad_PlayerSlot_C_BndEvt__UI_Squad_PlayerSlot_Button_Kick_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Squad_PlayerSlot.UI_Menu_Squad_PlayerSlot_C.ClearUser
struct UUI_Menu_Squad_PlayerSlot_C_ClearUser_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Squad_PlayerSlot.UI_Menu_Squad_PlayerSlot_C.OnGetAvatar_Event
struct UUI_Menu_Squad_PlayerSlot_C_OnGetAvatar_Event_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Squad_PlayerSlot.UI_Menu_Squad_PlayerSlot_C.Construct
struct UUI_Menu_Squad_PlayerSlot_C_Construct_Params
{
public:
};

// 0x703 (0x703 - 0x0)
// Function UI_Menu_Squad_PlayerSlot.UI_Menu_Squad_PlayerSlot_C.ExecuteUbergraph_UI_Menu_Squad_PlayerSlot
struct UUI_Menu_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Menu_Squad_PlayerSlot_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B02[0x4];                                     // Fixing Size After Last Property
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_LocalUserId_4;                  // 0x8(0x30)(HasGetValueTypeHash)
	class UPartyId*                              K2Node_CustomEvent_PartyId_4;                      // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_MemberId_2;                     // 0x40(0x30)(HasGetValueTypeHash)
	enum class EPromoteMemberCompletionResult_   K2Node_CustomEvent_result_4;                       // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B04[0x3];                                     // Fixing Size After Last Property
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x74(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EPromoteMemberCompletionResult_   Temp_byte_Variable;                                // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B05[0x3];                                     // Fixing Size After Last Property
	struct FUniqueNetIdRepl                      Temp_struct_Variable;                              // 0x88(0x30)(HasGetValueTypeHash)
	class UPartyId*                              Temp_object_Variable;                              // 0xB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      Temp_struct_Variable_1;                            // 0xC0(0x30)(HasGetValueTypeHash)
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0xF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_LocalUserId_3;                  // 0xF8(0x30)(HasGetValueTypeHash)
	class UPartyId*                              K2Node_CustomEvent_PartyId_3;                      // 0x128(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ELeavePartyCompletionResult_      K2Node_CustomEvent_result_3;                       // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B08[0x3];                                     // Fixing Size After Last Property
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x134(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B09[0x4];                                     // Fixing Size After Last Property
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_LocalUserId_2;                  // 0x148(0x30)(HasGetValueTypeHash)
	class UPartyId*                              K2Node_CustomEvent_PartyId_2;                      // 0x178(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ELeavePartyCompletionResult_      K2Node_CustomEvent_result_2;                       // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B0B[0x3];                                     // Fixing Size After Last Property
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x184(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ELeavePartyCompletionResult_      Temp_byte_Variable_1;                              // 0x194(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B0C[0x3];                                     // Fixing Size After Last Property
	class UPartyId*                              Temp_object_Variable_1;                            // 0x198(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      Temp_struct_Variable_2;                            // 0x1A0(0x30)(HasGetValueTypeHash)
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x1D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_LocalUserId_1;                  // 0x1D8(0x30)(HasGetValueTypeHash)
	class UPartyId*                              K2Node_CustomEvent_PartyId_1;                      // 0x208(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_MemberId_1;                     // 0x210(0x30)(HasGetValueTypeHash)
	enum class EKickMemberCompletionResult_      K2Node_CustomEvent_result_1;                       // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B0F[0x3];                                     // Fixing Size After Last Property
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x244(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B10[0x4];                                     // Fixing Size After Last Property
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_LocalUserId;                    // 0x258(0x30)(HasGetValueTypeHash)
	class UPartyId*                              K2Node_CustomEvent_PartyId;                        // 0x288(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_MemberId;                       // 0x290(0x30)(HasGetValueTypeHash)
	enum class EKickMemberCompletionResult_      K2Node_CustomEvent_result;                         // 0x2C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B11[0x3];                                     // Fixing Size After Last Property
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x2C4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EKickMemberCompletionResult_      Temp_byte_Variable_2;                              // 0x2D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B13[0x3];                                     // Fixing Size After Last Property
	struct FUniqueNetIdRepl                      Temp_struct_Variable_3;                            // 0x2D8(0x30)(HasGetValueTypeHash)
	class UPartyId*                              Temp_object_Variable_2;                            // 0x308(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      Temp_struct_Variable_4;                            // 0x310(0x30)(HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x340(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x341(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_4;                              // 0x342(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x343(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_5;                              // 0x344(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_6;                              // 0x345(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B14[0x2];                                     // Fixing Size After Last Property
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue_2;   // 0x348(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x350(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UOnlineIdentitySubsystem*              CallFunc_GetGameInstanceSubsystem_ReturnValue_3;   // 0x360(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x368(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_PlayerController_Menu_C*        K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu; // 0x370(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x378(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B16[0x7];                                     // Fixing Size After Last Property
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x380(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue;     // 0x388(0x30)(HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_LocalUserId_5;                  // 0x3B8(0x30)(HasGetValueTypeHash)
	class UPartyId*                              K2Node_CustomEvent_PartyId_5;                      // 0x3E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_MemberId_3;                     // 0x3F0(0x30)(HasGetValueTypeHash)
	enum class EPromoteMemberCompletionResult_   K2Node_CustomEvent_result_5;                       // 0x420(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B17[0x7];                                     // Fixing Size After Last Property
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_UserId;                         // 0x428(0x30)(HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_7;                              // 0x458(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B19[0x7];                                     // Fixing Size After Last Property
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_2;        // 0x460(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_3;        // 0x468(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue_1;   // 0x470(0x30)(HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue_2;   // 0x4A0(0x30)(HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_4;        // 0x4D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue_3;   // 0x4D8(0x30)(HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x508(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x518(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B1C[0x7];                                     // Fixing Size After Last Property
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_5;        // 0x520(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_6;        // 0x528(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue_4;   // 0x530(0x30)(HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue_5;   // 0x560(0x30)(HasGetValueTypeHash)
	bool                                         CallFunc_IsLocalUserLeader_IsLeader;               // 0x590(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocalUserLeader_IsLeader_1;             // 0x591(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocalUserLeader_IsLeader_2;             // 0x592(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B1F[0x5];                                     // Fixing Size After Last Property
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_7;        // 0x598(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue_6;   // 0x5A0(0x30)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x5D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x5D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B23[0x6];                                     // Fixing Size After Last Property
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D;                   // 0x5D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x5E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B26[0x7];                                     // Fixing Size After Last Property
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_8;        // 0x5E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue_7;   // 0x5F0(0x30)(HasGetValueTypeHash)
	class UBlueprintPartyMember*                 CallFunc_GetPartyMember_ReturnValue;               // 0x620(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x628(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x638(0x18)()
	bool                                         CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue; // 0x650(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue_1; // 0x651(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x652(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue_2; // 0x653(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x654(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B2A[0x3];                                     // Fixing Size After Last Property
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_9;        // 0x658(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue_8;   // 0x660(0x30)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue_3; // 0x690(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B2B[0x7];                                     // Fixing Size After Last Property
	class FString                                CallFunc_GetPlayerNickname_ReturnValue;            // 0x698(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x6A8(0x18)()
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue_4;   // 0x6C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x6C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x6C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B2C[0x6];                                     // Fixing Size After Last Property
	class UOnlinePartySubsystemPromoteMember*    CallFunc_PromoteMember_ReturnValue;                // 0x6D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x6D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x6D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B2D[0x6];                                     // Fixing Size After Last Property
	class UOnlinePartySubsystemLeaveParty*       CallFunc_LeaveParty_ReturnValue;                   // 0x6E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UOnlinePartySubsystemKickMember*       CallFunc_KickMember_ReturnValue;                   // 0x6E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x6F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x6F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_8;                              // 0x6F2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B2E[0x5];                                     // Fixing Size After Last Property
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue_5;   // 0x6F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x700(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMemberLeader_ReturnValue;               // 0x701(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_2;                           // 0x702(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
