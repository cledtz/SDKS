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
// Function DynamicAthenaHUD.DynamicAthenaHUDDirector.HandleExitingVehicle
struct ADynamicAthenaHUDDirector_HandleExitingVehicle_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function DynamicAthenaHUD.DynamicAthenaHUDDirector.HandleEnteringVehicle
struct ADynamicAthenaHUDDirector_HandleEnteringVehicle_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function DynamicAthenaHUD.DynamicAthenaHUDDirector.HandleCreativeQuickbarEquippedChanged
struct ADynamicAthenaHUDDirector_HandleCreativeQuickbarEquippedChanged_Params
{
public:
	bool                                         bIsQuickbarEquipped;                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
