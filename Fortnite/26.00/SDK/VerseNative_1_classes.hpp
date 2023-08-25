#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// VerseClass VerseNative.$SolarisSignatureFunctionOuter
class U_SolarisSignatureFunctionOuter : public UObject
{
public:

	static class UClass* StaticClass();
	static class U_SolarisSignatureFunctionOuter* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// VerseClass VerseNative.Concurrency
class UConcurrency : public UObject
{
public:

	static class UClass* StaticClass();
	static class UConcurrency* GetDefaultObj();

	class UClass* _L_2fVerse_2eorg_2fConcurrency_N_Rtask_L_Nt_20where_20t_R(class UClass* __verse_0xB2CDDD72_Argument);
	class UClass* _L_2fVerse_2eorg_2fConcurrency_N_Rawaitable_L_Npayload_20where_20payload_R(class UClass* __verse_0xB2CDDD72_Argument);
	class UClass* _L_2fVerse_2eorg_2fConcurrency_N_Rawaitable(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0, FVerseFunctionProperty_ _Callee_1);
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseNative.Concurrency_awaitable
class UConcurrency_awaitable : public UObject
{
public:

	static class UClass* StaticClass();
	static class UConcurrency_awaitable* GetDefaultObj();

	class UConcurrency_task* Await(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
};

// 0x38 (0x60 - 0x28)
// VerseClass VerseNative.Concurrency_mind
class UConcurrency_mind : public UObject
{
public:
	FVerseFunctionProperty_                      __verse_0x54B91EA0__L_2fVerse_2eorg_2fConcurrency_2fmind_N_RGetNumActive; // 0x28(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xE74E38D8__L_2fVerse_2eorg_2fConcurrency_2fmind_N_RCancelAll; // 0x38(0x10)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_1B97[0x18];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UConcurrency_mind* GetDefaultObj();

	int64 _L_2fVerse_2eorg_2fConcurrency_2fmind_N_RGetNumActive(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fVerse_2eorg_2fConcurrency_2fmind_N_RCancelAll(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x118 (0x140 - 0x28)
// VerseClass VerseNative.Concurrency_task
class UConcurrency_task : public UObject
{
public:
	FVerseFunctionProperty_                      __verse_0xBD7FB920__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RActive; // 0x28(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x8F0684E8__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCompleted; // 0x38(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x5648DB9F__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCanceling; // 0x48(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x8F771AA8__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCanceled; // 0x58(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x2C6C9D8A__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RUnsettled; // 0x68(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xBB33978A__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RSettled; // 0x78(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x07A4A432__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RUninterrupted; // 0x88(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x2C72A17D__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RInterrupted; // 0x98(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xAFD0D344__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCancel; // 0xA8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x8DE7DBE5_Await;                          // 0xB8(0x10)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_1BC0[0x78];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UConcurrency_task* GetDefaultObj();

	FOptionalProperty_ _L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RUnsettled(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionalProperty_ _L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RUninterrupted(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionalProperty_ _L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RSettled(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionalProperty_ _L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RInterrupted(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionalProperty_ _L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCompleted(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionalProperty_ _L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCanceling(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionalProperty_ _L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCanceled(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCancel(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* Await(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionalProperty_ _L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RActive(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseNative.Native
class UNative : public UObject
{
public:

	static class UClass* StaticClass();
	static class UNative* GetDefaultObj();

	void _InitCDO();
};

// 0x20 (0x160 - 0x140)
// VerseClass VerseNative.task_Concurrency_awaitable$Await
class UTask_Concurrency_awaitable_Await : public UConcurrency_task
{
public:
	class UConcurrency_awaitable*                _Self;                                             // 0x140(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x148(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_1BC5[0x7];                                     // Fixing Size After Last Property 
	FVerseDynamicProperty_                       _RetVal;                                           // 0x150(0x10)(Parm, OutParm, ReturnParm, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTask_Concurrency_awaitable_Await* GetDefaultObj();

	int64 Update();
};

// 0x20 (0x160 - 0x140)
// VerseClass VerseNative.task_Concurrency_task$Await
class UTask_Concurrency_task_Await : public UConcurrency_task
{
public:
	class UConcurrency_task*                     _Self;                                             // 0x140(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x148(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_1BCE[0x7];                                     // Fixing Size After Last Property 
	FVerseDynamicProperty_                       _RetVal;                                           // 0x150(0x10)(Parm, OutParm, ReturnParm, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTask_Concurrency_task_Await* GetDefaultObj();

	int64 Update();
};

}


