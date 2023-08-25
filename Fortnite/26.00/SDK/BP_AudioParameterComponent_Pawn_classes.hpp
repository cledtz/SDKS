#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x138 - 0xF0)
// BlueprintGeneratedClass BP_AudioParameterComponent_Pawn.BP_AudioParameterComponent_Pawn_C
class UBP_AudioParameterComponent_Pawn_C : public UFortAudioParameterComponent_Pawn
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UActor*                                LocalViewTarget;                                   // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAudioParameterQueryData>      QueryAudioParams;                                  // 0x100(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bDebugEnabled;                                     // 0x110(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsInWater;                                         // 0x111(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F92[0x6];                                     // Fixing Size After Last Property 
	class UFortPlayerPawn*                       LocalPlayerPawnTarget;                             // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       WaterDepthValue;                                   // 0x120(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPlayerWaterDepthEnum             PlayerWaterDepth;                                  // 0x128(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPlayerWaterDepthEnum             CurrentWaterDepth;                                 // 0x129(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WaterDepthChanged;                                 // 0x12A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F93[0x5];                                     // Fixing Size After Last Property 
	class UAudioComponent*                       WaterFoleyAudio;                                   // 0x130(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AudioParameterComponent_Pawn_C* GetDefaultObj();

	void OnWaterDepthSwitch(enum class EPlayerWaterDepthEnum Temp_byte_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, int32 K2Node_Select_Default, TScriptInterface<class UAudioParameterControllerInterface> CallFunc_SetIntParameter_self_CastInput, bool CallFunc_IsCrouching_ReturnValue, TScriptInterface<class UAudioParameterControllerInterface> CallFunc_SetBoolParameter_self_CastInput);
	void OnWaterUpdate(float CallFunc_GetWaterDepthValue_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_IsSurfaceSwimming_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_1);
	void Movement_Mode_Change(class UCharacter* Character, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	void OnExitWater(class UFortPlayerPawn* FortPlayerPawn, bool bPawnIsOutsideOfAllWaterBodies, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void OnEnterWater(class UFortPlayerPawn* FortPlayerPawn, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void UpdatePlayerInWaterCheck(float CallFunc_GetWaterDepthValue_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast);
	float GetWaterDepthValue(double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_GetWaterImmersionDepth_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_FInterpTo_ReturnValue, float K2Node_FunctionResult_ReturnValue_ImplicitCast, double CallFunc_SelectFloat_A_ImplicitCast, double CallFunc_NotEqual_DoubleDouble_A_ImplicitCast);
	void PrintParameter(struct FAudioParameterQueryData& Parameter, bool Condition);
	void OnReady_420BECB749D449E806A3DA94496319C8(class UFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags);
	void OnViewTargetSet(class UActor* Actor);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_AudioParameterComponent_Pawn(int32 EntryPoint, class UFortPlaylist* Temp_object_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortGameStateAthena* Temp_object_Variable_1, class UFortAsyncAction_CurrentPlaylistReady* CallFunc_PlaylistDataReadyAsync_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UActor* K2Node_Event_Actor, class UFortPlayerController* CallFunc_GetFirstLocalFortPlayerController_ReturnValue, const struct FGameplayTagContainer& Temp_struct_Variable, class UActor* CallFunc_GetViewTarget_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UFortGameStateAthena* K2Node_CustomEvent_GameState, class UFortPlaylist* K2Node_CustomEvent_Playlist, const struct FGameplayTagContainer& K2Node_CustomEvent_PlaylistContextTags, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UActor* CallFunc_GetOwner_ReturnValue, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class UFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UActor* CallFunc_GetViewTarget_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
};

}


