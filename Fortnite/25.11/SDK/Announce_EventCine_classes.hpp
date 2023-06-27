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

// 0x28 (0x330 - 0x308)
// BlueprintGeneratedClass Announce_EventCine.Announce_EventCine_C
class AAnnounce_EventCine_C : public AFortClientAnnouncement_Cinematic
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x308(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x310(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMediaSource*                          EventMediaSource;                                  // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         AllowSkipping;                                     // 0x320(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A72[0x7];                                     // Fixing Size After Last Property..
	class UFortMediaSubtitlesPlayer*             EventSubtitlesPlayer;                              // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Announce_EventCine_C");
		return Clss;
	}

	void OnClientAnnouncementStop();
	void OnPlayerSkippedCutscene();
	void HandleClientEvent_CinematicFinishedPlaying(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void HandleAllowSkip();
	void OnEnteredCinematicState();
	void ExecuteUbergraph_Announce_EventCine(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, class UObject* K2Node_HandleClientEvent_EventSource, class UObject* K2Node_HandleClientEvent_EventFocus, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent, bool Temp_bool_Has_Been_Initd_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UFortMediaInfo* CallFunc_SpawnObject_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
