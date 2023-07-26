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

// 0xC (0xC - 0x0)
// Function SocialPanelView_UserLists.SocialPanelView_UserLists_C.BndEvt__Switcher_UserLists_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature
struct USocialPanelView_UserLists_C_BndEvt__Switcher_UserLists_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature_Params
{
public:
	class UWidget*                               ActiveWidget;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        ActiveWidgetIndex;                                 // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function SocialPanelView_UserLists.SocialPanelView_UserLists_C.OnSetVoiceChannelButtonText
struct USocialPanelView_UserLists_C_OnSetVoiceChannelButtonText_Params
{
public:
	class FText                                  ButtonText;                                        // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function SocialPanelView_UserLists.SocialPanelView_UserLists_C.Construct
struct USocialPanelView_UserLists_C_Construct_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SocialPanelView_UserLists.SocialPanelView_UserLists_C.PreConstruct
struct USocialPanelView_UserLists_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function SocialPanelView_UserLists.SocialPanelView_UserLists_C.ExecuteUbergraph_SocialPanelView_UserLists
struct USocialPanelView_UserLists_C_ExecuteUbergraph_SocialPanelView_UserLists_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_79B4[0x3];                                     // Fixing Size After Last Property..
	class UWidget*                               K2Node_ComponentBoundEvent_ActiveWidget;           // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_ActiveWidgetIndex;      // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_79B5[0x4];                                     // Fixing Size After Last Property..
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_Event_ButtonText;                           // 0x20(0x18)(ConstParm)
	class ULeavePlatformPartyButton_C*           K2Node_DynamicCast_AsLeave_Platform_Party_Button;  // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_79B6[0x7];                                     // Fixing Size After Last Property..
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
