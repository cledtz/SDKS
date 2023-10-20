#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0xA8 - 0x28)
// Class InteractiveToolsFramework.InteractiveToolPropertySet
class UInteractiveToolPropertySet : public UObject
{
public:
	uint8                                        Pad_3B[0x10];                                      // Fixing Size After Last Property 
	TMap<class FString, class UInteractiveToolPropertySet*> CachedPropertiesMap;                               // 0x38(0x50)(Transient, DuplicateTransient, NonTransactional, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	bool                                         bIsPropertySetEnabled;                             // 0x88(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3D[0x1F];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInteractiveToolPropertySet* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.InteractiveToolBuilder
class UInteractiveToolBuilder : public UObject
{
public:

	static class UClass* StaticClass();
	static class UInteractiveToolBuilder* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.InteractiveToolWithToolTargetsBuilder
class UInteractiveToolWithToolTargetsBuilder : public UInteractiveToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UInteractiveToolWithToolTargetsBuilder* GetDefaultObj();

};

// 0x70 (0x98 - 0x28)
// Class InteractiveToolsFramework.InteractiveTool
class UInteractiveTool : public UObject
{
public:
	uint8                                        Pad_3F[0x38];                                      // Fixing Size After Last Property 
	class UInputBehaviorSet*                     InputBehaviors;                                    // 0x60(0x8)(ZeroConstructor, Transient, DuplicateTransient, NonTransactional, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UObject*>                       ToolPropertyObjects;                               // 0x68(0x10)(ZeroConstructor, Transient, DuplicateTransient, NonTransactional, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_40[0x20];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInteractiveTool* GetDefaultObj();

};

// 0x10 (0xA8 - 0x98)
// Class InteractiveToolsFramework.SingleSelectionTool
class USingleSelectionTool : public UInteractiveTool
{
public:
	uint8                                        Pad_41[0x8];                                       // Fixing Size After Last Property 
	class UToolTarget*                           Target;                                            // 0xA0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USingleSelectionTool* GetDefaultObj();

};

// 0x18 (0xB0 - 0x98)
// Class InteractiveToolsFramework.MultiSelectionTool
class UMultiSelectionTool : public UInteractiveTool
{
public:
	uint8                                        Pad_43[0x8];                                       // Fixing Size After Last Property 
	TArray<class UToolTarget*>                   Targets;                                           // 0xA0(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMultiSelectionTool* GetDefaultObj();

};

// 0x8 (0xA0 - 0x98)
// Class InteractiveToolsFramework.SingleClickTool
class USingleClickTool : public UInteractiveTool
{
public:
	uint8                                        Pad_45[0x8];                                       // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USingleClickTool* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class InteractiveToolsFramework.MeshSurfacePointToolBuilder
class UMeshSurfacePointToolBuilder : public UInteractiveToolWithToolTargetsBuilder
{
public:
	uint8                                        Pad_47[0x8];                                       // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMeshSurfacePointToolBuilder* GetDefaultObj();

};

// 0x58 (0x100 - 0xA8)
// Class InteractiveToolsFramework.MeshSurfacePointTool
class UMeshSurfacePointTool : public USingleSelectionTool
{
public:
	uint8                                        Pad_4A[0x50];                                      // Fixing Size After Last Property 
	TWeakObjectPtr<class UWorld>                 TargetWorld;                                       // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMeshSurfacePointTool* GetDefaultObj();

};

// 0x180 (0x280 - 0x100)
// Class InteractiveToolsFramework.BaseBrushTool
class UBaseBrushTool : public UMeshSurfacePointTool
{
public:
	class UBrushBaseProperties*                  BrushProperties;                                   // 0x100(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInBrushStroke;                                    // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D[0x3];                                       // Fixing Size After Last Property 
	float                                        WorldToLocalScale;                                 // 0x10C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBrushStampData                       LastBrushStamp;                                    // 0x110(0x128)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4F[0x10];                                      // Fixing Size After Last Property 
	TSoftClassPtr<class UBrushBaseProperties>    PropertyClass;                                     // 0x248(0x30)(Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBrushStampIndicator*                  BrushStampIndicator;                               // 0x278(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UBaseBrushTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.InteractiveCommand
class UInteractiveCommand : public UObject
{
public:

	static class UClass* StaticClass();
	static class UInteractiveCommand* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class InteractiveToolsFramework.InteractionMechanic
class UInteractionMechanic : public UObject
{
public:
	uint8                                        Pad_56[0x8];                                       // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInteractionMechanic* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class InteractiveToolsFramework.InteractiveCommandArguments
class UInteractiveCommandArguments : public UObject
{
public:
	uint8                                        Pad_58[0x8];                                       // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInteractiveCommandArguments* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.InteractiveCommandResult
class UInteractiveCommandResult : public UObject
{
public:

	static class UClass* StaticClass();
	static class UInteractiveCommandResult* GetDefaultObj();

};

// 0x8 (0x298 - 0x290)
// Class InteractiveToolsFramework.InternalToolFrameworkActor
class UInternalToolFrameworkActor : public UActor
{
public:
	bool                                         bIsSelectableInEditor;                             // 0x290(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E[0x7];                                       // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInternalToolFrameworkActor* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.SceneSnappingManager
class USceneSnappingManager : public UObject
{
public:

	static class UClass* StaticClass();
	static class USceneSnappingManager* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.AssetBackedTarget
class UAssetBackedTarget : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UAssetBackedTarget* GetDefaultObj();

};

// 0x30 (0x598 - 0x568)
// Class InteractiveToolsFramework.GizmoBaseComponent
class UGizmoBaseComponent : public UPrimitiveComponent
{
public:
	struct FLinearColor                          Color;                                             // 0x568(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HoverSizeMultiplier;                               // 0x578(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PixelHitDistanceThreshold;                         // 0x57C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6C[0x8];                                       // Fixing Size After Last Property 
	class UGizmoViewContext*                     GizmoViewContext;                                  // 0x588(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_6E[0x8];                                       // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGizmoBaseComponent* GetDefaultObj();

	void UpdateWorldLocalState(bool bWorldIn);
	void UpdateHoverState(bool bHoveringIn);
};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.InteractiveGizmoBuilder
class UInteractiveGizmoBuilder : public UObject
{
public:

	static class UClass* StaticClass();
	static class UInteractiveGizmoBuilder* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.ToolContextTransactionProvider
class UToolContextTransactionProvider : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UToolContextTransactionProvider* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.ToolFrameworkComponent
class UToolFrameworkComponent : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UToolFrameworkComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.InteractiveToolCameraFocusAPI
class UInteractiveToolCameraFocusAPI : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UInteractiveToolCameraFocusAPI* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.InteractiveToolNestedAcceptCancelAPI
class UInteractiveToolNestedAcceptCancelAPI : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UInteractiveToolNestedAcceptCancelAPI* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.InteractiveToolExclusiveToolAPI
class UInteractiveToolExclusiveToolAPI : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UInteractiveToolExclusiveToolAPI* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.MaterialProvider
class UMaterialProvider : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UMaterialProvider* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.MeshDescriptionCommitter
class UMeshDescriptionCommitter : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UMeshDescriptionCommitter* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.MeshDescriptionProvider
class UMeshDescriptionProvider : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UMeshDescriptionProvider* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class InteractiveToolsFramework.GizmoBaseVec2ParameterSource
class UGizmoBaseVec2ParameterSource : public UObject
{
public:
	uint8                                        Pad_83[0x20];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGizmoBaseVec2ParameterSource* GetDefaultObj();

};

// 0x30 (0x78 - 0x48)
// Class InteractiveToolsFramework.GizmoLocalVec2ParameterSource
class UGizmoLocalVec2ParameterSource : public UGizmoBaseVec2ParameterSource
{
public:
	struct FVector2D                             Value;                                             // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGizmoVec2ParameterChange             LastChange;                                        // 0x58(0x20)(NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGizmoLocalVec2ParameterSource* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class InteractiveToolsFramework.GizmoBaseFloatParameterSource
class UGizmoBaseFloatParameterSource : public UObject
{
public:
	uint8                                        Pad_89[0x20];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGizmoBaseFloatParameterSource* GetDefaultObj();

};

// 0x148 (0x190 - 0x48)
// Class InteractiveToolsFramework.GizmoAxisTranslationParameterSource
class UGizmoAxisTranslationParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	uint8                                        Pad_8D[0x88];                                      // Fixing Size After Last Property 
	TScriptInterface<class UGizmoAxisSource>     AxisSource;                                        // 0xD0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class UGizmoTransformSource> TransformSource;                                   // 0xE0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Parameter;                                         // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGizmoFloatParameterChange            LastChange;                                        // 0xF4(0x8)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_8E[0x4];                                       // Fixing Size After Last Property 
	struct FVector                               CurTranslationAxis;                                // 0x100(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CurTranslationOrigin;                              // 0x118(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            InitialTransform;                                  // 0x130(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGizmoAxisTranslationParameterSource* GetDefaultObj();

};

// 0x1D8 (0x220 - 0x48)
// Class InteractiveToolsFramework.GizmoPlaneTranslationParameterSource
class UGizmoPlaneTranslationParameterSource : public UGizmoBaseVec2ParameterSource
{
public:
	uint8                                        Pad_95[0xC8];                                      // Fixing Size After Last Property 
	TScriptInterface<class UGizmoAxisSource>     AxisSource;                                        // 0x110(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class UGizmoTransformSource> TransformSource;                                   // 0x120(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Parameter;                                         // 0x130(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGizmoVec2ParameterChange             LastChange;                                        // 0x140(0x20)(NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               CurTranslationOrigin;                              // 0x160(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CurTranslationNormal;                              // 0x178(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CurTranslationAxisX;                               // 0x190(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CurTranslationAxisY;                               // 0x1A8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            InitialTransform;                                  // 0x1C0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGizmoPlaneTranslationParameterSource* GetDefaultObj();

};

// 0x148 (0x190 - 0x48)
// Class InteractiveToolsFramework.GizmoAxisRotationParameterSource
class UGizmoAxisRotationParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	uint8                                        Pad_9D[0x88];                                      // Fixing Size After Last Property 
	TScriptInterface<class UGizmoAxisSource>     AxisSource;                                        // 0xD0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class UGizmoTransformSource> TransformSource;                                   // 0xE0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Angle;                                             // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGizmoFloatParameterChange            LastChange;                                        // 0xF4(0x8)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0[0x4];                                       // Fixing Size After Last Property 
	struct FVector                               CurRotationAxis;                                   // 0x100(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CurRotationOrigin;                                 // 0x118(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            InitialTransform;                                  // 0x130(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGizmoAxisRotationParameterSource* GetDefaultObj();

};

// 0x118 (0x160 - 0x48)
// Class InteractiveToolsFramework.GizmoUniformScaleParameterSource
class UGizmoUniformScaleParameterSource : public UGizmoBaseVec2ParameterSource
{
public:
	TScriptInterface<class UGizmoAxisSource>     AxisSource;                                        // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class UGizmoTransformSource> TransformSource;                                   // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScaleMultiplier;                                   // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2[0x4];                                       // Fixing Size After Last Property 
	struct FVector2D                             Parameter;                                         // 0x70(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGizmoVec2ParameterChange             LastChange;                                        // 0x80(0x20)(NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               CurScaleOrigin;                                    // 0xA0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CurScaleNormal;                                    // 0xB8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CurScaleAxisX;                                     // 0xD0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CurScaleAxisY;                                     // 0xE8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            InitialTransform;                                  // 0x100(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGizmoUniformScaleParameterSource* GetDefaultObj();

};

// 0xC8 (0x110 - 0x48)
// Class InteractiveToolsFramework.GizmoAxisScaleParameterSource
class UGizmoAxisScaleParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	TScriptInterface<class UGizmoAxisSource>     AxisSource;                                        // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class UGizmoTransformSource> TransformSource;                                   // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScaleMultiplier;                                   // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClampToZero;                                      // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A5[0x3];                                       // Fixing Size After Last Property 
	float                                        Parameter;                                         // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGizmoFloatParameterChange            LastChange;                                        // 0x74(0x8)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_A6[0x4];                                       // Fixing Size After Last Property 
	struct FVector                               CurScaleAxis;                                      // 0x80(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CurScaleOrigin;                                    // 0x98(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            InitialTransform;                                  // 0xB0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGizmoAxisScaleParameterSource* GetDefaultObj();

};

// 0x168 (0x1B0 - 0x48)
// Class InteractiveToolsFramework.GizmoPlaneScaleParameterSource
class UGizmoPlaneScaleParameterSource : public UGizmoBaseVec2ParameterSource
{
public:
	uint8                                        Pad_A8[0x48];                                      // Fixing Size After Last Property 
	TScriptInterface<class UGizmoAxisSource>     AxisSource;                                        // 0x90(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class UGizmoTransformSource> TransformSource;                                   // 0xA0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScaleMultiplier;                                   // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseEqualScaling;                                  // 0xB4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClampToZero;                                      // 0xB5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AA[0x2];                                       // Fixing Size After Last Property 
	struct FVector2D                             Parameter;                                         // 0xB8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGizmoVec2ParameterChange             LastChange;                                        // 0xC8(0x20)(NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               CurScaleOrigin;                                    // 0xE8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CurScaleNormal;                                    // 0x100(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CurScaleAxisX;                                     // 0x118(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CurScaleAxisY;                                     // 0x130(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AB[0x8];                                       // Fixing Size After Last Property 
	struct FTransform                            InitialTransform;                                  // 0x150(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGizmoPlaneScaleParameterSource* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.PhysicsDataSource
class UPhysicsDataSource : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UPhysicsDataSource* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.PrimitiveComponentBackedTarget
class UPrimitiveComponentBackedTarget : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UPrimitiveComponentBackedTarget* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.SkeletalMeshBackedTarget
class USkeletalMeshBackedTarget : public UAssetBackedTarget
{
public:

	static class UClass* StaticClass();
	static class USkeletalMeshBackedTarget* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.StaticMeshBackedTarget
class UStaticMeshBackedTarget : public UAssetBackedTarget
{
public:

	static class UClass* StaticClass();
	static class UStaticMeshBackedTarget* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class InteractiveToolsFramework.InputBehavior
class UInputBehavior : public UObject
{
public:
	uint8                                        Pad_C5[0x8];                                       // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInputBehavior* GetDefaultObj();

};

// 0x50 (0x80 - 0x30)
// Class InteractiveToolsFramework.AnyButtonInputBehavior
class UAnyButtonInputBehavior : public UInputBehavior
{
public:
	uint8                                        Pad_C7[0x50];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAnyButtonInputBehavior* GetDefaultObj();

};

// 0xC0 (0x140 - 0x80)
// Class InteractiveToolsFramework.ClickDragInputBehavior
class UClickDragInputBehavior : public UAnyButtonInputBehavior
{
public:
	uint8                                        Pad_E7[0xA0];                                      // Fixing Size After Last Property 
	bool                                         bUpdateModifiersDuringDrag;                        // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E8[0x1F];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UClickDragInputBehavior* GetDefaultObj();

};

// 0x140 (0x280 - 0x140)
// Class InteractiveToolsFramework.LocalClickDragInputBehavior
class ULocalClickDragInputBehavior : public UClickDragInputBehavior
{
public:
	uint8                                        Pad_ED[0x140];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class ULocalClickDragInputBehavior* GetDefaultObj();

};

// 0x68 (0x98 - 0x30)
// Class InteractiveToolsFramework.KeyAsModifierInputBehavior
class UKeyAsModifierInputBehavior : public UInputBehavior
{
public:
	uint8                                        Pad_F3[0x68];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UKeyAsModifierInputBehavior* GetDefaultObj();

};

// 0x68 (0x98 - 0x30)
// Class InteractiveToolsFramework.MouseHoverBehavior
class UMouseHoverBehavior : public UInputBehavior
{
public:
	uint8                                        Pad_F8[0x68];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMouseHoverBehavior* GetDefaultObj();

};

// 0x148 (0x1E0 - 0x98)
// Class InteractiveToolsFramework.LocalMouseHoverBehavior
class ULocalMouseHoverBehavior : public UMouseHoverBehavior
{
public:
	uint8                                        Pad_F9[0x148];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class ULocalMouseHoverBehavior* GetDefaultObj();

};

// 0xB0 (0x130 - 0x80)
// Class InteractiveToolsFramework.MouseWheelInputBehavior
class UMouseWheelInputBehavior : public UAnyButtonInputBehavior
{
public:
	uint8                                        Pad_FB[0xB0];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMouseWheelInputBehavior* GetDefaultObj();

};

// 0xB0 (0x130 - 0x80)
// Class InteractiveToolsFramework.MultiClickSequenceInputBehavior
class UMultiClickSequenceInputBehavior : public UAnyButtonInputBehavior
{
public:
	uint8                                        Pad_FC[0xB0];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMultiClickSequenceInputBehavior* GetDefaultObj();

};

// 0xB0 (0x130 - 0x80)
// Class InteractiveToolsFramework.SingleClickInputBehavior
class USingleClickInputBehavior : public UAnyButtonInputBehavior
{
public:
	uint8                                        Pad_FF[0x40];                                      // Fixing Size After Last Property 
	bool                                         HitTestOnRelease;                                  // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_100[0x6F];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USingleClickInputBehavior* GetDefaultObj();

};

// 0xD0 (0x200 - 0x130)
// Class InteractiveToolsFramework.LocalSingleClickInputBehavior
class ULocalSingleClickInputBehavior : public USingleClickInputBehavior
{
public:
	uint8                                        Pad_101[0xD0];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class ULocalSingleClickInputBehavior* GetDefaultObj();

};

// 0x100 (0x180 - 0x80)
// Class InteractiveToolsFramework.SingleClickOrDragInputBehavior
class USingleClickOrDragInputBehavior : public UAnyButtonInputBehavior
{
public:
	uint8                                        Pad_103[0xA0];                                     // Fixing Size After Last Property 
	bool                                         bBeginDragIfClickTargetNotHit;                     // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_104[0x3];                                      // Fixing Size After Last Property 
	float                                        ClickDistanceThreshold;                            // 0x124(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_105[0x58];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USingleClickOrDragInputBehavior* GetDefaultObj();

};

// 0xE0 (0x110 - 0x30)
// Class InteractiveToolsFramework.SingleKeyCaptureBehavior
class USingleKeyCaptureBehavior : public UInputBehavior
{
public:
	uint8                                        Pad_106[0xE0];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USingleKeyCaptureBehavior* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.WidgetBaseBehavior
class UWidgetBaseBehavior : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UWidgetBaseBehavior* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.AxisAngleGizmoBuilder
class UAxisAngleGizmoBuilder : public UInteractiveGizmoBuilder
{
public:

	static class UClass* StaticClass();
	static class UAxisAngleGizmoBuilder* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class InteractiveToolsFramework.InteractiveGizmo
class UInteractiveGizmo : public UObject
{
public:
	uint8                                        Pad_108[0x8];                                      // Fixing Size After Last Property 
	class UInputBehaviorSet*                     InputBehaviors;                                    // 0x30(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UInteractiveGizmo* GetDefaultObj();

};

// 0x198 (0x1D0 - 0x38)
// Class InteractiveToolsFramework.AxisAngleGizmo
class UAxisAngleGizmo : public UInteractiveGizmo
{
public:
	uint8                                        Pad_10A[0x10];                                     // Fixing Size After Last Property 
	TScriptInterface<class UGizmoAxisSource>     AxisSource;                                        // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class UGizmoFloatParameterSource> AngleSource;                                       // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class UGizmoClickTarget>    HitTarget;                                         // 0x68(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class UGizmoStateTarget>    StateTarget;                                       // 0x78(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClickDragInputBehavior*               MouseBehavior;                                     // 0x88(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10C[0x80];                                     // Fixing Size After Last Property 
	bool                                         bInInteraction;                                    // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10D[0x7];                                      // Fixing Size After Last Property 
	struct FVector                               RotationOrigin;                                    // 0x118(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RotationAxis;                                      // 0x130(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RotationPlaneX;                                    // 0x148(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RotationPlaneY;                                    // 0x160(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InteractionStartPoint;                             // 0x178(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InteractionCurPoint;                               // 0x190(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InteractionStartAngle;                             // 0x1A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InteractionCurAngle;                               // 0x1AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10E[0x20];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAxisAngleGizmo* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.AxisPositionGizmoBuilder
class UAxisPositionGizmoBuilder : public UInteractiveGizmoBuilder
{
public:

	static class UClass* StaticClass();
	static class UAxisPositionGizmoBuilder* GetDefaultObj();

};

// 0x188 (0x1C0 - 0x38)
// Class InteractiveToolsFramework.AxisPositionGizmo
class UAxisPositionGizmo : public UInteractiveGizmo
{
public:
	uint8                                        Pad_10F[0x10];                                     // Fixing Size After Last Property 
	TScriptInterface<class UGizmoAxisSource>     AxisSource;                                        // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class UGizmoFloatParameterSource> ParameterSource;                                   // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGizmoViewContext*                     GizmoViewContext;                                  // 0x68(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class UGizmoClickTarget>    HitTarget;                                         // 0x70(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class UGizmoStateTarget>    StateTarget;                                       // 0x80(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClickDragInputBehavior*               MouseBehavior;                                     // 0x90(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableSignedAxis;                                 // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_113[0x88];                                     // Fixing Size After Last Property 
	bool                                         bInInteraction;                                    // 0x121(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_114[0x6];                                      // Fixing Size After Last Property 
	struct FVector                               InteractionOrigin;                                 // 0x128(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InteractionAxis;                                   // 0x140(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InteractionStartPoint;                             // 0x158(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InteractionCurPoint;                               // 0x170(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InteractionStartParameter;                         // 0x188(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InteractionCurParameter;                           // 0x18C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ParameterSign;                                     // 0x190(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_116[0x2C];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAxisPositionGizmo* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class InteractiveToolsFramework.GizmoConstantAxisSource
class UGizmoConstantAxisSource : public UObject
{
public:
	uint8                                        Pad_119[0x8];                                      // Fixing Size After Last Property 
	struct FVector                               Origin;                                            // 0x30(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Direction;                                         // 0x48(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGizmoConstantAxisSource* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class InteractiveToolsFramework.GizmoConstantFrameAxisSource
class UGizmoConstantFrameAxisSource : public UObject
{
public:
	uint8                                        Pad_11D[0x8];                                      // Fixing Size After Last Property 
	struct FVector                               Origin;                                            // 0x30(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Direction;                                         // 0x48(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TangentX;                                          // 0x60(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TangentY;                                          // 0x78(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGizmoConstantFrameAxisSource* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class InteractiveToolsFramework.GizmoWorldAxisSource
class UGizmoWorldAxisSource : public UObject
{
public:
	uint8                                        Pad_121[0x8];                                      // Fixing Size After Last Property 
	struct FVector                               Origin;                                            // 0x30(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AxisIndex;                                         // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_122[0x4];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGizmoWorldAxisSource* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class InteractiveToolsFramework.GizmoComponentAxisSource
class UGizmoComponentAxisSource : public UObject
{
public:
	uint8                                        Pad_124[0x8];                                      // Fixing Size After Last Property 
	class USceneComponent*                       Component;                                         // 0x30(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AxisIndex;                                         // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLocalAxes;                                        // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_126[0x3];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGizmoComponentAxisSource* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.BrushStampIndicatorBuilder
class UBrushStampIndicatorBuilder : public UInteractiveGizmoBuilder
{
public:

	static class UClass* StaticClass();
	static class UBrushStampIndicatorBuilder* GetDefaultObj();

};

// 0xA0 (0xD8 - 0x38)
// Class InteractiveToolsFramework.BrushStampIndicator
class UBrushStampIndicator : public UInteractiveGizmo
{
public:
	bool                                         bVisible;                                          // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12B[0x3];                                      // Fixing Size After Last Property 
	float                                        BrushRadius;                                       // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BrushFalloff;                                      // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12C[0x4];                                      // Fixing Size After Last Property 
	struct FVector                               BrushPosition;                                     // 0x48(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               BrushNormal;                                       // 0x60(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawIndicatorLines;                               // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawRadiusCircle;                                 // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12E[0x2];                                      // Fixing Size After Last Property 
	int32                                        SampleStepCount;                                   // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          LineColor;                                         // 0x80(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LineThickness;                                     // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDepthTested;                                      // 0x94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawSecondaryLines;                               // 0x95(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12F[0x2];                                      // Fixing Size After Last Property 
	float                                        SecondaryLineThickness;                            // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SecondaryLineColor;                                // 0x9C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_132[0x4];                                      // Fixing Size After Last Property 
	class UPrimitiveComponent*                   AttachedComponent;                                 // 0xB0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_133[0x20];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UBrushStampIndicator* GetDefaultObj();

};

// 0x0 (0x298 - 0x298)
// Class InteractiveToolsFramework.GizmoActor
class UGizmoActor : public UInternalToolFrameworkActor
{
public:

	static class UClass* StaticClass();
	static class UGizmoActor* GetDefaultObj();

};

// 0x88 (0x320 - 0x298)
// Class InteractiveToolsFramework.CombinedTransformGizmoActor
class UCombinedTransformGizmoActor : public UGizmoActor
{
public:
	class UPrimitiveComponent*                   TranslateX;                                        // 0x298(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   TranslateY;                                        // 0x2A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   TranslateZ;                                        // 0x2A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   TranslateYZ;                                       // 0x2B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   TranslateXZ;                                       // 0x2B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   TranslateXY;                                       // 0x2C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   RotateX;                                           // 0x2C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   RotateY;                                           // 0x2D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   RotateZ;                                           // 0x2D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   RotationSphere;                                    // 0x2E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   UniformScale;                                      // 0x2E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   AxisScaleX;                                        // 0x2F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   AxisScaleY;                                        // 0x2F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   AxisScaleZ;                                        // 0x300(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   PlaneScaleYZ;                                      // 0x308(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   PlaneScaleXZ;                                      // 0x310(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   PlaneScaleXY;                                      // 0x318(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCombinedTransformGizmoActor* GetDefaultObj();

};

// 0xC8 (0xF0 - 0x28)
// Class InteractiveToolsFramework.CombinedTransformGizmoBuilder
class UCombinedTransformGizmoBuilder : public UInteractiveGizmoBuilder
{
public:
	uint8                                        Pad_148[0xC8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UCombinedTransformGizmoBuilder* GetDefaultObj();

};

// 0x368 (0x3A0 - 0x38)
// Class InteractiveToolsFramework.CombinedTransformGizmo
class UCombinedTransformGizmo : public UInteractiveGizmo
{
public:
	class UTransformProxy*                       ActiveTarget;                                      // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSnapToWorldGrid;                                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14B[0x3];                                      // Fixing Size After Last Property 
	bool                                         bGridSizeIsExplicit;                               // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14C[0x3];                                      // Fixing Size After Last Property 
	struct FVector                               ExplicitGridSize;                                  // 0x48(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRotationGridSizeIsExplicit;                       // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14D[0x7];                                      // Fixing Size After Last Property 
	struct FRotator                              ExplicitRotationGridSize;                          // 0x68(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bSnapToWorldRotGrid;                               // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseContextCoordinateSystem;                       // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14F[0x2];                                      // Fixing Size After Last Property 
	enum class EToolContextCoordinateSystem      CurrentCoordinateSystem;                           // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseContextGizmoMode;                              // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EToolContextTransformGizmoMode    ActiveGizmoMode;                                   // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_152[0x126];                                    // Fixing Size After Last Property 
	TArray<class UPrimitiveComponent*>           ActiveComponents;                                  // 0x1B0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UInteractiveGizmo*>             ActiveGizmos;                                      // 0x1C0(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_154[0x50];                                     // Fixing Size After Last Property 
	class UGizmoConstantFrameAxisSource*         CameraAxisSource;                                  // 0x220(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoComponentAxisSource*             AxisXSource;                                       // 0x228(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoComponentAxisSource*             AxisYSource;                                       // 0x230(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoComponentAxisSource*             AxisZSource;                                       // 0x238(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoComponentAxisSource*             UnitAxisXSource;                                   // 0x240(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoComponentAxisSource*             UnitAxisYSource;                                   // 0x248(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoComponentAxisSource*             UnitAxisZSource;                                   // 0x250(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoTransformChangeStateTarget*      StateTarget;                                       // 0x258(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_156[0x140];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UCombinedTransformGizmo* GetDefaultObj();

};

// 0x28 (0x5C0 - 0x598)
// Class InteractiveToolsFramework.GizmoArrowComponent
class UGizmoArrowComponent : public UGizmoBaseComponent
{
public:
	struct FVector                               Direction;                                         // 0x598(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Gap;                                               // 0x5B0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Length;                                            // 0x5B4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x5B8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15B[0x4];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGizmoArrowComponent* GetDefaultObj();

};

// 0x58 (0x5F0 - 0x598)
// Class InteractiveToolsFramework.GizmoBoxComponent
class UGizmoBoxComponent : public UGizmoBaseComponent
{
public:
	struct FVector                               Origin;                                            // 0x598(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 Rotation;                                          // 0x5B0(0x20)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Dimensions;                                        // 0x5D0(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LineThickness;                                     // 0x5E8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRemoveHiddenLines;                                // 0x5EC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableAxisFlip;                                   // 0x5ED(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15F[0x2];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGizmoBoxComponent* GetDefaultObj();

};

// 0x28 (0x5C0 - 0x598)
// Class InteractiveToolsFramework.GizmoCircleComponent
class UGizmoCircleComponent : public UGizmoBaseComponent
{
public:
	struct FVector                               Normal;                                            // 0x598(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x5B0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x5B4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumSides;                                          // 0x5B8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bViewAligned;                                      // 0x5BC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawFullCircle;                                   // 0x5BD(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyAllowFrontFacingHits;                         // 0x5BE(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_160[0x1];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGizmoCircleComponent* GetDefaultObj();

};

// 0xE0 (0x108 - 0x28)
// Class InteractiveToolsFramework.GizmoElementBase
class UGizmoElementBase : public UObject
{
public:
	bool                                         bEnabled;                                          // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnabledForPerspectiveProjection;                  // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnabledForOrthographicProjection;                 // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnabledForDefaultState;                           // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnabledForHoveringState;                          // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnabledForInteractingState;                       // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_165[0x2];                                      // Fixing Size After Last Property 
	uint32                                       PartIdentifier;                                    // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGizmoElementMeshRenderStateAttributes MeshRenderAttributes;                              // 0x34(0x60)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	enum class EGizmoElementState                ElementState;                                      // 0x94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_167[0x3];                                      // Fixing Size After Last Property 
	enum class EGizmoElementInteractionState     ElementInteractionState;                           // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EGizmoElementViewDependentType    ViewDependentType;                                 // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               ViewDependentAxis;                                 // 0xA0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ViewDependentAngleTol;                             // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ViewDependentAxialMaxCosAngleTol;                  // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ViewDependentPlanarMinCosAngleTol;                 // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EGizmoElementViewAlignType        ViewAlignType;                                     // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               ViewAlignAxis;                                     // 0xC8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               ViewAlignNormal;                                   // 0xE0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ViewAlignAxialAngleTol;                            // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ViewAlignAxialMaxCosAngleTol;                      // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PixelHitDistanceThreshold;                         // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_16B[0x4];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGizmoElementBase* GetDefaultObj();

};

// 0x50 (0x158 - 0x108)
// Class InteractiveToolsFramework.GizmoElementLineBase
class UGizmoElementLineBase : public UGizmoElementBase
{
public:
	struct FGizmoElementLineRenderStateAttributes LineRenderAttributes;                              // 0x108(0x3C)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                        LineThickness;                                     // 0x144(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bScreenSpaceLine;                                  // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_170[0x3];                                      // Fixing Size After Last Property 
	float                                        HoverLineThicknessMultiplier;                      // 0x14C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        InteractLineThicknessMultiplier;                   // 0x150(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_172[0x4];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGizmoElementLineBase* GetDefaultObj();

};

// 0x70 (0x1C8 - 0x158)
// Class InteractiveToolsFramework.GizmoElementCircleBase
class UGizmoElementCircleBase : public UGizmoElementLineBase
{
public:
	struct FVector                               Center;                                            // 0x158(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               Axis0;                                             // 0x170(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               Axis1;                                             // 0x188(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	double                                       Radius;                                            // 0x1A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumSegments;                                       // 0x1A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EGizmoElementPartialType          PartialType;                                       // 0x1AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	double                                       PartialStartAngle;                                 // 0x1B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	double                                       PartialEndAngle;                                   // 0x1B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	double                                       PartialViewDependentMaxCosTol;                     // 0x1C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGizmoElementCircleBase* GetDefaultObj();

};

// 0x8 (0x1D0 - 0x1C8)
// Class InteractiveToolsFramework.GizmoElementArc
class UGizmoElementArc : public UGizmoElementCircleBase
{
public:
	double                                       InnerRadius;                                       // 0x1C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGizmoElementArc* GetDefaultObj();

};

// 0x80 (0x188 - 0x108)
// Class InteractiveToolsFramework.GizmoElementArrow
class UGizmoElementArrow : public UGizmoElementBase
{
public:
	uint8                                        Pad_17C[0x8];                                      // Fixing Size After Last Property 
	class UGizmoElementCylinder*                 CylinderElement;                                   // 0x110(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoElementCone*                     ConeElement;                                       // 0x118(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoElementBox*                      BoxElement;                                        // 0x120(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               Base;                                              // 0x128(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               Direction;                                         // 0x140(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               SideDirection;                                     // 0x158(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BodyLength;                                        // 0x170(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BodyRadius;                                        // 0x174(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HeadLength;                                        // 0x178(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HeadRadius;                                        // 0x17C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumSides;                                          // 0x180(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EGizmoElementArrowHeadType        HeadType;                                          // 0x184(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGizmoElementArrow* GetDefaultObj();

};

// 0x60 (0x168 - 0x108)
// Class InteractiveToolsFramework.GizmoElementBox
class UGizmoElementBox : public UGizmoElementBase
{
public:
	struct FVector                               Center;                                            // 0x108(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               Dimensions;                                        // 0x120(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               UpDirection;                                       // 0x138(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               SideDirection;                                     // 0x150(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGizmoElementBox* GetDefaultObj();

};

// 0x8 (0x1D0 - 0x1C8)
// Class InteractiveToolsFramework.GizmoElementCircle
class UGizmoElementCircle : public UGizmoElementCircleBase
{
public:
	bool                                         bDrawMesh;                                         // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDrawLine;                                         // 0x1C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHitMesh;                                          // 0x1CA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHitLine;                                          // 0x1CB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_182[0x4];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGizmoElementCircle* GetDefaultObj();

};

// 0x40 (0x148 - 0x108)
// Class InteractiveToolsFramework.GizmoElementCone
class UGizmoElementCone : public UGizmoElementBase
{
public:
	struct FVector                               Origin;                                            // 0x108(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               Direction;                                         // 0x120(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Height;                                            // 0x138(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Radius;                                            // 0x13C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumSides;                                          // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_186[0x4];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGizmoElementCone* GetDefaultObj();

};

// 0x40 (0x148 - 0x108)
// Class InteractiveToolsFramework.GizmoElementCylinder
class UGizmoElementCylinder : public UGizmoElementBase
{
public:
	struct FVector                               Base;                                              // 0x108(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               Direction;                                         // 0x120(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Height;                                            // 0x138(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Radius;                                            // 0x13C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumSides;                                          // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_18A[0x4];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGizmoElementCylinder* GetDefaultObj();

};

// 0x18 (0x170 - 0x158)
// Class InteractiveToolsFramework.GizmoElementGroup
class UGizmoElementGroup : public UGizmoElementLineBase
{
public:
	bool                                         bConstantScale;                                    // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHitOwner;                                         // 0x159(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_18C[0x6];                                      // Fixing Size After Last Property 
	TArray<class UGizmoElementBase*>             Elements;                                          // 0x160(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGizmoElementGroup* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class InteractiveToolsFramework.GizmoElementHitTarget
class UGizmoElementHitTarget : public UObject
{
public:
	uint8                                        Pad_18E[0x8];                                      // Fixing Size After Last Property 
	class UGizmoElementBase*                     GizmoElement;                                      // 0x30(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGizmoViewContext*                     GizmoViewContext;                                  // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTransformProxy*                       GizmoTransformProxy;                               // 0x40(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_191[0x48];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGizmoElementHitTarget* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class InteractiveToolsFramework.GizmoElementHitMultiTarget
class UGizmoElementHitMultiTarget : public UObject
{
public:
	uint8                                        Pad_194[0x8];                                      // Fixing Size After Last Property 
	class UGizmoElementBase*                     GizmoElement;                                      // 0x30(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGizmoViewContext*                     GizmoViewContext;                                  // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTransformProxy*                       GizmoTransformProxy;                               // 0x40(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_196[0x48];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGizmoElementHitMultiTarget* GetDefaultObj();

};

// 0x58 (0x1B0 - 0x158)
// Class InteractiveToolsFramework.GizmoElementRectangle
class UGizmoElementRectangle : public UGizmoElementLineBase
{
public:
	struct FVector                               Center;                                            // 0x158(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Width;                                             // 0x170(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Height;                                            // 0x174(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               UpDirection;                                       // 0x178(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               SideDirection;                                     // 0x190(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDrawMesh;                                         // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDrawLine;                                         // 0x1A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHitMesh;                                          // 0x1AA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHitLine;                                          // 0x1AB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_199[0x4];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGizmoElementRectangle* GetDefaultObj();

};

// 0x10 (0x1D8 - 0x1C8)
// Class InteractiveToolsFramework.GizmoElementTorus
class UGizmoElementTorus : public UGizmoElementCircleBase
{
public:
	double                                       InnerRadius;                                       // 0x1C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumInnerSlices;                                    // 0x1D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEndCaps;                                          // 0x1D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_19D[0x3];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGizmoElementTorus* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.GizmoTransformSource
class UGizmoTransformSource : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UGizmoTransformSource* GetDefaultObj();

