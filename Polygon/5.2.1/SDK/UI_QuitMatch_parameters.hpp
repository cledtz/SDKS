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

// 0x39 (0x39 - 0x0)
// Function UI_QuitMatch.UI_QuitMatch_C.OnLeavePartyComplete_FA8E42314510031AA7A8D9AAC21CEF7E
struct UUI_QuitMatch_C_OnLeavePartyComplete_FA8E42314510031AA7A8D9AAC21CEF7E_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPartyId*                              PartyId;                                           // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ELeavePartyCompletionResult_      Result;                                            // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function UI_QuitMatch.UI_QuitMatch_C.OnCallFailed_FA8E42314510031AA7A8D9AAC21CEF7E
struct UUI_QuitMatch_C_OnCallFailed_FA8E42314510031AA7A8D9AAC21CEF7E_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPartyId*                              PartyId;                                           // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ELeavePartyCompletionResult_      Result;                                            // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_QuitMatch.UI_QuitMatch_C.BndEvt__Button_Yes_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UUI_QuitMatch_C_BndEvt__Button_Yes_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_QuitMatch.UI_QuitMatch_C.BndEvt__Button_No_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UUI_QuitMatch_C_BndEvt__Button_No_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_QuitMatch.UI_QuitMatch_C.Construct
struct UUI_QuitMatch_C_Construct_Params
{
public:
};

// 0x1F1 (0x1F1 - 0x0)
// Function UI_QuitMatch.UI_QuitMatch_C.ExecuteUbergraph_UI_QuitMatch
struct UUI_QuitMatch_C_ExecuteUbergraph_UI_QuitMatch_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33EC[0x4];                                     // Fixing Size After Last Property
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_LocalUserId_1;                  // 0x10(0x30)(HasGetValueTypeHash)
	class UPartyId*                              K2Node_CustomEvent_PartyId_1;                      // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ELeavePartyCompletionResult_      K2Node_CustomEvent_result_1;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33EE[0x3];                                     // Fixing Size After Last Property
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33EF[0x4];                                     // Fixing Size After Last Property
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_LocalUserId;                    // 0x60(0x30)(HasGetValueTypeHash)
	class UPartyId*                              K2Node_CustomEvent_PartyId;                        // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ELeavePartyCompletionResult_      K2Node_CustomEvent_result;                         // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33F1[0x3];                                     // Fixing Size After Last Property
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x9C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ELeavePartyCompletionResult_      Temp_byte_Variable;                                // 0xAC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33F3[0x3];                                     // Fixing Size After Last Property
	class UPartyId*                              Temp_object_Variable;                              // 0xB0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      Temp_struct_Variable;                              // 0xB8(0x30)(HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0xE9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33F4[0x6];                                     // Fixing Size After Last Property
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0xF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue;     // 0xF8(0x30)(HasGetValueTypeHash)
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x128(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x130(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_2;        // 0x138(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue_1;   // 0x140(0x30)(HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue_2;   // 0x170(0x30)(HasGetValueTypeHash)
	TArray<class UPartyId*>                      CallFunc_GetJoinedParties_OutPartyIdArray;         // 0x1A0(0x10)(ReferenceParm)
	bool                                         CallFunc_GetJoinedParties_ReturnValue;             // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33F9[0x7];                                     // Fixing Size After Last Property
	TArray<class UPartyId*>                      CallFunc_GetJoinedParties_OutPartyIdArray_1;       // 0x1B8(0x10)(ReferenceParm)
	bool                                         CallFunc_GetJoinedParties_ReturnValue_1;           // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33FB[0x7];                                     // Fixing Size After Last Property
	class UPartyId*                              CallFunc_Array_Get_Item;                           // 0x1D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x1D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue_1;         // 0x1D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33FE[0x6];                                     // Fixing Size After Last Property
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue_2;   // 0x1E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UOnlinePartySubsystemLeaveParty*       CallFunc_LeaveParty_ReturnValue;                   // 0x1E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
