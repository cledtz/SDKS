#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x138 (0x530 - 0x3F8)
// Class CommonUILegacy.CommonActivatablePanelLegacy
class UCommonActivatablePanelLegacy : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_2613[0x8];                                     // Fixing Size After Last Property
	FMulticastInlineDelegateProperty_            OnWidgetActivated;                                 // 0x400(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnWidgetDeactivated;                               // 0x410(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bConsumeAllActions;                                // 0x420(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bExposeActionsExternally;                          // 0x421(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShouldBypassStack;                                // 0x422(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2616[0x10D];                                   // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonActivatablePanelLegacy");
		return Clss;
	}

	void SetInputActionHandlerWithProgressPopupMenu(const struct FDataTableRowHandle& InputActionRow, FDelegateProperty_ CommitedEvent, FDelegateProperty_ ProgressEvent, class UCommonPopupMenuLegacy* PopupMenu);
	void SetInputActionHandlerWithProgress(const struct FDataTableRowHandle& InputActionRow, FDelegateProperty_ CommitedEvent, FDelegateProperty_ ProgressEvent);
	void SetInputActionHandlerWithPopupMenu(const struct FDataTableRowHandle& InputActionRow, FDelegateProperty_ CommitedEvent, class UCommonPopupMenuLegacy* PopupMenu);
	void SetInputActionHandler(const struct FDataTableRowHandle& InputActionRow, FDelegateProperty_ CommitedEvent);
	void SetActionHandlerStateWithDisabledCommitEvent(class UDataTable* DataTable, class FName RowName, enum class EInputActionState State, FDelegateProperty_ DisabledCommitEvent);
	void SetActionHandlerStateFromHandleWithDisabledCommitEvent(const struct FDataTableRowHandle& InputActionRow, enum class EInputActionState State, FDelegateProperty_ DisabledCommitEvent);
	void SetActionHandlerStateFromHandle(const struct FDataTableRowHandle& InputActionRow, enum class EInputActionState State);
	void SetActionHandlerState(class UDataTable* DataTable, class FName RowName, enum class EInputActionState State);
	void RemoveInputActionHandler(const struct FDataTableRowHandle& InputActionRow);
	void RemoveAllInputActionHandlers();
	void PopPanel();
	void OnTransitionedBySwitcher();
	void OnRemovedFromActivationStack();
	void OnInputModeChanged(bool bUsingGamepad);
	void OnBeginOutro();
	void OnBeginIntro();
	void OnAddedToActivationStack();
	bool IsIntroed();
	bool IsInActivationStack();
	bool HasInputActionHandler(const struct FDataTableRowHandle& InputActionRow);
	bool GetInputActions(TArray<struct FCommonInputActionHandlerData>* InputActionDataRows);
	void EndOutro();
	void EndIntro();
	void BeginOutro();
	void BeginIntro();
	void AddInputActionNoHandler(class UDataTable* DataTable, class FName RowName);
	void AddInputActionHandlerWithProgressPopup(class UDataTable* DataTable, class FName RowName, FDelegateProperty_ CommitedEvent, FDelegateProperty_ ProgressEvent, class UCommonPopupMenuLegacy* PopupMenu);
	void AddInputActionHandlerWithProgress(class UDataTable* DataTable, class FName RowName, FDelegateProperty_ CommitedEvent, FDelegateProperty_ ProgressEvent);
	void AddInputActionHandlerWithPopup(class UDataTable* DataTable, class FName RowName, FDelegateProperty_ CommitedEvent, class UCommonPopupMenuLegacy* PopupMenu);
	void AddInputActionHandler(class UDataTable* DataTable, class FName RowName, FDelegateProperty_ CommitedEvent);
};

// 0x0 (0x640 - 0x640)
// Class CommonUILegacy.CommonButtonInternalLegacy
class UCommonButtonInternalLegacy : public UCommonButtonInternalBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonButtonInternalLegacy");
		return Clss;
	}

};

