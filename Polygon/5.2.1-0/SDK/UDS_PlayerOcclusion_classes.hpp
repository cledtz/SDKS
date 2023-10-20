#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9A (0x13A - 0xA0)
// BlueprintGeneratedClass UDS_PlayerOcclusion.UDS_PlayerOcclusion_C
class UUDS_PlayerOcclusion_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                               Occlusion_Location;                                // 0xA8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Max_Interior_Occlusion_Distance;                   // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETraceTypeQuery                   Occlusion_Trace_Channel;                           // 0xC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_242A[0x7];                                     // Fixing Size After Last Property 
	TArray<double>                               Target_Occlusion_Profile;                          // 0xD0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       Occlusion_Update_Period;                           // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<double>                               Current_Occlusion_Profile;                         // 0xE8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                               Rain_Velocity;                                     // 0xF8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Calculate_Rain_Occlusion;                          // 0x110(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Running;                                           // 0x111(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Acquire_Camera_Location;                           // 0x112(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_242C[0x5];                                     // Fixing Size After Last Property 
	double                                       Inverted_Global_Occlusion;                         // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Full_Occluded_Percent;                             // 0x120(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Not_Occluded_Percent;                              // 0x128(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Water_Level;                                       // 0x130(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Use_Water_Level;                                   // 0x138(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Force_Full_Occlusion;                              // 0x139(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUDS_PlayerOcclusion_C* GetDefaultObj();

	void Get_Occlusion_Location(class UPlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue);
	void Get_Starting_Occlusion_Profile(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerForNextTick_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue, float CallFunc_K2_SetTimer_Time_ImplicitCast);
	void Initialize(const struct FTimerHandle& CallFunc_K2_SetTimerForNextTick_ReturnValue);
	void Update_Current_Occlusion_Profile(double Interp_Speed_Multiplier, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_GetWorldDeltaSeconds_ReturnValue, double CallFunc_Array_Get_Item, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Array_Get_Item_1, double CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue, double CallFunc_FInterpTo_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1);
	void Update_Target_Occlusion_Profile(const TArray<class UActor*>& Actors_to_Ignore, int32 Directional_Hits, double Distance_Occluded, double Total_Occlusion, int32 Total_Hits, bool Overhead_Blocked, const TArray<double>& New_Occlusion_Profile, double Temp_real_Variable, int32 Temp_int_Variable, double CallFunc_Multiply_IntFloat_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable_1, double CallFunc_Multiply_IntFloat_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, bool CallFunc_LessEqual_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable_4, TArray<double>& K2Node_MakeArray_Array, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class UPawn* CallFunc_GetPlayerPawn_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, double CallFunc_SelectFloat_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Lerp_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_4, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_MapRangeClamped_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_5, TArray<struct FVector>& K2Node_MakeArray_Array_1, const struct FVector& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_6, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, int32 Temp_int_Variable_5, const struct FVector& CallFunc_Normal_ReturnValue_1, double CallFunc_Array_Get_Item_1, double CallFunc_Lerp_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_7, int32 Temp_int_Variable_6, int32 CallFunc_Array_Add_ReturnValue_4, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FHitResult& CallFunc_LineTraceSingle_OutHit_1, bool CallFunc_LineTraceSingle_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_5, TArray<struct FVector>& K2Node_MakeArray_Array_2, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_3, const struct FVector& CallFunc_Normal_ReturnValue_2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_4, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_4, const struct FHitResult& CallFunc_LineTraceSingle_OutHit_2, bool CallFunc_LineTraceSingle_ReturnValue_2, float CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_UDS_PlayerOcclusion(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}


