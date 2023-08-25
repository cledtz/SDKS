#pragma once

// Dumped with Dumper-7!


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

	static class UClass* StaticClass();
	static class U_SolarisSignatureFunctionOuter* GetDefaultObj();

};

// 0x208 (0x648 - 0x440)
// VerseClass EpicGamesEngine.EpicGames_Input_verse_ue_input_component
class UEpicGames_Input_verse_ue_input_component : public UVerseUEInputComponentBase
{
public:
	uint8                                        Pad_5DC7[0x8];                                     // Fixing Size After Last Property 
	FVerseFunctionProperty_                      __verse_0xA0CE540B__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddActionMapping_L_N_Kchar_M_N_Kchar_M_N_Kverse__key_R; // 0x448(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x7C4A751D__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddActionBinding_L_N_Kchar_M_Ninput__event_M_Ntuple_L_R_Tvoid_R; // 0x458(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x90867C45__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddAxisMapping_L_N_Kchar_M_N_Kchar_M_N_Kverse__key_M_N_Qfloat_R; // 0x468(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xC0AAB7CB__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddAxisBinding_L_N_Kchar_M_N_Q_Lfloat_Tvoid_R_R; // 0x478(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xFA4BD56F__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RRemoveActionMapping_L_N_Kchar_R; // 0x488(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x6DA54EE3__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RRemoveActionBinding_L_N_Kchar_M_Ninput__event_R; // 0x498(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x983150DC__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RRemoveAxisBinding_L_N_Kchar_R; // 0x4A8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x35F32F07__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RClearActionMappings; // 0x4B8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x35A10119__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RClearAxisMappings; // 0x4C8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x961F7CD2__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RClearInputBindings; // 0x4D8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x84FE24F8__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RGetAxisValue_L_N_Kchar_R; // 0x4E8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x42760BD5_WaitForAction_L_Nverse__ue__input__component_M_N_Kchar_M_Ninput__event_R; // 0x4F8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x990BA955__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddActionMappingAndBinding_L_N_Kchar_M_N_Kchar_M_N_Kverse__key_M_Ninput__event_M_Ntuple_L_R_Tvoid_R; // 0x508(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xE39C826C__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RRemoveActionMappingAndBinding_L_N_Kchar_M_Ninput__event_R; // 0x518(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x2D555026__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddAxisMappingAndBinding_L_N_Kchar_M_N_Kchar_M_N_Kverse__key_M_N_Qfloat_M_N_Q_Lfloat_Tvoid_R_R; // 0x528(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xC3127334__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RClearInputMappingsAndBindings; // 0x538(0x10)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_5DCA[0x100];                                   // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UEpicGames_Input_verse_ue_input_component* GetDefaultObj();

