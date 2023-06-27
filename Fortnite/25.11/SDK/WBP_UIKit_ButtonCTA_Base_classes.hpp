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

// 0x578 (0x1A98 - 0x1520)
// WidgetBlueprintGeneratedClass WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C
class UWBP_UIKit_ButtonCTA_Base_C : public UFortCTAButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1520(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_Pressed_Base;                                 // 0x1528(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Focused_Base;                                 // 0x1530(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_UIKit_ButtonBackground_CTA_C*     Background;                                        // 0x1538(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                            Button;                                            // 0x1540(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                HoldIcon;                                          // 0x1548(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                HoldProgressBar;                                   // 0x1550(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                            Prompt;                                            // 0x1558(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                            PromptAlignment;                                   // 0x1560(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_UIKit_ButtonText_CTA_C*           SecondaryTextBlock;                                // 0x1568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_UIKit_ButtonText_CTA_C*           TextBlock;                                         // 0x1570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Text;                                  // 0x1578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EModularButtonSize                ButtonSize;                                        // 0x1580(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9756[0x7];                                     // Fixing Size After Last Property..
	class FText                                  Text;                                              // 0x1588(0x18)(Edit, BlueprintVisible)
	class FText                                  TextSecondary;                                     // 0x15A0(0x18)(Edit, BlueprintVisible)
	TArray<class UWBP_UIKit_Block_Base_C*>       ModularBlocks;                                     // 0x15B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UMaterialInstanceDynamic*              InputActionProgressMaterial;                       // 0x15C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     BackgroundMaterial;                                // 0x15D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     BorderMaterial;                                    // 0x15D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBorderAdditive;                                  // 0x15E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9757[0x3];                                     // Fixing Size After Last Property..
	int32                                        LargeHeight;                                       // 0x15E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MediumHeight;                                      // 0x15E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SmallHeight;                                       // 0x15EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               SingleTextLargePadding;                            // 0x15F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FMargin                               SingleTextMediumPadding;                           // 0x1600(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FMargin                               SingleTextSmallPadding;                            // 0x1610(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FMargin                               DoubleTextLargePadding;                            // 0x1620(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FMargin                               DoubleTextMediumPadding;                           // 0x1630(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FMargin                               DoubleTextSmallPadding;                            // 0x1640(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FMargin                               DoubleTextSecondaryLargePadding;                   // 0x1650(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FMargin                               DoubleTextSecondaryMediumPadding;                  // 0x1660(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FMargin                               DoubleTextSecondarySmallPadding;                   // 0x1670(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                        GridUnit;                                          // 0x1680(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9758[0x4];                                     // Fixing Size After Last Property..
	struct FSlateFontInfo                        LargePrimaryFont;                                  // 0x1688(0x58)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSlateFontInfo                        MediumPrimaryFont;                                 // 0x16E0(0x58)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSlateFontInfo                        SmallPrimaryFont;                                  // 0x1738(0x58)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSlateFontInfo                        LargeSecondaryFont;                                // 0x1790(0x58)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSlateFontInfo                        MeduimSecondaryFont;                               // 0x17E8(0x58)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSlateFontInfo                        SmallSecondaryFont;                                // 0x1840(0x58)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FWidgetTransform                      LeftToRightTransform;                              // 0x1898(0x38)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FWidgetTransform                      RightToLeftTransform;                              // 0x18D0(0x38)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         SingleText;                                        // 0x1908(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9759[0x7];                                     // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            OnFocusChanged;                                    // 0x1910(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                       MobileFontSizeMultiplierLarge;                     // 0x1920(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MobileFontSizeMultiplierMedium;                    // 0x1928(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MobileFontSizeMultiplierSmall;                     // 0x1930(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MobileMinWidth;                                    // 0x1938(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OverrideDefaultHeight;                             // 0x193C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_975A[0x3];                                     // Fixing Size After Last Property..
	int32                                        MobileMinHeight;                                   // 0x1940(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MobileLargeHeight;                                 // 0x1944(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MobileMediumHeight;                                // 0x1948(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MobileSmallHeight;                                 // 0x194C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               MobileSingleTextLargePadding;                      // 0x1950(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FMargin                               MobileSingleTextMediumPadding;                     // 0x1960(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FMargin                               MobileSingleTextSmallPadding;                      // 0x1970(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FMargin                               MobileDoubleTextLargePadding;                      // 0x1980(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FMargin                               MobileDoubleTextMediumPadding;                     // 0x1990(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FMargin                               MobileDoubleTextSmallPadding;                      // 0x19A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FMargin                               MobileDoubleTextSecondaryLargePadding;             // 0x19B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FMargin                               MobileDoubleTextSecondaryMediumPadding;            // 0x19C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FMargin                               MobileDoubleTextSecondarySmallPadding;             // 0x19D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	double                                       MobileFontSizeMultiplierSecondaryLarge;            // 0x19E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MobileFontSizeMultiplierSecondaryMedium;           // 0x19E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MobileFontSizeMultiplierSecondarySmall;            // 0x19F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OverrideDefaultMobileFontSizeMultiplier;           // 0x19F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_975B[0x7];                                     // Fixing Size After Last Property..
	double                                       MobileFontSizeMultiplierOverride;                  // 0x1A00(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<bool>                                 EnabledEvents;                                     // 0x1A08(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       FadeInTime;                                        // 0x1A18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       FadeOutTime;                                       // 0x1A20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            PressedSound;                                      // 0x1A28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            HoveredSound;                                      // 0x1A30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  CurrentInputType;                                  // 0x1A38(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OverrideSecondaryTextSize;                         // 0x1A39(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_975C[0x6];                                     // Fixing Size After Last Property..
	double                                       OverrideSecondaryTextSizeMultiplier;               // 0x1A40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnHoldCompleted;                                   // 0x1A48(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                       MobileFontSizeMultiplierSecondaryOverride;         // 0x1A58(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            HoldPressedSound;                                  // 0x1A60(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            HoldSound;                                         // 0x1A68(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            HoldReleasedSound;                                 // 0x1A70(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            HoldCompletedSound;                                // 0x1A78(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       HoldSoundAudioComponent;                           // 0x1A80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       PressedSoundAudioComponent;                        // 0x1A88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       CurrentHoldProgress;                               // 0x1A90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WBP_UIKit_ButtonCTA_Base_C");
		return Clss;
	}

	void Fade_Out_Sound(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_FadeOut_FadeOutDuration_ImplicitCast, float CallFunc_FadeOut_FadeOutDuration_ImplicitCast_1);
	void PlaySoundHoldCompleted(bool CallFunc_IsValid_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue);
	void Stop_Sound_Hold_Released(bool CallFunc_IsValid_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue);
	void PlaySoundHoldPressed(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue_1);
	void PlaySoundPressed(class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void PlaySoundHovered(class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void IsPromptHoldable(bool* Holdable, const class FString& NewLocalVar, bool CallFunc_IsHeldAction_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void SetHoldPercentage(double HeldPercentageValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
	void IsPromptIcon(bool* Valid, const struct FSlateBrush& CallFunc_GetIcon_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetButtonIsEnabled(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, class UWBP_UIKit_Block_Base_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsHovered_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsNotEmpty_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, class UWBP_UIKit_Block_Base_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Add_IntInt_ReturnValue_2, class UWBP_UIKit_Block_Base_C* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2);
	void SetLanguageDirection(bool RightToLeft, bool Temp_bool_Variable, const struct FWidgetTransform& K2Node_Select_Default);
	void UpdateButtonSIze(enum class EModularButtonSize Temp_byte_Variable, bool Temp_bool_Variable, enum class EModularButtonSize Temp_byte_Variable_1, enum class EModularButtonSize Temp_byte_Variable_2, bool Temp_bool_Variable_1, enum class EModularButtonSize Temp_byte_Variable_3, enum class EModularButtonSize Temp_byte_Variable_4, enum class EModularButtonSize Temp_byte_Variable_5, bool Temp_bool_Variable_2, enum class EModularButtonSize Temp_byte_Variable_6, enum class EModularButtonSize Temp_byte_Variable_7, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, const struct FMargin& K2Node_Select_Default, const struct FMargin& K2Node_Select_Default_1, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, const struct FMargin& K2Node_Select_Default_2, bool CallFunc_IsMobileGame_ReturnValue, const struct FMargin& K2Node_Select_Default_3, int32 K2Node_Select_Default_4, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue_1, int32 K2Node_Select_Default_5, const struct FMargin& K2Node_Select_Default_6, const struct FMargin& K2Node_Select_Default_7, const struct FMargin& K2Node_Select_Default_8, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1, const struct FMargin& K2Node_Select_Default_9, int32 K2Node_Select_Default_10);
	void ShowPromptFallbackAction(bool Show, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void UpdatePrompt(enum class ECommonInputType InputType, bool IsPromptHoldable, bool IsPromptIcon, enum class ECommonInputType Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, enum class ECommonInputType Temp_byte_Variable_6, float Temp_real_Variable, float Temp_real_Variable_1, float Temp_real_Variable_2, bool Temp_bool_Variable_1, float Temp_real_Variable_3, float Temp_real_Variable_4, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_7, enum class ESlateVisibility Temp_byte_Variable_8, bool Temp_bool_Variable_3, enum class ESlateVisibility Temp_byte_Variable_9, enum class ESlateVisibility Temp_byte_Variable_10, bool Temp_bool_Variable_4, enum class ESlateVisibility Temp_byte_Variable_11, enum class ESlateVisibility Temp_byte_Variable_12, enum class ECommonInputType Temp_byte_Variable_13, enum class ESlateVisibility Temp_byte_Variable_14, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, float K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2, float K2Node_Select_Default_3, enum class ESlateVisibility Temp_byte_Variable_15, enum class ESlateVisibility K2Node_Select_Default_4, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_5, bool Temp_bool_Variable_5, enum class ESlateVisibility K2Node_Select_Default_6, enum class ESlateVisibility K2Node_Select_Default_7, bool CallFunc_IsPromptHoldable_Holdable, enum class ESlateVisibility K2Node_Select_Default_8, bool CallFunc_IsPromptIcon_Valid, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
	void Set_Prompt(class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void UpdateButtonSizeToGrid(double NewGridAlignedSize, enum class EModularButtonSize Temp_byte_Variable, int32 CallFunc_FTrunc_ReturnValue, int32 K2Node_Select_Default, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, int32 CallFunc_SelectInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, int32 CallFunc_FCeil_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue);
	void UpdateFonts(enum class EModularButtonSize Temp_byte_Variable, bool Temp_bool_Variable, enum class EModularButtonSize Temp_byte_Variable_1, enum class EModularButtonSize Temp_byte_Variable_2, enum class EModularButtonSize Temp_byte_Variable_3, enum class EModularButtonSize Temp_byte_Variable_4, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, double K2Node_Select_Default, double K2Node_Select_Default_1, double K2Node_Select_Default_2, double K2Node_Select_Default_3, double K2Node_Select_Default_4, float K2Node_Select_Default_5, const struct FSlateFontInfo& K2Node_Select_Default_6, const struct FSlateFontInfo& K2Node_Select_Default_7, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, float K2Node_Select_Option_1_ImplicitCast, float CallFunc_SetMobileFontSizeMultiplier_MobileFontSizeMultiplier_ImplicitCast, float CallFunc_SetMobileFontSizeMultiplier_MobileFontSizeMultiplier_ImplicitCast_1, float K2Node_Select_Option_0_ImplicitCast);
	void SetBlockTiming(class UWBP_UIKit_Block_Base_C* bLock, double Time_Hovering, double Time_Unhovering, double Time_Focusing, double Time_Unfocusing, double Time_Pressing, double Time_Releasing, double Time_Disabling, double Time_Enabling);
	void SetButtonTiming(double Time_Hovering, double Time_Unhovering, double Time_Focusing, double Time_Unfocusing, double Time_Pressing, double Time_Releasing, double Time_Disabling, double Time_Enabling, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWBP_UIKit_Block_Base_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void SetBackgroundMaterial(class UMaterialInstance* Background);
	void SetBackgroundVisibility(bool Visible);
	void SetBorderMaterial(class UMaterialInstance* BorderMaterial, bool IsAdditive);
	void AddModularBlock(class UWBP_UIKit_Block_Base_C* Modular_Block, int32 CallFunc_Array_Add_ReturnValue);
	void ResetButtonState(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_GetIsEnabled_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, class UWBP_UIKit_Block_Base_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_UIKit_Block_Base_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
	void ShowInputActionText(class FText CallFunc_GetDisplayText_ReturnValue, bool CallFunc_SetText_Empty);
	void SetButtonSize(enum class EModularButtonSize ButtonSize);
	void PreConstruct(bool IsDesignTime);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void BP_OnPressed();
	void BP_OnReleased();
	void BP_OnDisabled();
	void BP_OnEnabled();
	void BP_OnInputMethodChanged(enum class ECommonInputType CurrentInputType);
	void OnActionProgress(float HeldPercent);
	void BP_SetText(class FText& Text);
	void BP_SetSecondaryText(class FText& Text);
	void EventOnFocusedManually();
	void BP_OnFocusReceived();
	void BP_OnFocusLost();
	void Construct();
	void BP_OnInputActionUpdated();
	void BP_OnClicked();
	void ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, enum class ECommonInputType K2Node_Event_CurrentInputType, float K2Node_Event_HeldPercent, int32 Temp_int_Array_Index_Variable_2, const class FString& CallFunc_GetCurrentLanguage_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_2, class UWBP_UIKit_Block_Base_C* CallFunc_Array_Get_Item, class UWBP_UIKit_Block_Base_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class UWBP_UIKit_Block_Base_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, bool CallFunc_SetText_Empty, class FText K2Node_Event_Text_1, class FText K2Node_Event_Text, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_IsPromptHoldable_Holdable, bool Temp_bool_Variable, int32 Temp_int_Array_Index_Variable_3, int32 CallFunc_Array_Add_ReturnValue_3, class UWBP_UIKit_Block_Base_C* CallFunc_Array_Get_Item_3, bool Temp_bool_Variable_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_SetText_Empty_1, bool CallFunc_IsPromptHoldable_Holdable_1, bool CallFunc_IsPromptHoldable_Holdable_2, double CallFunc_SetHoldPercentage_HeldPercentageValue_ImplicitCast);
	void OnHoldCompleted__DelegateSignature();
	void OnFocusChanged__DelegateSignature(bool HasFocus);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
