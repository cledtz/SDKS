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

// 0x3C0 (0x800 - 0x440)
// BlueprintGeneratedClass B_SoundIndicator_01.B_SoundIndicator_01_C
class AB_SoundIndicator_01_C : public AFortSoundCameraLensEffect
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x440(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FRuntimeFloatCurve                    Gunshot_Falloff_Long_Range;                        // 0x448(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                    Chest_Falloff;                                     // 0x4D0(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                    Footsteps_Falloff;                                 // 0x558(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                    Gunshot_Falloff_Mid_Range;                         // 0x5E0(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                    Gunshot_Falloff_Melee;                             // 0x668(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                    Glider_Falloff;                                    // 0x6F0(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                    Plane_Falloff;                                     // 0x778(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_SoundIndicator_01_C");
		return Clss;
	}

	struct FRuntimeFloatCurve GetStrengthCurveForActiveType(enum class EFortSoundIndicatorTypes Temp_byte_Variable, const struct FRuntimeFloatCurve& Temp_struct_Variable, const struct FRuntimeFloatCurve& CallFunc_GetWeaponCurve_ReturnValue, const struct FRuntimeFloatCurve& K2Node_Select_Default);
	struct FLinearColor GetDefaultTint(enum class EFortSoundIndicatorTypes Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, const struct FLinearColor& Temp_struct_Variable_4, const struct FLinearColor& Temp_struct_Variable_5, const struct FLinearColor& Temp_struct_Variable_6, const struct FLinearColor& Temp_struct_Variable_7, const struct FLinearColor& Temp_struct_Variable_8, const struct FLinearColor& K2Node_Select_Default);
	class UTexture* GetDefaultIcon(enum class EFortSoundIndicatorTypes Temp_byte_Variable, class UTexture* Temp_object_Variable, class UTexture* Temp_object_Variable_1, class UTexture* Temp_object_Variable_2, class UTexture* Temp_object_Variable_3, class UTexture* Temp_object_Variable_4, class UTexture* Temp_object_Variable_5, class UTexture* Temp_object_Variable_6, class UTexture* Temp_object_Variable_7, class UTexture* Temp_object_Variable_8, class UTexture* K2Node_Select_Default);
	struct FRuntimeFloatCurve GetWeaponCurve(bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, const struct FRuntimeFloatCurve& K2Node_Select_Default, const struct FRuntimeFloatCurve& K2Node_Select_Default_1, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast);
	void ExecuteUbergraph_B_SoundIndicator_01(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
