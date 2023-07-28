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

// 0x88 (0xB0 - 0x28)
// Class VerseFortniteUI.VerseFortnitePlayspaceHUDController
class UVerseFortnitePlayspaceHUDController : public UVerseFortnitePlayspaceExtensionBase
{
public:
	uint8                                        Pad_8053[0x10];                                    // Fixing Size After Last Property..
	struct FHUDElementVisibilityRepData          VisibilityData;                                    // 0x38(0x78)(Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseFortnitePlayspaceHUDController");
		return Clss;
	}

};

// 0x8 (0x60 - 0x58)
// Class VerseFortniteUI.VerseFortniteUIOverlaySlot
class UVerseFortniteUIOverlaySlot : public UOverlaySlot
{
public:
	uint8                                        Pad_8054[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseFortniteUIOverlaySlot");
		return Clss;
	}

};

// 0x0 (0x1A0 - 0x1A0)
// Class VerseFortniteUI.VerseFortniteUIOverlay
class UVerseFortniteUIOverlay : public UOverlay
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseFortniteUIOverlay");
		return Clss;
	}

};

// 0x10 (0x1B0 - 0x1A0)
// Class VerseFortniteUI.VerseFortniteUINamedSlot
class UVerseFortniteUINamedSlot : public UNamedSlot
{
public:
	uint8                                        Pad_8055[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseFortniteUINamedSlot");
		return Clss;
	}

};

// 0x30 (0x428 - 0x3F8)
// Class VerseFortniteUI.VerseFortniteUIActivableWidgetBase
class UVerseFortniteUIActivableWidgetBase : public UCommonActivatableWidget
{
public:
	class UVerseFortniteUINamedSlot*             MainSlot;                                          // 0x3F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8056[0x8];                                     // Fixing Size After Last Property..
	struct FDataTableRowHandle                   MainMenuInputRowHandle;                            // 0x408(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	TArray<struct FGameplayTagContainer>         HudToDeactivateOnInitialization;                   // 0x418(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseFortniteUIActivableWidgetBase");
		return Clss;
	}

};

// 0x98 (0xD0 - 0x38)
// Class VerseFortniteUI.VerseFortniteUIPresenter
class UVerseFortniteUIPresenter : public UUIFrameworkGameViewportPresenter
{
public:
	TArray<struct FVerseFortniteUIPresenterElement> Pending;                                           // 0x38(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<struct FVerseFortniteUIPresenterElement> Created;                                           // 0x48(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class UVerseFortniteUIOverlay*               PlayerGameViewport;                                // 0x58(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UVerseFortniteUIOverlay*               ContentGameViewport;                               // 0x60(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UVerseFortniteUIActivableWidgetBase*   PopupContainer;                                    // 0x68(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8057[0x8];                                     // Fixing Size After Last Property..
	TSoftClassPtr<class UVerseFortniteUIActivableWidgetBase> WidgetForDynamicUI;                                // 0x78(0x28)(Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UCommonInputActionDomain> ActionDomainForDynamicUI;                          // 0xA0(0x28)(Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8058[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseFortniteUIPresenter");
		return Clss;
	}

};

// 0x60 (0x130 - 0xD0)
// Class VerseFortniteUI.VerseFortniteUIFrameworkButton_Base
class UVerseFortniteUIFrameworkButton_Base : public UUIFrameworkWidget
{
public:
	class FText                                  Text;                                              // 0xD0(0x18)(NativeAccessSpecifierPrivate)
	struct FLocalizableMessage                   Message;                                           // 0xE8(0x30)(Net, RepNotify, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8059[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseFortniteUIFrameworkButton_Base");
		return Clss;
	}

	void ServerClick(class UPlayerController* PlayerController);
	void OnRep_Message();
	class FText GetText();
};

// 0x0 (0x130 - 0x130)
// Class VerseFortniteUI.VerseFortniteUIFrameworkButton_Loud
class UVerseFortniteUIFrameworkButton_Loud : public UVerseFortniteUIFrameworkButton_Base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseFortniteUIFrameworkButton_Loud");
		return Clss;
	}

};

// 0x0 (0x130 - 0x130)
// Class VerseFortniteUI.VerseFortniteUIFrameworkButton_Regular
class UVerseFortniteUIFrameworkButton_Regular : public UVerseFortniteUIFrameworkButton_Base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseFortniteUIFrameworkButton_Regular");
		return Clss;
	}

};

// 0x0 (0x130 - 0x130)
// Class VerseFortniteUI.VerseFortniteUIFrameworkButton_Quiet
class UVerseFortniteUIFrameworkButton_Quiet : public UVerseFortniteUIFrameworkButton_Base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseFortniteUIFrameworkButton_Quiet");
		return Clss;
	}

};

// 0x18 (0x148 - 0x130)
// Class VerseFortniteUI.VerseFortniteUIFrameworkText_Base
class UVerseFortniteUIFrameworkText_Base : public UUIFrameworkTextBase
{
public:
	uint8                                        Pad_805B[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseFortniteUIFrameworkText_Base");
		return Clss;
	}

	void ServerTextCommitted(class UPlayerController* PlayerController, class FText& NewText);
	void ExecuteServerTextCommitted(class FText& InText, enum class ETextCommit InCommitMethod);
};

// 0x0 (0x148 - 0x148)
// Class VerseFortniteUI.VerseFortniteUIFrameworkTextBlock
class UVerseFortniteUIFrameworkTextBlock : public UUIFrameworkTextBlock
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseFortniteUIFrameworkTextBlock");
		return Clss;
	}

};

// 0x0 (0x148 - 0x148)
// Class VerseFortniteUI.VerseFortniteUIFrameworkEditableText
class UVerseFortniteUIFrameworkEditableText : public UVerseFortniteUIFrameworkText_Base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseFortniteUIFrameworkEditableText");
		return Clss;
	}

};

// 0x0 (0x148 - 0x148)
// Class VerseFortniteUI.VerseFortniteUIFrameworkEditableTextBox
class UVerseFortniteUIFrameworkEditableTextBox : public UVerseFortniteUIFrameworkText_Base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseFortniteUIFrameworkEditableTextBox");
		return Clss;
	}

};

// 0x40 (0x110 - 0xD0)
// Class VerseFortniteUI.VerseFortniteUIFrameworkSlider
class UVerseFortniteUIFrameworkSlider : public UUIFrameworkWidget
{
public:
	struct FVerseFortniteUIFrameworkSliderValue  Value;                                             // 0xD0(0xC)(Net, RepNotify, NoDestructor, NativeAccessSpecifierPrivate)
	float                                        MinValue;                                          // 0xDC(0x4)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxValue;                                          // 0xE0(0x4)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        StepSize;                                          // 0xE4(0x4)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_805E[0x28];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseFortniteUIFrameworkSlider");
		return Clss;
	}

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

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
