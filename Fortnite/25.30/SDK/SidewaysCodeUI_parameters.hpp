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

// 0x18 (0x18 - 0x0)
// Function SidewaysCodeUI.SidewaysWidgetBase.OnSidewaysStateChanged
struct USidewaysWidgetBase_OnSidewaysStateChanged_Params
{
public:
	class USidewaysStateComponent*               SidewaysStateComponent;                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USidewaysPlayspace*                    NewPlayspace;                                      // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESidewaysState                    OldState;                                          // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESidewaysState                    NewState;                                          // 0x11(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ED7[0x6];                                     // Fixing Size Of Struct
};

// 0x4 (0x4 - 0x0)
// Function SidewaysCodeUI.SidewaysWidgetBase.OnParamUpdated
struct USidewaysWidgetBase_OnParamUpdated_Params
{
public:
	struct FGameplayTag                          UpdatedParam;                                      // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SidewaysCodeUI.SidewaysWidgetBase.OnExitSideways
struct USidewaysWidgetBase_OnExitSideways_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SidewaysCodeUI.SidewaysWidgetBase.OnEnterSideways
struct USidewaysWidgetBase_OnEnterSideways_Params
{
public:
	class USidewaysPlayspace*                    Playspace;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SidewaysCodeUI.SidewaysWidgetBase.IsValidPlayspace
struct USidewaysWidgetBase_IsValidPlayspace_Params
{
public:
	class USidewaysPlayspace*                    Playspace;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EE2[0x7];                                     // Fixing Size Of Struct
};

// 0x0 (0x0 - 0x0)
// Function SidewaysCodeUI.SidewaysWidgetBase.InitializeVariables
struct USidewaysWidgetBase_InitializeVariables_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SidewaysCodeUI.SidewaysWidgetBase.HandleFortPawnChanged
struct USidewaysWidgetBase_HandleFortPawnChanged_Params
{
public:
	class UFortPawn*                             PossessedPawn;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SidewaysCodeUI.SidewaysWidgetBase.ConfigureUIFromPlayspace
struct USidewaysWidgetBase_ConfigureUIFromPlayspace_Params
{
public:
	class USidewaysPlayspace*                    Playspace;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
