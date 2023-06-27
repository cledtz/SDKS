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

// 0x40 (0x40 - 0x0)
// Function EpicGamesEngine.EpicGames_Input_verse_ue_input_component.WaitForAction_L_Nverse__ue__input__component_M_N_Kchar_M_Ninput__event_R
struct UEpicGames_Input_verse_ue_input_component_WaitForAction_L_Nverse__ue__input__component_M_N_Kchar_M_Ninput__event_R_Params
{
public:
	class UConcurrency_task*                     __verse_0xC1E81372_CallingTask;                    // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int64                                        __verse_0xA3A00DDB_CallerResumeState;              // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x2AC0E4D8_CallerCancelState;              // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTuple_Lverse__ue__input__component_M_Kchar_Minput__event_R __verse_0xB2CDDD72_Argument;                       // 0x18(0x19)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8965[0x7];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     RetVal;                                            // 0x38(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function EpicGamesEngine.EpicGames_Input_verse_ue_input_component._L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RRemoveAxisBinding_L_N_Kchar_R
struct UEpicGames_Input_verse_ue_input_component__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RRemoveAxisBinding_L_N_Kchar_R_Params
{
public:
	FVerseStringProperty_                        __verse_0xB2CDDD72_Argument;                       // 0x0(0x10)(Parm, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function EpicGamesEngine.EpicGames_Input_verse_ue_input_component._L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RRemoveActionMappingAndBinding_L_N_Kchar_M_Ninput__event_R
struct UEpicGames_Input_verse_ue_input_component__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RRemoveActionMappingAndBinding_L_N_Kchar_M_Ninput__event_R_Params
{
public:
	struct FTuple_L_Kchar_Minput__event_R        __verse_0xB2CDDD72_Argument;                       // 0x0(0x11)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8966[0x7];                                     // Fixing Size After Last Property..
	enum class EVerseTrue                        _InvokeSureResultDummy_0;                          // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8967[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_1;                                         // 0x20(0x10)(HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_2;                          // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8968[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_3;                                         // 0x38(0x10)(HasGetValueTypeHash)
	struct FTuple_L_Kchar_Minput__event_R        _ExprResult_4;                                     // 0x48(0x11)(HasGetValueTypeHash)
	uint8                                        Pad_8969[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function EpicGamesEngine.EpicGames_Input_verse_ue_input_component._L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RRemoveActionMapping_L_N_Kchar_R
struct UEpicGames_Input_verse_ue_input_component__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RRemoveActionMapping_L_N_Kchar_R_Params
{
public:
	FVerseStringProperty_                        __verse_0xB2CDDD72_Argument;                       // 0x0(0x10)(Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function EpicGamesEngine.EpicGames_Input_verse_ue_input_component._L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RRemoveActionBinding_L_N_Kchar_M_Ninput__event_R
struct UEpicGames_Input_verse_ue_input_component__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RRemoveActionBinding_L_N_Kchar_M_Ninput__event_R_Params
{
public:
	struct FTuple_L_Kchar_Minput__event_R        __verse_0xB2CDDD72_Argument;                       // 0x0(0x11)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_896A[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function EpicGamesEngine.EpicGames_Input_verse_ue_input_component._L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RGetAxisValue_L_N_Kchar_R
struct UEpicGames_Input_verse_ue_input_component__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RGetAxisValue_L_N_Kchar_R_Params
{
public:
	FVerseStringProperty_                        __verse_0xB2CDDD72_Argument;                       // 0x0(0x10)(Parm, HasGetValueTypeHash)
	double                                       RetVal;                                            // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x49 (0x49 - 0x0)
// Function EpicGamesEngine.EpicGames_Input_verse_ue_input_component._L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RClearInputMappingsAndBindings
struct UEpicGames_Input_verse_ue_input_component__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RClearInputMappingsAndBindings_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_0;                          // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_896B[0x6];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_1;                                         // 0x8(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_2;                                     // 0x18(0x1)(HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_3;                          // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_896C[0x6];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_4;                                         // 0x20(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_5;                                     // 0x30(0x1)(HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_6;                          // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_896D[0x6];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_7;                                         // 0x38(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_8;                                     // 0x48(0x1)(HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function EpicGamesEngine.EpicGames_Input_verse_ue_input_component._L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RClearInputBindings
struct UEpicGames_Input_verse_ue_input_component__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RClearInputBindings_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function EpicGamesEngine.EpicGames_Input_verse_ue_input_component._L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RClearAxisMappings
struct UEpicGames_Input_verse_ue_input_component__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RClearAxisMappings_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function EpicGamesEngine.EpicGames_Input_verse_ue_input_component._L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RClearActionMappings
struct UEpicGames_Input_verse_ue_input_component__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RClearActionMappings_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
};

// 0xF0 (0xF0 - 0x0)
// Function EpicGamesEngine.EpicGames_Input_verse_ue_input_component._L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddAxisMappingAndBinding_L_N_Kchar_M_N_Kchar_M_N_Kverse__key_M_N_Qfloat_M_N_Q_Lfloat_Tvoid_R_R
struct UEpicGames_Input_verse_ue_input_component__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddAxisMappingAndBinding_L_N_Kchar_M_N_Kchar_M_N_Kverse__key_M_N_Qfloat_M_N_Q_Lfloat_Tvoid_R_R_Params
{
public:
	struct FTuple_L_Kchar_M_Kchar_M_Kverse__key_M_Qfloat_M_Q_Lfloat_Tvoid_R_R __verse_0xB2CDDD72_Argument;                       // 0x0(0x58)(Parm, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_0;                          // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_896E[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_1;                                         // 0x60(0x10)(HasGetValueTypeHash)
	struct FTuple_L_Kchar_M_Kchar_M_Kverse__key_M_Qfloat_R _ExprResult_2;                                     // 0x70(0x40)(HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_3;                          // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_896F[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_4;                                         // 0xB8(0x10)(HasGetValueTypeHash)
	struct FTuple_L_Kchar_M_Q_Lfloat_Tvoid_R_R   _ExprResult_5;                                     // 0xC8(0x28)(HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function EpicGamesEngine.EpicGames_Input_verse_ue_input_component._L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddAxisMapping_L_N_Kchar_M_N_Kchar_M_N_Kverse__key_M_N_Qfloat_R
struct UEpicGames_Input_verse_ue_input_component__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddAxisMapping_L_N_Kchar_M_N_Kchar_M_N_Kverse__key_M_N_Qfloat_R_Params
{
public:
	struct FTuple_L_Kchar_M_Kchar_M_Kverse__key_M_Qfloat_R __verse_0xB2CDDD72_Argument;                       // 0x0(0x40)(Parm, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function EpicGamesEngine.EpicGames_Input_verse_ue_input_component._L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddAxisBinding_L_N_Kchar_M_N_Q_Lfloat_Tvoid_R_R
struct UEpicGames_Input_verse_ue_input_component__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddAxisBinding_L_N_Kchar_M_N_Q_Lfloat_Tvoid_R_R_Params
{
public:
	struct FTuple_L_Kchar_M_Q_Lfloat_Tvoid_R_R   __verse_0xB2CDDD72_Argument;                       // 0x0(0x28)(Parm, HasGetValueTypeHash)
};

// 0xD0 (0xD0 - 0x0)
// Function EpicGamesEngine.EpicGames_Input_verse_ue_input_component._L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddActionMappingAndBinding_L_N_Kchar_M_N_Kchar_M_N_Kverse__key_M_Ninput__event_M_Ntuple_L_R_Tvoid_R
struct UEpicGames_Input_verse_ue_input_component__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddActionMappingAndBinding_L_N_Kchar_M_N_Kchar_M_N_Kverse__key_M_Ninput__event_M_Ntuple_L_R_Tvoid_R_Params
{
public:
	struct FTuple_L_Kchar_M_Kchar_M_Kverse__key_Minput__event_Mtuple_L_R_Tvoid_R __verse_0xB2CDDD72_Argument;                       // 0x0(0x48)(Parm, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_0;                          // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8970[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_1;                                         // 0x50(0x10)(HasGetValueTypeHash)
	struct FTuple_L_Kchar_M_Kchar_M_Kverse__key_R _ExprResult_2;                                     // 0x60(0x30)(HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_3;                          // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8971[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_4;                                         // 0x98(0x10)(HasGetValueTypeHash)
	struct FTuple_L_Kchar_Minput__event_Mtuple_L_R_Tvoid_R _ExprResult_5;                                     // 0xA8(0x28)(HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function EpicGamesEngine.EpicGames_Input_verse_ue_input_component._L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddActionMapping_L_N_Kchar_M_N_Kchar_M_N_Kverse__key_R
struct UEpicGames_Input_verse_ue_input_component__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddActionMapping_L_N_Kchar_M_N_Kchar_M_N_Kverse__key_R_Params
{
public:
	struct FTuple_L_Kchar_M_Kchar_M_Kverse__key_R __verse_0xB2CDDD72_Argument;                       // 0x0(0x30)(Parm, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function EpicGamesEngine.EpicGames_Input_verse_ue_input_component._L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddActionBinding_L_N_Kchar_M_Ninput__event_M_Ntuple_L_R_Tvoid_R
struct UEpicGames_Input_verse_ue_input_component__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddActionBinding_L_N_Kchar_M_Ninput__event_M_Ntuple_L_R_Tvoid_R_Params
{
public:
	struct FTuple_L_Kchar_Minput__event_Mtuple_L_R_Tvoid_R __verse_0xB2CDDD72_Argument;                       // 0x0(0x28)(Parm, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function EpicGamesEngine.EpicGames_Input_verse_ue_input_component.$InitInstance
struct UEpicGames_Input_verse_ue_input_component__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function EpicGamesEngine.EpicGames_Input_verse_ue_input_component.$Block
struct UEpicGames_Input_verse_ue_input_component__Block_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function EpicGamesEngine.EpicGames_Input_verse_ue_input_component.$InitCDO
struct UEpicGames_Input_verse_ue_input_component__InitCDO_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function EpicGamesEngine.task_EpicGames_Input_verse_ue_input_component$WaitForAction_L_Nverse__ue__input__component_M_N_Kchar_M_Ninput__event_R.Update
struct UTask_EpicGames_Input_verse_ue_input_component_WaitForAction_L_Nverse__ue__input__component_M_N_Kchar_M_Ninput__event_R_Update_Params
{
public:
	int64                                        RetVal;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
