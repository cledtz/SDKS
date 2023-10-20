#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class ModelingComponents.SingleTargetWithSelectionToolBuilder
class USingleTargetWithSelectionToolBuilder : public UInteractiveToolWithToolTargetsBuilder
{
public:

	static class UClass* StaticClass();
	static class USingleTargetWithSelectionToolBuilder* GetDefaultObj();

};

// 0x68 (0x110 - 0xA8)
// Class ModelingComponents.SingleTargetWithSelectionTool
class USingleTargetWithSelectionTool : public USingleSelectionTool
{
public:
	TWeakObjectPtr<class UWorld>                 TargetWorld;                                       // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2F2[0x60];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USingleTargetWithSelectionTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ModelingComponents.MultiSelectionMeshEditingToolBuilder
class UMultiSelectionMeshEditingToolBuilder : public UInteractiveToolWithToolTargetsBuilder
{
public:

	static class UClass* StaticClass();
	static class UMultiSelectionMeshEditingToolBuilder* GetDefaultObj();

};

// 0x8 (0xB8 - 0xB0)
// Class ModelingComponents.MultiSelectionMeshEditingTool
class UMultiSelectionMeshEditingTool : public UMultiSelectionTool
{
public:
	TWeakObjectPtr<class UWorld>                 TargetWorld;                                       // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMultiSelectionMeshEditingTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ModelingComponents.SingleSelectionMeshEditingToolBuilder
class USingleSelectionMeshEditingToolBuilder : public UInteractiveToolWithToolTargetsBuilder
{
public:

	static class UClass* StaticClass();
	static class USingleSelectionMeshEditingToolBuilder* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class ModelingComponents.SingleSelectionMeshEditingTool
class USingleSelectionMeshEditingTool : public USingleSelectionTool
{
public:
	TWeakObjectPtr<class UWorld>                 TargetWorld;                                       // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPersistentMeshSelection*              InputSelection;                                    // 0xB0(0x8)(ZeroConstructor, Deprecated, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USingleSelectionMeshEditingTool* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class ModelingComponents.MeshSurfacePointMeshEditingToolBuilder
class UMeshSurfacePointMeshEditingToolBuilder : public UMeshSurfacePointToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UMeshSurfacePointMeshEditingToolBuilder* GetDefaultObj();

};

// 0x20 (0xC8 - 0xA8)
// Class ModelingComponents.WeightMapSetProperties
class UWeightMapSetProperties : public UInteractiveToolPropertySet
{
public:
	class FName                                  WeightMap;                                         // 0xA8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        WeightMapsList;                                    // 0xB0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bInvertWeightMap;                                  // 0xC0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_305[0x7];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UWeightMapSetProperties* GetDefaultObj();

	TArray<class FString> GetWeightMapsFunc();
};

// 0x358 (0x400 - 0xA8)
// Class ModelingComponents.BaseMeshProcessingTool
class UBaseMeshProcessingTool : public USingleSelectionTool
{
public:
	uint8                                        Pad_308[0x20];                                     // Fixing Size After Last Property 
	class UMeshOpPreviewWithBackgroundCompute*   Preview;                                           // 0xC8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_309[0x330];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UBaseMeshProcessingTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ModelingComponents.BaseMeshProcessingToolBuilder
class UBaseMeshProcessingToolBuilder : public UInteractiveToolWithToolTargetsBuilder
{
public:

	static class UClass* StaticClass();
	static class UBaseMeshProcessingToolBuilder* GetDefaultObj();

};

// 0x48 (0x100 - 0xB8)
// Class ModelingComponents.BaseCreateFromSelectedTool
class UBaseCreateFromSelectedTool : public UMultiSelectionMeshEditingTool
{
public:
	uint8                                        Pad_30D[0x8];                                      // Fixing Size After Last Property 
	class UTransformInputsToolProperties*        TransformProperties;                               // 0xC0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCreateMeshObjectTypeProperties*       OutputTypeProperties;                              // 0xC8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBaseCreateFromSelectedHandleSourceProperties* HandleSourcesProperties;                           // 0xD0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMeshOpPreviewWithBackgroundCompute*   Preview;                                           // 0xD8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UTransformProxy*>               TransformProxies;                                  // 0xE0(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UCombinedTransformGizmo*>       TransformGizmos;                                   // 0xF0(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UBaseCreateFromSelectedTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ModelingComponents.BaseCreateFromSelectedToolBuilder
class UBaseCreateFromSelectedToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UBaseCreateFromSelectedToolBuilder* GetDefaultObj();

};

// 0x18 (0x118 - 0x100)
// Class ModelingComponents.BaseVoxelTool
class UBaseVoxelTool : public UBaseCreateFromSelectedTool
{
public:
	class UVoxelProperties*                      VoxProperties;                                     // 0x100(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_314[0x10];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UBaseVoxelTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ModelingComponents.GeometrySelectionEditCommand
class UGeometrySelectionEditCommand : public UInteractiveCommand
{
public:

	static class UClass* StaticClass();
	static class UGeometrySelectionEditCommand* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class ModelingComponents.InteractiveToolActivity
class UInteractiveToolActivity : public UInteractionMechanic
{
public:

	static class UClass* StaticClass();
	static class UInteractiveToolActivity* GetDefaultObj();

};

// 0xAC0 (0xAF0 - 0x30)
// Class ModelingComponents.MeshTopologySelectionMechanic
class UMeshTopologySelectionMechanic : public UInteractionMechanic
{
public:
	uint8                                        Pad_31A[0x48];                                     // Fixing Size After Last Property 
	class UMeshTopologySelectionMechanicProperties* Properties;                                        // 0x78(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31B[0x60];                                     // Fixing Size After Last Property 
	class UMouseHoverBehavior*                   HoverBehavior;                                     // 0xE0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USingleClickOrDragInputBehavior*       ClickOrDragBehavior;                               // 0xE8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URectangleMarqueeMechanic*             MarqueeMechanic;                                   // 0xF0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_31E[0x5C8];                                    // Fixing Size After Last Property 
	class UPreviewGeometryActor*                 PreviewGeometryActor;                              // 0x6C0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTriangleSetComponent*                 DrawnTriangleSetComponent;                         // 0x6C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_320[0x50];                                     // Fixing Size After Last Property 
	class UMaterialInterface*                    HighlightedFaceMaterial;                           // 0x720(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_321[0x3C8];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMeshTopologySelectionMechanic* GetDefaultObj();

};

// 0x0 (0xAF0 - 0xAF0)
// Class ModelingComponents.BoundarySelectionMechanic
class UBoundarySelectionMechanic : public UMeshTopologySelectionMechanic
{
public:

	static class UClass* StaticClass();
	static class UBoundarySelectionMechanic* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ModelingComponents.DynamicMeshCommitter
class UDynamicMeshCommitter : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UDynamicMeshCommitter* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ModelingComponents.DynamicMeshProvider
class UDynamicMeshProvider : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UDynamicMeshProvider* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ModelingComponents.PersistentDynamicMeshSource
class UPersistentDynamicMeshSource : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UPersistentDynamicMeshSource* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ModelingComponents.ToolActivityHost
class UToolActivityHost : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UToolActivityHost* GetDefaultObj();

};

// 0x18 (0xC0 - 0xA8)
// Class ModelingComponents.MeshTopologySelectionMechanicProperties
class UMeshTopologySelectionMechanicProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bSelectVertices;                                   // 0xA8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSelectEdges;                                      // 0xA9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSelectFaces;                                      // 0xAA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSelectEdgeLoops;                                  // 0xAB(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSelectEdgeRings;                                  // 0xAC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHitBackFaces;                                     // 0xAD(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableMarquee;                                    // 0xAE(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMarqueeIgnoreOcclusion;                           // 0xAF(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPreferProjectedElement;                           // 0xB0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSelectDownRay;                                    // 0xB1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreOcclusion;                                  // 0xB2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32A[0xD];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMeshTopologySelectionMechanicProperties* GetDefaultObj();

	void SelectAll();
	void InvertSelection();
};

// 0x20 (0x50 - 0x30)
// Class ModelingComponents.GeometrySelectionEditCommandArguments
class UGeometrySelectionEditCommandArguments : public UInteractiveCommandArguments
{
public:
	uint8                                        Pad_32C[0x20];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGeometrySelectionEditCommandArguments* GetDefaultObj();

};

// 0x78 (0xA0 - 0x28)
// Class ModelingComponents.GeometrySelectionEditCommandResult
class UGeometrySelectionEditCommandResult : public UInteractiveCommandResult
{
public:
	uint8                                        Pad_330[0x78];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGeometrySelectionEditCommandResult* GetDefaultObj();

};

// 0x18 (0xC0 - 0xA8)
// Class ModelingComponents.VoxelProperties
class UVoxelProperties : public UInteractiveToolPropertySet
{
public:
	int32                                        VoxelCount;                                        // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoSimplify;                                     // 0xAC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRemoveInternalSurfaces;                           // 0xAD(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_332[0x2];                                      // Fixing Size After Last Property 
	double                                       SimplifyMaxErrorFactor;                            // 0xB0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       CubeRootMinComponentVolume;                        // 0xB8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UVoxelProperties* GetDefaultObj();

};

// 0x0 (0xA8 - 0xA8)
// Class ModelingComponents.OnAcceptHandleSourcesPropertiesBase
class UOnAcceptHandleSourcesPropertiesBase : public UInteractiveToolPropertySet
{
public:

	static class UClass* StaticClass();
	static class UOnAcceptHandleSourcesPropertiesBase* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class ModelingComponents.OnAcceptHandleSourcesProperties
class UOnAcceptHandleSourcesProperties : public UOnAcceptHandleSourcesPropertiesBase
{
public:
	enum class EHandleSourcesMethod              HandleInputs;                                      // 0xA8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_338[0x7];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOnAcceptHandleSourcesProperties* GetDefaultObj();

};

// 0x28 (0xD8 - 0xB0)
// Class ModelingComponents.BaseCreateFromSelectedHandleSourceProperties
class UBaseCreateFromSelectedHandleSourceProperties : public UOnAcceptHandleSourcesProperties
{
public:
	enum class EBaseCreateFromSelectedTargetType OutputWriteTo;                                     // 0xB0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_33D[0x4];                                      // Fixing Size After Last Property 
	class FString                                OutputNewName;                                     // 0xB8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutputExistingName;                                // 0xC8(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UBaseCreateFromSelectedHandleSourceProperties* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class ModelingComponents.TransformInputsToolProperties
class UTransformInputsToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bShowTransformGizmo;                               // 0xA8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_340[0x7];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UTransformInputsToolProperties* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class ModelingComponents.DynamicMeshReplacementChangeTarget
class UDynamicMeshReplacementChangeTarget : public UObject
{
public:
	uint8                                        Pad_345[0x30];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UDynamicMeshReplacementChangeTarget* GetDefaultObj();

};

// 0x110 (0x720 - 0x610)
// Class ModelingComponents.OctreeDynamicMeshComponent
class UOctreeDynamicMeshComponent : public UBaseDynamicMeshComponent
{
public:
	uint8                                        Pad_34C[0x50];                                     // Fixing Size After Last Property 
	class UDynamicMesh*                          MeshObject;                                        // 0x660(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_34D[0xB8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOctreeDynamicMeshComponent* GetDefaultObj();

	void SetDynamicMesh(class UDynamicMesh* NewMesh);
};

// 0x80 (0x620 - 0x5A0)
// Class ModelingComponents.LineSetComponent
class ULineSetComponent : public UMeshComponent
{
public:
	class UMaterialInterface*                    LineMaterial;                                      // 0x5A0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FBoxSphereBounds                      Bounds;                                            // 0x5A8(0x38)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	bool                                         bBoundsDirty;                                      // 0x5E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_352[0x3F];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class ULineSetComponent* GetDefaultObj();

};

// 0x28 (0xD0 - 0xA8)
// Class ModelingComponents.MeshElementsVisualizerProperties
class UMeshElementsVisualizerProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bVisible;                                          // 0xA8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowWireframe;                                    // 0xA9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowBorders;                                      // 0xAA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowUVSeams;                                      // 0xAB(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowNormalSeams;                                  // 0xAC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowColorSeams;                                   // 0xAD(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_355[0x2];                                      // Fixing Size After Last Property 
	float                                        ThicknessScale;                                    // 0xB0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                WireframeColor;                                    // 0xB4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                BoundaryEdgeColor;                                 // 0xB8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                UVSeamColor;                                       // 0xBC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                NormalSeamColor;                                   // 0xC0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                ColorSeamColor;                                    // 0xC4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DepthBias;                                         // 0xC8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAdjustDepthBiasUsingMeshSize;                     // 0xCC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35B[0x3];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMeshElementsVisualizerProperties* GetDefaultObj();

};

// 0xA8 (0xD0 - 0x28)
// Class ModelingComponents.PreviewGeometry
class UPreviewGeometry : public UObject
{
public:
	class UPreviewGeometryActor*                 ParentActor;                                       // 0x28(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class ULineSetComponent*> LineSets;                                          // 0x30(0x50)(ExportObject, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<class FString, class UPointSetComponent*> PointSets;                                         // 0x80(0x50)(ExportObject, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UPreviewGeometry* GetDefaultObj();

