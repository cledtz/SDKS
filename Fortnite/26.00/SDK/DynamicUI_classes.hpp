#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class DynamicUI.DynamicUITransitionableWidgetInterface
class UDynamicUITransitionableWidgetInterface : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UDynamicUITransitionableWidgetInterface* GetDefaultObj();

	void BroadcastTransitionCompleted();
};

// 0x20 (0x2B0 - 0x290)
// Class DynamicUI.DynamicUIDirectorBase
class UDynamicUIDirectorBase : public UActor
{
public:
	TArray<class UDynamicUIScene*>               DefaultScenes;                                     // 0x290(0x10)(Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class ULocalPlayer>           OwningLocalPlayer;                                 // 0x2A0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnabledDuringReplay;                              // 0x2A8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2DE[0x7];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UDynamicUIDirectorBase* GetDefaultObj();

	void RemoveScene(class UDynamicUIScene* Scene);
	class UPlayerController* GetOwningLocalPlayerController();
	class ULocalPlayer* GetOwningLocalPlayer();
	void AddScene(class UDynamicUIScene* Scene);
};

// 0x48 (0x70 - 0x28)
// Class DynamicUI.DynamicUIConstraintBase
class UDynamicUIConstraintBase : public UObject
{
public:
	uint8                                        Pad_2E3[0x28];                                     // Fixing Size After Last Property 
	struct FVector2D                             Offset;                                            // 0x50(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicUIConstraintOverrideBase*      ConstraintOverride;                                // 0x60(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseOffset : 1;                                    // Mask: 0x1, PropSize: 0x10x68(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseOverride : 1;                                  // Mask: 0x2, PropSize: 0x10x68(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E6[0x7];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UDynamicUIConstraintBase* GetDefaultObj();

};

// 0x18 (0x88 - 0x70)
// Class DynamicUI.DynamicUIConstraintPosition
class UDynamicUIConstraintPosition : public UDynamicUIConstraintBase
{
public:
	struct FVector2D                             Position;                                          // 0x70(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDynamicUIAnchor                  Anchor;                                            // 0x80(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseSafeZone : 1;                                  // Mask: 0x1, PropSize: 0x10x84(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2EA[0x3];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UDynamicUIConstraintPosition* GetDefaultObj();

};

