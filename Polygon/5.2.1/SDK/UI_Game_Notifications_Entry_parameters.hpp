#pragma once

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
// Function UI_Game_Notifications_Entry.UI_Game_Notifications_Entry_C.SetText
struct UUI_Game_Notifications_Entry_C_SetText_Params
{
public:
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x0(0x18)()
};

// 0x1 (0x1 - 0x0)
// Function UI_Game_Notifications_Entry.UI_Game_Notifications_Entry_C.PreConstruct
struct UUI_Game_Notifications_Entry_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Game_Notifications_Entry.UI_Game_Notifications_Entry_C.Construct
struct UUI_Game_Notifications_Entry_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Game_Notifications_Entry.UI_Game_Notifications_Entry_C.Destroy
struct UUI_Game_Notifications_Entry_C_Destroy_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function UI_Game_Notifications_Entry.UI_Game_Notifications_Entry_C.ExecuteUbergraph_UI_Game_Notifications_Entry
struct UUI_Game_Notifications_Entry_C_ExecuteUbergraph_UI_Game_Notifications_Entry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3259[0x3];                                     // Fixing Size After Last Property
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAnimationPlaying_ReturnValue;           // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_325B[0x7];                                     // Fixing Size After Last Property
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_325D[0x7];                                     // Fixing Size After Last Property
	double                                       CallFunc_GetRealTimeSeconds_ReturnValue;           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Game_Notifications_Entry.UI_Game_Notifications_Entry_C.OnDestroyed__DelegateSignature
struct UUI_Game_Notifications_Entry_C_OnDestroyed__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
