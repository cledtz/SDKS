#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x2D8 - 0x280)
// WidgetBlueprintGeneratedClass UI_Game_SpawnScreen_Player_SquadMember.UI_Game_SpawnScreen_Player_SquadMember_C
class UUI_Game_SpawnScreen_Player_SquadMember_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      CornerAnimation;                                   // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               Border_Corners;                                    // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PlayerIcon;                                        // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PG_Game_Character_C*               OtherCharacter;                                    // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UUI_Game_SpawnScreen_C*                SpawnScreen;                                       // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class E_SpawnTargetPermission           SpawnPermission;                                   // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30CF[0x7];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnSpawnPermission;                                 // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                       Timer_CheckAllowSpawnOn;                           // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CooldownToSpawn;                                   // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Game_SpawnScreen_Player_SquadMember_C* GetDefaultObj();

	void GetTargetReference(class UActor** Reference);
	void SetMarkerPosition(const struct FVector2D& CallFunc_ConvertWorldPositionToMap_Position, bool CallFunc_IsValid_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_SetRenderTransformAngle_Angle_ImplicitCast);
	void CheckAllowSpawnOn(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, double CallFunc_GetTimeSeconds_ReturnValue, class UBP_PG_PlayerState_Game_C* K2Node_DynamicCast_AsBP_PG_Player_State_Game, bool K2Node_DynamicCast_bSuccess, class UBP_PG_GameState_Game_C* CallFunc_GetGameStateBP_MyGameState, double CallFunc_Add_DoubleDouble_ReturnValue, class UControlPoint* CallFunc_Array_Get_Item, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_ContainsCharacter_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, enum class ETeam CallFunc_GetTeam_ReturnValue, bool Temp_bool_Variable, class UBP_PG_GameState_Game_C* CallFunc_GetGameStateBP_MyGameState_1, enum class ETeam CallFunc_GetTeam_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TArray<class UPG_PlayerState_Game*>& K2Node_Select_Default, int32 Temp_int_Loop_Counter_Variable_1, TArray<class UPG_PlayerState_Game*>& K2Node_LowEntry_LocalVariable_Value__Object, class UPG_PlayerState_Game* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class UBP_PG_Game_Character_C* K2Node_DynamicCast_AsBP_PG_Game_Character, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue, enum class ETeam CallFunc_GetTeam_ReturnValue_2, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, double CallFunc_GetRealTimeSeconds_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast);
	void SetSpawnPermission(enum class E_SpawnTargetPermission Permission, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void SelectPlayerAsSpawnTarget(bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetHealth_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UCharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UPG_Game_Character* K2Node_DynamicCast_AsPG_Game_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, TScriptInterface<class UBI_SpawnTarget_C> CallFunc_SetNewSpawnTarget_SpawnTarget_CastInput);
	class UWidget* Get_Player_Icon_Tool_Tip_Widget(class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUI_Game_SpawnScreen_Player_ToolTip_C* CallFunc_Create_ReturnValue);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void Construct();
	void SetAsSpawnTarget(bool IsSpawnTarget);
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void OnIsAlive_Event();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Destruct();
	void OnCooldownStarted_Event_0();
	void ExecuteUbergraph_UI_Game_SpawnScreen_Player_SquadMember(int32 EntryPoint, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FLinearColor& Temp_struct_Variable, class UBP_PG_PlayerController_Game_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Game, bool K2Node_DynamicCast_bSuccess, const struct FLinearColor& Temp_struct_Variable_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_Event_IsSpawnTarget, const struct FGeometry& K2Node_Event_MyGeometry_1, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FPointerEvent& K2Node_Event_MouseEvent, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, double CallFunc_GetTimeSeconds_ReturnValue, class UBP_PG_PlayerState_Game_C* K2Node_DynamicCast_AsBP_PG_Player_State_Game, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_2, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_Variable, double CallFunc_GetTimeSeconds_ReturnValue_1, const struct FLinearColor& K2Node_Select_Default, double CallFunc_Subtract_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, double CallFunc_GetWorldDeltaSeconds_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast_1);
	void OnSpawnPermission__DelegateSignature();
};

}


