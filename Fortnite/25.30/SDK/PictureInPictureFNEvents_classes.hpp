#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x2A8 - 0x2A8)
// Class PictureInPictureFNEvents.LiveEventHUDAd
class ULiveEventHUDAd : public UUserWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveEventHUDAd");
		return Clss;
	}

	void ShowAdvertisement(bool* Result);
};

// 0x0 (0x28 - 0x28)
// Class PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager
class UPictureInPictureFNEventsCheatManager : public UChildCheatManager
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PictureInPictureFNEventsCheatManager");
		return Clss;
	}

	void StopPiPBouncingLlama();
	void StartPiPBouncingLlama();
	void SelectPiPEvent(const class FString& EventName);
	void RemovePiPEvent(const class FString& EventName);
	void ListPiPEvents();
	void ListAllPiPEvents();
	void AddPiPEvent(const class FString& EventName, const class FString& VUID);
};

// 0x0 (0xA8 - 0xA8)
// Class PictureInPictureFNEvents.PictureInPictureFNEventsClient
class UPictureInPictureFNEventsClient : public UPictureInPictureClient
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PictureInPictureFNEventsClient");
		return Clss;
	}

};

// 0x30 (0x708 - 0x6D8)
// Class PictureInPictureFNEvents.PictureInPictureFNEventsController
class UPictureInPictureFNEventsController : public UPictureInPictureMediaController
{
public:
	class UPictureInPictureFNEventsClient*       FNEventsClient;                                    // 0x6D8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULiveEventHUDAd*                       HUDAdvertWidget;                                   // 0x6E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5514[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PictureInPictureFNEventsController");
		return Clss;
	}

	void UpdateClientLoginState(TArray<struct FPiPPartnerSource>& UpdatedSources);
	void OnClientLogoutSuccess();
	void OnClientLoginSuccess();
	void HandleFNMediaRemoveEventsStream(const class FString& InEventName);
	void HandleFNMediaEventsStreams(struct FFortMediaEventsStreamAssets& VideoStreamAssets);
	void ExitEvent();
	void AddPartnerActionAnalytics(const class FString& InPartnerName, enum class EPictureInPictureAction InActionType);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
