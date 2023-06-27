#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class CommonUI.CommonBoundActionButtonInterface
class UCommonBoundActionButtonInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonBoundActionButtonInterface");
		return Clss;
	}

};

// 0x20 (0x6E0 - 0x6C0)
// Class CommonUI.AnalogSlider
class UAnalogSlider : public USlider
{
public:
	FMulticastInlineDelegateProperty_            OnAnalogCapture;                                   // 0x6C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_2276[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnalogSlider");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class CommonUI.CommonActionHandlerInterface
class UCommonActionHandlerInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonActionHandlerInterface");
		return Clss;
	}

};

// 0x2E8 (0x460 - 0x178)
// Class CommonUI.CommonActionWidget
class UCommonActionWidget : public UWidget
{
public:
	FMulticastInlineDelegateProperty_            OnInputMethodChanged;                              // 0x178(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_2277[0x8];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           ProgressMaterialBrush;                             // 0x190(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FName                                  ProgressMaterialParam;                             // 0x250(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2278[0xC];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           IconRimBrush;                                      // 0x260(0xC0)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FDataTableRowHandle>           InputActions;                                      // 0x320(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UInputAction*                          EnhancedInputAction;                               // 0x330(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2279[0x8];                                     // Fixing Size After Last Property..
	class UMaterialInstanceDynamic*              ProgressDynamicMaterial;                           // 0x340(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_227A[0x118];                                   // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonActionWidget");
		return Clss;
	}

	void SetInputActions(const TArray<struct FDataTableRowHandle>& NewInputActions);
	void SetInputAction(const struct FDataTableRowHandle& InputActionRow);
	void SetIconRimBrush(const struct FSlateBrush& InIconRimBrush);
	void SetEnhancedInputAction(class UInputAction* InInputAction);
	void OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);
	bool IsHeldAction();
	struct FSlateBrush GetIcon();
	class FText GetDisplayText();
};

// 0x28 (0x2D0 - 0x2A8)
// Class CommonUI.CommonUserWidget
class UCommonUserWidget : public UUserWidget
{
public:
	bool                                         bDisplayInActionBar;                               // 0x2A8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bConsumePointerInput;                              // 0x2A9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_227B[0x26];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonUserWidget");
		return Clss;
	}

	void SetConsumePointerInput(bool bInConsumePointerInput);
};

// 0x128 (0x3F8 - 0x2D0)
// Class CommonUI.CommonActivatableWidget
class UCommonActivatableWidget : public UCommonUserWidget
{
public:
	bool                                         bIsBackHandler;                                    // 0x2D0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsBackActionDisplayedInActionBar;                 // 0x2D1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAutoActivate;                                     // 0x2D2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSupportsActivationFocus;                          // 0x2D3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsModal;                                          // 0x2D4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAutoRestoreFocus;                                 // 0x2D5(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOverrideActionDomain;                             // 0x2D6(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_227C[0x1];                                     // Fixing Size After Last Property..
	class UInputMappingContext*                  InputMapping;                                      // 0x2D8(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        InputMappingPriority;                              // 0x2E0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_227D[0x4];                                     // Fixing Size After Last Property..
	TSoftObjectPtr<class UCommonInputActionDomain> ActionDomainOverride;                              // 0x2E8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            BP_OnWidgetActivated;                              // 0x310(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            BP_OnWidgetDeactivated;                            // 0x320(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	bool                                         bIsActive;                                         // 0x330(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_227E[0x7];                                     // Fixing Size After Last Property..
	TArray<TWeakObjectPtr<class UCommonActivatableWidget>> VisibilityBoundWidgets;                            // 0x338(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_227F[0xA8];                                    // Fixing Size After Last Property..
	bool                                         bSetVisibilityOnActivated;                         // 0x3F0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESlateVisibility                  ActivatedVisibility;                               // 0x3F1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSetVisibilityOnDeactivated;                       // 0x3F2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESlateVisibility                  DeactivatedVisibility;                             // 0x3F3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2280[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonActivatableWidget");
		return Clss;
	}

	void SetBindVisibilities(enum class ESlateVisibility OnActivatedVisibility, enum class ESlateVisibility OnDeactivatedVisibility, bool bInAllActive);
	bool IsActivated();
	class UWidget* GetDesiredFocusTarget();
	void DeactivateWidget();
	bool BP_OnHandleBackAction();
	void BP_OnDeactivated();
	void BP_OnActivated();
	struct FUIInputConfig BP_GetDesiredInputConfig();
	class UWidget* BP_GetDesiredFocusTarget();
	void BindVisibilityToActivation(class UCommonActivatableWidget* ActivatableWidget);
	void ActivateWidget();
};

// 0x70 (0x218 - 0x1A8)
// Class CommonUI.CommonAnimatedSwitcher
class UCommonAnimatedSwitcher : public UWidgetSwitcher
{
public:
	uint8                                        Pad_2281[0x30];                                    // Fixing Size After Last Property..
	enum class ECommonSwitcherTransition         TransitionType;                                    // 0x1D8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ETransitionCurve                  TransitionCurveType;                               // 0x1D9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2282[0x2];                                     // Fixing Size After Last Property..
	float                                        TransitionDuration;                                // 0x1DC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2283[0x38];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonAnimatedSwitcher");
		return Clss;
	}

	void SetDisableTransitionAnimation(bool bDisableAnimation);
	bool IsTransitionPlaying();
	bool IsCurrentlySwitching();
	bool HasWidgets();
	void ActivatePreviousWidget(bool bCanWrap);
	void ActivateNextWidget(bool bCanWrap);
};

// 0x10 (0x228 - 0x218)
// Class CommonUI.CommonActivatableWidgetSwitcher
class UCommonActivatableWidgetSwitcher : public UCommonAnimatedSwitcher
{
public:
	uint8                                        Pad_2284[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonActivatableWidgetSwitcher");
		return Clss;
	}

};

// 0xC8 (0xF0 - 0x28)
// Class CommonUI.CommonBorderStyle
class UCommonBorderStyle : public UObject
{
public:
	uint8                                        Pad_2285[0x8];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           Background;                                        // 0x30(0xC0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonBorderStyle");
		return Clss;
	}

	void GetBackgroundBrush(struct FSlateBrush* Brush);
};

