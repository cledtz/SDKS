#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x88 - 0x30)
// Class UIFramework.UIFrameworkLocalSettings
class UUIFrameworkLocalSettings : public UDeveloperSettings
{
public:
	TSoftObjectPtr<class UObject>                ErrorResource;                                     // 0x30(0x20)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UObject>                LoadingResource;                                   // 0x50(0x20)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2C9F[0x18];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UUIFrameworkLocalSettings* GetDefaultObj();

};

// 0x438 (0x4D8 - 0xA0)
// Class UIFramework.UIFrameworkPlayerComponent
class UUIFrameworkPlayerComponent : public UActorComponent
{
public:
	uint8                                        Pad_2CAD[0x8];                                     // Fixing Size After Last Property 
	struct FUIFrameworkGameLayerSlotList         RootList;                                          // 0xA8(0x120)(Net, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FUIFrameworkWidgetTree                WidgetTree;                                        // 0x1C8(0x1F8)(Net, NativeAccessSpecifierPrivate)
	class UUIFrameworkPresenter*                 Presenter;                                         // 0x3C0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSet<int32>                                  NetReplicationPending;                             // 0x3C8(0x50)(Transient, NativeAccessSpecifierPrivate)
	TSet<int32>                                  AddPending;                                        // 0x418(0x50)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2CAF[0x70];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UUIFrameworkPlayerComponent* GetDefaultObj();

	void ServerRemoveWidgetRootFromTree(const struct FUIFrameworkWidgetId& WidgetId);
	void RemoveWidget(class UUIFrameworkWidget* Widget);
	void AddWidget(const struct FUIFrameworkGameLayerSlot& Widget);
};

// 0x0 (0x28 - 0x28)
// Class UIFramework.UIFrameworkPresenter
class UUIFrameworkPresenter : public UObject
{
public:

	static class UClass* StaticClass();
	static class UUIFrameworkPresenter* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class UIFramework.UIFrameworkGameViewportPresenter
class UUIFrameworkGameViewportPresenter : public UUIFrameworkPresenter
{
public:
	uint8                                        Pad_2CB8[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UUIFrameworkGameViewportPresenter* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class UIFramework.UIFrameworkWidgetWrapperInterface
class UUIFrameworkWidgetWrapperInterface : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UUIFrameworkWidgetWrapperInterface* GetDefaultObj();

};

// 0x60 (0xC8 - 0x68)
// Class UIFramework.UIFrameworkWidget
class UUIFrameworkWidget : public UMVVMViewModelBase
{
public:
	bool                                         bIsEnabled;                                        // 0x68(0x1)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ESlateVisibility                  Visibility;                                        // 0x69(0x1)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2CC7[0x6];                                     // Fixing Size After Last Property 
	TSoftClassPtr<class UWidget>                 WidgetClass;                                       // 0x70(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FUIFrameworkWidgetId                  ID;                                                // 0x90(0x8)(Net, Transient, DuplicateTransient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TScriptInterface<class UUIFrameworkWidgetWrapperInterface> Wrapper;                                           // 0x98(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2CC8[0x8];                                     // Fixing Size After Last Property 
	struct FUIFrameworkParentWidget              AuthorityParent;                                   // 0xB0(0x10)(Transient, NoDestructor, NativeAccessSpecifierPrivate)
	class UWidget*                               LocalUMGWidget;                                    // 0xC0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UUIFrameworkWidget* GetDefaultObj();

	void OnRep_Visibility();
	void OnRep_IsEnabled();
};

// 0x58 (0x120 - 0xC8)
// Class UIFramework.UIFrameworkButton
class UUIFrameworkButton : public UUIFrameworkWidget
{
public:
	uint8                                        Pad_2CD4[0x18];                                    // Fixing Size After Last Property 
	struct FUIFrameworkSimpleSlot                Slot;                                              // 0xE0(0x40)(Net, RepNotify, NoDestructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UUIFrameworkButton* GetDefaultObj();

	void SetContent(const struct FUIFrameworkSimpleSlot& Content);
	void ServerClick(class UPlayerController* PlayerController);
	void OnRep_Slot();
	void HandleClick();
	struct FUIFrameworkSimpleSlot GetContent();
};

// 0x8 (0x5D0 - 0x5C8)
// Class UIFramework.UIFrameworkButtonWidget
class UUIFrameworkButtonWidget : public UButton
{
public:
	uint8                                        Pad_2CDB[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UUIFrameworkButtonWidget* GetDefaultObj();

};

// 0x120 (0x1E8 - 0xC8)
// Class UIFramework.UIFrameworkCanvasBox
class UUIFrameworkCanvasBox : public UUIFrameworkWidget
{
public:
	struct FUIFrameworkCanvasBoxSlotList         ReplicatedSlotList;                                // 0xC8(0x120)(Net, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UUIFrameworkCanvasBox* GetDefaultObj();

	void RemoveWidget(class UUIFrameworkWidget* Widget);
	void AddWidget(const struct FUIFrameworkCanvasBoxSlot& Widget);
};

// 0x18 (0xE0 - 0xC8)
// Class UIFramework.UIFrameworkColorBlock
class UUIFrameworkColorBlock : public UUIFrameworkWidget
{
public:
	struct FLinearColor                          Color;                                             // 0xC8(0x10)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector2f                             DesiredSize;                                       // 0xD8(0x8)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UUIFrameworkColorBlock* GetDefaultObj();

