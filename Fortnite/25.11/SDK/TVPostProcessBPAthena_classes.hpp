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

// 0x2F (0x2D0 - 0x2A1)
// BlueprintGeneratedClass TVPostProcessBPAthena.TVPostProcessBPAthena_C
class ATVPostProcessBPAthena_C : public ATVPostProcessBP_C
{
public:
	uint8                                        Pad_9A62[0x7];                                     // Fixing Size After Last Property..
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                 FullScreenTVPP_OnlyMaterialModified;               // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        FrontEndCameraSwitchFadeAthena_SwipeLines_Animation_8828A7EA43DFA9153F986F805918F9F7; // 0x2B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FrontEndCameraSwitchFadeAthena_PostProcessVisibility_8828A7EA43DFA9153F986F805918F9F7; // 0x2BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                FrontEndCameraSwitchFadeAthena__Direction_8828A7EA43DFA9153F986F805918F9F7; // 0x2C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A63[0x7];                                     // Fixing Size After Last Property..
	class UTimelineComponent*                    FrontEndCameraSwitchFadeAthena;                    // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TVPostProcessBPAthena_C");
		return Clss;
	}

	void IsEnabledForCurrentSubgame(bool* bEnabled, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void FrontEndCameraSwitchFadeAthena__FinishedFunc();
	void FrontEndCameraSwitchFadeAthena__UpdateFunc();
	void ExecuteCameraSwitch();
	void Camera_DisableEffects();
	void ExecuteUbergraph_TVPostProcessBPAthena(int32 EntryPoint, double CallFunc_GetUnpausedTimeSeconds_ReturnValue, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