// 0x20 (0x320 - 0x300)
// Class CommonUI.CommonBorder
class UCommonBorder : public UBorder
{
public:
	TSubclassOf<class UCommonBorderStyle>        Style;                                             // 0x300(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReducePaddingBySafezone;                          // 0x308(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2286[0x3];                                     // Fixing Size After Last Property..
	struct FMargin                               MinimumPadding;                                    // 0x30C(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2287[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonBorder");
		return Clss;
	}

	void SetStyle(TSubclassOf<class UCommonBorderStyle> InStyle);
};

// 0x708 (0x730 - 0x28)
// Class CommonUI.CommonButtonStyle
class UCommonButtonStyle : public UObject
{
public:
	bool                                         bSingleMaterial;                                   // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2288[0x7];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           SingleMaterialBrush;                               // 0x30(0xC0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           NormalBase;                                        // 0xF0(0xC0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           NormalHovered;                                     // 0x1B0(0xC0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           NormalPressed;                                     // 0x270(0xC0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SelectedBase;                                      // 0x330(0xC0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SelectedHovered;                                   // 0x3F0(0xC0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SelectedPressed;                                   // 0x4B0(0xC0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Disabled;                                          // 0x570(0xC0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FMargin                               ButtonPadding;                                     // 0x630(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               CustomPadding;                                     // 0x640(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        MinWidth;                                          // 0x650(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinHeight;                                         // 0x654(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCommonTextStyle>          NormalTextStyle;                                   // 0x658(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCommonTextStyle>          NormalHoveredTextStyle;                            // 0x660(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCommonTextStyle>          SelectedTextStyle;                                 // 0x668(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCommonTextStyle>          SelectedHoveredTextStyle;                          // 0x670(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCommonTextStyle>          DisabledTextStyle;                                 // 0x678(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateSound                           PressedSlateSound;                                 // 0x680(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FCommonButtonStyleOptionalSlateSound  SelectedPressedSlateSound;                         // 0x698(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FCommonButtonStyleOptionalSlateSound  LockedPressedSlateSound;                           // 0x6B8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                           HoveredSlateSound;                                 // 0x6D8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FCommonButtonStyleOptionalSlateSound  SelectedHoveredSlateSound;                         // 0x6F0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FCommonButtonStyleOptionalSlateSound  LockedHoveredSlateSound;                           // 0x710(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonButtonStyle");
		return Clss;
	}

	class UCommonTextStyle* GetSelectedTextStyle();
	void GetSelectedPressedBrush(struct FSlateBrush* Brush);
	class UCommonTextStyle* GetSelectedHoveredTextStyle();
	void GetSelectedHoveredBrush(struct FSlateBrush* Brush);
	void GetSelectedBaseBrush(struct FSlateBrush* Brush);
	class UCommonTextStyle* GetNormalTextStyle();
	void GetNormalPressedBrush(struct FSlateBrush* Brush);
	class UCommonTextStyle* GetNormalHoveredTextStyle();
	void GetNormalHoveredBrush(struct FSlateBrush* Brush);
	void GetNormalBaseBrush(struct FSlateBrush* Brush);
	void GetMaterialBrush(struct FSlateBrush* Brush);
	class UCommonTextStyle* GetDisabledTextStyle();
	void GetDisabledBrush(struct FSlateBrush* Brush);
	void GetCustomPadding(struct FMargin* OutCustomPadding);
	void GetButtonPadding(struct FMargin* OutButtonPadding);
};

// 0x78 (0x640 - 0x5C8)
// Class CommonUI.CommonButtonInternalBase
class UCommonButtonInternalBase : public UButton
{
public:
	uint8                                        Pad_2289[0x10];                                    // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            OnDoubleClicked;                                   // 0x5D8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_228A[0x20];                                    // Fixing Size After Last Property..
	int32                                        MinWidth;                                          // 0x608(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MinHeight;                                         // 0x60C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bButtonEnabled;                                    // 0x610(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bInteractionEnabled;                               // 0x611(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_228B[0x2E];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonButtonInternalBase");
		return Clss;
	}

};

