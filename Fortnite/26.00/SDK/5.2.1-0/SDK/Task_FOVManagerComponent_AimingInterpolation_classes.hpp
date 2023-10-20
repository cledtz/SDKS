#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x100 - 0xA8)
// BlueprintGeneratedClass Task_FOVManagerComponent_AimingInterpolation.Task_FOVManagerComponent_AimingInterpolation_C
class UTask_FOVManagerComponent_AimingInterpolation_C : public UAction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWeaponComponent*                      WeaponComponent;                                   // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Delta_Time;                                        // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1930[0x4];                                     // Fixing Size After Last Property 
	class UItem_Module_Optic*                    Optic;                                             // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        StartCameraFOV;                                    // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StartMeshFOV;                                      // 0xCC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       EndCameraFOV;                                      // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       EndMeshFOV;                                        // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_FOVManagerComponent_Game_C*        FOVManagerComponent;                               // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         InitialAimingState;                                // 0xE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1931[0x7];                                     // Fixing Size After Last Property 
	class UCurveFloat*                           CurveFOV;                                          // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        CurveAlpha;                                        // 0xF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Aim_Down_Time_Multiplier;                          // 0xFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTask_FOVManagerComponent_AimingInterpolation_C* GetDefaultObj();

	void ReceiveActivate();
	void ReceiveTick(float DeltaTime);
	void ExecuteUbergraph_Task_FOVManagerComponent_AimingInterpolation(int32 EntryPoint, double Temp_real_Variable, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool Temp_bool_Variable, class UCurveFloat* Temp_object_Variable, class UCurveFloat* Temp_object_Variable_1, float K2Node_Event_DeltaTime, class UActorComponent* CallFunc_GetOwnerComponent_ReturnValue, class UBP_FOVManagerComponent_Game_C* K2Node_DynamicCast_AsBP_FOVManager_Component_Game, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsAiming_ReturnValue, bool CallFunc_IsValid_ReturnValue, double Temp_real_Variable_1, bool CallFunc_IsAiming_ReturnValue_1, bool CallFunc_IsAiming_ReturnValue_2, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class UCurveFloat* K2Node_Select_Default_1, float CallFunc_GetFloatValue_ReturnValue, double CallFunc_Lerp_ReturnValue, double CallFunc_FInterpTo_ReturnValue, double CallFunc_Lerp_ReturnValue_1, double CallFunc_FMin_ReturnValue, class UItem_Gun_General* CallFunc_GetCurrentGun_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast, double K2Node_VariableSet_EndCameraFOV_ImplicitCast, double K2Node_VariableSet_EndCameraFOV_ImplicitCast_1, double K2Node_VariableSet_EndMeshFOV_ImplicitCast, double CallFunc_FInterpTo_Current_ImplicitCast, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, double CallFunc_Lerp_A_ImplicitCast, float CallFunc_SetCameraFOV_newCameraFOV_ImplicitCast, double CallFunc_Lerp_A_ImplicitCast_1, double CallFunc_FInterpTo_DeltaTime_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast_1, float CallFunc_SetMeshFOV_newMeshFOV_ImplicitCast, float K2Node_VariableSet_AimingFOV_Alpha_ImplicitCast);
};

}


