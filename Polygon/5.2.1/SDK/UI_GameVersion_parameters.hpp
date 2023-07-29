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
// Function UI_GameVersion.UI_GameVersion_C.SetPlayerPosition
struct UUI_GameVersion_C_SetPlayerPosition_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_GameVersion.UI_GameVersion_C.OnSetMasterId_Event
struct UUI_GameVersion_C_OnSetMasterId_Event_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_GameVersion.UI_GameVersion_C.Construct
struct UUI_GameVersion_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_GameVersion.UI_GameVersion_C.OnServerFps_Event
struct UUI_GameVersion_C_OnServerFps_Event_Params
{
public:
};

// 0x168 (0x168 - 0x0)
// Function UI_GameVersion.UI_GameVersion_C.ExecuteUbergraph_UI_GameVersion
struct UUI_GameVersion_C_ExecuteUbergraph_UI_GameVersion_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x14(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34CD[0x3];                                     // Fixing Size After Last Property
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x28(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x38(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34CF[0x7];                                     // Fixing Size After Last Property
	class FString                                CallFunc_GetProjectVersion_ReturnValue;            // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x58(0x18)()
	class UCharacter*                            CallFunc_GetPlayerCharacter_ReturnValue;           // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34D0[0x7];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x80(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_X;                            // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y;                            // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z;                            // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue_1;                     // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0xB8(0x18)()
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_1;             // 0xD0(0x18)()
	class UBP_PG_GameInstance_C*                 CallFunc_GetGameInstance_MyGameIntance;            // 0xE8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class FString                                CallFunc_GetCurrentLevelName_ReturnValue;          // 0xF0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UClientGameInstance*                   CallFunc_GetClientGameInstance_ReturnValue;        // 0x100(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_StrStr_ReturnValue;              // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34D1[0x7];                                     // Fixing Size After Last Property
	class FString                                CallFunc_GetPlayerMasterId_ReturnValue;            // 0x110(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x120(0x18)()
	class UGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x138(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPG_GameState_Game*                    K2Node_DynamicCast_AsPG_Game_State_Game;           // 0x140(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34D2[0x7];                                     // Fixing Size After Last Property
	class FText                                  CallFunc_Conv_ByteToText_ReturnValue;              // 0x150(0x18)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
