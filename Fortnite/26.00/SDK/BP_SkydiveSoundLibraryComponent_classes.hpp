#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x1B8 - 0x198)
// BlueprintGeneratedClass BP_SkydiveSoundLibraryComponent.BP_SkydiveSoundLibraryComponent_C
class UBP_SkydiveSoundLibraryComponent_C : public UFortSkydiveSoundLibraryComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x198(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                          SkydiveEventTag;                                   // 0x1A0(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94E[0x4];                                      // Fixing Size After Last Property 
	TArray<class UAudioComponent*>               Components;                                        // 0x1A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UBP_SkydiveSoundLibraryComponent_C* GetDefaultObj();

	void OnEventPlayed(const struct FGameplayTag& InEventName, int32 Temp_int_Variable, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, class UAudioComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class UAudioParameterControllerInterface> CallFunc_SetTriggerParameter_self_CastInput, int32 CallFunc_Array_Length_ReturnValue_1, class UAudioComponent* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, TScriptInterface<class UAudioParameterControllerInterface> CallFunc_SetTriggerParameter_self_CastInput_1, int32 CallFunc_Array_Length_ReturnValue_2, class UAudioComponent* CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_2, TScriptInterface<class UAudioParameterControllerInterface> CallFunc_SetTriggerParameter_self_CastInput_2);
	void OnSoundPlayed(const struct FGameplayTag& InEventName, class UAudioComponent* InComponent, int32 CallFunc_Array_Add_ReturnValue);
	void OnSoundStopped(const struct FGameplayTag& InEventName, class UAudioComponent* InComponent, bool* bStopped, class UAudioComponent* Temp_object_Variable, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, TScriptInterface<class UAudioParameterControllerInterface> CallFunc_SetTriggerParameter_self_CastInput, bool CallFunc_Array_RemoveItem_ReturnValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SkydiveSoundLibraryComponent(int32 EntryPoint, class USoundLibraryContext* CallFunc_GetContext_ReturnValue, class UFortSoundLibraryContext* K2Node_DynamicCast_AsFort_Sound_Library_Context, bool K2Node_DynamicCast_bSuccess);
};

}


