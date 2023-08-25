#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2E0 - 0x2D0)
// Class MotdUI.DynamicMotdButtonBaseWidget
class UDynamicMotdButtonBaseWidget : public UCommonUserWidget
{
public:
	class UFortCTAButton*                        ButtonWidget;                                      // 0x2D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMotdActionBase*                       Action;                                            // 0x2D8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UDynamicMotdButtonBaseWidget* GetDefaultObj();

};

// 0x10 (0x1480 - 0x1470)
// Class MotdUI.DynamicMotdFullScreenButtonTile
class UDynamicMotdFullScreenButtonTile : public UCommonButtonBase
{
public:
	uint8                                        Pad_2F76[0x8];                                     // Fixing Size After Last Property 
	class URichTextBlock*                        Title;                                             // 0x1478(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UDynamicMotdFullScreenButtonTile* GetDefaultObj();

};

// 0x30 (0x300 - 0x2D0)
// Class MotdUI.DynamicMotdFullScreenTile
class UDynamicMotdFullScreenTile : public UCommonUserWidget
{
public:
	class URichTextBlock*                        Title;                                             // 0x2D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URichTextBlock*                        Body;                                              // 0x2D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEpicCMSImage*                         BackgroundImage;                                   // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEpicCMSImage*                         BackgroundImageBlurred;                            // 0x2E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBox*                        ButtonsContainer;                                  // 0x2F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UDynamicMotdButtonBaseWidget> BaseButtonClass;                                   // 0x2F8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UDynamicMotdFullScreenTile* GetDefaultObj();

	void BP_OnTileUpdated();
};

// 0x28 (0x428 - 0x400)
// Class MotdUI.DynamicMotdFullScreenWidget
class UDynamicMotdFullScreenWidget : public UMotdWidgetBase
{
public:
	class UFortCTAButton*                        ButtonClose;                                       // 0x400(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonVisibilitySwitcher*             TilesSwitcher;                                     // 0x408(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDynamicMotdTopBar*                    TopBar;                                            // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UDynamicMotdFullScreenTile> FullScreenTileClass;                               // 0x418(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CurrentMotdIndex;                                  // 0x420(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2F93[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UDynamicMotdFullScreenWidget* GetDefaultObj();

	void NavigateToPreviousItem();
	void NavigateToNextItem();
	void HandleSelectedTileChanged(class UCommonButtonBase* SelectedTile, int32 TileIndex);
	void BP_PlayIntroAnimation();
	void BP_OnSelectedTileChanged();
};

// 0x10 (0x2E0 - 0x2D0)
// Class MotdUI.DynamicMotdTopBar
class UDynamicMotdTopBar : public UCommonUserWidget
{
public:
	class UFortDynamicEntryBox*                  TopEntryBox;                                       // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonGroupBase*                MotdTilesGroup;                                    // 0x2D8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UDynamicMotdTopBar* GetDefaultObj();

};

}


