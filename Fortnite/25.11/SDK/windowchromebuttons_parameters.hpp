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

// 0xB0 (0xB0 - 0x0)
// Function windowchromebuttons.windowchromebuttons_C.OnMouseEnter
struct UWindowchromebuttons_C_OnMouseEnter_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x78 (0x78 - 0x0)
// Function windowchromebuttons.windowchromebuttons_C.OnMouseLeave
struct UWindowchromebuttons_C_OnMouseLeave_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x140 (0x140 - 0x0)
// Function windowchromebuttons.windowchromebuttons_C.ExecuteUbergraph_windowchromebuttons
struct UWindowchromebuttons_C_ExecuteUbergraph_windowchromebuttons_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40C2[0x4];                                     // Fixing Size After Last Property..
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x10(0x38)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                         K2Node_Event_MouseEvent_1;                         // 0x48(0x78)(ConstParm)
	struct FPointerEvent                         K2Node_Event_MouseEvent;                           // 0xC0(0x78)(ConstParm)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x138(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
