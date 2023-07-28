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

// 0x1 (0x1 - 0x0)
// Function SocialPanel.SocialPanel_C.Play Panel Animation Sound
struct USocialPanel_C_Play_Panel_Animation_Sound_Params
{
public:
	bool                                         CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function SocialPanel.SocialPanel_C.ClosePanelAfterAnimation
struct USocialPanel_C_ClosePanelAfterAnimation_Params
{
public:
};

// 0x2E9 (0x2E9 - 0x0)
// Function SocialPanel.SocialPanel_C.OnMouseButtonDown_0
struct USocialPanel_C_OnMouseButtonDown_0_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(Parm, OutParm, ReturnParm)
	bool                                         CallFunc_IsActivated_ReturnValue;                  // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9C54[0x7];                                     // Fixing Size After Last Property..
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x170(0xB8)()
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAnySlideOutMenuOpen_ReturnValue;        // 0x229(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9C55[0x6];                                     // Fixing Size After Last Property..
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x230(0xB8)()
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x2E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function SocialPanel.SocialPanel_C.BndEvt__SocialPanel_TopBarExtension_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct USocialPanel_C_BndEvt__SocialPanel_TopBarExtension_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButtonLegacy*                   Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function SocialPanel.SocialPanel_C.ClosePanel
struct USocialPanel_C_ClosePanel_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SocialPanel.SocialPanel_C.HandleOutroEnded
struct USocialPanel_C_HandleOutroEnded_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SocialPanel.SocialPanel_C.OnBeginOutro
struct USocialPanel_C_OnBeginOutro_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SocialPanel.SocialPanel_C.OnBeginIntro
struct USocialPanel_C_OnBeginIntro_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SocialPanel.SocialPanel_C.HandleIntroEnded
struct USocialPanel_C_HandleIntroEnded_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SocialPanel.SocialPanel_C.Destruct
struct USocialPanel_C_Destruct_Params
{
public:
};

// 0x44 (0x44 - 0x0)
// Function SocialPanel.SocialPanel_C.ExecuteUbergraph_SocialPanel
struct USocialPanel_C_ExecuteUbergraph_SocialPanel_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9C56[0x4];                                     // Fixing Size After Last Property..
	class UCommonButtonLegacy*                   K2Node_ComponentBoundEvent_Button;                 // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAnySlideOutMenuOpen_ReturnValue;        // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9C57[0x7];                                     // Fixing Size After Last Property..
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x28(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAnimationPlaying_ReturnValue;           // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAnimationPlayingForward_ReturnValue;    // 0x35(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9C58[0x2];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x38(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
