#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x6B0 - 0x5F0)
// Class HorizonUI.HorizonButton
class UHorizonButton : public UButton
{
public:
	FMulticastInlineDelegateProperty_            OnClickedDelegate;                                 // 0x5E8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPressedDelegate;                                 // 0x5F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnReleasedDelegate;                                // 0x608(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnHoveredDelegate;                                 // 0x618(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnUnhoveredDelegate;                               // 0x628(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_546[0x78];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HorizonButton");
		return Clss;
	}

	void OnUnhoveredButton();
	void OnReleasedButton();
	void OnPressedButton();
	void OnHoveredButton();
	void OnHorizonButtonEvent__DelegateSignature(class UHorizonButton* Button);
	void OnClickedButton();
};

// 0x0 (0x280 - 0x280)
// Class HorizonUI.HorizonUserWidget
class UHorizonUserWidget : public UUserWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HorizonUserWidget");
		return Clss;
	}

};

// 0x0 (0x280 - 0x280)
// Class HorizonUI.HorizonDesignableUserWidget
class UHorizonDesignableUserWidget : public UHorizonUserWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HorizonDesignableUserWidget");
		return Clss;
	}

	void SynchronizeProperties();
	void OnSynchronizeProperties();
};

// 0x230 (0x4B0 - 0x280)
// Class HorizonUI.HorizonButtonUserWidget
class UHorizonButtonUserWidget : public UHorizonDesignableUserWidget
{
public:
	FMulticastInlineDelegateProperty_            OnButtonClickedDelegate;                           // 0x280(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnButtonPressedDelegate;                           // 0x290(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnButtonReleasedDelegate;                          // 0x2A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnButtonHoveredDelegate;                           // 0x2B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnButtonUnhoveredDelegate;                         // 0x2C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnButtonFocusDelegate;                             // 0x2D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnButtonFocusLostDelegate;                         // 0x2E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_594[0xA8];                                     // Fixing Size After Last Property
	class UButton*                               Button_Main;                                       // 0x398(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            TextBlock_Main;                                    // 0x3A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                Image_Main;                                        // 0x3A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Text_Main;                                         // 0x3B0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_595[0x8];                                      // Fixing Size After Last Property
	struct FSlateBrush                           SlateBrush_ImageMain;                              // 0x3D0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bFocusOnHovered;                                   // 0x4A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bButtonFocused;                                    // 0x4A1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_597[0xE];                                      // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HorizonButtonUserWidget");
		return Clss;
	}

	void ReceiveOnOnButtonFocusLost(struct FFocusEvent& InFocusEvent);
	void ReceiveOnButtonUnhovered();
	void ReceiveOnButtonReleased();
	void ReceiveOnButtonPressed();
	void ReceiveOnButtonHovered();
	void ReceiveOnButtonFocus(struct FFocusEvent& InFocusEvent);
	void ReceiveOnButtonClicked();
	void OnHorizonButtonFocusEvent__DelegateSignature(class UHorizonButtonUserWidget* InButton, struct FFocusEvent& InFocusEvent);
	void OnHorizonButtonEvent__DelegateSignature(class UHorizonButtonUserWidget* InButton);
	void NativeOnButtonUnhovered();
	void NativeOnButtonReleased();
	void NativeOnButtonPressed();
	void NativeOnButtonHovered();
	void NativeOnButtonClicked();
};

// 0x0 (0x28 - 0x28)
// Class HorizonUI.HorizonDialogueMsgDecorator
class UHorizonDialogueMsgDecorator : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HorizonDialogueMsgDecorator");
		return Clss;
	}

	bool Run(class UHorizonDialogueMsgTextBlock* InMsgTextBlock, struct FHorizonDialogueBlockInfo& InDialogueBlockInfo, struct FHorizonDialogueSegmentInfo& InSegInfo);
	bool PreRun(class UHorizonDialogueMsgTextBlock* InMsgTextBlock, struct FHorizonDialogueBlockInfo& InDialogueBlockInfo, struct FHorizonDialogueSegmentInfo& InSegInfo);
	bool BuildSegment(class UHorizonDialogueMsgTextBlock* InMsgTextBlock, int32 InCurrentSegInfoIndex, struct FHorizonDialogueSegmentInfo& InCurrentSegInfo, TArray<struct FHorizonDialogueSegmentInfo>& InSegInfos);
};