	bool SetPointSetVisibility(const class FString& PointSetIdentifier, bool bVisible);
	bool SetPointSetMaterial(const class FString& PointSetIdentifier, class UMaterialInterface* NewMaterial);
	bool SetLineSetVisibility(const class FString& LineSetIdentifier, bool bVisible);
	bool SetLineSetMaterial(const class FString& LineSetIdentifier, class UMaterialInterface* NewMaterial);
	void SetAllPointSetsMaterial(class UMaterialInterface* Material);
	void SetAllLineSetsMaterial(class UMaterialInterface* Material);
	bool RemovePointSet(const class FString& PointSetIdentifier, bool bDestroy);
	bool RemoveLineSet(const class FString& LineSetIdentifier, bool bDestroy);
	void RemoveAllPointSets(bool bDestroy);
	void RemoveAllLineSets(bool bDestroy);
	class UPreviewGeometryActor* GetActor();
	class UPointSetComponent* FindPointSet(const class FString& PointSetIdentifier);
	class ULineSetComponent* FindLineSet(const class FString& LineSetIdentifier);
	void Disconnect();
	void CreateInWorld(class UWorld* World, struct FTransform& WithTransform);
	class UPointSetComponent* AddPointSet(const class FString& PointSetIdentifier);
	class ULineSetComponent* AddLineSet(const class FString& LineSetIdentifier);
};

// 0x28 (0xF8 - 0xD0)
// Class ModelingComponents.MeshElementsVisualizer
class UMeshElementsVisualizer : public UPreviewGeometry
{
public:
	class UMeshElementsVisualizerProperties*     Settings;                                          // 0xD0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMeshWireframeComponent*               WireframeComponent;                                // 0xD8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AE[0x18];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMeshElementsVisualizer* GetDefaultObj();

};

// 0xA0 (0x640 - 0x5A0)
// Class ModelingComponents.MeshWireframeComponent
class UMeshWireframeComponent : public UMeshComponent
{
public:
	float                                        LineDepthBias;                                     // 0x5A0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LineDepthBiasSizeScale;                            // 0x5A4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThicknessScale;                                    // 0x5A8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableWireframe;                                  // 0x5AC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B8[0x3];                                      // Fixing Size After Last Property 
	struct FColor                                WireframeColor;                                    // 0x5B0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WireframeThickness;                                // 0x5B4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableBoundaryEdges;                              // 0x5B8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B9[0x3];                                      // Fixing Size After Last Property 
	struct FColor                                BoundaryEdgeColor;                                 // 0x5BC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoundaryEdgeThickness;                             // 0x5C0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableUVSeams;                                    // 0x5C4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BA[0x3];                                      // Fixing Size After Last Property 
	struct FColor                                UVSeamColor;                                       // 0x5C8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UVSeamThickness;                                   // 0x5CC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableNormalSeams;                                // 0x5D0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BB[0x3];                                      // Fixing Size After Last Property 
	struct FColor                                NormalSeamColor;                                   // 0x5D4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NormalSeamThickness;                               // 0x5D8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableColorSeams;                                 // 0x5DC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BF[0x3];                                      // Fixing Size After Last Property 
	struct FColor                                ColorSeamColor;                                    // 0x5E0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ColorSeamThickness;                                // 0x5E4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    LineMaterial;                                      // 0x5E8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FBoxSphereBounds                      LocalBounds;                                       // 0x5F0(0x38)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3C0[0x18];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMeshWireframeComponent* GetDefaultObj();

};

// 0x80 (0x620 - 0x5A0)
// Class ModelingComponents.PointSetComponent
class UPointSetComponent : public UMeshComponent
{
public:
	class UMaterialInterface*                    PointMaterial;                                     // 0x5A0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FBoxSphereBounds                      Bounds;                                            // 0x5A8(0x38)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	bool                                         bBoundsDirty;                                      // 0x5E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3C4[0x3F];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UPointSetComponent* GetDefaultObj();

};

// 0x118 (0x140 - 0x28)
// Class ModelingComponents.PreviewMesh
class UPreviewMesh : public UObject
{
public:
	uint8                                        Pad_3C5[0x18];                                     // Fixing Size After Last Property 
	bool                                         bBuildSpatialDataStructure;                        // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C6[0xF];                                      // Fixing Size After Last Property 
	class UDynamicMeshComponent*                 DynamicMeshComponent;                              // 0x50(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3C7[0xE8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UPreviewMesh* GetDefaultObj();

};

// 0x410 (0x550 - 0x140)
// Class ModelingComponents.PolyEditPreviewMesh
class UPolyEditPreviewMesh : public UPreviewMesh
{
public:
	uint8                                        Pad_3CB[0x410];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UPolyEditPreviewMesh* GetDefaultObj();

};

// 0x0 (0x298 - 0x298)
// Class ModelingComponents.PreviewGeometryActor
class UPreviewGeometryActor : public UInternalToolFrameworkActor
{
public:

	static class UClass* StaticClass();
	static class UPreviewGeometryActor* GetDefaultObj();

};

// 0x100 (0x6A0 - 0x5A0)
// Class ModelingComponents.TriangleSetComponent
class UTriangleSetComponent : public UMeshComponent
{
public:
	struct FBoxSphereBounds                      Bounds;                                            // 0x5A0(0x38)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	bool                                         bBoundsDirty;                                      // 0x5D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3CF[0xC7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UTriangleSetComponent* GetDefaultObj();

};

// 0x28 (0xD0 - 0xA8)
// Class ModelingComponents.UVLayoutPreviewProperties
class UUVLayoutPreviewProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bEnabled;                                          // 0xA8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D3[0x3];                                      // Fixing Size After Last Property 
	enum class EUVLayoutPreviewSide              Side;                                              // 0xAC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0xB0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D6[0x4];                                      // Fixing Size After Last Property 
	struct FVector2D                             Offset;                                            // 0xB8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowWireframe;                                    // 0xC8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D7[0x7];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UUVLayoutPreviewProperties* GetDefaultObj();

};

// 0x138 (0x160 - 0x28)
// Class ModelingComponents.UVLayoutPreview
class UUVLayoutPreview : public UObject
{
public:
	class UUVLayoutPreviewProperties*            Settings;                                          // 0x28(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPreviewMesh*                          PreviewMesh;                                       // 0x30(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTriangleSetComponent*                 TriangleComponent;                                 // 0x38(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowBackingRectangle;                             // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DE[0x7];                                      // Fixing Size After Last Property 
	class UMaterialInterface*                    BackingRectangleMaterial;                          // 0x48(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DF[0x110];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UUVLayoutPreview* GetDefaultObj();

};

// 0x590 (0x5C0 - 0x30)
// Class ModelingComponents.CollectSurfacePathMechanic
class UCollectSurfacePathMechanic : public UInteractionMechanic
{
public:
	uint8                                        Pad_3E3[0x590];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UCollectSurfacePathMechanic* GetDefaultObj();

};

// 0xC0 (0xF0 - 0x30)
// Class ModelingComponents.ConstructionPlaneMechanic
class UConstructionPlaneMechanic : public UInteractionMechanic
{
public:
	uint8                                        Pad_3E7[0x98];                                     // Fixing Size After Last Property 
	class UCombinedTransformGizmo*               PlaneTransformGizmo;                               // 0xC8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTransformProxy*                       PlaneTransformProxy;                               // 0xD0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EA[0x8];                                      // Fixing Size After Last Property 
	class USingleClickInputBehavior*             ClickToSetPlaneBehavior;                           // 0xE0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULocalSingleClickInputBehavior*        MiddleClickToSetGizmoBehavior;                     // 0xE8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UConstructionPlaneMechanic* GetDefaultObj();

};

// 0x650 (0x680 - 0x30)
// Class ModelingComponents.CurveControlPointsMechanic
class UCurveControlPointsMechanic : public UInteractionMechanic
{
public:
	uint8                                        Pad_3ED[0x10];                                     // Fixing Size After Last Property 
	class USingleClickInputBehavior*             ClickBehavior;                                     // 0x40(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMouseHoverBehavior*                   HoverBehavior;                                     // 0x48(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F0[0x498];                                    // Fixing Size After Last Property 
	class UPreviewGeometryActor*                 PreviewGeometryActor;                              // 0x4E8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPointSetComponent*                    DrawnControlPoints;                                // 0x4F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULineSetComponent*                     DrawnControlSegments;                              // 0x4F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPointSetComponent*                    PreviewPoint;                                      // 0x500(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULineSetComponent*                     PreviewSegment;                                    // 0x508(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3F3[0x78];                                     // Fixing Size After Last Property 
	class UTransformProxy*                       PointTransformProxy;                               // 0x588(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCombinedTransformGizmo*               PointTransformGizmo;                               // 0x590(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3F5[0xE8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UCurveControlPointsMechanic* GetDefaultObj();

};

// 0x240 (0x270 - 0x30)
// Class ModelingComponents.DragAlignmentMechanic
class UDragAlignmentMechanic : public UInteractionMechanic
{
public:
	uint8                                        Pad_3F8[0x240];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UDragAlignmentMechanic* GetDefaultObj();

};

// 0x2A8 (0x2D0 - 0x28)
// Class ModelingComponents.DragAlignmentInteraction
class UDragAlignmentInteraction : public UObject
{
public:
	uint8                                        Pad_3FB[0x2A8];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UDragAlignmentInteraction* GetDefaultObj();

};

// 0x4D0 (0x500 - 0x30)
// Class ModelingComponents.LatticeControlPointsMechanic
class ULatticeControlPointsMechanic : public UInteractionMechanic
{
public:
	uint8                                        Pad_3FF[0x1F0];                                    // Fixing Size After Last Property 
	class UPreviewGeometryActor*                 PreviewGeometryActor;                              // 0x220(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPointSetComponent*                    DrawnControlPoints;                                // 0x228(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULineSetComponent*                     DrawnLatticeEdges;                                 // 0x230(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_400[0xA8];                                     // Fixing Size After Last Property 
	class UTransformProxy*                       PointTransformProxy;                               // 0x2E0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCombinedTransformGizmo*               PointTransformGizmo;                               // 0x2E8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_401[0x58];                                     // Fixing Size After Last Property 
	class URectangleMarqueeMechanic*             MarqueeMechanic;                                   // 0x348(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_402[0x1B0];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class ULatticeControlPointsMechanic* GetDefaultObj();

};

// 0x4E0 (0x510 - 0x30)
// Class ModelingComponents.PlaneDistanceFromHitMechanic
class UPlaneDistanceFromHitMechanic : public UInteractionMechanic
{
public:
	uint8                                        Pad_405[0x4E0];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UPlaneDistanceFromHitMechanic* GetDefaultObj();

};

// 0x1A0 (0x1D0 - 0x30)
// Class ModelingComponents.PolyLassoMarqueeMechanic
class UPolyLassoMarqueeMechanic : public UInteractionMechanic
{
public:
	uint8                                        Pad_408[0x58];                                     // Fixing Size After Last Property 
	float                                        SpacingTolerance;                                  // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LineThickness;                                     // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          LineColor;                                         // 0x90(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ClosedColor;                                       // 0xA0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableFreehandPolygons;                           // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableMultiClickPolygons;                         // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40D[0x6];                                      // Fixing Size After Last Property 
	class UClickDragInputBehavior*               ClickDragBehavior;                                 // 0xB8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMouseHoverBehavior*                   HoverBehavior;                                     // 0xC0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_40E[0x108];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UPolyLassoMarqueeMechanic* GetDefaultObj();

};

// 0x1F0 (0x220 - 0x30)
// Class ModelingComponents.RectangleMarqueeMechanic
class URectangleMarqueeMechanic : public UInteractionMechanic
{
public:
	uint8                                        Pad_410[0x8];                                      // Fixing Size After Last Property 
	bool                                         bUseExternalClickDragBehavior;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseExternalUpdateCameraState;                     // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_411[0x46];                                     // Fixing Size After Last Property 
	double                                       OnDragRectangleChangedDeferredThreshold;           // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_412[0x48];                                     // Fixing Size After Last Property 
	class UClickDragInputBehavior*               ClickDragBehavior;                                 // 0xD0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_413[0x148];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class URectangleMarqueeMechanic* GetDefaultObj();

};

// 0x1E8 (0x210 - 0x28)
// Class ModelingComponents.RectangleMarqueeInteraction
class URectangleMarqueeInteraction : public UObject
{
public:
	uint8                                        Pad_416[0x1E8];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class URectangleMarqueeInteraction* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class ModelingComponents.SpaceCurveDeformationMechanicPropertySet
class USpaceCurveDeformationMechanicPropertySet : public UInteractiveToolPropertySet
{
public:
	enum class ESpaceCurveControlPointTransformMode TransformMode;                                     // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESpaceCurveControlPointOriginMode TransformOrigin;                                   // 0xAC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Softness;                                          // 0xB0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESpaceCurveControlPointFalloffType SoftFalloff;                                       // 0xB4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USpaceCurveDeformationMechanicPropertySet* GetDefaultObj();

};

// 0x2A0 (0x2D0 - 0x30)
// Class ModelingComponents.SpaceCurveDeformationMechanic
class USpaceCurveDeformationMechanic : public UInteractionMechanic
{
public:
	uint8                                        Pad_421[0x10];                                     // Fixing Size After Last Property 
	class USingleClickInputBehavior*             ClickBehavior;                                     // 0x40(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMouseHoverBehavior*                   HoverBehavior;                                     // 0x48(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_422[0x18];                                     // Fixing Size After Last Property 
	class USpaceCurveDeformationMechanicPropertySet* TransformProperties;                               // 0x68(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_423[0xF8];                                     // Fixing Size After Last Property 
	class UPreviewGeometryActor*                 PreviewGeometryActor;                              // 0x168(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPointSetComponent*                    RenderPoints;                                      // 0x170(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULineSetComponent*                     RenderSegments;                                    // 0x178(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_425[0x38];                                     // Fixing Size After Last Property 
	class UTransformProxy*                       PointTransformProxy;                               // 0x1B8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCombinedTransformGizmo*               PointTransformGizmo;                               // 0x1C0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_426[0x108];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USpaceCurveDeformationMechanic* GetDefaultObj();

};

// 0x3E0 (0x410 - 0x30)
// Class ModelingComponents.SpatialCurveDistanceMechanic
class USpatialCurveDistanceMechanic : public UInteractionMechanic
{
public:
	uint8                                        Pad_428[0x3E0];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USpatialCurveDistanceMechanic* GetDefaultObj();

};

// 0x90 (0xB8 - 0x28)
// Class ModelingComponents.MeshOpPreviewWithBackgroundCompute
class UMeshOpPreviewWithBackgroundCompute : public UObject
{
public:
	uint8                                        Pad_429[0x30];                                     // Fixing Size After Last Property 
	class UPreviewMesh*                          PreviewMesh;                                       // 0x58(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>            StandardMaterials;                                 // 0x60(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    OverrideMaterial;                                  // 0x70(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    WorkingMaterial;                                   // 0x78(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    SecondaryMaterial;                                 // 0x80(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UWorld>                 PreviewWorld;                                      // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42D[0x28];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMeshOpPreviewWithBackgroundCompute* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class ModelingComponents.ModelingComponentsSettings
class UModelingComponentsSettings : public UDeveloperSettings
{
public:
	bool                                         bEnableRayTracingWhileEditing;                     // 0x38(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableRayTracing;                                 // 0x39(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableCollision;                                  // 0x3A(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionTraceFlag               CollisionMode;                                     // 0x3B(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_435[0x4];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UModelingComponentsSettings* GetDefaultObj();

};

// 0x18 (0x50 - 0x38)
// Class ModelingComponents.ModelingComponentsEditorSettings
class UModelingComponentsEditorSettings : public UDeveloperSettings
{
public:
	enum class EModelingComponentsPlaneVisualizationMode GridMode;                                          // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43C[0x3];                                      // Fixing Size After Last Property 
	int32                                        NumGridLines;                                      // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GridSpacing;                                       // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GridScale;                                         // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GridSize;                                          // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43D[0x4];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UModelingComponentsEditorSettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ModelingComponents.ModelingObjectsCreationAPI
class UModelingObjectsCreationAPI : public UObject
{
public:

	static class UClass* StaticClass();
	static class UModelingObjectsCreationAPI* GetDefaultObj();

	struct FCreateTextureObjectResult CreateTextureObject(struct FCreateTextureObjectParams& CreateTexParams);
	struct FCreateMeshObjectResult CreateMeshObject(struct FCreateMeshObjectParams& CreateMeshParams);
};

// 0x0 (0x298 - 0x298)
// Class ModelingComponents.PreviewMeshActor
class UPreviewMeshActor : public UInternalToolFrameworkActor
{
public:

	static class UClass* StaticClass();
	static class UPreviewMeshActor* GetDefaultObj();

};

// 0x30 (0xD8 - 0xA8)
// Class ModelingComponents.CreateMeshObjectTypeProperties
class UCreateMeshObjectTypeProperties : public UInteractiveToolPropertySet
{
public:
	class FString                                OutputType;                                        // 0xA8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UVolume>                   VolumeType;                                        // 0xB8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        OutputTypeNamesList;                               // 0xC0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bShowVolumeList;                                   // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_460[0x7];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UCreateMeshObjectTypeProperties* GetDefaultObj();

	bool ShouldShowPropertySet();
	TArray<class FString> GetOutputTypeNamesFunc();
	enum class ECreateObjectTypeHint GetCurrentCreateMeshType();
};

// 0x8 (0xB0 - 0xA8)
// Class ModelingComponents.OnAcceptHandleSourcesPropertiesSingle
class UOnAcceptHandleSourcesPropertiesSingle : public UOnAcceptHandleSourcesPropertiesBase
{
public:
	enum class EHandleSourcesMethod              HandleInputs;                                      // 0xA8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_463[0x7];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOnAcceptHandleSourcesPropertiesSingle* GetDefaultObj();

};

// 0x18 (0xC0 - 0xA8)
// Class ModelingComponents.PolygroupLayersProperties
class UPolygroupLayersProperties : public UInteractiveToolPropertySet
{
public:
	class FName                                  ActiveGroupLayer;                                  // 0xA8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        GroupLayersList;                                   // 0xB0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UPolygroupLayersProperties* GetDefaultObj();

