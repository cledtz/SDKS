#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x298 - 0x280)
// WidgetBlueprintGeneratedClass UI_MainMenu_Shop_Premium_SpecialOffers.UI_MainMenu_Shop_Premium_SpecialOffers_C
class UUI_MainMenu_Shop_Premium_SpecialOffers_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWrapBox*                              WrapBox_Offers;                                    // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPG_PlayerState_Menu*                  PlayerState;                                       // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_MainMenu_Shop_Premium_SpecialOffers_C* GetDefaultObj();

	void RemoveOfferByClass(class UClass* OfferClass, class UClass* L_OfferClass, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class UBI_OfferInteract_C> K2Node_DynamicCast_AsBI_Offer_Interact, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_BooleanAND_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue);
	void Construct();
	void OnUpdatePlayerCombinedInfo_Event(TArray<enum class EModifiedData>& ModifiedData, const class FString& CustomString);
	void ExecuteUbergraph_UI_MainMenu_Shop_Premium_SpecialOffers(int32 EntryPoint, class UTask_MainMenu_Shop_Premium_Offers_GenerateStarterPack_C* CallFunc_CreateAction_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, TArray<enum class EModifiedData>& K2Node_CustomEvent_ModifiedData, const class FString& K2Node_CustomEvent_CustomString, int32 CallFunc_Array_Length_ReturnValue, class UPG_PlayerState_Menu* K2Node_DynamicCast_AsPG_Player_State_Menu, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UPlayFabJsonObject* CallFunc_GetPlayerCombinedInfo_ReturnValue, TArray<enum class EModifiedData>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


