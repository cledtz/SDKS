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
// Class InteractiveToolsFramework.AssetBackedTarget
class UAssetBackedTarget : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AssetBackedTarget");
		return Clss;
	}

};

// 0x30 (0x598 - 0x568)
// Class InteractiveToolsFramework.GizmoBaseComponent
class UGizmoBaseComponent : public UPrimitiveComponent
{
public:
	struct FLinearColor                          Color;                                             // 0x568(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HoverSizeMultiplier;                               // 0x578(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PixelHitDistanceThreshold;                         // 0x57C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8651[0x8];                                     // Fixing Size After Last Property..
	class UGizmoViewContext*                     GizmoViewContext;                                  // 0x588(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8652[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoBaseComponent");
		return Clss;
	}

	void UpdateWorldLocalState(bool bWorldIn);
	void UpdateHoverState(bool bHoveringIn);
};

// 0x8 (0x30 - 0x28)
// Class InteractiveToolsFramework.InteractiveCommandArguments
class UInteractiveCommandArguments : public UObject
{
public:
	uint8                                        Pad_8653[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("InteractiveCommandArguments");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.InteractiveCommandResult
class UInteractiveCommandResult : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("InteractiveCommandResult");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.InteractiveCommand
class UInteractiveCommand : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("InteractiveCommand");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.InteractiveGizmoBuilder
class UInteractiveGizmoBuilder : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("InteractiveGizmoBuilder");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.ToolContextTransactionProvider
class UToolContextTransactionProvider : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ToolContextTransactionProvider");
		return Clss;
	}

};

// 0x8 (0x298 - 0x290)
// Class InteractiveToolsFramework.InternalToolFrameworkActor
class UInternalToolFrameworkActor : public UActor
{
public:
	bool                                         bIsSelectableInEditor;                             // 0x290(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8654[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("InternalToolFrameworkActor");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.ToolFrameworkComponent
class UToolFrameworkComponent : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ToolFrameworkComponent");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.InteractiveToolCameraFocusAPI
class UInteractiveToolCameraFocusAPI : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("InteractiveToolCameraFocusAPI");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.InteractiveToolNestedAcceptCancelAPI
class UInteractiveToolNestedAcceptCancelAPI : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("InteractiveToolNestedAcceptCancelAPI");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.InteractiveToolExclusiveToolAPI
class UInteractiveToolExclusiveToolAPI : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("InteractiveToolExclusiveToolAPI");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.InteractiveToolEditorGizmoAPI
class UInteractiveToolEditorGizmoAPI : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("InteractiveToolEditorGizmoAPI");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.MaterialProvider
class UMaterialProvider : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MaterialProvider");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.MeshDescriptionCommitter
class UMeshDescriptionCommitter : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MeshDescriptionCommitter");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.MeshDescriptionProvider
class UMeshDescriptionProvider : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MeshDescriptionProvider");
		return Clss;
	}

};

// 0x20 (0x48 - 0x28)
// Class InteractiveToolsFramework.GizmoBaseVec2ParameterSource
class UGizmoBaseVec2ParameterSource : public UObject
{
public:
	uint8                                        Pad_8655[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoBaseVec2ParameterSource");
		return Clss;
	}

};

// 0x30 (0x78 - 0x48)
// Class InteractiveToolsFramework.GizmoLocalVec2ParameterSource
class UGizmoLocalVec2ParameterSource : public UGizmoBaseVec2ParameterSource
{
public:
	struct FVector2D                             Value;                                             // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGizmoVec2ParameterChange             LastChange;                                        // 0x58(0x20)(NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoLocalVec2ParameterSource");
		return Clss;
	}

};

// 0x20 (0x48 - 0x28)
// Class InteractiveToolsFramework.GizmoBaseFloatParameterSource
class UGizmoBaseFloatParameterSource : public UObject
{
public:
	uint8                                        Pad_8656[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoBaseFloatParameterSource");
		return Clss;
	}

};

// 0x148 (0x190 - 0x48)
// Class InteractiveToolsFramework.GizmoAxisTranslationParameterSource
class UGizmoAxisTranslationParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	uint8                                        Pad_8657[0x88];                                    // Fixing Size After Last Property..
	FInterfaceProperty_                          AxisSource;                                        // 0xD0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FInterfaceProperty_                          TransformSource;                                   // 0xE0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Parameter;                                         // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGizmoFloatParameterChange            LastChange;                                        // 0xF4(0x8)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_8658[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               CurTranslationAxis;                                // 0x100(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CurTranslationOrigin;                              // 0x118(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            InitialTransform;                                  // 0x130(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoAxisTranslationParameterSource");
		return Clss;
	}

};

// 0x1D8 (0x220 - 0x48)
// Class InteractiveToolsFramework.GizmoPlaneTranslationParameterSource
class UGizmoPlaneTranslationParameterSource : public UGizmoBaseVec2ParameterSource
{
public:
	uint8                                        Pad_8659[0xC8];                                    // Fixing Size After Last Property..
	FInterfaceProperty_                          AxisSource;                                        // 0x110(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FInterfaceProperty_                          TransformSource;                                   // 0x120(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Parameter;                                         // 0x130(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGizmoVec2ParameterChange             LastChange;                                        // 0x140(0x20)(NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               CurTranslationOrigin;                              // 0x160(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CurTranslationNormal;                              // 0x178(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CurTranslationAxisX;                               // 0x190(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CurTranslationAxisY;                               // 0x1A8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            InitialTransform;                                  // 0x1C0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoPlaneTranslationParameterSource");
		return Clss;
	}

};

// 0x148 (0x190 - 0x48)
// Class InteractiveToolsFramework.GizmoAxisRotationParameterSource
class UGizmoAxisRotationParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	uint8                                        Pad_865A[0x88];                                    // Fixing Size After Last Property..
	FInterfaceProperty_                          AxisSource;                                        // 0xD0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FInterfaceProperty_                          TransformSource;                                   // 0xE0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Angle;                                             // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGizmoFloatParameterChange            LastChange;                                        // 0xF4(0x8)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_865B[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               CurRotationAxis;                                   // 0x100(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CurRotationOrigin;                                 // 0x118(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            InitialTransform;                                  // 0x130(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoAxisRotationParameterSource");
		return Clss;
	}

};

