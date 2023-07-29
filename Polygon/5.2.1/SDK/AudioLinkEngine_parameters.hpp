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

// 0x0 (0x0 - 0x0)
// Function AudioLinkEngine.AudioLinkBlueprintInterface.StopLink
struct UAudioLinkBlueprintInterface_StopLink_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function AudioLinkEngine.AudioLinkBlueprintInterface.SetLinkSound
struct UAudioLinkBlueprintInterface_SetLinkSound_Params
{
public:
	class USoundBase*                            NewSound;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AudioLinkEngine.AudioLinkBlueprintInterface.PlayLink
struct UAudioLinkBlueprintInterface_PlayLink_Params
{
public:
	float                                        StartTime;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AudioLinkEngine.AudioLinkBlueprintInterface.IsLinkPlaying
struct UAudioLinkBlueprintInterface_IsLinkPlaying_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
