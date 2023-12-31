#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ETargetingAOEShape : uint8
{
	Box                            = 0,
	Cylinder                       = 1,
	Sphere                         = 2,
	Capsule                        = 3,
	SourceComponent                = 4,
	ETargetingAOEShape_MAX         = 5,
};

enum class ETargetingTraceType : uint8
{
	Line                           = 0,
	Sweep                          = 1,
	ETargetingTraceType_MAX        = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x4 - 0x0)
// ScriptStruct TargetingSystem.TargetingRequestHandle
struct FTargetingRequestHandle
{
public:
	uint8                                        Pad_3F35[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct TargetingSystem.CollisionQueryTaskData
struct FCollisionQueryTaskData
{
public:
	TArray<class AActor*>                        IgnoredActors;                                     // 0x0(0x10)(BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct TargetingSystem.TargetingTaskSet
struct FTargetingTaskSet
{
public:
	TArray<class UTargetingTask*>                Tasks;                                             // 0x0(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0xE8 (0xE8 - 0x0)
// ScriptStruct TargetingSystem.TargetingDefaultResultData
struct FTargetingDefaultResultData
{
public:
	struct FHitResult                            HitResult;                                         // 0x0(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F36[0x8];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct TargetingSystem.TargetingDefaultResultsSet
struct FTargetingDefaultResultsSet
{
public:
	TArray<struct FTargetingDefaultResultData>   TargetResults;                                     // 0x0(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct TargetingSystem.TargetingSourceContext
struct FTargetingSourceContext
{
public:
	class AActor*                                SourceActor;                                       // 0x0(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                InstigatorActor;                                   // 0x8(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SourceLocation;                                    // 0x10(0x18)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SourceSocketName;                                  // 0x28(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F37[0x4];                                     // Fixing Size After Last Property..
	class UObject*                               SourceObject;                                      // 0x30(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct TargetingSystem.TargetingRequestData
struct FTargetingRequestData
{
public:
	uint8                                        Pad_3F38[0x18];                                    // Fixing Size After Last Property..
	FDelegateProperty_                           TargetingRequestDynamicDelegate;                   // 0x18(0xC)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F39[0x4];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// ScriptStruct TargetingSystem.TargetingAsyncTaskData
struct FTargetingAsyncTaskData
{
public:
	uint8                                        Pad_3F3A[0x8];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// ScriptStruct TargetingSystem.TargetingImmediateTaskData
struct FTargetingImmediateTaskData
{
public:
	uint8                                        Pad_3F3B[0x1];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// ScriptStruct TargetingSystem.TargetingDebugData
struct FTargetingDebugData
{
public:
	uint8                                        Pad_3F3C[0x1];                                     // Fixing Size Of Struct..
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
