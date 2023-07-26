#pragma once

// Dumper.

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

// 0xB0 (0xB0 - 0x0)
// Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.HandleRedeemCodeComplete
struct URedeemFriendCodeWindow_C_HandleRedeemCodeComplete_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERedeemCodeFailureReason          FailureReason;                                     // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERedeemCodeFailureReason          Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D36[0x5];                                     // Fixing Size After Last Property..
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)()
	class FText                                  Temp_text_Variable_1;                              // 0x20(0x18)()
	class FText                                  Temp_text_Variable_2;                              // 0x38(0x18)()
	class FText                                  Temp_text_Variable_3;                              // 0x50(0x18)()
	class FText                                  Temp_text_Variable_4;                              // 0x68(0x18)()
	TArray<struct FPurchasedItemInfo>            K2Node_MakeArray_Array;                            // 0x80(0x10)(ConstParm, ReferenceParm)
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue;                   // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_Select_Default;                             // 0x98(0x18)()
};

// 0x0 (0x0 - 0x0)
// Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.Close
struct URedeemFriendCodeWindow_C_Close_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_57_CommonButtonClicked__DelegateSignature
struct URedeemFriendCodeWindow_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_57_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButtonLegacy*                   Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.BndEvt__SendButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature
struct URedeemFriendCodeWindow_C_BndEvt__SendButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButtonLegacy*                   Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.OnRedeemFriendCodeComplete
struct URedeemFriendCodeWindow_C_OnRedeemFriendCodeComplete_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERedeemCodeFailureReason          FailureReason;                                     // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.Construct
struct URedeemFriendCodeWindow_C_Construct_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.BndEvt__FriendCodeEntry_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature
struct URedeemFriendCodeWindow_C_BndEvt__FriendCodeEntry_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct URedeemFriendCodeWindow_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButtonLegacy*                   Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.ExecuteUbergraph_RedeemFriendCodeWindow
struct URedeemFriendCodeWindow_C_ExecuteUbergraph_RedeemFriendCodeWindow_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D37[0x4];                                     // Fixing Size After Last Property..
	class UCommonButtonLegacy*                   K2Node_ComponentBoundEvent_Button;                 // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonLegacy*                   K2Node_ComponentBoundEvent_Button_1;               // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bSuccess;                             // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERedeemCodeFailureReason          K2Node_Event_FailureReason;                        // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D38[0x6];                                     // Fixing Size After Last Property..
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x20(0x18)()
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D39[0x7];                                     // Fixing Size After Last Property..
	class FText                                  K2Node_ComponentBoundEvent_Text;                   // 0x50(0x18)(ConstParm)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D3A[0x7];                                     // Fixing Size After Last Property..
	class UCommonButtonLegacy*                   K2Node_ComponentBoundEvent_Button_2;               // 0x70(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
