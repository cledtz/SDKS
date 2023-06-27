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

// 0x180 (0x180 - 0x0)
// Function NPCConvertedIndicatorMarker.NPCConvertedIndicatorMarker_C.OnSetMarkerData
struct UNPCConvertedIndicatorMarker_C_OnSetMarkerData_Params
{
public:
	struct FFortWorldMarkerData                  FortWorldMarkerData;                               // 0x0(0x180)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function NPCConvertedIndicatorMarker.NPCConvertedIndicatorMarker_C.OnPingCommandEvent
struct UNPCConvertedIndicatorMarker_C_OnPingCommandEvent_Params
{
public:
	enum class EPingCommandType                  CommandType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x208 (0x208 - 0x0)
// Function NPCConvertedIndicatorMarker.NPCConvertedIndicatorMarker_C.ExecuteUbergraph_NPCConvertedIndicatorMarker
struct UNPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_91B4[0x4];                                     // Fixing Size After Last Property..
	struct FFortWorldMarkerData                  K2Node_Event_FortWorldMarkerData;                  // 0x18(0x180)(ConstParm)
	class ABP_PlayerPawn_Tandem_C*               K2Node_DynamicCast_AsBP_Player_Pawn_Tandem;        // 0x198(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_91B5[0x7];                                     // Fixing Size After Last Property..
	class ANPC_Pawn_Wildlife_Parent_C*           K2Node_DynamicCast_AsNPC_Pawn_Wildlife_Parent;     // 0x1A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_91B6[0x7];                                     // Fixing Size After Last Property..
	class UFortPawnComponent_Convert*            CallFunc_GetComponentByClass_ReturnValue;          // 0x1B8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EPingCommandType                  K2Node_CustomEvent_CommandType;                    // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_91B7[0x3];                                     // Fixing Size After Last Property..
	struct FLinearColor                          CallFunc_GetUIColor_ReturnValue;                   // 0x1C4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_91B8[0x3];                                     // Fixing Size After Last Property..
	class AFortPlayerPawn*                       CallFunc_GetConverterPawn_ReturnValue;             // 0x1D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x1E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_91B9[0x6];                                     // Fixing Size After Last Property..
	class AFortPlayerState*                      CallFunc_AttemptGetPlayerStateForPawn_ReturnValue; // 0x1E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x1F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_91BA[0x7];                                     // Fixing Size After Last Property..
	class AFortPlayerStateAthena*                K2Node_DynamicCast_AsFort_Player_State_Athena;     // 0x1F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_4;                              // 0x201(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_5;                              // 0x202(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_6;                              // 0x203(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_7;                              // 0x204(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_8;                              // 0x205(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPingCommandType                  Temp_byte_Variable_9;                              // 0x206(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x207(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