// 0x38 (0x60 - 0x28)
// Class HorizonUI.HorizonDialogueMsgSpaceDecorator
class UHorizonDialogueMsgSpaceDecorator : public UHorizonDialogueMsgDecorator
{
public:
	class FText                                  FirstLineSpaceL;                                   // 0x28(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Space;                                             // 0x40(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bDefaultWithSpaceL_AlphabeticOnly;                 // 0x58(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_72C[0x7];                                      // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HorizonDialogueMsgSpaceDecorator");
		return Clss;
	}

};

// 0x3F0 (0x568 - 0x178)
// Class HorizonUI.HorizonDialogueMsgTextBlock
class UHorizonDialogueMsgTextBlock : public UCanvasPanel
{
public:
	uint8                                        Pad_8CE[0x8];                                      // Fixing Size After Last Property
	FMulticastInlineDelegateProperty_            OnHypertextClickedDelegate;                        // 0x180(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_8CF[0x18];                                     // Fixing Size After Last Property
	FMulticastInlineDelegateProperty_            OnHypertextPressedDelegate;                        // 0x1A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_8D1[0x18];                                     // Fixing Size After Last Property
	FMulticastInlineDelegateProperty_            OnHypertextReleasedDelegate;                       // 0x1D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_8D2[0x18];                                     // Fixing Size After Last Property
	FMulticastInlineDelegateProperty_            OnHypertextHoveredDelegate;                        // 0x1F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_8D3[0x18];                                     // Fixing Size After Last Property
	FMulticastInlineDelegateProperty_            OnHypertextUnhoveredDelegate;                      // 0x220(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_8D6[0x18];                                     // Fixing Size After Last Property
	FMulticastInlineDelegateProperty_            OnDialogueMsgLoopFunction;                         // 0x248(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_8D7[0x18];                                     // Fixing Size After Last Property
	FMulticastInlineDelegateProperty_            OnDialogueMsgCompleteFunction;                     // 0x270(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_8D8[0x18];                                     // Fixing Size After Last Property
	FMulticastInlineDelegateProperty_            OnSetDialoguePageFunction;                         // 0x298(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_8D9[0x18];                                     // Fixing Size After Last Property
	FMulticastInlineDelegateProperty_            OnDialoguePageEndFunction;                         // 0x2C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_8DA[0x18];                                     // Fixing Size After Last Property
	FMulticastInlineDelegateProperty_            OnRebuildDialogueDelegate;                         // 0x2E8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_8DB[0x18];                                     // Fixing Size After Last Property
	FMulticastInlineDelegateProperty_            OnCustomEventDelegate;                             // 0x310(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_8DC[0x18];                                     // Fixing Size After Last Property
	FMulticastInlineDelegateProperty_            OnCharAdvancedDelegate;                            // 0x338(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_8E0[0x18];                                     // Fixing Size After Last Property
	class FText                                  Text;                                              // 0x360(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	enum class EHorizonDialogueTextOverflowWrapMethod TextOverFlowWrapMethod;                            // 0x378(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EHorizonDialogueTextOverflowWarpMethod_DEPRECATED TextOverFlowWarpMethod;                            // 0x379(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8E3[0x2];                                      // Fixing Size After Last Property
	float                                        DialogueMsgSpeed;                                  // 0x37C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsStartTickDialogueMsg;                           // 0x380(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsRepeatDialogueMsg;                              // 0x381(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8E6[0x2];                                      // Fixing Size After Last Property
	float                                        RepeatDialogueMsgInterval;                         // 0x384(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDialogueMsgText;                                // 0x388(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAutoNextDialogueMsgPage;                        // 0x389(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8E8[0x2];                                      // Fixing Size After Last Property
	float                                        AutoNextDialogueMsgPageIntervalRate;               // 0x38C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AutoNextDialogueMsgPageIntervalMin;                // 0x390(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AutoNextDialogueMsgPageIntervalMax;                // 0x394(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreTimeDilation;                               // 0x398(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8F6[0x3];                                      // Fixing Size After Last Property
	float                                        CustomTimeDilation;                                // 0x39C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceRebuildDialogueMsgText;                      // 0x3A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableBlinkingCursor;                             // 0x3A1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_90A[0x6];                                      // Fixing Size After Last Property
	struct FHorizonDialogueBlinkingCursorInfo    BlinkCursorInfo;                                   // 0x3A8(0x70)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UHorizonDialogueStyleInfo>> StyleInfoClassList;                                // 0x418(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FHorizonDialogueSegmentInfoStyle> SegmentStyleList;                                  // 0x428(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bIsRichText;                                       // 0x438(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_92A[0x3];                                      // Fixing Size After Last Property
	struct FSlateColor                           ColorAndOpacity;                                   // 0x43C(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        Font;                                              // 0x450(0x58)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ShadowOffset;                                      // 0x4A8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ShadowColorAndOpacity;                             // 0x4B8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextJustify                      Justification;                                     // 0x4C8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_943[0x3];                                      // Fixing Size After Last Property
	struct FMargin                               LineMargin;                                        // 0x4CC(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_946[0x4];                                      // Fixing Size After Last Property
	TSubclassOf<class UHorizonButton>            DefaultButtonStyleWidgetClass;                     // 0x4E0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UHorizonDialogueMsgDecorator>> DecoratorClasses;                                  // 0x4E8(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_94A[0x50];                                     // Fixing Size After Last Property
	TArray<class UHorizonDialogueStyleInfo*>     StyleInfoList;                                     // 0x548(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_94B[0x10];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HorizonDialogueMsgTextBlock");
		return Clss;
	}

	void StopDialogue();
	void StartDialogue();
	void SkipDialogue();
	void SkipCurrentDialoguePage();
	void SkipCurrentDialogueMsgPageTick();
	void SetTextOverflowWrapMethod(enum class EHorizonDialogueTextOverflowWrapMethod InOverflowWrapMethod);
	void SetTextAndRebuildDialogueImmediately(class FText& InText);
	void SetTextAndRebuildDialogue(class FText& InText);
	void SetShadowOffset(const struct FVector2D& InShadowOffset, bool bForce);
	void SetShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity, bool bForce);
	void SetRepeatDialogueMsgInterval(float Interval);
	void SetOpacity(float InOpacity);
	void SetJustification(enum class ETextJustify InJustification, bool bForce);
	void SetIsStartTickDialogueMsg(bool bShouldStartTick, bool bShouldResetDialogue);
	void SetIsRepeatDialogueMsg(bool B);
	void SetIsDialogueMsgText(bool B);
	void SetIsAutoNextDialogueMsgPage(bool B);
	void SetFontSize(int32 FontSize);
	void SetFont(const struct FSlateFontInfo& InFontInfo, bool bForce);
	void SetDialogueMsgSpeed(float Speed, bool bForce);
	void SetDialogueMsgPage(int32 InPageIndex, bool bShouldStartTick);
	void SetColorAndOpacity(const struct FSlateColor& InColorAndOpacity);
	void SetAutoNextDialogueMsgPageIntervalRate(float InAutoNextDialogueMsgPageIntervalRate);
	void ResumeDialogue();
	void RequestRebuildDialogue();
	void RebuildDialogueMsgTextBlock();
	void PrevDialogueMsgPage(bool bShouldStartTick);
	void PauseDialogue();
	void OnHorizonHypertextEvent__DelegateSignature(struct FHorizonDialogueHypertextResult& InResult);
	void OnHorizonDialoguePageEvent__DelegateSignature(struct FHorizonDialogueDialoguePageResult& InResult);
	void OnHorizonDialogueMsgEvent__DelegateSignature();
	void OnHorizonDialogueCustomEvent__DelegateSignature(const class FString& InEventName, struct FHorizonDialogueSegmentInfo& InSegInfo);
	void OnHorizonDialogueCharAdvancedEvent__DelegateSignature(struct FHorizonDialogueBlockInfo& InCurrentBlockInfo);
	void NextDialogueMsgPage(bool bShouldStartTick);
	bool IsDialogueMsgPageEnd();
	bool IsDialogueMsgCompleted();
	enum class EHorizonDialogueTextOverflowWrapMethod GetTextOverflowWrapMethod();
	int32 GetTextLength();
	class FText GetText();
	class FText GetPageTextByIndex(int32 PageIndex);
	int32 GetNumPage();
	int32 GetNumLine();
	enum class ETextJustify GetJustification();
	int32 GetCurrentPageTextLength();
	int32 GetCurrentPageIndex();
	class UHorizonFlipbookWidget* GetBlinkCursorWidget();
};

