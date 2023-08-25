#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1F0 (0x5D8 - 0x3E8)
// Class VKEditUI.VKConnectionIndicator
class UVKConnectionIndicator : public UCommonActivatableWidget
{
public:
	class FText                                  EditStatusLocalizedText[0xA];                      // 0x3E8(0xF0)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   OpenLogInputAction;                                // 0x4D8(0x10)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UObject*                               StatusIcon_NotConnected;                           // 0x4E8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UObject*                               StatusIcon_Connected;                              // 0x4F0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UObject*                               StatusIcon_RefreshRequired;                        // 0x4F8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UObject*                               StatusIcon_Preparing;                              // 0x500(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UObject*                               StatusIcon_Downloading;                            // 0x508(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UObject*                               StatusIcon_UpToDate;                               // 0x510(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UObject*                               StatusIcon_StartingGame;                           // 0x518(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UObject*                               StatusIcon_GameInProgress;                         // 0x520(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UObject*                               StatusIcon_Error;                                  // 0x528(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                Image_StatusIcon;                                  // 0x530(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      Text_StatusMessage;                                // 0x538(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetSwitcher*                       Switcher_AdditionalInfo;                           // 0x540(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPanelWidget*                          Panel_DownloadContainer;                           // 0x548(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortSimpleMaterialProgressBar*        ProgressBar_Download;                              // 0x550(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      Text_DownloadProgress;                             // 0x558(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPanelWidget*                          Panel_OpenLogContainer;                            // 0x560(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonActionWidget*                   Action_OpenLog;                                    // 0x568(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPanelWidget*                          Panel_SubMessageContainer;                         // 0x570(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      Text_SubMessage;                                   // 0x578(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      Text_EditMode;                                     // 0x580(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPanelWidget*                          Panel_SquadListContainer;                          // 0x588(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAthenaSquadListBase*                  AthenaSquadList;                                   // 0x590(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4A67[0x40];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UVKConnectionIndicator* GetDefaultObj();

	void OnMinigameStateChanged(enum class EFortMinigameState MinigameState, enum class EFortMinigameState PreviousMinigameState);
	void HandleMemorySamplerProgressUpdated(float Progress);
};

// 0x0 (0x310 - 0x310)
// Class VKEditUI.VKDebugMessagesBase
class UVKDebugMessagesBase : public UFortHUDElementWidget
{
public:

	static class UClass* StaticClass();
	static class UVKDebugMessagesBase* GetDefaultObj();

	void HandleGameStateInitialized(class UFortGameState* GameState);
	void BP_OnGameStateInitialized(class UFortGameState* GameState);
};

// 0x28 (0x2D8 - 0x2B0)
// Class VKEditUI.VkEditDynamicUIDirector
class UVkEditDynamicUIDirector : public UDynamicUIDirectorBase
{
public:
	class UDynamicUIScene*                       MemorySamplingScene;                               // 0x2B0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4A6D[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UVkEditDynamicUIDirector* GetDefaultObj();

};

// 0xF8 (0x4E0 - 0x3E8)
// Class VKEditUI.VkEditLogTab
class UVkEditLogTab : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_4A6E[0x8];                                     // Fixing Size After Last Property 
	struct FFortTabButtonLabelInfo               TabButtonLabelInfo;                                // 0x3F0(0xF0)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UVkEditLogTab* GetDefaultObj();

};

}


