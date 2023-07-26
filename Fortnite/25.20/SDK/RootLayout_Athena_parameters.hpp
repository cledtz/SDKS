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

// 0x1B (0x1B - 0x0)
// Function RootLayout_Athena.RootLayout_Athena_C.IsConsole
struct URootLayout_Athena_C_IsConsole_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_82B0[0x7];                                     // Fixing Size After Last Property..
	class FString                                CallFunc_GetPlatformName_ReturnValue;              // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function RootLayout_Athena.RootLayout_Athena_C.DialogResult_0099D78247C40A9775C753A2024EA419
struct URootLayout_Athena_C_DialogResult_0099D78247C40A9775C753A2024EA419_Params
{
public:
	enum class EFortDialogResult                 Result;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_82B1[0x3];                                     // Fixing Size After Last Property..
	class FName                                  ResultName;                                        // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function RootLayout_Athena.RootLayout_Athena_C.Construct
struct URootLayout_Athena_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function RootLayout_Athena.RootLayout_Athena_C.OnGameWindowCloseButtonClicked
struct URootLayout_Athena_C_OnGameWindowCloseButtonClicked_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function RootLayout_Athena.RootLayout_Athena_C.OnModalQueueEmptied_1
struct URootLayout_Athena_C_OnModalQueueEmptied_1_Params
{
public:
};

// 0x41 (0x41 - 0x0)
// Function RootLayout_Athena.RootLayout_Athena_C.ExecuteUbergraph_RootLayout_Athena
struct URootLayout_Athena_C_ExecuteUbergraph_RootLayout_Athena_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_82B2[0x4];                                     // Fixing Size After Last Property..
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EFortDialogResult                 K2Node_CustomEvent_Result;                         // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_82B3[0x3];                                     // Fixing Size After Last Property..
	class FName                                  K2Node_CustomEvent_ResultName;                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable;                                // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDialogResult                 Temp_byte_Variable;                                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_82B4[0x2];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x2C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue; // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
