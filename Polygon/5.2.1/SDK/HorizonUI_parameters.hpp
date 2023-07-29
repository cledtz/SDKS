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

// 0x0 (0x0 - 0x0)
// Function HorizonUI.HorizonButton.OnUnhoveredButton
struct UHorizonButton_OnUnhoveredButton_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HorizonUI.HorizonButton.OnReleasedButton
struct UHorizonButton_OnReleasedButton_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HorizonUI.HorizonButton.OnPressedButton
struct UHorizonButton_OnPressedButton_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HorizonUI.HorizonButton.OnHoveredButton
struct UHorizonButton_OnHoveredButton_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// DelegateFunction HorizonUI.HorizonButton.OnHorizonButtonEvent__DelegateSignature
struct UHorizonButton_OnHorizonButtonEvent__DelegateSignature_Params
{
public:
	class UHorizonButton*                        Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function HorizonUI.HorizonButton.OnClickedButton
struct UHorizonButton_OnClickedButton_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HorizonUI.HorizonDesignableUserWidget.SynchronizeProperties
struct UHorizonDesignableUserWidget_SynchronizeProperties_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HorizonUI.HorizonDesignableUserWidget.OnSynchronizeProperties
struct UHorizonDesignableUserWidget_OnSynchronizeProperties_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function HorizonUI.HorizonButtonUserWidget.ReceiveOnOnButtonFocusLost
struct UHorizonButtonUserWidget_ReceiveOnOnButtonFocusLost_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function HorizonUI.HorizonButtonUserWidget.ReceiveOnButtonUnhovered
struct UHorizonButtonUserWidget_ReceiveOnButtonUnhovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HorizonUI.HorizonButtonUserWidget.ReceiveOnButtonReleased
struct UHorizonButtonUserWidget_ReceiveOnButtonReleased_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HorizonUI.HorizonButtonUserWidget.ReceiveOnButtonPressed
struct UHorizonButtonUserWidget_ReceiveOnButtonPressed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HorizonUI.HorizonButtonUserWidget.ReceiveOnButtonHovered
struct UHorizonButtonUserWidget_ReceiveOnButtonHovered_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function HorizonUI.HorizonButtonUserWidget.ReceiveOnButtonFocus
struct UHorizonButtonUserWidget_ReceiveOnButtonFocus_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function HorizonUI.HorizonButtonUserWidget.ReceiveOnButtonClicked
struct UHorizonButtonUserWidget_ReceiveOnButtonClicked_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// DelegateFunction HorizonUI.HorizonButtonUserWidget.OnHorizonButtonFocusEvent__DelegateSignature
struct UHorizonButtonUserWidget_OnHorizonButtonFocusEvent__DelegateSignature_Params
{
public:
	class UHorizonButtonUserWidget*              InButton;                                          // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFocusEvent                           InFocusEvent;                                      // 0x8(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction HorizonUI.HorizonButtonUserWidget.OnHorizonButtonEvent__DelegateSignature
struct UHorizonButtonUserWidget_OnHorizonButtonEvent__DelegateSignature_Params
{
public:
	class UHorizonButtonUserWidget*              InButton;                                          // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function HorizonUI.HorizonButtonUserWidget.NativeOnButtonUnhovered
struct UHorizonButtonUserWidget_NativeOnButtonUnhovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HorizonUI.HorizonButtonUserWidget.NativeOnButtonReleased
struct UHorizonButtonUserWidget_NativeOnButtonReleased_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HorizonUI.HorizonButtonUserWidget.NativeOnButtonPressed
struct UHorizonButtonUserWidget_NativeOnButtonPressed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HorizonUI.HorizonButtonUserWidget.NativeOnButtonHovered
struct UHorizonButtonUserWidget_NativeOnButtonHovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HorizonUI.HorizonButtonUserWidget.NativeOnButtonClicked
struct UHorizonButtonUserWidget_NativeOnButtonClicked_Params
{
public:
};

// 0x2E8 (0x2E8 - 0x0)
// Function HorizonUI.HorizonDialogueMsgDecorator.Run
struct UHorizonDialogueMsgDecorator_Run_Params
{
public:
	class UHorizonDialogueMsgTextBlock*          InMsgTextBlock;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHorizonDialogueBlockInfo             InDialogueBlockInfo;                               // 0x8(0x68)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FHorizonDialogueSegmentInfo           InSegInfo;                                         // 0x70(0x270)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2E0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5B9[0x7];                                      // Fixing Size Of Struct
};

// 0x2E8 (0x2E8 - 0x0)
// Function HorizonUI.HorizonDialogueMsgDecorator.PreRun
struct UHorizonDialogueMsgDecorator_PreRun_Params
{
public:
	class UHorizonDialogueMsgTextBlock*          InMsgTextBlock;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHorizonDialogueBlockInfo             InDialogueBlockInfo;                               // 0x8(0x68)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FHorizonDialogueSegmentInfo           InSegInfo;                                         // 0x70(0x270)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2E0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6D4[0x7];                                      // Fixing Size Of Struct
};

// 0x298 (0x298 - 0x0)
// Function HorizonUI.HorizonDialogueMsgDecorator.BuildSegment
struct UHorizonDialogueMsgDecorator_BuildSegment_Params
{
public:
	class UHorizonDialogueMsgTextBlock*          InMsgTextBlock;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InCurrentSegInfoIndex;                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6E9[0x4];                                      // Fixing Size After Last Property
	struct FHorizonDialogueSegmentInfo           InCurrentSegInfo;                                  // 0x10(0x270)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FHorizonDialogueSegmentInfo>   InSegInfos;                                        // 0x280(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x290(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_728[0x7];                                      // Fixing Size Of Struct
};

// 0x0 (0x0 - 0x0)
// Function HorizonUI.HorizonDialogueMsgTextBlock.StopDialogue
struct UHorizonDialogueMsgTextBlock_StopDialogue_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HorizonUI.HorizonDialogueMsgTextBlock.StartDialogue
struct UHorizonDialogueMsgTextBlock_StartDialogue_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HorizonUI.HorizonDialogueMsgTextBlock.SkipDialogue
struct UHorizonDialogueMsgTextBlock_SkipDialogue_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HorizonUI.HorizonDialogueMsgTextBlock.SkipCurrentDialoguePage
struct UHorizonDialogueMsgTextBlock_SkipCurrentDialoguePage_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HorizonUI.HorizonDialogueMsgTextBlock.SkipCurrentDialogueMsgPageTick
struct UHorizonDialogueMsgTextBlock_SkipCurrentDialogueMsgPageTick_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function HorizonUI.HorizonDialogueMsgTextBlock.SetTextOverflowWrapMethod
struct UHorizonDialogueMsgTextBlock_SetTextOverflowWrapMethod_Params
{
public:
	enum class EHorizonDialogueTextOverflowWrapMethod InOverflowWrapMethod;                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function HorizonUI.HorizonDialogueMsgTextBlock.SetTextAndRebuildDialogueImmediately
struct UHorizonDialogueMsgTextBlock_SetTextAndRebuildDialogueImmediately_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function HorizonUI.HorizonDialogueMsgTextBlock.SetTextAndRebuildDialogue
struct UHorizonDialogueMsgTextBlock_SetTextAndRebuildDialogue_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function HorizonUI.HorizonDialogueMsgTextBlock.SetShadowOffset
struct UHorizonDialogueMsgTextBlock_SetShadowOffset_Params
{
public:
	struct FVector2D                             InShadowOffset;                                    // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForce;                                            // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_75F[0x7];                                      // Fixing Size Of Struct
};

// 0x14 (0x14 - 0x0)
// Function HorizonUI.HorizonDialogueMsgTextBlock.SetShadowColorAndOpacity
struct UHorizonDialogueMsgTextBlock_SetShadowColorAndOpacity_Params
{
public:
	struct FLinearColor                          InShadowColorAndOpacity;                           // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForce;                                            // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76C[0x3];                                      // Fixing Size Of Struct
};

// 0x4 (0x4 - 0x0)
// Function HorizonUI.HorizonDialogueMsgTextBlock.SetRepeatDialogueMsgInterval
struct UHorizonDialogueMsgTextBlock_SetRepeatDialogueMsgInterval_Params
{
public:
	float                                        Interval;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HorizonUI.HorizonDialogueMsgTextBlock.SetOpacity
struct UHorizonDialogueMsgTextBlock_SetOpacity_Params
{
public:
	float                                        InOpacity;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function HorizonUI.HorizonDialogueMsgTextBlock.SetJustification
struct UHorizonDialogueMsgTextBlock_SetJustification_Params
{
public:
	enum class ETextJustify                      InJustification;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForce;                                            // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function HorizonUI.HorizonDialogueMsgTextBlock.SetIsStartTickDialogueMsg
struct UHorizonDialogueMsgTextBlock_SetIsStartTickDialogueMsg_Params
{
public:
	bool                                         bShouldStartTick;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldResetDialogue;                              // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function HorizonUI.HorizonDialogueMsgTextBlock.SetIsRepeatDialogueMsg
struct UHorizonDialogueMsgTextBlock_SetIsRepeatDialogueMsg_Params
{
public:
	bool                                         B;                                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function HorizonUI.HorizonDialogueMsgTextBlock.SetIsDialogueMsgText
struct UHorizonDialogueMsgTextBlock_SetIsDialogueMsgText_Params
{
public:
	bool                                         B;                                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function HorizonUI.HorizonDialogueMsgTextBlock.SetIsAutoNextDialogueMsgPage
struct UHorizonDialogueMsgTextBlock_SetIsAutoNextDialogueMsgPage_Params
{
public:
	bool                                         B;                                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HorizonUI.HorizonDialogueMsgTextBlock.SetFontSize
struct UHorizonDialogueMsgTextBlock_SetFontSize_Params
{
public:
	int32                                        FontSize;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function HorizonUI.HorizonDialogueMsgTextBlock.SetFont
struct UHorizonDialogueMsgTextBlock_SetFont_Params
{
public:
	struct FSlateFontInfo                        InFontInfo;                                        // 0x0(0x58)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForce;                                            // 0x58(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_78C[0x7];                                      // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function HorizonUI.HorizonDialogueMsgTextBlock.SetDialogueMsgSpeed
struct UHorizonDialogueMsgTextBlock_SetDialogueMsgSpeed_Params
{
public:
	float                                        Speed;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForce;                                            // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_794[0x3];                                      // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function HorizonUI.HorizonDialogueMsgTextBlock.SetDialogueMsgPage
struct UHorizonDialogueMsgTextBlock_SetDialogueMsgPage_Params
{
public:
	int32                                        InPageIndex;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldStartTick;                                  // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7A1[0x3];                                      // Fixing Size Of Struct
};

// 0x14 (0x14 - 0x0)
// Function HorizonUI.HorizonDialogueMsgTextBlock.SetColorAndOpacity
struct UHorizonDialogueMsgTextBlock_SetColorAndOpacity_Params
{
public:
	struct FSlateColor                           InColorAndOpacity;                                 // 0x0(0x14)(Parm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HorizonUI.HorizonDialogueMsgTextBlock.SetAutoNextDialogueMsgPageIntervalRate
struct UHorizonDialogueMsgTextBlock_SetAutoNextDialogueMsgPageIntervalRate_Params
{
public:
	float                                        InAutoNextDialogueMsgPageIntervalRate;             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function HorizonUI.HorizonDialogueMsgTextBlock.ResumeDialogue
struct UHorizonDialogueMsgTextBlock_ResumeDialogue_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HorizonUI.HorizonDialogueMsgTextBlock.RequestRebuildDialogue
struct UHorizonDialogueMsgTextBlock_RequestRebuildDialogue_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HorizonUI.HorizonDialogueMsgTextBlock.RebuildDialogueMsgTextBlock
struct UHorizonDialogueMsgTextBlock_RebuildDialogueMsgTextBlock_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function HorizonUI.HorizonDialogueMsgTextBlock.PrevDialogueMsgPage
struct UHorizonDialogueMsgTextBlock_PrevDialogueMsgPage_Params
{
public:
	bool                                         bShouldStartTick;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function HorizonUI.HorizonDialogueMsgTextBlock.PauseDialogue
struct UHorizonDialogueMsgTextBlock_PauseDialogue_Params
{
public:
};

// 0x78 (0x78 - 0x0)
// DelegateFunction HorizonUI.HorizonDialogueMsgTextBlock.OnHorizonHypertextEvent__DelegateSignature
struct UHorizonDialogueMsgTextBlock_OnHorizonHypertextEvent__DelegateSignature_Params
{
public:
	struct FHorizonDialogueHypertextResult       InResult;                                          // 0x0(0x78)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// DelegateFunction HorizonUI.HorizonDialogueMsgTextBlock.OnHorizonDialoguePageEvent__DelegateSignature
struct UHorizonDialogueMsgTextBlock_OnHorizonDialoguePageEvent__DelegateSignature_Params
{
public:
	struct FHorizonDialogueDialoguePageResult    InResult;                                          // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// DelegateFunction HorizonUI.HorizonDialogueMsgTextBlock.OnHorizonDialogueMsgEvent__DelegateSignature
struct UHorizonDialogueMsgTextBlock_OnHorizonDialogueMsgEvent__DelegateSignature_Params
{
public:
};

// 0x280 (0x280 - 0x0)
// DelegateFunction HorizonUI.HorizonDialogueMsgTextBlock.OnHorizonDialogueCustomEvent__DelegateSignature
struct UHorizonDialogueMsgTextBlock_OnHorizonDialogueCustomEvent__DelegateSignature_Params
{
public:
	class FString                                InEventName;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHorizonDialogueSegmentInfo           InSegInfo;                                         // 0x10(0x270)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// DelegateFunction HorizonUI.HorizonDialogueMsgTextBlock.OnHorizonDialogueCharAdvancedEvent__DelegateSignature
struct UHorizonDialogueMsgTextBlock_OnHorizonDialogueCharAdvancedEvent__DelegateSignature_Params
{
public:
	struct FHorizonDialogueBlockInfo             InCurrentBlockInfo;                                // 0x0(0x68)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function HorizonUI.HorizonDialogueMsgTextBlock.NextDialogueMsgPage
struct UHorizonDialogueMsgTextBlock_NextDialogueMsgPage_Params
{
public:
	bool                                         bShouldStartTick;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function HorizonUI.HorizonDialogueMsgTextBlock.IsDialogueMsgPageEnd
struct UHorizonDialogueMsgTextBlock_IsDialogueMsgPageEnd_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function HorizonUI.HorizonDialogueMsgTextBlock.IsDialogueMsgCompleted
struct UHorizonDialogueMsgTextBlock_IsDialogueMsgCompleted_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function HorizonUI.HorizonDialogueMsgTextBlock.GetTextOverflowWrapMethod
struct UHorizonDialogueMsgTextBlock_GetTextOverflowWrapMethod_Params
{
public:
	enum class EHorizonDialogueTextOverflowWrapMethod ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HorizonUI.HorizonDialogueMsgTextBlock.GetTextLength
struct UHorizonDialogueMsgTextBlock_GetTextLength_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function HorizonUI.HorizonDialogueMsgTextBlock.GetText
struct UHorizonDialogueMsgTextBlock_GetText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function HorizonUI.HorizonDialogueMsgTextBlock.GetPageTextByIndex
struct UHorizonDialogueMsgTextBlock_GetPageTextByIndex_Params
{
public:
	int32                                        PageIndex;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A2[0x4];                                      // Fixing Size After Last Property
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HorizonUI.HorizonDialogueMsgTextBlock.GetNumPage
struct UHorizonDialogueMsgTextBlock_GetNumPage_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HorizonUI.HorizonDialogueMsgTextBlock.GetNumLine
struct UHorizonDialogueMsgTextBlock_GetNumLine_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function HorizonUI.HorizonDialogueMsgTextBlock.GetJustification
struct UHorizonDialogueMsgTextBlock_GetJustification_Params
{
public:
	enum class ETextJustify                      ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HorizonUI.HorizonDialogueMsgTextBlock.GetCurrentPageTextLength
struct UHorizonDialogueMsgTextBlock_GetCurrentPageTextLength_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HorizonUI.HorizonDialogueMsgTextBlock.GetCurrentPageIndex
struct UHorizonDialogueMsgTextBlock_GetCurrentPageIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function HorizonUI.HorizonDialogueMsgTextBlock.GetBlinkCursorWidget
struct UHorizonDialogueMsgTextBlock_GetBlinkCursorWidget_Params
{
public:
	class UHorizonFlipbookWidget*                ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function HorizonUI.HorizonFileSystem.LoadUAsset
struct UHorizonFileSystem_LoadUAsset_Params
{
public:
	class FString                                InPackageFilePath;                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function HorizonUI.HorizonFileSystem.LoadTexture2D
struct UHorizonFileSystem_LoadTexture2D_Params
{
public:
	class FString                                InPackageFilePath;                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutWidth;                                          // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutHeight;                                         // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function HorizonUI.HorizonFileSystem.LoadSound
struct UHorizonFileSystem_LoadSound_Params
{
public:
	class FString                                InPackageFilePath;                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function HorizonUI.HorizonFileSystem.LoadPaperFlipbook
struct UHorizonFileSystem_LoadPaperFlipbook_Params
{
public:
	class FString                                InPackageFilePath;                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPaperFlipbook*                        ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function HorizonUI.HorizonFileSystem.LoadMaterial
struct UHorizonFileSystem_LoadMaterial_Params
{
public:
	class FString                                InPackageFilePath;                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterial*                             ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function HorizonUI.HorizonFileSystem.LoadFont
struct UHorizonFileSystem_LoadFont_Params
{
public:
	class FString                                InPackageFilePath;                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFont*                                 ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function HorizonUI.HorizonFileSystem.GetInstance
struct UHorizonFileSystem_GetInstance_Params
{
public:
	class UHorizonFileSystem*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function HorizonUI.HorizonFileSystem.DestroyInstance
struct UHorizonFileSystem_DestroyInstance_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function HorizonUI.HorizonFileSystem.CreateDirectoryRecursively
struct UHorizonFileSystem_CreateDirectoryRecursively_Params
{
public:
	class FString                                InFolderToMake;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function HorizonUI.HorizonFlipbookWidget.StopAnimation
struct UHorizonFlipbookWidget_StopAnimation_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function HorizonUI.HorizonFlipbookWidget.SetFlipbook
struct UHorizonFlipbookWidget_SetFlipbook_Params
{
public:
	class UPaperFlipbook*                        InFlipbook;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HorizonUI.HorizonFlipbookWidget.SetCurrentAnimationDuration
struct UHorizonFlipbookWidget_SetCurrentAnimationDuration_Params
{
public:
	float                                        InDuration;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function HorizonUI.HorizonFlipbookWidget.ResumeAnimation
struct UHorizonFlipbookWidget_ResumeAnimation_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HorizonUI.HorizonFlipbookWidget.ResetAnimation
struct UHorizonFlipbookWidget_ResetAnimation_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HorizonUI.HorizonFlipbookWidget.PlayAnimation
struct UHorizonFlipbookWidget_PlayAnimation_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HorizonUI.HorizonFlipbookWidget.PauseAnimation
struct UHorizonFlipbookWidget_PauseAnimation_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// DelegateFunction HorizonUI.HorizonFlipbookWidget.OnHorizonFlipbookStartEvent__DelegateSignature
struct UHorizonFlipbookWidget_OnHorizonFlipbookStartEvent__DelegateSignature_Params
{
public:
	int32                                        InCurrentNumOfLoop;                                // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// DelegateFunction HorizonUI.HorizonFlipbookWidget.OnHorizonFlipbookEvent__DelegateSignature
struct UHorizonFlipbookWidget_OnHorizonFlipbookEvent__DelegateSignature_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function HorizonUI.HorizonFlipbookWidget.GetCurrentAnimationDuration
struct UHorizonFlipbookWidget_GetCurrentAnimationDuration_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function HorizonUI.HorizonListViewItemWidget.SynchronizeProperties
struct UHorizonListViewItemWidget_SynchronizeProperties_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HorizonUI.HorizonListViewItemWidget.OnSynchronizeProperties
struct UHorizonListViewItemWidget_OnSynchronizeProperties_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HorizonUI.HorizonListViewItemWidget.OnListItemObjectUnhovered
struct UHorizonListViewItemWidget_OnListItemObjectUnhovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HorizonUI.HorizonListViewItemWidget.OnListItemObjectReleased
struct UHorizonListViewItemWidget_OnListItemObjectReleased_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HorizonUI.HorizonListViewItemWidget.OnListItemObjectPressed
struct UHorizonListViewItemWidget_OnListItemObjectPressed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HorizonUI.HorizonListViewItemWidget.OnListItemObjectHovered
struct UHorizonListViewItemWidget_OnListItemObjectHovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HorizonUI.HorizonListViewItemWidget.OnListItemObjectClicked
struct UHorizonListViewItemWidget_OnListItemObjectClicked_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HorizonUI.HorizonListViewItemWidget.OnListItemObjectButtonUnhovered
struct UHorizonListViewItemWidget_OnListItemObjectButtonUnhovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HorizonUI.HorizonListViewItemWidget.OnListItemObjectButtonReleased
struct UHorizonListViewItemWidget_OnListItemObjectButtonReleased_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HorizonUI.HorizonListViewItemWidget.OnListItemObjectButtonPressed
struct UHorizonListViewItemWidget_OnListItemObjectButtonPressed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HorizonUI.HorizonListViewItemWidget.OnListItemObjectButtonHovered
struct UHorizonListViewItemWidget_OnListItemObjectButtonHovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HorizonUI.HorizonListViewItemWidget.OnListItemObjectButtonClicked
struct UHorizonListViewItemWidget_OnListItemObjectButtonClicked_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HorizonUI.HorizonMultiToggleButtonWidget.ToggleState_Prev
struct UHorizonMultiToggleButtonWidget_ToggleState_Prev_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HorizonUI.HorizonMultiToggleButtonWidget.ToggleState_Next
struct UHorizonMultiToggleButtonWidget_ToggleState_Next_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function HorizonUI.HorizonMultiToggleButtonWidget.SetLoopToggleState
struct UHorizonMultiToggleButtonWidget_SetLoopToggleState_Params
{
public:
	bool                                         InLoopToggleState;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HorizonUI.HorizonMultiToggleButtonWidget.SetCurrentStateIndex
struct UHorizonMultiToggleButtonWidget_SetCurrentStateIndex_Params
{
public:
	int32                                        InStateIndex;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// DelegateFunction HorizonUI.HorizonMultiToggleButtonWidget.OnHorizonMultiToggleButtonSyncEvent__DelegateSignature
struct UHorizonMultiToggleButtonWidget_OnHorizonMultiToggleButtonSyncEvent__DelegateSignature_Params
{
public:
	int32                                        InCurrentStateIndex;                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction HorizonUI.HorizonMultiToggleButtonWidget.OnHorizonMultiToggleButtonEvent__DelegateSignature
struct UHorizonMultiToggleButtonWidget_OnHorizonMultiToggleButtonEvent__DelegateSignature_Params
{
public:
	int32                                        InCurrentStateIndex;                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InToStateIndex;                                    // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HorizonUI.HorizonMultiToggleButtonWidget.GetToggleState_PrevIndex
struct UHorizonMultiToggleButtonWidget_GetToggleState_PrevIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HorizonUI.HorizonMultiToggleButtonWidget.GetToggleState_NextIndex
struct UHorizonMultiToggleButtonWidget_GetToggleState_NextIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function HorizonUI.HorizonMultiToggleButtonWidget.GetLoopToggleState
struct UHorizonMultiToggleButtonWidget_GetLoopToggleState_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HorizonUI.HorizonMultiToggleButtonWidget.GetCurrentStateIndex
struct UHorizonMultiToggleButtonWidget_GetCurrentStateIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function HorizonUI.HorizonRadioButtonUserWidget.SetChecked
struct UHorizonRadioButtonUserWidget_SetChecked_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// DelegateFunction HorizonUI.HorizonRadioButtonUserWidget.OnHorizonRadioButtonEvent__DelegateSignature
struct UHorizonRadioButtonUserWidget_OnHorizonRadioButtonEvent__DelegateSignature_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function HorizonUI.HorizonRadioButtonUserWidget.NativeOnCheckStateChanged
struct UHorizonRadioButtonUserWidget_NativeOnCheckStateChanged_Params
{
public:
	bool                                         bIsChecked;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function HorizonUI.HorizonRadioButtonUserWidget.BP_OnCheckStateChanged
struct UHorizonRadioButtonUserWidget_BP_OnCheckStateChanged_Params
{
public:
	bool                                         bIsChecked;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function HorizonUI.HorizonTextBlock.GetJustification
struct UHorizonTextBlock_GetJustification_Params
{
public:
	enum class ETextJustify                      ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function HorizonUI.HorizonTileView.SynchronizeProperties
struct UHorizonTileView_SynchronizeProperties_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function HorizonUI.HorizonTileView.RerouteItemUnhovered
struct UHorizonTileView_RerouteItemUnhovered_Params
{
public:
	class UObject*                               InItem;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function HorizonUI.HorizonTileView.RerouteItemReleased
struct UHorizonTileView_RerouteItemReleased_Params
{
public:
	class UObject*                               InItem;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function HorizonUI.HorizonTileView.RerouteItemPressed
struct UHorizonTileView_RerouteItemPressed_Params
{
public:
	class UObject*                               InItem;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function HorizonUI.HorizonTileView.RerouteItemHovered
struct UHorizonTileView_RerouteItemHovered_Params
{
public:
	class UObject*                               InItem;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function HorizonUI.HorizonTileView.RerouteItemClicked
struct UHorizonTileView_RerouteItemClicked_Params
{
public:
	class UObject*                               InItem;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function HorizonUI.HorizonTileView.RequestListRefresh
struct UHorizonTileView_RequestListRefresh_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// DelegateFunction HorizonUI.HorizonTileView.OnItemEvent__DelegateSignature
struct UHorizonTileView_OnItemEvent__DelegateSignature_Params
{
public:
	class UObject*                               InItem;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction HorizonUI.HorizonTileView.OnInitListItemEvent__DelegateSignature
struct UHorizonTileView_OnInitListItemEvent__DelegateSignature_Params
{
public:
	class UHorizonTileView*                      InTileView;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HorizonUI.HorizonTileView.NavigateToAndSelectIndex
struct UHorizonTileView_NavigateToAndSelectIndex_Params
{
public:
	int32                                        InIndex;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function HorizonUI.HorizonTileView.IsPendingRefresh
struct UHorizonTileView_IsPendingRefresh_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function HorizonUI.HorizonTileView.IsFocusable
struct UHorizonTileView_IsFocusable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function HorizonUI.HorizonTileView.InitListItem
struct UHorizonTileView_InitListItem_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function HorizonUI.HorizonTileView.GetNumGeneratedChildren
struct UHorizonTileView_GetNumGeneratedChildren_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function HorizonUI.HorizonTileView.BP_GetEntryWidgetFromItem
struct UHorizonTileView_BP_GetEntryWidgetFromItem_Params
{
public:
	class UObject*                               InItem;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizonListViewItemWidget*            ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function HorizonUI.HorizonWidgetFunctionLibrary.SetWidgetVisibility
struct UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Params
{
public:
	class UUserWidget*                           UserWidget;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  WidgetName;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateVisibility                  EVisiblity;                                        // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A4F[0x7];                                      // Fixing Size After Last Property
	class UWidget*                               ReturnValue;                                       // 0x18(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function HorizonUI.HorizonWidgetFunctionLibrary.SetInputMode
struct UHorizonWidgetFunctionLibrary_SetInputMode_Params
{
public:
	class UPlayerController*                     InPC;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHorizonUIInputMode               InInputMode;                                       // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A53[0x7];                                      // Fixing Size After Last Property
	class UWidget*                               InWidgetToFocus;                                   // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMouseLockMode                    InMouseLockMode;                                   // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInHideCursorDuringCapture;                        // 0x19(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A54[0x6];                                      // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function HorizonUI.HorizonWidgetFunctionLibrary.IsIdeographic
struct UHorizonWidgetFunctionLibrary_IsIdeographic_Params
{
public:
	int32                                        InCodePoint;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A57[0x3];                                      // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function HorizonUI.HorizonWidgetFunctionLibrary.IsAlphabetic
struct UHorizonWidgetFunctionLibrary_IsAlphabetic_Params
{
public:
	int32                                        InCodePoint;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A59[0x3];                                      // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function HorizonUI.HorizonWidgetFunctionLibrary.GetWidgetFromNameRecursively
struct UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively_Params
{
public:
	class UUserWidget*                           PUserWidget;                                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InWidgetName;                                      // 0x8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               ReturnValue;                                       // 0x10(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function HorizonUI.HorizonWidgetFunctionLibrary.GetUserWidgetAnimation
struct UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation_Params
{
public:
	class UUserWidget*                           PUserWidget;                                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AnimeName;                                         // 0x8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetAnimation*                      ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function HorizonUI.HorizonWidgetFunctionLibrary.GetUserIndex
struct UHorizonWidgetFunctionLibrary_GetUserIndex_Params
{
public:
	class UWidget*                               InWidget;                                          // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A64[0x4];                                      // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function HorizonUI.HorizonWidgetFunctionLibrary.GetParentCanvasPanelSlot
struct UHorizonWidgetFunctionLibrary_GetParentCanvasPanelSlot_Params
{
public:
	class UWidget*                               PWidget;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCanvasPanelSlot*                      ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function HorizonUI.HorizonWidgetFunctionLibrary.GetInputMode
struct UHorizonWidgetFunctionLibrary_GetInputMode_Params
{
public:
	class UPlayerController*                     InPC;                                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHorizonUIInputMode               ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A68[0x7];                                      // Fixing Size Of Struct
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
