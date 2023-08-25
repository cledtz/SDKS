#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SidebarSocialTagWidget.SidebarSocialTagWidget_C
// (None)

class UClass* USidebarSocialTagWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SidebarSocialTagWidget_C");

	return Clss;
}


// SidebarSocialTagWidget_C SidebarSocialTagWidget.Default__SidebarSocialTagWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USidebarSocialTagWidget_C* USidebarSocialTagWidget_C::GetDefaultObj()
{
	static class USidebarSocialTagWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USidebarSocialTagWidget_C*>(USidebarSocialTagWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.SetTagHoverState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUserSocialTag                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsHovering                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void USidebarSocialTagWidget_C::SetTagHoverState(bool IsUserSocialTag, bool IsHovering, float Temp_real_Variable, float Temp_real_Variable_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool Temp_bool_Variable, float K2Node_Select_Default, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidebarSocialTagWidget_C", "SetTagHoverState");

	Params::USidebarSocialTagWidget_C_SetTagHoverState_Params Parms{};

	Parms.IsUserSocialTag = IsUserSocialTag;
	Parms.IsHovering = IsHovering;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.SetUnhoverState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bPlayAnimation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetStartTime_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetStartTime_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_B_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_A_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayAnimation_StartAtTime_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_B_ImplicitCast_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_A_ImplicitCast_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayAnimation_StartAtTime_ImplicitCast_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USidebarSocialTagWidget_C::SetUnhoverState(bool bPlayAnimation, float CallFunc_GetEndTime_ReturnValue, float CallFunc_GetStartTime_ReturnValue, double CallFunc_SelectFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetEndTime_ReturnValue_1, float CallFunc_GetStartTime_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue_1, bool CallFunc_IsAnimationPlaying_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, double CallFunc_SelectFloat_B_ImplicitCast, double CallFunc_SelectFloat_A_ImplicitCast, float CallFunc_PlayAnimation_StartAtTime_ImplicitCast, double CallFunc_SelectFloat_B_ImplicitCast_1, double CallFunc_SelectFloat_A_ImplicitCast_1, float CallFunc_PlayAnimation_StartAtTime_ImplicitCast_1, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidebarSocialTagWidget_C", "SetUnhoverState");

	Params::USidebarSocialTagWidget_C_SetUnhoverState_Params Parms{};

	Parms.bPlayAnimation = bPlayAnimation;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_GetStartTime_ReturnValue = CallFunc_GetStartTime_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetEndTime_ReturnValue_1 = CallFunc_GetEndTime_ReturnValue_1;
	Parms.CallFunc_GetStartTime_ReturnValue_1 = CallFunc_GetStartTime_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.CallFunc_SelectFloat_B_ImplicitCast = CallFunc_SelectFloat_B_ImplicitCast;
	Parms.CallFunc_SelectFloat_A_ImplicitCast = CallFunc_SelectFloat_A_ImplicitCast;
	Parms.CallFunc_PlayAnimation_StartAtTime_ImplicitCast = CallFunc_PlayAnimation_StartAtTime_ImplicitCast;
	Parms.CallFunc_SelectFloat_B_ImplicitCast_1 = CallFunc_SelectFloat_B_ImplicitCast_1;
	Parms.CallFunc_SelectFloat_A_ImplicitCast_1 = CallFunc_SelectFloat_A_ImplicitCast_1;
	Parms.CallFunc_PlayAnimation_StartAtTime_ImplicitCast_1 = CallFunc_PlayAnimation_StartAtTime_ImplicitCast_1;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.FunctionSetTagBorderColors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                InnerColor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                OuterColor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USidebarSocialTagWidget_C::FunctionSetTagBorderColors(const struct FLinearColor& InnerColor, const struct FLinearColor& OuterColor, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_1, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidebarSocialTagWidget_C", "FunctionSetTagBorderColors");

	Params::USidebarSocialTagWidget_C_FunctionSetTagBorderColors_Params Parms{};

	Parms.InnerColor = InnerColor;
	Parms.OuterColor = OuterColor;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.CallFunc_SelectColor_ReturnValue_1 = CallFunc_SelectColor_ReturnValue_1;
	Parms.CallFunc_SelectColor_ReturnValue_2 = CallFunc_SelectColor_ReturnValue_2;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.OnTagListEntryUnhovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USidebarSocialTagWidget_C::OnTagListEntryUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidebarSocialTagWidget_C", "OnTagListEntryUnhovered");

	Params::USidebarSocialTagWidget_C_OnTagListEntryUnhovered_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.OnTagListEntryHovered
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USidebarSocialTagWidget_C::OnTagListEntryHovered(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidebarSocialTagWidget_C", "OnTagListEntryHovered");

	Params::USidebarSocialTagWidget_C_OnTagListEntryHovered_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.GetCurrentTagBorderColors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_K2_GetVectorParameterValue_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_K2_GetVectorParameterValue_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USidebarSocialTagWidget_C::GetCurrentTagBorderColors(bool CallFunc_IsValid_ReturnValue, const struct FLinearColor& CallFunc_K2_GetVectorParameterValue_ReturnValue, const struct FLinearColor& CallFunc_K2_GetVectorParameterValue_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidebarSocialTagWidget_C", "GetCurrentTagBorderColors");

	Params::USidebarSocialTagWidget_C_GetCurrentTagBorderColors_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetVectorParameterValue_ReturnValue = CallFunc_K2_GetVectorParameterValue_ReturnValue;
	Parms.CallFunc_K2_GetVectorParameterValue_ReturnValue_1 = CallFunc_K2_GetVectorParameterValue_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.FunctionOnUnhovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void USidebarSocialTagWidget_C::FunctionOnUnhovered(bool CallFunc_IsAnimationPlaying_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidebarSocialTagWidget_C", "FunctionOnUnhovered");

	Params::USidebarSocialTagWidget_C_FunctionOnUnhovered_Params Parms{};

	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.FunctionOnHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void USidebarSocialTagWidget_C::FunctionOnHovered(bool CallFunc_IsAnimationPlaying_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidebarSocialTagWidget_C", "FunctionOnHovered");

	Params::USidebarSocialTagWidget_C_FunctionOnHovered_Params Parms{};

	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.FunctionSetCategoryCustomizationVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        CategoryCustomizationVisibility                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void USidebarSocialTagWidget_C::FunctionSetCategoryCustomizationVisibility(enum class ESlateVisibility CategoryCustomizationVisibility, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidebarSocialTagWidget_C", "FunctionSetCategoryCustomizationVisibility");

	Params::USidebarSocialTagWidget_C_FunctionSetCategoryCustomizationVisibility_Params Parms{};

	Parms.CategoryCustomizationVisibility = CategoryCustomizationVisibility;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.FunctionSetTag
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InTagName                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class ESocialTagCategory      InTagCategory                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               InIsSystemTag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSidebarSocialTagCategoryStructureCallFunc_Get_Sidebar_Social_Tag_Category_Structure_SidebarSocialTagCategoryStructure(HasGetValueTypeHash)
// struct FSidebarSocialTagCategoryStructureCallFunc_Get_Sidebar_Social_Tag_Category_Structure_SidebarSocialTagCategoryStructure_1(HasGetValueTypeHash)
// TSoftObjectPtr<class UMaterialInstance>CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (UObjectWrapper, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USidebarSocialTagWidget_C::FunctionSetTag(class FText InTagName, enum class ESocialTagCategory InTagCategory, bool InIsSystemTag, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSidebarSocialTagCategoryStructure& CallFunc_Get_Sidebar_Social_Tag_Category_Structure_SidebarSocialTagCategoryStructure, const struct FSidebarSocialTagCategoryStructure& CallFunc_Get_Sidebar_Social_Tag_Category_Structure_SidebarSocialTagCategoryStructure_1, TSoftObjectPtr<class UMaterialInstance> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidebarSocialTagWidget_C", "FunctionSetTag");

	Params::USidebarSocialTagWidget_C_FunctionSetTag_Params Parms{};

	Parms.InTagName = InTagName;
	Parms.InTagCategory = InTagCategory;
	Parms.InIsSystemTag = InIsSystemTag;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_Get_Sidebar_Social_Tag_Category_Structure_SidebarSocialTagCategoryStructure = CallFunc_Get_Sidebar_Social_Tag_Category_Structure_SidebarSocialTagCategoryStructure;
	Parms.CallFunc_Get_Sidebar_Social_Tag_Category_Structure_SidebarSocialTagCategoryStructure_1 = CallFunc_Get_Sidebar_Social_Tag_Category_Structure_SidebarSocialTagCategoryStructure_1;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.SetCategoryCustomizationVisibility
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        CategoryCustomizationVisibility                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USidebarSocialTagWidget_C::SetCategoryCustomizationVisibility(enum class ESlateVisibility CategoryCustomizationVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidebarSocialTagWidget_C", "SetCategoryCustomizationVisibility");

	Params::USidebarSocialTagWidget_C_SetCategoryCustomizationVisibility_Params Parms{};

	Parms.CategoryCustomizationVisibility = CategoryCustomizationVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void USidebarSocialTagWidget_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidebarSocialTagWidget_C", "BP_OnHovered");

	Params::USidebarSocialTagWidget_C_BP_OnHovered_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void USidebarSocialTagWidget_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidebarSocialTagWidget_C", "BP_OnUnhovered");

	Params::USidebarSocialTagWidget_C_BP_OnUnhovered_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.BP_OnDeselected
// (Event, Protected, BlueprintEvent)
// Parameters:

void USidebarSocialTagWidget_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidebarSocialTagWidget_C", "BP_OnDeselected");

	Params::USidebarSocialTagWidget_C_BP_OnDeselected_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void USidebarSocialTagWidget_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidebarSocialTagWidget_C", "BP_OnSelected");

	Params::USidebarSocialTagWidget_C_BP_OnSelected_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.SetTag
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        InTagName                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ESocialTagCategory      InTagCategory                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bInIsSystemTag                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USidebarSocialTagWidget_C::SetTag(class FText& InTagName, enum class ESocialTagCategory InTagCategory, bool bInIsSystemTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidebarSocialTagWidget_C", "SetTag");

	Params::USidebarSocialTagWidget_C_SetTag_Params Parms{};

	Parms.InTagName = InTagName;
	Parms.InTagCategory = InTagCategory;
	Parms.bInIsSystemTag = bInIsSystemTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.InterpolateTagColors
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USidebarSocialTagWidget_C::InterpolateTagColors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidebarSocialTagWidget_C", "InterpolateTagColors");

	Params::USidebarSocialTagWidget_C_InterpolateTagColors_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USidebarSocialTagWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidebarSocialTagWidget_C", "Construct");

	Params::USidebarSocialTagWidget_C_Construct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.SetHighlightState
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bHighlighted                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USidebarSocialTagWidget_C::SetHighlightState(bool bHighlighted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidebarSocialTagWidget_C", "SetHighlightState");

	Params::USidebarSocialTagWidget_C_SetHighlightState_Params Parms{};

	Parms.bHighlighted = bHighlighted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.SetFullColor
// (Event, Public, BlueprintEvent)
// Parameters:

void USidebarSocialTagWidget_C::SetFullColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidebarSocialTagWidget_C", "SetFullColor");

	Params::USidebarSocialTagWidget_C_SetFullColor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.Event SetFriendsCellColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USidebarSocialTagWidget_C::Event_SetFriendsCellColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidebarSocialTagWidget_C", "Event SetFriendsCellColor");

	Params::USidebarSocialTagWidget_C_Event_SetFriendsCellColor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.ExecuteUbergraph_SidebarSocialTagWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Event_CategoryCustomizationVisibility                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_InTagName                                           (ConstParm)
// enum class ESocialTagCategory      K2Node_Event_InTagCategory                                       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bInIsSystemTag                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bHighlighted                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonLegacy*         CallFunc_FindParentWidgetOfType_ReturnValue                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            K2Node_Select_Default_2                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

void USidebarSocialTagWidget_C::ExecuteUbergraph_SidebarSocialTagWidget(int32 EntryPoint, bool CallFunc_IsMobileGame_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Event_CategoryCustomizationVisibility, class FText K2Node_Event_InTagName, enum class ESocialTagCategory K2Node_Event_InTagCategory, bool K2Node_Event_bInIsSystemTag, bool Temp_bool_Variable_1, bool K2Node_Event_bHighlighted, class UCommonButtonLegacy* CallFunc_FindParentWidgetOfType_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsHovered_ReturnValue, class UWidgetAnimation* K2Node_Select_Default, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, const struct FLinearColor& K2Node_Select_Default_1, class UWidgetAnimation* K2Node_Select_Default_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FLinearColor& K2Node_Select_Default_3, bool CallFunc_IsValid_ReturnValue_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidebarSocialTagWidget_C", "ExecuteUbergraph_SidebarSocialTagWidget");

	Params::USidebarSocialTagWidget_C_ExecuteUbergraph_SidebarSocialTagWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_CategoryCustomizationVisibility = K2Node_Event_CategoryCustomizationVisibility;
	Parms.K2Node_Event_InTagName = K2Node_Event_InTagName;
	Parms.K2Node_Event_InTagCategory = K2Node_Event_InTagCategory;
	Parms.K2Node_Event_bInIsSystemTag = K2Node_Event_bInIsSystemTag;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Event_bHighlighted = K2Node_Event_bHighlighted;
	Parms.CallFunc_FindParentWidgetOfType_ReturnValue = CallFunc_FindParentWidgetOfType_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}

}


