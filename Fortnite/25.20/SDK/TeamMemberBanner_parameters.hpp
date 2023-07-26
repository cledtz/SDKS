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

// 0x12 (0x12 - 0x0)
// Function TeamMemberBanner.TeamMemberBanner_C.OpenPartyFinder
struct UTeamMemberBanner_C_OpenPartyFinder_Params
{
public:
	class UUserWidget*                           CallFunc_GetCachedWidget_ReturnValue;              // 0x0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USocialPanel_C*                        K2Node_DynamicCast_AsSocial_Panel;                 // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsActivated_ReturnValue;                  // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE0 (0xE0 - 0x0)
// Function TeamMemberBanner.TeamMemberBanner_C.HandleMouseHoverVisualState
struct UTeamMemberBanner_C_HandleMouseHoverVisualState_Params
{
public:
	bool                                         Hover;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BD0[0x6];                                     // Fixing Size After Last Property..
	class UObject*                               Temp_object_Variable;                              // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable_1;                            // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_Select_Default;                             // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x20(0xC0)()
};

// 0x8 (0x8 - 0x0)
// Function TeamMemberBanner.TeamMemberBanner_C.BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UTeamMemberBanner_C_BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButtonLegacy*                   Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function TeamMemberBanner.TeamMemberBanner_C.BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UTeamMemberBanner_C_BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButtonLegacy*                   Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function TeamMemberBanner.TeamMemberBanner_C.BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature
struct UTeamMemberBanner_C_BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButtonLegacy*                   Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function TeamMemberBanner.TeamMemberBanner_C.OnTeamMemberConnectionStateChanged
struct UTeamMemberBanner_C_OnTeamMemberConnectionStateChanged_Params
{
public:
	enum class EFortMemberConnectionState        NewConnectionState;                                // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function TeamMemberBanner.TeamMemberBanner_C.ExecuteUbergraph_TeamMemberBanner
struct UTeamMemberBanner_C_ExecuteUbergraph_TeamMemberBanner_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortMemberConnectionState        Temp_byte_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BD1[0x3];                                     // Fixing Size After Last Property..
	class UCommonButtonLegacy*                   K2Node_ComponentBoundEvent_Button_2;               // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonLegacy*                   K2Node_ComponentBoundEvent_Button_1;               // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonLegacy*                   K2Node_ComponentBoundEvent_Button;                 // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EFortMemberConnectionState        K2Node_Event_NewConnectionState;                   // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BD2[0x7];                                     // Fixing Size After Last Property..
	class UWidget*                               K2Node_Select_Default;                             // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
