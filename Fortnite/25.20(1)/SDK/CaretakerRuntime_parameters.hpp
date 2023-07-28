#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// Function CaretakerRuntime.FortAthenaCaretakerAIController.OnMovementModeChanged
struct UFortAthenaCaretakerAIController_OnMovementModeChanged_Params
{
public:
	class UCharacter*                            CharacterOwner;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovementMode                     PreviousMovementMode;                              // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        PreviousCustomMode;                                // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7EBA[0x6];                                     // Fixing Size Of Struct..
};

// 0x4 (0x4 - 0x0)
// Function CaretakerRuntime.FortAthenaCaretakerAIController.DebugUpdate
struct UFortAthenaCaretakerAIController_DebugUpdate_Params
{
public:
	float                                        UpdateInterval;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CaretakerRuntime.FortAIAnimInstance_Caretaker.SetDelayedMaterialParameters
struct UFortAIAnimInstance_Caretaker_SetDelayedMaterialParameters_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function CaretakerRuntime.FortAIAnimInstance_Caretaker.GetWorldStriderComponent
struct UFortAIAnimInstance_Caretaker_GetWorldStriderComponent_Params
{
public:
	class UFortAnimWorldStriderComponent*        ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CaretakerRuntime.FortAIAnimInstance_Caretaker.GetWalkSpeedWarpingValue
struct UFortAIAnimInstance_Caretaker_GetWalkSpeedWarpingValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CaretakerRuntime.FortAIAnimInstance_Caretaker.GetWalkPlayRateValue
struct UFortAIAnimInstance_Caretaker_GetWalkPlayRateValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CaretakerRuntime.FortAIAnimInstance_Caretaker.GetStartAnimPosition
struct UFortAIAnimInstance_Caretaker_GetStartAnimPosition_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