// 0x11A0 (0x1470 - 0x2D0)
// Class CommonUI.CommonButtonBase
class UCommonButtonBase : public UCommonUserWidget
{
public:
	struct FWidgetEventField                     ClickEvent;                                        // 0x2D0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2290[0x3];                                     // Fixing Size After Last Property..
	int32                                        MinWidth;                                          // 0x2D4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MinHeight;                                         // 0x2D8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2291[0x4];                                     // Fixing Size After Last Property..
	TSubclassOf<class UCommonButtonStyle>        Style;                                             // 0x2E0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHideInputAction;                                  // 0x2E8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2292[0x7];                                     // Fixing Size After Last Property..
	struct FSlateSound                           PressedSlateSoundOverride;                         // 0x2F0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FSlateSound                           HoveredSlateSoundOverride;                         // 0x308(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FSlateSound                           SelectedPressedSlateSoundOverride;                 // 0x320(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FSlateSound                           SelectedHoveredSlateSoundOverride;                 // 0x338(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FSlateSound                           LockedPressedSlateSoundOverride;                   // 0x350(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FSlateSound                           LockedHoveredSlateSoundOverride;                   // 0x368(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        bApplyAlphaOnDisable : 1;                          // Mask: 0x1, PropSize: 0x10x380(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bLocked : 1;                                       // Mask: 0x2, PropSize: 0x10x380(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bSelectable : 1;                                   // Mask: 0x4, PropSize: 0x10x380(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bShouldSelectUponReceivingFocus : 1;               // Mask: 0x8, PropSize: 0x10x380(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bInteractableWhenSelected : 1;                     // Mask: 0x10, PropSize: 0x10x380(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bToggleable : 1;                                   // Mask: 0x20, PropSize: 0x10x380(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bTriggerClickedAfterSelection : 1;                 // Mask: 0x40, PropSize: 0x10x380(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bDisplayInputActionWhenNotInteractable : 1;        // Mask: 0x80, PropSize: 0x10x380(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bHideInputActionWithKeyboard : 1;                  // Mask: 0x1, PropSize: 0x10x381(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bShouldUseFallbackDefaultInputAction : 1;          // Mask: 0x2, PropSize: 0x10x381(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bRequiresHold : 1;                                 // Mask: 0x4, PropSize: 0x10x381(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_1F1 : 5;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_2293[0x6];                                     // Fixing Size After Last Property..
	TSubclassOf<class UCommonUIHoldData>         HoldData;                                          // 0x388(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSimulateHoverOnTouchInput;                        // 0x390(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2294[0x1];                                     // Fixing Size After Last Property..
	enum class EButtonClickMethod                ClickMethod;                                       // 0x392(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EButtonTouchMethod                TouchMethod;                                       // 0x393(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EButtonPressMethod                PressMethod;                                       // 0x394(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2295[0x3];                                     // Fixing Size After Last Property..
	int32                                        InputPriority;                                     // 0x398(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2296[0x4];                                     // Fixing Size After Last Property..
	struct FDataTableRowHandle                   TriggeringInputAction;                             // 0x3A0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	class UInputAction*                          TriggeringEnhancedInputAction;                     // 0x3B0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2297[0x10];                                    // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            OnSelectedChangedBase;                             // 0x3C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnButtonBaseClicked;                               // 0x3D8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnButtonBaseDoubleClicked;                         // 0x3E8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnButtonBaseHovered;                               // 0x3F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnButtonBaseUnhovered;                             // 0x408(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_2298[0x30];                                    // Fixing Size After Last Property..
	bool                                         bIsPersistentBinding;                              // 0x448(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ECommonInputMode                  InputModeOverride;                                 // 0x449(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2299[0x36];                                    // Fixing Size After Last Property..
	class UMaterialInstanceDynamic*              SingleMaterialStyleMID;                            // 0x480(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_229A[0x8];                                     // Fixing Size After Last Property..
	struct FButtonStyle                          NormalStyle;                                       // 0x490(0x3B0)(NativeAccessSpecifierPrivate)
	struct FButtonStyle                          SelectedStyle;                                     // 0x840(0x3B0)(NativeAccessSpecifierPrivate)
	struct FButtonStyle                          DisabledStyle;                                     // 0xBF0(0x3B0)(NativeAccessSpecifierPrivate)
	struct FButtonStyle                          LockedStyle;                                       // 0xFA0(0x3B0)(NativeAccessSpecifierPrivate)
	uint8                                        bStopDoubleClickPropagation : 1;                   // Mask: 0x1, PropSize: 0x10x1350(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_1F2 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_229B[0x117];                                   // Fixing Size After Last Property..
	class UCommonActionWidget*                   InputActionWidget;                                 // 0x1468(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonButtonBase");
		return Clss;
	}

	void UpdateHoldData(enum class ECommonInputType CurrentInputType);
	void StopDoubleClickPropagation();
	void SetTriggeringInputAction(struct FDataTableRowHandle& InputActionRow);
	void SetTriggeringEnhancedInputAction(class UInputAction* InInputAction);
	void SetTriggeredInputAction(struct FDataTableRowHandle& InputActionRow);
	void SetTouchMethod(enum class EButtonTouchMethod InTouchMethod);
	void SetStyle(TSubclassOf<class UCommonButtonStyle> InStyle);
	void SetShouldUseFallbackDefaultInputAction(bool bInShouldUseFallbackDefaultInputAction);
	void SetShouldSelectUponReceivingFocus(bool bInShouldSelectUponReceivingFocus);
	void SetSelectedPressedSoundOverride(class USoundBase* Sound);
	void SetSelectedInternal(bool bInSelected, bool bAllowSound, bool bBroadcast);
	void SetSelectedHoveredSoundOverride(class USoundBase* Sound);
	void SetPressMethod(enum class EButtonPressMethod InPressMethod);
	void SetPressedSoundOverride(class USoundBase* Sound);
	void SetMinDimensions(int32 InMinWidth, int32 InMinHeight);
	void SetLockedPressedSoundOverride(class USoundBase* Sound);
	void SetLockedHoveredSoundOverride(class USoundBase* Sound);
	void SetIsToggleable(bool bInIsToggleable);
	void SetIsSelected(bool InSelected, bool bGiveClickFeedback);
	void SetIsSelectable(bool bInIsSelectable);
	void SetIsLocked(bool bInIsLocked);
	void SetIsInteractionEnabled(bool bInIsInteractionEnabled);
	void SetIsInteractableWhenSelected(bool bInInteractableWhenSelected);
	void SetIsFocusable(bool bInIsFocusable);
	void SetInputActionProgressMaterial(struct FSlateBrush& InProgressMaterialBrush, class FName& InProgressMaterialParam);
	void SetHoveredSoundOverride(class USoundBase* Sound);
	void SetHideInputAction(bool bInHideInputAction);
	void SetClickMethod(enum class EButtonClickMethod InClickMethod);
	void OnTriggeringInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction);
	void OnTriggeringEnhancedInputActionChanged(class UInputAction* InInputAction);
	void OnTriggeredInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction);
	void OnInputMethodChanged(enum class ECommonInputType CurrentInputType);
	void OnCurrentTextStyleChanged();
	void OnActionProgress(float HeldPercent);
	void OnActionComplete();
	bool NativeOnHoldProgressRollback(float DeltaTime);
	bool NativeOnHoldProgress(float DeltaTime);
	void NativeOnActionProgress(float HeldPercent);
	void NativeOnActionComplete();
	bool IsPressed();
	bool IsInteractionEnabled();
	void HoldReset();
	void HandleTriggeringActionCommited(bool* bPassThrough);
	void HandleFocusReceived();
	void HandleFocusLost();
	void HandleButtonReleased();
	void HandleButtonPressed();
	void HandleButtonClicked();
	class UCommonButtonStyle* GetStyle();
	class UMaterialInstanceDynamic* GetSingleMaterialStyleMID();
	bool GetShouldSelectUponReceivingFocus();
	bool GetSelected();
	bool GetLocked();
	bool GetIsFocusable();
	bool GetInputAction(struct FDataTableRowHandle* InputActionRow);
	class UInputAction* GetEnhancedInputAction();
	TSubclassOf<class UCommonTextStyle> GetCurrentTextStyleClass();
	class UCommonTextStyle* GetCurrentTextStyle();
	void GetCurrentCustomPadding(struct FMargin* OutCustomPadding);
	void GetCurrentButtonPadding(struct FMargin* OutButtonPadding);
	bool GetConvertInputActionToHold();
	void DisableButtonWithReason(class FText& DisabledReason);
	void ClearSelection();
	void BP_OnUnhovered();
	void BP_OnSelected();
	void BP_OnReleased();
	void BP_OnPressed();
	void BP_OnLockedChanged(bool bIsLocked);
	void BP_OnLockDoubleClicked();
	void BP_OnLockClicked();
	void BP_OnInputMethodChanged(enum class ECommonInputType CurrentInputType);
	void BP_OnHovered();
	void BP_OnFocusReceived();
	void BP_OnFocusLost();
	void BP_OnEnabled();
	void BP_OnDoubleClicked();
	void BP_OnDisabled();
	void BP_OnDeselected();
	void BP_OnClicked();
};

