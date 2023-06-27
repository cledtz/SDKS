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

// 0x130 (0x1F8 - 0xC8)
// BlueprintGeneratedClass BP_AmbientAudioController.BP_AmbientAudioController_C
class UBP_AmbientAudioController_C : public UFortAmbientAudioController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       CheckFrequency;                                    // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bInSnowCurrent;                                    // 0xD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8EB0[0x7];                                     // Fixing Size After Last Property..
	class UAmbientAudioDataAsset*                WinterAudioBank;                                   // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bSnowEnabled;                                      // 0xE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8EB1[0x7];                                     // Fixing Size After Last Property..
	class UAmbientAudioDataAsset*                StormAudioBank;                                    // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          AmbientAudioInsideTag;                             // 0xF8(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8EB2[0x4];                                     // Fixing Size After Last Property..
	class UAmbientAudioDataAsset*                CurieAudioBank;                                    // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               SnowOriginWorldLoc;                                // 0x108(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SnowRadius;                                        // 0x120(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGameplayTag>                  SnowTagsToApply;                                   // 0x128(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                  SnowEntryName;                                     // 0x138(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8EB3[0x4];                                     // Fixing Size After Last Property..
	double                                       IndoorInterpTime;                                  // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       IndoorStateChangedTime;                            // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsIndoors;                                        // 0x150(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8EB4[0x7];                                     // Fixing Size After Last Property..
	double                                       IsPlayerIndoorsInterp;                             // 0x158(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CurrViewTarget;                                    // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGameplayTag>                  GenericTagsToApply;                                // 0x168(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bTagApplicationEnabled;                            // 0x178(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Current_State;                                     // 0x179(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8EB5[0x2];                                     // Fixing Size After Last Property..
	struct FGameplayTag                          Current_Room_Size_Tag;                             // 0x17C(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<struct FGameplayTag, class UReverbEffect*> Reverbs;                                           // 0x180(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UFortGameStateComponent_SurfaceOverride* SnowCoverageComponent;                             // 0x1D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                        SupportedTagLevels;                                // 0x1D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       SpecialSurfacePadding;                             // 0x1E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundMix*                             AmbientAudioSoundMix;                              // 0x1F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_AmbientAudioController_C");
		return Clss;
	}

	void InitSnowCoverageComponent(class AGameStateBase* Game_State, class UFortGameStateComponent_SurfaceOverride* CallFunc_GetComponentByClass_ReturnValue);
	void OnViewTargetChanged(class AActor* New_Target, class AActor* Prev_Target);
	void CacheViewTarget(class AActor* NewViewTarget, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class AFortPlayerController* CallFunc_GetFirstLocalFortPlayerController_ReturnValue, class AActor* CallFunc_GetViewTarget_ReturnValue);
	void RemovePlayerTags(class AActor* Player, TArray<struct FGameplayTag>& Array, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FGameplayTag& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue);
	void ApplyPlayerTags(class AActor* Player, TArray<struct FGameplayTag>& Tag_Array, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FGameplayTag& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue);
	void UpdateSnowSetupBP(class UAmbientAudioSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EPhysicalSurface CallFunc_GetSpecialSurfaceType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsLocationInSpecialSurface_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_IsLocationInSpecialSurface_Padding_ImplicitCast);
	void OnReady_C8AC4F724844E04160BE56BEAB4A2614(class AGameStateBase* GameState);
	void On_Room_Size_Changed(const struct FGameplayTag& Curr, const struct FGameplayTag& Prev);
	void On_Room_State_Changed(uint8 Curr, uint8 Prev);
	void Update_Interior_Audio_Verb();
	void Update();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_AmbientAudioController(int32 EntryPoint, class AGameStateBase* K2Node_CustomEvent_GameState, class AGameStateBase* Temp_object_Variable, class UFortAsyncAction_GameStateReady* CallFunc_GameStateReadyAsync_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTag& K2Node_CustomEvent_Curr_1, const struct FGameplayTag& K2Node_CustomEvent_Prev_1, uint8 K2Node_CustomEvent_Curr, uint8 K2Node_CustomEvent_Prev, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, class UAmbientAudioSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
