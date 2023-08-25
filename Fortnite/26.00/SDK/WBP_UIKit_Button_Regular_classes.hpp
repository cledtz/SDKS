#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x1A01 - 0x19F8)
// WidgetBlueprintGeneratedClass WBP_UIKit_Button_Regular.WBP_UIKit_Button_Regular_C
class UWBP_UIKit_Button_Regular_C : public UWBP_UIKit_ButtonCTA_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x19F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	enum class E_UI_CTAButtonType                ButtonType;                                        // 0x1A00(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_UIKit_Button_Regular_C* GetDefaultObj();

	void OverrideFontMaterials(class UMaterialInstance* PrimaryFontMaterial, class UMaterialInstance* SecondaryFontMaterial, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_1, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_2, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_3, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_4, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_5);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_UIKit_Button_Regular(int32 EntryPoint, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_Event_IsDesignTime);
};

}


