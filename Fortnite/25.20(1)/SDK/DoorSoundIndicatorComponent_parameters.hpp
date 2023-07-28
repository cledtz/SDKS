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

// 0x20 (0x20 - 0x0)
// Function DoorSoundIndicatorComponent.DoorSoundIndicatorComponent_C.GetAffiliationsToShowFor
struct UDoorSoundIndicatorComponent_C_GetAffiliationsToShowFor_Params
{
public:
	TArray<enum class EFortTeamAffiliation>      ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm)
	TArray<enum class EFortTeamAffiliation>      K2Node_MakeArray_Array;                            // 0x10(0x10)(ReferenceParm)
};

// 0x31 (0x31 - 0x0)
// Function DoorSoundIndicatorComponent.DoorSoundIndicatorComponent_C.ShouldShowSoundIndicator
struct UDoorSoundIndicatorComponent_C_ShouldShowSoundIndicator_Params
{
public:
	class UFortPlayerController*                 PlayerController;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7EAA[0x7];                                     // Fixing Size After Last Property..
	class UFortPlayerPawn*                       CallFunc_GetPlayerPawn_ReturnValue;                // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7EAB[0x7];                                     // Fixing Size After Last Property..
	class UBuildingWall*                         K2Node_DynamicCast_AsBuilding_Wall;                // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
