#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class NavigationSystem.CrowdManagerBase
class UCrowdManagerBase : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CrowdManagerBase");
		return Clss;
	}

};

// 0x0 (0x290 - 0x290)
// Class NavigationSystem.NavigationGraphNode
class UNavigationGraphNode : public UActor
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavigationGraphNode");
		return Clss;
	}

};

// 0x30 (0x2D0 - 0x2A0)
// Class NavigationSystem.NavigationGraphNodeComponent
class UNavigationGraphNodeComponent : public USceneComponent
{
public:
	struct FNavGraphNode                         Node;                                              // 0x2A0(0x18)(NativeAccessSpecifierPublic)
	class UNavigationGraphNodeComponent*         NextNodeComponent;                                 // 0x2B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNavigationGraphNodeComponent*         PrevNodeComponent;                                 // 0x2C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ADA[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavigationGraphNodeComponent");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class NavigationSystem.NavigationPathGenerator
class UNavigationPathGenerator : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavigationPathGenerator");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class NavigationSystem.NavLinkCustomInterface
class UNavLinkCustomInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavLinkCustomInterface");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class NavigationSystem.NavLinkHostInterface
class UNavLinkHostInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavLinkHostInterface");
		return Clss;
	}

};

// 0x0 (0x50 - 0x50)
// Class NavigationSystem.NavLinkTrivial
class UNavLinkTrivial : public UNavLinkDefinition
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavLinkTrivial");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class NavigationSystem.NavNodeInterface
class UNavNodeInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavNodeInterface");
		return Clss;
	}

};

// 0x208 (0x498 - 0x290)
// Class NavigationSystem.NavigationData
class UNavigationData : public UActor
{
public:
	uint8                                        Pad_1AE6[0x8];                                     // Fixing Size After Last Property
	class UPrimitiveComponent*                   RenderingComp;                                     // 0x298(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNavDataConfig                        NavDataConfig;                                     // 0x2A0(0x78)(Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bEnableDrawing : 1;                                // Mask: 0x1, PropSize: 0x10x318(0x1)(Edit, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bForceRebuildOnLoad : 1;                           // Mask: 0x2, PropSize: 0x10x318(0x1)(Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bAutoDestroyWhenNoNavigation : 1;                  // Mask: 0x4, PropSize: 0x10x318(0x1)(Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bCanBeMainNavData : 1;                             // Mask: 0x8, PropSize: 0x10x318(0x1)(Edit, Config, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bCanSpawnOnRebuild : 1;                            // Mask: 0x10, PropSize: 0x10x318(0x1)(Edit, Config, EditConst, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bRebuildAtRuntime : 1;                             // Mask: 0x20, PropSize: 0x10x318(0x1)(Config, Deprecated, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_14F : 2;                                    // Fixing Bit-Field Size
	uint8                                        Pad_1AF1[0x3];                                     // Fixing Size After Last Property
	enum class ERuntimeGenerationType            RuntimeGeneration;                                 // 0x31C(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1AF2[0x3];                                     // Fixing Size After Last Property
	float                                        ObservedPathsTickInterval;                         // 0x320(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint32                                       DataVersion;                                       // 0x324(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1AF5[0x108];                                   // Fixing Size After Last Property
	TArray<struct FSupportedAreaData>            SupportedAreas;                                    // 0x430(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1AF7[0x58];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavigationData");
		return Clss;
	}

};

// 0x0 (0x498 - 0x498)
// Class NavigationSystem.AbstractNavData
class UAbstractNavData : public UNavigationData
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbstractNavData");
		return Clss;
	}

};