// 0x50 (0x14C0 - 0x1470)
// Class CommonUILegacy.CommonButtonLegacy
class UCommonButtonLegacy : public UCommonButtonBase
{
public:
	FMulticastInlineDelegateProperty_            OnSelectedChanged;                                 // 0x1470(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnButtonClicked;                                   // 0x1480(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnButtonDoubleClicked;                             // 0x1490(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnButtonHovered;                                   // 0x14A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnButtonUnhovered;                                 // 0x14B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonButtonLegacy");
		return Clss;
	}

	void SetTriggeredInputActionLegacy(struct FDataTableRowHandle& InputActionRow, class UCommonActivatablePanelLegacy* OldPanel);
	void HandleOnSelectedChanged(class UCommonButtonBase* Button, bool InSelected);
	void HandleOnButtonUnhovered(class UCommonButtonBase* Button);
	void HandleOnButtonHovered(class UCommonButtonBase* Button);
	void HandleOnButtonDoubleClicked(class UCommonButtonBase* Button);
	void HandleOnButtonClicked(class UCommonButtonBase* Button);
};

// 0x48 (0x70 - 0x28)
// Class CommonUILegacy.CommonGlobalInputHandlerLegacy
class UCommonGlobalInputHandlerLegacy : public UObject
{
public:
	uint8                                        Pad_263D[0x48];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonGlobalInputHandlerLegacy");
		return Clss;
	}

};

// 0xE0 (0x108 - 0x28)
// Class CommonUILegacy.CommonInputManagerLegacy
class UCommonInputManagerLegacy : public UObject
{
public:
	uint8                                        Pad_268A[0x80];                                    // Fixing Size After Last Property
	TScriptInterface<class UCommonActionHandlerInterface> CurrentlyHeldActionInputHandler;                   // 0xA8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UCommonActivatablePanelLegacy*> ActivatablePanelStack;                             // 0xB8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UCommonGlobalInputHandlerLegacy*       GlobalInputHandler;                                // 0xC8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_268B[0x18];                                    // Fixing Size After Last Property
	TArray<struct FOperation>                    Operations;                                        // 0xE8(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_268C[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonInputManagerLegacy");
		return Clss;
	}

	void SuspendStartingOperationProcessing();
	bool StopListeningForExistingHeldAction(struct FDataTableRowHandle& InputActionDataRow, FDelegateProperty_& CompleteEvent, FDelegateProperty_& ProgressEvent);
	bool StartListeningForExistingHeldAction(struct FDataTableRowHandle& InputActionDataRow, FDelegateProperty_& CompleteEvent, FDelegateProperty_& ProgressEvent);
	void SetGlobalInputHandlerPriorityFilter(int32 InFilterPriority);
	void ResumeStartingOperationProcessing();
	void PushActivatablePanel(class UCommonActivatablePanelLegacy* ActivatablePanel, bool bIntroPanel, bool bOutroPanelBelow);
	void PopActivatablePanel(class UCommonActivatablePanelLegacy* ActivatablePanel);
	bool IsPanelOnStack(class UCommonActivatablePanelLegacy* InPanel);
	bool IsInputSuspended();
	class UCommonActivatablePanelLegacy* GetTopPanel();
	int32 GetGlobalInputHandlerPriorityFilter();
	bool GetAvailableInputActions(TArray<struct FCommonInputActionHandlerData>* AvailableInputActions);
};

// 0x30 (0x300 - 0x2D0)
// Class CommonUILegacy.CommonInputReflectorLegacy
class UCommonInputReflectorLegacy : public UCommonUserWidget
{
public:
	TSubclassOf<class UCommonButtonLegacy>       ButtonType;                                        // 0x2D0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UCommonButtonLegacy*>           ActiveButtons;                                     // 0x2D8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UCommonButtonLegacy*>           InactiveButtons;                                   // 0x2E8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_26A4[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonInputReflectorLegacy");
		return Clss;
	}

	void OnButtonAdded(class UCommonButtonLegacy* AddedButton, struct FCommonInputActionHandlerData& Data);
};

