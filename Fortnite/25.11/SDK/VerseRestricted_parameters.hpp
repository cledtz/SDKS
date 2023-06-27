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
// Function VerseRestricted.Restricted._L_2fVerse_2eorg_2fRestricted_N_Rsticky__event_L_Ntype_R
struct URestricted__L_2fVerse_2eorg_2fRestricted_N_Rsticky__event_L_Ntype_R_Params
{
public:
	class UClass*                                __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                RetVal;                                            // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function VerseRestricted.Restricted._L_2fVerse_2eorg_2fRestricted_N_Rsticky__event
struct URestricted__L_2fVerse_2eorg_2fRestricted_N_Rsticky__event_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8A02[0x7];                                     // Fixing Size After Last Property..
	class UClass*                                RetVal;                                            // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_0;                                         // 0x10(0x10)(HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VerseRestricted.Restricted.$InitCDO
struct URestricted__InitCDO_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function VerseRestricted.Restricted_sticky_event._L_2fVerse_2eorg_2fVerse_2fsignalable_2fsignalable_Lpayload_R_N_RSignal_L_Npayload_R
struct URestricted_sticky_event__L_2fVerse_2eorg_2fVerse_2fsignalable_2fsignalable_Lpayload_R_N_RSignal_L_Npayload_R_Params
{
public:
	FVerseDynamicProperty_                       __verse_0xB2CDDD72_Argument;                       // 0x0(0x10)(Parm, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function VerseRestricted.Restricted_sticky_event._L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RIsSignaled
struct URestricted_sticky_event__L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RIsSignaled_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x1(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseRestricted.Restricted_sticky_event._L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RGetAwaitCount
struct URestricted_sticky_event__L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RGetAwaitCount_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8A03[0x7];                                     // Fixing Size After Last Property..
	int64                                        RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function VerseRestricted.Restricted_sticky_event._L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RClearSignal
struct URestricted_sticky_event__L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RClearSignal_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function VerseRestricted.Restricted_sticky_event.Await
struct URestricted_sticky_event_Await_Params
{
public:
	class UConcurrency_task*                     __verse_0xC1E81372_CallingTask;                    // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int64                                        __verse_0xA3A00DDB_CallerResumeState;              // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x2AC0E4D8_CallerCancelState;              // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x18(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8A04[0x7];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     RetVal;                                            // 0x20(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VerseRestricted.Restricted_sticky_event.$InitInstance
struct URestricted_sticky_event__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseRestricted.Restricted_sticky_event.$Block
struct URestricted_sticky_event__Block_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseRestricted.Restricted_sticky_event.$InitCDO
struct URestricted_sticky_event__InitCDO_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function VerseRestricted.task_Restricted_sticky_event$Await.Update
struct UTask_Restricted_sticky_event_Await_Update_Params
{
public:
	int64                                        RetVal;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