// 0x18 (0x48 - 0x30)
// Class NavigationSystem.NavArea
class UNavArea : public UNavAreaBase
{
public:
	float                                        DefaultCost;                                       // 0x30(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FixedAreaEnteringCost;                             // 0x34(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FColor                                DrawColor;                                         // 0x38(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNavAgentSelector                     SupportedAgents;                                   // 0x3C(0x4)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent0 : 1;                               // Mask: 0x1, PropSize: 0x10x40(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent1 : 1;                               // Mask: 0x2, PropSize: 0x10x40(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent2 : 1;                               // Mask: 0x4, PropSize: 0x10x40(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent3 : 1;                               // Mask: 0x8, PropSize: 0x10x40(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent4 : 1;                               // Mask: 0x10, PropSize: 0x10x40(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent5 : 1;                               // Mask: 0x20, PropSize: 0x10x40(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent6 : 1;                               // Mask: 0x40, PropSize: 0x10x40(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent7 : 1;                               // Mask: 0x80, PropSize: 0x10x40(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent8 : 1;                               // Mask: 0x1, PropSize: 0x10x41(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent9 : 1;                               // Mask: 0x2, PropSize: 0x10x41(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent10 : 1;                              // Mask: 0x4, PropSize: 0x10x41(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent11 : 1;                              // Mask: 0x8, PropSize: 0x10x41(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent12 : 1;                              // Mask: 0x10, PropSize: 0x10x41(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent13 : 1;                              // Mask: 0x20, PropSize: 0x10x41(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent14 : 1;                              // Mask: 0x40, PropSize: 0x10x41(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent15 : 1;                              // Mask: 0x80, PropSize: 0x10x41(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B06[0x6];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavArea");
		return Clss;
	}

};

// 0x0 (0x48 - 0x48)
// Class NavigationSystem.NavAreaMeta
class UNavAreaMeta : public UNavArea
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavAreaMeta");
		return Clss;
	}

};

// 0x80 (0xC8 - 0x48)
// Class NavigationSystem.NavAreaMeta_SwitchByAgent
class UNavAreaMeta_SwitchByAgent : public UNavAreaMeta
{
public:
	TSubclassOf<class UNavArea>                  Agent0Area;                                        // 0x48(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavArea>                  Agent1Area;                                        // 0x50(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavArea>                  Agent2Area;                                        // 0x58(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavArea>                  Agent3Area;                                        // 0x60(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavArea>                  Agent4Area;                                        // 0x68(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavArea>                  Agent5Area;                                        // 0x70(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavArea>                  Agent6Area;                                        // 0x78(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavArea>                  Agent7Area;                                        // 0x80(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavArea>                  Agent8Area;                                        // 0x88(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavArea>                  Agent9Area;                                        // 0x90(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavArea>                  Agent10Area;                                       // 0x98(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavArea>                  Agent11Area;                                       // 0xA0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavArea>                  Agent12Area;                                       // 0xA8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavArea>                  Agent13Area;                                       // 0xB0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavArea>                  Agent14Area;                                       // 0xB8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavArea>                  Agent15Area;                                       // 0xC0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavAreaMeta_SwitchByAgent");
		return Clss;
	}

};

// 0x0 (0x48 - 0x48)
// Class NavigationSystem.NavArea_Default
class UNavArea_Default : public UNavArea
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavArea_Default");
		return Clss;
	}

};

// 0x0 (0x48 - 0x48)
// Class NavigationSystem.NavArea_LowHeight
class UNavArea_LowHeight : public UNavArea
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavArea_LowHeight");
		return Clss;
	}

};

// 0x0 (0x48 - 0x48)
// Class NavigationSystem.NavArea_Null
class UNavArea_Null : public UNavArea
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavArea_Null");
		return Clss;
	}

};

// 0x0 (0x48 - 0x48)
// Class NavigationSystem.NavArea_Obstacle
class UNavArea_Obstacle : public UNavArea
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavArea_Obstacle");
		return Clss;
	}

};

// 0x60 (0xD0 - 0x70)
// Class NavigationSystem.NavCollision
class UNavCollision : public UNavCollisionBase
{
public:
	uint8                                        Pad_1B15[0x10];                                    // Fixing Size After Last Property
	TArray<struct FNavCollisionCylinder>         CylinderCollision;                                 // 0x80(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNavCollisionBox>              BoxCollision;                                      // 0x90(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavArea>                  AreaClass;                                         // 0xA0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGatherConvexGeometry : 1;                         // Mask: 0x1, PropSize: 0x10xA8(0x1)(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCreateOnClient : 1;                               // Mask: 0x2, PropSize: 0x10xA8(0x1)(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B1A[0x27];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavCollision");
		return Clss;
	}

};

// 0x20 (0x48 - 0x28)
// Class NavigationSystem.NavigationQueryFilter
class UNavigationQueryFilter : public UObject
{
public:
	TArray<struct FNavigationFilterArea>         Areas;                                             // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FNavigationFilterFlags                IncludeFlags;                                      // 0x38(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FNavigationFilterFlags                ExcludeFlags;                                      // 0x3C(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B20[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavigationQueryFilter");
		return Clss;
	}

};

