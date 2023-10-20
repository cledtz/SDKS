#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x2B8 - 0x280)
// WidgetBlueprintGeneratedClass UI_CaptureProcess.UI_CaptureProcess_C
class UUI_CaptureProcess_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_Process;                                    // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Lines;                                       // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_Process;                               // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControlPointMarker_C*              UI_ControlPointMarker;                             // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UControlPoint*                         ControlPointReference;                             // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UBP_PG_PlayerState_Game_C*             PlayerState;                                       // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_CaptureProcess_C* GetDefaultObj();

	void GetCapturePointsByTeam(enum class ETeam Team, int32* MyTeam, int32* OpponentTeam, bool K2Node_SwitchEnum_CmpSuccess);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_UI_CaptureProcess(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, int32 CallFunc_Max_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PG_PlayerState_Game_C* K2Node_DynamicCast_AsBP_PG_Player_State_Game, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetCapturePointsByTeam_MyTeam, int32 CallFunc_GetCapturePointsByTeam_OpponentTeam, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_GetCapturePointsByTeam_MyTeam_1, int32 CallFunc_GetCapturePointsByTeam_OpponentTeam_1, bool CallFunc_Greater_IntInt_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, double CallFunc_GetWorldDeltaSeconds_ReturnValue, double CallFunc_FInterpTo_ReturnValue, int32 CallFunc_Max_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_FInterpTo_Current_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast_1);
};

}


