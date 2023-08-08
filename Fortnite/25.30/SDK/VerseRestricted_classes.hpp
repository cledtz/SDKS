#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// VerseClass VerseRestricted.$SolarisSignatureFunctionOuter
class U_SolarisSignatureFunctionOuter : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("$SolarisSignatureFunctionOuter");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// VerseClass VerseRestricted.Restricted
class URestricted : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Restricted");
		return Clss;
	}

	class UClass* _L_2fVerse_2eorg_2fRestricted_N_Rsticky__event_L_Nt_20where_20t_R(class UClass* __verse_0xB2CDDD72_Argument);
	class UClass* _L_2fVerse_2eorg_2fRestricted_N_Rsticky__event(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0);
	void _InitCDO();
};

// 0x90 (0xB8 - 0x28)
// VerseClass VerseRestricted.Restricted_sticky_event
class URestricted_sticky_event : public UObject
{
public:
	FVerseFunctionProperty_                      __verse_0xA811AC9B__L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RIsSignaled; // 0x28(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xB0B89381__L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RClearSignal; // 0x38(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xE92C69BE__L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RGetAwaitCount; // 0x48(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x319692B4__L_2fVerse_2eorg_2fVerse_2fsignalable_2fsignalable_Lpayload_R_N_RSignal_L_Npayload_R; // 0x58(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x8DE7DBE5_Await;                          // 0x68(0x10)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_65A2[0x40];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Restricted_sticky_event");
		return Clss;
	}

	void _L_2fVerse_2eorg_2fVerse_2fsignalable_2fsignalable_Lpayload_R_N_RSignal_L_Npayload_R(FVerseDynamicProperty_ __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RIsSignaled(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	int64 _L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RGetAwaitCount(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RClearSignal(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* Await(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x20 (0x170 - 0x150)
// VerseClass VerseRestricted.task_Restricted_sticky_event$Await
class UTask_Restricted_sticky_event_Await : public UConcurrency_task
{
public:
	class URestricted_sticky_event*              _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_65A5[0x7];                                     // Fixing Size After Last Property
	FVerseDynamicProperty_                       _RetVal;                                           // 0x160(0x10)(Parm, OutParm, ReturnParm, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_Restricted_sticky_event$Await");
		return Clss;
	}

	int64 Update();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
