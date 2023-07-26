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

// 0x10 (0x10 - 0x0)
// Function UIChart.UIStateChartContext.BP_SetPlayerValue
struct UUIStateChartContext_BP_SetPlayerValue_Params
{
public:
	class ULocalPlayer*                          LocalPlayer;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          Key;                                               // 0x8(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function UIChart.UIStateChartContext.BP_SetPlayerStringValue
struct UUIStateChartContext_BP_SetPlayerStringValue_Params
{
public:
	class ULocalPlayer*                          LocalPlayer;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          Key;                                               // 0x8(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8881[0x4];                                     // Fixing Size After Last Property..
	class FString                                Value;                                             // 0x10(0x10)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UIChart.UIStateChartContext.BP_SetPlayerFloatValue
struct UUIStateChartContext_BP_SetPlayerFloatValue_Params
{
public:
	class ULocalPlayer*                          LocalPlayer;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          Key;                                               // 0x8(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UIChart.UIStateChartContext.BP_SetPlayerBoolValue
struct UUIStateChartContext_BP_SetPlayerBoolValue_Params
{
public:
	class ULocalPlayer*                          LocalPlayer;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          Key;                                               // 0x8(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Value;                                             // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8882[0x3];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function UIChart.UIStateChartContext.BP_SetCommonStringValue
struct UUIStateChartContext_BP_SetCommonStringValue_Params
{
public:
	struct FGameplayTag                          Key;                                               // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8883[0x4];                                     // Fixing Size After Last Property..
	class FString                                Value;                                             // 0x8(0x10)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UIChart.UIStateChartContext.BP_SetCommonIntValue
struct UUIStateChartContext_BP_SetCommonIntValue_Params
{
public:
	struct FGameplayTag                          Key;                                               // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UIChart.UIStateChartContext.BP_SetCommonFloatValue
struct UUIStateChartContext_BP_SetCommonFloatValue_Params
{
public:
	struct FGameplayTag                          Key;                                               // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UIChart.UIStateChartContext.BP_SetCommonBoolValue
struct UUIStateChartContext_BP_SetCommonBoolValue_Params
{
public:
	struct FGameplayTag                          Key;                                               // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Value;                                             // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8884[0x3];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function UIChart.UIStateChartContext.BP_FindEntry
struct UUIStateChartContext_BP_FindEntry_Params
{
public:
	struct FGameplayTag                          Key;                                               // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8885[0x4];                                     // Fixing Size After Last Property..
	class UUIStateChartContextEntry*             ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UIChart.UIStateChartContext.BP_ClearPlayerValue
struct UUIStateChartContext_BP_ClearPlayerValue_Params
{
public:
	class ULocalPlayer*                          LocalPlayer;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          Key;                                               // 0x8(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8886[0x4];                                     // Fixing Size Of Struct..
};

// 0x4 (0x4 - 0x0)
// Function UIChart.UIStateChartContext.BP_ClearEntry
struct UUIStateChartContext_BP_ClearEntry_Params
{
public:
	struct FGameplayTag                          Key;                                               // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UIChart.UIStateChartContext.BP_ClearCommonValue
struct UUIStateChartContext_BP_ClearCommonValue_Params
{
public:
	struct FGameplayTag                          Key;                                               // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function UIChart.UIStateChartContext.BP_ApplyPlayerChanges
struct UUIStateChartContext_BP_ApplyPlayerChanges_Params
{
public:
	class ULocalPlayer*                          LocalPlayer;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUIStateChartContextChangeSet         ContextChanges;                                    // 0x8(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function UIChart.UIStateChartContext.BP_ApplyCommonChanges
struct UUIStateChartContext_BP_ApplyCommonChanges_Params
{
public:
	struct FUIStateChartContextChangeSet         ContextChanges;                                    // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UIChart.UIStateChartContextEntry.IsEmptyForPlayer
struct UUIStateChartContextEntry_IsEmptyForPlayer_Params
{
public:
	class ULocalPlayer*                          InLocalPlayer;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8888[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function UIChart.UIStateChartContextEntry.GetPlayerValueAsString
struct UUIStateChartContextEntry_GetPlayerValueAsString_Params
{
public:
	class ULocalPlayer*                          InLocalPlayer;                                     // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UIChart.UIStateChartContextEntry.GetPlayerValueAsInt
struct UUIStateChartContextEntry_GetPlayerValueAsInt_Params
{
public:
	class ULocalPlayer*                          InLocalPlayer;                                     // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8889[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function UIChart.UIStateChartContextEntry.GetPlayerValueAsFloat
struct UUIStateChartContextEntry_GetPlayerValueAsFloat_Params
{
public:
	class ULocalPlayer*                          InLocalPlayer;                                     // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_888A[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function UIChart.UIStateChartContextEntry.GetPlayerValueAsBool
struct UUIStateChartContextEntry_GetPlayerValueAsBool_Params
{
public:
	class ULocalPlayer*                          InLocalPlayer;                                     // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_888B[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function UIChart.UIStateChartContextEntry.GetCommonValueAsString
struct UUIStateChartContextEntry_GetCommonValueAsString_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UIChart.UIStateChartContextEntry.GetCommonValueAsInt
struct UUIStateChartContextEntry_GetCommonValueAsInt_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UIChart.UIStateChartContextEntry.GetCommonValueAsFloat
struct UUIStateChartContextEntry_GetCommonValueAsFloat_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UIChart.UIStateChartContextEntry.GetCommonValueAsBool
struct UUIStateChartContextEntry_GetCommonValueAsBool_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UIChart.UIStateChartManager.GetContext
struct UUIStateChartManager_GetContext_Params
{
public:
	class UUIStateChartContext*                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function UIChart.UIStateChartManager.BP_RemoveStateChart
struct UUIStateChartManager_BP_RemoveStateChart_Params
{
public:
	int32                                        Key;                                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_888D[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 AnimationHints;                                    // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FUIStateChartContextChangeSet         ContextChanges;                                    // 0x28(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	enum class EUIStateTransitionUrgency         Urgency;                                           // 0x78(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x79(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_888E[0x6];                                     // Fixing Size Of Struct..
};

// 0x30 (0x30 - 0x0)
// Function UIChart.UIStateChartManager.BP_ReactivateStateChart
struct UUIStateChartManager_BP_ReactivateStateChart_Params
{
public:
	int32                                        Key;                                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_888F[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 AnimationHints;                                    // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTag                          StateTag;                                          // 0x28(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUIStateTransitionUrgency         Urgency;                                           // 0x2C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8890[0x3];                                     // Fixing Size Of Struct..
};

// 0x88 (0x88 - 0x0)
// Function UIChart.UIStateChartManager.BP_DispatchTransitionEvent
struct UUIStateChartManager_BP_DispatchTransitionEvent_Params
{
public:
	struct FGameplayTag                          TransitionTag;                                     // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8891[0x4];                                     // Fixing Size After Last Property..
	class ULocalPlayer*                          StateChartOwner;                                   // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 AnimationHints;                                    // 0x10(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FUIStateChartContextChangeSet         ContextChanges;                                    // 0x30(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	enum class EUIStateTransitionUrgency         Urgency;                                           // 0x80(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBacktrack;                                        // 0x81(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x82(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8892[0x5];                                     // Fixing Size Of Struct..
};

// 0x80 (0x80 - 0x0)
// Function UIChart.UIStateChartManager.BP_DeactivateStateChart
struct UUIStateChartManager_BP_DeactivateStateChart_Params
{
public:
	int32                                        Key;                                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8893[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 AnimationHints;                                    // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FUIStateChartContextChangeSet         ContextChanges;                                    // 0x28(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	enum class EUIStateTransitionUrgency         Urgency;                                           // 0x78(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x79(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8894[0x6];                                     // Fixing Size Of Struct..
};

// 0x40 (0x40 - 0x0)
// Function UIChart.UIStateChartManager.BP_AddStateChart
struct UUIStateChartManager_BP_AddStateChart_Params
{
public:
	class UUIStateChart*                         StateChartAsset;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULocalPlayer*                          OwningLocalPlayer;                                 // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 AnimationHints;                                    // 0x10(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTag                          InitialStateTag;                                   // 0x30(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUIStateTransitionUrgency         Urgency;                                           // 0x34(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8895[0x3];                                     // Fixing Size After Last Property..
	int32                                        ReturnValue;                                       // 0x38(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8896[0x4];                                     // Fixing Size Of Struct..
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
