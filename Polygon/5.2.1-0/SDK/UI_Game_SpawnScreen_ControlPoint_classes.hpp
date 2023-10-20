#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x2B0 - 0x280)
// WidgetBlueprintGeneratedClass UI_Game_SpawnScreen_ControlPoint.UI_Game_SpawnScreen_ControlPoint_C
class UUI_Game_SpawnScreen_ControlPoint_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      IsCapture;                                         // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                ControlPointImage;                                 // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UControlPoint*                         ControlPointReference;                             // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UBP_PG_PlayerState_Game_C*             PlayerState;                                       // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UUI_Game_SpawnScreen_C*                SpawnScreen;                                       // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Game_SpawnScreen_ControlPoint_C* GetDefaultObj();

	void GetTargetReference(class UActor** Reference);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, bool CallFunc_IsValid_ReturnValue, enum class EGameMode CallFunc_Array_Get_Item, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TScriptInterface<class UBI_SpawnTarget_C> CallFunc_SetNewSpawnTarget_SpawnTarget_CastInput, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UBP_PG_PlayerState_Game_C* K2Node_DynamicCast_AsBP_PG_Player_State_Game, bool K2Node_DynamicCast_bSuccess, class UCharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class UPG_Game_Character* K2Node_DynamicCast_AsPG_Game_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1);
	void FindCoord(double Distance, double Degrees, struct FVector2D* NewVector, double CallFunc_DegSin_ReturnValue, double CallFunc_DegCos_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void FindAngle(const struct FVector2D& In, double* Degrees, class UCharacter* CallFunc_GetPlayerCharacter_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_DegAtan2_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_B_ImplicitCast);
	void SetName(bool K2Node_SwitchEnum_CmpSuccess);
	void SetAsSpawnTarget(bool IsSpawnTarget);
	void Construct();
	void OnCapturedTeam_Event(class UControlPoint* ControlPoint);
	void OnIsCapture_Event(class UControlPoint* ControlPoint);
	void OnSetTeam_Event();
	void ExecuteUbergraph_UI_Game_SpawnScreen_ControlPoint(int32 EntryPoint, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, bool Temp_bool_Variable_1, bool CallFunc_IsValid_ReturnValue, const struct FLinearColor& Temp_struct_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsSpawnTarget, bool CallFunc_IsValid_ReturnValue_1, class UControlPoint* K2Node_CustomEvent_ControlPoint_1, class UControlPoint* K2Node_CustomEvent_ControlPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PG_PlayerState_Game_C* K2Node_DynamicCast_AsBP_PG_Player_State_Game, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, const struct FLinearColor& K2Node_Select_Default, bool CallFunc_BooleanOR_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FLinearColor& K2Node_Select_Default_1, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue_1, class UBP_PG_PlayerController_Game_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Game, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


