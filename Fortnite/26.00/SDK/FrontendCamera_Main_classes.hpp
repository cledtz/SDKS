#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xA10 - 0xA00)
// BlueprintGeneratedClass FrontendCamera_Main.FrontendCamera_Main_C
class UFrontendCamera_Main_C : public UFortCameraBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA00(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                      LoginCamera_0;                                     // 0xA08(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UFrontendCamera_Main_C* GetDefaultObj();

	void BP_OnActivated(class UFortPlayerController* PlayerController);
	void ExecuteUbergraph_FrontendCamera_Main(int32 EntryPoint, TScriptInterface<class UFortTimeOfDayManagerInterface> CallFunc_GetContextualTimeOfDayManager_ReturnValue, int32 Temp_int_Array_Index_Variable, class UFortPlayerController* K2Node_Event_PlayerController, TArray<class UTVPostProcessBP_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 Temp_int_Loop_Counter_Variable, class UTVPostProcessBP_C* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}


