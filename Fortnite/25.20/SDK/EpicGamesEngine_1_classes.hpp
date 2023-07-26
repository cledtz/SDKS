#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// VerseClass EpicGamesEngine.$SolarisSignatureFunctionOuter
class U_SolarisSignatureFunctionOuter : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("$SolarisSignatureFunctionOuter");
		return Clss;
	}

};

// 0x1F8 (0x650 - 0x458)
// VerseClass EpicGamesEngine.EpicGames_Input_verse_ue_input_component
class UEpicGames_Input_verse_ue_input_component : public UVerseUEInputComponentBase
{
public:
	uint8                                        Pad_8B15[0x8];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      __verse_0xA0CE540B__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddActionMapping_L_N_Kchar_M_N_Kchar_M_N_Kverse__key_R; // 0x460(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x7C4A751D__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddActionBinding_L_N_Kchar_M_Ninput__event_M_Ntuple_L_R_Tvoid_R; // 0x470(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x90867C45__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddAxisMapping_L_N_Kchar_M_N_Kchar_M_N_Kverse__key_M_N_Qfloat_R; // 0x480(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xC0AAB7CB__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddAxisBinding_L_N_Kchar_M_N_Q_Lfloat_Tvoid_R_R; // 0x490(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xFA4BD56F__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RRemoveActionMapping_L_N_Kchar_R; // 0x4A0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x6DA54EE3__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RRemoveActionBinding_L_N_Kchar_M_Ninput__event_R; // 0x4B0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x983150DC__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RRemoveAxisBinding_L_N_Kchar_R; // 0x4C0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x35F32F07__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RClearActionMappings; // 0x4D0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x35A10119__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RClearAxisMappings; // 0x4E0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x961F7CD2__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RClearInputBindings; // 0x4F0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x84FE24F8__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RGetAxisValue_L_N_Kchar_R; // 0x500(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x42760BD5_WaitForAction_L_Nverse__ue__input__component_M_N_Kchar_M_Ninput__event_R; // 0x510(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x990BA955__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddActionMappingAndBinding_L_N_Kchar_M_N_Kchar_M_N_Kverse__key_M_Ninput__event_M_Ntuple_L_R_Tvoid_R; // 0x520(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xE39C826C__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RRemoveActionMappingAndBinding_L_N_Kchar_M_Ninput__event_R; // 0x530(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x2D555026__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddAxisMappingAndBinding_L_N_Kchar_M_N_Kchar_M_N_Kverse__key_M_N_Qfloat_M_N_Q_Lfloat_Tvoid_R_R; // 0x540(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xC3127334__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RClearInputMappingsAndBindings; // 0x550(0x10)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_8B16[0xF0];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EpicGames_Input_verse_ue_input_component");
		return Clss;
	}

	class UConcurrency_task* WaitForAction_L_Nverse__ue__input__component_M_N_Kchar_M_Ninput__event_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_Lverse__ue__input__component_M_Kchar_Minput__event_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RRemoveAxisBinding_L_N_Kchar_R(FVerseStringProperty_ __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RRemoveActionMappingAndBinding_L_N_Kchar_M_Ninput__event_R(const struct FTuple_L_Kchar_Minput__event_R& __verse_0xB2CDDD72_Argument, enum class EVerseTrue _InvokeSureResultDummy_0, FVerseFunctionProperty_ _Callee_1, enum class EVerseTrue _InvokeSureResultDummy_2, FVerseFunctionProperty_ _Callee_3, const struct FTuple_L_Kchar_Minput__event_R& _ExprResult_4);
	void _L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RRemoveActionMapping_L_N_Kchar_R(FVerseStringProperty_ __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RRemoveActionBinding_L_N_Kchar_M_Ninput__event_R(const struct FTuple_L_Kchar_Minput__event_R& __verse_0xB2CDDD72_Argument);
	double _L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RGetAxisValue_L_N_Kchar_R(FVerseStringProperty_ __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RClearInputMappingsAndBindings(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, enum class EVerseTrue _InvokeSureResultDummy_0, FVerseFunctionProperty_ _Callee_1, const struct FTuple_L_R& _ExprResult_2, enum class EVerseTrue _InvokeSureResultDummy_3, FVerseFunctionProperty_ _Callee_4, const struct FTuple_L_R& _ExprResult_5, enum class EVerseTrue _InvokeSureResultDummy_6, FVerseFunctionProperty_ _Callee_7, const struct FTuple_L_R& _ExprResult_8);
	void _L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RClearInputBindings(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RClearAxisMappings(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RClearActionMappings(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddAxisMappingAndBinding_L_N_Kchar_M_N_Kchar_M_N_Kverse__key_M_N_Qfloat_M_N_Q_Lfloat_Tvoid_R_R(const struct FTuple_L_Kchar_M_Kchar_M_Kverse__key_M_Qfloat_M_Q_Lfloat_Tvoid_R_R& __verse_0xB2CDDD72_Argument, enum class EVerseTrue _InvokeSureResultDummy_0, FVerseFunctionProperty_ _Callee_1, const struct FTuple_L_Kchar_M_Kchar_M_Kverse__key_M_Qfloat_R& _ExprResult_2, enum class EVerseTrue _InvokeSureResultDummy_3, FVerseFunctionProperty_ _Callee_4, const struct FTuple_L_Kchar_M_Q_Lfloat_Tvoid_R_R& _ExprResult_5);
	void _L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddAxisMapping_L_N_Kchar_M_N_Kchar_M_N_Kverse__key_M_N_Qfloat_R(const struct FTuple_L_Kchar_M_Kchar_M_Kverse__key_M_Qfloat_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddAxisBinding_L_N_Kchar_M_N_Q_Lfloat_Tvoid_R_R(const struct FTuple_L_Kchar_M_Q_Lfloat_Tvoid_R_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddActionMappingAndBinding_L_N_Kchar_M_N_Kchar_M_N_Kverse__key_M_Ninput__event_M_Ntuple_L_R_Tvoid_R(const struct FTuple_L_Kchar_M_Kchar_M_Kverse__key_Minput__event_Mtuple_L_R_Tvoid_R& __verse_0xB2CDDD72_Argument, enum class EVerseTrue _InvokeSureResultDummy_0, FVerseFunctionProperty_ _Callee_1, const struct FTuple_L_Kchar_M_Kchar_M_Kverse__key_R& _ExprResult_2, enum class EVerseTrue _InvokeSureResultDummy_3, FVerseFunctionProperty_ _Callee_4, const struct FTuple_L_Kchar_Minput__event_Mtuple_L_R_Tvoid_R& _ExprResult_5);
	void _L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddActionMapping_L_N_Kchar_M_N_Kchar_M_N_Kverse__key_R(const struct FTuple_L_Kchar_M_Kchar_M_Kverse__key_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddActionBinding_L_N_Kchar_M_Ninput__event_M_Ntuple_L_R_Tvoid_R(const struct FTuple_L_Kchar_Minput__event_Mtuple_L_R_Tvoid_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x28 (0x178 - 0x150)
// VerseClass EpicGamesEngine.task_EpicGames_Input_verse_ue_input_component$WaitForAction_L_Nverse__ue__input__component_M_N_Kchar_M_Ninput__event_R
class UTask_EpicGames_Input_verse_ue_input_component_WaitForAction_L_Nverse__ue__input__component_M_N_Kchar_M_Ninput__event_R : public UConcurrency_task
{
public:
	class UEpicGames_Input_verse_ue_input_component* _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_Lverse__ue__input__component_M_Kchar_Minput__event_R __verse_0xB2CDDD72_Argument;                       // 0x158(0x19)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8B17[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_EpicGames_Input_verse_ue_input_component$WaitForAction_L_Nverse__ue__input__component_M_N_Kchar_M_Ninput__event_R");
		return Clss;
	}

	int64 Update();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