// 0x10 (0x38 - 0x28)
// Class HorizonUI.HorizonDialogueStyleInfo
class UHorizonDialogueStyleInfo : public UObject
{
public:
	TArray<struct FHorizonDialogueSegmentInfoStyle> SegmentStyleList;                                  // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HorizonDialogueStyleInfo");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class HorizonUI.HorizonFileSystem
class UHorizonFileSystem : public UObject
{
public:
	uint8                                        Pad_9A8[0x10];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HorizonFileSystem");
		return Clss;
	}

	class UObject* LoadUAsset(const class FString& InPackageFilePath);
	class UTexture2D* LoadTexture2D(const class FString& InPackageFilePath, int32* OutWidth, int32* OutHeight);
	class USoundBase* LoadSound(const class FString& InPackageFilePath);
	class UPaperFlipbook* LoadPaperFlipbook(const class FString& InPackageFilePath);
	class UMaterial* LoadMaterial(const class FString& InPackageFilePath);
	class UFont* LoadFont(const class FString& InPackageFilePath);
	class UHorizonFileSystem* GetInstance();
	void DestroyInstance();
	void CreateDirectoryRecursively(const class FString& InFolderToMake);
};

// 0x80 (0x330 - 0x2B0)
// Class HorizonUI.HorizonFlipbookWidget
class UHorizonFlipbookWidget : public UImage
{
public:
	bool                                         bIsStartTick;                                      // 0x2B0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9DA[0x3];                                      // Fixing Size After Last Property
	int32                                        NumOfLoop;                                         // 0x2B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAnimationFinished;                                // 0x2B8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9DD[0x7];                                      // Fixing Size After Last Property
	class UPaperFlipbook*                        PaperFlipbook;                                     // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnAnimationStart;                                  // 0x2C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_9DE[0x18];                                     // Fixing Size After Last Property
	FMulticastInlineDelegateProperty_            OnAnimationFinished;                               // 0x2F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_9DF[0x30];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HorizonFlipbookWidget");
		return Clss;
	}

	void StopAnimation();
	void SetFlipbook(class UPaperFlipbook* InFlipbook);
	void SetCurrentAnimationDuration(float InDuration);
	void ResumeAnimation();
	void ResetAnimation();
	void PlayAnimation();
	void PauseAnimation();
	void OnHorizonFlipbookStartEvent__DelegateSignature(int32 InCurrentNumOfLoop);
	void OnHorizonFlipbookEvent__DelegateSignature();
	float GetCurrentAnimationDuration();
};