// 0x0 (0x28 - 0x28)
// Class CommonUI.WidgetLockedStateRegistration
class UWidgetLockedStateRegistration : public UWidgetBinaryStateRegistration
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WidgetLockedStateRegistration");
		return Clss;
	}

};

// 0x10 (0x310 - 0x300)
// Class CommonUI.CommonCustomNavigation
class UCommonCustomNavigation : public UBorder
{
public:
	FDelegateProperty_                           OnNavigationEvent;                                 // 0x300(0xC)(Edit, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_229C[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonCustomNavigation");
		return Clss;
	}

};

// 0x30 (0x378 - 0x348)
// Class CommonUI.CommonTextBlock
class UCommonTextBlock : public UTextBlock
{
public:
	float                                        MobileFontSizeMultiplier;                          // 0x348(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_229D[0x4];                                     // Fixing Size After Last Property..
	TSubclassOf<class UCommonTextStyle>          Style;                                             // 0x350(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UCommonTextScrollStyle>    ScrollStyle;                                       // 0x358(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsScrollingEnabled;                               // 0x360(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bDisplayAllCaps;                                   // 0x361(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bAutoCollapseWithEmptyText;                        // 0x362(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_229E[0x15];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonTextBlock");
		return Clss;
	}

	void SetWrapTextWidth(int32 InWrapTextAt);
	void SetTextCase(bool bUseAllCaps);
	void SetStyle(TSubclassOf<class UCommonTextStyle> InStyle);
	void SetScrollingEnabled(bool bInIsScrollingEnabled);
	void SetMobileFontSizeMultiplier(float InMobileFontSizeMultiplier);
	void SetMargin(struct FMargin& InMargin);
	void SetLineHeightPercentage(float InLineHeightPercentage);
	void ResetScrollState();
	float GetMobileFontSizeMultiplier();
	struct FMargin GetMargin();
};

// 0x58 (0x3D0 - 0x378)
// Class CommonUI.CommonDateTimeTextBlock
class UCommonDateTimeTextBlock : public UCommonTextBlock
{
public:
	uint8                                        Pad_22A0[0x58];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonDateTimeTextBlock");
		return Clss;
	}

	void SetTimespanValue(const struct FTimespan& InTimespan);
	void SetDateTimeValue(const struct FDateTime& InDateTime, bool bShowAsCountdown, float InRefreshDelay);
	void SetCountDownCompletionText(class FText InCompletionText);
	struct FDateTime GetDateTime();
};

// 0x40 (0x3D8 - 0x398)
// Class CommonUI.CommonGameViewportClient
class UCommonGameViewportClient : public UGameViewportClient
{
public:
	uint8                                        Pad_22A1[0x40];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonGameViewportClient");
		return Clss;
	}

};

// 0x50 (0x370 - 0x320)
// Class CommonUI.CommonHardwareVisibilityBorder
class UCommonHardwareVisibilityBorder : public UCommonBorder
{
public:
	struct FGameplayTagQuery                     VisibilityQuery;                                   // 0x320(0x48)(Edit, Protected, NativeAccessSpecifierProtected)
	enum class ESlateVisibility                  VisibleType;                                       // 0x368(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESlateVisibility                  HiddenType;                                        // 0x369(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_22A2[0x6];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonHardwareVisibilityBorder");
		return Clss;
	}

};

// 0x0 (0xC10 - 0xC10)
// Class CommonUI.CommonHierarchicalScrollBox
class UCommonHierarchicalScrollBox : public UScrollBox
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonHierarchicalScrollBox");
		return Clss;
	}

};

// 0x100 (0x3B0 - 0x2B0)
// Class CommonUI.CommonLazyImage
class UCommonLazyImage : public UImage
{
public:
	struct FSlateBrush                           LoadingBackgroundBrush;                            // 0x2B0(0xC0)(Edit, NativeAccessSpecifierPrivate)
	class FName                                  MaterialTextureParamName;                          // 0x370(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_22A5[0x4];                                     // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            BP_OnLoadingStateChanged;                          // 0x378(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	uint8                                        Pad_22A6[0x28];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonLazyImage");
		return Clss;
	}

	void SetMaterialTextureParamName(class FName TextureParamName);
	void SetBrushFromLazyTexture(TSoftObjectPtr<class UTexture2D>& LazyTexture, bool bMatchSize);
	void SetBrushFromLazyMaterial(TSoftObjectPtr<class UMaterialInterface>& LazyMaterial);
	void SetBrushFromLazyDisplayAsset(TSoftObjectPtr<class UObject>& LazyObject, bool bMatchTextureSize);
	bool IsLoading();
};

// 0x148 (0x2C0 - 0x178)
// Class CommonUI.CommonLazyWidget
class UCommonLazyWidget : public UWidget
{
public:
	uint8                                        Pad_22A7[0x8];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           LoadingBackgroundBrush;                            // 0x180(0xC0)(Edit, NativeAccessSpecifierPrivate)
	class UUserWidget*                           Content;                                           // 0x240(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_22A8[0x28];                                    // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            BP_OnLoadingStateChanged;                          // 0x270(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	uint8                                        Pad_22A9[0x40];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonLazyWidget");
		return Clss;
	}

	void SetLazyContent(TSoftClassPtr<class UUserWidget> SoftWidget);
	bool IsLoading();
	class UUserWidget* GetContent();
};

// 0x0 (0xBD0 - 0xBD0)
// Class CommonUI.CommonListView
class UCommonListView : public UListView
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonListView");
		return Clss;
	}

	void SetEntrySpacing(float InEntrySpacing);
};

// 0x28 (0x60 - 0x38)
// Class CommonUI.LoadGuardSlot
class ULoadGuardSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x48(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x49(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_22AA[0x16];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LoadGuardSlot");
		return Clss;
	}

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
};