// 0x0 (0x48 - 0x48)
// Class NavigationSystem.RecastFilter_UseDefaultArea
class URecastFilter_UseDefaultArea : public UNavigationQueryFilter
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RecastFilter_UseDefaultArea");
		return Clss;
	}

};

// 0x0 (0x498 - 0x498)
// Class NavigationSystem.NavigationGraph
class UNavigationGraph : public UNavigationData
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavigationGraph");
		return Clss;
	}

};

// 0x10 (0xB0 - 0xA0)
// Class NavigationSystem.NavigationInvokerComponent
class UNavigationInvokerComponent : public UActorComponent
{
public:
	float                                        TileGenerationRadius;                              // 0xA0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TileRemovalRadius;                                 // 0xA4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FNavAgentSelector                     SupportedAgents;                                   // 0xA8(0x4)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	enum class ENavigationInvokerPriority        Priority;                                          // 0xAC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B28[0x3];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavigationInvokerComponent");
		return Clss;
	}

};

// 0x60 (0x88 - 0x28)
// Class NavigationSystem.NavigationPath
class UNavigationPath : public UObject
{
public:
	FMulticastInlineDelegateProperty_            PathUpdatedNotifier;                               // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       PathPoints;                                        // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ENavigationOptionFlag             RecalculateOnInvalidation;                         // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B4B[0x3F];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavigationPath");
		return Clss;
	}

	bool IsValid();
	bool IsStringPulled();
	bool IsPartial();
	double GetPathLength();
	double GetPathCost();
	class FString GetDebugString();
	void EnableRecalculationOnInvalidation(enum class ENavigationOptionFlag DoRecalculation);
	void EnableDebugDrawing(bool bShouldDrawDebugData, const struct FLinearColor& PathColor);
};