// 0x118 (0x160 - 0x48)
// Class InteractiveToolsFramework.GizmoUniformScaleParameterSource
class UGizmoUniformScaleParameterSource : public UGizmoBaseVec2ParameterSource
{
public:
	FInterfaceProperty_                          AxisSource;                                        // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FInterfaceProperty_                          TransformSource;                                   // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScaleMultiplier;                                   // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_865C[0x4];                                     // Fixing Size After Last Property..
	struct FVector2D                             Parameter;                                         // 0x70(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGizmoVec2ParameterChange             LastChange;                                        // 0x80(0x20)(NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               CurScaleOrigin;                                    // 0xA0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CurScaleNormal;                                    // 0xB8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CurScaleAxisX;                                     // 0xD0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CurScaleAxisY;                                     // 0xE8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            InitialTransform;                                  // 0x100(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoUniformScaleParameterSource");
		return Clss;
	}

};

// 0xC8 (0x110 - 0x48)
// Class InteractiveToolsFramework.GizmoAxisScaleParameterSource
class UGizmoAxisScaleParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	FInterfaceProperty_                          AxisSource;                                        // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FInterfaceProperty_                          TransformSource;                                   // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScaleMultiplier;                                   // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClampToZero;                                      // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_865D[0x3];                                     // Fixing Size After Last Property..
	float                                        Parameter;                                         // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGizmoFloatParameterChange            LastChange;                                        // 0x74(0x8)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_865E[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               CurScaleAxis;                                      // 0x80(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CurScaleOrigin;                                    // 0x98(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            InitialTransform;                                  // 0xB0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoAxisScaleParameterSource");
		return Clss;
	}

};

// 0x168 (0x1B0 - 0x48)
// Class InteractiveToolsFramework.GizmoPlaneScaleParameterSource
class UGizmoPlaneScaleParameterSource : public UGizmoBaseVec2ParameterSource
{
public:
	uint8                                        Pad_865F[0x48];                                    // Fixing Size After Last Property..
	FInterfaceProperty_                          AxisSource;                                        // 0x90(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FInterfaceProperty_                          TransformSource;                                   // 0xA0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScaleMultiplier;                                   // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseEqualScaling;                                  // 0xB4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClampToZero;                                      // 0xB5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8660[0x2];                                     // Fixing Size After Last Property..
	struct FVector2D                             Parameter;                                         // 0xB8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGizmoVec2ParameterChange             LastChange;                                        // 0xC8(0x20)(NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               CurScaleOrigin;                                    // 0xE8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CurScaleNormal;                                    // 0x100(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CurScaleAxisX;                                     // 0x118(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CurScaleAxisY;                                     // 0x130(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8661[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            InitialTransform;                                  // 0x150(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoPlaneScaleParameterSource");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.PhysicsDataSource
class UPhysicsDataSource : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PhysicsDataSource");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.PrimitiveComponentBackedTarget
class UPrimitiveComponentBackedTarget : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PrimitiveComponentBackedTarget");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.SkeletalMeshBackedTarget
class USkeletalMeshBackedTarget : public UAssetBackedTarget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SkeletalMeshBackedTarget");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.StaticMeshBackedTarget
class UStaticMeshBackedTarget : public UAssetBackedTarget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("StaticMeshBackedTarget");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class InteractiveToolsFramework.InputBehavior
class UInputBehavior : public UObject
{
public:
	uint8                                        Pad_8662[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("InputBehavior");
		return Clss;
	}

};

// 0x50 (0x80 - 0x30)
// Class InteractiveToolsFramework.AnyButtonInputBehavior
class UAnyButtonInputBehavior : public UInputBehavior
{
public:
	uint8                                        Pad_8663[0x50];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnyButtonInputBehavior");
		return Clss;
	}

};

// 0xC0 (0x140 - 0x80)
// Class InteractiveToolsFramework.ClickDragInputBehavior
class UClickDragInputBehavior : public UAnyButtonInputBehavior
{
public:
	uint8                                        Pad_8664[0xA0];                                    // Fixing Size After Last Property..
	bool                                         bUpdateModifiersDuringDrag;                        // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8665[0x1F];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ClickDragInputBehavior");
		return Clss;
	}

};

// 0x140 (0x280 - 0x140)
// Class InteractiveToolsFramework.LocalClickDragInputBehavior
class ULocalClickDragInputBehavior : public UClickDragInputBehavior
{
public:
	uint8                                        Pad_8666[0x140];                                   // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LocalClickDragInputBehavior");
		return Clss;
	}

};

// 0x68 (0x98 - 0x30)
// Class InteractiveToolsFramework.KeyAsModifierInputBehavior
class UKeyAsModifierInputBehavior : public UInputBehavior
{
public:
	uint8                                        Pad_8667[0x68];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("KeyAsModifierInputBehavior");
		return Clss;
	}

};

// 0x68 (0x98 - 0x30)
// Class InteractiveToolsFramework.MouseHoverBehavior
class UMouseHoverBehavior : public UInputBehavior
{
public:
	uint8                                        Pad_8668[0x68];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MouseHoverBehavior");
		return Clss;
	}

};

// 0x148 (0x1E0 - 0x98)
// Class InteractiveToolsFramework.LocalMouseHoverBehavior
class ULocalMouseHoverBehavior : public UMouseHoverBehavior
{
public:
	uint8                                        Pad_8669[0x148];                                   // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LocalMouseHoverBehavior");
		return Clss;
	}

};

// 0xB0 (0x130 - 0x80)
// Class InteractiveToolsFramework.MouseWheelInputBehavior
class UMouseWheelInputBehavior : public UAnyButtonInputBehavior
{
public:
	uint8                                        Pad_866A[0xB0];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MouseWheelInputBehavior");
		return Clss;
	}

};

// 0xB0 (0x130 - 0x80)
// Class InteractiveToolsFramework.MultiClickSequenceInputBehavior
class UMultiClickSequenceInputBehavior : public UAnyButtonInputBehavior
{
public:
	uint8                                        Pad_866B[0xB0];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MultiClickSequenceInputBehavior");
		return Clss;
	}

};

// 0xB0 (0x130 - 0x80)
// Class InteractiveToolsFramework.SingleClickInputBehavior
class USingleClickInputBehavior : public UAnyButtonInputBehavior
{
public:
	uint8                                        Pad_866C[0x40];                                    // Fixing Size After Last Property..
	bool                                         HitTestOnRelease;                                  // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_866D[0x6F];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SingleClickInputBehavior");
		return Clss;
	}

};