// 0x150 (0x2E0 - 0x190)
// Class CommonUI.CommonLoadGuard
class UCommonLoadGuard : public UContentWidget
{
public:
	struct FSlateBrush                           LoadingBackgroundBrush;                            // 0x190(0xC0)(Edit, NativeAccessSpecifierPrivate)
	enum class EHorizontalAlignment              ThrobberAlignment;                                 // 0x250(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_22AC[0x3];                                     // Fixing Size After Last Property..
	struct FMargin                               ThrobberPadding;                                   // 0x254(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_22AD[0x4];                                     // Fixing Size After Last Property..
	class FText                                  LoadingText;                                       // 0x268(0x18)(Edit, NativeAccessSpecifierPrivate)
	TSubclassOf<class UCommonTextStyle>          TextStyle;                                         // 0x280(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            BP_OnLoadingStateChanged;                          // 0x288(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	struct FSoftObjectPath                       SpinnerMaterialPath;                               // 0x298(0x18)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_22AE[0x30];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonLoadGuard");
		return Clss;
	}

	void SetLoadingText(class FText& InLoadingText);
	void SetIsLoading(bool bInIsLoading);
	void OnAssetLoaded__DelegateSignature(class UObject* Object);
	bool IsLoading();
	void BP_GuardAndLoadAsset(TSoftObjectPtr<class UObject>& InLazyAsset, FDelegateProperty_& OnAssetLoaded);
};

// 0xA0 (0x418 - 0x378)
// Class CommonUI.CommonNumericTextBlock
class UCommonNumericTextBlock : public UCommonTextBlock
{
public:
	FMulticastInlineDelegateProperty_            OnInterpolationStartedEvent;                       // 0x378(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnInterpolationUpdatedEvent;                       // 0x388(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnOutroEvent;                                      // 0x398(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnInterpolationEndedEvent;                         // 0x3A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                        CurrentNumericValue;                               // 0x3B8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECommonNumericType                NumericType;                                       // 0x3BC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22B0[0x3];                                     // Fixing Size After Last Property..
	struct FCommonNumberFormattingOptions        FormattingSpecification;                           // 0x3C0(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	float                                        EaseOutInterpolationExponent;                      // 0x3D4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterpolationUpdateInterval;                       // 0x3D8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PostInterpolationShrinkDuration;                   // 0x3DC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PerformSizeInterpolation;                          // 0x3E0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsPercentage;                                      // 0x3E1(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_22B1[0x36];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonNumericTextBlock");
		return Clss;
	}

	void SetNumericType(enum class ECommonNumericType InNumericType);
	void SetCurrentValue(float NewValue);
	void OnOutro__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock);
	void OnInterpolationUpdated__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, float LastValue, float NewValue);
	void OnInterpolationStarted__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock);
	void OnInterpolationEnded__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted);
	bool IsInterpolatingNumericValue();
	void InterpolateToValue(float TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset);
	float GetTargetValue();
};

// 0x0 (0x28 - 0x28)
// Class CommonUI.CommonPoolableWidgetInterface
class UCommonPoolableWidgetInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonPoolableWidgetInterface");
		return Clss;
	}

	void OnReleaseToPool();
	void OnAcquireFromPool();
};

// 0x38 (0x868 - 0x830)
// Class CommonUI.CommonRichTextBlock
class UCommonRichTextBlock : public URichTextBlock
{
public:
	enum class ERichTextInlineIconDisplayMode    InlineIconDisplayMode;                             // 0x830(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTintInlineIcon;                                   // 0x831(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22B2[0x6];                                     // Fixing Size After Last Property..
	TSubclassOf<class UCommonTextStyle>          DefaultTextStyleOverrideClass;                     // 0x838(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MobileTextBlockScale;                              // 0x840(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_22B3[0x4];                                     // Fixing Size After Last Property..
	TSubclassOf<class UCommonTextScrollStyle>    ScrollStyle;                                       // 0x848(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsScrollingEnabled;                               // 0x850(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bDisplayAllCaps;                                   // 0x851(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bAutoCollapseWithEmptyText;                        // 0x852(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_22B4[0x15];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonRichTextBlock");
		return Clss;
	}

	void SetScrollingEnabled(bool bInIsScrollingEnabled);
};

// 0x58 (0x14C8 - 0x1470)
// Class CommonUI.CommonRotator
class UCommonRotator : public UCommonButtonBase
{
public:
	uint8                                        Pad_22B5[0x10];                                    // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            OnRotated;                                         // 0x1480(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_22B6[0x18];                                    // Fixing Size After Last Property..
	class UCommonTextBlock*                      MyText;                                            // 0x14A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_22B7[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonRotator");
		return Clss;
	}

	void ShiftTextRight();
	void ShiftTextLeft();
	void SetSelectedItem(int32 InValue);
	void PopulateTextLabels(const TArray<class FText>& Labels);
	class FText GetSelectedText();
	int32 GetSelectedIndex();
	void BP_OnOptionsPopulated(int32 Count);
	void BP_OnOptionSelected(int32 Index);
};