// 0x1568 (0x1590 - 0x28)
// Class NavigationSystem.NavigationSystemV1
class UNavigationSystemV1 : public UNavigationSystemBase
{
public:
	class UNavigationData*                       MainNavData;                                       // 0x28(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNavigationData*                       AbstractNavData;                                   // 0x30(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DefaultAgentName;                                  // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C34[0x4];                                     // Fixing Size After Last Property
	TSoftClassPtr<class UCrowdManagerBase>       CrowdManagerClass;                                 // 0x40(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Config, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bAutoCreateNavigationData : 1;                     // Mask: 0x1, PropSize: 0x10x68(0x1)(Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bSpawnNavDataInNavBoundsLevel : 1;                 // Mask: 0x2, PropSize: 0x10x68(0x1)(Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bAllowClientSideNavigation : 1;                    // Mask: 0x4, PropSize: 0x10x68(0x1)(Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bShouldDiscardSubLevelNavData : 1;                 // Mask: 0x8, PropSize: 0x10x68(0x1)(Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bTickWhilePaused : 1;                              // Mask: 0x10, PropSize: 0x10x68(0x1)(Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bSupportRebuilding : 1;                            // Mask: 0x20, PropSize: 0x10x68(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bInitialBuildingLocked : 1;                        // Mask: 0x40, PropSize: 0x10x68(0x1)(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_157 : 1;                                    // Fixing Bit-Field Size
	uint8                                        bSkipAgentHeightCheckWhenPickingNavData : 1;       // Mask: 0x1, PropSize: 0x10x69(0x1)(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_158 : 7;                                    // Fixing Bit-Field Size
	uint8                                        Pad_1C38[0x2];                                     // Fixing Size After Last Property
	int32                                        GeometryExportTriangleCountWarningThreshold;       // 0x6C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGenerateNavigationOnlyAroundNavigationInvokers : 1; // Mask: 0x1, PropSize: 0x10x70(0x1)(Edit, Config, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_159 : 7;                                    // Fixing Bit-Field Size
	uint8                                        Pad_1C3B[0x3];                                     // Fixing Size After Last Property
	float                                        ActiveTilesUpdateInterval;                         // 0x74(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ENavDataGatheringModeConfig       DataGatheringMode;                                 // 0x78(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C3E[0x3];                                     // Fixing Size After Last Property
	float                                        DirtyAreaWarningSizeThreshold;                     // 0x7C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        GatheringNavModifiersWarningLimitTime;             // 0x80(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C41[0x4];                                     // Fixing Size After Last Property
	TArray<struct FNavDataConfig>                SupportedAgents;                                   // 0x88(0x10)(Edit, ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	struct FNavAgentSelector                     SupportedAgentsMask;                               // 0x98(0x4)(Edit, Config, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C42[0x4];                                     // Fixing Size After Last Property
	struct FBox                                  BuildBounds;                                       // 0xA0(0x38)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<class UNavigationData*>               NavDataSet;                                        // 0xD8(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UNavigationData*>               NavDataRegistrationQueue;                          // 0xE8(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C45[0x10];                                    // Fixing Size After Last Property
	FMulticastInlineDelegateProperty_            OnNavDataRegisteredEvent;                          // 0x108(0x10)(ZeroConstructor, Transient, InstancedReference, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnNavigationGenerationFinishedDelegate;            // 0x118(0x10)(ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C61[0xE0];                                    // Fixing Size After Last Property
	enum class EFNavigationSystemRunMode         OperationMode;                                     // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C62[0x1387];                                  // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavigationSystemV1");
		return Clss;
	}

	void UnregisterNavigationInvoker(class UActor* Invoker);
	void SetMaxSimultaneousTileGenerationJobsCount(int32 MaxNumberOfJobs);
	void SetGeometryGatheringMode(enum class ENavDataGatheringModeConfig NewMode);
	void ResetMaxSimultaneousTileGenerationJobsCount();
	void RegisterNavigationInvoker(class UActor* Invoker, float TileGenerationRadius, float TileRemovalRadius);
	void OnNavigationBoundsUpdated(class UNavMeshBoundsVolume* NavVolume);
	bool NavigationRaycast(class UObject* WorldContextObject, struct FVector& RayStart, struct FVector& RayEnd, struct FVector* HitLocation, TSubclassOf<class UNavigationQueryFilter> FilterClass, class UController* Querier);
	bool K2_ReplaceAreaInOctreeData(class UObject* Object, TSubclassOf<class UNavArea> OldArea, TSubclassOf<class UNavArea> NewArea);
	bool K2_ProjectPointToNavigation(class UObject* WorldContextObject, struct FVector& Point, struct FVector* ProjectedLocation, class UNavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass, const struct FVector& QueryExtent);
	bool K2_GetRandomReachablePointInRadius(class UObject* WorldContextObject, struct FVector& Origin, struct FVector* RandomLocation, float Radius, class UNavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass);
	bool K2_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, struct FVector& Origin, struct FVector* RandomLocation, float Radius, class UNavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass);
	bool K2_GetRandomLocationInNavigableRadius(class UObject* WorldContextObject, struct FVector& Origin, struct FVector* RandomLocation, float Radius, class UNavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass);
	bool IsNavigationBeingBuiltOrLocked(class UObject* WorldContextObject);
	bool IsNavigationBeingBuilt(class UObject* WorldContextObject);
	enum class ENavigationQueryResult GetPathLength(class UObject* WorldContextObject, struct FVector& PathStart, struct FVector& PathEnd, double* PathLength, class UNavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass);
	enum class ENavigationQueryResult GetPathCost(class UObject* WorldContextObject, struct FVector& PathStart, struct FVector& PathEnd, double* PathCost, class UNavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass);
	class UNavigationSystemV1* GetNavigationSystem(class UObject* WorldContextObject);
	class UNavigationPath* FindPathToLocationSynchronously(class UObject* WorldContextObject, struct FVector& PathStart, struct FVector& PathEnd, class UActor* PathfindingContext, TSubclassOf<class UNavigationQueryFilter> FilterClass);
	class UNavigationPath* FindPathToActorSynchronously(class UObject* WorldContextObject, struct FVector& PathStart, class UActor* GoalActor, float TetherDistance, class UActor* PathfindingContext, TSubclassOf<class UNavigationQueryFilter> FilterClass);
};

// 0x8 (0x58 - 0x50)
// Class NavigationSystem.NavigationSystemModuleConfig
class UNavigationSystemModuleConfig : public UNavigationSystemConfig
{
public:
	uint8                                        bStrictlyStatic : 1;                               // Mask: 0x1, PropSize: 0x10x50(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bCreateOnClient : 1;                               // Mask: 0x2, PropSize: 0x10x50(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bAutoSpawnMissingNavData : 1;                      // Mask: 0x4, PropSize: 0x10x50(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bSpawnNavDataInNavBoundsLevel : 1;                 // Mask: 0x8, PropSize: 0x10x50(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C95[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavigationSystemModuleConfig");
		return Clss;
	}

};

