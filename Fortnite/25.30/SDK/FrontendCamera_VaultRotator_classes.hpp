#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xA18 - 0xA00)
// BlueprintGeneratedClass FrontendCamera_VaultRotator.FrontendCamera_VaultRotator_C
class UFrontendCamera_VaultRotator_C : public UFortCameraBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA00(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                      LoginCamera_0;                                     // 0xA08(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UVaultRotator_C*                       ActiveVaultRotator;                                // 0xA10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FrontendCamera_VaultRotator_C");
		return Clss;
	}

	void SetVaultRotatorLighting(class FName ItemRotatorTag, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UVaultWorld_C*>& CallFunc_GetAllActorsOfClass_OutActors, class UVaultWorld_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UVaultRotator_C* CallFunc_GetVaultRotator_VaultRotator, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue);
	void BP_OnActivated(class UFortPlayerController* PlayerController);
	void BP_OnDeactivated(class UFortPlayerController* PlayerController);
	void ExecuteUbergraph_FrontendCamera_VaultRotator(int32 EntryPoint, TScriptInterface<class UFortTimeOfDayManagerInterface> CallFunc_GetContextualTimeOfDayManager_ReturnValue, int32 Temp_int_Array_Index_Variable, class UFortPlayerController* K2Node_Event_PlayerController_1, TArray<class UTVPostProcessBP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class UFortPlayerController* K2Node_Event_PlayerController, class UTVPostProcessBP_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
