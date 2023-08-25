#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0xB0 - 0x28)
// Class VerseFortniteUI.VerseFortnitePlayspaceHUDController
class UVerseFortnitePlayspaceHUDController : public UVerseFortnitePlayspaceExtensionBase
{
public:
	uint8                                        Pad_682[0x10];                                     // Fixing Size After Last Property 
	struct FHUDElementVisibilityRepData          VisibilityData;                                    // 0x38(0x78)(Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UVerseFortnitePlayspaceHUDController* GetDefaultObj();

};

// 0x8 (0x60 - 0x58)
// Class VerseFortniteUI.VerseFortniteUIOverlaySlot
class UVerseFortniteUIOverlaySlot : public UOverlaySlot
{
public:
	uint8                                        Pad_685[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UVerseFortniteUIOverlaySlot* GetDefaultObj();

};

// 0x0 (0x1A0 - 0x1A0)
// Class VerseFortniteUI.VerseFortniteUIOverlay
class UVerseFortniteUIOverlay : public UOverlay
{
public:

	static class UClass* StaticClass();
	static class UVerseFortniteUIOverlay* GetDefaultObj();

};

// 0x10 (0x1B0 - 0x1A0)
// Class VerseFortniteUI.VerseFortniteUINamedSlot
class UVerseFortniteUINamedSlot : public UNamedSlot
{
public:
	uint8                                        Pad_68B[0x10];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UVerseFortniteUINamedSlot* GetDefaultObj();

};

// 0x30 (0x418 - 0x3E8)
// Class VerseFortniteUI.VerseFortniteUIActivableWidgetBase
class UVerseFortniteUIActivableWidgetBase : public UCommonActivatableWidget
{
public:
	class UVerseFortniteUINamedSlot*             MainSlot;                                          // 0x3E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_694[0x8];                                      // Fixing Size After Last Property 
	struct FDataTableRowHandle                   MainMenuInputRowHandle;                            // 0x3F8(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	TArray<struct FGameplayTagContainer>         HudToDeactivateOnInitialization;                   // 0x408(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UVerseFortniteUIActivableWidgetBase* GetDefaultObj();

};

// 0x88 (0xC0 - 0x38)
// Class VerseFortniteUI.VerseFortniteUIPresenter
class UVerseFortniteUIPresenter : public UUIFrameworkGameViewportPresenter
{
public:
	TArray<struct FVerseFortniteUIPresenterElement> Pending;                                           // 0x38(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<struct FVerseFortniteUIPresenterElement> Created;                                           // 0x48(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class UVerseFortniteUIOverlay*               PlayerGameViewport;                                // 0x58(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UVerseFortniteUIOverlay*               ContentGameViewport;                               // 0x60(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UVerseFortniteUIActivableWidgetBase*   PopupContainer;                                    // 0x68(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_69D[0x8];                                      // Fixing Size After Last Property 
	TSoftClassPtr<class UVerseFortniteUIActivableWidgetBase> WidgetForDynamicUI;                                // 0x78(0x20)(Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UCommonInputActionDomain> ActionDomainForDynamicUI;                          // 0x98(0x20)(Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_69F[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UVerseFortniteUIPresenter* GetDefaultObj();

};

// 0x60 (0x128 - 0xC8)
// Class VerseFortniteUI.VerseFortniteUIFrameworkButton_Base
class UVerseFortniteUIFrameworkButton_Base : public UUIFrameworkWidget
{
public:
	class FText                                  Text;                                              // 0xC8(0x18)(NativeAccessSpecifierPrivate)
	struct FLocalizableMessage                   Message;                                           // 0xE0(0x30)(Net, RepNotify, NativeAccessSpecifierPrivate)
	uint8                                        Pad_6AC[0x18];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UVerseFortniteUIFrameworkButton_Base* GetDefaultObj();

	void ServerClick(class UPlayerController* PlayerController);
	void OnRep_Message();
	class FText GetText();
};

// 0x0 (0x128 - 0x128)
// Class VerseFortniteUI.VerseFortniteUIFrameworkButton_Loud
class UVerseFortniteUIFrameworkButton_Loud : public UVerseFortniteUIFrameworkButton_Base
{
public:

	static class UClass* StaticClass();
	static class UVerseFortniteUIFrameworkButton_Loud* GetDefaultObj();

};

// 0x0 (0x128 - 0x128)
// Class VerseFortniteUI.VerseFortniteUIFrameworkButton_Regular
class UVerseFortniteUIFrameworkButton_Regular : public UVerseFortniteUIFrameworkButton_Base
{
public:

	static class UClass* StaticClass();
	static class UVerseFortniteUIFrameworkButton_Regular* GetDefaultObj();

};

// 0x0 (0x128 - 0x128)
// Class VerseFortniteUI.VerseFortniteUIFrameworkButton_Quiet
class UVerseFortniteUIFrameworkButton_Quiet : public UVerseFortniteUIFrameworkButton_Base
{
public:

	static class UClass* StaticClass();
	static class UVerseFortniteUIFrameworkButton_Quiet* GetDefaultObj();

};

// 0x18 (0x140 - 0x128)
// Class VerseFortniteUI.VerseFortniteUIFrameworkText_Base
class UVerseFortniteUIFrameworkText_Base : public UUIFrameworkTextBase
{
public:
	uint8                                        Pad_6BF[0x18];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UVerseFortniteUIFrameworkText_Base* GetDefaultObj();

	void ServerTextCommitted(class UPlayerController* PlayerController, class FText& NewText);
	void ExecuteServerTextCommitted(class FText& InText, enum class ETextCommit InCommitMethod);
};

// 0x0 (0x140 - 0x140)
// Class VerseFortniteUI.VerseFortniteUIFrameworkTextBlock
class UVerseFortniteUIFrameworkTextBlock : public UUIFrameworkTextBlock
{
public:

	static class UClass* StaticClass();
	static class UVerseFortniteUIFrameworkTextBlock* GetDefaultObj();

};

// 0x0 (0x140 - 0x140)
// Class VerseFortniteUI.VerseFortniteUIFrameworkEditableText
class UVerseFortniteUIFrameworkEditableText : public UVerseFortniteUIFrameworkText_Base
{
public:

	static class UClass* StaticClass();
	static class UVerseFortniteUIFrameworkEditableText* GetDefaultObj();

};

// 0x0 (0x140 - 0x140)
// Class VerseFortniteUI.VerseFortniteUIFrameworkEditableTextBox
class UVerseFortniteUIFrameworkEditableTextBox : public UVerseFortniteUIFrameworkText_Base
{
public:

	static class UClass* StaticClass();
	static class UVerseFortniteUIFrameworkEditableTextBox* GetDefaultObj();

};

// 0x40 (0x108 - 0xC8)
// Class VerseFortniteUI.VerseFortniteUIFrameworkSlider
class UVerseFortniteUIFrameworkSlider : public UUIFrameworkWidget
{
public:
	struct FVerseFortniteUIFrameworkSliderValue  Value;                                             // 0xC8(0xC)(Net, RepNotify, NoDestructor, NativeAccessSpecifierPrivate)
	float                                        MinValue;                                          // 0xD4(0x4)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxValue;                                          // 0xD8(0x4)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        StepSize;                                          // 0xDC(0x4)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_6FA[0x28];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UVerseFortniteUIFrameworkSlider* GetDefaultObj();

	bool SetValue(float InValue);
	void SetStepSize(float InMinValue);
	void SetMinValue(float InMinValue);
	void SetMaxValue(float InMaxValue);
	void ServerValueChanged(class UPlayerController* PlayerController, float InNewValue, int32 InClientID, int32 InServerID);
	void OnRep_Value();
	void OnRep_StepSize();
	void OnRep_MinValue();
	void OnRep_MaxValue();
	void HandleValueChanged(float NewValue);
	float GetValue();
	float GetStepSize();
	float GetMinValue();
	float GetMaxValue();
	void ExecuteServerValueChanged(float InNewValue, int32 InClientID, int32 InServerID);
};

}


