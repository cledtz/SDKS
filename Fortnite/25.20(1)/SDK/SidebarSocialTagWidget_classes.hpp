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

// 0x254 (0x1724 - 0x14D0)
// WidgetBlueprintGeneratedClass SidebarSocialTagWidget.SidebarSocialTagWidget_C
class USidebarSocialTagWidget_C : public USocialTagWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x14D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      BorderUnhover;                                     // 0x14D8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      BorderHover;                                       // 0x14E0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      StateChange;                                       // 0x14E8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               Border_TagBorder;                                  // 0x14F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SidebarCollectionScreenContainerTabButtonEditTags_C* BP_SidebarCollectionScreenContainerTabButtonEditTags; // 0x14F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                            GridPanel_TagWidget;                               // 0x1500(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_TagCategoryIcon;                          // 0x1508(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USidebarSocialAddingTagWidget_C*       SidebarSocialAddingTagWidget;                      // 0x1510(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               Spacer_TagCategoryIcon;                            // 0x1518(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonVisibilitySwitcher*             Switcher_SelectedState;                            // 0x1520(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_TagName;                                      // 0x1528(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                  Name_InnerColor;                                   // 0x1530(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Name_OuterColor;                                   // 0x1534(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Name_TagOpacity;                                   // 0x1538(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A19C[0x4];                                     // Fixing Size After Last Property..
	class FString                                TagCategory_Disabled;                              // 0x1540(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FTimerHandle                          StateChangeLerpTimerHandle;                        // 0x1550(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       StateChangeLerpAlpha;                              // 0x1558(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FSidebarSocialTagCategoryStructure    TagCategoryStructureReference;                     // 0x1560(0x6C)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_A19D[0x4];                                     // Fixing Size After Last Property..
	struct FSidebarSocialTagCategoryStructure    DisabledTagCategoryStructureReference;             // 0x15D0(0x6C)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_A19E[0x4];                                     // Fixing Size After Last Property..
	double                                       StateChangeLerpTimeStep;                           // 0x1640(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              TagBorderMaterialReference;                        // 0x1648(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CurrentInnerColorReference;                        // 0x1650(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CurrentOuterColorReference;                        // 0x1660(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          TargetInnerColorReference;                         // 0x1670(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          TargetOuterColorReference;                         // 0x1680(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          TagContentColorWhite;                              // 0x1690(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          TagContentColorWhiteDisabled;                      // 0x16A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          TagContentColorBlack;                              // 0x16B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CurrentTagContentColorReference;                   // 0x16C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          TargetTagContentColorReference;                    // 0x16D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          TagContentColorBlackDisabled;                      // 0x16E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       EnabledTagOpacity;                                 // 0x16F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DisabledTagOpacity;                                // 0x16F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Highlighted;                                       // 0x1700(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A19F[0x7];                                     // Fixing Size After Last Property..
	class UMaterialInstanceDynamic*              TagCategoryIconMaterialReference;                  // 0x1708(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  Name_GradientStartColor;                           // 0x1710(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Name_GradientEndColor;                             // 0x1714(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Name_IconColor;                                    // 0x1718(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Name_EndingInnerColor;                             // 0x171C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Name_EndingOuterColor;                             // 0x1720(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SidebarSocialTagWidget_C");
		return Clss;
	}

	void SetTagHoverState(bool IsUserSocialTag, bool IsHovering, float Temp_real_Variable, float Temp_real_Variable_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool Temp_bool_Variable, float K2Node_Select_Default, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3);
	void SetUnhoverState(bool bPlayAnimation, float CallFunc_GetEndTime_ReturnValue, float CallFunc_GetStartTime_ReturnValue, double CallFunc_SelectFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, float CallFunc_GetEndTime_ReturnValue_1, bool CallFunc_IsAnimationPlaying_ReturnValue, float CallFunc_GetStartTime_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, double CallFunc_SelectFloat_B_ImplicitCast, double CallFunc_SelectFloat_A_ImplicitCast, float CallFunc_PlayAnimation_StartAtTime_ImplicitCast, double CallFunc_SelectFloat_B_ImplicitCast_1, double CallFunc_SelectFloat_A_ImplicitCast_1, float CallFunc_PlayAnimation_StartAtTime_ImplicitCast_1, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
	void FunctionSetTagBorderColors(const struct FLinearColor& InnerColor, const struct FLinearColor& OuterColor, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_1, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnTagListEntryUnhovered();
	void OnTagListEntryHovered(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
	void GetCurrentTagBorderColors(bool CallFunc_IsValid_ReturnValue, const struct FLinearColor& CallFunc_K2_GetVectorParameterValue_ReturnValue, const struct FLinearColor& CallFunc_K2_GetVectorParameterValue_ReturnValue_1);
	void FunctionOnUnhovered(bool CallFunc_IsAnimationPlaying_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2);
	void FunctionOnHovered(bool CallFunc_IsAnimationPlaying_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
	void FunctionSetCategoryCustomizationVisibility(enum class ESlateVisibility CategoryCustomizationVisibility, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void FunctionSetTag(class FText InTagName, enum class ESocialTagCategory InTagCategory, bool InIsSystemTag, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSidebarSocialTagCategoryStructure& CallFunc_Get_Sidebar_Social_Tag_Category_Structure_SidebarSocialTagCategoryStructure, const struct FSidebarSocialTagCategoryStructure& CallFunc_Get_Sidebar_Social_Tag_Category_Structure_SidebarSocialTagCategoryStructure_1, TSoftObjectPtr<class UMaterialInstance> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void SetCategoryCustomizationVisibility(enum class ESlateVisibility CategoryCustomizationVisibility);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void BP_OnDeselected();
	void BP_OnSelected();
	void SetTag(class FText& InTagName, enum class ESocialTagCategory InTagCategory, bool bInIsSystemTag);
	void InterpolateTagColors();
	void Construct();
	void SetHighlightState(bool bHighlighted);
	void SetFullColor();
	void Event_SetFriendsCellColor();
	void ExecuteUbergraph_SidebarSocialTagWidget(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Event_CategoryCustomizationVisibility, class FText K2Node_Event_InTagName, enum class ESocialTagCategory K2Node_Event_InTagCategory, bool K2Node_Event_bInIsSystemTag, bool Temp_bool_Variable_1, bool CallFunc_IsMobileGame_ReturnValue, bool K2Node_Event_bHighlighted, class UCommonButtonLegacy* CallFunc_FindParentWidgetOfType_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsHovered_ReturnValue, class UWidgetAnimation* K2Node_Select_Default, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, const struct FLinearColor& K2Node_Select_Default_1, class UWidgetAnimation* K2Node_Select_Default_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FLinearColor& K2Node_Select_Default_3, bool CallFunc_IsValid_ReturnValue_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
