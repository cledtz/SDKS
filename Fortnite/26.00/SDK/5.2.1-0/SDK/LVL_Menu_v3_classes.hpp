#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x2B0 - 0x298)
// BlueprintGeneratedClass LVL_Menu_v3.LVL_Menu_v3_C
class ULVL_Menu_v3_C : public ULevelScriptActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USpotLight*                            SpotLight_7_ExecuteUbergraph_LVL_Menu_v3_RefProperty; // 0x2A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USpotLight*                            SpotLight_6_ExecuteUbergraph_LVL_Menu_v3_RefProperty; // 0x2A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ULVL_Menu_v3_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ChangeLobbyFPSLimit(int32 NewValue);
	void ChangeShadowQualitySettings(int32 NewValue);
	void ExecuteUbergraph_LVL_Menu_v3(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, int32 K2Node_CustomEvent_NewValue_1, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, int32 K2Node_CustomEvent_NewValue, bool CallFunc_Greater_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
};

}


