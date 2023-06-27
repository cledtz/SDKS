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

// 0x20 (0x2A8 - 0x288)
// BlueprintGeneratedClass B_PhysicsTree_Reporter.B_PhysicsTree_Reporter_C
class AB_PhysicsTree_Reporter_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x288(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       Scene;                                             // 0x290(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPhysicsLogAnalyticsStruct>    PhysicsLogData;                                    // 0x298(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_PhysicsTree_Reporter_C");
		return Clss;
	}

	void WrapString(const class FString& Prepend, const class FString& String, const class FString& Append, class FString* Result, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	void ReportTreeAnalytics(const TArray<class FString>& InstanceRowArray, const TArray<class FString>& TempStringArray, const class FString& TempString, const TArray<struct FFortAnalyticsEventAttribute>& AttributeArray, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_IsServer_ReturnValue, const class FString& CallFunc_JoinStringArray_ReturnValue, const class FString& CallFunc_WrapString_Result, const struct FFortAnalyticsEventAttribute& CallFunc_ConstructAnalyticsAttribute_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const class FString& CallFunc_JoinStringArray_ReturnValue_1, const class FString& CallFunc_WrapString_Result_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FPhysicsLogAnalyticsStruct& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_1, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_2, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_3, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_4, const class FString& CallFunc_Conv_VectorToString_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_5, const class FString& CallFunc_Conv_VectorToString_ReturnValue_1, class AFortGameStateAthena* CallFunc_GetGameStateAthena_ReturnValue, TArray<class FString>& K2Node_MakeArray_Array, const class FString& CallFunc_GetGameSessionID_ReturnValue, const class FString& CallFunc_Array_Get_Item_1, const struct FFortAnalyticsEventAttribute& CallFunc_ConstructAnalyticsAttribute_ReturnValue_1, const class FString& CallFunc_WrapString_Result_2, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_1, class AFortGameStateAthena* CallFunc_GetGameStateAthena_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class FName CallFunc_GetCurrentPlaylistName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const struct FFortAnalyticsEventAttribute& CallFunc_ConstructAnalyticsAttribute_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_4, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_1, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_2, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_3, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_4, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_5);
	void GetLogDataByInstanceName(const class FString& InstanceName, struct FPhysicsLogAnalyticsStruct* Data, int32* Index, bool* Success, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FPhysicsLogAnalyticsStruct& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue);
	void ReportDamageInflicted(const class FString& InstanceName, enum class EPhysicsLogAnalytics_DamageCategory DamageCategory, double Amount, const TArray<double>& DamageCounts, int32 CallFunc_Conv_ByteToInt_ReturnValue, const struct FPhysicsLogAnalyticsStruct& CallFunc_GetLogDataByInstanceName_Data, int32 CallFunc_GetLogDataByInstanceName_Index, bool CallFunc_GetLogDataByInstanceName_Success, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<double>& K2Node_MakeArray_Array, double CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, double CallFunc_Array_Get_Item_1, double CallFunc_Array_Get_Item_2, double CallFunc_Array_Get_Item_3, double CallFunc_Array_Get_Item_4, double CallFunc_Array_Get_Item_5, double CallFunc_Array_Get_Item_6, const struct FPhysicsLogAnalyticsStruct& K2Node_MakeStruct_PhysicsLogAnalyticsStruct, double CallFunc_Array_Get_Item_7, double CallFunc_Array_Get_Item_8, const struct FPhysicsLogAnalyticsStruct& K2Node_MakeStruct_PhysicsLogAnalyticsStruct_1, int32 Temp_int_Variable, int32 CallFunc_Array_Add_ReturnValue, double K2Node_Select_Default, double CallFunc_Add_DoubleDouble_ReturnValue, double K2Node_Select_Option_0_ImplicitCast, double K2Node_Select_Option_1_ImplicitCast, double K2Node_Select_Option_2_ImplicitCast, double K2Node_Select_Option_3_ImplicitCast, float K2Node_MakeStruct_DamageToAI_26_9671D0A943425BB2EC73159C0B19C99D_ImplicitCast, float K2Node_MakeStruct_DamageToAI_26_9671D0A943425BB2EC73159C0B19C99D_ImplicitCast_1, float K2Node_MakeStruct_DamageToVehicles_24_69A07F714B43DF853CA180B441A6A29C_ImplicitCast, float K2Node_MakeStruct_DamageToStructures_22_636FABDE409E1A51BAF808863B05D213_ImplicitCast, float K2Node_MakeStruct_DamageToPlayers_20_F701392440AAC7AC33A8B2BCAEB3C5D0_ImplicitCast, float K2Node_MakeStruct_DamageToVehicles_24_69A07F714B43DF853CA180B441A6A29C_ImplicitCast_1, float K2Node_MakeStruct_DamageToStructures_22_636FABDE409E1A51BAF808863B05D213_ImplicitCast_1, float K2Node_MakeStruct_DamageToPlayers_20_F701392440AAC7AC33A8B2BCAEB3C5D0_ImplicitCast_1);
	void ReportLogDestroyed(const class FString& Instance_Name, const struct FVector& Location, const struct FPhysicsLogAnalyticsStruct& CallFunc_GetLogDataByInstanceName_Data, int32 CallFunc_GetLogDataByInstanceName_Index, bool CallFunc_GetLogDataByInstanceName_Success, class AFortGameStateAthena* CallFunc_GetGameStateAthena_ReturnValue, float CallFunc_GetMatchTime_ReturnValue, const struct FPhysicsLogAnalyticsStruct& K2Node_MakeStruct_PhysicsLogAnalyticsStruct, class AFortGameStateAthena* CallFunc_GetGameStateAthena_ReturnValue_1, float CallFunc_GetMatchTime_ReturnValue_1, const struct FPhysicsLogAnalyticsStruct& K2Node_MakeStruct_PhysicsLogAnalyticsStruct_1, int32 CallFunc_Array_Add_ReturnValue);
	void ReportLogFelled(const class FString& Instance_Name, const class FString& Felled_By, const struct FVector& Location, const struct FPhysicsLogAnalyticsStruct& CallFunc_GetLogDataByInstanceName_Data, int32 CallFunc_GetLogDataByInstanceName_Index, bool CallFunc_GetLogDataByInstanceName_Success, class AFortGameStateAthena* CallFunc_GetGameStateAthena_ReturnValue, float CallFunc_GetMatchTime_ReturnValue, class AFortGameStateAthena* CallFunc_GetGameStateAthena_ReturnValue_1, const struct FPhysicsLogAnalyticsStruct& K2Node_MakeStruct_PhysicsLogAnalyticsStruct, float CallFunc_GetMatchTime_ReturnValue_1, const struct FPhysicsLogAnalyticsStruct& K2Node_MakeStruct_PhysicsLogAnalyticsStruct_1, int32 CallFunc_Array_Add_ReturnValue);
	void OnReady_FFF47C8E40A1C412A19C8B8828BD5787(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags);
	void ReceiveBeginPlay();
	void EndMatchReport();
	void PhaseChanged(enum class EAthenaGamePhase GamePhase);
	void ExecuteUbergraph_B_PhysicsTree_Reporter(int32 EntryPoint, class AFortGameStateAthena* K2Node_CustomEvent_GameState, class UFortPlaylist* K2Node_CustomEvent_Playlist, const struct FGameplayTagContainer& K2Node_CustomEvent_PlaylistContextTags, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayTagContainer& Temp_struct_Variable, class UFortPlaylist* Temp_object_Variable, class AFortGameStateAthena* Temp_object_Variable_1, class UFortAsyncAction_CurrentPlaylistReady* CallFunc_PlaylistDataReadyAsync_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AFortGameStateAthena* CallFunc_GetGameStateAthena_ReturnValue, bool CallFunc_IsServer_ReturnValue, enum class EAthenaGamePhase K2Node_CustomEvent_GamePhase, bool K2Node_SwitchEnum_CmpSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
