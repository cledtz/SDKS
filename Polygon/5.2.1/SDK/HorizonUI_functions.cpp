#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function HorizonUI.HorizonButton.OnUnhoveredButton
// (Native, Protected)
// Parameters:

void UHorizonButton::OnUnhoveredButton()
{
	static auto Func = Class->GetFunction("HorizonButton", "OnUnhoveredButton");

	Params::UHorizonButton_OnUnhoveredButton_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonButton.OnReleasedButton
// (Native, Protected)
// Parameters:

void UHorizonButton::OnReleasedButton()
{
	static auto Func = Class->GetFunction("HorizonButton", "OnReleasedButton");

	Params::UHorizonButton_OnReleasedButton_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonButton.OnPressedButton
// (Native, Protected)
// Parameters:

void UHorizonButton::OnPressedButton()
{
	static auto Func = Class->GetFunction("HorizonButton", "OnPressedButton");

	Params::UHorizonButton_OnPressedButton_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonButton.OnHoveredButton
// (Native, Protected)
// Parameters:

void UHorizonButton::OnHoveredButton()
{
	static auto Func = Class->GetFunction("HorizonButton", "OnHoveredButton");

	Params::UHorizonButton_OnHoveredButton_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction HorizonUI.HorizonButton.OnHorizonButtonEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UHorizonButton*              Button                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHorizonButton::OnHorizonButtonEvent__DelegateSignature(class UHorizonButton* Button)
{
	static auto Func = Class->GetFunction("HorizonButton", "OnHorizonButtonEvent__DelegateSignature");

	Params::UHorizonButton_OnHorizonButtonEvent__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HorizonUI.HorizonButton.OnClickedButton
// (Native, Protected)
// Parameters:

void UHorizonButton::OnClickedButton()
{
	static auto Func = Class->GetFunction("HorizonButton", "OnClickedButton");

	Params::UHorizonButton_OnClickedButton_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonDesignableUserWidget.SynchronizeProperties
// (Native, Public, BlueprintCallable)
// Parameters:

void UHorizonDesignableUserWidget::SynchronizeProperties()
{
	static auto Func = Class->GetFunction("HorizonDesignableUserWidget", "SynchronizeProperties");

	Params::UHorizonDesignableUserWidget_SynchronizeProperties_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonDesignableUserWidget.OnSynchronizeProperties
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UHorizonDesignableUserWidget::OnSynchronizeProperties()
{
	static auto Func = Class->GetFunction("HorizonDesignableUserWidget", "OnSynchronizeProperties");

	Params::UHorizonDesignableUserWidget_OnSynchronizeProperties_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonButtonUserWidget.ReceiveOnOnButtonFocusLost
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UHorizonButtonUserWidget::ReceiveOnOnButtonFocusLost(struct FFocusEvent& InFocusEvent)
{
	static auto Func = Class->GetFunction("HorizonButtonUserWidget", "ReceiveOnOnButtonFocusLost");

	Params::UHorizonButtonUserWidget_ReceiveOnOnButtonFocusLost_Params Parms;

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HorizonUI.HorizonButtonUserWidget.ReceiveOnButtonUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UHorizonButtonUserWidget::ReceiveOnButtonUnhovered()
{
	static auto Func = Class->GetFunction("HorizonButtonUserWidget", "ReceiveOnButtonUnhovered");

	Params::UHorizonButtonUserWidget_ReceiveOnButtonUnhovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function HorizonUI.HorizonButtonUserWidget.ReceiveOnButtonReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UHorizonButtonUserWidget::ReceiveOnButtonReleased()
{
	static auto Func = Class->GetFunction("HorizonButtonUserWidget", "ReceiveOnButtonReleased");

	Params::UHorizonButtonUserWidget_ReceiveOnButtonReleased_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function HorizonUI.HorizonButtonUserWidget.ReceiveOnButtonPressed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UHorizonButtonUserWidget::ReceiveOnButtonPressed()
{
	static auto Func = Class->GetFunction("HorizonButtonUserWidget", "ReceiveOnButtonPressed");

	Params::UHorizonButtonUserWidget_ReceiveOnButtonPressed_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function HorizonUI.HorizonButtonUserWidget.ReceiveOnButtonHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UHorizonButtonUserWidget::ReceiveOnButtonHovered()
{
	static auto Func = Class->GetFunction("HorizonButtonUserWidget", "ReceiveOnButtonHovered");

	Params::UHorizonButtonUserWidget_ReceiveOnButtonHovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function HorizonUI.HorizonButtonUserWidget.ReceiveOnButtonFocus
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UHorizonButtonUserWidget::ReceiveOnButtonFocus(struct FFocusEvent& InFocusEvent)
{
	static auto Func = Class->GetFunction("HorizonButtonUserWidget", "ReceiveOnButtonFocus");

	Params::UHorizonButtonUserWidget_ReceiveOnButtonFocus_Params Parms;

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HorizonUI.HorizonButtonUserWidget.ReceiveOnButtonClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UHorizonButtonUserWidget::ReceiveOnButtonClicked()
{
	static auto Func = Class->GetFunction("HorizonButtonUserWidget", "ReceiveOnButtonClicked");

	Params::UHorizonButtonUserWidget_ReceiveOnButtonClicked_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction HorizonUI.HorizonButtonUserWidget.OnHorizonButtonFocusEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class UHorizonButtonUserWidget*    InButton                                                         (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFocusEvent                 InFocusEvent                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UHorizonButtonUserWidget::OnHorizonButtonFocusEvent__DelegateSignature(class UHorizonButtonUserWidget* InButton, struct FFocusEvent& InFocusEvent)
{
	static auto Func = Class->GetFunction("HorizonButtonUserWidget", "OnHorizonButtonFocusEvent__DelegateSignature");

	Params::UHorizonButtonUserWidget_OnHorizonButtonFocusEvent__DelegateSignature_Params Parms;

	Parms.InButton = InButton;
	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction HorizonUI.HorizonButtonUserWidget.OnHorizonButtonEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UHorizonButtonUserWidget*    InButton                                                         (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHorizonButtonUserWidget::OnHorizonButtonEvent__DelegateSignature(class UHorizonButtonUserWidget* InButton)
{
	static auto Func = Class->GetFunction("HorizonButtonUserWidget", "OnHorizonButtonEvent__DelegateSignature");

	Params::UHorizonButtonUserWidget_OnHorizonButtonEvent__DelegateSignature_Params Parms;

	Parms.InButton = InButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HorizonUI.HorizonButtonUserWidget.NativeOnButtonUnhovered
// (Native, Protected)
// Parameters:

void UHorizonButtonUserWidget::NativeOnButtonUnhovered()
{
	static auto Func = Class->GetFunction("HorizonButtonUserWidget", "NativeOnButtonUnhovered");

	Params::UHorizonButtonUserWidget_NativeOnButtonUnhovered_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonButtonUserWidget.NativeOnButtonReleased
// (Native, Protected)
// Parameters:

void UHorizonButtonUserWidget::NativeOnButtonReleased()
{
	static auto Func = Class->GetFunction("HorizonButtonUserWidget", "NativeOnButtonReleased");

	Params::UHorizonButtonUserWidget_NativeOnButtonReleased_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonButtonUserWidget.NativeOnButtonPressed
// (Native, Protected)
// Parameters:

void UHorizonButtonUserWidget::NativeOnButtonPressed()
{
	static auto Func = Class->GetFunction("HorizonButtonUserWidget", "NativeOnButtonPressed");

	Params::UHorizonButtonUserWidget_NativeOnButtonPressed_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonButtonUserWidget.NativeOnButtonHovered
// (Native, Protected)
// Parameters:

void UHorizonButtonUserWidget::NativeOnButtonHovered()
{
	static auto Func = Class->GetFunction("HorizonButtonUserWidget", "NativeOnButtonHovered");

	Params::UHorizonButtonUserWidget_NativeOnButtonHovered_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonButtonUserWidget.NativeOnButtonClicked
// (Native, Protected)
// Parameters:

void UHorizonButtonUserWidget::NativeOnButtonClicked()
{
	static auto Func = Class->GetFunction("HorizonButtonUserWidget", "NativeOnButtonClicked");

	Params::UHorizonButtonUserWidget_NativeOnButtonClicked_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonDialogueMsgDecorator.Run
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UHorizonDialogueMsgTextBlock*InMsgTextBlock                                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHorizonDialogueBlockInfo   InDialogueBlockInfo                                              (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FHorizonDialogueSegmentInfo InSegInfo                                                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHorizonDialogueMsgDecorator::Run(class UHorizonDialogueMsgTextBlock* InMsgTextBlock, struct FHorizonDialogueBlockInfo& InDialogueBlockInfo, struct FHorizonDialogueSegmentInfo& InSegInfo)
{
	static auto Func = Class->GetFunction("HorizonDialogueMsgDecorator", "Run");

	Params::UHorizonDialogueMsgDecorator_Run_Params Parms;

	Parms.InMsgTextBlock = InMsgTextBlock;
	Parms.InDialogueBlockInfo = InDialogueBlockInfo;
	Parms.InSegInfo = InSegInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HorizonUI.HorizonDialogueMsgDecorator.PreRun
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UHorizonDialogueMsgTextBlock*InMsgTextBlock                                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHorizonDialogueBlockInfo   InDialogueBlockInfo                                              (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FHorizonDialogueSegmentInfo InSegInfo                                                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHorizonDialogueMsgDecorator::PreRun(class UHorizonDialogueMsgTextBlock* InMsgTextBlock, struct FHorizonDialogueBlockInfo& InDialogueBlockInfo, struct FHorizonDialogueSegmentInfo& InSegInfo)
{
	static auto Func = Class->GetFunction("HorizonDialogueMsgDecorator", "PreRun");

	Params::UHorizonDialogueMsgDecorator_PreRun_Params Parms;

	Parms.InMsgTextBlock = InMsgTextBlock;
	Parms.InDialogueBlockInfo = InDialogueBlockInfo;
	Parms.InSegInfo = InSegInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HorizonUI.HorizonDialogueMsgDecorator.BuildSegment
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UHorizonDialogueMsgTextBlock*InMsgTextBlock                                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InCurrentSegInfoIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHorizonDialogueSegmentInfo InCurrentSegInfo                                                 (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FHorizonDialogueSegmentInfo>InSegInfos                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHorizonDialogueMsgDecorator::BuildSegment(class UHorizonDialogueMsgTextBlock* InMsgTextBlock, int32 InCurrentSegInfoIndex, struct FHorizonDialogueSegmentInfo& InCurrentSegInfo, TArray<struct FHorizonDialogueSegmentInfo>& InSegInfos)
{
	static auto Func = Class->GetFunction("HorizonDialogueMsgDecorator", "BuildSegment");

	Params::UHorizonDialogueMsgDecorator_BuildSegment_Params Parms;

	Parms.InMsgTextBlock = InMsgTextBlock;
	Parms.InCurrentSegInfoIndex = InCurrentSegInfoIndex;
	Parms.InCurrentSegInfo = InCurrentSegInfo;
	Parms.InSegInfos = InSegInfos;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HorizonUI.HorizonDialogueMsgTextBlock.StopDialogue
// (Native, Public, BlueprintCallable)
// Parameters:

void UHorizonDialogueMsgTextBlock::StopDialogue()
{
	static auto Func = Class->GetFunction("HorizonDialogueMsgTextBlock", "StopDialogue");

	Params::UHorizonDialogueMsgTextBlock_StopDialogue_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonDialogueMsgTextBlock.StartDialogue
// (Native, Public, BlueprintCallable)
// Parameters:

void UHorizonDialogueMsgTextBlock::StartDialogue()
{
	static auto Func = Class->GetFunction("HorizonDialogueMsgTextBlock", "StartDialogue");

	Params::UHorizonDialogueMsgTextBlock_StartDialogue_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonDialogueMsgTextBlock.SkipDialogue
// (Native, Public, BlueprintCallable)
// Parameters:

void UHorizonDialogueMsgTextBlock::SkipDialogue()
{
	static auto Func = Class->GetFunction("HorizonDialogueMsgTextBlock", "SkipDialogue");

	Params::UHorizonDialogueMsgTextBlock_SkipDialogue_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonDialogueMsgTextBlock.SkipCurrentDialoguePage
// (Native, Public, BlueprintCallable)
// Parameters:

void UHorizonDialogueMsgTextBlock::SkipCurrentDialoguePage()
{
	static auto Func = Class->GetFunction("HorizonDialogueMsgTextBlock", "SkipCurrentDialoguePage");

	Params::UHorizonDialogueMsgTextBlock_SkipCurrentDialoguePage_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonDialogueMsgTextBlock.SkipCurrentDialogueMsgPageTick
// (Native, Public, BlueprintCallable)
// Parameters:

void UHorizonDialogueMsgTextBlock::SkipCurrentDialogueMsgPageTick()
{
	static auto Func = Class->GetFunction("HorizonDialogueMsgTextBlock", "SkipCurrentDialogueMsgPageTick");

	Params::UHorizonDialogueMsgTextBlock_SkipCurrentDialogueMsgPageTick_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonDialogueMsgTextBlock.SetTextOverflowWrapMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizonDialogueTextOverflowWrapMethodInOverflowWrapMethod                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHorizonDialogueMsgTextBlock::SetTextOverflowWrapMethod(enum class EHorizonDialogueTextOverflowWrapMethod InOverflowWrapMethod)
{
	static auto Func = Class->GetFunction("HorizonDialogueMsgTextBlock", "SetTextOverflowWrapMethod");

	Params::UHorizonDialogueMsgTextBlock_SetTextOverflowWrapMethod_Params Parms;

	Parms.InOverflowWrapMethod = InOverflowWrapMethod;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonDialogueMsgTextBlock.SetTextAndRebuildDialogueImmediately
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        InText                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UHorizonDialogueMsgTextBlock::SetTextAndRebuildDialogueImmediately(class FText& InText)
{
	static auto Func = Class->GetFunction("HorizonDialogueMsgTextBlock", "SetTextAndRebuildDialogueImmediately");

	Params::UHorizonDialogueMsgTextBlock_SetTextAndRebuildDialogueImmediately_Params Parms;

	Parms.InText = InText;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonDialogueMsgTextBlock.SetTextAndRebuildDialogue
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        InText                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UHorizonDialogueMsgTextBlock::SetTextAndRebuildDialogue(class FText& InText)
{
	static auto Func = Class->GetFunction("HorizonDialogueMsgTextBlock", "SetTextAndRebuildDialogue");

	Params::UHorizonDialogueMsgTextBlock_SetTextAndRebuildDialogue_Params Parms;

	Parms.InText = InText;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonDialogueMsgTextBlock.SetShadowOffset
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InShadowOffset                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForce                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHorizonDialogueMsgTextBlock::SetShadowOffset(const struct FVector2D& InShadowOffset, bool bForce)
{
	static auto Func = Class->GetFunction("HorizonDialogueMsgTextBlock", "SetShadowOffset");

	Params::UHorizonDialogueMsgTextBlock_SetShadowOffset_Params Parms;

	Parms.InShadowOffset = InShadowOffset;
	Parms.bForce = bForce;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonDialogueMsgTextBlock.SetShadowColorAndOpacity
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InShadowColorAndOpacity                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForce                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHorizonDialogueMsgTextBlock::SetShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity, bool bForce)
{
	static auto Func = Class->GetFunction("HorizonDialogueMsgTextBlock", "SetShadowColorAndOpacity");

	Params::UHorizonDialogueMsgTextBlock_SetShadowColorAndOpacity_Params Parms;

	Parms.InShadowColorAndOpacity = InShadowColorAndOpacity;
	Parms.bForce = bForce;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonDialogueMsgTextBlock.SetRepeatDialogueMsgInterval
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              Interval                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHorizonDialogueMsgTextBlock::SetRepeatDialogueMsgInterval(float Interval)
{
	static auto Func = Class->GetFunction("HorizonDialogueMsgTextBlock", "SetRepeatDialogueMsgInterval");

	Params::UHorizonDialogueMsgTextBlock_SetRepeatDialogueMsgInterval_Params Parms;

	Parms.Interval = Interval;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonDialogueMsgTextBlock.SetOpacity
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              InOpacity                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHorizonDialogueMsgTextBlock::SetOpacity(float InOpacity)
{
	static auto Func = Class->GetFunction("HorizonDialogueMsgTextBlock", "SetOpacity");

	Params::UHorizonDialogueMsgTextBlock_SetOpacity_Params Parms;

	Parms.InOpacity = InOpacity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonDialogueMsgTextBlock.SetJustification
// (Native, Public, BlueprintCallable)
// Parameters:
// enum class ETextJustify            InJustification                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForce                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHorizonDialogueMsgTextBlock::SetJustification(enum class ETextJustify InJustification, bool bForce)
{
	static auto Func = Class->GetFunction("HorizonDialogueMsgTextBlock", "SetJustification");

	Params::UHorizonDialogueMsgTextBlock_SetJustification_Params Parms;

	Parms.InJustification = InJustification;
	Parms.bForce = bForce;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonDialogueMsgTextBlock.SetIsStartTickDialogueMsg
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bShouldStartTick                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShouldResetDialogue                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHorizonDialogueMsgTextBlock::SetIsStartTickDialogueMsg(bool bShouldStartTick, bool bShouldResetDialogue)
{
	static auto Func = Class->GetFunction("HorizonDialogueMsgTextBlock", "SetIsStartTickDialogueMsg");

	Params::UHorizonDialogueMsgTextBlock_SetIsStartTickDialogueMsg_Params Parms;

	Parms.bShouldStartTick = bShouldStartTick;
	Parms.bShouldResetDialogue = bShouldResetDialogue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonDialogueMsgTextBlock.SetIsRepeatDialogueMsg
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               B                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHorizonDialogueMsgTextBlock::SetIsRepeatDialogueMsg(bool B)
{
	static auto Func = Class->GetFunction("HorizonDialogueMsgTextBlock", "SetIsRepeatDialogueMsg");

	Params::UHorizonDialogueMsgTextBlock_SetIsRepeatDialogueMsg_Params Parms;

	Parms.B = B;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonDialogueMsgTextBlock.SetIsDialogueMsgText
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               B                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHorizonDialogueMsgTextBlock::SetIsDialogueMsgText(bool B)
{
	static auto Func = Class->GetFunction("HorizonDialogueMsgTextBlock", "SetIsDialogueMsgText");

	Params::UHorizonDialogueMsgTextBlock_SetIsDialogueMsgText_Params Parms;

	Parms.B = B;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonDialogueMsgTextBlock.SetIsAutoNextDialogueMsgPage
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               B                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHorizonDialogueMsgTextBlock::SetIsAutoNextDialogueMsgPage(bool B)
{
	static auto Func = Class->GetFunction("HorizonDialogueMsgTextBlock", "SetIsAutoNextDialogueMsgPage");

	Params::UHorizonDialogueMsgTextBlock_SetIsAutoNextDialogueMsgPage_Params Parms;

	Parms.B = B;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonDialogueMsgTextBlock.SetFontSize
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                              FontSize                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHorizonDialogueMsgTextBlock::SetFontSize(int32 FontSize)
{
	static auto Func = Class->GetFunction("HorizonDialogueMsgTextBlock", "SetFontSize");

	Params::UHorizonDialogueMsgTextBlock_SetFontSize_Params Parms;

	Parms.FontSize = FontSize;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonDialogueMsgTextBlock.SetFont
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateFontInfo              InFontInfo                                                       (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForce                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHorizonDialogueMsgTextBlock::SetFont(const struct FSlateFontInfo& InFontInfo, bool bForce)
{
	static auto Func = Class->GetFunction("HorizonDialogueMsgTextBlock", "SetFont");

	Params::UHorizonDialogueMsgTextBlock_SetFont_Params Parms;

	Parms.InFontInfo = InFontInfo;
	Parms.bForce = bForce;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonDialogueMsgTextBlock.SetDialogueMsgSpeed
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              Speed                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForce                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHorizonDialogueMsgTextBlock::SetDialogueMsgSpeed(float Speed, bool bForce)
{
	static auto Func = Class->GetFunction("HorizonDialogueMsgTextBlock", "SetDialogueMsgSpeed");

	Params::UHorizonDialogueMsgTextBlock_SetDialogueMsgSpeed_Params Parms;

	Parms.Speed = Speed;
	Parms.bForce = bForce;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonDialogueMsgTextBlock.SetDialogueMsgPage
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                              InPageIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShouldStartTick                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHorizonDialogueMsgTextBlock::SetDialogueMsgPage(int32 InPageIndex, bool bShouldStartTick)
{
	static auto Func = Class->GetFunction("HorizonDialogueMsgTextBlock", "SetDialogueMsgPage");

	Params::UHorizonDialogueMsgTextBlock_SetDialogueMsgPage_Params Parms;

	Parms.InPageIndex = InPageIndex;
	Parms.bShouldStartTick = bShouldStartTick;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonDialogueMsgTextBlock.SetColorAndOpacity
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateColor                 InColorAndOpacity                                                (Parm, NativeAccessSpecifierPublic)

void UHorizonDialogueMsgTextBlock::SetColorAndOpacity(const struct FSlateColor& InColorAndOpacity)
{
	static auto Func = Class->GetFunction("HorizonDialogueMsgTextBlock", "SetColorAndOpacity");

	Params::UHorizonDialogueMsgTextBlock_SetColorAndOpacity_Params Parms;

	Parms.InColorAndOpacity = InColorAndOpacity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonDialogueMsgTextBlock.SetAutoNextDialogueMsgPageIntervalRate
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              InAutoNextDialogueMsgPageIntervalRate                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHorizonDialogueMsgTextBlock::SetAutoNextDialogueMsgPageIntervalRate(float InAutoNextDialogueMsgPageIntervalRate)
{
	static auto Func = Class->GetFunction("HorizonDialogueMsgTextBlock", "SetAutoNextDialogueMsgPageIntervalRate");

	Params::UHorizonDialogueMsgTextBlock_SetAutoNextDialogueMsgPageIntervalRate_Params Parms;

	Parms.InAutoNextDialogueMsgPageIntervalRate = InAutoNextDialogueMsgPageIntervalRate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonDialogueMsgTextBlock.ResumeDialogue
// (Native, Public, BlueprintCallable)
// Parameters:

void UHorizonDialogueMsgTextBlock::ResumeDialogue()
{
	static auto Func = Class->GetFunction("HorizonDialogueMsgTextBlock", "ResumeDialogue");

	Params::UHorizonDialogueMsgTextBlock_ResumeDialogue_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonDialogueMsgTextBlock.RequestRebuildDialogue
// (Native, Public, BlueprintCallable)
// Parameters:

void UHorizonDialogueMsgTextBlock::RequestRebuildDialogue()
{
	static auto Func = Class->GetFunction("HorizonDialogueMsgTextBlock", "RequestRebuildDialogue");

	Params::UHorizonDialogueMsgTextBlock_RequestRebuildDialogue_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonDialogueMsgTextBlock.RebuildDialogueMsgTextBlock
// (Native, Public, BlueprintCallable)
// Parameters:

void UHorizonDialogueMsgTextBlock::RebuildDialogueMsgTextBlock()
{
	static auto Func = Class->GetFunction("HorizonDialogueMsgTextBlock", "RebuildDialogueMsgTextBlock");

	Params::UHorizonDialogueMsgTextBlock_RebuildDialogueMsgTextBlock_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonDialogueMsgTextBlock.PrevDialogueMsgPage
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bShouldStartTick                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHorizonDialogueMsgTextBlock::PrevDialogueMsgPage(bool bShouldStartTick)
{
	static auto Func = Class->GetFunction("HorizonDialogueMsgTextBlock", "PrevDialogueMsgPage");

	Params::UHorizonDialogueMsgTextBlock_PrevDialogueMsgPage_Params Parms;

	Parms.bShouldStartTick = bShouldStartTick;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonDialogueMsgTextBlock.PauseDialogue
// (Native, Public, BlueprintCallable)
// Parameters:

void UHorizonDialogueMsgTextBlock::PauseDialogue()
{
	static auto Func = Class->GetFunction("HorizonDialogueMsgTextBlock", "PauseDialogue");

	Params::UHorizonDialogueMsgTextBlock_PauseDialogue_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction HorizonUI.HorizonDialogueMsgTextBlock.OnHorizonHypertextEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FHorizonDialogueHypertextResultInResult                                                         (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UHorizonDialogueMsgTextBlock::OnHorizonHypertextEvent__DelegateSignature(struct FHorizonDialogueHypertextResult& InResult)
{
	static auto Func = Class->GetFunction("HorizonDialogueMsgTextBlock", "OnHorizonHypertextEvent__DelegateSignature");

	Params::UHorizonDialogueMsgTextBlock_OnHorizonHypertextEvent__DelegateSignature_Params Parms;

	Parms.InResult = InResult;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction HorizonUI.HorizonDialogueMsgTextBlock.OnHorizonDialoguePageEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FHorizonDialogueDialoguePageResultInResult                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UHorizonDialogueMsgTextBlock::OnHorizonDialoguePageEvent__DelegateSignature(struct FHorizonDialogueDialoguePageResult& InResult)
{
	static auto Func = Class->GetFunction("HorizonDialogueMsgTextBlock", "OnHorizonDialoguePageEvent__DelegateSignature");

	Params::UHorizonDialogueMsgTextBlock_OnHorizonDialoguePageEvent__DelegateSignature_Params Parms;

	Parms.InResult = InResult;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction HorizonUI.HorizonDialogueMsgTextBlock.OnHorizonDialogueMsgEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UHorizonDialogueMsgTextBlock::OnHorizonDialogueMsgEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("HorizonDialogueMsgTextBlock", "OnHorizonDialogueMsgEvent__DelegateSignature");

	Params::UHorizonDialogueMsgTextBlock_OnHorizonDialogueMsgEvent__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction HorizonUI.HorizonDialogueMsgTextBlock.OnHorizonDialogueCustomEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FString                      InEventName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHorizonDialogueSegmentInfo InSegInfo                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UHorizonDialogueMsgTextBlock::OnHorizonDialogueCustomEvent__DelegateSignature(const class FString& InEventName, struct FHorizonDialogueSegmentInfo& InSegInfo)
{
	static auto Func = Class->GetFunction("HorizonDialogueMsgTextBlock", "OnHorizonDialogueCustomEvent__DelegateSignature");

	Params::UHorizonDialogueMsgTextBlock_OnHorizonDialogueCustomEvent__DelegateSignature_Params Parms;

	Parms.InEventName = InEventName;
	Parms.InSegInfo = InSegInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction HorizonUI.HorizonDialogueMsgTextBlock.OnHorizonDialogueCharAdvancedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FHorizonDialogueBlockInfo   InCurrentBlockInfo                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UHorizonDialogueMsgTextBlock::OnHorizonDialogueCharAdvancedEvent__DelegateSignature(struct FHorizonDialogueBlockInfo& InCurrentBlockInfo)
{
	static auto Func = Class->GetFunction("HorizonDialogueMsgTextBlock", "OnHorizonDialogueCharAdvancedEvent__DelegateSignature");

	Params::UHorizonDialogueMsgTextBlock_OnHorizonDialogueCharAdvancedEvent__DelegateSignature_Params Parms;

	Parms.InCurrentBlockInfo = InCurrentBlockInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HorizonUI.HorizonDialogueMsgTextBlock.NextDialogueMsgPage
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bShouldStartTick                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHorizonDialogueMsgTextBlock::NextDialogueMsgPage(bool bShouldStartTick)
{
	static auto Func = Class->GetFunction("HorizonDialogueMsgTextBlock", "NextDialogueMsgPage");

	Params::UHorizonDialogueMsgTextBlock_NextDialogueMsgPage_Params Parms;

	Parms.bShouldStartTick = bShouldStartTick;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonDialogueMsgTextBlock.IsDialogueMsgPageEnd
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHorizonDialogueMsgTextBlock::IsDialogueMsgPageEnd()
{
	static auto Func = Class->GetFunction("HorizonDialogueMsgTextBlock", "IsDialogueMsgPageEnd");

	Params::UHorizonDialogueMsgTextBlock_IsDialogueMsgPageEnd_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HorizonUI.HorizonDialogueMsgTextBlock.IsDialogueMsgCompleted
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHorizonDialogueMsgTextBlock::IsDialogueMsgCompleted()
{
	static auto Func = Class->GetFunction("HorizonDialogueMsgTextBlock", "IsDialogueMsgCompleted");

	Params::UHorizonDialogueMsgTextBlock_IsDialogueMsgCompleted_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HorizonUI.HorizonDialogueMsgTextBlock.GetTextOverflowWrapMethod
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EHorizonDialogueTextOverflowWrapMethodReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EHorizonDialogueTextOverflowWrapMethod UHorizonDialogueMsgTextBlock::GetTextOverflowWrapMethod()
{
	static auto Func = Class->GetFunction("HorizonDialogueMsgTextBlock", "GetTextOverflowWrapMethod");

	Params::UHorizonDialogueMsgTextBlock_GetTextOverflowWrapMethod_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HorizonUI.HorizonDialogueMsgTextBlock.GetTextLength
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UHorizonDialogueMsgTextBlock::GetTextLength()
{
	static auto Func = Class->GetFunction("HorizonDialogueMsgTextBlock", "GetTextLength");

	Params::UHorizonDialogueMsgTextBlock_GetTextLength_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HorizonUI.HorizonDialogueMsgTextBlock.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UHorizonDialogueMsgTextBlock::GetText()
{
	static auto Func = Class->GetFunction("HorizonDialogueMsgTextBlock", "GetText");

	Params::UHorizonDialogueMsgTextBlock_GetText_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HorizonUI.HorizonDialogueMsgTextBlock.GetPageTextByIndex
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              PageIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UHorizonDialogueMsgTextBlock::GetPageTextByIndex(int32 PageIndex)
{
	static auto Func = Class->GetFunction("HorizonDialogueMsgTextBlock", "GetPageTextByIndex");

	Params::UHorizonDialogueMsgTextBlock_GetPageTextByIndex_Params Parms;

	Parms.PageIndex = PageIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HorizonUI.HorizonDialogueMsgTextBlock.GetNumPage
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UHorizonDialogueMsgTextBlock::GetNumPage()
{
	static auto Func = Class->GetFunction("HorizonDialogueMsgTextBlock", "GetNumPage");

	Params::UHorizonDialogueMsgTextBlock_GetNumPage_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HorizonUI.HorizonDialogueMsgTextBlock.GetNumLine
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UHorizonDialogueMsgTextBlock::GetNumLine()
{
	static auto Func = Class->GetFunction("HorizonDialogueMsgTextBlock", "GetNumLine");

	Params::UHorizonDialogueMsgTextBlock_GetNumLine_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HorizonUI.HorizonDialogueMsgTextBlock.GetJustification
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ETextJustify            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ETextJustify UHorizonDialogueMsgTextBlock::GetJustification()
{
	static auto Func = Class->GetFunction("HorizonDialogueMsgTextBlock", "GetJustification");

	Params::UHorizonDialogueMsgTextBlock_GetJustification_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HorizonUI.HorizonDialogueMsgTextBlock.GetCurrentPageTextLength
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UHorizonDialogueMsgTextBlock::GetCurrentPageTextLength()
{
	static auto Func = Class->GetFunction("HorizonDialogueMsgTextBlock", "GetCurrentPageTextLength");

	Params::UHorizonDialogueMsgTextBlock_GetCurrentPageTextLength_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HorizonUI.HorizonDialogueMsgTextBlock.GetCurrentPageIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UHorizonDialogueMsgTextBlock::GetCurrentPageIndex()
{
	static auto Func = Class->GetFunction("HorizonDialogueMsgTextBlock", "GetCurrentPageIndex");

	Params::UHorizonDialogueMsgTextBlock_GetCurrentPageIndex_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HorizonUI.HorizonDialogueMsgTextBlock.GetBlinkCursorWidget
// (Native, Public, Const)
// Parameters:
// class UHorizonFlipbookWidget*      ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UHorizonFlipbookWidget* UHorizonDialogueMsgTextBlock::GetBlinkCursorWidget()
{
	static auto Func = Class->GetFunction("HorizonDialogueMsgTextBlock", "GetBlinkCursorWidget");

	Params::UHorizonDialogueMsgTextBlock_GetBlinkCursorWidget_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HorizonUI.HorizonFileSystem.LoadUAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InPackageFilePath                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UHorizonFileSystem::LoadUAsset(const class FString& InPackageFilePath)
{
	static auto Func = Class->GetFunction("HorizonFileSystem", "LoadUAsset");

	Params::UHorizonFileSystem_LoadUAsset_Params Parms;

	Parms.InPackageFilePath = InPackageFilePath;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HorizonUI.HorizonFileSystem.LoadTexture2D
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      InPackageFilePath                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OutWidth                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OutHeight                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture2D* UHorizonFileSystem::LoadTexture2D(const class FString& InPackageFilePath, int32* OutWidth, int32* OutHeight)
{
	static auto Func = Class->GetFunction("HorizonFileSystem", "LoadTexture2D");

	Params::UHorizonFileSystem_LoadTexture2D_Params Parms;

	Parms.InPackageFilePath = InPackageFilePath;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutWidth != nullptr)
		*OutWidth = Parms.OutWidth;

	if (OutHeight != nullptr)
		*OutHeight = Parms.OutHeight;

	return Parms.ReturnValue;

}


// Function HorizonUI.HorizonFileSystem.LoadSound
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InPackageFilePath                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundBase*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USoundBase* UHorizonFileSystem::LoadSound(const class FString& InPackageFilePath)
{
	static auto Func = Class->GetFunction("HorizonFileSystem", "LoadSound");

	Params::UHorizonFileSystem_LoadSound_Params Parms;

	Parms.InPackageFilePath = InPackageFilePath;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HorizonUI.HorizonFileSystem.LoadPaperFlipbook
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InPackageFilePath                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPaperFlipbook*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPaperFlipbook* UHorizonFileSystem::LoadPaperFlipbook(const class FString& InPackageFilePath)
{
	static auto Func = Class->GetFunction("HorizonFileSystem", "LoadPaperFlipbook");

	Params::UHorizonFileSystem_LoadPaperFlipbook_Params Parms;

	Parms.InPackageFilePath = InPackageFilePath;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HorizonUI.HorizonFileSystem.LoadMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InPackageFilePath                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterial*                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterial* UHorizonFileSystem::LoadMaterial(const class FString& InPackageFilePath)
{
	static auto Func = Class->GetFunction("HorizonFileSystem", "LoadMaterial");

	Params::UHorizonFileSystem_LoadMaterial_Params Parms;

	Parms.InPackageFilePath = InPackageFilePath;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HorizonUI.HorizonFileSystem.LoadFont
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InPackageFilePath                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFont*                       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFont* UHorizonFileSystem::LoadFont(const class FString& InPackageFilePath)
{
	static auto Func = Class->GetFunction("HorizonFileSystem", "LoadFont");

	Params::UHorizonFileSystem_LoadFont_Params Parms;

	Parms.InPackageFilePath = InPackageFilePath;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HorizonUI.HorizonFileSystem.GetInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UHorizonFileSystem*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UHorizonFileSystem* UHorizonFileSystem::GetInstance()
{
	static auto Func = Class->GetFunction("HorizonFileSystem", "GetInstance");

	Params::UHorizonFileSystem_GetInstance_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HorizonUI.HorizonFileSystem.DestroyInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UHorizonFileSystem::DestroyInstance()
{
	static auto Func = Class->GetFunction("HorizonFileSystem", "DestroyInstance");

	Params::UHorizonFileSystem_DestroyInstance_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonFileSystem.CreateDirectoryRecursively
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InFolderToMake                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHorizonFileSystem::CreateDirectoryRecursively(const class FString& InFolderToMake)
{
	static auto Func = Class->GetFunction("HorizonFileSystem", "CreateDirectoryRecursively");

	Params::UHorizonFileSystem_CreateDirectoryRecursively_Params Parms;

	Parms.InFolderToMake = InFolderToMake;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonFlipbookWidget.StopAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UHorizonFlipbookWidget::StopAnimation()
{
	static auto Func = Class->GetFunction("HorizonFlipbookWidget", "StopAnimation");

	Params::UHorizonFlipbookWidget_StopAnimation_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonFlipbookWidget.SetFlipbook
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPaperFlipbook*              InFlipbook                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHorizonFlipbookWidget::SetFlipbook(class UPaperFlipbook* InFlipbook)
{
	static auto Func = Class->GetFunction("HorizonFlipbookWidget", "SetFlipbook");

	Params::UHorizonFlipbookWidget_SetFlipbook_Params Parms;

	Parms.InFlipbook = InFlipbook;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonFlipbookWidget.SetCurrentAnimationDuration
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InDuration                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHorizonFlipbookWidget::SetCurrentAnimationDuration(float InDuration)
{
	static auto Func = Class->GetFunction("HorizonFlipbookWidget", "SetCurrentAnimationDuration");

	Params::UHorizonFlipbookWidget_SetCurrentAnimationDuration_Params Parms;

	Parms.InDuration = InDuration;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonFlipbookWidget.ResumeAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UHorizonFlipbookWidget::ResumeAnimation()
{
	static auto Func = Class->GetFunction("HorizonFlipbookWidget", "ResumeAnimation");

	Params::UHorizonFlipbookWidget_ResumeAnimation_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonFlipbookWidget.ResetAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UHorizonFlipbookWidget::ResetAnimation()
{
	static auto Func = Class->GetFunction("HorizonFlipbookWidget", "ResetAnimation");

	Params::UHorizonFlipbookWidget_ResetAnimation_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonFlipbookWidget.PlayAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UHorizonFlipbookWidget::PlayAnimation()
{
	static auto Func = Class->GetFunction("HorizonFlipbookWidget", "PlayAnimation");

	Params::UHorizonFlipbookWidget_PlayAnimation_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonFlipbookWidget.PauseAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UHorizonFlipbookWidget::PauseAnimation()
{
	static auto Func = Class->GetFunction("HorizonFlipbookWidget", "PauseAnimation");

	Params::UHorizonFlipbookWidget_PauseAnimation_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction HorizonUI.HorizonFlipbookWidget.OnHorizonFlipbookStartEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int32                              InCurrentNumOfLoop                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHorizonFlipbookWidget::OnHorizonFlipbookStartEvent__DelegateSignature(int32 InCurrentNumOfLoop)
{
	static auto Func = Class->GetFunction("HorizonFlipbookWidget", "OnHorizonFlipbookStartEvent__DelegateSignature");

	Params::UHorizonFlipbookWidget_OnHorizonFlipbookStartEvent__DelegateSignature_Params Parms;

	Parms.InCurrentNumOfLoop = InCurrentNumOfLoop;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction HorizonUI.HorizonFlipbookWidget.OnHorizonFlipbookEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UHorizonFlipbookWidget::OnHorizonFlipbookEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("HorizonFlipbookWidget", "OnHorizonFlipbookEvent__DelegateSignature");

	Params::UHorizonFlipbookWidget_OnHorizonFlipbookEvent__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function HorizonUI.HorizonFlipbookWidget.GetCurrentAnimationDuration
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UHorizonFlipbookWidget::GetCurrentAnimationDuration()
{
	static auto Func = Class->GetFunction("HorizonFlipbookWidget", "GetCurrentAnimationDuration");

	Params::UHorizonFlipbookWidget_GetCurrentAnimationDuration_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HorizonUI.HorizonListViewItemWidget.SynchronizeProperties
// (Native, Public, BlueprintCallable)
// Parameters:

void UHorizonListViewItemWidget::SynchronizeProperties()
{
	static auto Func = Class->GetFunction("HorizonListViewItemWidget", "SynchronizeProperties");

	Params::UHorizonListViewItemWidget_SynchronizeProperties_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonListViewItemWidget.OnSynchronizeProperties
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UHorizonListViewItemWidget::OnSynchronizeProperties()
{
	static auto Func = Class->GetFunction("HorizonListViewItemWidget", "OnSynchronizeProperties");

	Params::UHorizonListViewItemWidget_OnSynchronizeProperties_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonListViewItemWidget.OnListItemObjectUnhovered
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHorizonListViewItemWidget::OnListItemObjectUnhovered()
{
	static auto Func = Class->GetFunction("HorizonListViewItemWidget", "OnListItemObjectUnhovered");

	Params::UHorizonListViewItemWidget_OnListItemObjectUnhovered_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonListViewItemWidget.OnListItemObjectReleased
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHorizonListViewItemWidget::OnListItemObjectReleased()
{
	static auto Func = Class->GetFunction("HorizonListViewItemWidget", "OnListItemObjectReleased");

	Params::UHorizonListViewItemWidget_OnListItemObjectReleased_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonListViewItemWidget.OnListItemObjectPressed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHorizonListViewItemWidget::OnListItemObjectPressed()
{
	static auto Func = Class->GetFunction("HorizonListViewItemWidget", "OnListItemObjectPressed");

	Params::UHorizonListViewItemWidget_OnListItemObjectPressed_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonListViewItemWidget.OnListItemObjectHovered
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHorizonListViewItemWidget::OnListItemObjectHovered()
{
	static auto Func = Class->GetFunction("HorizonListViewItemWidget", "OnListItemObjectHovered");

	Params::UHorizonListViewItemWidget_OnListItemObjectHovered_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonListViewItemWidget.OnListItemObjectClicked
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHorizonListViewItemWidget::OnListItemObjectClicked()
{
	static auto Func = Class->GetFunction("HorizonListViewItemWidget", "OnListItemObjectClicked");

	Params::UHorizonListViewItemWidget_OnListItemObjectClicked_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonListViewItemWidget.OnListItemObjectButtonUnhovered
// (Native, Protected)
// Parameters:

void UHorizonListViewItemWidget::OnListItemObjectButtonUnhovered()
{
	static auto Func = Class->GetFunction("HorizonListViewItemWidget", "OnListItemObjectButtonUnhovered");

	Params::UHorizonListViewItemWidget_OnListItemObjectButtonUnhovered_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonListViewItemWidget.OnListItemObjectButtonReleased
// (Native, Protected)
// Parameters:

void UHorizonListViewItemWidget::OnListItemObjectButtonReleased()
{
	static auto Func = Class->GetFunction("HorizonListViewItemWidget", "OnListItemObjectButtonReleased");

	Params::UHorizonListViewItemWidget_OnListItemObjectButtonReleased_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonListViewItemWidget.OnListItemObjectButtonPressed
// (Native, Protected)
// Parameters:

void UHorizonListViewItemWidget::OnListItemObjectButtonPressed()
{
	static auto Func = Class->GetFunction("HorizonListViewItemWidget", "OnListItemObjectButtonPressed");

	Params::UHorizonListViewItemWidget_OnListItemObjectButtonPressed_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonListViewItemWidget.OnListItemObjectButtonHovered
// (Native, Protected)
// Parameters:

void UHorizonListViewItemWidget::OnListItemObjectButtonHovered()
{
	static auto Func = Class->GetFunction("HorizonListViewItemWidget", "OnListItemObjectButtonHovered");

	Params::UHorizonListViewItemWidget_OnListItemObjectButtonHovered_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonListViewItemWidget.OnListItemObjectButtonClicked
// (Native, Protected)
// Parameters:

void UHorizonListViewItemWidget::OnListItemObjectButtonClicked()
{
	static auto Func = Class->GetFunction("HorizonListViewItemWidget", "OnListItemObjectButtonClicked");

	Params::UHorizonListViewItemWidget_OnListItemObjectButtonClicked_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonMultiToggleButtonWidget.ToggleState_Prev
// (Native, Public, BlueprintCallable)
// Parameters:

void UHorizonMultiToggleButtonWidget::ToggleState_Prev()
{
	static auto Func = Class->GetFunction("HorizonMultiToggleButtonWidget", "ToggleState_Prev");

	Params::UHorizonMultiToggleButtonWidget_ToggleState_Prev_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonMultiToggleButtonWidget.ToggleState_Next
// (Native, Public, BlueprintCallable)
// Parameters:

void UHorizonMultiToggleButtonWidget::ToggleState_Next()
{
	static auto Func = Class->GetFunction("HorizonMultiToggleButtonWidget", "ToggleState_Next");

	Params::UHorizonMultiToggleButtonWidget_ToggleState_Next_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonMultiToggleButtonWidget.SetLoopToggleState
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               InLoopToggleState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHorizonMultiToggleButtonWidget::SetLoopToggleState(bool InLoopToggleState)
{
	static auto Func = Class->GetFunction("HorizonMultiToggleButtonWidget", "SetLoopToggleState");

	Params::UHorizonMultiToggleButtonWidget_SetLoopToggleState_Params Parms;

	Parms.InLoopToggleState = InLoopToggleState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonMultiToggleButtonWidget.SetCurrentStateIndex
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                              InStateIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHorizonMultiToggleButtonWidget::SetCurrentStateIndex(int32 InStateIndex)
{
	static auto Func = Class->GetFunction("HorizonMultiToggleButtonWidget", "SetCurrentStateIndex");

	Params::UHorizonMultiToggleButtonWidget_SetCurrentStateIndex_Params Parms;

	Parms.InStateIndex = InStateIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction HorizonUI.HorizonMultiToggleButtonWidget.OnHorizonMultiToggleButtonSyncEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int32                              InCurrentStateIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHorizonMultiToggleButtonWidget::OnHorizonMultiToggleButtonSyncEvent__DelegateSignature(int32 InCurrentStateIndex)
{
	static auto Func = Class->GetFunction("HorizonMultiToggleButtonWidget", "OnHorizonMultiToggleButtonSyncEvent__DelegateSignature");

	Params::UHorizonMultiToggleButtonWidget_OnHorizonMultiToggleButtonSyncEvent__DelegateSignature_Params Parms;

	Parms.InCurrentStateIndex = InCurrentStateIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction HorizonUI.HorizonMultiToggleButtonWidget.OnHorizonMultiToggleButtonEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int32                              InCurrentStateIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InToStateIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHorizonMultiToggleButtonWidget::OnHorizonMultiToggleButtonEvent__DelegateSignature(int32 InCurrentStateIndex, int32 InToStateIndex)
{
	static auto Func = Class->GetFunction("HorizonMultiToggleButtonWidget", "OnHorizonMultiToggleButtonEvent__DelegateSignature");

	Params::UHorizonMultiToggleButtonWidget_OnHorizonMultiToggleButtonEvent__DelegateSignature_Params Parms;

	Parms.InCurrentStateIndex = InCurrentStateIndex;
	Parms.InToStateIndex = InToStateIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HorizonUI.HorizonMultiToggleButtonWidget.GetToggleState_PrevIndex
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UHorizonMultiToggleButtonWidget::GetToggleState_PrevIndex()
{
	static auto Func = Class->GetFunction("HorizonMultiToggleButtonWidget", "GetToggleState_PrevIndex");

	Params::UHorizonMultiToggleButtonWidget_GetToggleState_PrevIndex_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HorizonUI.HorizonMultiToggleButtonWidget.GetToggleState_NextIndex
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UHorizonMultiToggleButtonWidget::GetToggleState_NextIndex()
{
	static auto Func = Class->GetFunction("HorizonMultiToggleButtonWidget", "GetToggleState_NextIndex");

	Params::UHorizonMultiToggleButtonWidget_GetToggleState_NextIndex_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HorizonUI.HorizonMultiToggleButtonWidget.GetLoopToggleState
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHorizonMultiToggleButtonWidget::GetLoopToggleState()
{
	static auto Func = Class->GetFunction("HorizonMultiToggleButtonWidget", "GetLoopToggleState");

	Params::UHorizonMultiToggleButtonWidget_GetLoopToggleState_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HorizonUI.HorizonMultiToggleButtonWidget.GetCurrentStateIndex
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UHorizonMultiToggleButtonWidget::GetCurrentStateIndex()
{
	static auto Func = Class->GetFunction("HorizonMultiToggleButtonWidget", "GetCurrentStateIndex");

	Params::UHorizonMultiToggleButtonWidget_GetCurrentStateIndex_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HorizonUI.HorizonRadioButtonUserWidget.SetChecked
// (Native, Public, BlueprintCallable)
// Parameters:

void UHorizonRadioButtonUserWidget::SetChecked()
{
	static auto Func = Class->GetFunction("HorizonRadioButtonUserWidget", "SetChecked");

	Params::UHorizonRadioButtonUserWidget_SetChecked_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction HorizonUI.HorizonRadioButtonUserWidget.OnHorizonRadioButtonEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UHorizonRadioButtonUserWidget::OnHorizonRadioButtonEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("HorizonRadioButtonUserWidget", "OnHorizonRadioButtonEvent__DelegateSignature");

	Params::UHorizonRadioButtonUserWidget_OnHorizonRadioButtonEvent__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function HorizonUI.HorizonRadioButtonUserWidget.NativeOnCheckStateChanged
// (Native, Protected)
// Parameters:
// bool                               bIsChecked                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHorizonRadioButtonUserWidget::NativeOnCheckStateChanged(bool bIsChecked)
{
	static auto Func = Class->GetFunction("HorizonRadioButtonUserWidget", "NativeOnCheckStateChanged");

	Params::UHorizonRadioButtonUserWidget_NativeOnCheckStateChanged_Params Parms;

	Parms.bIsChecked = bIsChecked;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonRadioButtonUserWidget.BP_OnCheckStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHorizonRadioButtonUserWidget::BP_OnCheckStateChanged(bool bIsChecked)
{
	static auto Func = Class->GetFunction("HorizonRadioButtonUserWidget", "BP_OnCheckStateChanged");

	Params::UHorizonRadioButtonUserWidget_BP_OnCheckStateChanged_Params Parms;

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HorizonUI.HorizonTextBlock.GetJustification
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ETextJustify            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ETextJustify UHorizonTextBlock::GetJustification()
{
	static auto Func = Class->GetFunction("HorizonTextBlock", "GetJustification");

	Params::UHorizonTextBlock_GetJustification_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HorizonUI.HorizonTileView.SynchronizeProperties
// (Native, Public, BlueprintCallable)
// Parameters:

void UHorizonTileView::SynchronizeProperties()
{
	static auto Func = Class->GetFunction("HorizonTileView", "SynchronizeProperties");

	Params::UHorizonTileView_SynchronizeProperties_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonTileView.RerouteItemUnhovered
// (Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     InItem                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHorizonTileView::RerouteItemUnhovered(class UObject* InItem)
{
	static auto Func = Class->GetFunction("HorizonTileView", "RerouteItemUnhovered");

	Params::UHorizonTileView_RerouteItemUnhovered_Params Parms;

	Parms.InItem = InItem;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonTileView.RerouteItemReleased
// (Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     InItem                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHorizonTileView::RerouteItemReleased(class UObject* InItem)
{
	static auto Func = Class->GetFunction("HorizonTileView", "RerouteItemReleased");

	Params::UHorizonTileView_RerouteItemReleased_Params Parms;

	Parms.InItem = InItem;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonTileView.RerouteItemPressed
// (Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     InItem                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHorizonTileView::RerouteItemPressed(class UObject* InItem)
{
	static auto Func = Class->GetFunction("HorizonTileView", "RerouteItemPressed");

	Params::UHorizonTileView_RerouteItemPressed_Params Parms;

	Parms.InItem = InItem;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonTileView.RerouteItemHovered
// (Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     InItem                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHorizonTileView::RerouteItemHovered(class UObject* InItem)
{
	static auto Func = Class->GetFunction("HorizonTileView", "RerouteItemHovered");

	Params::UHorizonTileView_RerouteItemHovered_Params Parms;

	Parms.InItem = InItem;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonTileView.RerouteItemClicked
// (Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     InItem                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHorizonTileView::RerouteItemClicked(class UObject* InItem)
{
	static auto Func = Class->GetFunction("HorizonTileView", "RerouteItemClicked");

	Params::UHorizonTileView_RerouteItemClicked_Params Parms;

	Parms.InItem = InItem;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonTileView.RequestListRefresh
// (Native, Public, BlueprintCallable)
// Parameters:

void UHorizonTileView::RequestListRefresh()
{
	static auto Func = Class->GetFunction("HorizonTileView", "RequestListRefresh");

	Params::UHorizonTileView_RequestListRefresh_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction HorizonUI.HorizonTileView.OnItemEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UObject*                     InItem                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHorizonTileView::OnItemEvent__DelegateSignature(class UObject* InItem)
{
	static auto Func = Class->GetFunction("HorizonTileView", "OnItemEvent__DelegateSignature");

	Params::UHorizonTileView_OnItemEvent__DelegateSignature_Params Parms;

	Parms.InItem = InItem;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction HorizonUI.HorizonTileView.OnInitListItemEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UHorizonTileView*            InTileView                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHorizonTileView::OnInitListItemEvent__DelegateSignature(class UHorizonTileView* InTileView)
{
	static auto Func = Class->GetFunction("HorizonTileView", "OnInitListItemEvent__DelegateSignature");

	Params::UHorizonTileView_OnInitListItemEvent__DelegateSignature_Params Parms;

	Parms.InTileView = InTileView;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HorizonUI.HorizonTileView.NavigateToAndSelectIndex
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                              InIndex                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHorizonTileView::NavigateToAndSelectIndex(int32 InIndex)
{
	static auto Func = Class->GetFunction("HorizonTileView", "NavigateToAndSelectIndex");

	Params::UHorizonTileView_NavigateToAndSelectIndex_Params Parms;

	Parms.InIndex = InIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonTileView.IsPendingRefresh
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHorizonTileView::IsPendingRefresh()
{
	static auto Func = Class->GetFunction("HorizonTileView", "IsPendingRefresh");

	Params::UHorizonTileView_IsPendingRefresh_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HorizonUI.HorizonTileView.IsFocusable
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHorizonTileView::IsFocusable()
{
	static auto Func = Class->GetFunction("HorizonTileView", "IsFocusable");

	Params::UHorizonTileView_IsFocusable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HorizonUI.HorizonTileView.InitListItem
// (Native, Public, BlueprintCallable)
// Parameters:

void UHorizonTileView::InitListItem()
{
	static auto Func = Class->GetFunction("HorizonTileView", "InitListItem");

	Params::UHorizonTileView_InitListItem_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonTileView.GetNumGeneratedChildren
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UHorizonTileView::GetNumGeneratedChildren()
{
	static auto Func = Class->GetFunction("HorizonTileView", "GetNumGeneratedChildren");

	Params::UHorizonTileView_GetNumGeneratedChildren_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HorizonUI.HorizonTileView.BP_GetEntryWidgetFromItem
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     InItem                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UHorizonListViewItemWidget*  ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UHorizonListViewItemWidget* UHorizonTileView::BP_GetEntryWidgetFromItem(class UObject* InItem)
{
	static auto Func = Class->GetFunction("HorizonTileView", "BP_GetEntryWidgetFromItem");

	Params::UHorizonTileView_BP_GetEntryWidgetFromItem_Params Parms;

	Parms.InItem = InItem;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HorizonUI.HorizonWidgetFunctionLibrary.SetWidgetVisibility
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*                 UserWidget                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        WidgetName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESlateVisibility        EVisiblity                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UHorizonWidgetFunctionLibrary::SetWidgetVisibility(class UUserWidget* UserWidget, class FName WidgetName, enum class ESlateVisibility EVisiblity)
{
	static auto Func = Class->GetFunction("HorizonWidgetFunctionLibrary", "SetWidgetVisibility");

	Params::UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Params Parms;

	Parms.UserWidget = UserWidget;
	Parms.WidgetName = WidgetName;
	Parms.EVisiblity = EVisiblity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HorizonUI.HorizonWidgetFunctionLibrary.SetInputMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPlayerController*           InPC                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EHorizonUIInputMode     InInputMode                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     InWidgetToFocus                                                  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMouseLockMode          InMouseLockMode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInHideCursorDuringCapture                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHorizonWidgetFunctionLibrary::SetInputMode(class UPlayerController* InPC, enum class EHorizonUIInputMode InInputMode, class UWidget* InWidgetToFocus, enum class EMouseLockMode InMouseLockMode, bool bInHideCursorDuringCapture)
{
	static auto Func = Class->GetFunction("HorizonWidgetFunctionLibrary", "SetInputMode");

	Params::UHorizonWidgetFunctionLibrary_SetInputMode_Params Parms;

	Parms.InPC = InPC;
	Parms.InInputMode = InInputMode;
	Parms.InWidgetToFocus = InWidgetToFocus;
	Parms.InMouseLockMode = InMouseLockMode;
	Parms.bInHideCursorDuringCapture = bInHideCursorDuringCapture;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HorizonUI.HorizonWidgetFunctionLibrary.IsIdeographic
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              InCodePoint                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHorizonWidgetFunctionLibrary::IsIdeographic(int32 InCodePoint)
{
	static auto Func = Class->GetFunction("HorizonWidgetFunctionLibrary", "IsIdeographic");

	Params::UHorizonWidgetFunctionLibrary_IsIdeographic_Params Parms;

	Parms.InCodePoint = InCodePoint;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HorizonUI.HorizonWidgetFunctionLibrary.IsAlphabetic
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              InCodePoint                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHorizonWidgetFunctionLibrary::IsAlphabetic(int32 InCodePoint)
{
	static auto Func = Class->GetFunction("HorizonWidgetFunctionLibrary", "IsAlphabetic");

	Params::UHorizonWidgetFunctionLibrary_IsAlphabetic_Params Parms;

	Parms.InCodePoint = InCodePoint;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HorizonUI.HorizonWidgetFunctionLibrary.GetWidgetFromNameRecursively
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UUserWidget*                 PUserWidget                                                      (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InWidgetName                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UHorizonWidgetFunctionLibrary::GetWidgetFromNameRecursively(class UUserWidget* PUserWidget, class FName& InWidgetName)
{
	static auto Func = Class->GetFunction("HorizonWidgetFunctionLibrary", "GetWidgetFromNameRecursively");

	Params::UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively_Params Parms;

	Parms.PUserWidget = PUserWidget;
	Parms.InWidgetName = InWidgetName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HorizonUI.HorizonWidgetFunctionLibrary.GetUserWidgetAnimation
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UUserWidget*                 PUserWidget                                                      (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        AnimeName                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidgetAnimation*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidgetAnimation* UHorizonWidgetFunctionLibrary::GetUserWidgetAnimation(class UUserWidget* PUserWidget, class FName& AnimeName)
{
	static auto Func = Class->GetFunction("HorizonWidgetFunctionLibrary", "GetUserWidgetAnimation");

	Params::UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation_Params Parms;

	Parms.PUserWidget = PUserWidget;
	Parms.AnimeName = AnimeName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HorizonUI.HorizonWidgetFunctionLibrary.GetUserIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     InWidget                                                         (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UHorizonWidgetFunctionLibrary::GetUserIndex(class UWidget* InWidget)
{
	static auto Func = Class->GetFunction("HorizonWidgetFunctionLibrary", "GetUserIndex");

	Params::UHorizonWidgetFunctionLibrary_GetUserIndex_Params Parms;

	Parms.InWidget = InWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HorizonUI.HorizonWidgetFunctionLibrary.GetParentCanvasPanelSlot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     PWidget                                                          (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCanvasPanelSlot*            ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCanvasPanelSlot* UHorizonWidgetFunctionLibrary::GetParentCanvasPanelSlot(class UWidget* PWidget)
{
	static auto Func = Class->GetFunction("HorizonWidgetFunctionLibrary", "GetParentCanvasPanelSlot");

	Params::UHorizonWidgetFunctionLibrary_GetParentCanvasPanelSlot_Params Parms;

	Parms.PWidget = PWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HorizonUI.HorizonWidgetFunctionLibrary.GetInputMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPlayerController*           InPC                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EHorizonUIInputMode     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EHorizonUIInputMode UHorizonWidgetFunctionLibrary::GetInputMode(class UPlayerController* InPC)
{
	static auto Func = Class->GetFunction("HorizonWidgetFunctionLibrary", "GetInputMode");

	Params::UHorizonWidgetFunctionLibrary_GetInputMode_Params Parms;

	Parms.InPC = InPC;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