	void SetDesiredSize(const struct FVector2f& DesiredSize);
	void SetColor(const struct FLinearColor& Tint);
	void OnRep_DesiredSize();
	void OnRep_Color();
	struct FVector2f GetDesiredSize();
	struct FLinearColor GetColor();
};

// 0x60 (0x128 - 0xC8)
// Class UIFramework.UIFrameworkImageBlock
class UUIFrameworkImageBlock : public UUIFrameworkWidget
{
public:
	struct FUIFrameworkImageBlockData            Data;                                              // 0xC8(0x40)(Net, RepNotify, NativeAccessSpecifierPrivate)
	bool                                         bWaitForResourceToBeLoaded;                        // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2D1E[0x1F];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UUIFrameworkImageBlock* GetDefaultObj();

	void SetTint(const struct FLinearColor& Tint);
	void SetTiling(enum class ESlateBrushTileType OverflowPolicy);
	void SetTexture(TSoftObjectPtr<class UTexture2D> Texture, bool bUseTextureSize);
	void SetMaterial(TSoftObjectPtr<class UMaterialInterface> Material);
	void SetDesiredSize(const struct FVector2f& DesiredSize);
	void OnRep_Data();
	struct FLinearColor GetTint();
	enum class ESlateBrushTileType GetTiling();
	struct FVector2f GetDesiredSize();
	TSoftObjectPtr<class UObject> GeResourceObject();
};

// 0x120 (0x1E8 - 0xC8)
// Class UIFramework.UIFrameworkOverlay
class UUIFrameworkOverlay : public UUIFrameworkWidget
{
public:
	struct FUIFrameworkOverlaySlotList           ReplicatedSlotList;                                // 0xC8(0x120)(Net, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UUIFrameworkOverlay* GetDefaultObj();

	void RemoveWidget(class UUIFrameworkWidget* Widget);
	void AddWidget(const struct FUIFrameworkOverlaySlot& Widget);
};

// 0x58 (0x120 - 0xC8)
// Class UIFramework.UIFrameworkSimpleButton
class UUIFrameworkSimpleButton : public UUIFrameworkWidget
{
public:
	class FText                                  Text;                                              // 0xC8(0x18)(BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPrivate)
	struct FLocalizableMessage                   Message;                                           // 0xE0(0x30)(Net, RepNotify, NativeAccessSpecifierPrivate)
	struct FUIFrameworkClickEventArgument        ClickEvent;                                        // 0x110(0x10)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UUIFrameworkSimpleButton* GetDefaultObj();

	void ServerClick(class UPlayerController* PlayerController);
	void OnRep_Message();
	void OnClick(const struct FMVVMEventField& Field);
};

// 0x128 (0x1F0 - 0xC8)
// Class UIFramework.UIFrameworkStackBox
class UUIFrameworkStackBox : public UUIFrameworkWidget
{
public:
	enum class EOrientation                      Orientation;                                       // 0xC8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2D4F[0x7];                                     // Fixing Size After Last Property 
	struct FUIFrameworkStackBoxSlotList          ReplicatedSlotList;                                // 0xD0(0x120)(Net, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UUIFrameworkStackBox* GetDefaultObj();

	void RemoveWidget(class UUIFrameworkWidget* Widget);
	void OnRep_Orientation();
	void AddWidget(const struct FUIFrameworkStackBoxSlot& Widget);
};

// 0x60 (0x128 - 0xC8)
// Class UIFramework.UIFrameworkTextBase
class UUIFrameworkTextBase : public UUIFrameworkWidget
{
public:
	class FText                                  Text;                                              // 0xC8(0x18)(Transient, NativeAccessSpecifierPrivate)
	struct FLocalizableMessage                   Message;                                           // 0xE0(0x30)(Net, RepNotify, NativeAccessSpecifierPrivate)
	struct FLinearColor                          TextColor;                                         // 0x110(0x10)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ETextJustify                      Justification;                                     // 0x120(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ETextOverflowPolicy               OverflowPolicy;                                    // 0x121(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2D85[0x6];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UUIFrameworkTextBase* GetDefaultObj();

	void SetTextColor(const struct FLinearColor& TextColor);
	void SetOverflowPolicy(enum class ETextOverflowPolicy OverflowPolicy);
	void SetJustification(enum class ETextJustify Justification);
	void OnRep_TextColor();
	void OnRep_OverflowPolicy();
	void OnRep_Message();
	void OnRep_Justification();
	struct FLinearColor GetTextColor();
	class FText GetText();
	enum class ETextOverflowPolicy GetOverflowPolicy();
	enum class ETextJustify GetJustification();
};

// 0x18 (0x140 - 0x128)
// Class UIFramework.UIFrameworkTextBlock
class UUIFrameworkTextBlock : public UUIFrameworkTextBase
{
public:
	struct FVector2f                             ShadowOffset;                                      // 0x128(0x8)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FLinearColor                          ShadowColor;                                       // 0x130(0x10)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UUIFrameworkTextBlock* GetDefaultObj();

	void SetShadowOffset(const struct FVector2f& ShadowOffset);
	void SetShadowColor(const struct FLinearColor& ShadowColor);
	void OnRep_ShadowOffset();
	void OnRep_ShadowColor();
	struct FVector2f GetShadowOffset();
	struct FLinearColor GetShadowColor();
};

// 0x120 (0x1E8 - 0xC8)
// Class UIFramework.UIFrameworkUserWidget
class UUIFrameworkUserWidget : public UUIFrameworkWidget
{
public:
	struct FUIFrameworkUserWidgetSlotList        ReplicatedSlotList;                                // 0xC8(0x120)(Net, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UUIFrameworkUserWidget* GetDefaultObj();

	void SetWidgetClass(TSoftClassPtr<class UWidget> Value);
	void SetNamedSlot(class FName SlotName, class UUIFrameworkWidget* Widget);
};

}


