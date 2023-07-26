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

// 0x38 (0x38 - 0x0)
// Function MTXOffer_SpecialBanner.MTXOffer_SpecialBanner_C.SetupSpecialOfferBanner
struct UMTXOffer_SpecialBanner_C_SetupSpecialOfferBanner_Params
{
public:
	bool                                         bHasSale;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99CE[0x7];                                     // Fixing Size After Last Property..
	class FText                                  SaleText;                                          // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                BannerOverrideTag;                                 // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         bHasBattlePassStars;                               // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99CF[0x3];                                     // Fixing Size After Last Property..
	int32                                        INumOfBattlePassStars;                             // 0x34(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1CC (0x1CC - 0x0)
// Function MTXOffer_SpecialBanner.MTXOffer_SpecialBanner_C.ExecuteUbergraph_MTXOffer_SpecialBanner
struct UMTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)()
	bool                                         Temp_bool_Variable_1;                              // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99D0[0x4];                                     // Fixing Size After Last Property..
	double                                       Temp_real_Variable;                                // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_1;                              // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue_1;        // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x3B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TextIsEmpty_ReturnValue_1;                // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x3D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x3E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99D1[0x1];                                     // Fixing Size After Last Property..
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue;              // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x48(0x50)(HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_4;                              // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99D2[0x7];                                     // Fixing Size After Last Property..
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xA0(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xB0(0x18)()
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99D3[0x7];                                     // Fixing Size After Last Property..
	class FText                                  K2Node_Select_Default_2;                           // 0xD0(0x18)()
	bool                                         K2Node_CustomEvent_bHasSale;                       // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99D4[0x7];                                     // Fixing Size After Last Property..
	class FText                                  K2Node_CustomEvent_SaleText;                       // 0xF0(0x18)()
	class FString                                K2Node_CustomEvent_BannerOverrideTag;              // 0x108(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bHasBattlePassStars;            // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99D5[0x3];                                     // Fixing Size After Last Property..
	int32                                        K2Node_CustomEvent_iNumOfBattlePassStars;          // 0x11C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable_1;                              // 0x120(0x18)()
	class UVerticalBoxSlot*                      CallFunc_SlotAsVerticalBoxSlot_ReturnValue;        // 0x138(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Default_3;                           // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x148(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FText                                  CallFunc_Map_Find_Value;                           // 0x158(0x18)()
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_5;                              // 0x171(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99D6[0x6];                                     // Fixing Size After Last Property..
	class FText                                  K2Node_Select_Default_4;                           // 0x178(0x18)()
	class FText                                  K2Node_Select_Default_5;                           // 0x190(0x18)()
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x1A8(0x18)()
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x1C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1C2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1C3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x1C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99D7[0x3];                                     // Fixing Size After Last Property..
	float                                        K2Node_MakeStruct_Top_ImplicitCast;                // 0x1C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
