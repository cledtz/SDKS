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

// 0x10 (0x428 - 0x418)
// Class EventModeUI.FocusButton
class UFocusButton : public UBacchusActionButton
{
public:
	class UPaperSprite*                          StartFocusingSprite;                               // 0x418(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPaperSprite*                          StopFocusingSprite;                                // 0x420(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FocusButton");
		return Clss;
	}

	void HandleEventModeFocusingChanged(bool bIsEventModeFocusing);
	void HandleCanUseEventModeFocusChanged(bool bCanUseEventModeFocus);
};

// 0xB0 (0x3C0 - 0x310)
// Class EventModeUI.FortEventModeEmotesWidget
class UFortEventModeEmotesWidget : public UFortHUDElementWidget
{
public:
	TSoftObjectPtr<class UFortMontageItemDefinitionBase> Emote1;                                            // 0x310(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UFortMontageItemDefinitionBase> Emote2;                                            // 0x338(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UFortMontageItemDefinitionBase> Emote3;                                            // 0x360(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TSoftObjectPtr<class UFortMontageItemDefinitionBase>> RandomEmotes;                                      // 0x388(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_8150[0x8];                                     // Fixing Size After Last Property..
	class URichTextBlock*                        Text_Emote1;                                       // 0x3A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class URichTextBlock*                        Text_Emote2;                                       // 0x3A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class URichTextBlock*                        Text_Emote3;                                       // 0x3B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class URichTextBlock*                        Text_EmoteRandom;                                  // 0x3B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortEventModeEmotesWidget");
		return Clss;
	}

	void OnFocusStateChanged(bool bIsFocusing);
	void OnFocusAvailableChanged(bool bIsFocusAvailable);
};

// 0x8 (0x128 - 0x120)
// Class EventModeUI.FortMobileActionButtonBehavior_Focus
class UFortMobileActionButtonBehavior_Focus : public UFortMobileActionButtonBehavior
{
public:
	class UPaperSprite*                          StopFocusingSprite;                                // 0x120(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMobileActionButtonBehavior_Focus");
		return Clss;
	}

	void HandleEventModeFocusingChanged(bool bIsEventModeFocusing);
	void HandleCanUseEventModeFocusChanged(bool bCanUseEventModeFocus);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
