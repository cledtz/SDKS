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

// 0xF0 (0x4A0 - 0x3B0)
// Class EpicCMSUIFramework.EpicCMSImage
class UEpicCMSImage : public UCommonLazyImage
{
public:
	FMulticastInlineDelegateProperty_            OnImageLoadingComplete;                            // 0x3B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bMatchImageSize;                                   // 0x3C0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_17EB[0xF];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           LoadingFailFallback;                               // 0x3D0(0xC0)(Edit, NativeAccessSpecifierPrivate)
	class UTexture2D*                            ExternalMedia;                                     // 0x490(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bDownloadingExternalMedia;                         // 0x498(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_17EC[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EpicCMSImage");
		return Clss;
	}

	void SetMediaURL(const class FString& MediaUrl);
};

// 0x68 (0x310 - 0x2A8)
// Class EpicCMSUIFramework.EpicCMSLayoutBase
class UEpicCMSLayoutBase : public UUserWidget
{
public:
	TArray<struct FSlotDescription>              CarouselSlotDescriptions;                          // 0x2A8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TSubclassOf<class UEpicCMSTileCarousel>      CarouselClass;                                     // 0x2B8(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17ED[0x50];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EpicCMSLayoutBase");
		return Clss;
	}

};

// 0x88 (0xB0 - 0x28)
// Class EpicCMSUIFramework.EpicCMSManager
class UEpicCMSManager : public UObject
{
public:
	uint8                                        Pad_17EE[0x88];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EpicCMSManager");
		return Clss;
	}

};

// 0x90 (0x5C0 - 0x530)
// Class EpicCMSUIFramework.EpicCMSScreenBase
class UEpicCMSScreenBase : public UCommonActivatablePanelLegacy
{
public:
	class FString                                TileSetFieldName;                                  // 0x530(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UDataTable>             TileTypeToTileClassDataTable;                      // 0x540(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftClassPtr<class UUserWidget>             LayoutErrorClass;                                  // 0x568(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UDataTable>             LayoutTypeToLayoutClassDataTable;                  // 0x590(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17EF[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EpicCMSScreenBase");
		return Clss;
	}

};

// 0x18 (0x2E8 - 0x2D0)
// Class EpicCMSUIFramework.EpicCMSSimpleMessage
class UEpicCMSSimpleMessage : public UCommonUserWidget
{
public:
	class UCommonTextBlock*                      TitleText;                                         // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      BodyText;                                          // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEpicCMSImage*                         PrimaryImage;                                      // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EpicCMSSimpleMessage");
		return Clss;
	}

};

// 0x110 (0x15D0 - 0x14C0)
// Class EpicCMSUIFramework.EpicCMSTileBase
class UEpicCMSTileBase : public UCommonButtonLegacy
{
public:
	uint8                                        Pad_17F0[0x8];                                     // Fixing Size After Last Property..
	TSubclassOf<class UCommonTextStyle>          DefaultTitleTextStyle;                             // 0x14C8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCommonTextStyle>          FeaturedTitleTextStyle;                            // 0x14D0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  Title;                                             // 0x14D8(0x18)(BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FString                                Link;                                              // 0x14F0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDownloadingExternalMedia;                         // 0x1500(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRefreshingMcpCatalog;                             // 0x1501(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17F1[0x6];                                     // Fixing Size After Last Property..
	class UTexture2D*                            ExternalMedia;                                     // 0x1508(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17F2[0x18];                                    // Fixing Size After Last Property..
	class UCommonLazyImage*                      LazyImage_Icon;                                    // 0x1528(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      TitleTextBlock;                                    // 0x1530(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      SubtitleTextBlock;                                 // 0x1538(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      EyebrowTextBlock;                                  // 0x1540(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17F3[0x88];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EpicCMSTileBase");
		return Clss;
	}

	void Launch();
};

// 0x50 (0x2F8 - 0x2A8)
// Class EpicCMSUIFramework.EpicCMSTileCarousel
class UEpicCMSTileCarousel : public UUserWidget
{
public:
	struct FSlateSound                           PreviousButtonSound;                               // 0x2A8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FSlateSound                           NextButtonSound;                                   // 0x2C0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UCommonWidgetCarousel*                 Carousel;                                          // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               NextPageButton;                                    // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               PreviousPageButton;                                // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShouldShowNavigationOnlyOnHover;                  // 0x2F0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bInputActionsForPaging;                            // 0x2F1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsShowingNavigation;                              // 0x2F2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17F4[0x5];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EpicCMSTileCarousel");
		return Clss;
	}

	void SetCurrentPageByIndex(int32 PageIndex);
	void PreviousPage();
	void NextPage();
	void NavigationVisibilityChanged(bool bShowNavigation);
	void HandleTilePageAdded(class UWidget* TileWidget);
	int32 GetCurrentPageIndex();
	void BeginAutoScrolling();
	void AddTilePage(class UWidget* TilePageWidget);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
