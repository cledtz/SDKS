#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC1 (0x6B1 - 0x5F0)
// WidgetBlueprintGeneratedClass StoreMain_Root_Legacy.StoreMain_Root_Legacy_C
class UStoreMain_Root_Legacy_C : public UFortMtxStoreRootBase_Legacy
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Intro;                                             // 0x5F8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonBorder*                         CommonBorder_0;                                    // 0x600(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_3;                                 // 0x608(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         Container_AvailableAmount;                         // 0x610(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         CurrencyNotificationBorder;                        // 0x618(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CurrencyNotificationText;                          // 0x620(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_0;                                   // 0x628(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInfoFlag_C*                           InfoFlag;                                          // 0x630(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                            NewLTMGrid;                                        // 0x638(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          NEWLTMOfferSection;                                // 0x640(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         NewNoOffersBox;                                    // 0x648(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         NewPurchasingDisabledBox;                          // 0x650(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                NewSpinner;                                        // 0x658(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcherLegacy*           NewSwitcherItemsProgress;                          // 0x660(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                            NewVBuckGrid;                                      // 0x668(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          NewVbuckOffers;                                    // 0x670(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          NewVBuckSection;                                   // 0x678(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             OfferScaleBoxRoot;                                 // 0x680(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_0;                                         // 0x688(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USimpleMTXDisplay_C*                   SimpleMTXDisplay;                                  // 0x690(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStore_BannerMessage_C*                StoreBannerMessage;                                // 0x698(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAudioComponent*                       Ambient_Sound;                                     // 0x6A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               InitiallyFocusedOffer;                             // 0x6A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         bShowingCampaignUpsell;                            // 0x6B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("StoreMain_Root_Legacy_C");
		return Clss;
	}

	class UWidget* BP_GetDesiredFocusTarget();
	void GetVisibilityByChildrenPresence(class UPanelWidget* Panel, enum class ESlateVisibility* NewParam, bool Temp_bool_Variable, bool CallFunc_HasAnyChildren_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void HandleAllOffersGenerated(bool BothOfferSectionsVisible, enum class EHorizontalAlignment Temp_byte_Variable, enum class EHorizontalAlignment Temp_byte_Variable_1, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& K2Node_MakeStruct_Margin_1, bool Temp_bool_Variable, class UOverlaySlot* K2Node_DynamicCast_AsOverlay_Slot, bool K2Node_DynamicCast_bSuccess, enum class ESlateVisibility CallFunc_GetVisibilityByChildrenPresence_NewParam, enum class ESlateVisibility CallFunc_GetVisibilityByChildrenPresence_NewParam_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_IsActivated_ReturnValue, const struct FMargin& K2Node_Select_Default, enum class EHorizontalAlignment K2Node_Select_Default_1);
	void HandleGenerateOffer(class UFortStoreFrontOfferInfo* OfferInfo, class UFortRealMoneyOffer* StoreOfferWidget, class FName CallFunc_GetStorefrontName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, class UGridSlot* CallFunc_AddChildToGrid_ReturnValue, class UGridSlot* CallFunc_AddChildToGrid_ReturnValue_1, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UStoreMain_MTXOffer_C* CallFunc_Create_ReturnValue);
	void PlayEquippedLockerMusic(enum class ESubGame CallFunc_GetSubGame_ReturnValue, TArray<class UFort_Entry_Music_Controller_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFort_Entry_Music_Controller_BP_C* CallFunc_Array_Get_Item);
	void HandleBack(bool* PassThrough);
	void HandleRedeem(bool* bPassThrough, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, class URedeemFriendCodeWindow_C* CallFunc_Create_ReturnValue);
	void SetupForCampaignUpsell(class UFortRuntimeOptions* NewLocalVar_0, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsDesktopPlatform_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_1, TArray<class FString>& K2Node_MakeArray_Array);
	void SetupFirstFocusableTile(class UWidget* CallFunc_GetChildAt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue);
	void LayoutVBuckTiles(class UWidget* Child, int32 Index, int32 CallFunc_Divide_IntInt_ReturnValue, class UStoreMain_MTXOffer_C* K2Node_DynamicCast_AsStore_Main_MTXOffer, bool K2Node_DynamicCast_bSuccess, class UGridSlot* CallFunc_SlotAsGridSlot_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void Start_Ambient_Sound(bool Condition, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAudioComponent* CallFunc_CreateSound2D_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void UpdateCurrencyNotification(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, const struct FMtxBreakdown& CallFunc_GetMtxBreakdown_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, enum class ESlateVisibility K2Node_Select_Default, class FText CallFunc_Format_ReturnValue);
	void Focus();
	void NoOffersAvailable();
	void OnOffersGenerated();
	void BP_OnActivated();
	void ClearOfferWidgets();
	void OnUpdateOtherPlatformMTXMessage(bool HasOtherPlatformCurrency, class FText& CurrencyMessageLocText);
	void GenerateOfferWidget(class UFortStoreFrontOfferInfo* OfferData);
	void OnPurchasingDisabled();
	void OnTransitionedBySwitcher();
	void OnStartReadingOffers();
	void Construct();
	void OnMainTabSelected(class FName TabName);
	void Destruct();
	void ExecuteUbergraph_StoreMain_Root_Legacy(int32 EntryPoint, enum class EFrontEndCamera Temp_byte_Variable, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, class UFortFrontEndContext* CallFunc_GetLocalPlayerSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_HasOtherPlatformCurrency, class FText K2Node_Event_CurrencyMessageLocText, class UFortStoreFrontOfferInfo* K2Node_Event_OfferData, bool CallFunc_IsActivated_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, enum class EFrontEndCamera Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default, bool Temp_bool_Variable_1, class FName K2Node_CustomEvent_TabName, bool CallFunc_EqualEqual_NameName_ReturnValue, enum class EFrontEndCamera K2Node_Select_Default_1, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