// 0x120 (0x3B0 - 0x290)
// Class NavigationSystem.NavigationTestingActor
class UNavigationTestingActor : public UActor
{
public:
	uint8                                        Pad_1C98[0x10];                                    // Fixing Size After Last Property
	class UCapsuleComponent*                     CapsuleComponent;                                  // 0x2A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UNavigationInvokerComponent*           InvokerComponent;                                  // 0x2A8(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bActAsNavigationInvoker : 1;                       // Mask: 0x1, PropSize: 0x10x2B0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_15C : 7;                                    // Fixing Bit-Field Size
	uint8                                        Pad_1C9B[0x7];                                     // Fixing Size After Last Property
	struct FNavAgentProperties                   NavAgentProps;                                     // 0x2B8(0x30)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               QueryingExtent;                                    // 0x2E8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNavigationData*                       MyNavData;                                         // 0x300(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ProjectedLocation;                                 // 0x308(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bProjectedLocationValid : 1;                       // Mask: 0x1, PropSize: 0x10x320(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSearchStart : 1;                                  // Mask: 0x2, PropSize: 0x10x320(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_15D : 6;                                    // Fixing Bit-Field Size
	uint8                                        Pad_1C9E[0x3];                                     // Fixing Size After Last Property
	float                                        CostLimitFactor;                                   // 0x324(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumCostLimit;                                  // 0x328(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bBacktracking : 1;                                 // Mask: 0x1, PropSize: 0x10x32C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseHierarchicalPathfinding : 1;                   // Mask: 0x2, PropSize: 0x10x32C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGatherDetailedInfo : 1;                           // Mask: 0x4, PropSize: 0x10x32C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRequireNavigableEndLocation : 1;                  // Mask: 0x8, PropSize: 0x10x32C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawDistanceToWall : 1;                           // Mask: 0x10, PropSize: 0x10x32C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShowNodePool : 1;                                 // Mask: 0x20, PropSize: 0x10x32C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShowBestPath : 1;                                 // Mask: 0x40, PropSize: 0x10x32C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShowDiffWithPreviousStep : 1;                     // Mask: 0x80, PropSize: 0x10x32C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShouldBeVisibleInGame : 1;                        // Mask: 0x1, PropSize: 0x10x32D(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_15F : 7;                                    // Fixing Bit-Field Size
	uint8                                        Pad_1CA3[0x2];                                     // Fixing Size After Last Property
	enum class ENavCostDisplay                   CostDisplayMode;                                   // 0x330(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CA5[0x7];                                     // Fixing Size After Last Property
	struct FVector2D                             TextCanvasOffset;                                  // 0x338(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPathExist : 1;                                    // Mask: 0x1, PropSize: 0x10x348(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPathIsPartial : 1;                                // Mask: 0x2, PropSize: 0x10x348(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPathSearchOutOfNodes : 1;                         // Mask: 0x4, PropSize: 0x10x348(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_160 : 5;                                    // Fixing Bit-Field Size
	uint8                                        Pad_1CA9[0x3];                                     // Fixing Size After Last Property
	float                                        PathfindingTime;                                   // 0x34C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       PathCost;                                          // 0x350(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PathfindingSteps;                                  // 0x358(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CAA[0x4];                                     // Fixing Size After Last Property
	class UNavigationTestingActor*               OtherActor;                                        // 0x360(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavigationQueryFilter>    FilterClass;                                       // 0x368(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ShowStepIndex;                                     // 0x370(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OffsetFromCornersDistance;                         // 0x374(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CAD[0x38];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavigationTestingActor");
		return Clss;
	}

};

// 0x18 (0x580 - 0x568)
// Class NavigationSystem.NavLinkComponent
class UNavLinkComponent : public UPrimitiveComponent
{
public:
	uint8                                        Pad_1CB3[0x8];                                     // Fixing Size After Last Property
	TArray<struct FNavigationLink>               Links;                                             // 0x570(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavLinkComponent");
		return Clss;
	}

};

