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

// 0x1C0 (0x730 - 0x570)
// BlueprintGeneratedClass BP_FluidSim_FN.BP_FluidSim_FN_C
class ABP_FluidSim_FN_C : public ABP_FluidSim_01_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x570(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FFluidForceDynamic                    BoatForceSettings;                                 // 0x578(0x70)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	struct FFluidForceDynamic                    PlayerForceSettings;                               // 0x5E8(0x70)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	struct FFluidForceDynamic                    MechForceSettings;                                 // 0x658(0x70)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class AFortPawn*>                     RelevantFortPawns;                                 // 0x6C8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                         Use_FN_Pawn_Forces;                                // 0x6D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9F80[0x7];                                     // Fixing Size After Last Property..
	TMap<struct FGameplayTag, struct FFluidForceDynamic> VehicleTypeMap;                                    // 0x6E0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_FluidSim_FN_C");
		return Clss;
	}

	void GetFortnitePawnForces(TMap<class UActorComponent*, struct FFluidForceDynamicPerInstanceData> PreviousDynamicForces, const TArray<class AFortPawn*>& RelevantPawns, int32 LastCheckedIndex, const TArray<class AFortPawn*>& NearbyPawns, bool Temp_bool_True_if_break_was_hit_Variable, TArray<struct FGameplayTag>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_GetShallowWaterMaxDynamicForces_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, const struct FGameplayTag& CallFunc_Array_Get_Item, const struct FFluidForceDynamic& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class AFortPawn* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue_1, FInterfaceProperty_ CallFunc_GetVehicleUInterface_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetVehicleTags_ReturnValue, bool CallFunc_IsInWater_ReturnValue, bool CallFunc_HasTag_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshComponent_ReturnValue, const struct FFluidForceDynamicPerInstanceData& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_IsInVehicle_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FFluidForceDynamicPerInstanceData& CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, class AFortCharacterVehicle* K2Node_DynamicCast_AsFort_Character_Vehicle, bool K2Node_DynamicCast_bSuccess_2, class AFortWaterBodyActor* CallFunc_GetCurrentWaterBody_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FWaterSurfaceInfo& CallFunc_GetWaterSurfaceInfoStruct_OutWaterSurfaceInfo, int32 CallFunc_Add_IntInt_ReturnValue_1, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FFluidForceDynamicPerInstanceData& K2Node_SetFieldsInStruct_StructOut, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, class AFortPawn* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_2, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsDrivingVehicle_ReturnValue, int32 CallFunc_GetSignificanceLOD_ReturnValue, class APawn* CallFunc_GetLocalPawn_Pawn, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_3, bool K2Node_DynamicCast_bSuccess_4, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, TArray<class AFortPawn*>& CallFunc_GetFortPawnsInRange_OutFortPawns, float K2Node_SetFieldsInStruct_WaterLevel_34_A4E505D148073B883CA7B1B09A3E34A8_ImplicitCast, float CallFunc_GetFortPawnsInRange_Range_ImplicitCast);
	void GetLocalPawn(class APawn** Pawn, class AFortPlayerController* CallFunc_GetFirstLocalFortPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue);
	void GetPlayerPawnForces();
	void ExecuteUbergraph_BP_FluidSim_FN(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
