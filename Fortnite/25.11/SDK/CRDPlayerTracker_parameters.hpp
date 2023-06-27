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
// Function CRDPlayerTracker.CRDPlayerTrackerMarker.DestroyPlayerTrackerWidget
struct ACRDPlayerTrackerMarker_DestroyPlayerTrackerWidget_Params
{
public:
	class AFortPlayerControllerGameplay*         InFortPlayerControllerGameplay;                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_81DF[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function CRDPlayerTracker.CRDPlayerTrackerMarker.CreatePlayerTrackerWidget
struct ACRDPlayerTrackerMarker_CreatePlayerTrackerWidget_Params
{
public:
	class AFortPlayerControllerGameplay*         InFortPlayerControllerGameplay;                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPlayerStateAthena*                AssociatedPSA;                                     // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUserWidget*                           ReturnValue;                                       // 0x10(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
