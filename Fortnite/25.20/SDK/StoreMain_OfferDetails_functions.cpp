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


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.ContentBlocked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsContentBlocked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Content_Blocked_Text                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStoreMain_OfferDetails_C::ContentBlocked(bool IsContentBlocked, class FText Content_Blocked_Text, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static auto Func = Class->GetFunction("StoreMain_OfferDetails_C", "ContentBlocked");

	Params::UStoreMain_OfferDetails_C_ContentBlocked_Params Parms;

	Parms.IsContentBlocked = IsContentBlocked;
	Parms.Content_Blocked_Text = Content_Blocked_Text;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.SetupCurrencyImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAccountItemDefinition*  PriceItem                                                        (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetSmallPreviewImage_ReturnValue                        (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreFrontOfferInfo*    CallFunc_GetOfferInfo_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPriceItem_RequiredItemCount                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItemDefinition*  CallFunc_GetPriceItem_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortStoreFrontOfferInfo*    CallFunc_GetOfferInfo_ReturnValue_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPriceInRealMoney_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStoreMain_OfferDetails_C::SetupCurrencyImage(class UFortAccountItemDefinition* PriceItem, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, TSoftObjectPtr<class UTexture2D> CallFunc_GetSmallPreviewImage_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, int32 CallFunc_GetPriceItem_RequiredItemCount, class UFortAccountItemDefinition* CallFunc_GetPriceItem_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_1, bool CallFunc_IsPriceInRealMoney_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("StoreMain_OfferDetails_C", "SetupCurrencyImage");

	Params::UStoreMain_OfferDetails_C_SetupCurrencyImage_Params Parms;

	Parms.PriceItem = PriceItem;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetSmallPreviewImage_ReturnValue = CallFunc_GetSmallPreviewImage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOfferInfo_ReturnValue = CallFunc_GetOfferInfo_ReturnValue;
	Parms.CallFunc_GetPriceItem_RequiredItemCount = CallFunc_GetPriceItem_RequiredItemCount;
	Parms.CallFunc_GetPriceItem_ReturnValue = CallFunc_GetPriceItem_ReturnValue;
	Parms.CallFunc_GetOfferInfo_ReturnValue_1 = CallFunc_GetOfferInfo_ReturnValue_1;
	Parms.CallFunc_IsPriceInRealMoney_ReturnValue = CallFunc_IsPriceInRealMoney_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.UpdatePurchaseButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable_1                                             ()
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortCTAButton*              CallFunc_GetPurchaseButtonCurrent_ReturnValue                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UFortStoreFrontOfferInfo*    CallFunc_GetOfferInfo_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_UIKit_ButtonCTA_Base_C* K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AreGrantedItemsOwned_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            ()

void UStoreMain_OfferDetails_C::UpdatePurchaseButton(class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable, class UFortCTAButton* CallFunc_GetPurchaseButtonCurrent_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UWBP_UIKit_ButtonCTA_Base_C* K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_AreGrantedItemsOwned_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("StoreMain_OfferDetails_C", "UpdatePurchaseButton");

	Params::UStoreMain_OfferDetails_C_UpdatePurchaseButton_Params Parms;

	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetPurchaseButtonCurrent_ReturnValue = CallFunc_GetPurchaseButtonCurrent_ReturnValue;
	Parms.CallFunc_GetOfferInfo_ReturnValue = CallFunc_GetOfferInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base = K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AreGrantedItemsOwned_ReturnValue = CallFunc_AreGrantedItemsOwned_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.InitDetailAttributes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreFrontOfferInfo*    CallFunc_GetOfferInfo_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortMtxOfferData*           CallFunc_GetOfferDisplayAsset_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStoreMain_OfferDetailsAttribute_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FFortMtxDetailsAttribute    CallFunc_Array_Get_Item                                          ()
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStoreMain_OfferDetails_C::InitDetailAttributes(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UFortMtxOfferData* CallFunc_GetOfferDisplayAsset_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UStoreMain_OfferDetailsAttribute_C* CallFunc_Create_ReturnValue, const struct FFortMtxDetailsAttribute& CallFunc_Array_Get_Item, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("StoreMain_OfferDetails_C", "InitDetailAttributes");

	Params::UStoreMain_OfferDetails_C_InitDetailAttributes_Params Parms;

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetOfferInfo_ReturnValue = CallFunc_GetOfferInfo_ReturnValue;
	Parms.CallFunc_GetOfferDisplayAsset_ReturnValue = CallFunc_GetOfferDisplayAsset_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.SetPurchaseButtonText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ButtonText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UFortCTAButton*              CallFunc_GetPurchaseButtonCurrent_ReturnValue                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_UIKit_ButtonCTA_Base_C* K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStoreMain_OfferDetails_C::SetPurchaseButtonText(class FText ButtonText, class UFortCTAButton* CallFunc_GetPurchaseButtonCurrent_ReturnValue, class UWBP_UIKit_ButtonCTA_Base_C* K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("StoreMain_OfferDetails_C", "SetPurchaseButtonText");

	Params::UStoreMain_OfferDetails_C_SetPurchaseButtonText_Params Parms;

	Parms.ButtonText = ButtonText;
	Parms.CallFunc_GetPurchaseButtonCurrent_ReturnValue = CallFunc_GetPurchaseButtonCurrent_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base = K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.IsGiftingStorefrontOffer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreFrontOfferInfo*    CallFunc_GetOfferInfo_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGiftingStorefrontOffer_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UStoreMain_OfferDetails_C::IsGiftingStorefrontOffer(class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, bool CallFunc_IsGiftingStorefrontOffer_ReturnValue)
{
	static auto Func = Class->GetFunction("StoreMain_OfferDetails_C", "IsGiftingStorefrontOffer");

	Params::UStoreMain_OfferDetails_C_IsGiftingStorefrontOffer_Params Parms;

	Parms.CallFunc_GetOfferInfo_ReturnValue = CallFunc_GetOfferInfo_ReturnValue;
	Parms.CallFunc_IsGiftingStorefrontOffer_ReturnValue = CallFunc_IsGiftingStorefrontOffer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.GetCurrencyABAssetFromQuantity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Quantity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMtxOfferData*           DataAsset                                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortMtxOfferData*           CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStoreMain_OfferDetails_C::GetCurrencyABAssetFromQuantity(int32 Quantity, class UFortMtxOfferData** DataAsset, class UFortMtxOfferData* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static auto Func = Class->GetFunction("StoreMain_OfferDetails_C", "GetCurrencyABAssetFromQuantity");

	Params::UStoreMain_OfferDetails_C_GetCurrencyABAssetFromQuantity_Params Parms;

	Parms.Quantity = Quantity;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (DataAsset != nullptr)
		*DataAsset = Parms.DataAsset;

}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.InitCurrency
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreFrontOfferInfo*    CallFunc_GetOfferInfo_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortStoreFrontOfferInfo*    CallFunc_GetOfferInfo_ReturnValue_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetBonusQuantity_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTotalQuantity_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreFrontOfferInfo*    CallFunc_GetOfferInfo_ReturnValue_2                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDescription_ReturnValue                              ()
// class UFortStoreFrontOfferInfo*    CallFunc_GetOfferInfo_ReturnValue_3                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortStoreFrontOfferInfo*    CallFunc_GetOfferInfo_ReturnValue_4                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetBonusQuantity_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTotalQuantity_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetBaseQuantity_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            ()
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStoreMain_OfferDetails_C::InitCurrency(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, bool Temp_bool_Variable_2, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_1, int32 CallFunc_GetBonusQuantity_ReturnValue, int32 CallFunc_GetTotalQuantity_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_2, class FText CallFunc_GetDescription_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_3, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_4, int32 CallFunc_GetBonusQuantity_ReturnValue_1, int32 CallFunc_GetTotalQuantity_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_2, int32 CallFunc_GetBaseQuantity_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default_2)
{
	static auto Func = Class->GetFunction("StoreMain_OfferDetails_C", "InitCurrency");

	Params::UStoreMain_OfferDetails_C_InitCurrency_Params Parms;

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_GetOfferInfo_ReturnValue = CallFunc_GetOfferInfo_ReturnValue;
	Parms.CallFunc_GetOfferInfo_ReturnValue_1 = CallFunc_GetOfferInfo_ReturnValue_1;
	Parms.CallFunc_GetBonusQuantity_ReturnValue = CallFunc_GetBonusQuantity_ReturnValue;
	Parms.CallFunc_GetTotalQuantity_ReturnValue = CallFunc_GetTotalQuantity_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetOfferInfo_ReturnValue_2 = CallFunc_GetOfferInfo_ReturnValue_2;
	Parms.CallFunc_GetDescription_ReturnValue = CallFunc_GetDescription_ReturnValue;
	Parms.CallFunc_GetOfferInfo_ReturnValue_3 = CallFunc_GetOfferInfo_ReturnValue_3;
	Parms.CallFunc_GetOfferInfo_ReturnValue_4 = CallFunc_GetOfferInfo_ReturnValue_4;
	Parms.CallFunc_GetBonusQuantity_ReturnValue_1 = CallFunc_GetBonusQuantity_ReturnValue_1;
	Parms.CallFunc_GetTotalQuantity_ReturnValue_1 = CallFunc_GetTotalQuantity_ReturnValue_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_2 = CallFunc_Greater_IntInt_ReturnValue_2;
	Parms.CallFunc_GetBaseQuantity_ReturnValue = CallFunc_GetBaseQuantity_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.InitStoreTypeVisuals
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreFrontOfferInfo*    CallFunc_GetOfferInfo_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EFortMtxStoreOfferType  CallFunc_GetFortStoreOfferType_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStoreMain_OfferDetails_C::InitStoreTypeVisuals(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, enum class EFortMtxStoreOfferType CallFunc_GetFortStoreOfferType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("StoreMain_OfferDetails_C", "InitStoreTypeVisuals");

	Params::UStoreMain_OfferDetails_C_InitStoreTypeVisuals_Params Parms;

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetOfferInfo_ReturnValue = CallFunc_GetOfferInfo_ReturnValue;
	Parms.CallFunc_GetFortStoreOfferType_ReturnValue = CallFunc_GetFortStoreOfferType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.UnregisterInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStoreMain_OfferDetails_C::UnregisterInput()
{
	static auto Func = Class->GetFunction("StoreMain_OfferDetails_C", "UnregisterInput");

	Params::UStoreMain_OfferDetails_C_UnregisterInput_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.RegisterInput
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)

void UStoreMain_OfferDetails_C::RegisterInput(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle)
{
	static auto Func = Class->GetFunction("StoreMain_OfferDetails_C", "RegisterInput");

	Params::UStoreMain_OfferDetails_C_RegisterInput_Params Parms;

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.PopDetails
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStoreMain_OfferDetails_C::PopDetails()
{
	static auto Func = Class->GetFunction("StoreMain_OfferDetails_C", "PopDetails");

	Params::UStoreMain_OfferDetails_C_PopDetails_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStoreMain_OfferDetails_C::HandleBack(bool* PassThrough)
{
	static auto Func = Class->GetFunction("StoreMain_OfferDetails_C", "HandleBack");

	Params::UStoreMain_OfferDetails_C_HandleBack_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.OnLoaded_28384CAD450E607DCE5E079C601D083C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UStoreMain_OfferDetails_C::OnLoaded_28384CAD450E607DCE5E079C601D083C(class UObject* Loaded)
{
	static auto Func = Class->GetFunction("StoreMain_OfferDetails_C", "OnLoaded_28384CAD450E607DCE5E079C601D083C");

	Params::UStoreMain_OfferDetails_C_OnLoaded_28384CAD450E607DCE5E079C601D083C_Params Parms;

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.OnLoaded_8B6F4A804D215DC25DE60DB2A90E3BD0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UStoreMain_OfferDetails_C::OnLoaded_8B6F4A804D215DC25DE60DB2A90E3BD0(class UObject* Loaded)
{
	static auto Func = Class->GetFunction("StoreMain_OfferDetails_C", "OnLoaded_8B6F4A804D215DC25DE60DB2A90E3BD0");

	Params::UStoreMain_OfferDetails_C_OnLoaded_8B6F4A804D215DC25DE60DB2A90E3BD0_Params Parms;

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UStoreMain_OfferDetails_C::Init()
{
	static auto Func = Class->GetFunction("StoreMain_OfferDetails_C", "Init");

	Params::UStoreMain_OfferDetails_C_Init_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.ResetPurchaseButtonText
// (Event, Protected, BlueprintEvent)
// Parameters:

void UStoreMain_OfferDetails_C::ResetPurchaseButtonText()
{
	static auto Func = Class->GetFunction("StoreMain_OfferDetails_C", "ResetPurchaseButtonText");

	Params::UStoreMain_OfferDetails_C_ResetPurchaseButtonText_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.OnPurchasingStarted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UStoreMain_OfferDetails_C::OnPurchasingStarted()
{
	static auto Func = Class->GetFunction("StoreMain_OfferDetails_C", "OnPurchasingStarted");

	Params::UStoreMain_OfferDetails_C_OnPurchasingStarted_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.BP_OnOfferSet
// (Event, Public, BlueprintEvent)
// Parameters:

void UStoreMain_OfferDetails_C::BP_OnOfferSet()
{
	static auto Func = Class->GetFunction("StoreMain_OfferDetails_C", "BP_OnOfferSet");

	Params::UStoreMain_OfferDetails_C_BP_OnOfferSet_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UStoreMain_OfferDetails_C::BP_OnActivated()
{
	static auto Func = Class->GetFunction("StoreMain_OfferDetails_C", "BP_OnActivated");

	Params::UStoreMain_OfferDetails_C_BP_OnActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.UpdatePurchaseBlocked
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// bool                               bIsBlocked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        PurchaseNotAllowedReason                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UStoreMain_OfferDetails_C::UpdatePurchaseBlocked(bool bIsBlocked, class FText& PurchaseNotAllowedReason)
{
	static auto Func = Class->GetFunction("StoreMain_OfferDetails_C", "UpdatePurchaseBlocked");

	Params::UStoreMain_OfferDetails_C_UpdatePurchaseBlocked_Params Parms;

	Parms.bIsBlocked = bIsBlocked;
	Parms.PurchaseNotAllowedReason = PurchaseNotAllowedReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UStoreMain_OfferDetails_C::Construct()
{
	static auto Func = Class->GetFunction("StoreMain_OfferDetails_C", "Construct");

	Params::UStoreMain_OfferDetails_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.SetMtxButtonVisible
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bVisible                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStoreMain_OfferDetails_C::SetMtxButtonVisible(bool bVisible)
{
	static auto Func = Class->GetFunction("StoreMain_OfferDetails_C", "SetMtxButtonVisible");

	Params::UStoreMain_OfferDetails_C_SetMtxButtonVisible_Params Parms;

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.ExecuteUbergraph_StoreMain_OfferDetails
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortStoreFrontOfferInfo*    CallFunc_GetOfferInfo_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetNormalPrice_ReturnValue                              ()
// class FText                        CallFunc_GetName_ReturnValue                                     ()
// class UObject*                     K2Node_CustomEvent_Loaded_1                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortExperimentContext*      CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldShowNewVBuckColorsJuly2019_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortExperimentContext*      CallFunc_GetContext_ReturnValue_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortExperimentContext*      CallFunc_GetContext_ReturnValue_2                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldShowNewVBuckColorsJuly2019_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldShowNewVBuckCoinAssetsJuly2019_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_2                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_2                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_3                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_3                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreFrontOfferInfo*    CallFunc_GetOfferInfo_ReturnValue_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTotalQuantity_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortMtxStoreOfferType  CallFunc_GetFortStoreOfferType_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMtxOfferData*           CallFunc_GetCurrencyABAssetFromQuantity_DataAsset                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_CreateBrushFromAsset_ReturnValue                        ()
// class UFortStoreFrontOfferInfo*    CallFunc_GetOfferInfo_ReturnValue_2                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTotalQuantity_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMtxOfferData*           CallFunc_GetCurrencyABAssetFromQuantity_DataAsset_1              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EFortMtxStoreOfferType  CallFunc_GetFortStoreOfferType_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreFrontOfferInfo*    CallFunc_GetOfferInfo_ReturnValue_3                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortMtxOfferData*           CallFunc_GetOfferDisplayAsset_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_CreateBrushFromAsset_ReturnValue_1                      ()
// class FText                        CallFunc_GetSalePriceFromLastAppStore_SalePrice                  ()
// bool                               CallFunc_GetSalePriceFromLastAppStore_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsBlocked                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_PurchaseNotAllowedReason                            (ConstParm)
// bool                               K2Node_Event_bVisible                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStoreMain_OfferDetails_C::ExecuteUbergraph_StoreMain_OfferDetails(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UObject* Temp_object_Variable, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UObject* K2Node_CustomEvent_Loaded, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class UObject* Temp_object_Variable_1, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class FText CallFunc_GetNormalPrice_ReturnValue, class FText CallFunc_GetName_ReturnValue, class UObject* K2Node_CustomEvent_Loaded_1, class UFortExperimentContext* CallFunc_GetContext_ReturnValue, bool CallFunc_ShouldShowNewVBuckColorsJuly2019_ReturnValue, class UFortExperimentContext* CallFunc_GetContext_ReturnValue_1, class UFortExperimentContext* CallFunc_GetContext_ReturnValue_2, bool CallFunc_ShouldShowNewVBuckColorsJuly2019_ReturnValue_1, bool CallFunc_ShouldShowNewVBuckCoinAssetsJuly2019_ReturnValue, class UMaterialInterface* Temp_object_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, class UMaterialInterface* Temp_object_Variable_3, bool Temp_bool_Variable_1, class UMaterialInterface* K2Node_Select_Default, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_3, enum class ESlateVisibility Temp_byte_Variable_2, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_1, int32 CallFunc_GetTotalQuantity_ReturnValue, enum class EFortMtxStoreOfferType CallFunc_GetFortStoreOfferType_ReturnValue, class UFortMtxOfferData* CallFunc_GetCurrencyABAssetFromQuantity_DataAsset, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FSlateBrush& CallFunc_CreateBrushFromAsset_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_2, int32 CallFunc_GetTotalQuantity_ReturnValue_1, class UFortMtxOfferData* CallFunc_GetCurrencyABAssetFromQuantity_DataAsset_1, enum class EFortMtxStoreOfferType CallFunc_GetFortStoreOfferType_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable_3, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_3, class UFortMtxOfferData* CallFunc_GetOfferDisplayAsset_ReturnValue, const struct FSlateBrush& CallFunc_CreateBrushFromAsset_ReturnValue_1, class FText CallFunc_GetSalePriceFromLastAppStore_SalePrice, bool CallFunc_GetSalePriceFromLastAppStore_ReturnValue, bool Temp_bool_Variable_2, enum class ESlateVisibility K2Node_Select_Default_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, bool K2Node_Event_bIsBlocked, class FText K2Node_Event_PurchaseNotAllowedReason, bool K2Node_Event_bVisible, enum class ESlateVisibility K2Node_Select_Default_2)
{
	static auto Func = Class->GetFunction("StoreMain_OfferDetails_C", "ExecuteUbergraph_StoreMain_OfferDetails");

	Params::UStoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_GetOfferInfo_ReturnValue = CallFunc_GetOfferInfo_ReturnValue;
	Parms.CallFunc_GetNormalPrice_ReturnValue = CallFunc_GetNormalPrice_ReturnValue;
	Parms.CallFunc_GetName_ReturnValue = CallFunc_GetName_ReturnValue;
	Parms.K2Node_CustomEvent_Loaded_1 = K2Node_CustomEvent_Loaded_1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_ShouldShowNewVBuckColorsJuly2019_ReturnValue = CallFunc_ShouldShowNewVBuckColorsJuly2019_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue_1 = CallFunc_GetContext_ReturnValue_1;
	Parms.CallFunc_GetContext_ReturnValue_2 = CallFunc_GetContext_ReturnValue_2;
	Parms.CallFunc_ShouldShowNewVBuckColorsJuly2019_ReturnValue_1 = CallFunc_ShouldShowNewVBuckColorsJuly2019_ReturnValue_1;
	Parms.CallFunc_ShouldShowNewVBuckCoinAssetsJuly2019_ReturnValue = CallFunc_ShouldShowNewVBuckCoinAssetsJuly2019_ReturnValue;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_2 = CallFunc_GetDynamicMaterial_ReturnValue_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_3 = CallFunc_GetDynamicMaterial_ReturnValue_3;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_GetOfferInfo_ReturnValue_1 = CallFunc_GetOfferInfo_ReturnValue_1;
	Parms.CallFunc_GetTotalQuantity_ReturnValue = CallFunc_GetTotalQuantity_ReturnValue;
	Parms.CallFunc_GetFortStoreOfferType_ReturnValue = CallFunc_GetFortStoreOfferType_ReturnValue;
	Parms.CallFunc_GetCurrencyABAssetFromQuantity_DataAsset = CallFunc_GetCurrencyABAssetFromQuantity_DataAsset;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_CreateBrushFromAsset_ReturnValue = CallFunc_CreateBrushFromAsset_ReturnValue;
	Parms.CallFunc_GetOfferInfo_ReturnValue_2 = CallFunc_GetOfferInfo_ReturnValue_2;
	Parms.CallFunc_GetTotalQuantity_ReturnValue_1 = CallFunc_GetTotalQuantity_ReturnValue_1;
	Parms.CallFunc_GetCurrencyABAssetFromQuantity_DataAsset_1 = CallFunc_GetCurrencyABAssetFromQuantity_DataAsset_1;
	Parms.CallFunc_GetFortStoreOfferType_ReturnValue_1 = CallFunc_GetFortStoreOfferType_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_GetOfferInfo_ReturnValue_3 = CallFunc_GetOfferInfo_ReturnValue_3;
	Parms.CallFunc_GetOfferDisplayAsset_ReturnValue = CallFunc_GetOfferDisplayAsset_ReturnValue;
	Parms.CallFunc_CreateBrushFromAsset_ReturnValue_1 = CallFunc_CreateBrushFromAsset_ReturnValue_1;
	Parms.CallFunc_GetSalePriceFromLastAppStore_SalePrice = CallFunc_GetSalePriceFromLastAppStore_SalePrice;
	Parms.CallFunc_GetSalePriceFromLastAppStore_ReturnValue = CallFunc_GetSalePriceFromLastAppStore_ReturnValue;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.K2Node_Event_bIsBlocked = K2Node_Event_bIsBlocked;
	Parms.K2Node_Event_PurchaseNotAllowedReason = K2Node_Event_PurchaseNotAllowedReason;
	Parms.K2Node_Event_bVisible = K2Node_Event_bVisible;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
