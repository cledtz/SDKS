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
// Function JoinRequestUserListEntry.JoinRequestUserListEntry_C.BP_OnUnhovered
struct UJoinRequestUserListEntry_C_BP_OnUnhovered_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function JoinRequestUserListEntry.JoinRequestUserListEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
struct UJoinRequestUserListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature_Params
{
public:
	bool                                         bIsOpen;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function JoinRequestUserListEntry.JoinRequestUserListEntry_C.BP_OnHovered
struct UJoinRequestUserListEntry_C_BP_OnHovered_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function JoinRequestUserListEntry.JoinRequestUserListEntry_C.OnFocusLost
struct UJoinRequestUserListEntry_C_OnFocusLost_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function JoinRequestUserListEntry.JoinRequestUserListEntry_C.ExecuteUbergraph_JoinRequestUserListEntry
struct UJoinRequestUserListEntry_C_ExecuteUbergraph_JoinRequestUserListEntry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFocusEvent                           K2Node_Event_InFocusEvent;                         // 0x4(0x8)(NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bIsOpen;                // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_976F[0x3];                                     // Fixing Size After Last Property..
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_2;              // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAnimationPlaying_ReturnValue;           // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9770[0x7];                                     // Fixing Size After Last Property..
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_3;              // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
