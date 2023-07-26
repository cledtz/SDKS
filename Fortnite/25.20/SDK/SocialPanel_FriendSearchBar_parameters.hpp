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

// 0x220 (0x220 - 0x0)
// Function SocialPanel_FriendSearchBar.SocialPanel_FriendSearchBar_C.On_ClickCapture_MouseButtonDown_0
struct USocialPanel_FriendSearchBar_C_On_ClickCapture_MouseButtonDown_0_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x168(0xB8)()
};

// 0x0 (0x0 - 0x0)
// Function SocialPanel_FriendSearchBar.SocialPanel_FriendSearchBar_C.BP_OnHovered
struct USocialPanel_FriendSearchBar_C_BP_OnHovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SocialPanel_FriendSearchBar.SocialPanel_FriendSearchBar_C.BP_OnUnhovered
struct USocialPanel_FriendSearchBar_C_BP_OnUnhovered_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function SocialPanel_FriendSearchBar.SocialPanel_FriendSearchBar_C.BndEvt__EditableText_AddFriend_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature
struct USocialPanel_FriendSearchBar_C_BndEvt__EditableText_AddFriend_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x3C (0x3C - 0x0)
// Function SocialPanel_FriendSearchBar.SocialPanel_FriendSearchBar_C.ExecuteUbergraph_SocialPanel_FriendSearchBar
struct USocialPanel_FriendSearchBar_C_ExecuteUbergraph_SocialPanel_FriendSearchBar_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9563[0x4];                                     // Fixing Size After Last Property..
	class UFortRuntimeOptions*                   CallFunc_GetRuntimeOptions_ReturnValue;            // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_ComponentBoundEvent_Text;                   // 0x20(0x18)(ConstParm)
	bool                                         CallFunc_LimitTextLength_WasTrimmed;               // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_PlayAnimationByName_ReturnValue;          // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x3B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