	void SetTransform(struct FTransform& NewTransform);
	struct FTransform GetTransform();
};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.GizmoAxisSource
class UGizmoAxisSource : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UGizmoAxisSource* GetDefaultObj();

	bool HasTangentVectors();
	void GetTangentVectors(struct FVector* TangentXOut, struct FVector* TangentYOut);
	struct FVector GetOrigin();
	struct FVector GetDirection();
};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.GizmoClickTarget
class UGizmoClickTarget : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UGizmoClickTarget* GetDefaultObj();

	void UpdateInteractingState(bool bInteracting);
	void UpdateHoverState(bool bHovering);
};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.GizmoClickMultiTarget
class UGizmoClickMultiTarget : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UGizmoClickMultiTarget* GetDefaultObj();

	void UpdateInteractingState(bool bInteracting, uint32 InPartIdentifier);
	void UpdateHoverState(bool bHovering, uint32 InPartIdentifier);
	void UpdateHittableState(bool bHittable, uint32 InPartIdentifier);
};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.GizmoRenderTarget
class UGizmoRenderTarget : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UGizmoRenderTarget* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.GizmoRenderMultiTarget
class UGizmoRenderMultiTarget : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UGizmoRenderMultiTarget* GetDefaultObj();

	void UpdateVisibilityState(bool bVisible, uint32 InPartIdentifier);
};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.GizmoStateTarget
class UGizmoStateTarget : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UGizmoStateTarget* GetDefaultObj();

	void EndUpdate();
	void BeginUpdate();
};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.GizmoFloatParameterSource
class UGizmoFloatParameterSource : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UGizmoFloatParameterSource* GetDefaultObj();

	void SetParameter(float NewValue);
	float GetParameter();
	void EndModify();
	void BeginModify();
};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.GizmoVec2ParameterSource
class UGizmoVec2ParameterSource : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UGizmoVec2ParameterSource* GetDefaultObj();

	void SetParameter(struct FVector2D& NewValue);
	struct FVector2D GetParameter();
	void EndModify();
	void BeginModify();
};

// 0x48 (0x5E0 - 0x598)
// Class InteractiveToolsFramework.GizmoLineHandleComponent
class UGizmoLineHandleComponent : public UGizmoBaseComponent
{
public:
	struct FVector                               Normal;                                            // 0x598(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HandleSize;                                        // 0x5B0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x5B4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Direction;                                         // 0x5B8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Length;                                            // 0x5D0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bImageScale;                                       // 0x5D4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DE[0xB];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGizmoLineHandleComponent* GetDefaultObj();

};

// 0x58 (0x5F0 - 0x598)
// Class InteractiveToolsFramework.GizmoRectangleComponent
class UGizmoRectangleComponent : public UGizmoBaseComponent
{
public:
	struct FVector                               DirectionX;                                        // 0x598(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               DirectionY;                                        // 0x5B0(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOrientYAccordingToCamera;                         // 0x5C8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E3[0x3];                                      // Fixing Size After Last Property 
	float                                        OffsetX;                                           // 0x5CC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OffsetY;                                           // 0x5D0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LengthX;                                           // 0x5D4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LengthY;                                           // 0x5D8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x5DC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        SegmentFlags;                                      // 0x5E0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E4[0xF];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGizmoRectangleComponent* GetDefaultObj();

};

// 0x1B8 (0x1E0 - 0x28)
// Class InteractiveToolsFramework.GizmoViewContext
class UGizmoViewContext : public UObject
{
public:
	uint8                                        Pad_1E5[0x1B8];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGizmoViewContext* GetDefaultObj();

};

// 0xC8 (0xF0 - 0x28)
// Class InteractiveToolsFramework.GizmoLambdaHitTarget
class UGizmoLambdaHitTarget : public UObject
{
public:
	uint8                                        Pad_1E6[0xC8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGizmoLambdaHitTarget* GetDefaultObj();

};

// 0xD8 (0x100 - 0x28)
// Class InteractiveToolsFramework.GizmoComponentHitTarget
class UGizmoComponentHitTarget : public UObject
{
public:
	uint8                                        Pad_1E7[0x8];                                      // Fixing Size After Last Property 
	class UPrimitiveComponent*                   Component;                                         // 0x30(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E9[0xC8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGizmoComponentHitTarget* GetDefaultObj();

};

// 0x18 (0x2B0 - 0x298)
// Class InteractiveToolsFramework.IntervalGizmoActor
class UIntervalGizmoActor : public UGizmoActor
{
public:
	class UGizmoLineHandleComponent*             UpIntervalComponent;                               // 0x298(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGizmoLineHandleComponent*             DownIntervalComponent;                             // 0x2A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGizmoLineHandleComponent*             ForwardIntervalComponent;                          // 0x2A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UIntervalGizmoActor* GetDefaultObj();

};

// 0x98 (0xC0 - 0x28)
// Class InteractiveToolsFramework.IntervalGizmoBuilder
class UIntervalGizmoBuilder : public UInteractiveGizmoBuilder
{
public:
	uint8                                        Pad_1F1[0x98];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UIntervalGizmoBuilder* GetDefaultObj();

};

// 0x1C8 (0x200 - 0x38)
// Class InteractiveToolsFramework.IntervalGizmo
class UIntervalGizmo : public UInteractiveGizmo
{
public:
	class UGizmoTransformChangeStateTarget*      StateTarget;                                       // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F5[0x58];                                     // Fixing Size After Last Property 
	class UTransformProxy*                       TransformProxy;                                    // 0x98(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UPrimitiveComponent*>           ActiveComponents;                                  // 0xA0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UInteractiveGizmo*>             ActiveGizmos;                                      // 0xB0(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F8[0x18];                                     // Fixing Size After Last Property 
	class UGizmoComponentAxisSource*             AxisYSource;                                       // 0xD8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoComponentAxisSource*             AxisZSource;                                       // 0xE0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1FA[0x118];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UIntervalGizmo* GetDefaultObj();

};

// 0x18 (0x60 - 0x48)
// Class InteractiveToolsFramework.GizmoAxisIntervalParameterSource
class UGizmoAxisIntervalParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	TScriptInterface<class UGizmoFloatParameterSource> FloatParameterSource;                              // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinParameter;                                      // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxParameter;                                      // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGizmoAxisIntervalParameterSource* GetDefaultObj();

};

// 0x10 (0x58 - 0x48)
// Class InteractiveToolsFramework.GizmoLocalFloatParameterSource
class UGizmoLocalFloatParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	float                                        Value;                                             // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGizmoFloatParameterChange            LastChange;                                        // 0x4C(0x8)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FD[0x4];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGizmoLocalFloatParameterSource* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.PlanePositionGizmoBuilder
class UPlanePositionGizmoBuilder : public UInteractiveGizmoBuilder
{
public:

