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

// 0xA9 (0x15D9 - 0x1530)
// WidgetBlueprintGeneratedClass BP_SidebarCollectionScreenContainerTabButtonEditTags.BP_SidebarCollectionScreenContainerTabButtonEditTags_C
class UBP_SidebarCollectionScreenContainerTabButtonEditTags_C : public UFortSidebarCollectionScreenContainerTabButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1530(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Selected_Touch;                                    // 0x1538(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Unselected_Touch;                                  // 0x1540(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Tag_DisabledUnhover;                               // 0x1548(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Tag_DisabledHover;                                 // 0x1550(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Tag_DisabledUnhovered;                             // 0x1558(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Tag_DisabledHovered;                               // 0x1560(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Tag_Enabled;                                       // 0x1568(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Tag_Unhovered;                                     // 0x1570(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Tag_Hovered;                                       // 0x1578(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Tag_Reset;                                         // 0x1580(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Reset;                                             // 0x1588(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Unhovered;                                         // 0x1590(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Hovered;                                           // 0x1598(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Unselected;                                        // 0x15A0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Selected;                                          // 0x15A8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_0;                                   // 0x15B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               Mobile_Spacer;                                     // 0x15B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         NewBang;                                           // 0x15C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_0;                                         // 0x15C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_MobileMultiplier;                         // 0x15D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsTab;                                             // 0x15D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_SidebarCollectionScreenContainerTabButtonEditTags_C");
		return Clss;
	}

	void HandleInputMethodChanged(enum class ECommonInputType NewInputType, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, enum class ECommonInputType Temp_byte_Variable, bool K2Node_Select_Default, bool CallFunc_GetSelected_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_3, bool CallFunc_GetSelected_ReturnValue_1);
	void Finished_D3AB39584598BB6DA7EE7C98805576AC();
	void BP_OnHovered();
	void BP_OnUnhovered();
	void BP_OnSelected();
	void BP_OnDeselected();
	void BP_ShowBang(bool bShow);
	void Construct();
	void BP_OnTagCategoryChange(enum class ESocialTagCategory InTagCategory);
	void OnInitialized();
	void ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags(int32 EntryPoint, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool K2Node_Event_bShow, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, enum class ESocialTagCategory K2Node_Event_InTagCategory, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const struct FSidebarSocialTagCategoryStructure& CallFunc_Get_Sidebar_Social_Tag_Category_Structure_SidebarSocialTagCategoryStructure, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_2, bool CallFunc_IsUsingTouch_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_3, bool CallFunc_IsUsingTouch_ReturnValue_1, bool CallFunc_GetSelected_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_4, bool CallFunc_IsUsingTouch_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsUsingTouch_ReturnValue_3, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_5);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
