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

// 0x0 (0x28 - 0x28)
// Class DynamicUI.DynamicUITransitionableWidgetInterface
class UDynamicUITransitionableWidgetInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DynamicUITransitionableWidgetInterface");
		return Clss;
	}

	void BroadcastTransitionCompleted();
};

// 0x30 (0x2B8 - 0x288)
// Class DynamicUI.DynamicUIDirectorBase
class ADynamicUIDirectorBase : public AActor
{
public:
	uint8                                        Pad_1488[0x8];                                     // Fixing Size After Last Property..
	TArray<class UDynamicUIScene*>               DefaultScenes;                                     // 0x290(0x10)(Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class ULocalPlayer>           OwningLocalPlayer;                                 // 0x2A0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAddEventRouter;                                   // 0x2A8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnabledDuringReplay;                              // 0x2A9(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1489[0x6];                                     // Fixing Size After Last Property..
	class UGameplayEventRouterComponent*         EventRouter;                                       // 0x2B0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DynamicUIDirectorBase");
		return Clss;
	}

	void RemoveScene(class UDynamicUIScene* Scene);
	class APlayerController* GetOwningLocalPlayerController();
	class ULocalPlayer* GetOwningLocalPlayer();
	class UGameplayEventRouterComponent* GetOwnedEventRouter();
	void AddScene(class UDynamicUIScene* Scene);
};

// 0x50 (0x78 - 0x28)
// Class DynamicUI.DynamicUIConstraintBase
class UDynamicUIConstraintBase : public UObject
{
public:
	uint8                                        Pad_148A[0x30];                                    // Fixing Size After Last Property..
	struct FVector2D                             Offset;                                            // 0x58(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicUIConstraintOverrideBase*      ConstraintOverride;                                // 0x68(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseOffset : 1;                                    // Mask: 0x1, PropSize: 0x10x70(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseOverride : 1;                                  // Mask: 0x2, PropSize: 0x10x70(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_148B[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DynamicUIConstraintBase");
		return Clss;
	}

};

// 0x18 (0x90 - 0x78)
// Class DynamicUI.DynamicUIConstraintPosition
class UDynamicUIConstraintPosition : public UDynamicUIConstraintBase
{
public:
	struct FVector2D                             Position;                                          // 0x78(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDynamicUIAnchor                  Anchor;                                            // 0x88(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseSafeZone : 1;                                  // Mask: 0x1, PropSize: 0x10x8C(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_148C[0x3];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DynamicUIConstraintPosition");
		return Clss;
	}

};

// 0x18 (0x90 - 0x78)
// Class DynamicUI.DynamicUIConstraintAlignment
class UDynamicUIConstraintAlignment : public UDynamicUIConstraintBase
{
public:
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x78(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x79(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_148D[0x2];                                     // Fixing Size After Last Property..
	enum class EDynamicUIAnchor                  Anchor;                                            // 0x7C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDynamicUIAspectRatio                 MaxAspectRatio;                                    // 0x80(0x8)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        bUseSafeZone : 1;                                  // Mask: 0x1, PropSize: 0x10x88(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseMaxAspectRatio : 1;                            // Mask: 0x2, PropSize: 0x10x88(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_148E[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DynamicUIConstraintAlignment");
		return Clss;
	}

};

// 0x98 (0x110 - 0x78)
// Class DynamicUI.DynamicUIConstraintWidget
class UDynamicUIConstraintWidget : public UDynamicUIConstraintBase
{
public:
	enum class EDynamicUIAnchor                  Anchor;                                            // 0x78(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_148F[0x4];                                     // Fixing Size After Last Property..
	struct FDynamicUIWidgetTarget                TargetWidget;                                      // 0x80(0x70)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	enum class EDynamicUIAnchor                  TargetAnchor;                                      // 0xF0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1490[0x4];                                     // Fixing Size After Last Property..
	TArray<class UDynamicUIConstraintBase*>      Fallbacks;                                         // 0xF8(0x10)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        bConstrainToUnallowedWidgets : 1;                  // Mask: 0x1, PropSize: 0x10x108(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseFallbacks : 1;                                 // Mask: 0x2, PropSize: 0x10x108(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1491[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DynamicUIConstraintWidget");
		return Clss;
	}

};

