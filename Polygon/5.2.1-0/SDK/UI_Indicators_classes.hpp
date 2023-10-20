#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x2F8 - 0x280)
// WidgetBlueprintGeneratedClass UI_Indicators.UI_Indicators_C
class UUI_Indicators_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      ChangeCurrentNumberAmmo;                           // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_Health;                                // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_Stamina;                               // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_CurrentNumberAmmo;                       // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_CurrentNumberAmmo_Anim;                  // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_CurrentNumberAmmo_CA_01;                 // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_CurrentNumberAmmo_CA_02;                 // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_GunName;                                 // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_NumberGrenades;                          // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_StockAmmo;                               // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_StockAmmo_CA_01;                         // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_StockAmmo_CA_02;                         // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PG_Game_Character_C*               Character;                                         // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UItem_Gun_General*                     Current_Gun;                                       // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Indicators_C* GetDefaultObj();

	void OnChangeHealth_Event();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnSetPlayerState_Event();
	void OnSetCurrentGun_Event(class UItem_Gun_General* OldCurrentGun);
	void OnChangeNumberGrenades_Event();
	void OnPossessedPawnChanged_Event(class UPawn* OldPawn, class UPawn* NewPawn);
	void Construct();
	void OnChangeStockAmmo_Event();
	void OnChangeCurrentNumberAmmo_Event();
	void ExecuteUbergraph_UI_Indicators(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UPawn* CallFunc_K2_GetPawn_ReturnValue, class UBP_PG_Game_Character_C* K2Node_DynamicCast_AsBP_PG_Game_Character, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetHealth_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, double CallFunc_GetWorldDeltaSeconds_ReturnValue, double CallFunc_FInterpTo_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue_1, int32 CallFunc_GetHealth_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue_2, double CallFunc_FInterpTo_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_IsValid_ReturnValue_1, class UItem_Gun_General* K2Node_CustomEvent_OldCurrentGun, class UBP_PG_PlayerState_Game_C* K2Node_DynamicCast_AsBP_PG_Player_State_Game, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, int32 CallFunc_Conv_ByteToInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class UPawn* K2Node_CustomEvent_OldPawn, class UPawn* K2Node_CustomEvent_NewPawn, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, int32 CallFunc_GetCurrentStockAmmo_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, double CallFunc_FInterpTo_Current_ImplicitCast, float CallFunc_LinearColorLerp_Alpha_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast, double CallFunc_FInterpTo_Current_ImplicitCast_1, float CallFunc_SetPercent_InPercent_ImplicitCast_1);
};

}