// 0xD0 (0x200 - 0x130)
// Class InteractiveToolsFramework.LocalSingleClickInputBehavior
class ULocalSingleClickInputBehavior : public USingleClickInputBehavior
{
public:
	uint8                                        Pad_866E[0xD0];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LocalSingleClickInputBehavior");
		return Clss;
	}

};

// 0x100 (0x180 - 0x80)
// Class InteractiveToolsFramework.SingleClickOrDragInputBehavior
class USingleClickOrDragInputBehavior : public UAnyButtonInputBehavior
{
public:
	uint8                                        Pad_866F[0xA0];                                    // Fixing Size After Last Property..
	bool                                         bBeginDragIfClickTargetNotHit;                     // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8670[0x3];                                     // Fixing Size After Last Property..
	float                                        ClickDistanceThreshold;                            // 0x124(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8671[0x58];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SingleClickOrDragInputBehavior");
		return Clss;
	}

};

// 0xE0 (0x110 - 0x30)
// Class InteractiveToolsFramework.SingleKeyCaptureBehavior
class USingleKeyCaptureBehavior : public UInputBehavior
{
public:
	uint8                                        Pad_8672[0xE0];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SingleKeyCaptureBehavior");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.WidgetBaseBehavior
class UWidgetBaseBehavior : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WidgetBaseBehavior");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.AxisAngleGizmoBuilder
class UAxisAngleGizmoBuilder : public UInteractiveGizmoBuilder
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AxisAngleGizmoBuilder");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class InteractiveToolsFramework.InteractiveGizmo
class UInteractiveGizmo : public UObject
{
public:
	uint8                                        Pad_8673[0x8];                                     // Fixing Size After Last Property..
	class UInputBehaviorSet*                     InputBehaviors;                                    // 0x30(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("InteractiveGizmo");
		return Clss;
	}

};

// 0x198 (0x1D0 - 0x38)
// Class InteractiveToolsFramework.AxisAngleGizmo
class UAxisAngleGizmo : public UInteractiveGizmo
{
public:
	uint8                                        Pad_8674[0x10];                                    // Fixing Size After Last Property..
	FInterfaceProperty_                          AxisSource;                                        // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FInterfaceProperty_                          AngleSource;                                       // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FInterfaceProperty_                          HitTarget;                                         // 0x68(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FInterfaceProperty_                          StateTarget;                                       // 0x78(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClickDragInputBehavior*               MouseBehavior;                                     // 0x88(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8675[0x80];                                    // Fixing Size After Last Property..
	bool                                         bInInteraction;                                    // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8676[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               RotationOrigin;                                    // 0x118(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RotationAxis;                                      // 0x130(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RotationPlaneX;                                    // 0x148(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RotationPlaneY;                                    // 0x160(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InteractionStartPoint;                             // 0x178(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InteractionCurPoint;                               // 0x190(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InteractionStartAngle;                             // 0x1A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InteractionCurAngle;                               // 0x1AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8677[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AxisAngleGizmo");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.AxisPositionGizmoBuilder
class UAxisPositionGizmoBuilder : public UInteractiveGizmoBuilder
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AxisPositionGizmoBuilder");
		return Clss;
	}

};

// 0x188 (0x1C0 - 0x38)
// Class InteractiveToolsFramework.AxisPositionGizmo
class UAxisPositionGizmo : public UInteractiveGizmo
{
public:
	uint8                                        Pad_8678[0x10];                                    // Fixing Size After Last Property..
	FInterfaceProperty_                          AxisSource;                                        // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FInterfaceProperty_                          ParameterSource;                                   // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGizmoViewContext*                     GizmoViewContext;                                  // 0x68(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FInterfaceProperty_                          HitTarget;                                         // 0x70(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FInterfaceProperty_                          StateTarget;                                       // 0x80(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClickDragInputBehavior*               MouseBehavior;                                     // 0x90(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableSignedAxis;                                 // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8679[0x88];                                    // Fixing Size After Last Property..
	bool                                         bInInteraction;                                    // 0x121(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_867A[0x6];                                     // Fixing Size After Last Property..
	struct FVector                               InteractionOrigin;                                 // 0x128(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InteractionAxis;                                   // 0x140(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InteractionStartPoint;                             // 0x158(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InteractionCurPoint;                               // 0x170(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InteractionStartParameter;                         // 0x188(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InteractionCurParameter;                           // 0x18C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ParameterSign;                                     // 0x190(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_867B[0x2C];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AxisPositionGizmo");
		return Clss;
	}

};

// 0x38 (0x60 - 0x28)
// Class InteractiveToolsFramework.GizmoConstantAxisSource
class UGizmoConstantAxisSource : public UObject
{
public:
	uint8                                        Pad_867C[0x8];                                     // Fixing Size After Last Property..
	struct FVector                               Origin;                                            // 0x30(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Direction;                                         // 0x48(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoConstantAxisSource");
		return Clss;
	}

};

// 0x68 (0x90 - 0x28)
// Class InteractiveToolsFramework.GizmoConstantFrameAxisSource
class UGizmoConstantFrameAxisSource : public UObject
{
public:
	uint8                                        Pad_867D[0x8];                                     // Fixing Size After Last Property..
	struct FVector                               Origin;                                            // 0x30(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Direction;                                         // 0x48(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TangentX;                                          // 0x60(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TangentY;                                          // 0x78(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoConstantFrameAxisSource");
		return Clss;
	}

};

// 0x28 (0x50 - 0x28)
// Class InteractiveToolsFramework.GizmoWorldAxisSource
class UGizmoWorldAxisSource : public UObject
{
public:
	uint8                                        Pad_867E[0x8];                                     // Fixing Size After Last Property..
	struct FVector                               Origin;                                            // 0x30(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AxisIndex;                                         // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_867F[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoWorldAxisSource");
		return Clss;
	}

};

// 0x18 (0x40 - 0x28)
// Class InteractiveToolsFramework.GizmoComponentAxisSource
class UGizmoComponentAxisSource : public UObject
{
public:
	uint8                                        Pad_8680[0x8];                                     // Fixing Size After Last Property..
	class USceneComponent*                       Component;                                         // 0x30(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AxisIndex;                                         // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLocalAxes;                                        // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8681[0x3];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoComponentAxisSource");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.BrushStampIndicatorBuilder
class UBrushStampIndicatorBuilder : public UInteractiveGizmoBuilder
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BrushStampIndicatorBuilder");
		return Clss;
	}

};

