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

// 0x32 (0x2C2 - 0x290)
// BlueprintGeneratedClass Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C
class UFort_Entry_Music_Controller_BP_C : public UFortEntryMusicController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       SceneComponent;                                    // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       FadeOutTime;                                       // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            CurrentMusic;                                      // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Music_Activate_Override;                        // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8890[0x7];                                     // Fixing Size After Last Property..
	class UAthenaMusicPackItemDefinition*        MusicPackToPlayLater;                              // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bCanRetriggerNextMusicPack;                        // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bRegisteredForAnalysis;                            // 0x2C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Fort_Entry_Music_Controller_BP_C");
		return Clss;
	}

	void Change_Music(class USoundBase* New_Music, double StartTime, const struct FGameplayTag& Event_Tag);
	void ListenToMusicPacks();
	void OnMusicPackChanged(class UAthenaMusicPackItemDefinition* NewMusicPack, float StartTimeOffset);
	void Lobby_Music_Override(bool Lobby_Music_Activate, class USoundBase* New_Music);
	void SetCanRetriggerNextMusicPack(bool bCanRetriggerNextMusicPack);
	void PlayEquippedMusicPack();
	void StartMusic();
	void ExecuteUbergraph_Fort_Entry_Music_Controller_BP(int32 EntryPoint, class USoundBase* K2Node_CustomEvent_New_Music_1, double K2Node_CustomEvent_StartTime, const struct FGameplayTag& K2Node_CustomEvent_Event_Tag, class UAthenaMusicPackItemDefinition* K2Node_CustomEvent_NewMusicPack, float K2Node_CustomEvent_StartTimeOffset, bool CallFunc_IsGameplayTagValid_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class USoundBase* K2Node_DynamicCast_AsSound_Base, bool K2Node_DynamicCast_bSuccess, bool K2Node_CustomEvent_Lobby_Music_Activate, class USoundBase* K2Node_CustomEvent_New_Music, bool K2Node_CustomEvent_bCanRetriggerNextMusicPack, class UFortAudioAnalysisSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class UMusicEventSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UMusicEventSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, const struct FGameplayTagContainer& Temp_struct_Variable, const struct FGameplayTagContainer& Temp_struct_Variable_1, class UFortMusicContext* CallFunc_GetContext_ReturnValue, class UAthenaMusicPackItemDefinition* CallFunc_GetEquippedMusicPack_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, const struct FGameplayTag& Temp_struct_Variable_2, const struct FGameplayTagContainer& K2Node_Select_Default, bool Temp_bool_Variable_1, class UFortMusicContext* CallFunc_GetContext_ReturnValue_1, const struct FGameplayTag& K2Node_Select_Default_1, bool CallFunc_IsDefaultMusicEquipped_ReturnValue, class UAudioComponent* CallFunc_AddEvent_ReturnValue, class UFortMusicContext* CallFunc_GetContext_ReturnValue_2, class UAthenaMusicPackItemDefinition* CallFunc_GetEquippedMusicPack_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UFortMusicContext* CallFunc_GetContext_ReturnValue_3, double CallFunc_Change_Music_StartTime_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
