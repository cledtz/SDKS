#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xC0 - 0xA0)
// BlueprintGeneratedClass B_GasPump_Valet_Component.B_GasPump_Valet_Component_C
class UB_GasPump_Valet_Component_C : public UGameFrameworkComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                  Gas_Pump_Icon_Enabled;                             // 0xA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9DF7[0x4];                                     // Fixing Size After Last Property
	class UClass*                                Gas_Pump_IndicatorManager_Class;                   // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UValet_GasPumpIndicatorManagerV2_C*    Gas_Pump_IndicatorManager;                         // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_GasPump_Valet_Component_C");
		return Clss;
	}

	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_B_GasPump_Valet_Component(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult, float CallFunc_EvaluateCurveTableRow_OutXY, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EEndPlayReason K2Node_Event_EndPlayReason, class UActor* CallFunc_GetOwner_ReturnValue_1, class UFortGameStateAthena* CallFunc_GetGameStateAthena_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_1, class UFortGameStateComponent* CallFunc_GetComponentByClass_ReturnValue, class UValet_GasPumpIndicatorManagerV2_C* K2Node_DynamicCast_AsValet_Gas_Pump_Indicator_Manager_V2, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_3, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
