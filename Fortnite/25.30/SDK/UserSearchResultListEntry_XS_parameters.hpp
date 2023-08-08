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

// 0x0 (0x0 - 0x0)
// Function UserSearchResultListEntry_XS.UserSearchResultListEntry_XS_C.BP_OnUnhovered
struct UUserSearchResultListEntry_XS_C_BP_OnUnhovered_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function UserSearchResultListEntry_XS.UserSearchResultListEntry_XS_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
struct UUserSearchResultListEntry_XS_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature_Params
{
public:
	bool                                         bIsOpen;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UserSearchResultListEntry_XS.UserSearchResultListEntry_XS_C.BP_OnHovered
struct UUserSearchResultListEntry_XS_C_BP_OnHovered_Params
{
public:
};

// 0x34 (0x34 - 0x0)
// Function UserSearchResultListEntry_XS.UserSearchResultListEntry_XS_C.SetNamePlatformAndMutuals
struct UUserSearchResultListEntry_XS_C_SetNamePlatformAndMutuals_Params
{
public:
	class FText                                  DisplayName;                                       // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                  Platform;                                          // 0x18(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        MutualCount;                                       // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2C8 (0x2C8 - 0x0)
// Function UserSearchResultListEntry_XS.UserSearchResultListEntry_XS_C.ExecuteUbergraph_UserSearchResultListEntry_XS
struct UUserSearchResultListEntry_XS_C_ExecuteUbergraph_UserSearchResultListEntry_XS_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33A1[0x4];                                     // Fixing Size After Last Property
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x8(0x50)(HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33A3[0x7];                                     // Fixing Size After Last Property
	class FText                                  Temp_text_Variable;                                // 0x60(0x18)()
	class FText                                  Temp_text_Variable_1;                              // 0x78(0x18)()
	bool                                         Temp_bool_Variable_1;                              // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33A4[0x7];                                     // Fixing Size After Last Property
	class FText                                  Temp_text_Variable_2;                              // 0x98(0x18)()
	class FText                                  Temp_text_Variable_3;                              // 0xB0(0x18)()
	bool                                         Temp_bool_Variable_2;                              // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bIsOpen;                // 0xC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33A6[0x6];                                     // Fixing Size After Last Property
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0xD0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0xD8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_2;              // 0xE0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAnimationPlaying_ReturnValue;           // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33A7[0x7];                                     // Fixing Size After Last Property
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_3;              // 0xF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_Event_DisplayName;                          // 0xF8(0x18)(ConstParm)
	class FText                                  K2Node_Event_Platform;                             // 0x110(0x18)(ConstParm)
	int32                                        K2Node_Event_MutualCount;                          // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33A8[0x4];                                     // Fixing Size After Last Property
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x130(0x18)()
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue; // 0x149(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33A9[0x6];                                     // Fixing Size After Last Property
	class FText                                  K2Node_Select_Default;                             // 0x150(0x18)()
	class FText                                  K2Node_Select_Default_1;                           // 0x168(0x18)()
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x180(0x18)()
	class FText                                  K2Node_Select_Default_2;                           // 0x198(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x1B0(0x50)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x200(0x50)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_3;            // 0x250(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x2A0(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x2B0(0x18)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