// 0xA0 (0xD8 - 0x38)
// Class InteractiveToolsFramework.BrushStampIndicator
class UBrushStampIndicator : public UInteractiveGizmo
{
public:
	bool                                         bVisible;                                          // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8682[0x3];                                     // Fixing Size After Last Property..
	float                                        BrushRadius;                                       // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BrushFalloff;                                      // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8683[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               BrushPosition;                                     // 0x48(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               BrushNormal;                                       // 0x60(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawIndicatorLines;                               // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawRadiusCircle;                                 // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8684[0x2];                                     // Fixing Size After Last Property..
	int32                                        SampleStepCount;                                   // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          LineColor;                                         // 0x80(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LineThickness;                                     // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDepthTested;                                      // 0x94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawSecondaryLines;                               // 0x95(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8685[0x2];                                     // Fixing Size After Last Property..
	float                                        SecondaryLineThickness;                            // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SecondaryLineColor;                                // 0x9C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8686[0x4];                                     // Fixing Size After Last Property..
	class UPrimitiveComponent*                   AttachedComponent;                                 // 0xB0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8687[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BrushStampIndicator");
		return Clss;
	}

};

// 0x0 (0x298 - 0x298)
// Class InteractiveToolsFramework.GizmoActor
class UGizmoActor : public UInternalToolFrameworkActor
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoActor");
		return Clss;
	}

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

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CombinedTransformGizmoActor");
		return Clss;
	}

};

// 0xC8 (0xF0 - 0x28)
// Class InteractiveToolsFramework.CombinedTransformGizmoBuilder
class UCombinedTransformGizmoBuilder : public UInteractiveGizmoBuilder
{
public:
	uint8                                        Pad_8688[0xC8];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CombinedTransformGizmoBuilder");
		return Clss;
	}

};

// 0x368 (0x3A0 - 0x38)
// Class InteractiveToolsFramework.CombinedTransformGizmo
class UCombinedTransformGizmo : public UInteractiveGizmo
{
public:
	class UTransformProxy*                       ActiveTarget;                                      // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSnapToWorldGrid;                                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8689[0x3];                                     // Fixing Size After Last Property..
	bool                                         bGridSizeIsExplicit;                               // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_868A[0x3];                                     // Fixing Size After Last Property..
	struct FVector                               ExplicitGridSize;                                  // 0x48(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRotationGridSizeIsExplicit;                       // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_868B[0x7];                                     // Fixing Size After Last Property..
	struct FRotator                              ExplicitRotationGridSize;                          // 0x68(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bSnapToWorldRotGrid;                               // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseContextCoordinateSystem;                       // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_868C[0x2];                                     // Fixing Size After Last Property..
	enum class EToolContextCoordinateSystem      CurrentCoordinateSystem;                           // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseContextGizmoMode;                              // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EToolContextTransformGizmoMode    ActiveGizmoMode;                                   // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_868D[0x126];                                   // Fixing Size After Last Property..
	TArray<class UPrimitiveComponent*>           ActiveComponents;                                  // 0x1B0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UInteractiveGizmo*>             ActiveGizmos;                                      // 0x1C0(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_868E[0x50];                                    // Fixing Size After Last Property..
	class UGizmoConstantFrameAxisSource*         CameraAxisSource;                                  // 0x220(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoComponentAxisSource*             AxisXSource;                                       // 0x228(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoComponentAxisSource*             AxisYSource;                                       // 0x230(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoComponentAxisSource*             AxisZSource;                                       // 0x238(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoComponentAxisSource*             UnitAxisXSource;                                   // 0x240(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoComponentAxisSource*             UnitAxisYSource;                                   // 0x248(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoComponentAxisSource*             UnitAxisZSource;                                   // 0x250(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoTransformChangeStateTarget*      StateTarget;                                       // 0x258(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_868F[0x140];                                   // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CombinedTransformGizmo");
		return Clss;
	}

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
	uint8                                        Pad_8690[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoArrowComponent");
		return Clss;
	}

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
	uint8                                        Pad_8691[0x2];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoBoxComponent");
		return Clss;
	}

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
	uint8                                        Pad_8692[0x1];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoCircleComponent");
		return Clss;
	}

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
	uint8                                        Pad_8693[0x2];                                     // Fixing Size After Last Property..
	uint32                                       PartIdentifier;                                    // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGizmoElementMeshRenderStateAttributes MeshRenderAttributes;                              // 0x34(0x60)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	enum class EGizmoElementState                ElementState;                                      // 0x94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8694[0x3];                                     // Fixing Size After Last Property..
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
	uint8                                        Pad_8695[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoElementBase");
		return Clss;
	}

};

// 0x50 (0x158 - 0x108)
// Class InteractiveToolsFramework.GizmoElementLineBase
class UGizmoElementLineBase : public UGizmoElementBase
{
public:
	struct FGizmoElementLineRenderStateAttributes LineRenderAttributes;                              // 0x108(0x3C)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                        LineThickness;                                     // 0x144(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bScreenSpaceLine;                                  // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8696[0x3];                                     // Fixing Size After Last Property..
	float                                        HoverLineThicknessMultiplier;                      // 0x14C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        InteractLineThicknessMultiplier;                   // 0x150(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8697[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoElementLineBase");
		return Clss;
	}

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

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoElementCircleBase");
		return Clss;
	}

};

// 0x8 (0x1D0 - 0x1C8)
// Class InteractiveToolsFramework.GizmoElementArc
class UGizmoElementArc : public UGizmoElementCircleBase
{
public:
	double                                       InnerRadius;                                       // 0x1C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoElementArc");
		return Clss;
	}

};

// 0x80 (0x188 - 0x108)
// Class InteractiveToolsFramework.GizmoElementArrow
class UGizmoElementArrow : public UGizmoElementBase
{
public:
	uint8                                        Pad_8698[0x8];                                     // Fixing Size After Last Property..
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

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoElementArrow");
		return Clss;
	}

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

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoElementBox");
		return Clss;
	}

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
	uint8                                        Pad_8699[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoElementCircle");
		return Clss;
	}

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
	uint8                                        Pad_869A[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoElementCone");
		return Clss;
	}

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
	uint8                                        Pad_869B[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoElementCylinder");
		return Clss;
	}

};

