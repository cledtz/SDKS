#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x4B8 - 0x4B0)
// BlueprintGeneratedClass SR_Valet.SR_Valet_C
class USR_Valet_C : public UStreamingRadioPlayerComponent_Valet
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SR_Valet_C");
		return Clss;
	}

	bool CanApplyHolster(class FName& HolsterId);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void On_Source_Played(class UStreamingRadioPlayerComponent* Component, const struct FAthenaRadioStation& AffectedSource);
	void On_Source_Stopped(class UStreamingRadioPlayerComponent* Component, const struct FAthenaRadioStation& AffectedSource);
	void ExecuteUbergraph_SR_Valet(int32 EntryPoint, class UMusicEventSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UFortAudioAnalysisSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class UFortAudioAnalysisSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1, enum class EEndPlayReason K2Node_Event_EndPlayReason, class UStreamingRadioPlayerComponent* K2Node_CustomEvent_Component_1, const struct FAthenaRadioStation& K2Node_CustomEvent_AffectedSource_1, class UStreamingRadioPlayerComponent* K2Node_CustomEvent_Component, const struct FAthenaRadioStation& K2Node_CustomEvent_AffectedSource, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, class UMusicEventSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class UMusicEventSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
