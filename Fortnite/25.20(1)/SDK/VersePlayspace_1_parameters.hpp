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

// 0x1 (0x1 - 0x0)
// Function VersePlayspace.Playspace_playspace_component._L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RsetQueueUserForRespawnWhenAdded_L_Nlogic_R
struct UPlayspace_playspace_component__L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RsetQueueUserForRespawnWhenAdded_L_Nlogic_R_Params
{
public:
	uint8                                        __verse_0xB2CDDD72_Argument : 1;                   // Mask: 0x1, PropSize: 0x10x0(0x1)(Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function VersePlayspace.Playspace_playspace_component._L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RgetPlayers_L_NPlayerType_R
struct UPlayspace_playspace_component__L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RgetPlayers_L_NPlayerType_R_Params
{
public:
	enum class EPlayspace_PlayerType             __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8991[0x7];                                     // Fixing Size After Last Property..
	TArray<class USimulation_player_component*>  RetVal;                                            // 0x8(0x10)(Parm, OutParm, ReturnParm, ContainsInstancedReference)
};

// 0x10 (0x10 - 0x0)
// Function VersePlayspace.Playspace_playspace_component._L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RgetPlayerCount_L_NPlayerType_R
struct UPlayspace_playspace_component__L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RgetPlayerCount_L_NPlayerType_R_Params
{
public:
	enum class EPlayspace_PlayerType             __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8992[0x7];                                     // Fixing Size After Last Property..
	int64                                        RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function VersePlayspace.Playspace_playspace_component.__WaitForSetupComplete
struct UPlayspace_playspace_component___WaitForSetupComplete_Params
{
public:
	class UConcurrency_task*                     __verse_0xC1E81372_CallingTask;                    // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int64                                        __verse_0xA3A00DDB_CallerResumeState;              // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x2AC0E4D8_CallerCancelState;              // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x18(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8993[0x7];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     RetVal;                                            // 0x20(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function VersePlayspace.Playspace_playspace_component.__WaitForPlayerRemoved
struct UPlayspace_playspace_component___WaitForPlayerRemoved_Params
{
public:
	class UConcurrency_task*                     __verse_0xC1E81372_CallingTask;                    // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int64                                        __verse_0xA3A00DDB_CallerResumeState;              // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x2AC0E4D8_CallerCancelState;              // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x18(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8994[0x7];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     RetVal;                                            // 0x20(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function VersePlayspace.Playspace_playspace_component.__WaitForPlayerAdded
struct UPlayspace_playspace_component___WaitForPlayerAdded_Params
{
public:
	class UConcurrency_task*                     __verse_0xC1E81372_CallingTask;                    // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int64                                        __verse_0xA3A00DDB_CallerResumeState;              // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x2AC0E4D8_CallerCancelState;              // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x18(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8995[0x7];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     RetVal;                                            // 0x20(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function VersePlayspace.Playspace_playspace_component.__WaitForMatchEnd
struct UPlayspace_playspace_component___WaitForMatchEnd_Params
{
public:
	class UConcurrency_task*                     __verse_0xC1E81372_CallingTask;                    // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int64                                        __verse_0xA3A00DDB_CallerResumeState;              // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x2AC0E4D8_CallerCancelState;              // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x18(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8996[0x7];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     RetVal;                                            // 0x20(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function VersePlayspace.Playspace_playspace_component.__WaitForMatchBegin
struct UPlayspace_playspace_component___WaitForMatchBegin_Params
{
public:
	class UConcurrency_task*                     __verse_0xC1E81372_CallingTask;                    // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int64                                        __verse_0xA3A00DDB_CallerResumeState;              // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x2AC0E4D8_CallerCancelState;              // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x18(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8997[0x7];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     RetVal;                                            // 0x20(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VersePlayspace.Playspace_playspace_component._L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RSetPlayerComponentClass_L_NComponentType_20where_20ComponentType_R
struct UPlayspace_playspace_component__L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RSetPlayerComponentClass_L_NComponentType_20where_20ComponentType_R_Params
{
public:
	class UClass*                                __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VersePlayspace.Playspace_playspace_component.$InitInstance
struct UPlayspace_playspace_component__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VersePlayspace.Playspace_playspace_component.$Block
struct UPlayspace_playspace_component__Block_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VersePlayspace.Playspace_playspace_component.$InitCDO
struct UPlayspace_playspace_component__InitCDO_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function VersePlayspace.task_Playspace_playspace_component$__WaitForMatchBegin.Update
struct UTask_Playspace_playspace_component___WaitForMatchBegin_Update_Params
{
public:
	int64                                        RetVal;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VersePlayspace.task_Playspace_playspace_component$__WaitForMatchEnd.Update
struct UTask_Playspace_playspace_component___WaitForMatchEnd_Update_Params
{
public:
	int64                                        RetVal;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VersePlayspace.task_Playspace_playspace_component$__WaitForPlayerAdded.Update
struct UTask_Playspace_playspace_component___WaitForPlayerAdded_Update_Params
{
public:
	int64                                        RetVal;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VersePlayspace.task_Playspace_playspace_component$__WaitForPlayerRemoved.Update
struct UTask_Playspace_playspace_component___WaitForPlayerRemoved_Update_Params
{
public:
	int64                                        RetVal;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VersePlayspace.task_Playspace_playspace_component$__WaitForSetupComplete.Update
struct UTask_Playspace_playspace_component___WaitForSetupComplete_Update_Params
{
public:
	int64                                        RetVal;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