// 0x18 (0x170 - 0x158)
// Class InteractiveToolsFramework.GizmoElementGroup
class UGizmoElementGroup : public UGizmoElementLineBase
{
public:
	bool                                         bConstantScale;                                    // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHitOwner;                                         // 0x159(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_869C[0x6];                                     // Fixing Size After Last Property..
	TArray<class UGizmoElementBase*>             Elements;                                          // 0x160(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoElementGroup");
		return Clss;
	}

};

// 0x68 (0x90 - 0x28)
// Class InteractiveToolsFramework.GizmoElementHitTarget
class UGizmoElementHitTarget : public UObject
{
public:
	uint8                                        Pad_869D[0x8];                                     // Fixing Size After Last Property..
	class UGizmoElementBase*                     GizmoElement;                                      // 0x30(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGizmoViewContext*                     GizmoViewContext;                                  // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTransformProxy*                       GizmoTransformProxy;                               // 0x40(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_869E[0x48];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoElementHitTarget");
		return Clss;
	}

};

// 0x68 (0x90 - 0x28)
// Class InteractiveToolsFramework.GizmoElementHitMultiTarget
class UGizmoElementHitMultiTarget : public UObject
{
public:
	uint8                                        Pad_869F[0x8];                                     // Fixing Size After Last Property..
	class UGizmoElementBase*                     GizmoElement;                                      // 0x30(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGizmoViewContext*                     GizmoViewContext;                                  // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTransformProxy*                       GizmoTransformProxy;                               // 0x40(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86A0[0x48];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoElementHitMultiTarget");
		return Clss;
	}

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
	uint8                                        Pad_86A1[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoElementRectangle");
		return Clss;
	}

};

// 0x10 (0x1D8 - 0x1C8)
// Class InteractiveToolsFramework.GizmoElementTorus
class UGizmoElementTorus : public UGizmoElementCircleBase
{
public:
	double                                       InnerRadius;                                       // 0x1C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumInnerSlices;                                    // 0x1D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEndCaps;                                          // 0x1D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_86A2[0x3];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoElementTorus");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.GizmoTransformSource
class UGizmoTransformSource : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoTransformSource");
		return Clss;
	}

	void SetTransform(struct FTransform& NewTransform);
	struct FTransform GetTransform();
};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.GizmoAxisSource
class UGizmoAxisSource : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoAxisSource");
		return Clss;
	}

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

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoClickTarget");
		return Clss;
	}

	void UpdateInteractingState(bool bInteracting);
	void UpdateHoverState(bool bHovering);
};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.GizmoClickMultiTarget
class UGizmoClickMultiTarget : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoClickMultiTarget");
		return Clss;
	}

	void UpdateInteractingState(bool bInteracting, uint32 InPartIdentifier);
	void UpdateHoverState(bool bHovering, uint32 InPartIdentifier);
	void UpdateHittableState(bool bHittable, uint32 InPartIdentifier);
};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.GizmoRenderTarget
class UGizmoRenderTarget : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoRenderTarget");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.GizmoRenderMultiTarget
class UGizmoRenderMultiTarget : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoRenderMultiTarget");
		return Clss;
	}

	void UpdateVisibilityState(bool bVisible, uint32 InPartIdentifier);
};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.GizmoStateTarget
class UGizmoStateTarget : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoStateTarget");
		return Clss;
	}

	void EndUpdate();
	void BeginUpdate();
};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.GizmoFloatParameterSource
class UGizmoFloatParameterSource : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoFloatParameterSource");
		return Clss;
	}

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

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoVec2ParameterSource");
		return Clss;
	}

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
	uint8                                        Pad_86A7[0xB];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoLineHandleComponent");
		return Clss;
	}

};

// 0x58 (0x5F0 - 0x598)
// Class InteractiveToolsFramework.GizmoRectangleComponent
class UGizmoRectangleComponent : public UGizmoBaseComponent
{
public:
	struct FVector                               DirectionX;                                        // 0x598(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               DirectionY;                                        // 0x5B0(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOrientYAccordingToCamera;                         // 0x5C8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86A8[0x3];                                     // Fixing Size After Last Property..
	float                                        OffsetX;                                           // 0x5CC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OffsetY;                                           // 0x5D0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LengthX;                                           // 0x5D4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LengthY;                                           // 0x5D8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x5DC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        SegmentFlags;                                      // 0x5E0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86A9[0xF];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoRectangleComponent");
		return Clss;
	}

};

// 0x1B8 (0x1E0 - 0x28)
// Class InteractiveToolsFramework.GizmoViewContext
class UGizmoViewContext : public UObject
{
public:
	uint8                                        Pad_86AA[0x1B8];                                   // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoViewContext");
		return Clss;
	}

};

// 0xC8 (0xF0 - 0x28)
// Class InteractiveToolsFramework.GizmoLambdaHitTarget
class UGizmoLambdaHitTarget : public UObject
{
public:
	uint8                                        Pad_86AB[0xC8];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoLambdaHitTarget");
		return Clss;
	}

};

// 0xD8 (0x100 - 0x28)
// Class InteractiveToolsFramework.GizmoComponentHitTarget
class UGizmoComponentHitTarget : public UObject
{
public:
	uint8                                        Pad_86AC[0x8];                                     // Fixing Size After Last Property..
	class UPrimitiveComponent*                   Component;                                         // 0x30(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86AD[0xC8];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoComponentHitTarget");
		return Clss;
	}

};

// 0x18 (0x2B0 - 0x298)
// Class InteractiveToolsFramework.IntervalGizmoActor
class UIntervalGizmoActor : public UGizmoActor
{
public:
	class UGizmoLineHandleComponent*             UpIntervalComponent;                               // 0x298(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGizmoLineHandleComponent*             DownIntervalComponent;                             // 0x2A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGizmoLineHandleComponent*             ForwardIntervalComponent;                          // 0x2A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("IntervalGizmoActor");
		return Clss;
	}

};

// 0x98 (0xC0 - 0x28)
// Class InteractiveToolsFramework.IntervalGizmoBuilder
class UIntervalGizmoBuilder : public UInteractiveGizmoBuilder
{
public:
	uint8                                        Pad_86AE[0x98];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("IntervalGizmoBuilder");
		return Clss;
	}

};