	class UConcurrency_task* WaitForAction_L_Nverse__ue__input__component_M_N_Kchar_M_Ninput__event_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_Lverse__ue__input__component_M_Kchar_Minput__event_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RRemoveAxisBinding_L_N_Kchar_R(FVerseStringProperty_ __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RRemoveActionMappingAndBinding_L_N_Kchar_M_Ninput__event_R(const struct FTuple_L_Kchar_Minput__event_R& __verse_0xB2CDDD72_Argument, enum class EVerseTrue _InvokeSureResultDummy_0, FVerseFunctionProperty_ _Callee_1, enum class EVerseTrue _InvokeSureResultDummy_2, FVerseFunctionProperty_ _Callee_3, const struct FTuple_L_Kchar_Minput__event_R& _ExprResult_4, enum class EVerseTrue _InvokeSureResultDummy_5, FVerseFunctionProperty_ _Callee_6, enum class EVerseTrue _InvokeSureResultDummy_7, FVerseFunctionProperty_ _Callee_8, const struct FTuple_L_Kchar_Minput__event_R& _ExprResult_9);
	void _L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RRemoveActionMapping_L_N_Kchar_R(FVerseStringProperty_ __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RRemoveActionBinding_L_N_Kchar_M_Ninput__event_R(const struct FTuple_L_Kchar_Minput__event_R& __verse_0xB2CDDD72_Argument);
	double _L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RGetAxisValue_L_N_Kchar_R(FVerseStringProperty_ __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RClearInputMappingsAndBindings(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, enum class EVerseTrue _InvokeSureResultDummy_0, FVerseFunctionProperty_ _Callee_1, const struct FTuple_L_R& _ExprResult_2, enum class EVerseTrue _InvokeSureResultDummy_3, FVerseFunctionProperty_ _Callee_4, const struct FTuple_L_R& _ExprResult_5, enum class EVerseTrue _InvokeSureResultDummy_6, FVerseFunctionProperty_ _Callee_7, const struct FTuple_L_R& _ExprResult_8, enum class EVerseTrue _InvokeSureResultDummy_9, FVerseFunctionProperty_ _Callee_10, const struct FTuple_L_R& _ExprResult_11, enum class EVerseTrue _InvokeSureResultDummy_12, FVerseFunctionProperty_ _Callee_13, const struct FTuple_L_R& _ExprResult_14, enum class EVerseTrue _InvokeSureResultDummy_15, FVerseFunctionProperty_ _Callee_16, const struct FTuple_L_R& _ExprResult_17);
	void _L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RClearInputBindings(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RClearAxisMappings(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RClearActionMappings(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddAxisMappingAndBinding_L_N_Kchar_M_N_Kchar_M_N_Kverse__key_M_N_Qfloat_M_N_Q_Lfloat_Tvoid_R_R(const struct FTuple_L_Kchar_M_Kchar_M_Kverse__key_M_Qfloat_M_Q_Lfloat_Tvoid_R_R& __verse_0xB2CDDD72_Argument, enum class EVerseTrue _InvokeSureResultDummy_0, FVerseFunctionProperty_ _Callee_1, const struct FTuple_L_Kchar_M_Kchar_M_Kverse__key_M_Qfloat_R& _ExprResult_2, enum class EVerseTrue _InvokeSureResultDummy_3, FVerseFunctionProperty_ _Callee_4, const struct FTuple_L_Kchar_M_Q_Lfloat_Tvoid_R_R& _ExprResult_5, enum class EVerseTrue _InvokeSureResultDummy_6, FVerseFunctionProperty_ _Callee_7, const struct FTuple_L_Kchar_M_Kchar_M_Kverse__key_M_Qfloat_R& _ExprResult_8, enum class EVerseTrue _InvokeSureResultDummy_9, FVerseFunctionProperty_ _Callee_10, const struct FTuple_L_Kchar_M_Q_Lfloat_Tvoid_R_R& _ExprResult_11);
	void _L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddAxisMapping_L_N_Kchar_M_N_Kchar_M_N_Kverse__key_M_N_Qfloat_R(const struct FTuple_L_Kchar_M_Kchar_M_Kverse__key_M_Qfloat_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddAxisBinding_L_N_Kchar_M_N_Q_Lfloat_Tvoid_R_R(const struct FTuple_L_Kchar_M_Q_Lfloat_Tvoid_R_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddActionMappingAndBinding_L_N_Kchar_M_N_Kchar_M_N_Kverse__key_M_Ninput__event_M_Ntuple_L_R_Tvoid_R(const struct FTuple_L_Kchar_M_Kchar_M_Kverse__key_Minput__event_Mtuple_L_R_Tvoid_R& __verse_0xB2CDDD72_Argument, enum class EVerseTrue _InvokeSureResultDummy_0, FVerseFunctionProperty_ _Callee_1, const struct FTuple_L_Kchar_M_Kchar_M_Kverse__key_R& _ExprResult_2, enum class EVerseTrue _InvokeSureResultDummy_3, FVerseFunctionProperty_ _Callee_4, const struct FTuple_L_Kchar_Minput__event_Mtuple_L_R_Tvoid_R& _ExprResult_5, enum class EVerseTrue _InvokeSureResultDummy_6, FVerseFunctionProperty_ _Callee_7, const struct FTuple_L_Kchar_M_Kchar_M_Kverse__key_R& _ExprResult_8, enum class EVerseTrue _InvokeSureResultDummy_9, FVerseFunctionProperty_ _Callee_10, const struct FTuple_L_Kchar_Minput__event_Mtuple_L_R_Tvoid_R& _ExprResult_11);
	void _L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddActionMapping_L_N_Kchar_M_N_Kchar_M_N_Kverse__key_R(const struct FTuple_L_Kchar_M_Kchar_M_Kverse__key_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddActionBinding_L_N_Kchar_M_Ninput__event_M_Ntuple_L_R_Tvoid_R(const struct FTuple_L_Kchar_Minput__event_Mtuple_L_R_Tvoid_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x28 (0x168 - 0x140)
// VerseClass EpicGamesEngine.task_EpicGames_Input_verse_ue_input_component$WaitForAction_L_Nverse__ue__input__component_M_N_Kchar_M_Ninput__event_R
class UTask_EpicGames_Input_verse_ue_input_component_WaitForAction_L_Nverse__ue__input__component_M_N_Kchar_M_Ninput__event_R : public UConcurrency_task
{
public:
	class UEpicGames_Input_verse_ue_input_component* _Self;                                             // 0x140(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_Lverse__ue__input__component_M_Kchar_Minput__event_R __verse_0xB2CDDD72_Argument;                       // 0x148(0x19)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_5DCF[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UTask_EpicGames_Input_verse_ue_input_component_WaitForAction_L_Nverse__ue__input__component_M_N_Kchar_M_Ninput__event_R* GetDefaultObj();

	int64 Update();
};

}