// 0xF0 (0x3C0 - 0x2D0)
// Class CommonUI.CommonTabListWidgetBase
class UCommonTabListWidgetBase : public UCommonUserWidget
{
public:
	FMulticastInlineDelegateProperty_            OnTabSelected;                                     // 0x2D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTabButtonCreation;                               // 0x2E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTabButtonRemoval;                                // 0x2F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTabListRebuilt;                                  // 0x300(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   NextTabInputActionData;                            // 0x310(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   PreviousTabInputActionData;                        // 0x320(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UInputAction*                          NextTabEnhancedInputAction;                        // 0x330(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInputAction*                          PreviousTabEnhancedInputAction;                    // 0x338(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAutoListenForInput;                               // 0x340(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDeferRebuildingTabList;                           // 0x341(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_22C6[0x2];                                     // Fixing Size After Last Property..
	TWeakObjectPtr<class UCommonAnimatedSwitcher> LinkedSwitcher;                                    // 0x344(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_22C7[0x4];                                     // Fixing Size After Last Property..
	class UCommonButtonGroupBase*                TabButtonGroup;                                    // 0x350(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_22C8[0x8];                                     // Fixing Size After Last Property..
	TMap<class FName, struct FCommonRegisteredTabInfo> RegisteredTabsByID;                                // 0x360(0x50)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_22C9[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonTabListWidgetBase");
		return Clss;
	}

	void SetTabVisibility(class FName TabNameID, enum class ESlateVisibility NewVisibility);
	void SetTabInteractionEnabled(class FName TabNameID, bool bEnable);
	void SetTabEnabled(class FName TabNameID, bool bEnable);
	void SetListeningForInput(bool bShouldListen);
	void SetLinkedSwitcher(class UCommonAnimatedSwitcher* CommonSwitcher);
	bool SelectTabByID(class FName TabNameID, bool bSuppressClickFeedback);
	bool RemoveTab(class FName TabNameID);
	void RemoveAllTabs();
	bool RegisterTab(class FName TabNameID, TSubclassOf<class UCommonButtonBase> ButtonWidgetType, class UWidget* ContentWidget, int32 TabIndex);
	void OnTabSelected__DelegateSignature(class FName TabId);
	void OnTabListRebuilt__DelegateSignature();
	void OnTabButtonRemoval__DelegateSignature(class FName TabId, class UCommonButtonBase* TabButton);
	void OnTabButtonCreation__DelegateSignature(class FName TabId, class UCommonButtonBase* TabButton);
	void HandleTabRemoval(class FName TabNameID, class UCommonButtonBase* TabButton);
	void HandleTabCreation(class FName TabNameID, class UCommonButtonBase* TabButton);
	void HandleTabButtonSelected(class UCommonButtonBase* SelectedTabButton, int32 ButtonIndex);
	void HandlePreviousTabInputAction(bool* bPassThrough);
	void HandlePreLinkedSwitcherChanged_BP();
	void HandlePostLinkedSwitcherChanged_BP();
	void HandleNextTabInputAction(bool* bPassThrough);
	class FName GetTabIdAtIndex(int32 Index);
	int32 GetTabCount();
	class UCommonButtonBase* GetTabButtonBaseByID(class FName TabNameID);
	class FName GetSelectedTabId();
	class UCommonAnimatedSwitcher* GetLinkedSwitcher();
	class FName GetActiveTab();
	void DisableTabWithReason(class FName TabNameID, class FText& Reason);
};

// 0x178 (0x1A0 - 0x28)
// Class CommonUI.CommonTextStyle
class UCommonTextStyle : public UObject
{
public:
	struct FSlateFontInfo                        Font;                                              // 0x28(0x58)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x80(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsesDropShadow;                                   // 0x90(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22CA[0x7];                                     // Fixing Size After Last Property..
	struct FVector2D                             ShadowOffset;                                      // 0x98(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ShadowColor;                                       // 0xA8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               Margin;                                            // 0xB8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_22CB[0x8];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           StrikeBrush;                                       // 0xD0(0xC0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                        LineHeightPercentage;                              // 0x190(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22CC[0xC];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonTextStyle");
		return Clss;
	}

	void GetStrikeBrush(struct FSlateBrush* OutStrikeBrush);
	void GetShadowOffset(struct FVector2D* OutShadowOffset);
	void GetShadowColor(struct FLinearColor* OutColor);
	void GetMargin(struct FMargin* OutMargin);
	float GetLineHeightPercentage();
	void GetFont(struct FSlateFontInfo* OutFont);
	void GetColor(struct FLinearColor* OutColor);
};

// 0x18 (0x40 - 0x28)
// Class CommonUI.CommonTextScrollStyle
class UCommonTextScrollStyle : public UObject
{
public:
	float                                        Speed;                                             // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartDelay;                                        // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndDelay;                                          // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeInDelay;                                       // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeOutDelay;                                      // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22CD[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonTextScrollStyle");
		return Clss;
	}

};

// 0x0 (0xC00 - 0xC00)
// Class CommonUI.CommonTileView
class UCommonTileView : public UTileView
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonTileView");
		return Clss;
	}

};

// 0x8 (0xC30 - 0xC28)
// Class CommonUI.CommonTreeView
class UCommonTreeView : public UTreeView
{
public:
	uint8                                        Pad_22CE[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonTreeView");
		return Clss;
	}

};

// 0x80 (0xA8 - 0x28)
// Class CommonUI.CommonUIEditorSettings
class UCommonUIEditorSettings : public UObject
{
public:
	TSoftClassPtr<class UCommonTextStyle>        TemplateTextStyle;                                 // 0x28(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UCommonButtonStyle>      TemplateButtonStyle;                               // 0x50(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UCommonBorderStyle>      TemplateBorderStyle;                               // 0x78(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_22CF[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonUIEditorSettings");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class CommonUI.CommonUILibrary
class UCommonUILibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonUILibrary");
		return Clss;
	}

	class UWidget* FindParentWidgetOfType(class UWidget* StartingWidget, TSubclassOf<class UWidget> Type);
};

// 0x8 (0x30 - 0x28)
// Class CommonUI.CommonUIRichTextData
class UCommonUIRichTextData : public UObject
{
public:
	class UDataTable*                            InlineIconSet;                                     // 0x28(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonUIRichTextData");
		return Clss;
	}

};

// 0x198 (0x1C0 - 0x28)
// Class CommonUI.CommonUISettings
class UCommonUISettings : public UObject
{
public:
	bool                                         bAutoLoadData;                                     // 0x28(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_22D0[0x7];                                     // Fixing Size After Last Property..
	TSoftObjectPtr<class UObject>                DefaultImageResourceObject;                        // 0x30(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UMaterialInterface>     DefaultThrobberMaterial;                           // 0x58(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UCommonUIRichTextData>   DefaultRichTextDataClass;                          // 0x80(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FGameplayTag>                  PlatformTraits;                                    // 0xA8(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	uint8                                        Pad_22D1[0x28];                                    // Fixing Size After Last Property..
	class UObject*                               DefaultImageResourceObjectInstance;                // 0xE0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInterface*                    DefaultThrobberMaterialInstance;                   // 0xE8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           DefaultThrobberBrush;                              // 0xF0(0xC0)(Transient, NativeAccessSpecifierPrivate)
	class UCommonUIRichTextData*                 RichTextDataInstance;                              // 0x1B0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_22D2[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonUISettings");
		return Clss;
	}

};

// 0x10 (0x40 - 0x30)
// Class CommonUI.CommonUISubsystemBase
class UCommonUISubsystemBase : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_22D5[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonUISubsystemBase");
		return Clss;
	}

	struct FSlateBrush GetInputActionButtonIcon(struct FDataTableRowHandle& InputActionRowHandle, enum class ECommonInputType InputType, class FName& GamepadName);
	struct FSlateBrush GetEnhancedInputActionButtonIcon(class UInputAction* InputAction, class ULocalPlayer* LocalPlayer);
};