// 0x1C8 (0x200 - 0x38)
// Class InteractiveToolsFramework.IntervalGizmo
class UIntervalGizmo : public UInteractiveGizmo
{
public:
	class UGizmoTransformChangeStateTarget*      StateTarget;                                       // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86AF[0x58];                                    // Fixing Size After Last Property..
	class UTransformProxy*                       TransformProxy;                                    // 0x98(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UPrimitiveComponent*>           ActiveComponents;                                  // 0xA0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UInteractiveGizmo*>             ActiveGizmos;                                      // 0xB0(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_86B0[0x18];                                    // Fixing Size After Last Property..
	class UGizmoComponentAxisSource*             AxisYSource;                                       // 0xD8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoComponentAxisSource*             AxisZSource;                                       // 0xE0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_86B1[0x118];                                   // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("IntervalGizmo");
		return Clss;
	}

};

// 0x18 (0x60 - 0x48)
// Class InteractiveToolsFramework.GizmoAxisIntervalParameterSource
class UGizmoAxisIntervalParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	FInterfaceProperty_                          FloatParameterSource;                              // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinParameter;                                      // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxParameter;                                      // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoAxisIntervalParameterSource");
		return Clss;
	}

};

// 0x10 (0x58 - 0x48)
// Class InteractiveToolsFramework.GizmoLocalFloatParameterSource
class UGizmoLocalFloatParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	float                                        Value;                                             // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGizmoFloatParameterChange            LastChange;                                        // 0x4C(0x8)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_86B2[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoLocalFloatParameterSource");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.PlanePositionGizmoBuilder
class UPlanePositionGizmoBuilder : public UInteractiveGizmoBuilder
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlanePositionGizmoBuilder");
		return Clss;
	}

};

// 0x238 (0x270 - 0x38)
// Class InteractiveToolsFramework.PlanePositionGizmo
class UPlanePositionGizmo : public UInteractiveGizmo
{
public:
	uint8                                        Pad_86B3[0x10];                                    // Fixing Size After Last Property..
	FInterfaceProperty_                          AxisSource;                                        // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FInterfaceProperty_                          ParameterSource;                                   // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FInterfaceProperty_                          HitTarget;                                         // 0x68(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FInterfaceProperty_                          StateTarget;                                       // 0x78(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClickDragInputBehavior*               MouseBehavior;                                     // 0x88(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableSignedAxis;                                 // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFlipX;                                            // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFlipY;                                            // 0x92(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86B4[0x8D];                                    // Fixing Size After Last Property..
	bool                                         bInInteraction;                                    // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86B5[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               InteractionOrigin;                                 // 0x128(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InteractionNormal;                                 // 0x140(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InteractionAxisX;                                  // 0x158(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InteractionAxisY;                                  // 0x170(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InteractionStartPoint;                             // 0x188(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InteractionCurPoint;                               // 0x1A0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             InteractionStartParameter;                         // 0x1B8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             InteractionCurParameter;                           // 0x1C8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ParameterSigns;                                    // 0x1D8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86B6[0x88];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlanePositionGizmo");
		return Clss;
	}

};

// 0x0 (0xF0 - 0xF0)
// Class InteractiveToolsFramework.RepositionableTransformGizmoBuilder
class URepositionableTransformGizmoBuilder : public UCombinedTransformGizmoBuilder
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RepositionableTransformGizmoBuilder");
		return Clss;
	}

};

// 0xA0 (0x440 - 0x3A0)
// Class InteractiveToolsFramework.RepositionableTransformGizmo
class URepositionableTransformGizmo : public UCombinedTransformGizmo
{
public:
	uint8                                        Pad_86B7[0x90];                                    // Fixing Size After Last Property..
	class UGizmoTransformChangeStateTarget*      RepositionStateTarget;                             // 0x430(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_86B8[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RepositionableTransformGizmo");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.ScalableSphereGizmoBuilder
class UScalableSphereGizmoBuilder : public UInteractiveGizmoBuilder
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ScalableSphereGizmoBuilder");
		return Clss;
	}

};

// 0xC8 (0x100 - 0x38)
// Class InteractiveToolsFramework.ScalableSphereGizmo
class UScalableSphereGizmo : public UInteractiveGizmo
{
public:
	uint8                                        Pad_86B9[0x48];                                    // Fixing Size After Last Property..
	float                                        HitErrorThreshold;                                 // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86BA[0x4];                                     // Fixing Size After Last Property..
	class FText                                  TransactionDescription;                            // 0x88(0x18)(NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsHovering;                                       // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsDragging;                                       // 0xA5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_86BB[0x2];                                     // Fixing Size After Last Property..
	class UTransformProxy*                       ActiveTarget;                                      // 0xA8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               ActiveAxis;                                        // 0xB0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               DragStartWorldPosition;                            // 0xC8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               DragCurrentPositionProjected;                      // 0xE0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        InteractionStartParameter;                         // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_86BC[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ScalableSphereGizmo");
		return Clss;
	}

};

// 0x50 (0xD0 - 0x80)
// Class InteractiveToolsFramework.ScalableSphereGizmoInputBehavior
class UScalableSphereGizmoInputBehavior : public UAnyButtonInputBehavior
{
public:
	uint8                                        Pad_86BD[0x50];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ScalableSphereGizmoInputBehavior");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class InteractiveToolsFramework.GizmoNilStateTarget
class UGizmoNilStateTarget : public UObject
{
public:
	uint8                                        Pad_86BE[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoNilStateTarget");
		return Clss;
	}

};

// 0x88 (0xB0 - 0x28)
// Class InteractiveToolsFramework.GizmoLambdaStateTarget
class UGizmoLambdaStateTarget : public UObject
{
public:
	uint8                                        Pad_86BF[0x88];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoLambdaStateTarget");
		return Clss;
	}

};

// 0x38 (0x60 - 0x28)
// Class InteractiveToolsFramework.GizmoObjectModifyStateTarget
class UGizmoObjectModifyStateTarget : public UObject
{
public:
	uint8                                        Pad_86C0[0x28];                                    // Fixing Size After Last Property..
	FInterfaceProperty_                          TransactionManager;                                // 0x50(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoObjectModifyStateTarget");
		return Clss;
	}

};

// 0x118 (0x140 - 0x28)
// Class InteractiveToolsFramework.GizmoTransformChangeStateTarget
class UGizmoTransformChangeStateTarget : public UObject
{
public:
	uint8                                        Pad_86C1[0x28];                                    // Fixing Size After Last Property..
	FInterfaceProperty_                          TransactionManager;                                // 0x50(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86C2[0xE0];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoTransformChangeStateTarget");
		return Clss;
	}

};

