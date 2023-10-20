#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x610 - 0x5A0)
// Class GeometryFramework.BaseDynamicMeshComponent
class UBaseDynamicMeshComponent : public UMeshComponent
{
public:
	uint8                                        Pad_A12[0x20];                                     // Fixing Size After Last Property 
	bool                                         bExplicitShowWireframe;                            // 0x5C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A13[0x3];                                      // Fixing Size After Last Property 
	struct FLinearColor                          WireframeColor;                                    // 0x5C4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDynamicMeshComponentColorOverrideMode ColorMode;                                         // 0x5D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A14[0x3];                                      // Fixing Size After Last Property 
	struct FColor                                ConstantColor;                                     // 0x5D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableFlatShading;                                // 0x5DC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableViewModeOverrides;                          // 0x5DD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A17[0x2];                                      // Fixing Size After Last Property 
	class UMaterialInterface*                    OverrideRenderMaterial;                            // 0x5E0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    SecondaryRenderMaterial;                           // 0x5E8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A19[0x1];                                      // Fixing Size After Last Property 
	bool                                         bEnableRayTracing;                                 // 0x5F1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1A[0x6];                                      // Fixing Size After Last Property 
	TArray<class UMaterialInterface*>            BaseMaterials;                                     // 0x5F8(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1B[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UBaseDynamicMeshComponent* GetDefaultObj();

	void SetViewModeOverridesEnabled(bool bEnabled);
	void SetShadowsEnabled(bool bEnabled);
	void SetSecondaryRenderMaterial(class UMaterialInterface* Material);
	void SetSecondaryBuffersVisibility(bool bSetVisible);
	void SetOverrideRenderMaterial(class UMaterialInterface* Material);
	void SetEnableWireframeRenderPass(bool bEnable);
	void SetEnableRaytracing(bool bSetEnabled);
	void SetEnableFlatShading(bool bEnable);
	void SetConstantOverrideColor(const struct FColor& NewColor);
	void SetColorOverrideMode(enum class EDynamicMeshComponentColorOverrideMode NewMode);
	bool HasOverrideRenderMaterial(int32 K);
	bool GetViewModeOverridesEnabled();
	bool GetShadowsEnabled();
	class UMaterialInterface* GetSecondaryRenderMaterial();
	bool GetSecondaryBuffersVisibility();
	class UMaterialInterface* GetOverrideRenderMaterial(int32 MaterialIndex);
	bool GetFlatShadingEnabled();
	bool GetEnableWireframeRenderPass();
	bool GetEnableRaytracing();
	class UDynamicMesh* GetDynamicMesh();
	struct FColor GetConstantOverrideColor();
	enum class EDynamicMeshComponentColorOverrideMode GetColorOverrideMode();
	void ClearSecondaryRenderMaterial();
	void ClearOverrideRenderMaterial();
};

// 0x0 (0x28 - 0x28)
// Class GeometryFramework.MeshCommandChangeTarget
class UMeshCommandChangeTarget : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UMeshCommandChangeTarget* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GeometryFramework.MeshReplacementCommandChangeTarget
class UMeshReplacementCommandChangeTarget : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UMeshReplacementCommandChangeTarget* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GeometryFramework.MeshVertexCommandChangeTarget
class UMeshVertexCommandChangeTarget : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UMeshVertexCommandChangeTarget* GetDefaultObj();

};

// 0x210 (0x820 - 0x610)
// Class GeometryFramework.DynamicMeshComponent
class UDynamicMeshComponent : public UBaseDynamicMeshComponent
{
public:
	class UDynamicMesh*                          MeshObject;                                        // 0x610(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A27[0xF8];                                     // Fixing Size After Last Property 
	enum class EDynamicMeshComponentTangentsMode TangentsType;                                      // 0x710(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A28[0x3F];                                     // Fixing Size After Last Property 
	enum class ECollisionTraceFlag               CollisionType;                                     // 0x750(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseAsyncCooking;                                  // 0x751(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableComplexCollision;                           // 0x752(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeferCollisionUpdates;                            // 0x753(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2B[0x4];                                      // Fixing Size After Last Property 
	class UBodySetup*                            MeshBodySetup;                                     // 0x758(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A2C[0x38];                                     // Fixing Size After Last Property 
	struct FKAggregateGeom                       AggGeom;                                           // 0x798(0x68)(Edit, Protected, NativeAccessSpecifierProtected)
	TArray<class UBodySetup*>                    AsyncBodySetupQueue;                               // 0x800(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_A2D[0x10];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UDynamicMeshComponent* GetDefaultObj();

	bool ValidateMaterialSlots(bool bCreateIfMissing, bool bDeleteExtraSlots);
	void UpdateCollision(bool bOnlyIfPending);
	void SetTangentsType(enum class EDynamicMeshComponentTangentsMode NewTangentsType);
	void SetDynamicMesh(class UDynamicMesh* NewMesh);
	void SetDeferredCollisionUpdatesEnabled(bool bEnabled, bool bImmediateUpdate);
	void SetComplexAsSimpleCollisionEnabled(bool bEnabled, bool bImmediateUpdate);
	enum class EDynamicMeshComponentTangentsMode GetTangentsType();
	void EnableComplexAsSimpleCollision();
	void ConfigureMaterialSet(TArray<class UMaterialInterface*>& NewMaterialSet);
};

// 0x18 (0x2A8 - 0x290)
// Class GeometryFramework.DynamicMeshActor
class UDynamicMeshActor : public UActor
{
public:
	class UDynamicMeshComponent*                 DynamicMeshComponent;                              // 0x290(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableComputeMeshPool;                            // 0x298(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A3A[0x7];                                      // Fixing Size After Last Property 
	class UDynamicMeshPool*                      DynamicMeshPool;                                   // 0x2A0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UDynamicMeshActor* GetDefaultObj();

	bool ReleaseComputeMesh(class UDynamicMesh* Mesh);
	void ReleaseAllComputeMeshes();
	class UDynamicMeshComponent* GetDynamicMeshComponent();
	class UDynamicMeshPool* GetComputeMeshPool();
	void FreeAllComputeMeshes();
	class UDynamicMesh* AllocateComputeMesh();
};

// 0x0 (0x28 - 0x28)
// Class GeometryFramework.DynamicMeshGenerator
class UDynamicMeshGenerator : public UObject
{
public:

	static class UClass* StaticClass();
	static class UDynamicMeshGenerator* GetDefaultObj();

};

// 0x88 (0xB0 - 0x28)
// Class GeometryFramework.DynamicMesh
class UDynamicMesh : public UObject
{
public:
	uint8                                        Pad_A41[0x48];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            MeshModifiedBPEvent;                               // 0x70(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_A42[0x20];                                     // Fixing Size After Last Property 
	class UDynamicMeshGenerator*                 MeshGenerator;                                     // 0xA0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableMeshGenerator;                              // 0xA8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A43[0x7];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UDynamicMesh* GetDefaultObj();

	class UDynamicMesh* ResetToCube();
	class UDynamicMesh* Reset();
	bool IsEmpty();
	int32 GetTriangleCount();
};

// 0x20 (0x48 - 0x28)
// Class GeometryFramework.DynamicMeshPool
class UDynamicMeshPool : public UObject
{
public:
	TArray<class UDynamicMesh*>                  CachedMeshes;                                      // 0x28(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UDynamicMesh*>                  AllCreatedMeshes;                                  // 0x38(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UDynamicMeshPool* GetDefaultObj();

	void ReturnMesh(class UDynamicMesh* Mesh);
	void ReturnAllMeshes();
	class UDynamicMesh* RequestMesh();
	void FreeAllMeshes();
};

}


