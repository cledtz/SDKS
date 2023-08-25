#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x188 - 0xC8)
// BlueprintGeneratedClass BP_AmbientAudioController.BP_AmbientAudioController_C
class UBP_AmbientAudioController_C : public UFortAmbientAudioController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       CheckFrequency;                                    // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bInSnowCurrent;                                    // 0xD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6945[0x7];                                     // Fixing Size After Last Property 
	class UAmbientAudioDataAsset*                WinterAudioBank;                                   // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bSnowEnabled;                                      // 0xE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6946[0x7];                                     // Fixing Size After Last Property 
	class UAmbientAudioDataAsset*                StormAudioBank;                                    // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          AmbientAudioInsideTag;                             // 0xF8(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6947[0x4];                                     // Fixing Size After Last Property 
	class UAmbientAudioDataAsset*                CurieAudioBank;                                    // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               SnowOriginWorldLoc;                                // 0x108(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SnowRadius;                                        // 0x120(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGameplayTag>                  SnowTagsToApply;                                   // 0x128(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                  SnowEntryName;                                     // 0x138(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6948[0x4];                                     // Fixing Size After Last Property 
	class UActor*                                CurrViewTarget;                                    // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGameplayTag>                  GenericTagsToApply;                                // 0x148(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bTagApplicationEnabled;                            // 0x158(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Current_State;                                     // 0x159(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6949[0x6];                                     // Fixing Size After Last Property 
	class UFortGameStateComponent_SurfaceOverride* SnowCoverageComponent;                             // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                        SupportedTagLevels;                                // 0x168(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       SpecialSurfacePadding;                             // 0x178(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundMix*                             AmbientAudioSoundMix;                              // 0x180(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AmbientAudioController_C* GetDefaultObj();

	void InitSnowCoverageComponent(class UGameStateBase* Game_State, class UFortGameStateComponent_SurfaceOverride* CallFunc_GetComponentByClass_ReturnValue);
	void OnViewTargetChanged(class UActor* New_Target, class UActor* Prev_Target);
	void CacheViewTarget(class UActor* NewViewTarget, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UFortPlayerController* CallFunc_GetFirstLocalFortPlayerController_ReturnValue, class UActor* CallFunc_GetViewTarget_ReturnValue);
	void RemovePlayerTags(class UActor* Player, TArray<struct FGameplayTag>& Array, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FGameplayTag& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue);
	void ApplyPlayerTags(class UActor* Player, TArray<struct FGameplayTag>& Tag_Array, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FGameplayTag& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue);
	void UpdateSnowSetupBP(class UAmbientAudioSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EPhysicalSurface CallFunc_GetSpecialSurfaceType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsLocationInSpecialSurface_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_IsLocationInSpecialSurface_Padding_ImplicitCast);
	void OnReady_C8AC4F724844E04160BE56BEAB4A2614(class UGameStateBase* GameState);
	void ReceiveBeginPlay();
	void Update();
	void ExecuteUbergraph_BP_AmbientAudioController(int32 EntryPoint, class UGameStateBase* K2Node_CustomEvent_GameState, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGameStateBase* Temp_object_Variable, class UFortAsyncAction_GameStateReady* CallFunc_GameStateReadyAsync_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, class UAmbientAudioSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
};

}