// 0x20 (0x2D0 - 0x2B0)
// Class HorizonUI.HorizonImage
class UHorizonImage : public UImage
{
public:
	struct FBox2D                                UVRegion;                                          // 0x2A8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HorizonImage");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class HorizonUI.HorizonListViewItemObject
class UHorizonListViewItemObject : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HorizonListViewItemObject");
		return Clss;
	}

};

// 0x10 (0x290 - 0x280)
// Class HorizonUI.HorizonListViewItemWidget
class UHorizonListViewItemWidget : public UUserWidget
{
public:
	uint8                                        Pad_A03[0x8];                                      // Fixing Size After Last Property
	class UButton*                               Button_ClickArea;                                  // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HorizonListViewItemWidget");
		return Clss;
	}

	void SynchronizeProperties();
	void OnSynchronizeProperties();
	void OnListItemObjectUnhovered();
	void OnListItemObjectReleased();
	void OnListItemObjectPressed();
	void OnListItemObjectHovered();
	void OnListItemObjectClicked();
	void OnListItemObjectButtonUnhovered();
	void OnListItemObjectButtonReleased();
	void OnListItemObjectButtonPressed();
	void OnListItemObjectButtonHovered();
	void OnListItemObjectButtonClicked();
};

// 0x88 (0x308 - 0x280)
// Class HorizonUI.HorizonMultiToggleButtonWidget
class UHorizonMultiToggleButtonWidget : public UHorizonDesignableUserWidget
{
public:
	FMulticastInlineDelegateProperty_            OnStateSyncDelegate;                               // 0x280(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1F[0x18];                                     // Fixing Size After Last Property
	FMulticastInlineDelegateProperty_            OnStateChangedDelegate;                            // 0x2A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_A20[0x18];                                     // Fixing Size After Last Property
	class UButton*                               Button_ToggleState_Prev;                           // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UButton*                               Button_ToggleState_Next;                           // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            TextBlock_CurrentState;                            // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                Image_CurrentState;                                // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FHorizonMultiToggleButtonState> StateList;                                         // 0x2F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bLoopToggleState;                                  // 0x300(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A21[0x3];                                      // Fixing Size After Last Property
	int32                                        CurrentStateIndex;                                 // 0x304(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HorizonMultiToggleButtonWidget");
		return Clss;
	}

	void ToggleState_Prev();
	void ToggleState_Next();
	void SetLoopToggleState(bool InLoopToggleState);
	void SetCurrentStateIndex(int32 InStateIndex);
	void OnHorizonMultiToggleButtonSyncEvent__DelegateSignature(int32 InCurrentStateIndex);
	void OnHorizonMultiToggleButtonEvent__DelegateSignature(int32 InCurrentStateIndex, int32 InToStateIndex);
	int32 GetToggleState_PrevIndex();
	int32 GetToggleState_NextIndex();
	bool GetLoopToggleState();
	int32 GetCurrentStateIndex();
};

