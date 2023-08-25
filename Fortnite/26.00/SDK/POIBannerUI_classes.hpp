#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x318 - 0x310)
// Class POIBannerUI.POIBannerToastSocialAvatar
class UPOIBannerToastSocialAvatar : public UFortHUDElementWidget
{
public:
	class UFortSocialAvatarIcon*                 Icon_SocialAvatar;                                 // 0x310(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UPOIBannerToastSocialAvatar* GetDefaultObj();

	void SetSocialAvatarTexture(TSoftObjectPtr<class UTexture2D> AvatarTexture);
	void SetSocialAvatar(class UFortPlayerState* PlayerState);
};

// 0x48 (0x358 - 0x310)
// Class POIBannerUI.POIBannerToastWidgetBase
class UPOIBannerToastWidgetBase : public UFortHUDElementWidget
{
public:
	uint8                                        Pad_2EBB[0x40];                                    // Fixing Size After Last Property 
	struct FFortPrioritizedWidgetData            PrioritizationData;                                // 0x350(0x2)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_2EBC[0x6];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UPOIBannerToastWidgetBase* GetDefaultObj();

	void OnStompFailed();
	void OnStompedByOtherWidget();
	void K2_OnBecomeInactive();
	void K2_OnBecomeActive();
	class FText GetLocationTextFromTag(struct FGameplayTag& LocationTag);
};

}


