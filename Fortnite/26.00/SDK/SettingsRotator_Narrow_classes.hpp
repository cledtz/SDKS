#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x14E8 - 0x14D0)
// WidgetBlueprintGeneratedClass SettingsRotator_Narrow.SettingsRotator_Narrow_C
class USettingsRotator_Narrow_C : public UFortSettingsRotator
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x14D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      RotatorHover;                                      // 0x14D8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               Background;                                        // 0x14E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USettingsRotator_Narrow_C* GetDefaultObj();

	void BP_OnOptionsPopulated(int32 Count);
	void BP_OnOptionSelected(int32 Index);
	void BP_OnDefaultOptionSpecified(int32 DefaultOptionIndex);
	void OnHover_Animation();
	void OnUnHover_Animation();
	void ExecuteUbergraph_SettingsRotator_Narrow(int32 EntryPoint, int32 K2Node_Event_Count, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, int32 K2Node_Event_Index, double CallFunc_Conv_IntToDouble_ReturnValue_1, int32 K2Node_Event_DefaultOptionIndex, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_2);
};

}