// 0x28 (0xA0 - 0x78)
// Class DynamicUI.DynamicUIConstraintContainer
class UDynamicUIConstraintContainer : public UDynamicUIConstraintBase
{
public:
	TArray<struct FDynamicUIWidgetTarget>        WidgetsToContain;                                  // 0x78(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FMargin                               Padding;                                           // 0x88(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        bMustMatchAllWidgets : 1;                          // Mask: 0x1, PropSize: 0x10x98(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1492[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DynamicUIConstraintContainer");
		return Clss;
	}

};

// 0x88 (0x100 - 0x78)
// Class DynamicUI.DynamicUIConstraintReplace
class UDynamicUIConstraintReplace : public UDynamicUIConstraintBase
{
public:
	struct FDynamicUIWidgetTarget                TargetWidget;                                      // 0x78(0x70)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class UDynamicUIConstraintBase*>      Fallbacks;                                         // 0xE8(0x10)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        bUseFallbacks : 1;                                 // Mask: 0x1, PropSize: 0x10xF8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1493[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DynamicUIConstraintReplace");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class DynamicUI.DynamicUIConstraintOverrideBase
class UDynamicUIConstraintOverrideBase : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DynamicUIConstraintOverrideBase");
		return Clss;
	}

};

// 0xA8 (0xD0 - 0x28)
// Class DynamicUI.DynamicUIConstraintPlatformOverride
class UDynamicUIConstraintPlatformOverride : public UDynamicUIConstraintOverrideBase
{
public:
	TMap<class FName, class UDynamicUIConstraintBase*> PlatformVisibilityControls;                        // 0x28(0x50)(Edit, ExportObject, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<enum class ECommonInputType, class UDynamicUIConstraintBase*> InputTypeVisibilityControls;                       // 0x78(0x50)(Edit, ExportObject, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_1494[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DynamicUIConstraintPlatformOverride");
		return Clss;
	}

};

// 0x68 (0x98 - 0x30)
// Class DynamicUI.DynamicUIManager
class UDynamicUIManager : public UWorldSubsystem
{
public:
	uint8                                        Pad_1495[0x18];                                    // Fixing Size After Last Property..
	TMap<TWeakObjectPtr<class ULocalPlayer>, struct FDynamicUIPlayerData> PlayerDataMap;                                     // 0x48(0x50)(Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DynamicUIManager");
		return Clss;
	}

	void RemoveScenes(const TArray<class UDynamicUIScene*>& Scenes, class APlayerController*& Player);
	void RemoveSceneFromFirstLocalPlayer(class UDynamicUIScene* Scene);
	void RemoveScene(class UDynamicUIScene* Scene, class APlayerController*& Player);
	void AddSceneToFirstLocalPlayer(class UDynamicUIScene* Scene);
	void AddScenes(const TArray<class UDynamicUIScene*>& Scenes, class APlayerController*& Player);
	void AddScene(class UDynamicUIScene* Scene, class APlayerController*& Player);
};

// 0x38 (0x68 - 0x30)
// Class DynamicUI.DynamicUIScene
class UDynamicUIScene : public UDataAsset
{
public:
	uint8                                        LayerID;                                           // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1496[0x7];                                     // Fixing Size After Last Property..
	TArray<struct FDynamicUIAllowed>             Allowed;                                           // 0x38(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class UDynamicUIUnallowBase*>         Unallow;                                           // 0x48(0x10)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FDynamicUIPreload>             Preload;                                           // 0x58(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DynamicUIScene");
		return Clss;
	}

};

