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

// 0x1D8 (0x460 - 0x288)
// Class PapayaTimedEvents.PapayaTimedEvents
class APapayaTimedEvents : public AActor
{
public:
	TMap<class FString, class UMediaPlayer*>     MediaPlayerMap;                                    // 0x288(0x50)(Edit, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	class UPapayaTimedEventsResponderComponent*  MeshEventResponder;                                // 0x2D8(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class AActor*>                        TimedEventActorTargets;                            // 0x2E0(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_82E7[0x8];                                     // Fixing Size After Last Property..
	struct FMediaTimeEventArray                  TimedEventsArray;                                  // 0x2F8(0x118)(Net, RepNotify, NativeAccessSpecifierPrivate)
	uint8                                        Pad_82E8[0x18];                                    // Fixing Size After Last Property..
	class FString                                ScreenName;                                        // 0x428(0x10)(Net, ZeroConstructor, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_82E9[0x28];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PapayaTimedEvents");
		return Clss;
	}

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
	uint8                                        Pad_82EA[0x78];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PapayaTimedEventsResponderComponent");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
