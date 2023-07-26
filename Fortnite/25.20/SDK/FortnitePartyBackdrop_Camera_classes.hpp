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

// 0x71 (0xA71 - 0xA00)
// BlueprintGeneratedClass FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C
class AFortnitePartyBackdrop_Camera_C : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA00(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                       Arrow;                                             // 0xA08(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            SavedTransform;                                    // 0xA10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Active;                                            // 0xA70(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortnitePartyBackdrop_Camera_C");
		return Clss;
	}

	void BP_OnActivated(class AFortPlayerController* PlayerController);
	void BP_OnDeactivated(class AFortPlayerController* PlayerController);
	void Reset_Location();
	void ManualActivate();
	void ExecuteUbergraph_FortnitePartyBackdrop_Camera(int32 EntryPoint, FInterfaceProperty_ CallFunc_GetContextualTimeOfDayManager_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, class AFortPlayerController* K2Node_Event_PlayerController_1, TArray<class ATVPostProcessBP_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 Temp_int_Array_Index_Variable_2, class ATVPostProcessBP_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AFortPlayerController* K2Node_Event_PlayerController, TArray<class ABP_FortniteLobbyLightSwitcher_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, class ABP_FortniteLobbyLightSwitcher_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, TArray<class ABP_FortniteLobbyLightSwitcher_C*>& CallFunc_GetAllActorsOfClass_OutActors_2, class ABP_FortniteLobbyLightSwitcher_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Greater_IntInt_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
