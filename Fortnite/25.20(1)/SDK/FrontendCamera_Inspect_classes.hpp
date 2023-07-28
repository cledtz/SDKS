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

// 0x10 (0xA10 - 0xA00)
// BlueprintGeneratedClass FrontendCamera_Inspect.FrontendCamera_Inspect_C
class UFrontendCamera_Inspect_C : public UFortCameraBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA00(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                      LoginCamera_0;                                     // 0xA08(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FrontendCamera_Inspect_C");
		return Clss;
	}

	void BP_OnActivated(class UFortPlayerController* PlayerController);
	void BP_OnDeactivated(class UFortPlayerController* PlayerController);
	void ExecuteUbergraph_FrontendCamera_Inspect(int32 EntryPoint, FInterfaceProperty_ CallFunc_GetContextualTimeOfDayManager_ReturnValue, int32 Temp_int_Array_Index_Variable, class UFortPlayerController* K2Node_Event_PlayerController_1, class UFortGlobalUIContext* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, bool CallFunc_IsInZone_ReturnValue, TArray<class UTVPostProcessBP_C*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_Not_PreBool_ReturnValue, class UTVPostProcessBP_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TArray<class UVaultCharacterLightingBP_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, class UFortPlayerController* K2Node_Event_PlayerController, class UVaultCharacterLightingBP_C* CallFunc_Array_Get_Item_1, TArray<class UVaultCharacterLightingBP_C*>& CallFunc_GetAllActorsOfClass_OutActors_2, class UVaultCharacterLightingBP_C* CallFunc_Array_Get_Item_2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
