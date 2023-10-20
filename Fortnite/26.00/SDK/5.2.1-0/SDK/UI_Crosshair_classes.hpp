#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x2E8 - 0x280)
// WidgetBlueprintGeneratedClass UI_Crosshair.UI_Crosshair_C
class UUI_Crosshair_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      HeadshotAnimation;                                 // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      KillAnimation;                                     // 0x290(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      HitAnimation;                                      // 0x298(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               Border_OnApplyDamage;                              // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_Main;                                  // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Bottom;                                    // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Center;                                    // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Left;                                      // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Right;                                     // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Top;                                       // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PG_Game_Character_C*               Character;                                         // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UItem_Gun_General*                     Current_Gun;                                       // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Crosshair_C* GetDefaultObj();

	void SetCrosshairPosition(const struct FVector2D& InPosition, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue_1, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue_1, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_2, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_3, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_4, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_5);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnApplyGunDamage_Event(bool bHeadshot);
	void OnSetPlayerState_Event();
	void OnSetCurrentGun_Event(class UItem_Gun_General* OldCurrentGun);
	void OnPossessedPawnChanged_Event_0(class UPawn* OldPawn, class UPawn* NewPawn);
	void Construct();
	void ExecuteUbergraph_UI_Crosshair(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool Temp_bool_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UPawn* CallFunc_K2_GetPawn_ReturnValue, class UBP_PG_Game_Character_C* K2Node_DynamicCast_AsBP_PG_Game_Character, bool K2Node_DynamicCast_bSuccess, bool K2Node_CustomEvent_bHeadshot, bool CallFunc_IsAiming_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsAnimationPlaying_ReturnValue_1, bool CallFunc_IsAnimationPlaying_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UItem_Gun_General* K2Node_CustomEvent_OldCurrentGun, class UBP_PG_PlayerState_Game_C* K2Node_DynamicCast_AsBP_PG_Player_State_Game, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_4, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_GetForwardShot_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_NotEqual_VectorVector_ReturnValue, const struct FVector2D& CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition, bool CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, class UPawn* K2Node_CustomEvent_OldPawn, class UPawn* K2Node_CustomEvent_NewPawn, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
};

}


