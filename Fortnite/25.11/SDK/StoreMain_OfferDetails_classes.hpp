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

// 0x138 (0xA10 - 0x8D8)
// WidgetBlueprintGeneratedClass StoreMain_OfferDetails.StoreMain_OfferDetails_C
class UStoreMain_OfferDetails_C : public UFortRealMoneyOfferDetails
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                BaseColor;                                         // 0x8E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BaseColorDetails;                                  // 0x8E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        BonusMTXArea;                                      // 0x8F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         BorderDisclaimer;                                  // 0x8F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonText_BaseQuantity;                           // 0x900(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonText_BonusQuantity;                          // 0x908(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Highlight;                                         // 0x910(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortLazyImage*                        Image_CurrencyIcon;                                // 0x918(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                      KeyArt;                                            // 0x920(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              MTXArea;                                           // 0x928(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_VBucks;                                    // 0x930(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                OverlayGradient;                                   // 0x938(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                OverlayGradientDetails;                            // 0x940(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlaySalePrice;                                  // 0x948(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZoneCloseButton;                               // 0x950(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZoneMTX;                                       // 0x958(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStoreMain_OfferDetailsAttribute_C*    StoreMain_OfferDetailsAttribute1;                  // 0x960(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStoreMain_OfferDetailsAttribute_C*    StoreMain_OfferDetailsAttribute2;                  // 0x968(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextDescription;                                   // 0x970(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextName;                                          // 0x978(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextOfferDisplayPrice;                             // 0x980(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextOriginalPrice;                                 // 0x988(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VBox_MtxContainer;                                 // 0x990(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VBoxOfferInfo;                                     // 0x998(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                VBuckHighlight;                                    // 0x9A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ContentPurchaseBlocker_C*         WBP_ContentPurchaseBlocker;                        // 0x9A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<int32, class UFortMtxOfferData*>        ABAssetCollection;                                 // 0x9B0(0x50)(Edit, BlueprintVisible)
	bool                                         IsContentBlocked;                                  // 0xA00(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9951[0x7];                                     // Fixing Size After Last Property..
	class UFortMtxOfferData*                     DisplayAsset;                                      // 0xA08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("StoreMain_OfferDetails_C");
		return Clss;
	}

	void ContentBlocked(bool IsContentBlocked, class FText Content_Blocked_Text, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default_1);
	void SetupCurrencyImage(class UFortAccountItemDefinition* PriceItem, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, TSoftObjectPtr<class UTexture2D> CallFunc_GetSmallPreviewImage_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, int32 CallFunc_GetPriceItem_RequiredItemCount, class UFortAccountItemDefinition* CallFunc_GetPriceItem_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_1, bool CallFunc_IsPriceInRealMoney_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void UpdatePurchaseButton(class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable, class UFortCTAButton* CallFunc_GetPurchaseButtonCurrent_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UWBP_UIKit_ButtonCTA_Base_C* K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_AreGrantedItemsOwned_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText K2Node_Select_Default);
	void InitDetailAttributes(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UFortMtxOfferData* CallFunc_GetOfferDisplayAsset_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UStoreMain_OfferDetailsAttribute_C* CallFunc_Create_ReturnValue, const struct FFortMtxDetailsAttribute& CallFunc_Array_Get_Item, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void SetPurchaseButtonText(class FText ButtonText, class UFortCTAButton* CallFunc_GetPurchaseButtonCurrent_ReturnValue, class UWBP_UIKit_ButtonCTA_Base_C* K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base, bool K2Node_DynamicCast_bSuccess);
	bool IsGiftingStorefrontOffer(class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, bool CallFunc_IsGiftingStorefrontOffer_ReturnValue);
	void GetCurrencyABAssetFromQuantity(int32 Quantity, class UFortMtxOfferData** DataAsset, class UFortMtxOfferData* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void InitCurrency(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, bool Temp_bool_Variable_2, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_1, int32 CallFunc_GetBonusQuantity_ReturnValue, int32 CallFunc_GetTotalQuantity_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_2, class FText CallFunc_GetDescription_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_3, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_4, int32 CallFunc_GetBonusQuantity_ReturnValue_1, int32 CallFunc_GetTotalQuantity_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_2, int32 CallFunc_GetBaseQuantity_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default_2);
	void InitStoreTypeVisuals(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, enum class EFortMtxStoreOfferType CallFunc_GetFortStoreOfferType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void UnregisterInput();
	void RegisterInput(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void PopDetails();
	void HandleBack(bool* PassThrough);
	void OnLoaded_28384CAD450E607DCE5E079C601D083C(class UObject* Loaded);
	void OnLoaded_8B6F4A804D215DC25DE60DB2A90E3BD0(class UObject* Loaded);
	void Init();
	void ResetPurchaseButtonText();
	void OnPurchasingStarted();
	void BP_OnOfferSet();
	void BP_OnActivated();
	void UpdatePurchaseBlocked(bool bIsBlocked, class FText& PurchaseNotAllowedReason);
	void Construct();
	void SetMtxButtonVisible(bool bVisible);
	void ExecuteUbergraph_StoreMain_OfferDetails(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UObject* Temp_object_Variable, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UObject* K2Node_CustomEvent_Loaded, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class UObject* Temp_object_Variable_1, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class FText CallFunc_GetNormalPrice_ReturnValue, class FText CallFunc_GetName_ReturnValue, class UObject* K2Node_CustomEvent_Loaded_1, class UFortExperimentContext* CallFunc_GetContext_ReturnValue, bool CallFunc_ShouldShowNewVBuckColorsJuly2019_ReturnValue, class UFortExperimentContext* CallFunc_GetContext_ReturnValue_1, class UFortExperimentContext* CallFunc_GetContext_ReturnValue_2, bool CallFunc_ShouldShowNewVBuckColorsJuly2019_ReturnValue_1, bool CallFunc_ShouldShowNewVBuckCoinAssetsJuly2019_ReturnValue, class UMaterialInterface* Temp_object_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, class UMaterialInterface* Temp_object_Variable_3, bool Temp_bool_Variable_1, class UMaterialInterface* K2Node_Select_Default, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_3, enum class ESlateVisibility Temp_byte_Variable_2, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_1, int32 CallFunc_GetTotalQuantity_ReturnValue, enum class EFortMtxStoreOfferType CallFunc_GetFortStoreOfferType_ReturnValue, class UFortMtxOfferData* CallFunc_GetCurrencyABAssetFromQuantity_DataAsset, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FSlateBrush& CallFunc_CreateBrushFromAsset_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_2, int32 CallFunc_GetTotalQuantity_ReturnValue_1, class UFortMtxOfferData* CallFunc_GetCurrencyABAssetFromQuantity_DataAsset_1, enum class EFortMtxStoreOfferType CallFunc_GetFortStoreOfferType_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable_3, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_3, class UFortMtxOfferData* CallFunc_GetOfferDisplayAsset_ReturnValue, const struct FSlateBrush& CallFunc_CreateBrushFromAsset_ReturnValue_1, class FText CallFunc_GetSalePriceFromLastAppStore_SalePrice, bool CallFunc_GetSalePriceFromLastAppStore_ReturnValue, bool Temp_bool_Variable_2, enum class ESlateVisibility K2Node_Select_Default_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, bool K2Node_Event_bIsBlocked, class FText K2Node_Event_PurchaseNotAllowedReason, bool K2Node_Event_bVisible, enum class ESlateVisibility K2Node_Select_Default_2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
