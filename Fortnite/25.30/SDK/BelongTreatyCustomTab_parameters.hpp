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

// 0x1 (0x1 - 0x0)
// Function BelongTreatyCustomTab.BelongTreatyCustomTab_C.PreConstruct
struct UBelongTreatyCustomTab_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BelongTreatyCustomTab.BelongTreatyCustomTab_C.BP_OnHovered
struct UBelongTreatyCustomTab_C_BP_OnHovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BelongTreatyCustomTab.BelongTreatyCustomTab_C.BP_OnDeselected
struct UBelongTreatyCustomTab_C_BP_OnDeselected_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BelongTreatyCustomTab.BelongTreatyCustomTab_C.BP_OnSelected
struct UBelongTreatyCustomTab_C_BP_OnSelected_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BelongTreatyCustomTab.BelongTreatyCustomTab_C.Construct
struct UBelongTreatyCustomTab_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BelongTreatyCustomTab.BelongTreatyCustomTab_C.BP_OnUnhovered
struct UBelongTreatyCustomTab_C_BP_OnUnhovered_Params
{
public:
};

// 0x80 (0x80 - 0x0)
// Function BelongTreatyCustomTab.BelongTreatyCustomTab_C.ExecuteUbergraph_BelongTreatyCustomTab
struct UBelongTreatyCustomTab_C_ExecuteUbergraph_BelongTreatyCustomTab_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A33E[0x3];                                     // Fixing Size After Last Property
	struct FVector2D                             Temp_struct_Variable;                              // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Temp_struct_Variable_1;                            // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetSelected_ReturnValue;                  // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMobileGame_ReturnValue;                 // 0x3B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A33F[0x4];                                     // Fixing Size After Last Property
	struct FVector2D                             K2Node_Select_Default;                             // 0x40(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable;                               // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable_1;                             // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A340[0x7];                                     // Fixing Size After Last Property
	class UClass*                                K2Node_Select_Default_1;                           // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue_2;       // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue_3;       // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