// 0x50 (0xF0 - 0xA0)
// Class NavigationSystem.NavRelevantComponent
class UNavRelevantComponent : public UActorComponent
{
public:
	uint8                                        Pad_1CB7[0x40];                                    // Fixing Size After Last Property
	uint8                                        bAttachToOwnersRoot : 1;                           // Mask: 0x1, PropSize: 0x10xE0(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_164 : 7;                                    // Fixing Bit-Field Size
	uint8                                        Pad_1CB8[0x7];                                     // Fixing Size After Last Property
	class UObject*                               CachedNavParent;                                   // 0xE8(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavRelevantComponent");
		return Clss;
	}

	void SetNavigationRelevancy(bool bRelevant);
};

// 0xF0 (0x1E0 - 0xF0)
// Class NavigationSystem.NavLinkCustomComponent
class UNavLinkCustomComponent : public UNavRelevantComponent
{
public:
	uint8                                        Pad_1CB9[0x8];                                     // Fixing Size After Last Property
	uint32                                       NavLinkUserId;                                     // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1CBA[0x4];                                     // Fixing Size After Last Property
	struct FNavLinkId                            CustomLinkId;                                      // 0x100(0x8)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FNavLinkAuxiliaryId                   AuxiliaryCustomLinkId;                             // 0x108(0x8)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UNavArea>                  EnabledAreaClass;                                  // 0x110(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UNavArea>                  DisabledAreaClass;                                 // 0x118(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FNavAgentSelector                     SupportedAgents;                                   // 0x120(0x4)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1CBC[0x4];                                     // Fixing Size After Last Property
	struct FVector                               LinkRelativeStart;                                 // 0x128(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               LinkRelativeEnd;                                   // 0x140(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ENavLinkDirection                 LinkDirection;                                     // 0x158(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1CBE[0x3];                                     // Fixing Size After Last Property
	uint8                                        bLinkEnabled : 1;                                  // Mask: 0x1, PropSize: 0x10x15C(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bNotifyWhenEnabled : 1;                            // Mask: 0x2, PropSize: 0x10x15C(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bNotifyWhenDisabled : 1;                           // Mask: 0x4, PropSize: 0x10x15C(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bCreateBoxObstacle : 1;                            // Mask: 0x8, PropSize: 0x10x15C(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_165 : 4;                                    // Fixing Bit-Field Size
	uint8                                        Pad_1CC0[0x3];                                     // Fixing Size After Last Property
	struct FVector                               ObstacleOffset;                                    // 0x160(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               ObstacleExtent;                                    // 0x178(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UNavArea>                  ObstacleAreaClass;                                 // 0x190(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BroadcastRadius;                                   // 0x198(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BroadcastInterval;                                 // 0x19C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECollisionChannel                 BroadcastChannel;                                  // 0x1A0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1CC2[0x3F];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavLinkCustomComponent");
		return Clss;
	}

};

// 0x8 (0x570 - 0x568)
// Class NavigationSystem.NavLinkRenderingComponent
class UNavLinkRenderingComponent : public UPrimitiveComponent
{
public:
	uint8                                        Pad_1CC8[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavLinkRenderingComponent");
		return Clss;
	}

};

// 0x8 (0x2D0 - 0x2C8)
// Class NavigationSystem.NavMeshBoundsVolume
class UNavMeshBoundsVolume : public UVolume
{
public:
	struct FNavAgentSelector                     SupportedAgents;                                   // 0x2C8(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CCD[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavMeshBoundsVolume");
		return Clss;
	}

};

// 0x18 (0x5D0 - 0x5B8)
// Class NavigationSystem.NavMeshRenderingComponent
class UNavMeshRenderingComponent : public UDebugDrawComponent
{
public:
	uint8                                        Pad_1CCE[0x18];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavMeshRenderingComponent");
		return Clss;
	}

};

// 0x8 (0x5C0 - 0x5B8)
// Class NavigationSystem.NavTestRenderingComponent
class UNavTestRenderingComponent : public UDebugDrawComponent
{
public:
	uint8                                        Pad_1CCF[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavTestRenderingComponent");
		return Clss;
	}

};

