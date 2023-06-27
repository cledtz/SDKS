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

// 0x8 (0x378 - 0x370)
// BlueprintGeneratedClass B_PlayerHealthDamage_CameraLensEffect.B_PlayerHealthDamage_CameraLensEffect_C
class AB_PlayerHealthDamage_CameraLensEffect_C : public AEmitterCameraLensEffectBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_PlayerHealthDamage_CameraLensEffect_C");
		return Clss;
	}

	void PassParticle_Parameter(double NewParam, bool First_Hit);
	void ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect(int32 EntryPoint, double K2Node_CustomEvent_NewParam, bool K2Node_CustomEvent_First_Hit, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, float CallFunc_SetFloatParameter_Param_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
