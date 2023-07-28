#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function SocialTagsFunctionLibrary.SocialTagsFunctionLibrary_C.InterpolateTagContentColors
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*                  TagName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UImage*                      CheckMark                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CurrentTagContentColor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                TargetTagContentColor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             HoveredTagContentLerpAlpha                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()
// float                              CallFunc_LinearColorLerp_Alpha_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LinearColorLerp_Alpha_ImplicitCast_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USocialTagsFunctionLibrary_C::InterpolateTagContentColors(class UTextBlock* TagName, class UImage* CheckMark, const struct FLinearColor& CurrentTagContentColor, const struct FLinearColor& TargetTagContentColor, double HoveredTagContentLerpAlpha, class UObject* __WorldContext, bool CallFunc_IsValid_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, float CallFunc_LinearColorLerp_Alpha_ImplicitCast, float CallFunc_LinearColorLerp_Alpha_ImplicitCast_1)
{
	static auto Func = Class->GetFunction("SocialTagsFunctionLibrary_C", "InterpolateTagContentColors");

	Params::USocialTagsFunctionLibrary_C_InterpolateTagContentColors_Params Parms;

	Parms.TagName = TagName;
	Parms.CheckMark = CheckMark;
	Parms.CurrentTagContentColor = CurrentTagContentColor;
	Parms.TargetTagContentColor = TargetTagContentColor;
	Parms.HoveredTagContentLerpAlpha = HoveredTagContentLerpAlpha;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_LinearColorLerp_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;
	Parms.CallFunc_LinearColorLerp_ReturnValue_1 = CallFunc_LinearColorLerp_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_LinearColorLerp_Alpha_ImplicitCast = CallFunc_LinearColorLerp_Alpha_ImplicitCast;
	Parms.CallFunc_LinearColorLerp_Alpha_ImplicitCast_1 = CallFunc_LinearColorLerp_Alpha_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialTagsFunctionLibrary.SocialTagsFunctionLibrary_C.InterpolateTagBorderColors
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    TagBorderMaterial                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        NameInnerColor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CurrentInnerColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                TargetInnerColor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        NameOuterColor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CurrentOuterColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                TargetOuterColor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             HoveredBorderColorLerpAlpha                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                ColorLerpTimeHandle                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UObject*                     WorldContext                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void USocialTagsFunctionLibrary_C::InterpolateTagBorderColors(class UMaterialInstanceDynamic* TagBorderMaterial, class FName NameInnerColor, const struct FLinearColor& CurrentInnerColor, const struct FLinearColor& TargetInnerColor, class FName NameOuterColor, const struct FLinearColor& CurrentOuterColor, const struct FLinearColor& TargetOuterColor, double HoveredBorderColorLerpAlpha, struct FTimerHandle& ColorLerpTimeHandle, class UObject* WorldContext, class UObject* __WorldContext)
{
	static auto Func = Class->GetFunction("SocialTagsFunctionLibrary_C", "InterpolateTagBorderColors");

	Params::USocialTagsFunctionLibrary_C_InterpolateTagBorderColors_Params Parms;

	Parms.TagBorderMaterial = TagBorderMaterial;
	Parms.NameInnerColor = NameInnerColor;
	Parms.CurrentInnerColor = CurrentInnerColor;
	Parms.TargetInnerColor = TargetInnerColor;
	Parms.NameOuterColor = NameOuterColor;
	Parms.CurrentOuterColor = CurrentOuterColor;
	Parms.TargetOuterColor = TargetOuterColor;
	Parms.HoveredBorderColorLerpAlpha = HoveredBorderColorLerpAlpha;
	Parms.ColorLerpTimeHandle = ColorLerpTimeHandle;
	Parms.WorldContext = WorldContext;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialTagsFunctionLibrary.SocialTagsFunctionLibrary_C.ClearLerpColorTimer
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             ColorLerpAlpha                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                ColorLerpTimeHandle                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USocialTagsFunctionLibrary_C::ClearLerpColorTimer(double ColorLerpAlpha, struct FTimerHandle& ColorLerpTimeHandle, class UObject* __WorldContext, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue)
{
	static auto Func = Class->GetFunction("SocialTagsFunctionLibrary_C", "ClearLerpColorTimer");

	Params::USocialTagsFunctionLibrary_C_ClearLerpColorTimer_Params Parms;

	Parms.ColorLerpAlpha = ColorLerpAlpha;
	Parms.ColorLerpTimeHandle = ColorLerpTimeHandle;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialTagsFunctionLibrary.SocialTagsFunctionLibrary_C.InterpolateMaterialColor
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    Material                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        ColorParameterName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CurrentColor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                TargetColor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ColorLerpAlpha                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LinearColorLerp_Alpha_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USocialTagsFunctionLibrary_C::InterpolateMaterialColor(class UMaterialInstanceDynamic* Material, class FName ColorParameterName, const struct FLinearColor& CurrentColor, const struct FLinearColor& TargetColor, double ColorLerpAlpha, class UObject* __WorldContext, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, float CallFunc_LinearColorLerp_Alpha_ImplicitCast)
{
	static auto Func = Class->GetFunction("SocialTagsFunctionLibrary_C", "InterpolateMaterialColor");

	Params::USocialTagsFunctionLibrary_C_InterpolateMaterialColor_Params Parms;

	Parms.Material = Material;
	Parms.ColorParameterName = ColorParameterName;
	Parms.CurrentColor = CurrentColor;
	Parms.TargetColor = TargetColor;
	Parms.ColorLerpAlpha = ColorLerpAlpha;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_LinearColorLerp_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;
	Parms.CallFunc_LinearColorLerp_Alpha_ImplicitCast = CallFunc_LinearColorLerp_Alpha_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialTagsFunctionLibrary.SocialTagsFunctionLibrary_C.InterpolateTagBorderOuterStrokeColor
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBorder*                     TagBorder                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        TagOuterStrokeColor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSidebarSocialTagCategoryStructureSidebarSocialTagCategoryStructure                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// double                             TagBorderInnerColorHoveredLerpValue                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                TagBorderInnerColorHoveredLerpTimeHandle                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     TagWidgetReference                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                TagOuterStrokeColorUnhovered                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LinearColorLerp_Alpha_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USocialTagsFunctionLibrary_C::InterpolateTagBorderOuterStrokeColor(class UBorder* TagBorder, class FName TagOuterStrokeColor, struct FSidebarSocialTagCategoryStructure& SidebarSocialTagCategoryStructure, double TagBorderInnerColorHoveredLerpValue, struct FTimerHandle& TagBorderInnerColorHoveredLerpTimeHandle, class UWidget* TagWidgetReference, const struct FLinearColor& TagOuterStrokeColorUnhovered, class UObject* __WorldContext, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_LinearColorLerp_Alpha_ImplicitCast)
{
	static auto Func = Class->GetFunction("SocialTagsFunctionLibrary_C", "InterpolateTagBorderOuterStrokeColor");

	Params::USocialTagsFunctionLibrary_C_InterpolateTagBorderOuterStrokeColor_Params Parms;

	Parms.TagBorder = TagBorder;
	Parms.TagOuterStrokeColor = TagOuterStrokeColor;
	Parms.SidebarSocialTagCategoryStructure = SidebarSocialTagCategoryStructure;
	Parms.TagBorderInnerColorHoveredLerpValue = TagBorderInnerColorHoveredLerpValue;
	Parms.TagBorderInnerColorHoveredLerpTimeHandle = TagBorderInnerColorHoveredLerpTimeHandle;
	Parms.TagWidgetReference = TagWidgetReference;
	Parms.TagOuterStrokeColorUnhovered = TagOuterStrokeColorUnhovered;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue_1 = CallFunc_EqualEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_LinearColorLerp_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_LinearColorLerp_Alpha_ImplicitCast = CallFunc_LinearColorLerp_Alpha_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialTagsFunctionLibrary.SocialTagsFunctionLibrary_C.InterpolateTagBorderGradientColor
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBorder*                     TagBorder                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        TagInnerColorGradient_1                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        TagInnerColorGradient_2                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSidebarSocialTagCategoryStructureSidebarSocialTagCategoryStructure                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// double                             TagBorderInnerColorHoveredLerpValue                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                TagBorderInnerColorHoveredLerpTimeHandle                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     TagWidgetReference                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LinearColorLerp_Alpha_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LinearColorLerp_Alpha_ImplicitCast_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USocialTagsFunctionLibrary_C::InterpolateTagBorderGradientColor(class UBorder* TagBorder, class FName TagInnerColorGradient_1, class FName TagInnerColorGradient_2, struct FSidebarSocialTagCategoryStructure& SidebarSocialTagCategoryStructure, double TagBorderInnerColorHoveredLerpValue, struct FTimerHandle& TagBorderInnerColorHoveredLerpTimeHandle, class UWidget* TagWidgetReference, class UObject* __WorldContext, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_LinearColorLerp_Alpha_ImplicitCast, float CallFunc_LinearColorLerp_Alpha_ImplicitCast_1)
{
	static auto Func = Class->GetFunction("SocialTagsFunctionLibrary_C", "InterpolateTagBorderGradientColor");

	Params::USocialTagsFunctionLibrary_C_InterpolateTagBorderGradientColor_Params Parms;

	Parms.TagBorder = TagBorder;
	Parms.TagInnerColorGradient_1 = TagInnerColorGradient_1;
	Parms.TagInnerColorGradient_2 = TagInnerColorGradient_2;
	Parms.SidebarSocialTagCategoryStructure = SidebarSocialTagCategoryStructure;
	Parms.TagBorderInnerColorHoveredLerpValue = TagBorderInnerColorHoveredLerpValue;
	Parms.TagBorderInnerColorHoveredLerpTimeHandle = TagBorderInnerColorHoveredLerpTimeHandle;
	Parms.TagWidgetReference = TagWidgetReference;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue_1 = CallFunc_EqualEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_LinearColorLerp_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;
	Parms.CallFunc_LinearColorLerp_ReturnValue_1 = CallFunc_LinearColorLerp_ReturnValue_1;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_LinearColorLerp_Alpha_ImplicitCast = CallFunc_LinearColorLerp_Alpha_ImplicitCast;
	Parms.CallFunc_LinearColorLerp_Alpha_ImplicitCast_1 = CallFunc_LinearColorLerp_Alpha_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialTagsFunctionLibrary.SocialTagsFunctionLibrary_C.Get Sidebar Social Tag Category Structure
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      TagCategory                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSidebarSocialTagCategoryStructureSidebarSocialTagCategoryStructure                                (Parm, OutParm, HasGetValueTypeHash)
// struct FSidebarSocialTagCategoryStructureLocalSidebarSocialTagCategoryStructure                           (Edit, BlueprintVisible, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSidebarSocialTagCategoryStructureCallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSidebarSocialTagCategoryStructureCallFunc_GetDataTableRowFromName_OutRow_1                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USocialTagsFunctionLibrary_C::Get_Sidebar_Social_Tag_Category_Structure(const class FString& TagCategory, class UObject* __WorldContext, struct FSidebarSocialTagCategoryStructure* SidebarSocialTagCategoryStructure, const struct FSidebarSocialTagCategoryStructure& LocalSidebarSocialTagCategoryStructure, const class FString& CallFunc_Replace_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FSidebarSocialTagCategoryStructure& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FSidebarSocialTagCategoryStructure& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1)
{
	static auto Func = Class->GetFunction("SocialTagsFunctionLibrary_C", "Get Sidebar Social Tag Category Structure");

	Params::USocialTagsFunctionLibrary_C_Get_Sidebar_Social_Tag_Category_Structure_Params Parms;

	Parms.TagCategory = TagCategory;
	Parms.__WorldContext = __WorldContext;
	Parms.LocalSidebarSocialTagCategoryStructure = LocalSidebarSocialTagCategoryStructure;
	Parms.CallFunc_Replace_ReturnValue = CallFunc_Replace_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (SidebarSocialTagCategoryStructure != nullptr)
		*SidebarSocialTagCategoryStructure = Parms.SidebarSocialTagCategoryStructure;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
