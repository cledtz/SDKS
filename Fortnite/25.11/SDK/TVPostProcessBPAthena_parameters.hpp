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

// 0x3 (0x3 - 0x0)
// Function TVPostProcessBPAthena.TVPostProcessBPAthena_C.IsEnabledForCurrentSubgame
struct ATVPostProcessBPAthena_C_IsEnabledForCurrentSubgame_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue;                   // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function TVPostProcessBPAthena.TVPostProcessBPAthena_C.FrontEndCameraSwitchFadeAthena__FinishedFunc
struct ATVPostProcessBPAthena_C_FrontEndCameraSwitchFadeAthena__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TVPostProcessBPAthena.TVPostProcessBPAthena_C.FrontEndCameraSwitchFadeAthena__UpdateFunc
struct ATVPostProcessBPAthena_C_FrontEndCameraSwitchFadeAthena__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TVPostProcessBPAthena.TVPostProcessBPAthena_C.ExecuteCameraSwitch
struct ATVPostProcessBPAthena_C_ExecuteCameraSwitch_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TVPostProcessBPAthena.TVPostProcessBPAthena_C.Camera_DisableEffects
struct ATVPostProcessBPAthena_C_Camera_DisableEffects_Params
{
public:
};

// 0x14 (0x14 - 0x0)
// Function TVPostProcessBPAthena.TVPostProcessBPAthena_C.ExecuteUbergraph_TVPostProcessBPAthena
struct ATVPostProcessBPAthena_C_ExecuteUbergraph_TVPostProcessBPAthena_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A61[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_GetUnpausedTimeSeconds_ReturnValue;       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast; // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
