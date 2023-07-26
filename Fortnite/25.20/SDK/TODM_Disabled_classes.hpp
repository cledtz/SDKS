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

// 0x8 (0x12E8 - 0x12E0)
// BlueprintGeneratedClass TODM_Disabled.TODM_Disabled_C
class ATODM_Disabled_C : public AMASTER_TODM_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x12E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TODM_Disabled_C");
		return Clss;
	}

	void SetReflectionQualityMPC(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetReflectionQuality_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast);
	void SetGlobalIlluminationMPC(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetGlobalIlluminationQuality_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_Clamp_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1);
	void UserConstructionScript();
	void DisableLightAndFog(bool Enable);
	void ReceiveBeginPlay();
	void Update_Scalabilty_Settings();
	void ExecuteUbergraph_TODM_Disabled(int32 EntryPoint, bool K2Node_CustomEvent_Enable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, double CallFunc_Conv_BoolToDouble_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
