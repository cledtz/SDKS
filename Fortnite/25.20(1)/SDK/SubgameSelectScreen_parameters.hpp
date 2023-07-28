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

// 0x13 (0x13 - 0x0)
// Function SubgameSelectScreen.SubgameSelectScreen_C.IsMinorShutdownWarningEnabled
struct USubgameSelectScreen_C_IsMinorShutdownWarningEnabled_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A3B[0x7];                                     // Fixing Size After Last Property..
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EFortUIFeatureState               CallFunc_GetFeatureState_OutFeatureState;          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortUIFeatureStateReason         CallFunc_GetFeatureState_OutReason;                // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function SubgameSelectScreen.SubgameSelectScreen_C.IsBusyMatchmaking
struct USubgameSelectScreen_C_IsBusyMatchmaking_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A3C[0x7];                                     // Fixing Size After Last Property..
	class UFortMatchmakingContext*               CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMatchmakingLocal_ReturnValue;           // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function SubgameSelectScreen.SubgameSelectScreen_C.AdvanceTextureCycle
struct USubgameSelectScreen_C_AdvanceTextureCycle_Params
{
public:
	int32                                        NextTextureIndex;                                  // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentTextureIndex;                               // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A3D[0x4];                                     // Fixing Size After Last Property..
	class UTexture*                              CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              CallFunc_Array_Get_Item_1;                         // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A3E[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function SubgameSelectScreen.SubgameSelectScreen_C.InitializeTextureCycle
struct USubgameSelectScreen_C_InitializeTextureCycle_Params
{
public:
	class UTexture*                              CallFunc_Array_Get_Item;                           // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A3F[0x4];                                     // Fixing Size After Last Property..
	class UTexture*                              CallFunc_Array_Get_Item_1;                         // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function SubgameSelectScreen.SubgameSelectScreen_C.OnEventEnded_57187EC14A536D0960088EB25BDF39E5
struct USubgameSelectScreen_C_OnEventEnded_57187EC14A536D0960088EB25BDF39E5_Params
{
public:
	class FString                                EventName;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FTimespan                             TimeUntilEnd;                                      // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                             TimeSinceBegin;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        TimespanRatio;                                     // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function SubgameSelectScreen.SubgameSelectScreen_C.OnEventUpdated_57187EC14A536D0960088EB25BDF39E5
struct USubgameSelectScreen_C_OnEventUpdated_57187EC14A536D0960088EB25BDF39E5_Params
{
public:
	class FString                                EventName;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FTimespan                             TimeUntilEnd;                                      // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                             TimeSinceBegin;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        TimespanRatio;                                     // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function SubgameSelectScreen.SubgameSelectScreen_C.OnEventActive_57187EC14A536D0960088EB25BDF39E5
struct USubgameSelectScreen_C_OnEventActive_57187EC14A536D0960088EB25BDF39E5_Params
{
public:
	class FString                                EventName;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FTimespan                             TimeUntilEnd;                                      // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                             TimeSinceBegin;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        TimespanRatio;                                     // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function SubgameSelectScreen.SubgameSelectScreen_C.BP_OnActivated
struct USubgameSelectScreen_C_BP_OnActivated_Params
{
public:
};

// 0xC9 (0xC9 - 0x0)
// Function SubgameSelectScreen.SubgameSelectScreen_C.ExecuteUbergraph_SubgameSelectScreen
struct USubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A40[0x4];                                     // Fixing Size After Last Property..
	class FString                                K2Node_CustomEvent_EventName_2;                    // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FTimespan                             K2Node_CustomEvent_TimeUntilEnd_2;                 // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                             K2Node_CustomEvent_TimeSinceBegin_2;               // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_TimeSpanRatio_2;                // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x2C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_EventName_1;                    // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FTimespan                             K2Node_CustomEvent_TimeUntilEnd_1;                 // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                             K2Node_CustomEvent_TimeSinceBegin_1;               // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_TimeSpanRatio_1;                // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x5C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_EventName;                      // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FTimespan                             K2Node_CustomEvent_TimeUntilEnd;                   // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                             K2Node_CustomEvent_TimeSinceBegin;                 // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_TimeSpanRatio;                  // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x8C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_real_Variable;                                // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A41[0x4];                                     // Fixing Size After Last Property..
	struct FTimespan                             Temp_struct_Variable;                              // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                             Temp_struct_Variable_1;                            // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable;                              // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UFortAsyncAction_CalendarEventWatcher* CallFunc_WatchCalendarEvent_ReturnValue;           // 0xC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
