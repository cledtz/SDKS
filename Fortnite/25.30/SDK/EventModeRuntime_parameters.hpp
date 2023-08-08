#pragma once

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

// 0x8 (0x8 - 0x0)
// Function EventModeRuntime.FortGameFrameworkComponent_EventMode.OnPlayerPawnPossessed
struct UFortGameFrameworkComponent_EventMode_OnPlayerPawnPossessed_Params
{
public:
	class UPawn*                                 PossessedPawn;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function EventModeRuntime.FortGameFrameworkComponent_EventMode.OnExitVehicle
struct UFortGameFrameworkComponent_EventMode_OnExitVehicle_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function EventModeRuntime.FortGameFrameworkComponent_EventMode.OnEnterVehicle
struct UFortGameFrameworkComponent_EventMode_OnEnterVehicle_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function EventModeRuntime.FortGameFrameworkComponent_EventMode.GetIsFocusing
struct UFortGameFrameworkComponent_EventMode_GetIsFocusing_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function EventModeRuntime.FortGameFrameworkComponent_EventMode.GetIsFocusAvailable
struct UFortGameFrameworkComponent_EventMode_GetIsFocusAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function EventModeRuntime.FortGameFrameworkComponent_EventMode.GetIsEventModeActive
struct UFortGameFrameworkComponent_EventMode_GetIsEventModeActive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
