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

// 0xB0 (0xAB0 - 0xA00)
// BlueprintGeneratedClass StoreCamera_Blueprint.StoreCamera_Blueprint_C
class AStoreCamera_Blueprint_C : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA00(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Mesh_DarkenBG;                                     // 0xA08(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                      CameraPlaceholderGround;                           // 0xA10(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        ChoicePack_NewTrack_0_ACA3841D4D5084BE3482FA8EBB7CE9C0; // 0xA18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ChoicePack__Direction_ACA3841D4D5084BE3482FA8EBB7CE9C0; // 0xA1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4051[0x3];                                     // Fixing Size After Last Property..
	class UTimelineComponent*                    ChoicePack;                                        // 0xA20(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_NewTrack_0_6555812E4B246E6144D3C99FC49F7FE9; // 0xA28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_6555812E4B246E6144D3C99FC49F7FE9; // 0xA2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4052[0x3];                                     // Fixing Size After Last Property..
	class UTimelineComponent*                    Timeline_0;                                        // 0xA30(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CameraGroundLoc;                                   // 0xA38(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CameraGroundRot;                                   // 0xA50(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               CameraOriginalLoc;                                 // 0xA68(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CameraOriginalRot;                                 // 0xA80(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         CameraInStartPos;                                  // 0xA98(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4053[0x7];                                     // Fixing Size After Last Property..
	class AStorePinataMaster_Parent_C*           PinataInLevel;                                     // 0xAA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AStoreCardReveal_Parent_C*             CardRevealInLevel;                                 // 0xAA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("StoreCamera_Blueprint_C");
		return Clss;
	}

	void UserConstructionScript(const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1);
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ChoicePack__FinishedFunc();
	void ChoicePack__UpdateFunc();
	void BP_OnActivated(class AFortPlayerController* PlayerController);
	void BP_OnDeactivated(class AFortPlayerController* PlayerController);
	void OpeningCameraTransition();
	void ResetCamera();
	void DarkenBGVisibility(bool Enable);
	void ChoicePackFOV_Out();
	void ChoicePackFOV_In();
	void ExecuteUbergraph_StoreCamera_Blueprint(int32 EntryPoint, FInterfaceProperty_ CallFunc_GetContextualTimeOfDayManager_ReturnValue, double CallFunc_Lerp_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class AFortPlayerController* K2Node_Event_PlayerController_1, class AFortPlayerController* K2Node_Event_PlayerController, double CallFunc_Lerp_ReturnValue_1, const struct FRotator& CallFunc_RLerp_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool K2Node_CustomEvent_Enable, TArray<class AStorePinataMaster_Parent_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AStorePinataMaster_Parent_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TArray<class AStoreCardReveal_Parent_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, class AStoreCardReveal_Parent_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<class ATVPostProcessBP_C*>& CallFunc_GetAllActorsOfClass_OutActors_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, class ATVPostProcessBP_C* CallFunc_Array_Get_Item_2, bool CallFunc_IsValid_ReturnValue_2, double CallFunc_Lerp_Alpha_ImplicitCast, float K2Node_VariableSet_FieldOfView_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast_1, float K2Node_VariableSet_FieldOfView_ImplicitCast_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