// 0x40 (0x68 - 0x28)
// Class DynamicUI.DynamicUISizeBase
class UDynamicUISizeBase : public UObject
{
public:
	uint8                                        Pad_1497[0x30];                                    // Fixing Size After Last Property..
	class UDynamicUISizeOverrideBase*            SizeOverride;                                      // 0x58(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseOverride : 1;                                  // Mask: 0x1, PropSize: 0x10x60(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseRenderTransform : 1;                           // Mask: 0x2, PropSize: 0x10x60(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1498[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DynamicUISizeBase");
		return Clss;
	}

};

// 0x8 (0x70 - 0x68)
// Class DynamicUI.DynamicUISizeFixed
class UDynamicUISizeFixed : public UDynamicUISizeBase
{
public:
	struct FVector2f                             Size;                                              // 0x68(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DynamicUISizeFixed");
		return Clss;
	}

};

// 0x8 (0x70 - 0x68)
// Class DynamicUI.DynamicUISizeScale
class UDynamicUISizeScale : public UDynamicUISizeBase
{
public:
	struct FVector2f                             Scale;                                             // 0x68(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DynamicUISizeScale");
		return Clss;
	}

};

// 0x90 (0xF8 - 0x68)
// Class DynamicUI.DynamicUISizeMatchWidget
class UDynamicUISizeMatchWidget : public UDynamicUISizeBase
{
public:
	struct FDynamicUIWidgetTarget                TargetWidget;                                      // 0x68(0x70)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	enum class EDynamicUISizeMatch               MatchType;                                         // 0xD8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1499[0x4];                                     // Fixing Size After Last Property..
	TArray<class UDynamicUISizeBase*>            Fallbacks;                                         // 0xE0(0x10)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        bUseFallbacks : 1;                                 // Mask: 0x1, PropSize: 0x10xF0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_149A[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DynamicUISizeMatchWidget");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class DynamicUI.DynamicUISizeOverrideBase
class UDynamicUISizeOverrideBase : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DynamicUISizeOverrideBase");
		return Clss;
	}

};

// 0xA8 (0xD0 - 0x28)
// Class DynamicUI.DynamicUISizeOverridePlatform
class UDynamicUISizeOverridePlatform : public UDynamicUISizeOverrideBase
{
public:
	TMap<class FName, class UDynamicUISizeBase*> PlatformOverrides;                                 // 0x28(0x50)(Edit, ExportObject, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<enum class ECommonInputType, class UDynamicUISizeBase*> InputTypeOverrides;                                // 0x78(0x50)(Edit, ExportObject, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_149B[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DynamicUISizeOverridePlatform");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class DynamicUI.DynamicUIUnallowBase
class UDynamicUIUnallowBase : public UObject
{
public:
	enum class EDynamicUIUnallowedBehavior       Behavior;                                          // 0x28(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_149C[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DynamicUIUnallowBase");
		return Clss;
	}

};

// 0x78 (0xA8 - 0x30)
// Class DynamicUI.DynamicUIUnallowWidget
class UDynamicUIUnallowWidget : public UDynamicUIUnallowBase
{
public:
	struct FDynamicUIWidgetTarget                Widget;                                            // 0x30(0x70)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	uint8                                        bTargetAll : 1;                                    // Mask: 0x1, PropSize: 0x10xA0(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_149D[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DynamicUIUnallowWidget");
		return Clss;
	}

};

// 0x8 (0x38 - 0x30)
// Class DynamicUI.DynamicUIUnallowLayer
class UDynamicUIUnallowLayer : public UDynamicUIUnallowBase
{
public:
	uint8                                        LayerID;                                           // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDynamicUIUnallowLayerComparison  Comparison;                                        // 0x31(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_149E[0x6];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DynamicUIUnallowLayer");
		return Clss;
	}

};

// 0x28 (0x2D0 - 0x2A8)
// Class DynamicUI.DynamicUIVisualizerWidget
class UDynamicUIVisualizerWidget : public UUserWidget
{
public:
	TArray<class UDynamicUIScene*>               Scenes;                                            // 0x2A8(0x10)(Edit, ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	bool                                         bRefresh;                                          // 0x2B8(0x1)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_149F[0x17];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DynamicUIVisualizerWidget");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
