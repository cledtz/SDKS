#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// Function CRDPlayerTracker.CRDPlayerTrackerMarker.DestroyPlayerTrackerWidget
struct UCRDPlayerTrackerMarker_DestroyPlayerTrackerWidget_Params
{
public:
	class UFortPlayerControllerGameplay*         InFortPlayerControllerGameplay;                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17B8[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function CRDPlayerTracker.CRDPlayerTrackerMarker.CreatePlayerTrackerWidget
struct UCRDPlayerTrackerMarker_CreatePlayerTrackerWidget_Params
{
public:
	class UFortPlayerControllerGameplay*         InFortPlayerControllerGameplay;                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPlayerStateAthena*                AssociatedPSA;                                     // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUserWidget*                           ReturnValue;                                       // 0x10(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


