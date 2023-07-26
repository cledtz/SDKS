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

// 0x7A (0x65CA - 0x6550)
// BlueprintGeneratedClass BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C
class ABP_PlayerPawn_Tandem_C : public ABP_PlayerPawn_NonParticipant_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6550(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortWidgetComponent*                  NPCStatusWidget;                                   // 0x6558(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         IsConverted;                                       // 0x6560(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Leader_Team;                                       // 0x6561(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8F3B[0x6];                                     // Fixing Size After Last Property..
	struct FStruct_NPC_HealthInfo                HealthInfo;                                        // 0x6568(0x20)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                         NPCStatusWidgetHealthBarDisabled;                  // 0x6588(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8F3C[0x7];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        ShowHealth;                                        // 0x6590(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       NPCHealthBarHideTimeAfterDeath;                    // 0x65B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       NPCMaxDistanceFromDamageINstigatorToDrawHealthBar; // 0x65C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHealthCheatEnabled;                              // 0x65C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsTandemHealthEnabled;                             // 0x65C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_PlayerPawn_Tandem_C");
		return Clss;
	}

	void UpdatePawnHealthHUD(bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UNPCStatusWidget_AIBoss_C* K2Node_DynamicCast_AsNPCStatus_Widget_AIBoss, bool K2Node_DynamicCast_bSuccess, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, class AFortPlayerController* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, int32 Temp_int_Loop_Counter_Variable, double CallFunc_GetDistanceBetweenActors_Distance, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue);
	void OnRep_HealthInfo();
	void HandlePawnUnconverted(class AFortPawn* UnconvertedPawn);
	void HandlePawnConverted(class AFortPawn* InstigatorPawn, class AFortPawn* ConvertedPawn, uint8 CallFunc_GetActorTeam_ReturnValue);
	void UpdateConvertIndicator(bool CallFunc_HasAuthority_ReturnValue, class AFortPlayerController* CallFunc_GetFirstLocalFortPlayerController_ReturnValue, uint8 CallFunc_GetActorTeam_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void StartHealthBar();
	void StartUpdatingHealthWidget();
	void StopUpdatingHealthWidget();
	void PawnHealthChanged();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void NPCSetupHealthBarOnDeath();
	void WidgetVisibilityChanged(bool bVisible);
	void NPCTandemDisableHealthBar();
	void NPCTandemEnableHealthBars();
	void EnableHiredTandemHealthBar();
	void EnableTandemHealthBar();
	void ExecuteUbergraph_BP_PlayerPawn_Tandem(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UNPCStatusWidget_AIBoss_C* K2Node_DynamicCast_AsNPCStatus_Widget_AIBoss, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetHealth_ReturnValue, float CallFunc_GetMaxHealth_ReturnValue, float CallFunc_GetShield_ReturnValue, double CallFunc_SafeDivide_ReturnValue, float CallFunc_GetMaxShield_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, double CallFunc_SafeDivide_ReturnValue_1, const struct FStruct_NPC_HealthInfo& K2Node_MakeStruct_Struct_NPC_HealthInfo, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AFortPawn* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, bool CallFunc_IsValid_ReturnValue_1, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1, class UNPCStatusWidget_AIBoss_C* K2Node_DynamicCast_AsNPCStatus_Widget_AIBoss_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool K2Node_CustomEvent_bVisible, bool CallFunc_IsValid_ReturnValue_3, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_2, class UNPCStatusWidget_AIBoss_C* K2Node_DynamicCast_AsNPCStatus_Widget_AIBoss_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Greater_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_GetValueAsBool_ReturnValue, bool CallFunc_GetValueAsBool_ReturnValue_1, bool CallFunc_GetValueAsBool_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_4, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_3, class UNPCStatusWidget_AIBoss_C* K2Node_DynamicCast_AsNPCStatus_Widget_AIBoss_3, bool K2Node_DynamicCast_bSuccess_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, double CallFunc_SafeDivide_A_ImplicitCast, double CallFunc_SafeDivide_B_ImplicitCast, double K2Node_MakeStruct_MaxHealth_6_7D7BEF7841B13FB96D2578989CF135BB_ImplicitCast, double CallFunc_SafeDivide_A_ImplicitCast_1, double CallFunc_SafeDivide_B_ImplicitCast_1, double K2Node_MakeStruct_MaxShield_9_F923E4444E2E476C56FB0E9D9D2F7846_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
