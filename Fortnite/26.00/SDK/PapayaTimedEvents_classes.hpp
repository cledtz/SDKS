#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1D8 (0x468 - 0x290)
// Class PapayaTimedEvents.PapayaTimedEvents
class UPapayaTimedEvents : public UActor
{
public:
	TMap<class FString, class UMediaPlayer*>     MediaPlayerMap;                                    // 0x290(0x50)(Edit, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	class UPapayaTimedEventsResponderComponent*  MeshEventResponder;                                // 0x2E0(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UActor*>                        TimedEventActorTargets;                            // 0x2E8(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_326A[0x8];                                     // Fixing Size After Last Property 
	struct FMediaTimeEventArray                  TimedEventsArray;                                  // 0x300(0x118)(Net, RepNotify, NativeAccessSpecifierPrivate)
	uint8                                        Pad_326E[0x18];                                    // Fixing Size After Last Property 
	class FString                                ScreenName;                                        // 0x430(0x10)(Net, ZeroConstructor, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_326F[0x28];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UPapayaTimedEvents* GetDefaultObj();

	void ShutdownTimedEvents_Native();
	void SetupTimedEvents_Native(const class FString& ScreenName);
	void ResetTimedEvents_Native();
	void OnRep_TimedEventsArray(struct FMediaTimeEventArray& PreviousValue);
	void OnRep_ScreenName(const class FString& PreviousValue);
	void AddTimedEvent_Native(const class FString& EventName, int64 Time, const class FString& EventParam);
};

// 0x78 (0x160 - 0xE8)
// Class PapayaTimedEvents.PapayaTimedEventsResponderComponent
class UPapayaTimedEventsResponderComponent : public UFortEventResponderComponent
{
public:
	uint8                                        Pad_3272[0x78];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UPapayaTimedEventsResponderComponent* GetDefaultObj();

};

}