	static class UClass* StaticClass();
	static class UPlanePositionGizmoBuilder* GetDefaultObj();

};

// 0x238 (0x270 - 0x38)
// Class InteractiveToolsFramework.PlanePositionGizmo
class UPlanePositionGizmo : public UInteractiveGizmo
{
public:
	uint8                                        Pad_200[0x10];                                     // Fixing Size After Last Property 
	TScriptInterface<class UGizmoAxisSource>     AxisSource;                                        // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class UGizmoVec2ParameterSource> ParameterSource;                                   // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class UGizmoClickTarget>    HitTarget;                                         // 0x68(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class UGizmoStateTarget>    StateTarget;                                       // 0x78(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClickDragInputBehavior*               MouseBehavior;                                     // 0x88(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableSignedAxis;                                 // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFlipX;                                            // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFlipY;                                            // 0x92(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_204[0x8D];                                     // Fixing Size After Last Property 
	bool                                         bInInteraction;                                    // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_205[0x7];                                      // Fixing Size After Last Property 
	struct FVector                               InteractionOrigin;                                 // 0x128(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InteractionNormal;                                 // 0x140(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InteractionAxisX;                                  // 0x158(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InteractionAxisY;                                  // 0x170(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InteractionStartPoint;                             // 0x188(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InteractionCurPoint;                               // 0x1A0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             InteractionStartParameter;                         // 0x1B8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             InteractionCurParameter;                           // 0x1C8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ParameterSigns;                                    // 0x1D8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_207[0x88];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UPlanePositionGizmo* GetDefaultObj();

};

// 0x0 (0xF0 - 0xF0)
// Class InteractiveToolsFramework.RepositionableTransformGizmoBuilder
class URepositionableTransformGizmoBuilder : public UCombinedTransformGizmoBuilder
{
public:

	static class UClass* StaticClass();
	static class URepositionableTransformGizmoBuilder* GetDefaultObj();

};

// 0xA0 (0x440 - 0x3A0)
// Class InteractiveToolsFramework.RepositionableTransformGizmo
class URepositionableTransformGizmo : public UCombinedTransformGizmo
{
public:
	uint8                                        Pad_20C[0x90];                                     // Fixing Size After Last Property 
	class UGizmoTransformChangeStateTarget*      RepositionStateTarget;                             // 0x430(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_20D[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class URepositionableTransformGizmo* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.ScalableSphereGizmoBuilder
class UScalableSphereGizmoBuilder : public UInteractiveGizmoBuilder
{
public:

	static class UClass* StaticClass();
	static class UScalableSphereGizmoBuilder* GetDefaultObj();

};

// 0xC8 (0x100 - 0x38)
// Class InteractiveToolsFramework.ScalableSphereGizmo
class UScalableSphereGizmo : public UInteractiveGizmo
{
public:
	uint8                                        Pad_213[0x48];                                     // Fixing Size After Last Property 
	float                                        HitErrorThreshold;                                 // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_215[0x4];                                      // Fixing Size After Last Property 
	class FText                                  TransactionDescription;                            // 0x88(0x18)(NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsHovering;                                       // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsDragging;                                       // 0xA5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_216[0x2];                                      // Fixing Size After Last Property 
	class UTransformProxy*                       ActiveTarget;                                      // 0xA8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               ActiveAxis;                                        // 0xB0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               DragStartWorldPosition;                            // 0xC8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               DragCurrentPositionProjected;                      // 0xE0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        InteractionStartParameter;                         // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_218[0x4];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UScalableSphereGizmo* GetDefaultObj();

};

// 0x50 (0xD0 - 0x80)
// Class InteractiveToolsFramework.ScalableSphereGizmoInputBehavior
class UScalableSphereGizmoInputBehavior : public UAnyButtonInputBehavior
{
public:
	uint8                                        Pad_21B[0x50];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UScalableSphereGizmoInputBehavior* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class InteractiveToolsFramework.GizmoNilStateTarget
class UGizmoNilStateTarget : public UObject
{
public:
	uint8                                        Pad_21D[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGizmoNilStateTarget* GetDefaultObj();

};

// 0x88 (0xB0 - 0x28)
// Class InteractiveToolsFramework.GizmoLambdaStateTarget
class UGizmoLambdaStateTarget : public UObject
{
public:
	uint8                                        Pad_21F[0x88];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGizmoLambdaStateTarget* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class InteractiveToolsFramework.GizmoObjectModifyStateTarget
class UGizmoObjectModifyStateTarget : public UObject
{
public:
	uint8                                        Pad_221[0x28];                                     // Fixing Size After Last Property 
	TScriptInterface<class UToolContextTransactionProvider> TransactionManager;                                // 0x50(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGizmoObjectModifyStateTarget* GetDefaultObj();

};

// 0x118 (0x140 - 0x28)
// Class InteractiveToolsFramework.GizmoTransformChangeStateTarget
class UGizmoTransformChangeStateTarget : public UObject
{
public:
	uint8                                        Pad_223[0x28];                                     // Fixing Size After Last Property 
	TScriptInterface<class UToolContextTransactionProvider> TransactionManager;                                // 0x50(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_224[0xE0];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGizmoTransformChangeStateTarget* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class InteractiveToolsFramework.CombinedTransformGizmoContextObject
class UCombinedTransformGizmoContextObject : public UObject
{
public:
	uint8                                        Pad_229[0x30];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UCombinedTransformGizmoContextObject* GetDefaultObj();

};

// 0x188 (0x1B0 - 0x28)
// Class InteractiveToolsFramework.TransformProxy
class UTransformProxy : public UObject
{
public:
	uint8                                        Pad_22C[0xA8];                                     // Fixing Size After Last Property 
	bool                                         bRotatePerObject;                                  // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetPivotMode;                                     // 0xD1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22D[0x1E];                                     // Fixing Size After Last Property 
	struct FTransform                            SharedTransform;                                   // 0xF0(0x60)(IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTransform                            InitialSharedTransform;                            // 0x150(0x60)(IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UTransformProxy* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class InteractiveToolsFramework.GizmoBaseTransformSource
class UGizmoBaseTransformSource : public UObject
{
public:
	uint8                                        Pad_230[0x20];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGizmoBaseTransformSource* GetDefaultObj();

};

// 0x10 (0x58 - 0x48)
// Class InteractiveToolsFramework.GizmoComponentWorldTransformSource
class UGizmoComponentWorldTransformSource : public UGizmoBaseTransformSource
{
public:
	class USceneComponent*                       Component;                                         // 0x48(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bModifyComponentOnTransform;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_231[0x7];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGizmoComponentWorldTransformSource* GetDefaultObj();

};

// 0x98 (0xE0 - 0x48)
// Class InteractiveToolsFramework.GizmoScaledTransformSource
class UGizmoScaledTransformSource : public UGizmoBaseTransformSource
{
public:
	TScriptInterface<class UGizmoTransformSource> ChildTransformSource;                              // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_232[0x88];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGizmoScaledTransformSource* GetDefaultObj();

};

// 0x28 (0x70 - 0x48)
// Class InteractiveToolsFramework.GizmoTransformProxyTransformSource
class UGizmoTransformProxyTransformSource : public UGizmoBaseTransformSource
{
public:
	class UTransformProxy*                       Proxy;                                             // 0x48(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_233[0x20];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGizmoTransformProxyTransformSource* GetDefaultObj();

};

// 0x20 (0x68 - 0x48)
// Class InteractiveToolsFramework.GizmoScaledAndUnscaledTransformSources
class UGizmoScaledAndUnscaledTransformSources : public UGizmoBaseTransformSource
{
public:
	TScriptInterface<class UGizmoTransformSource> ScaledTransformSource;                             // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class UGizmoTransformSource> UnscaledTransformSource;                           // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGizmoScaledAndUnscaledTransformSources* GetDefaultObj();

};

// 0x18 (0xC0 - 0xA8)
// Class InteractiveToolsFramework.BrushBaseProperties
class UBrushBaseProperties : public UInteractiveToolPropertySet
{
public:
	float                                        BrushSize;                                         // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSpecifyRadius;                                    // 0xAC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_237[0x3];                                      // Fixing Size After Last Property 
	float                                        BrushRadius;                                       // 0xB0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BrushStrength;                                     // 0xB4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BrushFalloffAmount;                                // 0xB8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowStrength;                                     // 0xBC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowFalloff;                                      // 0xBD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_239[0x2];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UBrushBaseProperties* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.ClickDragToolBuilder
class UClickDragToolBuilder : public UInteractiveToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UClickDragToolBuilder* GetDefaultObj();

};

// 0x8 (0xA0 - 0x98)
// Class InteractiveToolsFramework.ClickDragTool
class UClickDragTool : public UInteractiveTool
{
public:
	uint8                                        Pad_23C[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UClickDragTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.SingleClickToolBuilder
class USingleClickToolBuilder : public UInteractiveToolBuilder
{
public:

	static class UClass* StaticClass();
	static class USingleClickToolBuilder* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class InteractiveToolsFramework.ContextObjectStore
class UContextObjectStore : public UObject
{
public:
	TArray<class UObject*>                       ContextObjects;                                    // 0x28(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UContextObjectStore* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class InteractiveToolsFramework.InputBehaviorSet
class UInputBehaviorSet : public UObject
{
public:
	TArray<struct FBehaviorInfo>                 Behaviors;                                         // 0x28(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UInputBehaviorSet* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.InputBehaviorSource
class UInputBehaviorSource : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UInputBehaviorSource* GetDefaultObj();

};

// 0x48 (0x70 - 0x28)
// Class InteractiveToolsFramework.LocalInputBehaviorSource
class ULocalInputBehaviorSource : public UObject
{
public:
	uint8                                        Pad_248[0x48];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class ULocalInputBehaviorSource* GetDefaultObj();

};

// 0x168 (0x190 - 0x28)
// Class InteractiveToolsFramework.InputRouter
class UInputRouter : public UObject
{
public:
	bool                                         bAutoInvalidateOnHover;                            // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoInvalidateOnCapture;                          // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24B[0xE];                                      // Fixing Size After Last Property 
	class UInputBehaviorSet*                     ActiveInputBehaviors;                              // 0x38(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_24C[0x150];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInputRouter* GetDefaultObj();

};

// 0x98 (0xC0 - 0x28)
// Class InteractiveToolsFramework.InteractiveGizmoManager
class UInteractiveGizmoManager : public UObject
{
public:
	uint8                                        Pad_24D[0x8];                                      // Fixing Size After Last Property 
	TArray<struct FActiveGizmo>                  ActiveGizmos;                                      // 0x30(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_24E[0x18];                                     // Fixing Size After Last Property 
	TMap<class FString, class UInteractiveGizmoBuilder*> GizmoBuilders;                                     // 0x58(0x50)(Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_24F[0x18];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInteractiveGizmoManager* GetDefaultObj();

};

// 0x170 (0x198 - 0x28)
// Class InteractiveToolsFramework.InteractiveToolManager
class UInteractiveToolManager : public UObject
{
public:
	uint8                                        Pad_251[0x30];                                     // Fixing Size After Last Property 
	class UInteractiveTool*                      ActiveLeftTool;                                    // 0x58(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInteractiveTool*                      ActiveRightTool;                                   // 0x60(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_252[0x80];                                     // Fixing Size After Last Property 
	TMap<class FString, class UInteractiveToolBuilder*> ToolBuilders;                                      // 0xE8(0x50)(Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_253[0x60];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInteractiveToolManager* GetDefaultObj();

};

// 0x308 (0x330 - 0x28)
// Class InteractiveToolsFramework.InteractiveToolsContext
class UInteractiveToolsContext : public UObject
{
public:
	uint8                                        Pad_254[0x30];                                     // Fixing Size After Last Property 
	class UInputRouter*                          InputRouter;                                       // 0x58(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UToolTargetManager*                    TargetManager;                                     // 0x60(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInteractiveToolManager*               ToolManager;                                       // 0x68(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInteractiveGizmoManager*              GizmoManager;                                      // 0x70(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UContextObjectStore*                   ContextObjectStore;                                // 0x78(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_255[0x280];                                    // Fixing Size After Last Property 
	TSoftClassPtr<class UInteractiveToolManager> ToolManagerClass;                                  // 0x300(0x30)(Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UInteractiveToolsContext* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class InteractiveToolsFramework.SelectionSet
class USelectionSet : public UObject
{
public:
	uint8                                        Pad_257[0x18];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USelectionSet* GetDefaultObj();

};

// 0x40 (0x80 - 0x40)
// Class InteractiveToolsFramework.MeshSelectionSet
class UMeshSelectionSet : public USelectionSet
{
public:
	TArray<int32>                                Vertices;                                          // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                Edges;                                             // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                Faces;                                             // 0x60(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                Groups;                                            // 0x70(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMeshSelectionSet* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class InteractiveToolsFramework.ToolTargetManager
class UToolTargetManager : public UObject
{
public:
	uint8                                        Pad_259[0x8];                                      // Fixing Size After Last Property 
	TArray<class UToolTargetFactory*>            Factories;                                         // 0x30(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UToolTargetManager* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.ToolTarget
class UToolTarget : public UObject
{
public:

	static class UClass* StaticClass();
	static class UToolTarget* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class InteractiveToolsFramework.PrimitiveComponentToolTarget
class UPrimitiveComponentToolTarget : public UToolTarget
{
public:
	uint8                                        Pad_25B[0x10];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UPrimitiveComponentToolTarget* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.ToolTargetFactory
class UToolTargetFactory : public UObject
{
public:

	static class UClass* StaticClass();
	static class UToolTargetFactory* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.PrimitiveComponentToolTargetFactory
class UPrimitiveComponentToolTargetFactory : public UToolTargetFactory
{
public:

	static class UClass* StaticClass();
	static class UPrimitiveComponentToolTargetFactory* GetDefaultObj();

};

}