// 0x8 (0x30 - 0x28)
// Class CommonUI.CommonInputMetadata
class UCommonInputMetadata : public UObject
{
public:
	int32                                        NavBarPriority;                                    // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsGenericInputAction;                             // 0x2C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22D6[0x3];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonInputMetadata");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class CommonUI.CommonMappingContextMetadataInterface
class UCommonMappingContextMetadataInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonMappingContextMetadataInterface");
		return Clss;
	}

};

// 0x60 (0x90 - 0x30)
// Class CommonUI.CommonMappingContextMetadata
class UCommonMappingContextMetadata : public UDataAsset
{
public:
	uint8                                        Pad_22D7[0x8];                                     // Fixing Size After Last Property..
	class UCommonInputMetadata*                  EnhancedInputMetadata;                             // 0x38(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class UInputAction*, class UCommonInputMetadata*> PerActionEnhancedInputMetadata;                    // 0x40(0x50)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonMappingContextMetadata");
		return Clss;
	}

};

// 0x58 (0x88 - 0x30)
// Class CommonUI.CommonUIVisibilitySubsystem
class UCommonUIVisibilitySubsystem : public ULocalPlayerSubsystem
{
public:
	uint8                                        Pad_22D8[0x58];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonUIVisibilitySubsystem");
		return Clss;
	}

};

// 0x148 (0x2C0 - 0x178)
// Class CommonUI.CommonVideoPlayer
class UCommonVideoPlayer : public UWidget
{
public:
	class UMediaSource*                          Video;                                             // 0x178(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMediaPlayer*                          MediaPlayer;                                       // 0x180(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMediaTexture*                         MediaTexture;                                      // 0x188(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterial*                             VideoMaterial;                                     // 0x190(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMediaSoundComponent*                  SoundComponent;                                    // 0x198(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           VideoBrush;                                        // 0x1A0(0xC0)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_22D9[0x60];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonVideoPlayer");
		return Clss;
	}

};

// 0x28 (0x1C8 - 0x1A0)
// Class CommonUI.CommonVisibilitySwitcher
class UCommonVisibilitySwitcher : public UOverlay
{
public:
	enum class ESlateVisibility                  ShownVisibility;                                   // 0x1A0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_22DA[0x3];                                     // Fixing Size After Last Property..
	int32                                        ActiveWidgetIndex;                                 // 0x1A4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAutoActivateSlot;                                 // 0x1A8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bActivateFirstSlotOnAdding;                        // 0x1A9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_22DB[0x1E];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonVisibilitySwitcher");
		return Clss;
	}

	void SetActiveWidgetIndex(int32 Index);
	void SetActiveWidget(class UWidget* Widget);
	void IncrementActiveWidgetIndex(bool bAllowWrapping);
	int32 GetActiveWidgetIndex();
	class UWidget* GetActiveWidget();
	void DecrementActiveWidgetIndex(bool bAllowWrapping);
	void DeactivateVisibleSlot();
	void ActivateVisibleSlot();
};

// 0x10 (0x68 - 0x58)
// Class CommonUI.CommonVisibilitySwitcherSlot
class UCommonVisibilitySwitcherSlot : public UOverlaySlot
{
public:
	uint8                                        Pad_22DC[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonVisibilitySwitcherSlot");
		return Clss;
	}

};

// 0x60 (0x380 - 0x320)
// Class CommonUI.UCommonVisibilityWidgetBase
class UUCommonVisibilityWidgetBase : public UCommonBorder
{
public:
	TMap<class FName, bool>                      VisibilityControls;                                // 0x320(0x50)(Edit, EditFixedSize, NativeAccessSpecifierPublic)
	bool                                         bShowForGamepad;                                   // 0x370(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowForMouseAndKeyboard;                          // 0x371(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowForTouch;                                     // 0x372(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateVisibility                  VisibleType;                                       // 0x373(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateVisibility                  HiddenType;                                        // 0x374(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22DD[0xB];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UCommonVisibilityWidgetBase");
		return Clss;
	}

	TArray<class FName> GetRegisteredPlatforms();
};

// 0x20 (0x1E8 - 0x1C8)
// Class CommonUI.CommonVisualAttachment
class UCommonVisualAttachment : public USizeBox
{
public:
	struct FVector2D                             ContentAnchor;                                     // 0x1C8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22DE[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonVisualAttachment");
		return Clss;
	}

};

// 0x48 (0x1D8 - 0x190)
// Class CommonUI.CommonWidgetCarousel
class UCommonWidgetCarousel : public UPanelWidget
{
public:
	int32                                        ActiveWidgetIndex;                                 // 0x190(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22E0[0x4];                                     // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            OnCurrentPageIndexChanged;                         // 0x198(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_22E1[0x30];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonWidgetCarousel");
		return Clss;
	}

	void SetActiveWidgetIndex(int32 Index);
	void SetActiveWidget(class UWidget* Widget);
	void PreviousPage();
	void NextPage();
	class UWidget* GetWidgetAtIndex(int32 Index);
	int32 GetActiveWidgetIndex();
	void EndAutoScrolling();
	void BeginAutoScrolling(float ScrollInterval);
};

// 0x48 (0x1C0 - 0x178)
// Class CommonUI.CommonWidgetCarouselNavBar
class UCommonWidgetCarouselNavBar : public UWidget
{
public:
	TSubclassOf<class UCommonButtonBase>         ButtonWidgetType;                                  // 0x178(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               ButtonPadding;                                     // 0x180(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_22E4[0x10];                                    // Fixing Size After Last Property..
	class UCommonWidgetCarousel*                 LinkedCarousel;                                    // 0x1A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonGroupBase*                ButtonGroup;                                       // 0x1A8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UCommonButtonBase*>             Buttons;                                           // 0x1B0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonWidgetCarouselNavBar");
		return Clss;
	}

	void SetLinkedCarousel(class UCommonWidgetCarousel* CommonCarousel);
	void HandlePageChanged(class UCommonWidgetCarousel* CommonCarousel, int32 PageIndex);
	void HandleButtonClicked(class UCommonButtonBase* AssociatedButton, int32 ButtonIndex);
};

// 0x0 (0x28 - 0x28)
// Class CommonUI.CommonWidgetGroupBase
class UCommonWidgetGroupBase : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonWidgetGroupBase");
		return Clss;
	}

	void RemoveWidget(class UWidget* InWidget);
	void RemoveAll();
	void AddWidget(class UWidget* InWidget);
};

