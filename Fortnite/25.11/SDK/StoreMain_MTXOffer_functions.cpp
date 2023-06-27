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


// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.GetBonusText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortStoreFrontOfferInfo*    OfferInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        BonusText                                                        (Parm, OutParm)
// int32                              CallFunc_GetBonusQuantity_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetBaseQuantity_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void UStoreMain_MTXOffer_C::GetBonusText(class UFortStoreFrontOfferInfo* OfferInfo, class FText* BonusText, int32 CallFunc_GetBonusQuantity_ReturnValue, int32 CallFunc_GetBaseQuantity_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("StoreMain_MTXOffer_C", "GetBonusText");

	Params::UStoreMain_MTXOffer_C_GetBonusText_Params Parms;

	Parms.OfferInfo = OfferInfo;
	Parms.CallFunc_GetBonusQuantity_ReturnValue = CallFunc_GetBonusQuantity_ReturnValue;
	Parms.CallFunc_GetBaseQuantity_ReturnValue = CallFunc_GetBaseQuantity_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_1 = CallFunc_Conv_IntToDouble_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (BonusText != nullptr)
		*BonusText = Parms.BonusText;

}


// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.SetTextOutlineColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*                  Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FFortMtxGradient            Gradient                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicOutlineMaterial_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UStoreMain_MTXOffer_C::SetTextOutlineColor(class UTextBlock* Text, const struct FFortMtxGradient& Gradient, class UMaterialInstanceDynamic* CallFunc_GetDynamicOutlineMaterial_ReturnValue)
{
	static auto Func = Class->GetFunction("StoreMain_MTXOffer_C", "SetTextOutlineColor");

	Params::UStoreMain_MTXOffer_C_SetTextOutlineColor_Params Parms;

	Parms.Text = Text;
	Parms.Gradient = Gradient;
	Parms.CallFunc_GetDynamicOutlineMaterial_ReturnValue = CallFunc_GetDynamicOutlineMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.SetTileSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortMtxOfferDisplaySizeDisplaySize                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UStoreMain_MTXOffer_C::SetTileSize(enum class EFortMtxOfferDisplaySize DisplaySize, bool K2Node_SwitchEnum_CmpSuccess, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static auto Func = Class->GetFunction("StoreMain_MTXOffer_C", "SetTileSize");

	Params::UStoreMain_MTXOffer_C_SetTileSize_Params Parms;

	Parms.DisplaySize = DisplaySize;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.TriggerReset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStoreMain_MTXOffer_C::TriggerReset()
{
	static auto Func = Class->GetFunction("StoreMain_MTXOffer_C", "TriggerReset");

	Params::UStoreMain_MTXOffer_C_TriggerReset_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.InitialReset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UStoreMain_MTXOffer_C::InitialReset(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("StoreMain_MTXOffer_C", "InitialReset");

	Params::UStoreMain_MTXOffer_C_InitialReset_Params Parms;

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.TriggerIntro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UStoreMain_MTXOffer_C::TriggerIntro(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("StoreMain_MTXOffer_C", "TriggerIntro");

	Params::UStoreMain_MTXOffer_C_TriggerIntro_Params Parms;

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.InitOffer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortMtxOfferData*           DisplayAsset                                                     (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FFortMtxGradient            Gradient                                                         (Edit, BlueprintVisible, NoDestructor)
// int32                              TotalQuantity                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              BonusQuantity                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreFrontOfferInfo*    OfferInfo                                                        (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        BonusMTX                                                         (Edit, BlueprintVisible)
// class FText                        BaseMtx                                                          (Edit, BlueprintVisible)
// class UMaterial*                   OfferMaterial                                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetBannerOverrideTag_ReturnValue                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetSalePriceFromLastAppStore_SalePrice                  ()
// bool                               CallFunc_GetSalePriceFromLastAppStore_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Map_Find_Value                                          ()
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetStorefrontName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPurchasingAvailable_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetNormalPrice_ReturnValue                              ()
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            ()
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetName_ReturnValue                                     ()
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetBonusQuantity_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetBonusText_BonusText                                  ()
// enum class EFortMtxStoreOfferType  CallFunc_GetFortStoreOfferType_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreFrontOfferInfo*    CallFunc_GetOfferInfo_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMtxOfferData*           CallFunc_GetOfferDisplayAsset_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreFrontOfferInfo*    CallFunc_GetOfferInfo_ReturnValue_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EFortMtxOfferDisplaySizeCallFunc_GetOfferDisplaySize_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTotalQuantity_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreFrontOfferInfo*    CallFunc_GetOfferInfo_ReturnValue_2                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetMetaValue_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Map_Find_Value_1                                        ()
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default_3                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetBannerOverrideTag_ReturnValue_1                      (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_4                                          ()

void UStoreMain_MTXOffer_C::InitOffer(class UFortMtxOfferData* DisplayAsset, const struct FFortMtxGradient& Gradient, int32 TotalQuantity, int32 BonusQuantity, class UFortStoreFrontOfferInfo* OfferInfo, class FText BonusMTX, class FText BaseMtx, class UMaterial* OfferMaterial, enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, const class FString& CallFunc_GetBannerOverrideTag_ReturnValue, class FText CallFunc_GetSalePriceFromLastAppStore_SalePrice, bool CallFunc_GetSalePriceFromLastAppStore_ReturnValue, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_5, class FName CallFunc_GetStorefrontName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_IsPurchasingAvailable_ReturnValue, class FText CallFunc_GetNormalPrice_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default_1, class FText CallFunc_GetName_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_GetBonusQuantity_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class FText CallFunc_GetBonusText_BonusText, enum class EFortMtxStoreOfferType CallFunc_GetFortStoreOfferType_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortMtxOfferData* CallFunc_GetOfferDisplayAsset_ReturnValue, bool Temp_bool_Variable_2, enum class ESlateVisibility K2Node_Select_Default_2, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_1, enum class EFortMtxOfferDisplaySize CallFunc_GetOfferDisplaySize_ReturnValue, int32 CallFunc_GetTotalQuantity_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_2, bool Temp_bool_Variable_3, const class FString& CallFunc_GetMetaValue_ReturnValue, class FText CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class UWidget* K2Node_Select_Default_3, const class FString& CallFunc_GetBannerOverrideTag_ReturnValue_1, bool Temp_bool_Variable_4, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class FText K2Node_Select_Default_4)
{
	static auto Func = Class->GetFunction("StoreMain_MTXOffer_C", "InitOffer");

	Params::UStoreMain_MTXOffer_C_InitOffer_Params Parms;

	Parms.DisplayAsset = DisplayAsset;
	Parms.Gradient = Gradient;
	Parms.TotalQuantity = TotalQuantity;
	Parms.BonusQuantity = BonusQuantity;
	Parms.OfferInfo = OfferInfo;
	Parms.BonusMTX = BonusMTX;
	Parms.BaseMtx = BaseMtx;
	Parms.OfferMaterial = OfferMaterial;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.CallFunc_GetBannerOverrideTag_ReturnValue = CallFunc_GetBannerOverrideTag_ReturnValue;
	Parms.CallFunc_GetSalePriceFromLastAppStore_SalePrice = CallFunc_GetSalePriceFromLastAppStore_SalePrice;
	Parms.CallFunc_GetSalePriceFromLastAppStore_ReturnValue = CallFunc_GetSalePriceFromLastAppStore_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.CallFunc_GetStorefrontName_ReturnValue = CallFunc_GetStorefrontName_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_IsPurchasingAvailable_ReturnValue = CallFunc_IsPurchasingAvailable_ReturnValue;
	Parms.CallFunc_GetNormalPrice_ReturnValue = CallFunc_GetNormalPrice_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetName_ReturnValue = CallFunc_GetName_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_GetBonusQuantity_ReturnValue = CallFunc_GetBonusQuantity_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetBonusText_BonusText = CallFunc_GetBonusText_BonusText;
	Parms.CallFunc_GetFortStoreOfferType_ReturnValue = CallFunc_GetFortStoreOfferType_ReturnValue;
	Parms.CallFunc_GetOfferInfo_ReturnValue = CallFunc_GetOfferInfo_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetOfferDisplayAsset_ReturnValue = CallFunc_GetOfferDisplayAsset_ReturnValue;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_GetOfferInfo_ReturnValue_1 = CallFunc_GetOfferInfo_ReturnValue_1;
	Parms.CallFunc_GetOfferDisplaySize_ReturnValue = CallFunc_GetOfferDisplaySize_ReturnValue;
	Parms.CallFunc_GetTotalQuantity_ReturnValue = CallFunc_GetTotalQuantity_ReturnValue;
	Parms.CallFunc_GetOfferInfo_ReturnValue_2 = CallFunc_GetOfferInfo_ReturnValue_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_GetMetaValue_ReturnValue = CallFunc_GetMetaValue_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_GetBannerOverrideTag_ReturnValue_1 = CallFunc_GetBannerOverrideTag_ReturnValue_1;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UStoreMain_MTXOffer_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("StoreMain_MTXOffer_C", "BP_OnHovered");

	Params::UStoreMain_MTXOffer_C_BP_OnHovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UStoreMain_MTXOffer_C::BP_OnUnhovered()
{
	static auto Func = Class->GetFunction("StoreMain_MTXOffer_C", "BP_OnUnhovered");

	Params::UStoreMain_MTXOffer_C_BP_OnUnhovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStoreMain_MTXOffer_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("StoreMain_MTXOffer_C", "PreConstruct");

	Params::UStoreMain_MTXOffer_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.OnOfferSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UStoreMain_MTXOffer_C::OnOfferSet()
{
	static auto Func = Class->GetFunction("StoreMain_MTXOffer_C", "OnOfferSet");

	Params::UStoreMain_MTXOffer_C_OnOfferSet_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.OnUpdateStorePrice
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        InStorePrice                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UStoreMain_MTXOffer_C::OnUpdateStorePrice(class FText& InStorePrice)
{
	static auto Func = Class->GetFunction("StoreMain_MTXOffer_C", "OnUpdateStorePrice");

	Params::UStoreMain_MTXOffer_C_OnUpdateStorePrice_Params Parms;

	Parms.InStorePrice = InStorePrice;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.OnStoreSelectionOfferSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UStoreMain_MTXOffer_C::OnStoreSelectionOfferSet()
{
	static auto Func = Class->GetFunction("StoreMain_MTXOffer_C", "OnStoreSelectionOfferSet");

	Params::UStoreMain_MTXOffer_C_OnStoreSelectionOfferSet_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.OnOfferTileBrushLoaded
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FSlateBrush                 OfferBrush                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UStoreMain_MTXOffer_C::OnOfferTileBrushLoaded(struct FSlateBrush& OfferBrush)
{
	static auto Func = Class->GetFunction("StoreMain_MTXOffer_C", "OnOfferTileBrushLoaded");

	Params::UStoreMain_MTXOffer_C_OnOfferTileBrushLoaded_Params Parms;

	Parms.OfferBrush = OfferBrush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.ExecuteUbergraph_StoreMain_MTXOffer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortStoreFrontOfferInfo*    CallFunc_GetOfferInfo_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EFortMtxOfferDisplaySizeCallFunc_GetOfferDisplaySize_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_InStorePrice                                        (ConstParm)
// struct FSlateBrush                 K2Node_Event_OfferBrush                                          (ConstParm)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UStoreMain_MTXOffer_C::ExecuteUbergraph_StoreMain_MTXOffer(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, enum class EFortMtxOfferDisplaySize CallFunc_GetOfferDisplaySize_ReturnValue, class FText K2Node_Event_InStorePrice, const struct FSlateBrush& K2Node_Event_OfferBrush, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue)
{
	static auto Func = Class->GetFunction("StoreMain_MTXOffer_C", "ExecuteUbergraph_StoreMain_MTXOffer");

	Params::UStoreMain_MTXOffer_C_ExecuteUbergraph_StoreMain_MTXOffer_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_GetOfferInfo_ReturnValue = CallFunc_GetOfferInfo_ReturnValue;
	Parms.CallFunc_GetOfferDisplaySize_ReturnValue = CallFunc_GetOfferDisplaySize_ReturnValue;
	Parms.K2Node_Event_InStorePrice = K2Node_Event_InStorePrice;
	Parms.K2Node_Event_OfferBrush = K2Node_Event_OfferBrush;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.AboutToShowDetails__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStoreMain_MTXOffer_C::AboutToShowDetails__DelegateSignature()
{
	static auto Func = Class->GetFunction("StoreMain_MTXOffer_C", "AboutToShowDetails__DelegateSignature");

	Params::UStoreMain_MTXOffer_C_AboutToShowDetails__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
