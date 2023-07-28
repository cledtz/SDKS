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

// 0x8 (0x8 - 0x0)
// Function VerseBasicGameplay.task_VerseBasicGameplay_PlayerManager_basic_player_manager_impl$BeginWaitingForEvents.Update
struct UTask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents_Update_Params
{
public:
	int64                                        RetVal;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x15B (0x15B - 0x0)
// Function VerseBasicGameplay.VerseBasicGameplay_PlayerManager._L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R
struct UVerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R_Params
{
public:
	struct FSpatialMath_vector3                  __verse_0xB2CDDD72_Argument;                       // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	FOptionProperty_                             RetVal;                                            // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x00000000__1;                             // 0x20(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4629[0x6];                                     // Fixing Size After Last Property..
	FOptionProperty_                             __verse_0xE3700E84_MaybeEntity_2;                  // 0x28(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_0;                                         // 0x30(0x10)(HasGetValueTypeHash)
	struct FTuple_Lvector3_M_Kchar_R             _ExprResult_1;                                     // 0x40(0x28)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_2;                                     // 0x68(0x10)(HasGetValueTypeHash)
	class UVerseEngine_Entity_entity*            __verse_0x5F5E89D8_ValidEntity_3;                  // 0x78(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_3;                                // 0x80(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class UVGameplayRst_Transform_position_component* __verse_0x0A5C85D0_PosComp_3;                      // 0x88(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _FallibleType_4;                                   // 0x90(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_5;                                // 0x98(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_6;                                     // 0xA0(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class UVerseEngine_Entity_entity*            __verse_0x00000000__4;                             // 0xA8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_7;                                         // 0xB0(0x10)(HasGetValueTypeHash)
	class UPlayspace_playspace_component*        __verse_0x9F23064A_ThePlayspaceComp_3;             // 0xC0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _FallibleType_8;                                   // 0xC8(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_9;                                // 0xD0(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_10;                                    // 0xD8(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class UVerseEngine_Entity_entity*            __verse_0x00000000__5;                             // 0xE0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_11;                                        // 0xE8(0x10)(HasGetValueTypeHash)
	class UVGameplayRst_Transform_position_component* __verse_0x00000000__7;                             // 0xF8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_12;                         // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_462A[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_13;                                        // 0x108(0x10)(HasGetValueTypeHash)
	class UVerseBasicGameplay_PlayerManager_basic_player_manager_impl* __verse_0xD8BFBA84_BasicPlayerManager_6;           // 0x118(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint64                                       _InstancingGraph_14;                               // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerseBasicGameplay_PlayerManager_basic_player_manager_impl* __verse_0x00000000__8;                             // 0x128(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConcurrency_task*                     _AsyncTask_15;                                     // 0x130(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_16;                                // 0x138(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_17;                                    // 0x148(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_462B[0x7];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_18;                                   // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_19 : 1;                                // Mask: 0x1, PropSize: 0x10x158(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_291 : 7;                                    // Fixing Bit-Field Size..
	FOptionProperty_                             _ExprResultStack_20;                               // 0x159(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VerseBasicGameplay.VerseBasicGameplay_PlayerManager.$InitCDO
struct UVerseBasicGameplay_PlayerManager__InitCDO_Params
{
public:
};

// 0x89 (0x89 - 0x0)
// Function VerseBasicGameplay.VerseBasicGameplay_PlayerManager_basic_player_manager._L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers
struct UVerseBasicGameplay_PlayerManager_basic_player_manager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_462C[0x7];                                     // Fixing Size After Last Property..
	TArray<class USimulation_player*>            RetVal;                                            // 0x8(0x10)(Parm, OutParm, ReturnParm, ContainsInstancedReference)
	TArray<class USimulation_player*>            _ForResult_0;                                      // 0x18(0x10)(ContainsInstancedReference)
	TArray<class USimulation_player_component*>  _ForIterable_1;                                    // 0x28(0x10)(ContainsInstancedReference)
	class UPlayspace_playspace_component*        __verse_0x00000000__3;                             // 0x38(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_2;                                         // 0x40(0x10)(HasGetValueTypeHash)
	int64                                        _ForIndex_3;                                       // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        _ForLength_4;                                      // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USimulation_player_component*          __verse_0x1AA69DA0_PlayerComp_4;                   // 0x60(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USimulation_player*                    _ExprResult_5;                                     // 0x68(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USimulation_player_component*          __verse_0x00000000__7;                             // 0x70(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_6;                                         // 0x78(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_7;                                     // 0x88(0x1)(HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function VerseBasicGameplay.VerseBasicGameplay_PlayerManager_basic_player_manager._L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayerCount
struct UVerseBasicGameplay_PlayerManager_basic_player_manager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayerCount_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_462D[0x7];                                     // Fixing Size After Last Property..
	int64                                        RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayspace_playspace_component*        __verse_0x00000000__1;                             // 0x10(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_0;                                         // 0x18(0x10)(HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VerseBasicGameplay.VerseBasicGameplay_PlayerManager_basic_player_manager.$InitInstance
struct UVerseBasicGameplay_PlayerManager_basic_player_manager__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseBasicGameplay.VerseBasicGameplay_PlayerManager_basic_player_manager.$Block
struct UVerseBasicGameplay_PlayerManager_basic_player_manager__Block_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseBasicGameplay.VerseBasicGameplay_PlayerManager_basic_player_manager.$InitCDO
struct UVerseBasicGameplay_PlayerManager_basic_player_manager__InitCDO_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function VerseBasicGameplay.VerseBasicGameplay_PlayerManager_basic_player_manager_impl.BeginWaitingForEvents
struct UVerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents_Params
{
public:
	class UConcurrency_task*                     __verse_0xC1E81372_CallingTask;                    // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int64                                        __verse_0xA3A00DDB_CallerResumeState;              // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x2AC0E4D8_CallerCancelState;              // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x18(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_462E[0x7];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     RetVal;                                            // 0x20(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VerseBasicGameplay.VerseBasicGameplay_PlayerManager_basic_player_manager_impl.$InitInstance
struct UVerseBasicGameplay_PlayerManager_basic_player_manager_impl__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseBasicGameplay.VerseBasicGameplay_PlayerManager_basic_player_manager_impl.$Block
struct UVerseBasicGameplay_PlayerManager_basic_player_manager_impl__Block_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function VerseBasicGameplay.VerseBasicGameplay_PlayerManager_basic_player_manager_impl.$InitCDO
struct UVerseBasicGameplay_PlayerManager_basic_player_manager_impl__InitCDO_Params
{
public:
	class USimulation_player_multicast_delegate* _ExprResult_0;                                     // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint64                                       _InstancingGraph_1;                                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USimulation_player_multicast_delegate* _ExprResult_2;                                     // 0x10(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint64                                       _InstancingGraph_3;                                // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