// 0x118 (0x5B0 - 0x498)
// Class NavigationSystem.RecastNavMesh
class URecastNavMesh : public UNavigationData
{
public:
	uint8                                        bDrawTriangleEdges : 1;                            // Mask: 0x1, PropSize: 0x10x498(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawPolyEdges : 1;                                // Mask: 0x2, PropSize: 0x10x498(0x1)(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawFilledPolys : 1;                              // Mask: 0x4, PropSize: 0x10x498(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawNavMeshEdges : 1;                             // Mask: 0x8, PropSize: 0x10x498(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawTileBounds : 1;                               // Mask: 0x10, PropSize: 0x10x498(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawTileResolutions : 1;                          // Mask: 0x20, PropSize: 0x10x498(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawPathCollidingGeometry : 1;                    // Mask: 0x40, PropSize: 0x10x498(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawTileLabels : 1;                               // Mask: 0x80, PropSize: 0x10x498(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawTileBuildTimes : 1;                           // Mask: 0x1, PropSize: 0x10x499(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawTileBuildTimesHeatMap : 1;                    // Mask: 0x2, PropSize: 0x10x499(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawPolygonLabels : 1;                            // Mask: 0x4, PropSize: 0x10x499(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawDefaultPolygonCost : 1;                       // Mask: 0x8, PropSize: 0x10x499(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawPolygonFlags : 1;                             // Mask: 0x10, PropSize: 0x10x499(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawLabelsOnPathNodes : 1;                        // Mask: 0x20, PropSize: 0x10x499(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawNavLinks : 1;                                 // Mask: 0x40, PropSize: 0x10x499(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawFailedNavLinks : 1;                           // Mask: 0x80, PropSize: 0x10x499(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawClusters : 1;                                 // Mask: 0x1, PropSize: 0x10x49A(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawOctree : 1;                                   // Mask: 0x2, PropSize: 0x10x49A(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawOctreeDetails : 1;                            // Mask: 0x4, PropSize: 0x10x49A(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawMarkedForbiddenPolys : 1;                     // Mask: 0x8, PropSize: 0x10x49A(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDistinctlyDrawTilesBeingBuilt : 1;                // Mask: 0x10, PropSize: 0x10x49A(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_166 : 3;                                    // Fixing Bit-Field Size
	uint8                                        Pad_1CDE[0x1];                                     // Fixing Size After Last Property
	float                                        DrawOffset;                                        // 0x49C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRecastNavMeshTileGenerationDebug     TileGenerationDebug;                               // 0x4A0(0x1C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        bFixedTilePoolSize : 1;                            // Mask: 0x1, PropSize: 0x10x4BC(0x1)(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_167 : 7;                                    // Fixing Bit-Field Size
	uint8                                        Pad_1CE0[0x3];                                     // Fixing Size After Last Property
	int32                                        TilePoolSize;                                      // 0x4C0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TileSizeUU;                                        // 0x4C4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CellSize;                                          // 0x4C8(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CellHeight;                                        // 0x4CC(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNavMeshResolutionParam               NavMeshResolutionParams[0x3];                      // 0x4D0(0x24)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	float                                        AgentRadius;                                       // 0x4F4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AgentHeight;                                       // 0x4F8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AgentMaxSlope;                                     // 0x4FC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AgentMaxStepHeight;                                // 0x500(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinRegionArea;                                     // 0x504(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MergeRegionSize;                                   // 0x508(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxSimplificationError;                            // 0x50C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxSimultaneousTileGenerationJobsCount;            // 0x510(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TileNumberHardLimit;                               // 0x514(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PolyRefTileBits;                                   // 0x518(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PolyRefNavPolyBits;                                // 0x51C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PolyRefSaltBits;                                   // 0x520(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CE6[0x4];                                     // Fixing Size After Last Property
	struct FVector                               NavMeshOriginOffset;                               // 0x528(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultDrawDistance;                               // 0x540(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultMaxSearchNodes;                             // 0x544(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultMaxHierarchicalSearchNodes;                 // 0x548(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERecastPartitioning               RegionPartitioning;                                // 0x54C(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERecastPartitioning               LayerPartitioning;                                 // 0x54D(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CE9[0x2];                                     // Fixing Size After Last Property
	int32                                        RegionChunkSplits;                                 // 0x550(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LayerChunkSplits;                                  // 0x554(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSortNavigationAreasByCost : 1;                    // Mask: 0x1, PropSize: 0x10x558(0x1)(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsWorldPartitioned : 1;                           // Mask: 0x2, PropSize: 0x10x558(0x1)(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPerformVoxelFiltering : 1;                        // Mask: 0x4, PropSize: 0x10x558(0x1)(Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bMarkLowHeightAreas : 1;                           // Mask: 0x8, PropSize: 0x10x558(0x1)(Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseExtraTopCellWhenMarkingAreas : 1;              // Mask: 0x10, PropSize: 0x10x558(0x1)(Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFilterLowSpanSequences : 1;                       // Mask: 0x20, PropSize: 0x10x558(0x1)(Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFilterLowSpanFromTileCache : 1;                   // Mask: 0x40, PropSize: 0x10x558(0x1)(Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDoFullyAsyncNavDataGathering : 1;                 // Mask: 0x80, PropSize: 0x10x558(0x1)(Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseBetterOffsetsFromCorners : 1;                  // Mask: 0x1, PropSize: 0x10x559(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bStoreEmptyTileLayers : 1;                         // Mask: 0x2, PropSize: 0x10x559(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseVirtualFilters : 1;                            // Mask: 0x4, PropSize: 0x10x559(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseVirtualGeometryFilteringAndDirtying : 1;       // Mask: 0x8, PropSize: 0x10x559(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAllowNavLinkAsPathEnd : 1;                        // Mask: 0x10, PropSize: 0x10x559(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_168 : 3;                                    // Fixing Bit-Field Size
	uint8                                        Pad_1CF7[0x2];                                     // Fixing Size After Last Property
	int32                                        TimeSliceFilterLedgeSpansMaxYProcess;              // 0x55C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       TimeSliceLongDurationDebug;                        // 0x560(0x8)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       InvokerTilePriorityBumpDistanceThresholdInTileUnits; // 0x568(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        InvokerTilePriorityBumpIncrease;                   // 0x56C(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CF8[0x3];                                     // Fixing Size After Last Property
	uint8                                        bUseVoxelCache : 1;                                // Mask: 0x1, PropSize: 0x10x570(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_169 : 7;                                    // Fixing Bit-Field Size
	uint8                                        Pad_1CFB[0x3];                                     // Fixing Size After Last Property
	float                                        TileSetUpdateInterval;                             // 0x574(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        HeuristicScale;                                    // 0x578(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VerticalDeviationFromGroundCompensation;           // 0x57C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CFE[0x30];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RecastNavMesh");
		return Clss;
	}

	bool K2_ReplaceAreaInTileBounds(const struct FBox& Bounds, TSubclassOf<class UNavArea> OldArea, TSubclassOf<class UNavArea> NewArea, bool ReplaceLinks);
};

