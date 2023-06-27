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

enum class EMovementType : uint8
{
	SweepPhysics                   = 0,
	TeleportPhysics                = 1,
	ResetPhysics                   = 2,
	EMovementType_MAX              = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x0 - 0x0)
// ScriptStruct EntityCore.ComponentData
struct FComponentData
{
public:
};

// 0x18 (0x18 - 0x0)
// ScriptStruct EntityCore.EntityPositionComponentData
struct FEntityPositionComponentData : public FComponentData
{
public:
	struct FVector                               WorldPosition;                                     // 0x0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct EntityCore.EntityRotationComponentData
struct FEntityRotationComponentData : public FComponentData
{
public:
	struct FRotator                              WorldRotation;                                     // 0x0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct EntityCore.EntityScaleComponentData
struct FEntityScaleComponentData : public FComponentData
{
public:
	struct FVector                               WorldScale3D;                                      // 0x0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct EntityCore.EntityCoreSystemRelativePositionComponentData
struct FEntityCoreSystemRelativePositionComponentData : public FComponentData
{
public:
	uint8                                        Pad_2382[0x20];                                    // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct EntityCore.EntityComponentContainer
struct FEntityComponentContainer
{
public:
	TArray<class UEntityComponent*>              Array;                                             // 0x0(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x8 (0x30 - 0x28)
// ScriptStruct EntityCore.EntityTickFunction
struct FEntityTickFunction : public FTickFunction
{
public:
	uint8                                        Pad_2383[0x8];                                     // Fixing Size Of Struct..
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