// 0x30 (0x58 - 0x28)
// Class InteractiveToolsFramework.CombinedTransformGizmoContextObject
class UCombinedTransformGizmoContextObject : public UObject
{
public:
	uint8                                        Pad_86C3[0x30];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CombinedTransformGizmoContextObject");
		return Clss;
	}

};

// 0x188 (0x1B0 - 0x28)
// Class InteractiveToolsFramework.TransformProxy
class UTransformProxy : public UObject
{
public:
	uint8                                        Pad_86C4[0xA8];                                    // Fixing Size After Last Property..
	bool                                         bRotatePerObject;                                  // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetPivotMode;                                     // 0xD1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86C5[0x1E];                                    // Fixing Size After Last Property..
	struct FTransform                            SharedTransform;                                   // 0xF0(0x60)(IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTransform                            InitialSharedTransform;                            // 0x150(0x60)(IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TransformProxy");
		return Clss;
	}

};

// 0x20 (0x48 - 0x28)
// Class InteractiveToolsFramework.GizmoBaseTransformSource
class UGizmoBaseTransformSource : public UObject
{
public:
	uint8                                        Pad_86C6[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoBaseTransformSource");
		return Clss;
	}

};

// 0x10 (0x58 - 0x48)
// Class InteractiveToolsFramework.GizmoComponentWorldTransformSource
class UGizmoComponentWorldTransformSource : public UGizmoBaseTransformSource
{
public:
	class USceneComponent*                       Component;                                         // 0x48(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bModifyComponentOnTransform;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86C7[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoComponentWorldTransformSource");
		return Clss;
	}

};

// 0x98 (0xE0 - 0x48)
// Class InteractiveToolsFramework.GizmoScaledTransformSource
class UGizmoScaledTransformSource : public UGizmoBaseTransformSource
{
public:
	FInterfaceProperty_                          ChildTransformSource;                              // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86C8[0x88];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoScaledTransformSource");
		return Clss;
	}

};

// 0x28 (0x70 - 0x48)
// Class InteractiveToolsFramework.GizmoTransformProxyTransformSource
class UGizmoTransformProxyTransformSource : public UGizmoBaseTransformSource
{
public:
	class UTransformProxy*                       Proxy;                                             // 0x48(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86C9[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoTransformProxyTransformSource");
		return Clss;
	}

};

// 0x20 (0x68 - 0x48)
// Class InteractiveToolsFramework.GizmoScaledAndUnscaledTransformSources
class UGizmoScaledAndUnscaledTransformSources : public UGizmoBaseTransformSource
{
public:
	FInterfaceProperty_                          ScaledTransformSource;                             // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FInterfaceProperty_                          UnscaledTransformSource;                           // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GizmoScaledAndUnscaledTransformSources");
		return Clss;
	}

};

// 0x80 (0xA8 - 0x28)
// Class InteractiveToolsFramework.InteractiveToolPropertySet
class UInteractiveToolPropertySet : public UObject
{
public:
	uint8                                        Pad_86CA[0x10];                                    // Fixing Size After Last Property..
	TMap<class FString, class UInteractiveToolPropertySet*> CachedPropertiesMap;                               // 0x38(0x50)(Transient, DuplicateTransient, NonTransactional, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	bool                                         bIsPropertySetEnabled;                             // 0x88(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_86CB[0x1F];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("InteractiveToolPropertySet");
		return Clss;
	}

};

// 0x18 (0xC0 - 0xA8)
// Class InteractiveToolsFramework.BrushBaseProperties
class UBrushBaseProperties : public UInteractiveToolPropertySet
{
public:
	float                                        BrushSize;                                         // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSpecifyRadius;                                    // 0xAC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86CC[0x3];                                     // Fixing Size After Last Property..
	float                                        BrushRadius;                                       // 0xB0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BrushStrength;                                     // 0xB4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BrushFalloffAmount;                                // 0xB8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowStrength;                                     // 0xBC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowFalloff;                                      // 0xBD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86CD[0x2];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BrushBaseProperties");
		return Clss;
	}

};

// 0x78 (0xA0 - 0x28)
// Class InteractiveToolsFramework.InteractiveTool
class UInteractiveTool : public UObject
{
public:
	uint8                                        Pad_86CE[0x38];                                    // Fixing Size After Last Property..
	class UInputBehaviorSet*                     InputBehaviors;                                    // 0x60(0x8)(ZeroConstructor, Transient, DuplicateTransient, NonTransactional, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UObject*>                       ToolPropertyObjects;                               // 0x68(0x10)(ZeroConstructor, Transient, DuplicateTransient, NonTransactional, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_86CF[0x28];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("InteractiveTool");
		return Clss;
	}

};

// 0x10 (0xB0 - 0xA0)
// Class InteractiveToolsFramework.SingleSelectionTool
class USingleSelectionTool : public UInteractiveTool
{
public:
	uint8                                        Pad_86D0[0x8];                                     // Fixing Size After Last Property..
	class UToolTarget*                           Target;                                            // 0xA8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SingleSelectionTool");
		return Clss;
	}

};

// 0x58 (0x108 - 0xB0)
// Class InteractiveToolsFramework.MeshSurfacePointTool
class UMeshSurfacePointTool : public USingleSelectionTool
{
public:
	uint8                                        Pad_86D1[0x50];                                    // Fixing Size After Last Property..
	TWeakObjectPtr<class UWorld>                 TargetWorld;                                       // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MeshSurfacePointTool");
		return Clss;
	}

};

// 0x170 (0x278 - 0x108)
// Class InteractiveToolsFramework.BaseBrushTool
class UBaseBrushTool : public UMeshSurfacePointTool
{
public:
	class UBrushBaseProperties*                  BrushProperties;                                   // 0x108(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInBrushStroke;                                    // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86D2[0x3];                                     // Fixing Size After Last Property..
	float                                        WorldToLocalScale;                                 // 0x114(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBrushStampData                       LastBrushStamp;                                    // 0x118(0x120)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_86D3[0x10];                                    // Fixing Size After Last Property..
	TSoftClassPtr<class UBrushBaseProperties>    PropertyClass;                                     // 0x248(0x28)(Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBrushStampIndicator*                  BrushStampIndicator;                               // 0x270(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BaseBrushTool");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.InteractiveToolBuilder
class UInteractiveToolBuilder : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("InteractiveToolBuilder");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.ClickDragToolBuilder
class UClickDragToolBuilder : public UInteractiveToolBuilder
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ClickDragToolBuilder");
		return Clss;
	}

};