// 0x18 (0x88 - 0x70)
// Class DynamicUI.DynamicUIConstraintAlignment
class UDynamicUIConstraintAlignment : public UDynamicUIConstraintBase
{
public:
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x70(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x71(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F2[0x2];                                      // Fixing Size After Last Property 
	enum class EDynamicUIAnchor                  Anchor;                                            // 0x74(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDynamicUIAspectRatio                 MaxAspectRatio;                                    // 0x78(0x8)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        bUseSafeZone : 1;                                  // Mask: 0x1, PropSize: 0x10x80(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseMaxAspectRatio : 1;                            // Mask: 0x2, PropSize: 0x10x80(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F3[0x7];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UDynamicUIConstraintAlignment* GetDefaultObj();

};

// 0x88 (0xF8 - 0x70)
// Class DynamicUI.DynamicUIConstraintWidget
class UDynamicUIConstraintWidget : public UDynamicUIConstraintBase
{
public:
	enum class EDynamicUIAnchor                  Anchor;                                            // 0x70(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F7[0x4];                                      // Fixing Size After Last Property 
	struct FDynamicUIWidgetTarget                TargetWidget;                                      // 0x78(0x60)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	enum class EDynamicUIAnchor                  TargetAnchor;                                      // 0xD8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F9[0x4];                                      // Fixing Size After Last Property 
	TArray<class UDynamicUIConstraintBase*>      Fallbacks;                                         // 0xE0(0x10)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        bConstrainToUnallowedWidgets : 1;                  // Mask: 0x1, PropSize: 0x10xF0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseFallbacks : 1;                                 // Mask: 0x2, PropSize: 0x10xF0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2FC[0x7];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UDynamicUIConstraintWidget* GetDefaultObj();

};

// 0x28 (0x98 - 0x70)
// Class DynamicUI.DynamicUIConstraintContainer
class UDynamicUIConstraintContainer : public UDynamicUIConstraintBase
{
public:
	TArray<struct FDynamicUIWidgetTarget>        WidgetsToContain;                                  // 0x70(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FMargin                               Padding;                                           // 0x80(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        bMustMatchAllWidgets : 1;                          // Mask: 0x1, PropSize: 0x10x90(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_304[0x7];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UDynamicUIConstraintContainer* GetDefaultObj();

};

// 0x78 (0xE8 - 0x70)
// Class DynamicUI.DynamicUIConstraintReplace
class UDynamicUIConstraintReplace : public UDynamicUIConstraintBase
{
public:
	struct FDynamicUIWidgetTarget                TargetWidget;                                      // 0x70(0x60)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class UDynamicUIConstraintBase*>      Fallbacks;                                         // 0xD0(0x10)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        bUseFallbacks : 1;                                 // Mask: 0x1, PropSize: 0x10xE0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_30A[0x7];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UDynamicUIConstraintReplace* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class DynamicUI.DynamicUIConstraintOverrideBase
class UDynamicUIConstraintOverrideBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UDynamicUIConstraintOverrideBase* GetDefaultObj();

};

// 0xA8 (0xD0 - 0x28)
// Class DynamicUI.DynamicUIConstraintPlatformOverride
class UDynamicUIConstraintPlatformOverride : public UDynamicUIConstraintOverrideBase
{
public:
	TMap<class FName, class UDynamicUIConstraintBase*> PlatformVisibilityControls;                        // 0x28(0x50)(Edit, ExportObject, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<enum class ECommonInputType, class UDynamicUIConstraintBase*> InputTypeVisibilityControls;                       // 0x78(0x50)(Edit, ExportObject, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_30D[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UDynamicUIConstraintPlatformOverride* GetDefaultObj();

};

// 0x68 (0x98 - 0x30)
// Class DynamicUI.DynamicUIManager
class UDynamicUIManager : public UWorldSubsystem
{
public:
	uint8                                        Pad_329[0x18];                                     // Fixing Size After Last Property 
	TMap<TWeakObjectPtr<class ULocalPlayer>, struct FDynamicUIPlayerData> PlayerDataMap;                                     // 0x48(0x50)(Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UDynamicUIManager* GetDefaultObj();

	void RemoveScenes(const TArray<class UDynamicUIScene*>& Scenes, class UPlayerController*& Player);
	void RemoveSceneFromFirstLocalPlayer(class UDynamicUIScene* Scene);
	void RemoveScene(class UDynamicUIScene* Scene, class UPlayerController*& Player);
	void AddSceneToFirstLocalPlayer(class UDynamicUIScene* Scene);
	void AddScenes(const TArray<class UDynamicUIScene*>& Scenes, class UPlayerController*& Player);
	void AddScene(class UDynamicUIScene* Scene, class UPlayerController*& Player);
};

// 0x38 (0x68 - 0x30)
// Class DynamicUI.DynamicUIScene
class UDynamicUIScene : public UDataAsset
{
public:
	uint8                                        LayerID;                                           // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32E[0x7];                                      // Fixing Size After Last Property 
	TArray<struct FDynamicUIAllowed>             Allowed;                                           // 0x38(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class UDynamicUIUnallowBase*>         Unallow;                                           // 0x48(0x10)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FDynamicUIPreload>             Preload;                                           // 0x58(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDynamicUIScene* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class DynamicUI.DynamicUISizeBase
class UDynamicUISizeBase : public UObject
{
public:
	uint8                                        Pad_332[0x28];                                     // Fixing Size After Last Property 
	class UDynamicUISizeOverrideBase*            SizeOverride;                                      // 0x50(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseOverride : 1;                                  // Mask: 0x1, PropSize: 0x10x58(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseRenderTransform : 1;                           // Mask: 0x2, PropSize: 0x10x58(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_333[0x7];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UDynamicUISizeBase* GetDefaultObj();

};

// 0x8 (0x68 - 0x60)
// Class DynamicUI.DynamicUISizeFixed
class UDynamicUISizeFixed : public UDynamicUISizeBase
{
public:
	struct FVector2f                             Size;                                              // 0x60(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDynamicUISizeFixed* GetDefaultObj();

};

// 0x8 (0x68 - 0x60)
// Class DynamicUI.DynamicUISizeScale
class UDynamicUISizeScale : public UDynamicUISizeBase
{
public:
	struct FVector2f                             Scale;                                             // 0x60(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDynamicUISizeScale* GetDefaultObj();

};

// 0x80 (0xE0 - 0x60)
// Class DynamicUI.DynamicUISizeMatchWidget
class UDynamicUISizeMatchWidget : public UDynamicUISizeBase
{
public:
	struct FDynamicUIWidgetTarget                TargetWidget;                                      // 0x60(0x60)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	enum class EDynamicUISizeMatch               MatchType;                                         // 0xC0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_33D[0x4];                                      // Fixing Size After Last Property 
	TArray<class UDynamicUISizeBase*>            Fallbacks;                                         // 0xC8(0x10)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        bUseFallbacks : 1;                                 // Mask: 0x1, PropSize: 0x10xD8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_33F[0x7];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UDynamicUISizeMatchWidget* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class DynamicUI.DynamicUISizeOverrideBase
class UDynamicUISizeOverrideBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UDynamicUISizeOverrideBase* GetDefaultObj();

};

// 0xA8 (0xD0 - 0x28)
// Class DynamicUI.DynamicUISizeOverridePlatform
class UDynamicUISizeOverridePlatform : public UDynamicUISizeOverrideBase
{
public:
	TMap<class FName, class UDynamicUISizeBase*> PlatformOverrides;                                 // 0x28(0x50)(Edit, ExportObject, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<enum class ECommonInputType, class UDynamicUISizeBase*> InputTypeOverrides;                                // 0x78(0x50)(Edit, ExportObject, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_34C[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UDynamicUISizeOverridePlatform* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class DynamicUI.DynamicUIUnallowBase
class UDynamicUIUnallowBase : public UObject
{
public:
	enum class EDynamicUIUnallowedBehavior       Behavior;                                          // 0x28(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_350[0x4];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UDynamicUIUnallowBase* GetDefaultObj();

};

// 0x68 (0x98 - 0x30)
// Class DynamicUI.DynamicUIUnallowWidget
class UDynamicUIUnallowWidget : public UDynamicUIUnallowBase
{
public:
	struct FDynamicUIWidgetTarget                Widget;                                            // 0x30(0x60)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	uint8                                        bTargetAll : 1;                                    // Mask: 0x1, PropSize: 0x10x90(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_357[0x7];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UDynamicUIUnallowWidget* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class DynamicUI.DynamicUIUnallowLayer
class UDynamicUIUnallowLayer : public UDynamicUIUnallowBase
{
public:
	uint8                                        LayerID;                                           // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDynamicUIUnallowLayerComparison  Comparison;                                        // 0x31(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35C[0x6];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UDynamicUIUnallowLayer* GetDefaultObj();

};

// 0x28 (0x2D0 - 0x2A8)
// Class DynamicUI.DynamicUIVisualizerWidget
class UDynamicUIVisualizerWidget : public UUserWidget
{
public:
	TArray<class UDynamicUIScene*>               Scenes;                                            // 0x2A8(0x10)(Edit, ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	bool                                         bRefresh;                                          // 0x2B8(0x1)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_35F[0x17];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UDynamicUIVisualizerWidget* GetDefaultObj();

};

}