	TArray<class FString> GetGroupLayersFunc();
};

// 0x250 (0x278 - 0x28)
// Class ModelingComponents.GeometrySelectionManager
class UGeometrySelectionManager : public UObject
{
public:
	uint8                                        Pad_47C[0x28];                                     // Fixing Size After Last Property 
	class UGeometrySelectionEditCommandArguments* SelectionArguments;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_480[0x8];                                      // Fixing Size After Last Property 
	class UInteractiveToolsContext*              ToolsContext;                                      // 0x60(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_481[0x210];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGeometrySelectionManager* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class ModelingComponents.PersistentMeshSelection
class UPersistentMeshSelection : public UObject
{
public:
	uint8                                        Pad_483[0x60];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UPersistentMeshSelection* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class ModelingComponents.PersistentMeshSelectionManager
class UPersistentMeshSelectionManager : public UObject
{
public:
	class UInteractiveToolsContext*              ParentContext;                                     // 0x28(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPersistentMeshSelection*              ActiveSelection;                                   // 0x30(0x8)(ZeroConstructor, Deprecated, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPreviewGeometry*                      SelectionDisplay;                                  // 0x38(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UPersistentMeshSelectionManager* GetDefaultObj();

};

// 0x0 (0xC0 - 0xC0)
// Class ModelingComponents.PolygonSelectionMechanicProperties
class UPolygonSelectionMechanicProperties : public UMeshTopologySelectionMechanicProperties
{
public:

	static class UClass* StaticClass();
	static class UPolygonSelectionMechanicProperties* GetDefaultObj();

};

// 0x10 (0xB00 - 0xAF0)
// Class ModelingComponents.PolygonSelectionMechanic
class UPolygonSelectionMechanic : public UMeshTopologySelectionMechanic
{
public:
	class UPolygonSelectionMechanicProperties*   Properties;                                        // 0xAF0(0x8)(ZeroConstructor, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_494[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UPolygonSelectionMechanic* GetDefaultObj();

};

// 0x128 (0x150 - 0x28)
// Class ModelingComponents.ModelingSceneSnappingManager
class UModelingSceneSnappingManager : public USceneSnappingManager
{
public:
	class UInteractiveToolsContext*              ParentContext;                                     // 0x28(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_49B[0x120];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UModelingSceneSnappingManager* GetDefaultObj();

};

// 0x188 (0x1B0 - 0x28)
// Class ModelingComponents.MultiTransformer
class UMultiTransformer : public UObject
{
public:
	uint8                                        Pad_4A2[0x60];                                     // Fixing Size After Last Property 
	class UInteractiveGizmoManager*              GizmoManager;                                      // 0x88(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4A4[0x70];                                     // Fixing Size After Last Property 
	class UCombinedTransformGizmo*               TransformGizmo;                                    // 0x100(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTransformProxy*                       TransformProxy;                                    // 0x108(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDragAlignmentMechanic*                DragAlignmentMechanic;                             // 0x110(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4A7[0x98];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMultiTransformer* GetDefaultObj();

};

}


