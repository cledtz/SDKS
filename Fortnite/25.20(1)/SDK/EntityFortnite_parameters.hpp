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

// 0x0 (0x0 - 0x0)
// Function EntityFortnite.EntityFortniteStormSpawner.Stop
struct UEntityFortniteStormSpawner_Stop_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function EntityFortnite.EntityFortniteStormSpawner.Start
struct UEntityFortniteStormSpawner_Start_Params
{
public:
	float                                        StartRadius;                                       // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoundsRadius;                                      // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEntityFortniteStormPhase>     Phases;                                            // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function EntityFortnite.EntityFortniteStormSpawner.Pause
struct UEntityFortniteStormSpawner_Pause_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function EntityFortnite.EntityFortniteStormSpawner.Exists
struct UEntityFortniteStormSpawner_Exists_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