// 0x10 (0x40 - 0x30)
// Class NavigationSystem.RecastNavMeshDataChunk
class URecastNavMeshDataChunk : public UNavigationDataChunk
{
public:
	uint8                                        Pad_1CFF[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RecastNavMeshDataChunk");
		return Clss;
	}

};

// 0xB0 (0x1A0 - 0xF0)
// Class NavigationSystem.NavModifierComponent
class UNavModifierComponent : public UNavRelevantComponent
{
public:
	TSubclassOf<class UNavArea>                  AreaClass;                                         // 0xF0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               FailsafeExtent;                                    // 0xF8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENavigationDataResolution         NavMeshResolution;                                 // 0x110(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIncludeAgentHeight : 1;                           // Mask: 0x1, PropSize: 0x10x111(0x1)(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D03[0x8E];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavModifierComponent");
		return Clss;
	}

	void SetAreaClass(TSubclassOf<class UNavArea> NewAreaClass);
};

// 0x28 (0x2F0 - 0x2C8)
// Class NavigationSystem.NavModifierVolume
class UNavModifierVolume : public UVolume
{
public:
	uint8                                        Pad_1D09[0x8];                                     // Fixing Size After Last Property
	TSubclassOf<class UNavArea>                  AreaClass;                                         // 0x2D0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bMaskFillCollisionUnderneathForNavmesh;            // 0x2D8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ENavigationDataResolution         NavMeshResolution;                                 // 0x2D9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1D0B[0x16];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavModifierVolume");
		return Clss;
	}

	void SetAreaClass(TSubclassOf<class UNavArea> NewAreaClass);
};

// 0x10 (0x2A0 - 0x290)
// Class NavigationSystem.NavSystemConfigOverride
class UNavSystemConfigOverride : public UActor
{
public:
	class UNavigationSystemConfig*               NavigationSystemConfig;                            // 0x290(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ENavSystemOverridePolicy          OverridePolicy;                                    // 0x298(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bLoadOnClient : 1;                                 // Mask: 0x1, PropSize: 0x10x299(0x1)(Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1D10[0x6];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavSystemConfigOverride");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
