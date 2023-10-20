#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x74 (0x2F4 - 0x280)
// WidgetBlueprintGeneratedClass UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot.UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C
class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Hover;                                             // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                               Button;                                            // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Icon;                                        // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_ModuleName;                              // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox;                                           // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_ModuleName;                              // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_ModuleType_1;                            // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_ModuleType_2;                            // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_Icon;                               // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_Text;                               // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C* UI_Menu_Soldier_Weapon_Gun_Gunsmith_Selector;      // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EGunModuleType                    ModuleType;                                        // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_2D3F[0x7];                                     // Fixing Size After Last Property 
	class UClass*                                Module_Class;                                      // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        Delta_Time;                                        // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C* GetDefaultObj();

	void OnPaint(struct FPaintContext& Context, bool L_ModuleIsExists, const struct FVector& L_ModuleLocation, class UItem_Gun_General* L_Gun, const struct FPaintContext& L_Context, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, class UItem_Module_General* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, class UPlayerState* CallFunc_GetPlayerState_ReturnValue, class UPG_PlayerState_Menu* K2Node_DynamicCast_AsPG_Player_State_Menu, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGeometry& CallFunc_GetTickSpaceGeometry_ReturnValue, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue, const struct FVector2D& CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition, bool CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue, const struct FVector2D& CallFunc_LocalToViewport_PixelPosition, const struct FVector2D& CallFunc_LocalToViewport_ViewportPosition, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, double CallFunc_BreakVector2D_X_2, double CallFunc_BreakVector2D_Y_2, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_FClamp_ReturnValue, double CallFunc_FClamp_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, double CallFunc_FClamp_Max_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_FClamp_Max_ImplicitCast_1, double CallFunc_Add_DoubleDouble_B_ImplicitCast_1);
	void SetModuleInfo(class UClass* ModuleClass, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess);
	void Reset(class UClass* CallFunc_GetDefaultModuleClassByType_DefaultModuleClass);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__UI_Menu_Solder_Weapon_Gun_Gunsmith_General_Slot_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_Menu_Solder_Weapon_Gun_Gunsmith_General_Slot_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_Menu_Solder_Weapon_Gun_Gunsmith_General_Slot_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot(int32 EntryPoint, class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C* CallFunc_FindParentWidgetOfType_ReturnValue, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, bool Temp_bool_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, class FText Temp_text_Variable_7, enum class EGunModuleType Temp_byte_Variable, double Temp_real_Variable, double Temp_real_Variable_1, float CallFunc_GetScrollOffsetOfEnd_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, float CallFunc_GetScrollOffset_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, float CallFunc_GetScrollOffset_ReturnValue_1, double CallFunc_FInterpTo_Constant_ReturnValue, float CallFunc_GetScrollOffsetOfEnd_ReturnValue_1, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool K2Node_Event_IsDesignTime, double K2Node_Select_Default, class FText K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool Temp_bool_IsClosed_Variable_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, double CallFunc_FInterpTo_Constant_DeltaTime_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_NotEqual_DoubleDouble_A_ImplicitCast, double CallFunc_FInterpTo_Constant_Current_ImplicitCast, float CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast, double K2Node_Select_Option_0_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast);
};

}


