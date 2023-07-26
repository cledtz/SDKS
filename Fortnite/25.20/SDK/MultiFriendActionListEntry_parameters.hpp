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

// 0x21 (0x21 - 0x0)
// Function MultiFriendActionListEntry.MultiFriendActionListEntry_C.GetText
struct UMultiFriendActionListEntry_C_GetText_Params
{
public:
	enum class EMultiFriendAction                InAction;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9540[0x7];                                     // Fixing Size After Last Property..
	class FText                                  Text;                                              // 0x8(0x18)(Parm, OutParm)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function MultiFriendActionListEntry.MultiFriendActionListEntry_C.BP_OnUnhovered
struct UMultiFriendActionListEntry_C_BP_OnUnhovered_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function MultiFriendActionListEntry.MultiFriendActionListEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
struct UMultiFriendActionListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature_Params
{
public:
	bool                                         bIsOpen;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function MultiFriendActionListEntry.MultiFriendActionListEntry_C.BP_OnHovered
struct UMultiFriendActionListEntry_C_BP_OnHovered_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function MultiFriendActionListEntry.MultiFriendActionListEntry_C.OnActionUpdated
struct UMultiFriendActionListEntry_C_OnActionUpdated_Params
{
public:
	enum class EMultiFriendAction                InAction;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function MultiFriendActionListEntry.MultiFriendActionListEntry_C.ExecuteUbergraph_MultiFriendActionListEntry
struct UMultiFriendActionListEntry_C_ExecuteUbergraph_MultiFriendActionListEntry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bIsOpen;                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9541[0x3];                                     // Fixing Size After Last Property..
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_2;              // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAnimationPlaying_ReturnValue;           // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9542[0x7];                                     // Fixing Size After Last Property..
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_3;              // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EMultiFriendAction                K2Node_Event_InAction;                             // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9543[0x7];                                     // Fixing Size After Last Property..
	class FText                                  CallFunc_GetText_Text;                             // 0x38(0x18)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