// 0x10 (0x14D0 - 0x14C0)
// Class CommonUILegacy.CommonPopupButtonLegacy
class UCommonPopupButtonLegacy : public UCommonButtonLegacy
{
public:
	class UMenuAnchor*                           PopupMenuAnchor;                                   // 0x14C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonPopupMenuLegacy*                PopupMenu;                                         // 0x14C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonPopupButtonLegacy");
		return Clss;
	}

	class UUserWidget* GetMenuAnchorWidget();
};

// 0x18 (0x548 - 0x530)
// Class CommonUILegacy.CommonPopupMenuLegacy
class UCommonPopupMenuLegacy : public UCommonActivatablePanelLegacy
{
public:
	bool                                         bUseInputStack;                                    // 0x530(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_26D5[0x3];                                     // Fixing Size After Last Property
	TWeakObjectPtr<class UMenuAnchor>            OwningMenuAnchor;                                  // 0x534(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UObject>                ContextProvidingObject;                            // 0x53C(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_26D7[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonPopupMenuLegacy");
		return Clss;
	}

	void SetOwningMenuAnchor(class UMenuAnchor* MenuAnchor);
	void SetContextProvider(class UObject* ContextProvidingObject);
	void RequestClose();
	void OnIsOpenChanged(bool IsOpen);
	void HandlePreDifferentContextProviderSet();
	void HandlePostDifferentContextProviderSet();
};

// 0x20 (0x3E0 - 0x3C0)
// Class CommonUILegacy.CommonTabListWidgetLegacy
class UCommonTabListWidgetLegacy : public UCommonTabListWidgetBase
{
public:
	FMulticastInlineDelegateProperty_            OnTabButtonCreated;                                // 0x3C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTabButtonRemoved;                                // 0x3D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonTabListWidgetLegacy");
		return Clss;
	}

	void OnTabButtonRemoved__DelegateSignature(class FName TabId, class UCommonButtonLegacy* TabButton);
	void OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButtonLegacy* TabButton);
	void HandleTabRemoved(class FName TabNameID, class UCommonButtonLegacy* TabButton);
	void HandleTabCreated(class FName TabNameID, class UCommonButtonLegacy* TabButton);
	void HandleOnTabButtonRemoved(class FName TabId, class UCommonButtonBase* TabButton);
	void HandleOnTabButtonCreated(class FName TabId, class UCommonButtonBase* TabButton);
	class UCommonButtonLegacy* GetTabButtonByID(class FName TabNameID);
};

// 0x30 (0x70 - 0x40)
// Class CommonUILegacy.CommonUISubsystemLegacy
class UCommonUISubsystemLegacy : public UCommonUISubsystemBase
{
public:
	FMulticastInlineDelegateProperty_            OnInputSuspensionChanged;                          // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UCommonInputManagerLegacy*             CommonInputManager;                                // 0x50(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_274D[0x18];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonUISubsystemLegacy");
		return Clss;
	}

	void InputSuspensionChanged__DelegateSignature(bool bInputSuspended);
	class UCommonInputManagerLegacy* GetInputManager();
};

// 0x10 (0x330 - 0x320)
// Class CommonUILegacy.CommonVisibilityWidgetLegacy
class UCommonVisibilityWidgetLegacy : public UCommonBorder
{
public:
	bool                                         bShowForGamepad;                                   // 0x320(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowForMouseAndKeyboard;                          // 0x321(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowForTouch;                                     // 0x322(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowForPC;                                        // 0x323(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowForMac;                                       // 0x324(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowForPS4;                                       // 0x325(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowForPS5;                                       // 0x326(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowForXBox;                                      // 0x327(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowForXSX;                                       // 0x328(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowForIOS;                                       // 0x329(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowForAndroid;                                   // 0x32A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowForErebus;                                    // 0x32B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateVisibility                  VisibleType;                                       // 0x32C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateVisibility                  HiddenType;                                        // 0x32D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2756[0x2];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonVisibilityWidgetLegacy");
		return Clss;
	}

};