// 0x90 (0x310 - 0x280)
// Class HorizonUI.HorizonRadioButtonUserWidget
class UHorizonRadioButtonUserWidget : public UHorizonDesignableUserWidget
{
public:
	FMulticastInlineDelegateProperty_            OnCheckedDelegate;                                 // 0x280(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnUnCheckedDelegate;                               // 0x290(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_A27[0x30];                                     // Fixing Size After Last Property
	class UCheckBox*                             CheckBox_Main;                                     // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            TextBlock_Main;                                    // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Text_Main;                                         // 0x2E0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bCheckedByDefault;                                 // 0x2F8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A29[0x17];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HorizonRadioButtonUserWidget");
		return Clss;
	}

	void SetChecked();
	void OnHorizonRadioButtonEvent__DelegateSignature();
	void NativeOnCheckStateChanged(bool bIsChecked);
	void BP_OnCheckStateChanged(bool bIsChecked);
};

// 0x8 (0x340 - 0x338)
// Class HorizonUI.HorizonTextBlock
class UHorizonTextBlock : public UTextBlock
{
public:
	uint8                                        Pad_A2E[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HorizonTextBlock");
		return Clss;
	}

	enum class ETextJustify GetJustification();
};

// 0x110 (0xD60 - 0xC50)
// Class HorizonUI.HorizonTileView
class UHorizonTileView : public UTileView
{
public:
	uint8                                        Pad_A42[0x8];                                      // Fixing Size After Last Property
	FMulticastInlineDelegateProperty_            OnInitListItemEvent;                               // 0xC58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_A43[0x18];                                     // Fixing Size After Last Property
	FMulticastInlineDelegateProperty_            OnItemPressedEvent;                                // 0xC80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_A44[0x18];                                     // Fixing Size After Last Property
	FMulticastInlineDelegateProperty_            OnItemReleasedEvent;                               // 0xCA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_A46[0x18];                                     // Fixing Size After Last Property
	FMulticastInlineDelegateProperty_            OnItemHoveredEvent;                                // 0xCD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_A47[0x18];                                     // Fixing Size After Last Property
	FMulticastInlineDelegateProperty_            OnItemUnhoveredEvent;                              // 0xCF8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_A49[0x18];                                     // Fixing Size After Last Property
	FMulticastInlineDelegateProperty_            OnItemClickedEvent;                                // 0xD20(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_A4A[0x30];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HorizonTileView");
		return Clss;
	}

	void SynchronizeProperties();
	void RerouteItemUnhovered(class UObject* InItem);
	void RerouteItemReleased(class UObject* InItem);
	void RerouteItemPressed(class UObject* InItem);
	void RerouteItemHovered(class UObject* InItem);
	void RerouteItemClicked(class UObject* InItem);
	void RequestListRefresh();
	void OnItemEvent__DelegateSignature(class UObject* InItem);
	void OnInitListItemEvent__DelegateSignature(class UHorizonTileView* InTileView);
	void NavigateToAndSelectIndex(int32 InIndex);
	bool IsPendingRefresh();
	bool IsFocusable();
	void InitListItem();
	int32 GetNumGeneratedChildren();
	class UHorizonListViewItemWidget* BP_GetEntryWidgetFromItem(class UObject* InItem);
};

// 0x0 (0x28 - 0x28)
// Class HorizonUI.HorizonWidgetFunctionLibrary
class UHorizonWidgetFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HorizonWidgetFunctionLibrary");
		return Clss;
	}

	class UWidget* SetWidgetVisibility(class UUserWidget* UserWidget, class FName WidgetName, enum class ESlateVisibility EVisiblity);
	void SetInputMode(class UPlayerController* InPC, enum class EHorizonUIInputMode InInputMode, class UWidget* InWidgetToFocus, enum class EMouseLockMode InMouseLockMode, bool bInHideCursorDuringCapture);
	bool IsIdeographic(int32 InCodePoint);
	bool IsAlphabetic(int32 InCodePoint);
	class UWidget* GetWidgetFromNameRecursively(class UUserWidget* PUserWidget, class FName& InWidgetName);
	class UWidgetAnimation* GetUserWidgetAnimation(class UUserWidget* PUserWidget, class FName& AnimeName);
	int32 GetUserIndex(class UWidget* InWidget);
	class UCanvasPanelSlot* GetParentCanvasPanelSlot(class UWidget* PWidget);
	enum class EHorizonUIInputMode GetInputMode(class UPlayerController* InPC);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