// 0xE8 (0x110 - 0x28)
// Class CommonUI.CommonButtonGroupBase
class UCommonButtonGroupBase : public UCommonWidgetGroupBase
{
public:
	FMulticastInlineDelegateProperty_            OnSelectedButtonBaseChanged;                       // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_22E9[0x18];                                    // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            OnHoveredButtonBaseChanged;                        // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_22EA[0x18];                                    // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            OnButtonBaseClicked;                               // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_22EB[0x18];                                    // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            OnButtonBaseDoubleClicked;                         // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_22EC[0x18];                                    // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            OnSelectionCleared;                                // 0xC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_22ED[0x18];                                    // Fixing Size After Last Property..
	bool                                         bSelectionRequired;                                // 0xF0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_22EE[0x1F];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonButtonGroupBase");
		return Clss;
	}

	void SetSelectionRequired(bool bRequireSelection);
	void SelectPreviousButton(bool bAllowWrap);
	void SelectNextButton(bool bAllowWrap);
	void SelectButtonAtIndex(int32 ButtonIndex, bool bAllowSound);
	void OnSelectionStateChangedBase(class UCommonButtonBase* BaseButton, bool bIsSelected);
	void OnHandleButtonBaseDoubleClicked(class UCommonButtonBase* BaseButton);
	void OnHandleButtonBaseClicked(class UCommonButtonBase* BaseButton);
	void OnButtonBaseUnhovered(class UCommonButtonBase* BaseButton);
	void OnButtonBaseHovered(class UCommonButtonBase* BaseButton);
	bool HasAnyButtons();
	int32 GetSelectedButtonIndex();
	class UCommonButtonBase* GetSelectedButtonBase();
	int32 GetHoveredButtonIndex();
	int32 GetButtonCount();
	class UCommonButtonBase* GetButtonBaseAtIndex(int32 Index);
	int32 FindButtonIndex(class UCommonButtonBase* ButtonToFind);
	void DeselectAll();
};

// 0x18 (0x270 - 0x258)
// Class CommonUI.CommonBoundActionBar
class UCommonBoundActionBar : public UDynamicEntryBoxBase
{
public:
	uint8                                        Pad_22EF[0x8];                                     // Fixing Size After Last Property..
	TSubclassOf<class UCommonButtonBase>         ActionButtonClass;                                 // 0x260(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bDisplayOwningPlayerActionsOnly;                   // 0x268(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIgnoreDuplicateActions;                           // 0x269(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_22F0[0x6];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonBoundActionBar");
		return Clss;
	}

	void SetDisplayOwningPlayerActionsOnly(bool bShouldOnlyDisplayOwningPlayerActions);
};

// 0x18 (0x1488 - 0x1470)
// Class CommonUI.CommonBoundActionButton
class UCommonBoundActionButton : public UCommonButtonBase
{
public:
	uint8                                        Pad_22F1[0x8];                                     // Fixing Size After Last Property..
	class UCommonTextBlock*                      Text_ActionName;                                   // 0x1478(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_22F2[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonBoundActionButton");
		return Clss;
	}

	void OnUpdateInputAction();
};

// 0x0 (0xB0 - 0xB0)
// Class CommonUI.CommonGenericInputActionDataTable
class UCommonGenericInputActionDataTable : public UDataTable
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonGenericInputActionDataTable");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class CommonUI.CommonInputActionDataProcessor
class UCommonInputActionDataProcessor : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonInputActionDataProcessor");
		return Clss;
	}

};

// 0x140 (0x170 - 0x30)
// Class CommonUI.CommonUIActionRouterBase
class UCommonUIActionRouterBase : public ULocalPlayerSubsystem
{
public:
	uint8                                        Pad_22F3[0x140];                                   // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonUIActionRouterBase");
		return Clss;
	}

};

// 0x50 (0x78 - 0x28)
// Class CommonUI.CommonUIInputSettings
class UCommonUIInputSettings : public UObject
{
public:
	bool                                         bLinkCursorToGamepadFocus;                         // 0x28(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_22F4[0x3];                                     // Fixing Size After Last Property..
	int32                                        UIActionProcessingPriority;                        // 0x2C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FUIInputAction>                InputActions;                                      // 0x30(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	TArray<struct FUIInputAction>                ActionOverrides;                                   // 0x40(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	struct FCommonAnalogCursorSettings           AnalogCursorSettings;                              // 0x50(0x24)(Edit, Config, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_22F5[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonUIInputSettings");
		return Clss;
	}

};

// 0x120 (0x298 - 0x178)
// Class CommonUI.CommonActivatableWidgetContainerBase
class UCommonActivatableWidgetContainerBase : public UWidget
{
public:
	uint8                                        Pad_22F6[0x18];                                    // Fixing Size After Last Property..
	enum class ECommonSwitcherTransition         TransitionType;                                    // 0x190(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ETransitionCurve                  TransitionCurveType;                               // 0x191(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_22F7[0x2];                                     // Fixing Size After Last Property..
	float                                        TransitionDuration;                                // 0x194(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UCommonActivatableWidget*>      WidgetList;                                        // 0x198(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class UCommonActivatableWidget*              DisplayedWidget;                                   // 0x1A8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FUserWidgetPool                       GeneratedWidgetsPool;                              // 0x1B0(0x88)(Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_22F8[0x60];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonActivatableWidgetContainerBase");
		return Clss;
	}

	void SetTransitionDuration(float Duration);
	void RemoveWidget(class UCommonActivatableWidget* WidgetToRemove);
	float GetTransitionDuration();
	class UCommonActivatableWidget* GetActiveWidget();
	void ClearWidgets();
	class UCommonActivatableWidget* BP_AddWidget(TSubclassOf<class UCommonActivatableWidget> ActivatableWidgetClass);
};

// 0x10 (0x2A8 - 0x298)
// Class CommonUI.CommonActivatableWidgetStack
class UCommonActivatableWidgetStack : public UCommonActivatableWidgetContainerBase
{
public:
	TSubclassOf<class UCommonActivatableWidget>  RootContentWidgetClass;                            // 0x298(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonActivatableWidget*              RootContentWidget;                                 // 0x2A0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonActivatableWidgetStack");
		return Clss;
	}

};

// 0x0 (0x298 - 0x298)
// Class CommonUI.CommonActivatableWidgetQueue
class UCommonActivatableWidgetQueue : public UCommonActivatableWidgetContainerBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonActivatableWidgetQueue");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
