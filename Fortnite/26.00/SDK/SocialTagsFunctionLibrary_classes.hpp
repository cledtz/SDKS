#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass SocialTagsFunctionLibrary.SocialTagsFunctionLibrary_C
class USocialTagsFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USocialTagsFunctionLibrary_C* GetDefaultObj();

	void InterpolateTagContentColors(class UTextBlock* TagName, class UImage* CheckMark, const struct FLinearColor& CurrentTagContentColor, const struct FLinearColor& TargetTagContentColor, double HoveredTagContentLerpAlpha, class UObject* __WorldContext, bool CallFunc_IsValid_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, float CallFunc_LinearColorLerp_Alpha_ImplicitCast, float CallFunc_LinearColorLerp_Alpha_ImplicitCast_1);
	void InterpolateTagBorderColors(class UMaterialInstanceDynamic* TagBorderMaterial, class FName NameInnerColor, const struct FLinearColor& CurrentInnerColor, const struct FLinearColor& TargetInnerColor, class FName NameOuterColor, const struct FLinearColor& CurrentOuterColor, const struct FLinearColor& TargetOuterColor, double HoveredBorderColorLerpAlpha, struct FTimerHandle& ColorLerpTimeHandle, class UObject* WorldContext, class UObject* __WorldContext);
	void ClearLerpColorTimer(double ColorLerpAlpha, struct FTimerHandle& ColorLerpTimeHandle, class UObject* __WorldContext, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue);
	void InterpolateMaterialColor(class UMaterialInstanceDynamic* Material, class FName ColorParameterName, const struct FLinearColor& CurrentColor, const struct FLinearColor& TargetColor, double ColorLerpAlpha, class UObject* __WorldContext, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, float CallFunc_LinearColorLerp_Alpha_ImplicitCast);
	void InterpolateTagBorderOuterStrokeColor(class UBorder* TagBorder, class FName TagOuterStrokeColor, struct FSidebarSocialTagCategoryStructure& SidebarSocialTagCategoryStructure, double TagBorderInnerColorHoveredLerpValue, struct FTimerHandle& TagBorderInnerColorHoveredLerpTimeHandle, class UWidget* TagWidgetReference, const struct FLinearColor& TagOuterStrokeColorUnhovered, class UObject* __WorldContext, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_LinearColorLerp_Alpha_ImplicitCast);
	void InterpolateTagBorderGradientColor(class UBorder* TagBorder, class FName TagInnerColorGradient_1, class FName TagInnerColorGradient_2, struct FSidebarSocialTagCategoryStructure& SidebarSocialTagCategoryStructure, double TagBorderInnerColorHoveredLerpValue, struct FTimerHandle& TagBorderInnerColorHoveredLerpTimeHandle, class UWidget* TagWidgetReference, class UObject* __WorldContext, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_LinearColorLerp_Alpha_ImplicitCast, float CallFunc_LinearColorLerp_Alpha_ImplicitCast_1);
	void Get_Sidebar_Social_Tag_Category_Structure(const class FString& TagCategory, class UObject* __WorldContext, struct FSidebarSocialTagCategoryStructure* SidebarSocialTagCategoryStructure, const struct FSidebarSocialTagCategoryStructure& LocalSidebarSocialTagCategoryStructure, const class FString& CallFunc_Replace_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FSidebarSocialTagCategoryStructure& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FSidebarSocialTagCategoryStructure& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1);
};

}


