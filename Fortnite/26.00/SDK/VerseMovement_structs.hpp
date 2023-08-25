#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ENetPhysicsMoveTriggerType : uint8
{
	Input                          = 0,
	Constraint                     = 1,
	Physics                        = 2,
	Trace                          = 3,
	Constant                       = 4,
	ENetPhysicsMoveTriggerType_MAX = 5,
};

enum class ENetPhysicsMoveResponseType : uint8
{
	Linear                         = 0,
	Angular                        = 1,
	ENetPhysicsMoveResponseType_MAX = 2,
};

enum class ENetPhysicsMoveResponseFrame : uint8
{
	Absolute                       = 0,
	Object                         = 1,
	Camera                         = 2,
	ENetPhysicsMoveResponseFrame_MAX = 3,
};

enum class ENetPhysicsMoveResponseEffect : uint8
{
	Force                          = 0,
	VelocityChange                 = 1,
	Transform                      = 2,
	ENetPhysicsMoveResponseEffect_MAX = 3,
};

enum class ENetPhysicsMoveResponseModifier : uint8
{
	Add                            = 0,
	TargetTransform                = 1,
	TargetVelocity                 = 2,
	OverrideTransform              = 3,
	OverrideVelocity               = 4,
	ENetPhysicsMoveResponseModifier_MAX = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// ScriptStruct VerseMovement.NetPhysicsMoveInputTriggerParams
struct FNetPhysicsMoveInputTriggerParams
{
public:
	bool                                         bIsAxis;                                           // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D31[0x3];                                     // Fixing Size After Last Property 
	class FName                                  Name;                                              // 0x4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           AxisToMagnitudeCurve;                              // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AccumulateAxisInput;                               // 0x10(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D33[0x7];                                     // Fixing Size After Last Property 
	struct FVector2D                             ClampAxis;                                         // 0x18(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct VerseMovement.NetPhysicsMovePhysicsTriggerParams
struct FNetPhysicsMovePhysicsTriggerParams
{
public:
	struct FVector                               SpeedInDirection;                                  // 0x0(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct VerseMovement.NetPhysicsMoveTraceTriggerParams
struct FNetPhysicsMoveTraceTriggerParams
{
public:
	struct FVector                               Direction;                                         // 0x0(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENetPhysicsMoveResponseFrame      Frame;                                             // 0x18(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D36[0x3];                                     // Fixing Size After Last Property 
	float                                        Length;                                            // 0x1C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 CollisionChannel;                                  // 0x20(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCollisionResponseContainer           ResponseParams;                                    // 0x21(0x20)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bProportionalToHitDistance;                        // 0x41(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D39[0x6];                                     // Fixing Size After Last Property 
	class UCurveFloat*                           HitDistanceToMagnitudeCurve;                       // 0x48(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct VerseMovement.NetPhysicsMoveTrigger
struct FNetPhysicsMoveTrigger
{
public:
	enum class ENetPhysicsMoveTriggerType        Type;                                              // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D3D[0x7];                                     // Fixing Size After Last Property 
	struct FNetPhysicsMoveInputTriggerParams     InputParams;                                       // 0x8(0x28)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FNetPhysicsMovePhysicsTriggerParams   PhysicsParams;                                     // 0x30(0x18)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FNetPhysicsMoveTraceTriggerParams     TraceParams;                                       // 0x48(0x50)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct VerseMovement.NetPhysicsMoveResponse
struct FNetPhysicsMoveResponse
{
public:
	struct FVector                               Vector;                                            // 0x0(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Magnitude;                                         // 0x18(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D44[0x4];                                     // Fixing Size After Last Property 
	class UCurveFloat*                           MagnitudeCurve;                                    // 0x20(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENetPhysicsMoveResponseType       Type;                                              // 0x28(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENetPhysicsMoveResponseFrame      Frame;                                             // 0x29(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENetPhysicsMoveResponseEffect     Effect;                                            // 0x2A(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENetPhysicsMoveResponseModifier   Modifier;                                          // 0x2B(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D48[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               ClampVector;                                       // 0x30(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENetPhysicsMoveResponseFrame      ClampFrame;                                        // 0x48(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D49[0x7];                                     // Fixing Size Of Struct
};

// 0x30 (0x30 - 0x0)
// ScriptStruct VerseMovement.NetPhysicsMoveConfigEntry
struct FNetPhysicsMoveConfigEntry
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNetPhysicsMoveTrigger>        Triggers;                                          // 0x10(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FNetPhysicsMoveResponse>       Responses;                                         // 0x20(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct VerseMovement.NetPhysicsMoveLimits
struct FNetPhysicsMoveLimits
{
public:
	bool                                         bClampVelocity;                                    // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D4E[0x7];                                     // Fixing Size After Last Property 
	struct FVector                               MaxVelocity;                                       // 0x8(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClampAngularVelocity;                             // 0x20(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D51[0x7];                                     // Fixing Size After Last Property 
	struct FVector                               MaxAngularVelocity;                                // 0x28(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClampMaxPosition;                                 // 0x40(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D53[0x7];                                     // Fixing Size After Last Property 
	struct FVector                               MaxPosition;                                       // 0x48(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClampMinPosition;                                 // 0x60(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D54[0x7];                                     // Fixing Size After Last Property 
	struct FVector                               MinPosition;                                       // 0x68(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct VerseMovement.NetPhysicsMoveInputCmd
struct FNetPhysicsMoveInputCmd
{
public:
	TArray<float>                                AxisValues;                                        // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<bool>                                 ActionValues;                                      // 0x10(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FRotator                              ViewRotation;                                      // 0x20(0x18)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct VerseMovement.NetPhysicsMoveObject
struct FNetPhysicsMoveObject
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct VerseMovement.NetPhysicsMoveObjectLocal
struct FNetPhysicsMoveObjectLocal
{
public:
	uint8                                        Pad_2D5A[0x88];                                    // Fixing Size Of Struct
};

}


