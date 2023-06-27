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

// 0x8 (0xA8 - 0xA0)
// Class ChaosSolverEngine.ChaosDebugDrawComponent
class UChaosDebugDrawComponent : public UActorComponent
{
public:
	uint8                                        Pad_1A01[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ChaosDebugDrawComponent");
		return Clss;
	}

};

// 0x8 (0xA8 - 0xA0)
// Class ChaosSolverEngine.ChaosEventListenerComponent
class UChaosEventListenerComponent : public UActorComponent
{
public:
	uint8                                        Pad_1A02[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ChaosEventListenerComponent");
		return Clss;
	}

};

// 0x210 (0x2B8 - 0xA8)
// Class ChaosSolverEngine.ChaosGameplayEventDispatcher
class UChaosGameplayEventDispatcher : public UChaosEventListenerComponent
{
public:
	uint8                                        Pad_1A03[0xC0];                                    // Fixing Size After Last Property..
	TMap<class UPrimitiveComponent*, struct FChaosHandlerSet> CollisionEventRegistrations;                       // 0x168(0x50)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<class UPrimitiveComponent*, struct FBreakEventCallbackWrapper> BreakEventRegistrations;                           // 0x1B8(0x50)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<class UPrimitiveComponent*, struct FRemovalEventCallbackWrapper> RemovalEventRegistrations;                         // 0x208(0x50)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<class UPrimitiveComponent*, struct FCrumblingEventCallbackWrapper> CrumblingEventRegistrations;                       // 0x258(0x50)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A04[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ChaosGameplayEventDispatcher");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class ChaosSolverEngine.ChaosNotifyHandlerInterface
class UChaosNotifyHandlerInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ChaosNotifyHandlerInterface");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
class UChaosSolverEngineBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ChaosSolverEngineBlueprintLibrary");
		return Clss;
	}

	struct FHitResult ConvertPhysicsCollisionToHitResult(struct FChaosPhysicsCollisionInfo& PhysicsCollision);
};

// 0x0 (0x28 - 0x28)
// Class ChaosSolverEngine.ChaosSolver
class UChaosSolver : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ChaosSolver");
		return Clss;
	}

};

// 0xF8 (0x380 - 0x288)
// Class ChaosSolverEngine.ChaosSolverActor
class AChaosSolverActor : public AActor
{
public:
	struct FChaosSolverConfiguration             Properties;                                        // 0x288(0x68)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        TimeStepMultiplier;                                // 0x2F0(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CollisionIterations;                               // 0x2F4(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PushOutIterations;                                 // 0x2F8(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PushOutPairIterations;                             // 0x2FC(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClusterConnectionFactor;                           // 0x300(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EClusterConnectionTypeEnum        ClusterUnionConnectionType;                        // 0x304(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DoGenerateCollisionData;                           // 0x305(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A05[0x2];                                     // Fixing Size After Last Property..
	struct FSolverCollisionFilterSettings        CollisionFilterSettings;                           // 0x308(0x10)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         DoGenerateBreakingData;                            // 0x318(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A06[0x3];                                     // Fixing Size After Last Property..
	struct FSolverBreakingFilterSettings         BreakingFilterSettings;                            // 0x31C(0x10)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         DoGenerateTrailingData;                            // 0x32C(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A07[0x3];                                     // Fixing Size After Last Property..
	struct FSolverTrailingFilterSettings         TrailingFilterSettings;                            // 0x330(0x10)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	float                                        MassScale;                                         // 0x340(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasFloor;                                         // 0x344(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A08[0x3];                                     // Fixing Size After Last Property..
	float                                        FloorHeight;                                       // 0x348(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FChaosDebugSubstepControl             ChaosDebugSubstepControl;                          // 0x34C(0x3)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A09[0x1];                                     // Fixing Size After Last Property..
	class UBillboardComponent*                   SpriteComponent;                                   // 0x350(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A0A[0x18];                                    // Fixing Size After Last Property..
	class UChaosGameplayEventDispatcher*         GameplayEventDispatcherComponent;                  // 0x370(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A0B[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ChaosSolverActor");
		return Clss;
	}

	void SetSolverActive(bool bActive);
	void SetAsCurrentWorldSolver();
};

// 0x20 (0x50 - 0x30)
// Class ChaosSolverEngine.ChaosSolverSettings
class UChaosSolverSettings : public UDeveloperSettings
{
public:
	uint8                                        Pad_1A0C[0x8];                                     // Fixing Size After Last Property..
	struct FSoftClassPath                        DefaultChaosSolverActorClass;                      // 0x38(0x18)(Edit, ZeroConstructor, Config, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ChaosSolverSettings");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
