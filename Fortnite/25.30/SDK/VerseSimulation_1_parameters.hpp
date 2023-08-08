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

// 0x28 (0x28 - 0x0)
// Function VerseSimulation.Simulation.Sleep_L_Nfloat_R
struct USimulation_Sleep_L_Nfloat_R_Params
{
public:
	class UConcurrency_task*                     __verse_0xC1E81372_CallingTask;                    // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int64                                        __verse_0xA3A00DDB_CallerResumeState;              // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x2AC0E4D8_CallerCancelState;              // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __verse_0xB2CDDD72_Argument;                       // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UConcurrency_task*                     RetVal;                                            // 0x20(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseSimulation.Simulation._L_2fVerse_2eorg_2fSimulation_N_RGetSimulationElapsedTime
struct USimulation__L_2fVerse_2eorg_2fSimulation_N_RGetSimulationElapsedTime_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_4F17[0x7];                                     // Fixing Size After Last Property
	double                                       RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseSimulation.Simulation._L_2fVerse_2eorg_2fSimulation_N_RGetSession
struct USimulation__L_2fVerse_2eorg_2fSimulation_N_RGetSession_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_4F1D[0x7];                                     // Fixing Size After Last Property
	class USimulation_session*                   RetVal;                                            // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseSimulation.Simulation._L_2fVerse_2eorg_2fSimulation_N_RGetPlayerComponentByIndex_L_Nint_R
struct USimulation__L_2fVerse_2eorg_2fSimulation_N_RGetPlayerComponentByIndex_L_Nint_R_Params
{
public:
	int64                                        __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function VerseSimulation.Simulation._L_2fVerse_2eorg_2fSimulation_N_RGetOrCreateComponentOfTypeForPlayer_L_Nint_M_NType_20where_20Type_R
struct USimulation__L_2fVerse_2eorg_2fSimulation_N_RGetOrCreateComponentOfTypeForPlayer_L_Nint_M_NType_20where_20Type_R_Params
{
public:
	struct FTuple_Lint_Many_R                    __verse_0xB2CDDD72_Argument;                       // 0x0(0x10)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function VerseSimulation.Simulation._L_2fVerse_2eorg_2fSimulation_N_RGetOrCreateComponentOfTypeForPlayer_L_Nplayer__component_M_NType_20where_20Type_R
struct USimulation__L_2fVerse_2eorg_2fSimulation_N_RGetOrCreateComponentOfTypeForPlayer_L_Nplayer__component_M_NType_20where_20Type_R_Params
{
public:
	struct FTuple_Lplayer__component_Many_R      __verse_0xB2CDDD72_Argument;                       // 0x0(0x10)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function VerseSimulation.Simulation._L_2fVerse_2eorg_2fSimulation_N_RGetComponentOfTypeForPlayer_L_Nplayer__component_M_NType_20where_20Type_R
struct USimulation__L_2fVerse_2eorg_2fSimulation_N_RGetComponentOfTypeForPlayer_L_Nplayer__component_M_NType_20where_20Type_R_Params
{
public:
	struct FTuple_Lplayer__component_Many_R      __verse_0xB2CDDD72_Argument;                       // 0x0(0x10)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function VerseSimulation.Simulation._L_2fVerse_2eorg_2fSimulation_N_RGetComponentOfTypeForPlayer_L_Nint_M_NType_20where_20Type_R
struct USimulation__L_2fVerse_2eorg_2fSimulation_N_RGetComponentOfTypeForPlayer_L_Nint_M_NType_20where_20Type_R_Params
{
public:
	struct FTuple_Lint_Many_R                    __verse_0xB2CDDD72_Argument;                       // 0x0(0x10)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VerseSimulation.Simulation.$InitCDO
struct USimulation__InitCDO_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseSimulation.Simulation_agent.$InitInstance
struct USimulation_agent__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseSimulation.Simulation_agent.$Block
struct USimulation_agent__Block_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseSimulation.Simulation_agent.$InitCDO
struct USimulation_agent__InitCDO_Params
{
public:
};

// 0x3 (0x3 - 0x0)
// Function VerseSimulation.Simulation_player._L_2fVerse_2eorg_2fSimulation_2fplayer_N_RIsActive
struct USimulation_player__L_2fVerse_2eorg_2fSimulation_2fplayer_N_RIsActive_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x1(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VerseSimulation.Simulation_player.$InitInstance
struct USimulation_player__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseSimulation.Simulation_player.$Block
struct USimulation_player__Block_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseSimulation.Simulation_player.$InitCDO
struct USimulation_player__InitCDO_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function VerseSimulation.Simulation_player_array_helper._L_2fVerse_2eorg_2fSimulation_2fplayer__array__helper_N_RTestFunc_L_Nint_R
struct USimulation_player_array_helper__L_2fVerse_2eorg_2fSimulation_2fplayer__array__helper_N_RTestFunc_L_Nint_R_Params
{
public:
	int64                                        __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VerseSimulation.Simulation_player_array_helper.$InitCDO
struct USimulation_player_array_helper__InitCDO_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function VerseSimulation.Simulation_player_component._L_2fVerse_2eorg_2fSimulation_2fplayer__component_N_RGetHandle
struct USimulation_player_component__L_2fVerse_2eorg_2fSimulation_2fplayer__component_N_RGetHandle_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_4F44[0x7];                                     // Fixing Size After Last Property
	class USimulation_player*                    RetVal;                                            // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VerseSimulation.Simulation_player_component.$InitInstance
struct USimulation_player_component__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseSimulation.Simulation_player_component.$Block
struct USimulation_player_component__Block_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseSimulation.Simulation_player_component.$InitCDO
struct USimulation_player_component__InitCDO_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseSimulation.Simulation_player_multicast_delegate.$InitInstance
struct USimulation_player_multicast_delegate__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseSimulation.Simulation_player_multicast_delegate.$Block
struct USimulation_player_multicast_delegate__Block_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseSimulation.Simulation_player_multicast_delegate.$InitCDO
struct USimulation_player_multicast_delegate__InitCDO_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseSimulation.Simulation_session.$InitInstance
struct USimulation_session__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseSimulation.Simulation_session.$Block
struct USimulation_session__Block_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseSimulation.Simulation_session.$InitCDO
struct USimulation_session__InitCDO_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseSimulation.Simulation_team.$InitInstance
struct USimulation_team__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseSimulation.Simulation_team.$Block
struct USimulation_team__Block_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseSimulation.Simulation_team.$InitCDO
struct USimulation_team__InitCDO_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function VerseSimulation.task_Simulation$Sleep_L_Nfloat_R.Update
struct UTask_Simulation_Sleep_L_Nfloat_R_Update_Params
{
public:
	int64                                        RetVal;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
