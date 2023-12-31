#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function FrontendItemViewSettingsManager.FrontendItemViewSettingsManager_C.Is Hero or Previews on Hero
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UFortItemDefinition*         Item_Definition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              SubslotIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EFortItemType>   K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// bool                               CallFunc_ShouldShowPreviewOnCurrentHero_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemType           CallFunc_GetItemType_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UFrontendItemViewSettingsManager_C::Is_Hero_or_Previews_on_Hero(class UFortItemDefinition* Item_Definition, int32 SubslotIndex, TArray<enum class EFortItemType>& K2Node_MakeArray_Array, bool CallFunc_ShouldShowPreviewOnCurrentHero_ReturnValue, enum class EFortItemType CallFunc_GetItemType_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontendItemViewSettingsManager_C", "Is Hero or Previews on Hero");

	Params::UFrontendItemViewSettingsManager_C_Is_Hero_or_Previews_on_Hero_Params Parms;

	Parms.Item_Definition = Item_Definition;
	Parms.SubslotIndex = SubslotIndex;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_ShouldShowPreviewOnCurrentHero_ReturnValue = CallFunc_ShouldShowPreviewOnCurrentHero_ReturnValue;
	Parms.CallFunc_GetItemType_ReturnValue = CallFunc_GetItemType_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FrontendItemViewSettingsManager.FrontendItemViewSettingsManager_C.GetItemViewSettings
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// enum class EFrontEndCamera         Camera                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                GameMode                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         ItemDefinition                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              SubslotIndex                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortItemViewSettings       ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor)
// struct FFortItemViewSettings       Return_Value                                                     (Edit, BlueprintVisible, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Hero_or_Previews_on_Hero_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Hero_or_Previews_on_Hero_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaToyItemDefinition*    K2Node_DynamicCast_AsAthena_Toy_Item_Definition                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemType           CallFunc_GetItemType_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemType           CallFunc_GetItemType_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemType           CallFunc_GetTemplateType_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemType           CallFunc_GetTemplateType_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemType           CallFunc_GetItemType_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemType           CallFunc_GetTemplateType_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaSprayItemDefinition*  K2Node_DynamicCast_AsAthena_Spray_Item_Definition                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaSkyDiveContrailItemDefinition*K2Node_DynamicCast_AsAthena_Sky_Dive_Contrail_Item_Definition    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaPetCarrierItemDefinition*K2Node_DynamicCast_AsAthena_Pet_Carrier_Item_Definition          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemType           CallFunc_GetItemType_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaGliderItemDefinition* K2Node_DynamicCast_AsAthena_Glider_Item_Definition               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemType           CallFunc_GetTemplateType_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaPickaxeItemDefinition*K2Node_DynamicCast_AsAthena_Pickaxe_Item_Definition              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Vector_IsZero_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Vector_IsZero_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsItemDefRandomCustomizationSelector_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EFrontEndCamera> K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EFrontEndCamera> K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EFrontEndCamera> K2Node_MakeArray_Array_2                                         (ConstParm, ReferenceParm)
// TArray<enum class EFortItemType>   K2Node_MakeArray_Array_3                                         (ConstParm, ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EFortItemType>   K2Node_MakeArray_Array_4                                         (ConstParm, ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EFortItemType>   K2Node_MakeArray_Array_5                                         (ConstParm, ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeLiteralDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFloatRangeBound            K2Node_MakeStruct_FloatRangeBound                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFloatRangeBound            K2Node_MakeStruct_FloatRangeBound_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFloatRange                 K2Node_MakeStruct_FloatRange                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFloatRangeBound            K2Node_MakeStruct_FloatRangeBound_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeLiteralDouble_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EFortItemType>   K2Node_MakeArray_Array_6                                         (ConstParm, ReferenceParm)
// struct FFloatRangeBound            K2Node_MakeStruct_FloatRangeBound_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFloatRange                 K2Node_MakeStruct_FloatRange_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFloatRangeBound            K2Node_MakeStruct_FloatRangeBound_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeLiteralDouble_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EFortItemType>   K2Node_MakeArray_Array_7                                         (ConstParm, ReferenceParm)
// struct FFloatRangeBound            K2Node_MakeStruct_FloatRangeBound_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_7                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFloatRange                 K2Node_MakeStruct_FloatRange_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EFortItemType>   K2Node_MakeArray_Array_8                                         (ConstParm, ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue_8                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EFortItemType>   K2Node_MakeArray_Array_9                                         (ConstParm, ReferenceParm)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_9                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EFortItemType>   K2Node_MakeArray_Array_10                                        (ConstParm, ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue_10                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EFortItemType>   K2Node_MakeArray_Array_11                                        (ConstParm, ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue_11                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_DefaultZoomLevel_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_Value_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_DefaultZoomLevel_ImplicitCast_1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_Value_ImplicitCast_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_DefaultZoomLevel_ImplicitCast_2         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_Value_ImplicitCast_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_DefaultZoomLevel_ImplicitCast_3         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FFortItemViewSettings UFrontendItemViewSettingsManager_C::GetItemViewSettings(enum class EFrontEndCamera Camera, enum class ESubGame GameMode, class UFortItemDefinition* ItemDefinition, int32 SubslotIndex, const struct FFortItemViewSettings& Return_Value, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Is_Hero_or_Previews_on_Hero_ReturnValue, bool CallFunc_Is_Hero_or_Previews_on_Hero_ReturnValue_1, class UAthenaToyItemDefinition* K2Node_DynamicCast_AsAthena_Toy_Item_Definition, bool K2Node_DynamicCast_bSuccess, enum class EFortItemType CallFunc_GetItemType_ReturnValue, enum class EFortItemType CallFunc_GetItemType_ReturnValue_1, enum class EFortItemType CallFunc_GetTemplateType_ReturnValue, enum class EFortItemType CallFunc_GetTemplateType_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EFortItemType CallFunc_GetItemType_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, enum class EFortItemType CallFunc_GetTemplateType_ReturnValue_2, class UAthenaSprayItemDefinition* K2Node_DynamicCast_AsAthena_Spray_Item_Definition, bool K2Node_DynamicCast_bSuccess_1, class UAthenaSkyDiveContrailItemDefinition* K2Node_DynamicCast_AsAthena_Sky_Dive_Contrail_Item_Definition, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Not_PreBool_ReturnValue, class UAthenaPetCarrierItemDefinition* K2Node_DynamicCast_AsAthena_Pet_Carrier_Item_Definition, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_BooleanAND_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue, enum class EFortItemType CallFunc_GetItemType_ReturnValue_3, class UAthenaGliderItemDefinition* K2Node_DynamicCast_AsAthena_Glider_Item_Definition, bool K2Node_DynamicCast_bSuccess_4, enum class EFortItemType CallFunc_GetTemplateType_ReturnValue_3, class UAthenaPickaxeItemDefinition* K2Node_DynamicCast_AsAthena_Pickaxe_Item_Definition, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_Vector_IsZero_ReturnValue, bool CallFunc_Vector_IsZero_ReturnValue_1, bool CallFunc_IsItemDefRandomCustomizationSelector_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, TArray<enum class EFrontEndCamera>& K2Node_MakeArray_Array, bool CallFunc_Array_Contains_ReturnValue, TArray<enum class EFrontEndCamera>& K2Node_MakeArray_Array_1, bool CallFunc_Array_Contains_ReturnValue_1, TArray<enum class EFrontEndCamera>& K2Node_MakeArray_Array_2, TArray<enum class EFortItemType>& K2Node_MakeArray_Array_3, bool CallFunc_Array_Contains_ReturnValue_2, bool CallFunc_Array_Contains_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_2, TArray<enum class EFortItemType>& K2Node_MakeArray_Array_4, bool CallFunc_Array_Contains_ReturnValue_4, TArray<enum class EFortItemType>& K2Node_MakeArray_Array_5, bool CallFunc_Array_Contains_ReturnValue_5, double CallFunc_MakeLiteralDouble_ReturnValue, const struct FFloatRangeBound& K2Node_MakeStruct_FloatRangeBound, const struct FFloatRangeBound& K2Node_MakeStruct_FloatRangeBound_1, const struct FFloatRange& K2Node_MakeStruct_FloatRange, const struct FFloatRangeBound& K2Node_MakeStruct_FloatRangeBound_2, double CallFunc_MakeLiteralDouble_ReturnValue_1, TArray<enum class EFortItemType>& K2Node_MakeArray_Array_6, const struct FFloatRangeBound& K2Node_MakeStruct_FloatRangeBound_3, bool CallFunc_Array_Contains_ReturnValue_6, const struct FFloatRange& K2Node_MakeStruct_FloatRange_1, const struct FFloatRangeBound& K2Node_MakeStruct_FloatRangeBound_4, double CallFunc_MakeLiteralDouble_ReturnValue_2, TArray<enum class EFortItemType>& K2Node_MakeArray_Array_7, const struct FFloatRangeBound& K2Node_MakeStruct_FloatRangeBound_5, bool CallFunc_Array_Contains_ReturnValue_7, const struct FFloatRange& K2Node_MakeStruct_FloatRange_2, TArray<enum class EFortItemType>& K2Node_MakeArray_Array_8, bool CallFunc_Array_Contains_ReturnValue_8, TArray<enum class EFortItemType>& K2Node_MakeArray_Array_9, double Temp_real_Variable, bool CallFunc_Array_Contains_ReturnValue_9, TArray<enum class EFortItemType>& K2Node_MakeArray_Array_10, bool CallFunc_Array_Contains_ReturnValue_10, bool Temp_bool_Variable, bool CallFunc_BooleanOR_ReturnValue, double K2Node_Select_Default, TArray<enum class EFortItemType>& K2Node_MakeArray_Array_11, bool CallFunc_Array_Contains_ReturnValue_11, bool CallFunc_BooleanOR_ReturnValue_1, float K2Node_SetFieldsInStruct_DefaultZoomLevel_ImplicitCast, float K2Node_MakeStruct_Value_ImplicitCast, float K2Node_SetFieldsInStruct_DefaultZoomLevel_ImplicitCast_1, float K2Node_MakeStruct_Value_ImplicitCast_1, float K2Node_SetFieldsInStruct_DefaultZoomLevel_ImplicitCast_2, float K2Node_MakeStruct_Value_ImplicitCast_2, float K2Node_SetFieldsInStruct_DefaultZoomLevel_ImplicitCast_3)
{
	static auto Func = Class->GetFunction("FrontendItemViewSettingsManager_C", "GetItemViewSettings");

	Params::UFrontendItemViewSettingsManager_C_GetItemViewSettings_Params Parms;

	Parms.Camera = Camera;
	Parms.GameMode = GameMode;
	Parms.ItemDefinition = ItemDefinition;
	Parms.SubslotIndex = SubslotIndex;
	Parms.Return_Value = Return_Value;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Is_Hero_or_Previews_on_Hero_ReturnValue = CallFunc_Is_Hero_or_Previews_on_Hero_ReturnValue;
	Parms.CallFunc_Is_Hero_or_Previews_on_Hero_ReturnValue_1 = CallFunc_Is_Hero_or_Previews_on_Hero_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsAthena_Toy_Item_Definition = K2Node_DynamicCast_AsAthena_Toy_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetItemType_ReturnValue = CallFunc_GetItemType_ReturnValue;
	Parms.CallFunc_GetItemType_ReturnValue_1 = CallFunc_GetItemType_ReturnValue_1;
	Parms.CallFunc_GetTemplateType_ReturnValue = CallFunc_GetTemplateType_ReturnValue;
	Parms.CallFunc_GetTemplateType_ReturnValue_1 = CallFunc_GetTemplateType_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetItemType_ReturnValue_2 = CallFunc_GetItemType_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetTemplateType_ReturnValue_2 = CallFunc_GetTemplateType_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsAthena_Spray_Item_Definition = K2Node_DynamicCast_AsAthena_Spray_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsAthena_Sky_Dive_Contrail_Item_Definition = K2Node_DynamicCast_AsAthena_Sky_Dive_Contrail_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_DynamicCast_AsAthena_Pet_Carrier_Item_Definition = K2Node_DynamicCast_AsAthena_Pet_Carrier_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_GetItemType_ReturnValue_3 = CallFunc_GetItemType_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsAthena_Glider_Item_Definition = K2Node_DynamicCast_AsAthena_Glider_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetTemplateType_ReturnValue_3 = CallFunc_GetTemplateType_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsAthena_Pickaxe_Item_Definition = K2Node_DynamicCast_AsAthena_Pickaxe_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_Vector_IsZero_ReturnValue = CallFunc_Vector_IsZero_ReturnValue;
	Parms.CallFunc_Vector_IsZero_ReturnValue_1 = CallFunc_Vector_IsZero_ReturnValue_1;
	Parms.CallFunc_IsItemDefRandomCustomizationSelector_ReturnValue = CallFunc_IsItemDefRandomCustomizationSelector_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_Array_Contains_ReturnValue_2 = CallFunc_Array_Contains_ReturnValue_2;
	Parms.CallFunc_Array_Contains_ReturnValue_3 = CallFunc_Array_Contains_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.CallFunc_Array_Contains_ReturnValue_4 = CallFunc_Array_Contains_ReturnValue_4;
	Parms.K2Node_MakeArray_Array_5 = K2Node_MakeArray_Array_5;
	Parms.CallFunc_Array_Contains_ReturnValue_5 = CallFunc_Array_Contains_ReturnValue_5;
	Parms.CallFunc_MakeLiteralDouble_ReturnValue = CallFunc_MakeLiteralDouble_ReturnValue;
	Parms.K2Node_MakeStruct_FloatRangeBound = K2Node_MakeStruct_FloatRangeBound;
	Parms.K2Node_MakeStruct_FloatRangeBound_1 = K2Node_MakeStruct_FloatRangeBound_1;
	Parms.K2Node_MakeStruct_FloatRange = K2Node_MakeStruct_FloatRange;
	Parms.K2Node_MakeStruct_FloatRangeBound_2 = K2Node_MakeStruct_FloatRangeBound_2;
	Parms.CallFunc_MakeLiteralDouble_ReturnValue_1 = CallFunc_MakeLiteralDouble_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_6 = K2Node_MakeArray_Array_6;
	Parms.K2Node_MakeStruct_FloatRangeBound_3 = K2Node_MakeStruct_FloatRangeBound_3;
	Parms.CallFunc_Array_Contains_ReturnValue_6 = CallFunc_Array_Contains_ReturnValue_6;
	Parms.K2Node_MakeStruct_FloatRange_1 = K2Node_MakeStruct_FloatRange_1;
	Parms.K2Node_MakeStruct_FloatRangeBound_4 = K2Node_MakeStruct_FloatRangeBound_4;
	Parms.CallFunc_MakeLiteralDouble_ReturnValue_2 = CallFunc_MakeLiteralDouble_ReturnValue_2;
	Parms.K2Node_MakeArray_Array_7 = K2Node_MakeArray_Array_7;
	Parms.K2Node_MakeStruct_FloatRangeBound_5 = K2Node_MakeStruct_FloatRangeBound_5;
	Parms.CallFunc_Array_Contains_ReturnValue_7 = CallFunc_Array_Contains_ReturnValue_7;
	Parms.K2Node_MakeStruct_FloatRange_2 = K2Node_MakeStruct_FloatRange_2;
	Parms.K2Node_MakeArray_Array_8 = K2Node_MakeArray_Array_8;
	Parms.CallFunc_Array_Contains_ReturnValue_8 = CallFunc_Array_Contains_ReturnValue_8;
	Parms.K2Node_MakeArray_Array_9 = K2Node_MakeArray_Array_9;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.CallFunc_Array_Contains_ReturnValue_9 = CallFunc_Array_Contains_ReturnValue_9;
	Parms.K2Node_MakeArray_Array_10 = K2Node_MakeArray_Array_10;
	Parms.CallFunc_Array_Contains_ReturnValue_10 = CallFunc_Array_Contains_ReturnValue_10;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeArray_Array_11 = K2Node_MakeArray_Array_11;
	Parms.CallFunc_Array_Contains_ReturnValue_11 = CallFunc_Array_Contains_ReturnValue_11;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.K2Node_SetFieldsInStruct_DefaultZoomLevel_ImplicitCast = K2Node_SetFieldsInStruct_DefaultZoomLevel_ImplicitCast;
	Parms.K2Node_MakeStruct_Value_ImplicitCast = K2Node_MakeStruct_Value_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_DefaultZoomLevel_ImplicitCast_1 = K2Node_SetFieldsInStruct_DefaultZoomLevel_ImplicitCast_1;
	Parms.K2Node_MakeStruct_Value_ImplicitCast_1 = K2Node_MakeStruct_Value_ImplicitCast_1;
	Parms.K2Node_SetFieldsInStruct_DefaultZoomLevel_ImplicitCast_2 = K2Node_SetFieldsInStruct_DefaultZoomLevel_ImplicitCast_2;
	Parms.K2Node_MakeStruct_Value_ImplicitCast_2 = K2Node_MakeStruct_Value_ImplicitCast_2;
	Parms.K2Node_SetFieldsInStruct_DefaultZoomLevel_ImplicitCast_3 = K2Node_SetFieldsInStruct_DefaultZoomLevel_ImplicitCast_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
