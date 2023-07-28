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

// 0x8 (0x390 - 0x388)
// BlueprintGeneratedClass B_PlayerShieldDamage_CameraLensEffect.B_PlayerShieldDamage_CameraLensEffect_C
class UB_PlayerShieldDamage_CameraLensEffect_C : public UB_PlayerHealthDamage_CameraLensEffect_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x388(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_PlayerShieldDamage_CameraLensEffect_C");
		return Clss;
	}

	void PassParticle_Parameter_Shield(double NewParam);
	void ExecuteUbergraph_B_PlayerShieldDamage_CameraLensEffect(int32 EntryPoint, double K2Node_CustomEvent_NewParam, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, float CallFunc_SetFloatParameter_Param_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
