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

// 0x60 (0x60 - 0x0)
// Function B_PhysicsTree_Reporter.B_PhysicsTree_Reporter_C.WrapString
struct AB_PhysicsTree_Reporter_C_WrapString_Params
{
public:
	class FString                                Prepend;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                String;                                            // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Append;                                            // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Result;                                            // 0x30(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x2B8 (0x2B8 - 0x0)
// Function B_PhysicsTree_Reporter.B_PhysicsTree_Reporter_C.ReportTreeAnalytics
struct AB_PhysicsTree_Reporter_C_ReportTreeAnalytics_Params
{
public:
	TArray<class FString>                        InstanceRowArray;                                  // 0x0(0x10)(Edit, BlueprintVisible)
	TArray<class FString>                        TempStringArray;                                   // 0x10(0x10)(Edit, BlueprintVisible)
	class FString                                TempString;                                        // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FFortAnalyticsEventAttribute>  AttributeArray;                                    // 0x30(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12F3[0x7];                                     // Fixing Size After Last Property..
	class FString                                CallFunc_JoinStringArray_ReturnValue;              // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_WrapString_Result;                        // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FFortAnalyticsEventAttribute          CallFunc_ConstructAnalyticsAttribute_ReturnValue;  // 0x78(0x20)()
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12F4[0x4];                                     // Fixing Size After Last Property..
	class FString                                CallFunc_JoinStringArray_ReturnValue_1;            // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_WrapString_Result_1;                      // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12F5[0x4];                                     // Fixing Size After Last Property..
	struct FPhysicsLogAnalyticsStruct            CallFunc_Array_Get_Item;                           // 0xD0(0x6C)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                        Pad_12F6[0x4];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x144(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12F7[0x3];                                     // Fixing Size After Last Property..
	class FString                                CallFunc_Conv_DoubleToString_ReturnValue;          // 0x148(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_DoubleToString_ReturnValue_1;        // 0x158(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_DoubleToString_ReturnValue_2;        // 0x168(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_DoubleToString_ReturnValue_3;        // 0x178(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_DoubleToString_ReturnValue_4;        // 0x188(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_VectorToString_ReturnValue;          // 0x198(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_DoubleToString_ReturnValue_5;        // 0x1A8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_VectorToString_ReturnValue_1;        // 0x1B8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class AFortGameStateAthena*                  CallFunc_GetGameStateAthena_ReturnValue;           // 0x1C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                        K2Node_MakeArray_Array;                            // 0x1D0(0x10)(ReferenceParm)
	class FString                                CallFunc_GetGameSessionID_ReturnValue;             // 0x1E0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Array_Get_Item_1;                         // 0x1F0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FFortAnalyticsEventAttribute          CallFunc_ConstructAnalyticsAttribute_ReturnValue_1; // 0x200(0x20)()
	class FString                                CallFunc_WrapString_Result_2;                      // 0x220(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_2;                  // 0x230(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_3;                  // 0x234(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x238(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12F8[0x4];                                     // Fixing Size After Last Property..
	class AFortGameStateAthena*                  CallFunc_GetGameStateAthena_ReturnValue_1;         // 0x240(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12F9[0x3];                                     // Fixing Size After Last Property..
	class FName                                  CallFunc_GetCurrentPlaylistName_ReturnValue;       // 0x24C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x250(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FFortAnalyticsEventAttribute          CallFunc_ConstructAnalyticsAttribute_ReturnValue_2; // 0x260(0x20)()
	int32                                        CallFunc_Array_Add_ReturnValue_4;                  // 0x280(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12FA[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Conv_DoubleToString_InDouble_ImplicitCast; // 0x288(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_1; // 0x290(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_2; // 0x298(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_3; // 0x2A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_4; // 0x2A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_5; // 0x2B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10A (0x10A - 0x0)
// Function B_PhysicsTree_Reporter.B_PhysicsTree_Reporter_C.GetLogDataByInstanceName
struct AB_PhysicsTree_Reporter_C_GetLogDataByInstanceName_Params
{
public:
	class FString                                InstanceName;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FPhysicsLogAnalyticsStruct            Data;                                              // 0x10(0x6C)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	uint8                                        Pad_12FB[0x4];                                     // Fixing Size After Last Property..
	int32                                        Index;                                             // 0x80(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x84(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12FC[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Array_Index_Variable;                     // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPhysicsLogAnalyticsStruct            CallFunc_Array_Get_Item;                           // 0x98(0x6C)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                        Pad_12FD[0x4];                                     // Fixing Size After Last Property..
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x109(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x258 (0x258 - 0x0)
// Function B_PhysicsTree_Reporter.B_PhysicsTree_Reporter_C.ReportDamageInflicted
struct AB_PhysicsTree_Reporter_C_ReportDamageInflicted_Params
{
public:
	class FString                                InstanceName;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	enum class EPhysicsLogAnalytics_DamageCategory DamageCategory;                                    // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12FE[0x7];                                     // Fixing Size After Last Property..
	double                                       Amount;                                            // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<double>                               DamageCounts;                                      // 0x20(0x10)(Edit, BlueprintVisible)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12FF[0x4];                                     // Fixing Size After Last Property..
	struct FPhysicsLogAnalyticsStruct            CallFunc_GetLogDataByInstanceName_Data;            // 0x38(0x6C)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                        Pad_1300[0x4];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_GetLogDataByInstanceName_Index;           // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetLogDataByInstanceName_Success;         // 0xAC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1301[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Array_Index_Variable;                     // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1302[0x4];                                     // Fixing Size After Last Property..
	TArray<double>                               K2Node_MakeArray_Array;                            // 0xC0(0x10)(ReferenceParm)
	double                                       CallFunc_Array_Get_Item;                           // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xDC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1303[0x3];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Array_Get_Item_1;                         // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Array_Get_Item_2;                         // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Array_Get_Item_3;                         // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Array_Get_Item_4;                         // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Array_Get_Item_5;                         // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Array_Get_Item_6;                         // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPhysicsLogAnalyticsStruct            K2Node_MakeStruct_PhysicsLogAnalyticsStruct;       // 0x110(0x6C)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                        Pad_1304[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Array_Get_Item_7;                         // 0x180(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Array_Get_Item_8;                         // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPhysicsLogAnalyticsStruct            K2Node_MakeStruct_PhysicsLogAnalyticsStruct_1;     // 0x190(0x6C)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                        Pad_1305[0x4];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Variable;                                 // 0x200(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x204(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Default;                             // 0x208(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x210(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Option_0_ImplicitCast;               // 0x218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Option_1_ImplicitCast;               // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Option_2_ImplicitCast;               // 0x228(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Option_3_ImplicitCast;               // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_DamageToAI_26_9671D0A943425BB2EC73159C0B19C99D_ImplicitCast; // 0x238(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_DamageToAI_26_9671D0A943425BB2EC73159C0B19C99D_ImplicitCast_1; // 0x23C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_DamageToVehicles_24_69A07F714B43DF853CA180B441A6A29C_ImplicitCast; // 0x240(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_DamageToStructures_22_636FABDE409E1A51BAF808863B05D213_ImplicitCast; // 0x244(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_DamageToPlayers_20_F701392440AAC7AC33A8B2BCAEB3C5D0_ImplicitCast; // 0x248(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_DamageToVehicles_24_69A07F714B43DF853CA180B441A6A29C_ImplicitCast_1; // 0x24C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_DamageToStructures_22_636FABDE409E1A51BAF808863B05D213_ImplicitCast_1; // 0x250(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_DamageToPlayers_20_F701392440AAC7AC33A8B2BCAEB3C5D0_ImplicitCast_1; // 0x254(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A4 (0x1A4 - 0x0)
// Function B_PhysicsTree_Reporter.B_PhysicsTree_Reporter_C.ReportLogDestroyed
struct AB_PhysicsTree_Reporter_C_ReportLogDestroyed_Params
{
public:
	class FString                                Instance_Name;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FVector                               Location;                                          // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPhysicsLogAnalyticsStruct            CallFunc_GetLogDataByInstanceName_Data;            // 0x28(0x6C)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                        Pad_1306[0x4];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_GetLogDataByInstanceName_Index;           // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetLogDataByInstanceName_Success;         // 0x9C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1307[0x3];                                     // Fixing Size After Last Property..
	class AFortGameStateAthena*                  CallFunc_GetGameStateAthena_ReturnValue;           // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetMatchTime_ReturnValue;                 // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1308[0x4];                                     // Fixing Size After Last Property..
	struct FPhysicsLogAnalyticsStruct            K2Node_MakeStruct_PhysicsLogAnalyticsStruct;       // 0xB0(0x6C)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                        Pad_1309[0x4];                                     // Fixing Size After Last Property..
	class AFortGameStateAthena*                  CallFunc_GetGameStateAthena_ReturnValue_1;         // 0x120(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetMatchTime_ReturnValue_1;               // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_130A[0x4];                                     // Fixing Size After Last Property..
	struct FPhysicsLogAnalyticsStruct            K2Node_MakeStruct_PhysicsLogAnalyticsStruct_1;     // 0x130(0x6C)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                        Pad_130B[0x4];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x1A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1B4 (0x1B4 - 0x0)
// Function B_PhysicsTree_Reporter.B_PhysicsTree_Reporter_C.ReportLogFelled
struct AB_PhysicsTree_Reporter_C_ReportLogFelled_Params
{
public:
	class FString                                Instance_Name;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Felled_By;                                         // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FVector                               Location;                                          // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPhysicsLogAnalyticsStruct            CallFunc_GetLogDataByInstanceName_Data;            // 0x38(0x6C)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                        Pad_130C[0x4];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_GetLogDataByInstanceName_Index;           // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetLogDataByInstanceName_Success;         // 0xAC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_130D[0x3];                                     // Fixing Size After Last Property..
	class AFortGameStateAthena*                  CallFunc_GetGameStateAthena_ReturnValue;           // 0xB0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetMatchTime_ReturnValue;                 // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_130E[0x4];                                     // Fixing Size After Last Property..
	class AFortGameStateAthena*                  CallFunc_GetGameStateAthena_ReturnValue_1;         // 0xC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPhysicsLogAnalyticsStruct            K2Node_MakeStruct_PhysicsLogAnalyticsStruct;       // 0xC8(0x6C)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                        Pad_130F[0x4];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetMatchTime_ReturnValue_1;               // 0x138(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1310[0x4];                                     // Fixing Size After Last Property..
	struct FPhysicsLogAnalyticsStruct            K2Node_MakeStruct_PhysicsLogAnalyticsStruct_1;     // 0x140(0x6C)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                        Pad_1311[0x4];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x1B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function B_PhysicsTree_Reporter.B_PhysicsTree_Reporter_C.OnReady_FFF47C8E40A1C412A19C8B8828BD5787
struct AB_PhysicsTree_Reporter_C_OnReady_FFF47C8E40A1C412A19C8B8828BD5787_Params
{
public:
	class AFortGameStateAthena*                  GameState;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortPlaylist*                         Playlist;                                          // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 PlaylistContextTags;                               // 0x10(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function B_PhysicsTree_Reporter.B_PhysicsTree_Reporter_C.ReceiveBeginPlay
struct AB_PhysicsTree_Reporter_C_ReceiveBeginPlay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_PhysicsTree_Reporter.B_PhysicsTree_Reporter_C.EndMatchReport
struct AB_PhysicsTree_Reporter_C_EndMatchReport_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function B_PhysicsTree_Reporter.B_PhysicsTree_Reporter_C.PhaseChanged
struct AB_PhysicsTree_Reporter_C_PhaseChanged_Params
{
public:
	enum class EAthenaGamePhase                  GamePhase;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9B (0x9B - 0x0)
// Function B_PhysicsTree_Reporter.B_PhysicsTree_Reporter_C.ExecuteUbergraph_B_PhysicsTree_Reporter
struct AB_PhysicsTree_Reporter_C_ExecuteUbergraph_B_PhysicsTree_Reporter_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1312[0x4];                                     // Fixing Size After Last Property..
	class AFortGameStateAthena*                  K2Node_CustomEvent_GameState;                      // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortPlaylist*                         K2Node_CustomEvent_Playlist;                       // 0x10(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 K2Node_CustomEvent_PlaylistContextTags;            // 0x18(0x20)(ConstParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x38(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1313[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 Temp_struct_Variable;                              // 0x48(0x20)()
	class UFortPlaylist*                         Temp_object_Variable;                              // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortGameStateAthena*                  Temp_object_Variable_1;                            // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortAsyncAction_CurrentPlaylistReady* CallFunc_PlaylistDataReadyAsync_ReturnValue;       // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1314[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x84(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortGameStateAthena*                  CallFunc_GetGameStateAthena_ReturnValue;           // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAthenaGamePhase                  K2Node_CustomEvent_GamePhase;                      // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x9A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
