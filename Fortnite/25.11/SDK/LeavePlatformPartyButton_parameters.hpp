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

// 0x18 (0x18 - 0x0)
// Function LeavePlatformPartyButton.LeavePlatformPartyButton_C.SetText
struct ULeavePlatformPartyButton_C_SetText_Params
{
public:
	class FText                                  New_Text;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x0 (0x0 - 0x0)
// Function LeavePlatformPartyButton.LeavePlatformPartyButton_C.BP_OnHovered
struct ULeavePlatformPartyButton_C_BP_OnHovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function LeavePlatformPartyButton.LeavePlatformPartyButton_C.BP_OnUnhovered
struct ULeavePlatformPartyButton_C_BP_OnUnhovered_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function LeavePlatformPartyButton.LeavePlatformPartyButton_C.ExecuteUbergraph_LeavePlatformPartyButton
struct ULeavePlatformPartyButton_C_ExecuteUbergraph_LeavePlatformPartyButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E19[0x4];                                     // Fixing Size After Last Property..
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
