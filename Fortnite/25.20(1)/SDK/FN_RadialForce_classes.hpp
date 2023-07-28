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

// 0xB4 (0x34C - 0x298)
// BlueprintGeneratedClass FN_RadialForce.FN_RadialForce_C
class UFN_RadialForce_C : public UFieldSystemActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UOperatorField*                        DistanceFadMult;                                   // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URadialFalloff*                        DistanceFalloff;                                   // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWaveScalar*                           DecayScalar;                                       // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UOperatorField*                        DecayMult;                                         // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWaveScalar*                           RadialFalloffWave;                                 // 0x2C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UOperatorField*                        RadialVecMultiplyRadialFallOff;                    // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URadialVector*                         RadialVector;                                      // 0x2D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       Wave_Period;                                       // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Force_Duration;                                    // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Radius;                                            // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Magnitude;                                         // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       PlayRate;                                          // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       Scale;                                             // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Impact_Time;                                       // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Period;                                            // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       WaveLength;                                        // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Time_Decay;                                        // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class EFieldFalloffType                 Falloff_Type;                                      // 0x328(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_960B[0x7];                                     // Fixing Size After Last Property..
	double                                       Expansion;                                         // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Impact_Radius;                                     // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       Strength;                                          // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        DelayTime;                                         // 0x348(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FN_RadialForce_C");
		return Clss;
	}

	struct FTransform NewFunction_0(double Roll, double Scale, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_FN_RadialForce(int32 EntryPoint, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, double CallFunc_GetGameTimeInSeconds_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, class UWaveScalar* CallFunc_SetWaveScalar_ReturnValue, class UWaveScalar* CallFunc_SetWaveScalar_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_3, class URadialFalloff* CallFunc_SetRadialFalloff_ReturnValue, class UOperatorField* CallFunc_SetOperatorField_ReturnValue, class URadialVector* CallFunc_SetRadialVector_ReturnValue, double CallFunc_MultiplyByPi_ReturnValue, class UOperatorField* CallFunc_SetOperatorField_ReturnValue_1, class UOperatorField* CallFunc_SetOperatorField_ReturnValue_2, float CallFunc_SetWaveScalar_Period_ImplicitCast, float CallFunc_SetWaveScalar_Time_ImplicitCast, float CallFunc_SetWaveScalar_Time_ImplicitCast_1, float CallFunc_SetWaveScalar_Period_ImplicitCast_1, float CallFunc_SetWaveScalar_Wavelength_ImplicitCast, float CallFunc_SetRadialFalloff_Radius_ImplicitCast, float CallFunc_SetRadialVector_Magnitude_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