// 0x8 (0xA8 - 0xA0)
// Class InteractiveToolsFramework.ClickDragTool
class UClickDragTool : public UInteractiveTool
{
public:
	uint8                                        Pad_86D4[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ClickDragTool");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.InteractiveToolWithToolTargetsBuilder
class UInteractiveToolWithToolTargetsBuilder : public UInteractiveToolBuilder
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("InteractiveToolWithToolTargetsBuilder");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class InteractiveToolsFramework.MeshSurfacePointToolBuilder
class UMeshSurfacePointToolBuilder : public UInteractiveToolWithToolTargetsBuilder
{
public:
	uint8                                        Pad_86D5[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MeshSurfacePointToolBuilder");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.SingleClickToolBuilder
class USingleClickToolBuilder : public UInteractiveToolBuilder
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SingleClickToolBuilder");
		return Clss;
	}

};

// 0x8 (0xA8 - 0xA0)
// Class InteractiveToolsFramework.SingleClickTool
class USingleClickTool : public UInteractiveTool
{
public:
	uint8                                        Pad_86D6[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SingleClickTool");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class InteractiveToolsFramework.ContextObjectStore
class UContextObjectStore : public UObject
{
public:
	TArray<class UObject*>                       ContextObjects;                                    // 0x28(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ContextObjectStore");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class InteractiveToolsFramework.InputBehaviorSet
class UInputBehaviorSet : public UObject
{
public:
	TArray<struct FBehaviorInfo>                 Behaviors;                                         // 0x28(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("InputBehaviorSet");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.InputBehaviorSource
class UInputBehaviorSource : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("InputBehaviorSource");
		return Clss;
	}

};

// 0x48 (0x70 - 0x28)
// Class InteractiveToolsFramework.LocalInputBehaviorSource
class ULocalInputBehaviorSource : public UObject
{
public:
	uint8                                        Pad_86D7[0x48];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LocalInputBehaviorSource");
		return Clss;
	}

};

// 0x168 (0x190 - 0x28)
// Class InteractiveToolsFramework.InputRouter
class UInputRouter : public UObject
{
public:
	bool                                         bAutoInvalidateOnHover;                            // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoInvalidateOnCapture;                          // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86D8[0xE];                                     // Fixing Size After Last Property..
	class UInputBehaviorSet*                     ActiveInputBehaviors;                              // 0x38(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_86D9[0x150];                                   // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("InputRouter");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class InteractiveToolsFramework.InteractionMechanic
class UInteractionMechanic : public UObject
{
public:
	uint8                                        Pad_86DA[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("InteractionMechanic");
		return Clss;
	}

};

// 0x98 (0xC0 - 0x28)
// Class InteractiveToolsFramework.InteractiveGizmoManager
class UInteractiveGizmoManager : public UObject
{
public:
	uint8                                        Pad_86DB[0x8];                                     // Fixing Size After Last Property..
	TArray<struct FActiveGizmo>                  ActiveGizmos;                                      // 0x30(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_86DC[0x18];                                    // Fixing Size After Last Property..
	TMap<class FString, class UInteractiveGizmoBuilder*> GizmoBuilders;                                     // 0x58(0x50)(Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_86DD[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("InteractiveGizmoManager");
		return Clss;
	}

};

// 0x170 (0x198 - 0x28)
// Class InteractiveToolsFramework.InteractiveToolManager
class UInteractiveToolManager : public UObject
{
public:
	uint8                                        Pad_86DE[0x30];                                    // Fixing Size After Last Property..
	class UInteractiveTool*                      ActiveLeftTool;                                    // 0x58(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInteractiveTool*                      ActiveRightTool;                                   // 0x60(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86DF[0x80];                                    // Fixing Size After Last Property..
	TMap<class FString, class UInteractiveToolBuilder*> ToolBuilders;                                      // 0xE8(0x50)(Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_86E0[0x60];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("InteractiveToolManager");
		return Clss;
	}

};

// 0x308 (0x330 - 0x28)
// Class InteractiveToolsFramework.InteractiveToolsContext
class UInteractiveToolsContext : public UObject
{
public:
	uint8                                        Pad_86E1[0x30];                                    // Fixing Size After Last Property..
	class UInputRouter*                          InputRouter;                                       // 0x58(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UToolTargetManager*                    TargetManager;                                     // 0x60(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInteractiveToolManager*               ToolManager;                                       // 0x68(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInteractiveGizmoManager*              GizmoManager;                                      // 0x70(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UContextObjectStore*                   ContextObjectStore;                                // 0x78(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86E2[0x280];                                   // Fixing Size After Last Property..
	TSoftClassPtr<class UInteractiveToolManager> ToolManagerClass;                                  // 0x300(0x28)(Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_86E3[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("InteractiveToolsContext");
		return Clss;
	}

};

// 0x18 (0xB8 - 0xA0)
// Class InteractiveToolsFramework.MultiSelectionTool
class UMultiSelectionTool : public UInteractiveTool
{
public:
	uint8                                        Pad_86E4[0x8];                                     // Fixing Size After Last Property..
	TArray<class UToolTarget*>                   Targets;                                           // 0xA8(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MultiSelectionTool");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.SceneSnappingManager
class USceneSnappingManager : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SceneSnappingManager");
		return Clss;
	}

};

// 0x18 (0x40 - 0x28)
// Class InteractiveToolsFramework.SelectionSet
class USelectionSet : public UObject
{
public:
	uint8                                        Pad_86E5[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SelectionSet");
		return Clss;
	}

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

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MeshSelectionSet");
		return Clss;
	}

};

// 0x18 (0x40 - 0x28)
// Class InteractiveToolsFramework.ToolTargetManager
class UToolTargetManager : public UObject
{
public:
	uint8                                        Pad_86E6[0x8];                                     // Fixing Size After Last Property..
	TArray<class UToolTargetFactory*>            Factories;                                         // 0x30(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ToolTargetManager");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.ToolTarget
class UToolTarget : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ToolTarget");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class InteractiveToolsFramework.PrimitiveComponentToolTarget
class UPrimitiveComponentToolTarget : public UToolTarget
{
public:
	uint8                                        Pad_86E7[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PrimitiveComponentToolTarget");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.ToolTargetFactory
class UToolTargetFactory : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ToolTargetFactory");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.PrimitiveComponentToolTargetFactory
class UPrimitiveComponentToolTargetFactory : public UToolTargetFactory
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PrimitiveComponentToolTargetFactory");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
