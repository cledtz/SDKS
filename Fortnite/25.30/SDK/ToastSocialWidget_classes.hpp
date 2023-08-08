#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x69 (0x399 - 0x330)
// WidgetBlueprintGeneratedClass ToastSocialWidget.ToastSocialWidget_C
class UToastSocialWidget_C : public UFortSocialNotificationWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Outro_New;                                         // 0x338(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Intro;                                             // 0x340(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonBorder*                         B_NotificationImage;                               // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         B_NotificationImageExtended;                       // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     Button_Cursor;                                     // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     Button_Hold;                                       // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         CommonBorder_MainWidget;                           // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                  DescriptionRichText;                               // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortLazyImage*                        NotificationImage;                                 // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcherLegacy*           Switcher_InputButtons;                             // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                  TitleRichText;                                     // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                          AnimationDelayTimer;                               // 0x390(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bActionTaken;                                      // 0x398(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ToastSocialWidget_C");
		return Clss;
	}

	float GetDisplayTime(bool* bOutDisplayTimeOverridden, class UFortUIFriendNotification* K2Node_DynamicCast_AsFort_UIFriend_Notification, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetDisplayTime_bOutDisplayTimeOverridden, float CallFunc_GetDisplayTime_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void GetButtonHoldText(class FText* Text, class UFortUIFriendNotification* K2Node_DynamicCast_AsFort_UIFriend_Notification, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess);
	void GetButtonCursorText(class FText* Text, class UFortUIFriendNotification* K2Node_DynamicCast_AsFort_UIFriend_Notification, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess);
	void SetVisibilityForOptionalElements(enum class ESlateVisibility CallFunc_GetInputSwitcherVisibility_ReturnValue);
	void TakeAction(bool CallFunc_HasAction_ReturnValue);
	void CleanupBeforeClosing();
	int32 GetActiveWidgetIndex(bool CallFunc_IsUsingTouch_ReturnValue, class UFortGlobalUIContext* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_SelectInt_ReturnValue);
	enum class ESlateVisibility GetInputSwitcherVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_HasAction_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void SetupAnimBindings(bool Unbind, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3);
	void SetImage(TSoftObjectPtr<class UObject> CallFunc_GetDisplayAsset_ReturnValue, class UTwitchNotification_C* K2Node_DynamicCast_AsTwitch_Notification, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValidSoftObjectReference_ReturnValue);
	void StartIntro(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void UpdateToast(class UFortUINotification* Notification, class UCommonWidgetSwitcherLegacy* NewLocalVar_3, class FText CallFunc_GetDescription_ReturnValue, class FText CallFunc_GetTitle_ReturnValue, class FText CallFunc_GetButtonHoldText_Text, class FText CallFunc_GetButtonCursorText_Text, int32 CallFunc_GetActiveWidgetIndex_ReturnValue);
	void PlayOutro();
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void HandleOutroFinished();
	void HandleIntroFinished();
	void Construct();
	void Destruct();
	void OnPlayOpenAnimation();
	void OnCursorModeChanged(bool bCursorModeEnabled);
	void BndEvt__Button_Hold_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void OnCancelNotification();
	void OnTakeActionNotification();
	void OnUserStartedHoldActionNotification();
	void OnInputModeChanged(enum class ECommonInputType NewInputType);
	void OnNotificationSet(class UFortUINotification* Notification);
	void OnNotificationUpdated(class UFortUINotification* Notification);
	void ExecuteUbergraph_ToastSocialWidget(int32 EntryPoint, bool CallFunc_IsUsingTouch_ReturnValue, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FPointerEvent& K2Node_Event_MouseEvent, class UCommonButtonLegacy* K2Node_ComponentBoundEvent_Button_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_bCursorModeEnabled, class UCommonButtonLegacy* K2Node_ComponentBoundEvent_Button, bool CallFunc_BooleanOR_ReturnValue, class UIconTextButton_C* K2Node_Select_Default, enum class ECommonInputType K2Node_Event_NewInputType, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UFortUINotification* K2Node_Event_Notification_1, class UFortUINotification* K2Node_Event_Notification, bool CallFunc_GetDisplayTime_bOutDisplayTimeOverridden, float CallFunc_GetDisplayTime_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
