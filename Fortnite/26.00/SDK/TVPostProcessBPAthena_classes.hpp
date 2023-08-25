#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2F (0x2D8 - 0x2A9)
// BlueprintGeneratedClass TVPostProcessBPAthena.TVPostProcessBPAthena_C
class UTVPostProcessBPAthena_C : public UTVPostProcessBP_C
{
public:
	uint8                                        Pad_F2A[0x7];                                      // Fixing Size After Last Property 
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                 FullScreenTVPPMinusOnlyMaterialModified;           // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        FrontEndCameraSwitchFadeAthena_SwipeLines_Animation_8828A7EA43DFA9153F986F805918F9F7; // 0x2C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FrontEndCameraSwitchFadeAthena_PostProcessVisibility_8828A7EA43DFA9153F986F805918F9F7; // 0x2C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                FrontEndCameraSwitchFadeAthena__Direction_8828A7EA43DFA9153F986F805918F9F7; // 0x2C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F2B[0x7];                                      // Fixing Size After Last Property 
	class UTimelineComponent*                    FrontEndCameraSwitchFadeAthena;                    // 0x2D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTVPostProcessBPAthena_C* GetDefaultObj();

	void IsEnabledForCurrentSubgame(bool* bEnabled, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void FrontEndCameraSwitchFadeAthena__FinishedFunc();
	void FrontEndCameraSwitchFadeAthena__UpdateFunc();
	void ExecuteCameraSwitch();
	void Camera_DisableEffects();
	void ExecuteUbergraph_TVPostProcessBPAthena(int32 EntryPoint, double CallFunc_GetUnpausedTimeSeconds_ReturnValue, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast);
};

}