// 0x10 (0x1D8 - 0x1C8)
// Class CommonUILegacy.CommonWidgetStackLegacy
class UCommonWidgetStackLegacy : public UCommonVisibilitySwitcher
{
public:
	FMulticastInlineDelegateProperty_            OnActiveWidgetChangedLegacyEvent;                  // 0x1C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonWidgetStackLegacy");
		return Clss;
	}

	void PushWidget(class UWidget* InWidget);
	class UWidget* PopWidget();
	void OnActiveWidgetChangedLegacy__DelegateSignature(class UWidget* InActiveWidget, int32 InActiveWidgetIndex);
	void DeactivateWidget();
	void ActivateWidget();
};

// 0x28 (0x240 - 0x218)
// Class CommonUILegacy.CommonWidgetSwitcherLegacy
class UCommonWidgetSwitcherLegacy : public UCommonAnimatedSwitcher
{
public:
	FMulticastInlineDelegateProperty_            OnActiveWidgetDeactivated;                         // 0x218(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnActiveWidgetChanged;                             // 0x228(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bWidgetActivationEnabled;                          // 0x238(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bOutroPanelBelow;                                  // 0x239(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2792[0x6];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonWidgetSwitcherLegacy");
		return Clss;
	}

	void SetActiveWidgetIndex_Advanced(int32 Index, bool AttemptActivationChange);
	void SetActiveWidget_Advanced(class UWidget* Widget, bool AttemptActivationChange);
	void HandleActiveWidgetDeactivated(class UCommonActivatablePanelLegacy* DeactivatedPanel);
	void DeactivateWidget();
	void ActivateWidget();
};

// 0xA0 (0x1B0 - 0x110)
// Class CommonUILegacy.CommonButtonGroupLegacy
class UCommonButtonGroupLegacy : public UCommonButtonGroupBase
{
public:
	FMulticastInlineDelegateProperty_            OnSelectedButtonChanged;                           // 0x110(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_27E4[0x18];                                    // Fixing Size After Last Property
	FMulticastInlineDelegateProperty_            OnHoveredButtonChanged;                            // 0x138(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_27E5[0x18];                                    // Fixing Size After Last Property
	FMulticastInlineDelegateProperty_            OnButtonClicked;                                   // 0x160(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_27E7[0x18];                                    // Fixing Size After Last Property
	FMulticastInlineDelegateProperty_            OnButtonDoubleClicked;                             // 0x188(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_27E8[0x18];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonButtonGroupLegacy");
		return Clss;
	}

	void OnSelectionStateChanged(class UCommonButtonLegacy* BaseButton, bool bIsSelected);
	void OnHandleButtonDoubleClicked(class UCommonButtonLegacy* BaseButton);
	void OnHandleButtonClicked(class UCommonButtonLegacy* BaseButton);
	void OnButtonUnhovered(class UCommonButtonLegacy* BaseButton);
	void OnButtonHovered(class UCommonButtonLegacy* BaseButton);
	void HandleOnSelectedButtonChanged(class UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex);
	void HandleOnHoveredButtonChanged(class UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex);
	void HandleOnButtonDoubleClicked(class UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex);
	void HandleOnButtonClicked(class UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex);
	void HandleNativeOnSelectedButtonChanged(class UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex);
	void HandleNativeOnHoveredButtonChanged(class UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex);
	void HandleNativeOnButtonDoubleClicked(class UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex);
	void HandleNativeOnButtonClicked(class UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex);
	class UCommonButtonLegacy* GetSelectedButton();
	class UCommonButtonLegacy* GetButtonAtIndex(int32 Index);
	class UCommonButtonGroupLegacy* CreateButtonGroup(class UObject* ContextObject, bool bInSelectionRequired);
};

// 0x8 (0x178 - 0x170)
// Class CommonUILegacy.CommonUIActionRouterLegacy
class UCommonUIActionRouterLegacy : public UCommonUIActionRouterBase
{
public:
	uint8                                        Pad_27EE[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonUIActionRouterLegacy");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
