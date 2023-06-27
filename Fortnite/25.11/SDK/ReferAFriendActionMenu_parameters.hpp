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

// 0x2 (0x2 - 0x0)
// Function ReferAFriendActionMenu.ReferAFriendActionMenu_C.Set QRt Image
struct UReferAFriendActionMenu_C_Set_QRt_Image_Params
{
public:
	enum class EReferFriendOrigin                Origin;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2C0 (0x2C0 - 0x0)
// Function ReferAFriendActionMenu.ReferAFriendActionMenu_C.OnKeyUp
struct UReferAFriendActionMenu_C_OnKeyUp_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                           ReturnValue;                                       // 0x78(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x130(0xB8)()
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x1E8(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8F6C[0x7];                                     // Fixing Size After Last Property..
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x208(0xB8)()
};

// 0x0 (0x0 - 0x0)
// Function ReferAFriendActionMenu.ReferAFriendActionMenu_C.OnOpened
struct UReferAFriendActionMenu_C_OnOpened_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function ReferAFriendActionMenu.ReferAFriendActionMenu_C.OnRequestOriginChanged
struct UReferAFriendActionMenu_C_OnRequestOriginChanged_Params
{
public:
	enum class EReferFriendOrigin                RequestOrigin;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ReferAFriendActionMenu.ReferAFriendActionMenu_C.ExecuteUbergraph_ReferAFriendActionMenu
struct UReferAFriendActionMenu_C_ExecuteUbergraph_ReferAFriendActionMenu_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EReferFriendOrigin                K2Node_Event_RequestOrigin;                        // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8F6D[0x3];                                     // Fixing Size After Last Property..
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
