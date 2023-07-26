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
// Function UserListHeaderEntry.UserListHeaderEntry_C.BP_OnUnhovered
struct UUserListHeaderEntry_C_BP_OnUnhovered_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function UserListHeaderEntry.UserListHeaderEntry_C.BP_OnItemExpansionChanged
struct UUserListHeaderEntry_C_BP_OnItemExpansionChanged_Params
{
public:
	bool                                         bIsExpanded;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UserListHeaderEntry.UserListHeaderEntry_C.BP_OnHovered
struct UUserListHeaderEntry_C_BP_OnHovered_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function UserListHeaderEntry.UserListHeaderEntry_C.OnListItemObjectSet_1
struct UUserListHeaderEntry_C_OnListItemObjectSet_1_Params
{
public:
	class UObject*                               ListItemObject;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UserListHeaderEntry.UserListHeaderEntry_C.OnFocusLost
struct UUserListHeaderEntry_C_OnFocusLost_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function UserListHeaderEntry.UserListHeaderEntry_C.ExecuteUbergraph_UserListHeaderEntry
struct UUserListHeaderEntry_C_ExecuteUbergraph_UserListHeaderEntry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFocusEvent                           K2Node_Event_InFocusEvent;                         // 0x4(0x8)(NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EUMGSequencePlayMode              Temp_byte_Variable;                                // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EUMGSequencePlayMode              Temp_byte_Variable_1;                              // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9AA8[0x1];                                     // Fixing Size After Last Property..
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsExpanded;                          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EUMGSequencePlayMode              K2Node_Select_Default;                             // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9AA9[0x6];                                     // Fixing Size After Last Property..
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_2;              // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetEndTime_ReturnValue;                   // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9AAA[0x4];                                     // Fixing Size After Last Property..
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_3;              // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsListItemExpanded_ReturnValue;           // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9AAB[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               K2Node_Event_ListItemObject;                       // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
