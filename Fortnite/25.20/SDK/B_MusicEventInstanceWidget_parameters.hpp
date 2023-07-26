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

// 0xBC (0xBC - 0x0)
// Function B_MusicEventInstanceWidget.B_MusicEventInstanceWidget_C.GetTextColor
struct UB_MusicEventInstanceWidget_C_GetTextColor_Params
{
public:
	struct FSlateColor                           ReturnValue;                                       // 0x0(0x14)(Parm, OutParm, ReturnParm)
	bool                                         Temp_bool_Variable;                                // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E05[0x3];                                     // Fixing Size After Last Property..
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x18(0x14)()
	uint8                                        Pad_9E06[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_FMin_ReturnValue;                         // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x38(0x14)()
	bool                                         CallFunc_GetIsInFront_ReturnValue;                 // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E07[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetMaxDistance_ReturnValue;               // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsAudible_ReturnValue;                 // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E08[0x3];                                     // Fixing Size After Last Property..
	double                                       CallFunc_MapRangeClamped_ReturnValue;              // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E09[0x3];                                     // Fixing Size After Last Property..
	struct FSlateColor                           K2Node_Select_Default;                             // 0x64(0x14)()
	float                                        CallFunc_BreakColor_R;                             // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_G;                             // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_B;                             // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_A;                             // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_MakeColor_ReturnValue;                    // 0x88(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_2;                    // 0x98(0x14)()
	uint8                                        Pad_9E0A[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_MapRangeClamped_InRangeB_ImplicitCast;    // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MakeColor_A_ImplicitCast;                 // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2E8 (0x2E8 - 0x0)
// Function B_MusicEventInstanceWidget.B_MusicEventInstanceWidget_C.GetFormatText
struct UB_MusicEventInstanceWidget_C_GetFormatText_Params
{
public:
	class FText                                  Result;                                            // 0x0(0x18)(Parm, OutParm)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x18(0x18)()
	float                                        CallFunc_GetDistSqToListener_ReturnValue;          // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E0B[0x4];                                     // Fixing Size After Last Property..
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x38(0x50)(HasGetValueTypeHash)
	double                                       CallFunc_Sqrt_ReturnValue;                         // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xA0(0x18)()
	int32                                        CallFunc_GetPriority_ReturnValue;                  // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E0C[0x4];                                     // Fixing Size After Last Property..
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0xC0(0x50)(HasGetValueTypeHash)
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue;              // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            CallFunc_GetAsset_ReturnValue;                     // 0x118(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x120(0x50)(HasGetValueTypeHash)
	class FString                                CallFunc_GetDisplayName_ReturnValue_1;             // 0x170(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FMusicEventData                       CallFunc_GetEventData_ReturnValue;                 // 0x180(0x30)(ConstParm)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x1B0(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_3;            // 0x1C8(0x50)(HasGetValueTypeHash)
	class FString                                CallFunc_GetDebugStringFromGameplayTag_ReturnValue; // 0x218(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Split_LeftS;                              // 0x228(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Split_RightS;                             // 0x238(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Split_ReturnValue;                        // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E0D[0x7];                                     // Fixing Size After Last Property..
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0x250(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_4;            // 0x268(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x2B8(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x2C8(0x18)()
	double                                       CallFunc_Sqrt_A_ImplicitCast;                      // 0x2E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function B_MusicEventInstanceWidget.B_MusicEventInstanceWidget_C.BP_OnEntryReleased
struct UB_MusicEventInstanceWidget_C_BP_OnEntryReleased_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function B_MusicEventInstanceWidget.B_MusicEventInstanceWidget_C.BP_OnItemExpansionChanged
struct UB_MusicEventInstanceWidget_C_BP_OnItemExpansionChanged_Params
{
public:
	bool                                         bIsExpanded;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function B_MusicEventInstanceWidget.B_MusicEventInstanceWidget_C.BP_OnItemSelectionChanged
struct UB_MusicEventInstanceWidget_C_BP_OnItemSelectionChanged_Params
{
public:
	bool                                         bIsSelected;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function B_MusicEventInstanceWidget.B_MusicEventInstanceWidget_C.Tick
struct UB_MusicEventInstanceWidget_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function B_MusicEventInstanceWidget.B_MusicEventInstanceWidget_C.OnListItemObjectSet
struct UB_MusicEventInstanceWidget_C_OnListItemObjectSet_Params
{
public:
	class UObject*                               ListItemObject;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8D (0x8D - 0x0)
// Function B_MusicEventInstanceWidget.B_MusicEventInstanceWidget_C.ExecuteUbergraph_B_MusicEventInstanceWidget
struct UB_MusicEventInstanceWidget_C_ExecuteUbergraph_B_MusicEventInstanceWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsExpanded;                          // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsSelected;                          // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E0E[0x1];                                     // Fixing Size After Last Property..
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x8(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E0F[0x4];                                     // Fixing Size After Last Property..
	class UObject*                               K2Node_Event_ListItemObject;                       // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMusicEventInstance*                   K2Node_DynamicCast_AsMusic_Event_Instance;         // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E10[0x7];                                     // Fixing Size After Last Property..
	class FText                                  CallFunc_GetFormatText_Result;                     // 0x60(0x18)()
	struct FSlateColor                           CallFunc_GetTextColor_ReturnValue;                 // 0x78(0x14)()
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x8C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
