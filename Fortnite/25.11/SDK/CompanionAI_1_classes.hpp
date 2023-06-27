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
// VerseClass CompanionAI.$SolarisSignatureFunctionOuter
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
// VerseClass CompanionAI.CompanionAI
class UCompanionAI : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CompanionAI");
		return Clss;
	}

	FOptionProperty_ _L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eIsBeingDBNOCarried_U_L_Nfort__character_M_Ntuple_L_R_R(const struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	TArray<class USimulation_agent*> _L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetTeamMembers_U_L_Nagent_M_Ntuple_L_R_R(const struct FTuple_Lagent_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	struct FTuple_Lfloat_Mfloat_R _L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetNPCLeashRadius_U_L_Nfort__character_M_Ntuple_L_R_R(const struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetFortPing_U_L_Nfort__character_M_Ntuple_L_R_R(const struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetFortBRCreatureActions_U_L_Nfort__character_M_Ntuple_L_R_R(const struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetFortBRCharacterActions_U_L_Nfort__character_M_Ntuple_L_R_R(const struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetAgent_U_L_Nentity_M_Ntuple_L_R_R(const struct FTuple_Lentity_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	FVerseStringProperty_ _L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R(enum class ECompanionAI_PingCommand_entity_type __verse_0xB2CDDD72_Argument, FVerseDynamicProperty_ InvokeResultDummy_0, FOptionProperty_ _ExprResultStack_1, FVerseDynamicProperty_ _ExprResult_2, FVerseDynamicProperty_ _ExprResult_3, FVerseDynamicProperty_ InvokeResultDummy_4, FOptionProperty_ _ExprResultStack_5, FVerseDynamicProperty_ _ExprResult_6, FVerseDynamicProperty_ _ExprResult_7, FVerseDynamicProperty_ InvokeResultDummy_8, FOptionProperty_ _ExprResultStack_9, FVerseDynamicProperty_ _ExprResult_10, FVerseDynamicProperty_ _ExprResult_11, FVerseDynamicProperty_ InvokeResultDummy_12, FOptionProperty_ _ExprResultStack_13, FVerseDynamicProperty_ _ExprResult_14, FVerseDynamicProperty_ _ExprResult_15, FVerseDynamicProperty_ InvokeResultDummy_16, FOptionProperty_ _ExprResultStack_17, FVerseDynamicProperty_ _ExprResult_18, FVerseDynamicProperty_ _ExprResult_19, FVerseDynamicProperty_ InvokeResultDummy_20, FOptionProperty_ _ExprResultStack_21, FVerseDynamicProperty_ _ExprResult_22, FVerseDynamicProperty_ _ExprResult_23);
	FVerseStringProperty_ _L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R(enum class ECompanionAI_PingCommand_command_type __verse_0xB2CDDD72_Argument, FVerseDynamicProperty_ InvokeResultDummy_0, FOptionProperty_ _ExprResultStack_1, FVerseDynamicProperty_ _ExprResult_2, FVerseDynamicProperty_ _ExprResult_3, FVerseDynamicProperty_ InvokeResultDummy_4, FOptionProperty_ _ExprResultStack_5, FVerseDynamicProperty_ _ExprResult_6, FVerseDynamicProperty_ _ExprResult_7, FVerseDynamicProperty_ InvokeResultDummy_8, FOptionProperty_ _ExprResultStack_9, FVerseDynamicProperty_ _ExprResult_10, FVerseDynamicProperty_ _ExprResult_11, FVerseDynamicProperty_ InvokeResultDummy_12, FOptionProperty_ _ExprResultStack_13, FVerseDynamicProperty_ _ExprResult_14, FVerseDynamicProperty_ _ExprResult_15, FVerseDynamicProperty_ InvokeResultDummy_16, FOptionProperty_ _ExprResultStack_17, FVerseDynamicProperty_ _ExprResult_18, FVerseDynamicProperty_ _ExprResult_19);
	uint8 _L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RCompare_L_Nfort__obstacle__info_M_Nentity_R(const struct FTuple_Lfort__obstacle__info_Mentity_R& __verse_0xB2CDDD72_Argument);
	struct FCompanionAI_ping_info CompanionAI_ping_info_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap);
	struct FCompanionAI_ping_info CompanionAI_ping_info_Factory();
	void _InitCDO();
};

// 0x68 (0x150 - 0xE8)
// VerseClass CompanionAI.CompanionAI_companion_ai
class UCompanionAI_companion_ai : public UVerseAIBase_ai_behavior
{
public:
	class UDiagnostics_log*                      __verse_0xF524C2AC_Logger;                         // 0xE8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDiagnostics_debug_draw*               __verse_0x8E43B8AF_DebugDraw;                      // 0xF0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint8                                        __verse_0x4222121E_DebugDisplay : 1;               // Mask: 0x1, PropSize: 0x10xF8(0x1)(InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_48E : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8AB1[0x7];                                     // Fixing Size After Last Property..
	struct FColors_color                         __verse_0x71320F52_DebugScreenColor;               // 0x100(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	double                                       __verse_0x2D4D6684_DebugScreenDuration;            // 0x118(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __verse_0x5155C58D_GoToLeashDistance;              // 0x120(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __verse_0x4D92C49B_GoToAttackTargetDistance;       // 0x128(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __verse_0x8D041DAB_HoldPositionLeashDistance;      // 0x130(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __verse_0x5EF17E77_BackToMeMovementThreshold;      // 0x138(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __verse_0x80F3C16A_ReviveDistance;                 // 0x140(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __verse_0x53BD03B7_AttackCommand_TargetProximityRadius; // 0x148(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CompanionAI_companion_ai");
		return Clss;
	}

	class UConcurrency_task* OnBegin(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO(class UDiagnostics_log* _ExprResult_0, uint64 _InstancingGraph_1, class UDiagnostics_debug_draw* _ExprResult_2, uint64 _InstancingGraph_3);
};

// 0x2A0 (0x2C8 - 0x28)
// VerseClass CompanionAI.CompanionAI_companion_ai_runtime
class UCompanionAI_companion_ai_runtime : public UObject
{
public:
	class UCompanionAI_companion_ai*             __verse_0xF8ADD547_CompanionAIScript;              // 0x28(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                               __verse_0x963EC691_Character;                      // 0x30(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                               __verse_0xD2827887_Navigatable;                    // 0x38(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                               __verse_0x47B0B441_CharacterMovement;              // 0x40(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                               __verse_0xA4160F11_Leashable;                      // 0x48(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                               __verse_0x3FE20196_FortPing;                       // 0x50(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                               __verse_0x03CEBA4E_CharacterActions;               // 0x58(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                               __verse_0x6F5C8C64_FocusInterface;                 // 0x60(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                               __verse_0xF161303F_WeaponActions;                  // 0x68(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                               __verse_0x0F05355D_ThreatPerception;               // 0x70(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                               __verse_0x00C33D6C_ObstaclePerception;             // 0x78(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                               __verse_0x27386837_TargetSelection;                // 0x80(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xCD79BE49_CheckForReviveTeamMembers_L_Nping__info_R; // 0x88(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xFD71F6F9_CrouchService;                  // 0x98(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x42EEAE4C_CrouchUntilHit;                 // 0xA8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x4611DC7E_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R; // 0xB8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xAAC24BD9_GameLoop;                       // 0xC8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x48CFCF8A_GetAttackCommandTarget_L_Nping__info_R; // 0xD8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x0C45B447_GetNewObstacle;                 // 0xE8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x2E34E338_GetNewTargetPerception;         // 0xF8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x0CD61383_GetNewThreat;                   // 0x108(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x8CAF1B4F_GetObstacle;                    // 0x118(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x088B6B1E_GetThreat;                      // 0x128(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x55602A55_GoToAndAttackTask_L_Nfort__threat__info_R; // 0x138(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x0F435CCE_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R; // 0x148(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xCDB7A2EB_HandleBackToMeCommand_L_Nping__info_R; // 0x158(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xA6BE52A1_HandleGoTo_L_Nping__info_R;     // 0x168(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xDA8C4382_HandleGoToCommand_L_Nping__info_R; // 0x178(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x732222FF_HandleHoldPositionCommand_L_Nping__info_R; // 0x188(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x598CA1A6_HandleNPCCommand_L_Nping__info_R; // 0x198(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x78DA6F4F_HandleObstacleService_L_N_Qentity_R; // 0x1A8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x76F49D7B_HandleReviveCommand_L_Nping__info_R; // 0x1B8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x20C82F48__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_RLogAndDisplayOnScreen_L_N_Kchar_R; // 0x1C8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xB0983B50_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R; // 0x1D8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x62AFAEFE_LookAtOrAttackTarget;           // 0x1E8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x3F6E3D53_LookAtThreatTask;               // 0x1F8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x4E82FBC7__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnConverted; // 0x208(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x4F101C14__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnConverted0_L_Nany_R_Nvoid; // 0x218(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xC0C030F4__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnUnconverted; // 0x228(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x0831C861__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnUnconverted1_L_Nany_R_Nvoid; // 0x238(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x46368FA8_ReviveCommand_L_Nagent_R;       // 0x248(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x0E35E3BF_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R; // 0x258(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xDBC1E5D6_ShootTargetService_L_Nfloat_R;  // 0x268(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xED5B1563_SprintService;                  // 0x278(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x10E1DFC8_TacticalSprintService;          // 0x288(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x3BF1C327_WaitForDamageService;           // 0x298(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x1866443D_WaitForTargetInVehicleService_L_Nfort__character_R; // 0x2A8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xDCDE9DD2_WaitForTargetMovementService_L_Nfort__character_M_Nfloat_R; // 0x2B8(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CompanionAI_companion_ai_runtime");
		return Clss;
	}

	class UConcurrency_task* WaitForTargetMovementService_L_Nfort__character_M_Nfloat_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_Lfort__character_Mfloat_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* WaitForTargetInVehicleService_L_Nfort__character_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, class UObject* __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* WaitForDamageService(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* TacticalSprintService(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* SprintService(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* ShootTargetService_L_Nfloat_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, double __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_Lvector3_Mfloat_Magent_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* ReviveCommand_L_Nagent_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, class USimulation_agent* __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnUnconverted1_L_Nany_R_Nvoid(FVerseDynamicProperty_ __verse_0xB2CDDD72_Argument, enum class EVerseTrue _InvokeSureResultDummy_0, FVerseFunctionProperty_ _Callee_1, const struct FTuple_L_R& _ExprResult_2);
	void _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnUnconverted(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, class UObject* __verse_0x00000000__1, enum class EVerseTrue _InvokeSureResultDummy_0, FVerseFunctionProperty_ _Callee_1);
	void _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnConverted0_L_Nany_R_Nvoid(FVerseDynamicProperty_ __verse_0xB2CDDD72_Argument, enum class EVerseTrue _InvokeSureResultDummy_0, FVerseFunctionProperty_ _Callee_1, const struct FTuple_L_R& _ExprResult_2);
	void _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnConverted(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, class UObject* __verse_0x00000000__1, enum class EVerseTrue _InvokeSureResultDummy_0, FVerseFunctionProperty_ _Callee_1);
	class UConcurrency_task* LookAtThreatTask(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* LookAtOrAttackTarget(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_Lvector3_Mfloat_Mfloat_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_RLogAndDisplayOnScreen_L_N_Kchar_R(FVerseStringProperty_ __verse_0xB2CDDD72_Argument, FOptionProperty_ _ExprResultStack_0, class UDiagnostics_log* __verse_0x00000000__2, enum class EVerseTrue _InvokeSureResultDummy_1, FVerseFunctionProperty_ _Callee_2, const struct FTuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R& _ExprResult_3, FOptionProperty_ _ExprResult_4, enum class EVerseTrue _InvokeSureResultDummy_5, FVerseFunctionProperty_ _Callee_6, const struct FTuple_L_Kchar_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R& _ExprResult_7, const struct FTuple_L_Kchar_M_QColor_Ncolor_M_QDuration_Nfloat_R& __verse_0x00000000__3, FOptionProperty_ _ExprResult_8, FOptionProperty_ _ExprResult_9, FVerseStringProperty_ _ExprResultDummy_10);
	class UConcurrency_task* HandleReviveCommand_L_Nping__info_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FCompanionAI_ping_info& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* HandleObstacleService_L_N_Qentity_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, FOptionProperty_ __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* HandleNPCCommand_L_Nping__info_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FCompanionAI_ping_info& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* HandleHoldPositionCommand_L_Nping__info_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FCompanionAI_ping_info& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* HandleGoToCommand_L_Nping__info_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FCompanionAI_ping_info& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* HandleGoTo_L_Nping__info_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FCompanionAI_ping_info& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* HandleBackToMeCommand_L_Nping__info_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FCompanionAI_ping_info& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* GoToAndAttackTask_L_Nfort__threat__info_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FVerseAIBase_fort_threat_info& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* GetThreat(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* GetObstacle(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* GetNewThreat(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* GetNewTargetPerception(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* GetNewObstacle(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* GetAttackCommandTarget_L_Nping__info_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FCompanionAI_ping_info& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* GameLoop(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_Lvector3_Mfloat_Mcolor_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* CrouchUntilHit(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* CrouchService(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* CheckForReviveTeamMembers_L_Nping__info_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FCompanionAI_ping_info& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x60 (0x148 - 0xE8)
// VerseClass CompanionAI.CompanionAI_companion_creature
class UCompanionAI_companion_creature : public UVerseAIBase_ai_behavior
{
public:
	class UDiagnostics_log*                      __verse_0xF524C2AC_Logger;                         // 0xE8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDiagnostics_debug_draw*               __verse_0x8E43B8AF_DebugDraw;                      // 0xF0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint8                                        __verse_0x4222121E_DebugDisplay : 1;               // Mask: 0x1, PropSize: 0x10xF8(0x1)(InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_48F : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8ACF[0x7];                                     // Fixing Size After Last Property..
	struct FColors_color                         __verse_0x71320F52_DebugScreenColor;               // 0x100(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	double                                       __verse_0x2D4D6684_DebugScreenDuration;            // 0x118(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __verse_0x474367D7_EngageThreatsWithinDistance;    // 0x120(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x4611DC7E_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R; // 0x128(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xA3816CC6__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_RLogAndDisplayOnScreen_L_N_Kchar_R; // 0x138(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CompanionAI_companion_creature");
		return Clss;
	}

	class UConcurrency_task* OnBegin(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_RLogAndDisplayOnScreen_L_N_Kchar_R(FVerseStringProperty_ __verse_0xB2CDDD72_Argument, FOptionProperty_ _ExprResultStack_0, class UDiagnostics_log* __verse_0x00000000__2, enum class EVerseTrue _InvokeSureResultDummy_1, FVerseFunctionProperty_ _Callee_2, const struct FTuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R& _ExprResult_3, FOptionProperty_ _ExprResult_4, enum class EVerseTrue _InvokeSureResultDummy_5, FVerseFunctionProperty_ _Callee_6, const struct FTuple_L_Kchar_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R& _ExprResult_7, const struct FTuple_L_Kchar_M_QColor_Ncolor_M_QDuration_Nfloat_R& __verse_0x00000000__3, FOptionProperty_ _ExprResult_8, FOptionProperty_ _ExprResult_9, FVerseStringProperty_ _ExprResultDummy_10);
	class UConcurrency_task* DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_Lvector3_Mfloat_Mcolor_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO(class UDiagnostics_log* _ExprResult_0, uint64 _InstancingGraph_1, class UDiagnostics_debug_draw* _ExprResult_2, uint64 _InstancingGraph_3);
};

// 0xC8 (0xF0 - 0x28)
// VerseClass CompanionAI.CompanionAI_companion_creature_runtime
class UCompanionAI_companion_creature_runtime : public UObject
{
public:
	class UCompanionAI_companion_creature*       __verse_0xF685FDC9_Creature;                       // 0x28(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                               __verse_0x963EC691_Character;                      // 0x30(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                               __verse_0xD2827887_Navigatable;                    // 0x38(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGame_Abilities_ability_component*     __verse_0x8FB74E85_AbilitySystemComponent;         // 0x40(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                               __verse_0xDE2F615F_Perception;                     // 0x48(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                               __verse_0xE91D96EF_Actions;                        // 0x50(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0xBD80729A_CurrentTarget;                  // 0x58(0x8)(ZeroConstructor, InstancedReference, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x22D4220B_ActivateAbilityWhenCloseEnough_L_Nagent_M_Ngameplay__ability__asset_M_Nfloat_M_Nfloat_R; // 0x60(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xF46B70E4_DetectMovement_L_Nvector3_M_Nagent_M_Nfloat_R; // 0x70(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x91032A84_DetectNewTarget;                // 0x80(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xF1F2D599_EngageTarget_L_Nagent_M_Ngameplay__ability__asset_R; // 0x90(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xAAC24BD9_GameLoop;                       // 0xA0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x445D2529__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature__runtime_N_RLogAndDisplayOnScreen_L_N_Kchar_R; // 0xB0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x897BD040_LookAtLKP_L_Nagent_R;           // 0xC0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xC66530C3_PatrolAround;                   // 0xD0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x91E7016C_SeekLKP_L_Nagent_M_Nfloat_R;    // 0xE0(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CompanionAI_companion_creature_runtime");
		return Clss;
	}

	class UConcurrency_task* SeekLKP_L_Nagent_M_Nfloat_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_Lagent_Mfloat_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* PatrolAround(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* LookAtLKP_L_Nagent_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, class USimulation_agent* __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature__runtime_N_RLogAndDisplayOnScreen_L_N_Kchar_R(FVerseStringProperty_ __verse_0xB2CDDD72_Argument, class UCompanionAI_companion_creature* __verse_0x00000000__1, enum class EVerseTrue _InvokeSureResultDummy_0, FVerseFunctionProperty_ _Callee_1);
	class UConcurrency_task* GameLoop(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* EngageTarget_L_Nagent_M_Ngameplay__ability__asset_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_Lagent_Mgameplay__ability__asset_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* DetectNewTarget(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* DetectMovement_L_Nvector3_M_Nagent_M_Nfloat_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_Lvector3_Magent_Mfloat_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* ActivateAbilityWhenCloseEnough_L_Nagent_M_Ngameplay__ability__asset_M_Nfloat_M_Nfloat_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_Lagent_Mgameplay__ability__asset_Mfloat_Mfloat_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO(FOptionProperty_ _ExprResult_0, FOptionProperty_ __verse_0x00000000__1, uint8 _ExprResult_1, FOptionProperty_ _ExprResultStack_2);
};

// 0x0 (0xE8 - 0xE8)
// VerseClass CompanionAI.CompanionAI_default_ai_behavior
class UCompanionAI_default_ai_behavior : public UVerseAIBase_ai_behavior
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CompanionAI_default_ai_behavior");
		return Clss;
	}

	class UConcurrency_task* OnBegin(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass CompanionAI.CompanionAI_fort_br_character_actions_interface
class UCompanionAI_fort_br_character_actions_interface : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CompanionAI_fort_br_character_actions_interface");
		return Clss;
	}

	class UConcurrency_task* RunDefaultBehavior(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	uint8 _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__br__character__actions__interface_N_RIsFollowingBehaviorEnabled(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
};

// 0x0 (0x28 - 0x28)
// VerseClass CompanionAI.CompanionAI_fort_br_creature_actions_interface
class UCompanionAI_fort_br_creature_actions_interface : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CompanionAI_fort_br_creature_actions_interface");
		return Clss;
	}

	class UConcurrency_task* RunDefaultBehavior(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
};

// 0x10 (0x138 - 0x128)
// VerseClass CompanionAI.CompanionAI_fort_creature_component
class UCompanionAI_fort_creature_component : public UVerseCreature_creature_component
{
public:
	FVerseFunctionProperty_                      __verse_0xECDDAB04_RunDefaultBehavior;             // 0x128(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CompanionAI_fort_creature_component");
		return Clss;
	}

	class UConcurrency_task* RunDefaultBehavior(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x20 (0x248 - 0x228)
// VerseClass CompanionAI.CompanionAI_fort_npc_component
class UCompanionAI_fort_npc_component : public UVerseNPC_npc_component
{
public:
	FVerseFunctionProperty_                      __verse_0xECDDAB04_RunDefaultBehavior;             // 0x228(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x290D45C4__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__br__character__actions__interface_N_RIsFollowingBehaviorEnabled; // 0x238(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CompanionAI_fort_npc_component");
		return Clss;
	}

	class UConcurrency_task* RunDefaultBehavior(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	uint8 _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__br__character__actions__interface_N_RIsFollowingBehaviorEnabled(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass CompanionAI.CompanionAI_fort_ping_interface
class UCompanionAI_fort_ping_interface : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CompanionAI_fort_ping_interface");
		return Clss;
	}

	class UObject* _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RUnconvertedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* OnNPCCommand(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	uint8 _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RIsAttackCommandEnabled(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RGetCurrentNPCCommand(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_REnableCommandWheel_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RDeclineNPCCommand_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument);
	class UObject* _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertPingToAttack_L_Nagent_R(class USimulation_agent* __verse_0xB2CDDD72_Argument);
	uint8 _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RCanAcceptPingCommand(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	uint8 _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RAreNPCCommandsEnabled(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
};

// 0x0 (0x28 - 0x28)
// VerseClass CompanionAI.CompanionAI_log_companion_ai
class UCompanionAI_log_companion_ai : public UDiagnostics_log_channel
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CompanionAI_log_companion_ai");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass CompanionAI.CompanionAI_log_companion_creature
class UCompanionAI_log_companion_creature : public UDiagnostics_log_channel
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CompanionAI_log_companion_creature");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0xB0 (0x160 - 0xB0)
// VerseClass CompanionAI.CompanionAI_ping_component
class UCompanionAI_ping_component : public UPingComponentBase
{
public:
	FVerseFunctionProperty_                      __verse_0x4A0C11E4__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RAreNPCCommandsEnabled; // 0xB0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xA07D85E4__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RCanAcceptPingCommand; // 0xC0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xFCB4C0C9__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_REnableCommandWheel_L_Nlogic_R; // 0xD0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xD6588DA4__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RGetCurrentNPCCommand; // 0xE0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x68114BBA_OnNPCCommand;                   // 0xF0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xA8918968__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RDeclineNPCCommand_L_Nlogic_R; // 0x100(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x121A4D52__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RIsAttackCommandEnabled; // 0x110(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xD81F0534__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertPingToAttack_L_Nagent_R; // 0x120(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xC34E89EF__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertedEvent; // 0x130(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x19DD9F60__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RUnconvertedEvent; // 0x140(0x10)(InstancedReference, HasGetValueTypeHash)
	class UVerseEngine_multicast_delegate*       __verse_0xC18257FD_ConvertedEventInternal;         // 0x150(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerseEngine_multicast_delegate*       __verse_0x0E297686_UnconvertedEventInternal;       // 0x158(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CompanionAI_ping_component");
		return Clss;
	}

	class UObject* _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RUnconvertedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* OnNPCCommand(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	uint8 _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RIsAttackCommandEnabled(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RGetCurrentNPCCommand(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_REnableCommandWheel_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RDeclineNPCCommand_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument);
	class UObject* _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertPingToAttack_L_Nagent_R(class USimulation_agent* __verse_0xB2CDDD72_Argument);
	uint8 _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RCanAcceptPingCommand(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	uint8 _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RAreNPCCommandsEnabled(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO(class UVerseEngine_multicast_delegate* _ExprResult_0, uint64 _InstancingGraph_1, class UVerseEngine_multicast_delegate* _ExprResult_2, uint64 _InstancingGraph_3);
};

// 0x410 (0x560 - 0x150)
// VerseClass CompanionAI.task_CompanionAI_companion_ai$OnBegin
class UTask_CompanionAI_companion_ai_OnBegin : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai*             _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_0;                                // 0x159(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8AE1[0x5];                                     // Fixing Size After Last Property..
	class UDiagnostics_debug_draw*               __verse_0x00000000__3;                             // 0x160(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_1;                          // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8AE2[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_2;                                         // 0x170(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_3;                                     // 0x180(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8AE3[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               __verse_0x963EC691_Character_4;                    // 0x188(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_4;                                // 0x190(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_5;                                         // 0x198(0x10)(HasGetValueTypeHash)
	struct FTuple_Lagent_Mtuple_L_R_Mtuple_L_R_R _ExprResult_6;                                     // 0x1A8(0xA)(HasGetValueTypeHash)
	uint8                                        Pad_8AE4[0x6];                                     // Fixing Size After Last Property..
	FOptionProperty_                             _ExprResultStack_7;                                // 0x1B8(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_8;                                         // 0x1C0(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_9;                                     // 0x1D0(0x1)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_10;                                    // 0x1D1(0x1)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_11;                                    // 0x1D2(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8AE5[0x5];                                     // Fixing Size After Last Property..
	class UObject*                               __verse_0xD2827887_Navigatable_4;                  // 0x1D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_12;                               // 0x1E0(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_13;                                        // 0x1E8(0x10)(HasGetValueTypeHash)
	struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R _ExprResult_14;                                    // 0x1F8(0xA)(HasGetValueTypeHash)
	uint8                                        Pad_8AE6[0x6];                                     // Fixing Size After Last Property..
	struct FTuple_L_R                            _ExprResult_15;                                    // 0x208(0x1)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_16;                                    // 0x209(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8AE7[0x6];                                     // Fixing Size After Last Property..
	class UObject*                               __verse_0xA4160F11_Leashable_4;                    // 0x210(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_17;                               // 0x218(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_18;                                        // 0x220(0x10)(HasGetValueTypeHash)
	struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R _ExprResult_19;                                    // 0x230(0xA)(HasGetValueTypeHash)
	uint8                                        Pad_8AE8[0x6];                                     // Fixing Size After Last Property..
	struct FTuple_L_R                            _ExprResult_20;                                    // 0x240(0x1)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_21;                                    // 0x241(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8AE9[0x6];                                     // Fixing Size After Last Property..
	class UObject*                               __verse_0x47B0B441_CharacterMovement_4;            // 0x248(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_22;                               // 0x250(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_23;                                        // 0x258(0x10)(HasGetValueTypeHash)
	struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R _ExprResult_24;                                    // 0x268(0xA)(HasGetValueTypeHash)
	uint8                                        Pad_8AEA[0x6];                                     // Fixing Size After Last Property..
	struct FTuple_L_R                            _ExprResult_25;                                    // 0x278(0x1)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_26;                                    // 0x279(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8AEB[0x6];                                     // Fixing Size After Last Property..
	class UObject*                               __verse_0x3FE20196_FortPing_4;                     // 0x280(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_27;                               // 0x288(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_28;                                        // 0x290(0x10)(HasGetValueTypeHash)
	struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R _ExprResult_29;                                    // 0x2A0(0xA)(HasGetValueTypeHash)
	uint8                                        Pad_8AEC[0x6];                                     // Fixing Size After Last Property..
	struct FTuple_L_R                            _ExprResult_30;                                    // 0x2B0(0x1)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_31;                                    // 0x2B1(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8AED[0x6];                                     // Fixing Size After Last Property..
	class UObject*                               __verse_0x03CEBA4E_CharacterActions_4;             // 0x2B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_32;                               // 0x2C0(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_33;                                        // 0x2C8(0x10)(HasGetValueTypeHash)
	struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R _ExprResult_34;                                    // 0x2D8(0xA)(HasGetValueTypeHash)
	uint8                                        Pad_8AEE[0x6];                                     // Fixing Size After Last Property..
	struct FTuple_L_R                            _ExprResult_35;                                    // 0x2E8(0x1)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_36;                                    // 0x2E9(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8AEF[0x6];                                     // Fixing Size After Last Property..
	class UObject*                               __verse_0xF161303F_WeaponActions_4;                // 0x2F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_37;                               // 0x2F8(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_38;                                        // 0x300(0x10)(HasGetValueTypeHash)
	struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R _ExprResult_39;                                    // 0x310(0xA)(HasGetValueTypeHash)
	uint8                                        Pad_8AF0[0x6];                                     // Fixing Size After Last Property..
	struct FTuple_L_R                            _ExprResult_40;                                    // 0x320(0x1)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_41;                                    // 0x321(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8AF1[0x6];                                     // Fixing Size After Last Property..
	class UObject*                               __verse_0x0F05355D_ThreatPerception_4;             // 0x328(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_42;                               // 0x330(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_43;                                        // 0x338(0x10)(HasGetValueTypeHash)
	struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R _ExprResult_44;                                    // 0x348(0xA)(HasGetValueTypeHash)
	uint8                                        Pad_8AF2[0x6];                                     // Fixing Size After Last Property..
	struct FTuple_L_R                            _ExprResult_45;                                    // 0x358(0x1)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_46;                                    // 0x359(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8AF3[0x6];                                     // Fixing Size After Last Property..
	class UObject*                               __verse_0x00C33D6C_ObstaclePerception_4;           // 0x360(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_47;                               // 0x368(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_48;                                        // 0x370(0x10)(HasGetValueTypeHash)
	struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R _ExprResult_49;                                    // 0x380(0xA)(HasGetValueTypeHash)
	uint8                                        Pad_8AF4[0x6];                                     // Fixing Size After Last Property..
	struct FTuple_L_R                            _ExprResult_50;                                    // 0x390(0x1)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_51;                                    // 0x391(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8AF5[0x6];                                     // Fixing Size After Last Property..
	class UObject*                               __verse_0x27386837_TargetSelection_4;              // 0x398(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_52;                               // 0x3A0(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_53;                                        // 0x3A8(0x10)(HasGetValueTypeHash)
	struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R _ExprResult_54;                                    // 0x3B8(0xA)(HasGetValueTypeHash)
	uint8                                        Pad_8AF6[0x6];                                     // Fixing Size After Last Property..
	struct FTuple_L_R                            _ExprResult_55;                                    // 0x3C8(0x1)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_56;                                    // 0x3C9(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8AF7[0x6];                                     // Fixing Size After Last Property..
	class UObject*                               __verse_0x6F5C8C64_FocusInterface_4;               // 0x3D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_57;                               // 0x3D8(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_58;                                        // 0x3E0(0x10)(HasGetValueTypeHash)
	struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R _ExprResult_59;                                    // 0x3F0(0xA)(HasGetValueTypeHash)
	uint8                                        Pad_8AF8[0x6];                                     // Fixing Size After Last Property..
	struct FTuple_L_R                            _ExprResult_60;                                    // 0x400(0x1)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_61;                                    // 0x401(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8AF9[0x6];                                     // Fixing Size After Last Property..
	class UCompanionAI_companion_ai_runtime*     __verse_0x2B0A024B_CompanionAIRuntime_4;           // 0x408(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCompanionAI_companion_ai_runtime*     __verse_0x00000000__5;                             // 0x410(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConcurrency_task*                     _AsyncTask_63;                                     // 0x418(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_64;                                // 0x420(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_65;                                    // 0x430(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8AFA[0x7];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_66;                                   // 0x438(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FVerseStringProperty_                        __verse_0x39263057_WarningMsg_6;                   // 0x440(0x10)(HasGetValueTypeHash)
	class UDiagnostics_log*                      __verse_0x00000000__7;                             // 0x450(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_67;                         // 0x458(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8AFB[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_68;                                        // 0x460(0x10)(HasGetValueTypeHash)
	struct FTuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R _ExprResult_69;                                    // 0x470(0x12)(HasGetValueTypeHash)
	uint8                                        Pad_8AFC[0x6];                                     // Fixing Size After Last Property..
	FOptionProperty_                             _ExprResult_70;                                    // 0x488(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_71;                         // 0x48A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8AFD[0x5];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_72;                                        // 0x490(0x10)(HasGetValueTypeHash)
	struct FTuple_L_Kchar_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R _ExprResult_73;                                    // 0x4A0(0x40)(HasGetValueTypeHash)
	struct FTuple_L_Kchar_M_QColor_Ncolor_M_QDuration_Nfloat_R __verse_0x00000000__8;                             // 0x4E0(0x40)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_74;                                    // 0x520(0x20)(ZeroConstructor, IsPlainOldData, NoDestructor)
	FOptionProperty_                             _ExprResult_75;                                    // 0x540(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResultDummy_76;                               // 0x550(0x10)(HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_CompanionAI_companion_ai$OnBegin");
		return Clss;
	}

	int64 Update(uint64 _InstancingGraph_62);
};

// 0x478 (0x5C8 - 0x150)
// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$CheckForReviveTeamMembers_L_Nping__info_R
class UTask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*     _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FCompanionAI_ping_info                __verse_0xB2CDDD72_Argument;                       // 0x158(0x38)(Parm, NoDestructor)
	uint8                                        _RetVal : 1;                                       // Mask: 0x1, PropSize: 0x10x190(0x1)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_491 : 7;                                    // Fixing Bit-Field Size..
	enum class EVerseTrue                        _InvokeSureResultDummy_0;                          // 0x191(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8AFE[0x6];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_1;                                         // 0x198(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_2;                                     // 0x1A8(0x10)(HasGetValueTypeHash)
	class USimulation_agent*                     __verse_0xFD64D7AA_Emitter_2;                      // 0x1B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_3;                                // 0x1C0(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class UObject*                               __verse_0x6B4100B8_EmitterCharacter_2;             // 0x1C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_4;                                // 0x1D0(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_5;                                         // 0x1D8(0x10)(HasGetValueTypeHash)
	struct FTuple_Lagent_Mtuple_L_R_Mtuple_L_R_R _ExprResult_6;                                     // 0x1E8(0xA)(HasGetValueTypeHash)
	uint8                                        Pad_8AFF[0x6];                                     // Fixing Size After Last Property..
	struct FTuple_L_R                            _ExprResult_7;                                     // 0x1F8(0x1)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_8;                                     // 0x1F9(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8B00[0x6];                                     // Fixing Size After Last Property..
	class USimulation_agent*                     __verse_0xC487D1E7_EmitterAgent_2;                 // 0x200(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                               __verse_0x00000000__3;                             // 0x208(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_9;                                // 0x210(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_10;                                        // 0x218(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_11;                                    // 0x228(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8B01[0x7];                                     // Fixing Size After Last Property..
	FOptionProperty_                             _ExprResultStack_12;                               // 0x230(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       _ExprResultStack_13;                               // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_14;                                        // 0x248(0x10)(HasGetValueTypeHash)
	struct FTuple_Lvector3_Mvector3_R            _ExprResult_15;                                    // 0x258(0x30)(HasGetValueTypeHash)
	uint8                                        Pad_8B02[0x8];                                     // Fixing Size After Last Property..
	struct FSpatialMath_transform                _ExprResult_16;                                    // 0x290(0x60)(NoDestructor)
	class UObject*                               __verse_0x00000000__6;                             // 0x2F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_17;                                        // 0x2F8(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_18;                                    // 0x308(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8B03[0x7];                                     // Fixing Size After Last Property..
	struct FSpatialMath_transform                _ExprResult_19;                                    // 0x310(0x60)(NoDestructor)
	class UObject*                               __verse_0x00000000__7;                             // 0x370(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_20;                                        // 0x378(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_21;                                    // 0x388(0x1)(HasGetValueTypeHash)
	uint8                                        __verse_0xC96E9091_HasRevivedEmitter_5 : 1;        // Mask: 0x1, PropSize: 0x10x389(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_492 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8B04[0x6];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     _AsyncTask_22;                                     // 0x390(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_23;                                // 0x398(0x10)(HasGetValueTypeHash)
	int64                                        _AsyncResult_24;                                   // 0x3A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_25;                               // 0x3B0(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B05[0x6];                                     // Fixing Size After Last Property..
	TArray<class USimulation_agent*>             __verse_0xBFBCE682_TeamMembers_4;                  // 0x3B8(0x10)(ContainsInstancedReference)
	FVerseFunctionProperty_                      _Callee_26;                                        // 0x3C8(0x10)(HasGetValueTypeHash)
	struct FTuple_Lagent_Mtuple_L_R_Mtuple_L_R_R _ExprResult_27;                                    // 0x3D8(0xA)(HasGetValueTypeHash)
	uint8                                        Pad_8B06[0x6];                                     // Fixing Size After Last Property..
	struct FTuple_L_R                            _ExprResult_28;                                    // 0x3E8(0x1)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_29;                                    // 0x3E9(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8B07[0x6];                                     // Fixing Size After Last Property..
	int64                                        _ForIndex_30;                                      // 0x3F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        _ForLength_31;                                     // 0x3F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USimulation_agent*                     __verse_0xAE35E375_TeamMember_12;                  // 0x400(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_32;                               // 0x408(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       _ExprResultStack_33;                               // 0x418(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_34;                                        // 0x420(0x10)(HasGetValueTypeHash)
	struct FTuple_Lvector3_Mvector3_R            _ExprResult_35;                                    // 0x430(0x30)(HasGetValueTypeHash)
	struct FSpatialMath_transform                _ExprResult_36;                                    // 0x460(0x60)(NoDestructor)
	class UObject*                               __verse_0x00000000__16;                            // 0x4C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_37;                               // 0x4C8(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_38;                                        // 0x4D0(0x10)(HasGetValueTypeHash)
	struct FTuple_Lagent_Mtuple_L_R_Mtuple_L_R_R _ExprResult_39;                                    // 0x4E0(0xA)(HasGetValueTypeHash)
	uint8                                        Pad_8B08[0x6];                                     // Fixing Size After Last Property..
	struct FTuple_L_R                            _ExprResult_40;                                    // 0x4F0(0x1)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_41;                                    // 0x4F1(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8B09[0x6];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_42;                                        // 0x4F8(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_43;                                    // 0x508(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8B0A[0x7];                                     // Fixing Size After Last Property..
	struct FSpatialMath_transform                _ExprResult_44;                                    // 0x510(0x60)(NoDestructor)
	class UObject*                               __verse_0x00000000__17;                            // 0x570(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_45;                                        // 0x578(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_46;                                    // 0x588(0x1)(HasGetValueTypeHash)
	uint8                                        __verse_0x87226150_HasRevivedTeamMember_15 : 1;    // Mask: 0x1, PropSize: 0x10x589(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_493 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8B0B[0x6];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _AsyncTaskClass_47;                                // 0x590(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_48;                               // 0x5A0(0x2)(NoDestructor, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_49;                         // 0x5A2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B0C[0x5];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_50;                                        // 0x5A8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_51;                                    // 0x5B8(0x10)(HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$CheckForReviveTeamMembers_L_Nping__info_R");
		return Clss;
	}

	int64 Update();
};

// 0x60 (0x1B0 - 0x150)
// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$CrouchService
class UTask_CompanionAI_companion_ai_runtime_CrouchService : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*     _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8B0D[0x7];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     _AsyncTask_0;                                      // 0x160(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_1;                                 // 0x168(0x10)(HasGetValueTypeHash)
	int64                                        _AsyncResult_2;                                    // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __verse_0x00000000__3;                             // 0x180(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_3;                                 // 0x188(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_4;                                     // 0x198(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8B0E[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _AsyncTaskClass_5;                                 // 0x1A0(0x10)(HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$CrouchService");
		return Clss;
	}

	int64 Update();
};

// 0x128 (0x278 - 0x150)
// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$CrouchUntilHit
class UTask_CompanionAI_companion_ai_runtime_CrouchUntilHit : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*     _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_0;                          // 0x159(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B0F[0x6];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_1;                                         // 0x160(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_2;                                     // 0x170(0x10)(HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_3 : 1;                            // Mask: 0x1, PropSize: 0x10x180(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_494 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        _AsyncBeginCount_4 : 1;                            // Mask: 0x1, PropSize: 0x10x181(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_495 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8B10[0x6];                                     // Fixing Size After Last Property..
	class UObject*                               __verse_0x00000000__2;                             // 0x188(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConcurrency_task*                     _AsyncTask_5;                                      // 0x190(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_6;                                 // 0x198(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_7;                                     // 0x1A8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        _AsyncResult_8;                                    // 0x1B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_9 : 1;                            // Mask: 0x1, PropSize: 0x10x1C0(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_496 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8B11[0x7];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     _AsyncTask_10;                                     // 0x1C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_11;                                // 0x1D0(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_12;                                    // 0x1E0(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8B12[0x7];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_13;                                   // 0x1E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_14 : 1;                           // Mask: 0x1, PropSize: 0x10x1F0(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_497 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8B13[0x7];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     _AsyncTask_15;                                     // 0x1F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_16;                                // 0x200(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_17;                                    // 0x210(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8B14[0x7];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_18;                                   // 0x218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_19 : 1;                           // Mask: 0x1, PropSize: 0x10x220(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_498 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8B15[0x7];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     _AsyncTask_20;                                     // 0x228(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_21;                                // 0x230(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_22;                                    // 0x240(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8B16[0x7];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_23;                                   // 0x248(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_24;                         // 0x250(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B17[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_25;                                        // 0x258(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_26;                                    // 0x268(0x10)(HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$CrouchUntilHit");
		return Clss;
	}

	int64 Update();
};

// 0x201 (0x351 - 0x150)
// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R
class UTask_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*     _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_Lvector3_Mfloat_Mcolor_R       __verse_0xB2CDDD72_Argument;                       // 0x158(0x38)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_0;                                // 0x190(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B18[0x6];                                     // Fixing Size After Last Property..
	class UDiagnostics_debug_draw*               __verse_0x00000000__4;                             // 0x198(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_1;                          // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B19[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_2;                                         // 0x1A8(0x10)(HasGetValueTypeHash)
	struct FTuple_Lvector3_M_QRadius_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QNumSegments_Nint_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R _ExprResult_3;                                     // 0x1B8(0x80)(HasGetValueTypeHash)
	struct FTuple_Lvector3_M_QColor_Ncolor_M_QRadius_Nfloat_M_QThickness_Ntype_7b3_2e000000_7d_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_M_QNumSegments_Ntype_7b32_7d_R __verse_0x00000000__5;                             // 0x238(0x70)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_4;                                     // 0x2A8(0x20)(ZeroConstructor, IsPlainOldData, NoDestructor)
	FOptionProperty_                             _ExprResult_5;                                     // 0x2C8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_6;                                     // 0x2D8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_7;                                     // 0x2E8(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B1A[0x6];                                     // Fixing Size After Last Property..
	FOptionProperty_                             _ExprResult_8;                                     // 0x2F0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_9;                                     // 0x300(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UConcurrency_task*                     _AsyncTask_10;                                     // 0x310(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_11;                                // 0x318(0x10)(HasGetValueTypeHash)
	int64                                        _AsyncResult_12;                                   // 0x328(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDiagnostics_debug_draw*               __verse_0x00000000__7;                             // 0x330(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_13;                         // 0x338(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B1B[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_14;                                        // 0x340(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_15;                                    // 0x350(0x1)(HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R");
		return Clss;
	}

	int64 Update();
};

// 0x3A0 (0x4F0 - 0x150)
// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$GameLoop
class UTask_CompanionAI_companion_ai_runtime_GameLoop : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*     _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8B1C[0x7];                                     // Fixing Size After Last Property..
	FVerseDynamicProperty_                       InvokeResultDummy_0;                               // 0x160(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_1;                                // 0x170(0x18)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       _ExprResult_2;                                     // 0x188(0x10)(HasGetValueTypeHash)
	uint8                                        _ExprResult_3 : 1;                                 // Mask: 0x1, PropSize: 0x10x198(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_499 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8B1D[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               __verse_0x00000000__3;                             // 0x1A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_4;                                         // 0x1A8(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_5;                                     // 0x1B8(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8B1E[0x7];                                     // Fixing Size After Last Property..
	FVerseDynamicProperty_                       _ExprResult_6;                                     // 0x1C0(0x10)(HasGetValueTypeHash)
	class UObject*                               __verse_0x00000000__5;                             // 0x1D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConcurrency_task*                     _AsyncTask_7;                                      // 0x1D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_8;                                 // 0x1E0(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_9;                                     // 0x1F0(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8B1F[0x7];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_10;                                   // 0x1F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x01443115_PingInfo_1;                     // 0x200(0x40)(NoDestructor)
	FOptionProperty_                             __verse_0x00000000__6;                             // 0x240(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_11 : 1;                                // Mask: 0x1, PropSize: 0x10x242(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_49A : 7;                                    // Fixing Bit-Field Size..
	FOptionProperty_                             _ExprResultStack_12;                               // 0x243(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B20[0x3];                                     // Fixing Size After Last Property..
	class UObject*                               __verse_0x00000000__8;                             // 0x248(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                               __verse_0x00000000__9;                             // 0x250(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_13;                                        // 0x258(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_14;                                    // 0x268(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8B21[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               _InvokeSureResultDummy_15;                         // 0x270(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_16;                                        // 0x278(0x10)(HasGetValueTypeHash)
	class UObject*                               __verse_0x00000000__10;                            // 0x288(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                               __verse_0x00000000__11;                            // 0x290(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_17;                                        // 0x298(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_18;                                    // 0x2A8(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8B22[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               _InvokeSureResultDummy_19;                         // 0x2B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_20;                                        // 0x2B8(0x10)(HasGetValueTypeHash)
	struct FCompanionAI_ping_info                __verse_0x78680F6D_CurrentCommand_13;              // 0x2C8(0x38)(NoDestructor)
	FOptionProperty_                             _ExprResultStack_21;                               // 0x300(0x40)(NoDestructor)
	uint8                                        _AsyncBeginCount_22 : 1;                           // Mask: 0x1, PropSize: 0x10x340(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_49B : 7;                                    // Fixing Bit-Field Size..
	uint8                                        _AsyncBeginCount_23 : 1;                           // Mask: 0x1, PropSize: 0x10x341(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_49C : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8B23[0x6];                                     // Fixing Size After Last Property..
	FOptionProperty_                             _ExprResult_24;                                    // 0x348(0x40)(NoDestructor)
	class UObject*                               __verse_0x00000000__14;                            // 0x388(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConcurrency_task*                     _AsyncTask_25;                                     // 0x390(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_26;                                // 0x398(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_27;                                    // 0x3A8(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8B24[0x7];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_28;                                   // 0x3B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_29 : 1;                           // Mask: 0x1, PropSize: 0x10x3B8(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_49D : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8B25[0x7];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     _AsyncTask_30;                                     // 0x3C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_31;                                // 0x3C8(0x10)(HasGetValueTypeHash)
	int64                                        _AsyncResult_32;                                   // 0x3D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __verse_0x00000000__16;                            // 0x3E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_33;                         // 0x3E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B26[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_34;                                        // 0x3F0(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_35;                                    // 0x400(0x40)(NoDestructor)
	FOptionProperty_                             __verse_0x00000000__17;                            // 0x440(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_36 : 1;                                // Mask: 0x1, PropSize: 0x10x442(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_49E : 7;                                    // Fixing Bit-Field Size..
	FOptionProperty_                             _ExprResultStack_37;                               // 0x443(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_38 : 1;                           // Mask: 0x1, PropSize: 0x10x445(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_49F : 7;                                    // Fixing Bit-Field Size..
	uint8                                        _AsyncBeginCount_39 : 1;                           // Mask: 0x1, PropSize: 0x10x446(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4A0 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8B27[0x1];                                     // Fixing Size After Last Property..
	class UObject*                               __verse_0x00000000__20;                            // 0x448(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConcurrency_task*                     _AsyncTask_40;                                     // 0x450(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_41;                                // 0x458(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_42;                                    // 0x468(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8B28[0x7];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_43;                                   // 0x470(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_44 : 1;                           // Mask: 0x1, PropSize: 0x10x478(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4A1 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8B29[0x7];                                     // Fixing Size After Last Property..
	FOptionProperty_                             _ExprResult_45;                                    // 0x480(0x40)(NoDestructor)
	class UObject*                               __verse_0x00000000__21;                            // 0x4C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConcurrency_task*                     _AsyncTask_46;                                     // 0x4C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_47;                                // 0x4D0(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_48;                                    // 0x4E0(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8B2A[0x7];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_49;                                   // 0x4E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$GameLoop");
		return Clss;
	}

	int64 Update();
};

// 0x3D0 (0x520 - 0x150)
// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$GetAttackCommandTarget_L_Nping__info_R
class UTask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*     _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FCompanionAI_ping_info                __verse_0xB2CDDD72_Argument;                       // 0x158(0x38)(Parm, NoDestructor)
	FOptionProperty_                             _RetVal;                                           // 0x190(0x38)(Parm, OutParm, ReturnParm, NoDestructor)
	FVerseDynamicProperty_                       InvokeResultDummy_0;                               // 0x1C8(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_1;                                // 0x1D8(0x18)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       _ExprResult_2;                                     // 0x1F0(0x10)(HasGetValueTypeHash)
	uint8                                        _ExprResult_3 : 1;                                 // Mask: 0x1, PropSize: 0x10x200(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4A2 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8B2B[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               __verse_0x00000000__3;                             // 0x208(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_4;                                         // 0x210(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_5;                                     // 0x220(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8B2C[0x7];                                     // Fixing Size After Last Property..
	FVerseDynamicProperty_                       _ExprResult_6;                                     // 0x228(0x10)(HasGetValueTypeHash)
	class UConcurrency_task*                     _AsyncTask_7;                                      // 0x238(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_8;                                 // 0x240(0x10)(HasGetValueTypeHash)
	int64                                        _AsyncResult_9;                                    // 0x250(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __verse_0x0E44D420_ClosestTargetDistance_4;        // 0x258(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0xA08A30EA_ClosestTarget_4;                // 0x260(0x38)(NoDestructor)
	FOptionProperty_                             __verse_0x00000000__5;                             // 0x298(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_10 : 1;                                // Mask: 0x1, PropSize: 0x10x29A(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4A3 : 7;                                    // Fixing Bit-Field Size..
	FOptionProperty_                             _ExprResultStack_11;                               // 0x29B(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B2D[0x3];                                     // Fixing Size After Last Property..
	TArray<struct FVerseAIBase_fort_threat_info> _ForIterable_12;                                   // 0x2A0(0x10)(ContainsInstancedReference)
	class UObject*                               __verse_0x00000000__9;                             // 0x2B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_13;                               // 0x2B8(0x18)(ContainsInstancedReference)
	FVerseFunctionProperty_                      _Callee_14;                                        // 0x2D0(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_15;                                    // 0x2E0(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8B2E[0x7];                                     // Fixing Size After Last Property..
	int64                                        _ForIndex_16;                                      // 0x2E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        _ForLength_17;                                     // 0x2F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVerseAIBase_fort_threat_info         __verse_0xD4ED8431_Threat_10;                      // 0x2F8(0x30)(NoDestructor)
	FVerseDynamicProperty_                       InvokeResultDummy_18;                              // 0x328(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_19;                               // 0x338(0x18)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       _ExprResult_20;                                    // 0x350(0x10)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       _ExprResult_21;                                    // 0x360(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_22;                               // 0x370(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_23;                                        // 0x378(0x10)(HasGetValueTypeHash)
	struct FTuple_Lentity_Mtuple_L_R_Mtuple_L_R_R _ExprResult_24;                                    // 0x388(0xA)(HasGetValueTypeHash)
	uint8                                        Pad_8B2F[0x6];                                     // Fixing Size After Last Property..
	FOptionProperty_                             _ExprResultStack_25;                               // 0x398(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_26;                                    // 0x3A0(0x1)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_27;                                    // 0x3A1(0x1)(HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_28;                         // 0x3A2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B30[0x5];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_29;                                        // 0x3A8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_30;                                    // 0x3B8(0x10)(HasGetValueTypeHash)
	double                                       __verse_0xD58F9071_TargetDistance_15;              // 0x3C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_31;                                        // 0x3D0(0x10)(HasGetValueTypeHash)
	struct FTuple_Lvector3_Mvector3_R            _ExprResult_32;                                    // 0x3E0(0x30)(HasGetValueTypeHash)
	struct FSpatialMath_vector3                  _ExprResultStack_33;                               // 0x410(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	FVerseFunctionProperty_                      _Callee_34;                                        // 0x428(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_35;                               // 0x438(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_36;                                    // 0x448(0x38)(NoDestructor)
	struct FVerseAIBase_fort_threat_info         __verse_0x19FFC917_AttackTarget_17;                // 0x480(0x30)(NoDestructor)
	FOptionProperty_                             _ExprResultStack_37;                               // 0x4B0(0x38)(NoDestructor)
	enum class EVerseTrue                        _InvokeSureResultDummy_38;                         // 0x4E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B31[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_39;                                        // 0x4F0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_40;                                    // 0x500(0x10)(HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_41;                                // 0x510(0x10)(HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$GetAttackCommandTarget_L_Nping__info_R");
		return Clss;
	}

	int64 Update();
};

// 0xC8 (0x218 - 0x150)
// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$GetNewObstacle
class UTask_CompanionAI_companion_ai_runtime_GetNewObstacle : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*     _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8B32[0x7];                                     // Fixing Size After Last Property..
	FOptionProperty_                             _RetVal;                                           // 0x160(0x30)(Parm, OutParm, ReturnParm, NoDestructor)
	struct FVerseAIBase_fort_obstacle_info       __verse_0x39C5E53E_ObstacleInfo_1;                 // 0x190(0x28)(NoDestructor)
	class UObject*                               __verse_0x00000000__2;                             // 0x1B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                               __verse_0x00000000__3;                             // 0x1C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_0;                                         // 0x1C8(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_1;                                     // 0x1D8(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8B33[0x7];                                     // Fixing Size After Last Property..
	FVerseDynamicProperty_                       _ExprResult_2;                                     // 0x1E0(0x10)(HasGetValueTypeHash)
	class UConcurrency_task*                     _AsyncTask_3;                                      // 0x1F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_4;                                 // 0x1F8(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_5;                                     // 0x208(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8B34[0x7];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_6;                                    // 0x210(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$GetNewObstacle");
		return Clss;
	}

	int64 Update();
};

// 0xD8 (0x228 - 0x150)
// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$GetNewTargetPerception
class UTask_CompanionAI_companion_ai_runtime_GetNewTargetPerception : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*     _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8B35[0x7];                                     // Fixing Size After Last Property..
	FOptionProperty_                             _RetVal;                                           // 0x160(0x38)(Parm, OutParm, ReturnParm, NoDestructor)
	struct FVerseAIBase_fort_threat_info         __verse_0x1EB80E5B_ThreatInfo_1;                   // 0x198(0x30)(NoDestructor)
	class UObject*                               __verse_0x00000000__2;                             // 0x1C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                               __verse_0x00000000__3;                             // 0x1D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_0;                                         // 0x1D8(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_1;                                     // 0x1E8(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8B36[0x7];                                     // Fixing Size After Last Property..
	FVerseDynamicProperty_                       _ExprResult_2;                                     // 0x1F0(0x10)(HasGetValueTypeHash)
	class UConcurrency_task*                     _AsyncTask_3;                                      // 0x200(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_4;                                 // 0x208(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_5;                                     // 0x218(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8B37[0x7];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_6;                                    // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$GetNewTargetPerception");
		return Clss;
	}

	int64 Update();
};

// 0xD8 (0x228 - 0x150)
// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$GetNewThreat
class UTask_CompanionAI_companion_ai_runtime_GetNewThreat : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*     _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8B38[0x7];                                     // Fixing Size After Last Property..
	FOptionProperty_                             _RetVal;                                           // 0x160(0x38)(Parm, OutParm, ReturnParm, NoDestructor)
	struct FVerseAIBase_fort_threat_info         __verse_0x1EB80E5B_ThreatInfo_1;                   // 0x198(0x30)(NoDestructor)
	class UObject*                               __verse_0x00000000__2;                             // 0x1C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                               __verse_0x00000000__3;                             // 0x1D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_0;                                         // 0x1D8(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_1;                                     // 0x1E8(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8B39[0x7];                                     // Fixing Size After Last Property..
	FVerseDynamicProperty_                       _ExprResult_2;                                     // 0x1F0(0x10)(HasGetValueTypeHash)
	class UConcurrency_task*                     _AsyncTask_3;                                      // 0x200(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_4;                                 // 0x208(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_5;                                     // 0x218(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8B3A[0x7];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_6;                                    // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$GetNewThreat");
		return Clss;
	}

	int64 Update();
};

// 0xBC (0x20C - 0x150)
// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$GetObstacle
class UTask_CompanionAI_companion_ai_runtime_GetObstacle : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*     _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8B3B[0x7];                                     // Fixing Size After Last Property..
	FOptionProperty_                             _RetVal;                                           // 0x160(0x30)(Parm, OutParm, ReturnParm, NoDestructor)
	FOptionProperty_                             __verse_0x00000000__1;                             // 0x190(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B3C[0x6];                                     // Fixing Size After Last Property..
	struct FVerseAIBase_fort_obstacle_info       __verse_0x39C5E53E_ObstacleInfo_3;                 // 0x198(0x28)(NoDestructor)
	class UObject*                               __verse_0x00000000__4;                             // 0x1C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_0;                                // 0x1C8(0x30)(NoDestructor)
	FVerseFunctionProperty_                      _Callee_1;                                         // 0x1F8(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_2;                                     // 0x208(0x1)(HasGetValueTypeHash)
	uint8                                        _ExprResult_3 : 1;                                 // Mask: 0x1, PropSize: 0x10x209(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4A4 : 7;                                    // Fixing Bit-Field Size..
	FOptionProperty_                             _ExprResultStack_4;                                // 0x20A(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$GetObstacle");
		return Clss;
	}

	int64 Update();
};

// 0xD4 (0x224 - 0x150)
// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$GetThreat
class UTask_CompanionAI_companion_ai_runtime_GetThreat : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*     _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8B3D[0x7];                                     // Fixing Size After Last Property..
	FOptionProperty_                             _RetVal;                                           // 0x160(0x38)(Parm, OutParm, ReturnParm, NoDestructor)
	FOptionProperty_                             __verse_0x00000000__1;                             // 0x198(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B3E[0x6];                                     // Fixing Size After Last Property..
	struct FVerseAIBase_fort_threat_info         __verse_0x1EB80E5B_ThreatInfo_3;                   // 0x1A0(0x30)(NoDestructor)
	class UObject*                               __verse_0x00000000__4;                             // 0x1D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_0;                                // 0x1D8(0x38)(NoDestructor)
	FVerseFunctionProperty_                      _Callee_1;                                         // 0x210(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_2;                                     // 0x220(0x1)(HasGetValueTypeHash)
	uint8                                        _ExprResult_3 : 1;                                 // Mask: 0x1, PropSize: 0x10x221(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4A5 : 7;                                    // Fixing Bit-Field Size..
	FOptionProperty_                             _ExprResultStack_4;                                // 0x222(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$GetThreat");
		return Clss;
	}

	int64 Update();
};

// 0x120 (0x270 - 0x150)
// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$GoToAndAttackTask_L_Nfort__threat__info_R
class UTask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*     _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVerseAIBase_fort_threat_info         __verse_0xB2CDDD72_Argument;                       // 0x158(0x30)(Parm, NoDestructor)
	enum class EVerseTrue                        _InvokeSureResultDummy_0;                          // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B3F[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_1;                                         // 0x190(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_2;                                     // 0x1A0(0x10)(HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_3 : 1;                            // Mask: 0x1, PropSize: 0x10x1B0(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4A6 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8B40[0x7];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     _AsyncTask_4;                                      // 0x1B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_5;                                 // 0x1C0(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_6;                                     // 0x1D0(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8B41[0x7];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_7;                                    // 0x1D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_8 : 1;                            // Mask: 0x1, PropSize: 0x10x1E0(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4A7 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        _AsyncBeginCount_9 : 1;                            // Mask: 0x1, PropSize: 0x10x1E1(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4A8 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8B42[0x6];                                     // Fixing Size After Last Property..
	class UObject*                               __verse_0x00000000__2;                             // 0x1E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConcurrency_task*                     _AsyncTask_10;                                     // 0x1F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_11;                                // 0x1F8(0x10)(HasGetValueTypeHash)
	int64                                        _AsyncResult_12;                                   // 0x208(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_13 : 1;                           // Mask: 0x1, PropSize: 0x10x210(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4A9 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8B43[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               __verse_0x00000000__3;                             // 0x218(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConcurrency_task*                     _AsyncTask_14;                                     // 0x220(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_15;                                // 0x228(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_16;                                    // 0x238(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8B44[0x7];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_17;                                   // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_18;                         // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B45[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_19;                                        // 0x250(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_20;                                    // 0x260(0x10)(HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$GoToAndAttackTask_L_Nfort__threat__info_R");
		return Clss;
	}

	int64 Update();
};

// 0x430 (0x580 - 0x150)
// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R
class UTask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*     _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R __verse_0xB2CDDD72_Argument;                       // 0x158(0x3A)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8B46[0x6];                                     // Fixing Size After Last Property..
	uint8                                        _RetVal : 1;                                       // Mask: 0x1, PropSize: 0x10x198(0x1)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4AA : 7;                                    // Fixing Bit-Field Size..
	enum class EVerseTrue                        _InvokeSureResultDummy_0;                          // 0x199(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B47[0x6];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_1;                                         // 0x1A0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_2;                                     // 0x1B0(0x10)(HasGetValueTypeHash)
	TArray<FVerseDynamicProperty_>               __verse_0xFFC68BC5_Array_2;                        // 0x1C0(0x10)(ContainsInstancedReference)
	FVerseFunctionProperty_                      _Callee_3;                                         // 0x1D0(0x10)(HasGetValueTypeHash)
	TArray<TArray<FVerseDynamicProperty_>>       _ExprResult_4;                                     // 0x1E0(0x10)(ContainsInstancedReference)
	TArray<FVerseStringProperty_>                __verse_0xFFC68BC5_Array_3;                        // 0x1F0(0x10)(ContainsInstancedReference)
	struct FTuple_L_Kchar_M_Kchar_R              __verse_0x00000000__4;                             // 0x200(0x20)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_5;                                     // 0x220(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResultStack_6;                                // 0x230(0x10)(HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_7;                                         // 0x240(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResultStack_8;                                // 0x250(0x10)(HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_9;                                         // 0x260(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResultDummy_10;                               // 0x270(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResultDummy_11;                               // 0x280(0x10)(HasGetValueTypeHash)
	TArray<TArray<FVerseDynamicProperty_>>       _ForResult_12;                                     // 0x290(0x10)(ContainsInstancedReference)
	int64                                        _ForIndex_13;                                      // 0x2A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        _ForLength_14;                                     // 0x2A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FVerseStringProperty_                        __verse_0xFB88B569_Item_6;                         // 0x2B0(0x10)(HasGetValueTypeHash)
	TArray<FVerseDynamicProperty_>               _ExprResult_15;                                    // 0x2C0(0x10)(ContainsInstancedReference)
	FVerseStringProperty_                        __verse_0xFFC68BC5_Array_7;                        // 0x2D0(0x10)(HasGetValueTypeHash)
	TArray<FVerseDynamicProperty_>               _ForResult_16;                                     // 0x2E0(0x10)(ContainsInstancedReference)
	int64                                        _ForIndex_17;                                      // 0x2F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        _ForLength_18;                                     // 0x2F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        __verse_0xFB88B569_Item_9;                         // 0x300(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B48[0x7];                                     // Fixing Size After Last Property..
	FVerseDynamicProperty_                       _ExprResult_19;                                    // 0x308(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ForResult_20;                                     // 0x318(0x10)(HasGetValueTypeHash)
	int64                                        _ForIndex_21;                                      // 0x328(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        _ForLength_22;                                     // 0x330(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FVerseDynamicProperty_                       __verse_0xFB88B569_Item_11;                        // 0x338(0x10)(HasGetValueTypeHash)
	uint8                                        _ExprResult_23;                                    // 0x348(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_24;                               // 0x349(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_25 : 1;                           // Mask: 0x1, PropSize: 0x10x34B(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4AB : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8B49[0x4];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     _AsyncTask_26;                                     // 0x350(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_27;                                // 0x358(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_28;                                    // 0x368(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8B4A[0x7];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_29;                                   // 0x370(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USimulation_agent*                     __verse_0xFE707B39_TargetCharacter_14;             // 0x378(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_30;                               // 0x380(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	enum class EAI_navigation_result             __verse_0x95D09D0E_Result_14;                      // 0x388(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B4B[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               __verse_0x00000000__15;                            // 0x390(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConcurrency_task*                     _AsyncTask_31;                                     // 0x398(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_32;                                // 0x3A0(0x10)(HasGetValueTypeHash)
	struct FTuple_Lnavigation__target_M_QReachRadius_Nfloat_M_QAllowPartialPath_Nlogic_R _ExprResult_33;                                    // 0x3B0(0x1A)(HasGetValueTypeHash)
	uint8                                        Pad_8B4C[0x6];                                     // Fixing Size After Last Property..
	class UAI_navigation_target*                 _ExprResultStack_35;                               // 0x3D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_36;                                        // 0x3D8(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_37;                                    // 0x3E8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_38;                                    // 0x3F8(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B4D[0x6];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_39;                                   // 0x400(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FVerseDynamicProperty_                       InvokeResultDummy_40;                              // 0x408(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_41;                               // 0x418(0x18)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       _ExprResult_42;                                    // 0x430(0x10)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       _ExprResult_43;                                    // 0x440(0x10)(HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_44;                         // 0x450(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B4E[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_45;                                        // 0x458(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_46;                                    // 0x468(0x10)(HasGetValueTypeHash)
	enum class EAI_navigation_result             __verse_0x95D09D0E_Result_18;                      // 0x478(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B4F[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               __verse_0x00000000__19;                            // 0x480(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_47;                                // 0x488(0x10)(HasGetValueTypeHash)
	struct FTuple_Lnavigation__target_M_QReachRadius_Nfloat_M_QAllowPartialPath_Nlogic_R _ExprResult_48;                                    // 0x498(0x1A)(HasGetValueTypeHash)
	uint8                                        Pad_8B50[0x6];                                     // Fixing Size After Last Property..
	class UAI_navigation_target*                 _ExprResultStack_50;                               // 0x4B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_51;                                        // 0x4C0(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_52;                                    // 0x4D0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_53;                                    // 0x4E0(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B51[0x6];                                     // Fixing Size After Last Property..
	FVerseDynamicProperty_                       InvokeResultDummy_54;                              // 0x4E8(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_55;                               // 0x4F8(0x18)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       _ExprResult_56;                                    // 0x510(0x10)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       _ExprResult_57;                                    // 0x520(0x10)(HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_58;                         // 0x530(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B52[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_59;                                        // 0x538(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_60;                                    // 0x548(0x10)(HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_61;                         // 0x558(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B53[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_62;                                        // 0x560(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_63;                                    // 0x570(0x10)(HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R");
		return Clss;
	}

	int64 Update(uint64 _InstancingGraph_34, uint64 _InstancingGraph_49);
};

// 0x3A8 (0x4F8 - 0x150)
// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$HandleBackToMeCommand_L_Nping__info_R
class UTask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*     _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FCompanionAI_ping_info                __verse_0xB2CDDD72_Argument;                       // 0x158(0x38)(Parm, NoDestructor)
	enum class EVerseTrue                        _InvokeSureResultDummy_0;                          // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B54[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_1;                                         // 0x198(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_2;                                     // 0x1A8(0x10)(HasGetValueTypeHash)
	class USimulation_agent*                     __verse_0xFD64D7AA_Emitter_2;                      // 0x1B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_3;                                // 0x1C0(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class UObject*                               __verse_0x6B4100B8_EmitterCharacter_2;             // 0x1C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_4;                                // 0x1D0(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_5;                                         // 0x1D8(0x10)(HasGetValueTypeHash)
	struct FTuple_Lagent_Mtuple_L_R_Mtuple_L_R_R _ExprResult_6;                                     // 0x1E8(0xA)(HasGetValueTypeHash)
	uint8                                        Pad_8B55[0x6];                                     // Fixing Size After Last Property..
	struct FTuple_L_R                            _ExprResult_7;                                     // 0x1F8(0x1)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_8;                                     // 0x1F9(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8B56[0x6];                                     // Fixing Size After Last Property..
	FVerseDynamicProperty_                       InvokeResultDummy_9;                               // 0x200(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_10;                               // 0x210(0x18)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       _ExprResult_11;                                    // 0x228(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_12;                               // 0x238(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_13;                                        // 0x240(0x10)(HasGetValueTypeHash)
	struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R _ExprResult_14;                                    // 0x250(0xA)(HasGetValueTypeHash)
	uint8                                        Pad_8B57[0x6];                                     // Fixing Size After Last Property..
	struct FTuple_L_R                            _ExprResult_15;                                    // 0x260(0x1)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_16;                                    // 0x261(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8B58[0x6];                                     // Fixing Size After Last Property..
	FVerseDynamicProperty_                       _ExprResult_17;                                    // 0x268(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_18;                               // 0x278(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_19;                                        // 0x280(0x10)(HasGetValueTypeHash)
	struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R _ExprResult_20;                                    // 0x290(0xA)(HasGetValueTypeHash)
	uint8                                        Pad_8B59[0x6];                                     // Fixing Size After Last Property..
	struct FTuple_L_R                            _ExprResult_21;                                    // 0x2A0(0x1)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_22;                                    // 0x2A1(0x1)(HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_23 : 1;                           // Mask: 0x1, PropSize: 0x10x2A2(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4AC : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8B5A[0x5];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     _AsyncTask_24;                                     // 0x2A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_25;                                // 0x2B0(0x10)(HasGetValueTypeHash)
	int64                                        _AsyncResult_26;                                   // 0x2C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        __verse_0x7EBDC403_HasReachedPosition_2 : 1;       // Mask: 0x1, PropSize: 0x10x2C8(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4AD : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8B5B[0x7];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     _AsyncTask_27;                                     // 0x2D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_28;                                // 0x2D8(0x10)(HasGetValueTypeHash)
	struct FTuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b2_2e000000e_2b02_7d_M_QAllowPartialPath_Nlogic_R _ExprResult_29;                                    // 0x2E8(0x3A)(HasGetValueTypeHash)
	uint8                                        Pad_8B5C[0x6];                                     // Fixing Size After Last Property..
	struct FSpatialMath_vector3                  _ExprResult_30;                                    // 0x328(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	FOptionProperty_                             _ExprResult_31;                                    // 0x340(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        __verse_0x19F8ABA1_Sprint_2 : 1;                   // Mask: 0x1, PropSize: 0x10x348(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4AE : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8B5D[0x7];                                     // Fixing Size After Last Property..
	FOptionProperty_                             _ExprResult_32;                                    // 0x350(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_33;                                    // 0x360(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B5E[0x6];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_34;                                   // 0x368(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_35;                               // 0x370(0x2)(NoDestructor, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_36;                         // 0x372(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B5F[0x5];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_37;                                        // 0x378(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_38;                                    // 0x388(0x10)(HasGetValueTypeHash)
	uint8                                        __verse_0x684D9F77_IsFollowingEnabled_2 : 1;       // Mask: 0x1, PropSize: 0x10x398(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4AF : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8B60[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               __verse_0x00000000__7;                             // 0x3A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_39;                                        // 0x3A8(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_40;                                    // 0x3B8(0x1)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_41;                               // 0x3B9(0x2)(NoDestructor, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_42;                         // 0x3BB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B61[0x4];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_43;                                        // 0x3C0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_44;                                    // 0x3D0(0x10)(HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_45 : 1;                           // Mask: 0x1, PropSize: 0x10x3E0(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4B0 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        _AsyncBeginCount_46 : 1;                           // Mask: 0x1, PropSize: 0x10x3E1(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4B1 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8B62[0x6];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     _AsyncTask_47;                                     // 0x3E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_48;                                // 0x3F0(0x10)(HasGetValueTypeHash)
	struct FTuple_Lfort__character_Mfloat_R      _ExprResult_49;                                    // 0x400(0x10)(HasGetValueTypeHash)
	int64                                        _AsyncResult_50;                                   // 0x410(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_51 : 1;                           // Mask: 0x1, PropSize: 0x10x418(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4B2 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8B63[0x7];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     _AsyncTask_52;                                     // 0x420(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_53;                                // 0x428(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_54;                                    // 0x438(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8B64[0x7];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_55;                                   // 0x440(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_56 : 1;                           // Mask: 0x1, PropSize: 0x10x448(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4B3 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8B65[0x7];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     _AsyncTask_57;                                     // 0x450(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_58;                                // 0x458(0x10)(HasGetValueTypeHash)
	int64                                        _AsyncResult_59;                                   // 0x468(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_60 : 1;                           // Mask: 0x1, PropSize: 0x10x470(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4B4 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8B66[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               __verse_0x00000000__10;                            // 0x478(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConcurrency_task*                     _AsyncTask_61;                                     // 0x480(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_62;                                // 0x488(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_63;                                    // 0x498(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        _AsyncResult_64;                                   // 0x4A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_65;                         // 0x4B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B67[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_66;                                        // 0x4B8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_67;                                    // 0x4C8(0x10)(HasGetValueTypeHash)
	class UObject*                               __verse_0x00000000__12;                            // 0x4D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_68;                         // 0x4E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B68[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_69;                                        // 0x4E8(0x10)(HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$HandleBackToMeCommand_L_Nping__info_R");
		return Clss;
	}

	int64 Update();
};

// 0x598 (0x6E8 - 0x150)
// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$HandleGoTo_L_Nping__info_R
class UTask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*     _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FCompanionAI_ping_info                __verse_0xB2CDDD72_Argument;                       // 0x158(0x38)(Parm, NoDestructor)
	enum class EVerseTrue                        _InvokeSureResultDummy_0;                          // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B69[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_1;                                         // 0x198(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_2;                                     // 0x1A8(0x10)(HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_3 : 1;                            // Mask: 0x1, PropSize: 0x10x1B8(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4B5 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8B6A[0x7];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     _AsyncTask_4;                                      // 0x1C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_5;                                 // 0x1C8(0x10)(HasGetValueTypeHash)
	int64                                        _AsyncResult_6;                                    // 0x1D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FVerseDynamicProperty_                       InvokeResultDummy_7;                               // 0x1E0(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_8;                                // 0x1F0(0x18)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       _ExprResult_9;                                     // 0x208(0x10)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       _ExprResult_10;                                    // 0x218(0x10)(HasGetValueTypeHash)
	class UVerseEngine_Entity_entity*            __verse_0x459049A1_Target_3;                       // 0x228(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_11;                               // 0x230(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class UConcurrency_task*                     _AsyncTask_12;                                     // 0x238(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_13;                                // 0x240(0x10)(HasGetValueTypeHash)
	struct FTuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R _ExprResult_14;                                    // 0x250(0x3A)(HasGetValueTypeHash)
	uint8                                        Pad_8B6B[0x6];                                     // Fixing Size After Last Property..
	struct FTuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b1_2e000000e_2b02_7d_R __verse_0x00000000__4;                             // 0x290(0x38)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_15;                               // 0x2C8(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_16;                                        // 0x2D0(0x10)(HasGetValueTypeHash)
	struct FTuple_Lentity_Mtuple_L_R_Mtuple_L_R_R _ExprResult_17;                                    // 0x2E0(0xA)(HasGetValueTypeHash)
	uint8                                        Pad_8B6C[0x6];                                     // Fixing Size After Last Property..
	struct FTuple_L_R                            _ExprResult_18;                                    // 0x2F0(0x1)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_19;                                    // 0x2F1(0x1)(HasGetValueTypeHash)
	uint8                                        __verse_0x19F8ABA1_Sprint_4 : 1;                   // Mask: 0x1, PropSize: 0x10x2F2(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4B6 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8B6D[0x5];                                     // Fixing Size After Last Property..
	FOptionProperty_                             _ExprResult_20;                                    // 0x2F8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_21;                                    // 0x308(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B6E[0x6];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_22;                                   // 0x310(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FVerseDynamicProperty_                       InvokeResultDummy_23;                              // 0x318(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_24;                               // 0x328(0x18)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       _ExprResult_25;                                    // 0x340(0x10)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       _ExprResult_26;                                    // 0x350(0x10)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       InvokeResultDummy_27;                              // 0x360(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_28;                               // 0x370(0x18)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       _ExprResult_29;                                    // 0x388(0x10)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       _ExprResult_30;                                    // 0x398(0x10)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       InvokeResultDummy_31;                              // 0x3A8(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_32;                               // 0x3B8(0x18)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       _ExprResult_33;                                    // 0x3D0(0x10)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       _ExprResult_34;                                    // 0x3E0(0x10)(HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_35 : 1;                           // Mask: 0x1, PropSize: 0x10x3F0(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4B7 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        _AsyncBeginCount_36 : 1;                           // Mask: 0x1, PropSize: 0x10x3F1(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4B8 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8B6F[0x6];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     _AsyncTask_37;                                     // 0x3F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_38;                                // 0x400(0x10)(HasGetValueTypeHash)
	struct FTuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R _ExprResult_39;                                    // 0x410(0x3A)(HasGetValueTypeHash)
	uint8                                        Pad_8B70[0x6];                                     // Fixing Size After Last Property..
	struct FTuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b1_2e000000e_2b02_7d_R __verse_0x00000000__6;                             // 0x450(0x38)(HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x459049A1_Target_6;                       // 0x488(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x00000000__7;                             // 0x490(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_40 : 1;                                // Mask: 0x1, PropSize: 0x10x492(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4B9 : 7;                                    // Fixing Bit-Field Size..
	FOptionProperty_                             _ExprResultStack_41;                               // 0x493(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        __verse_0x19F8ABA1_Sprint_6 : 1;                   // Mask: 0x1, PropSize: 0x10x495(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4BA : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8B71[0x2];                                     // Fixing Size After Last Property..
	FOptionProperty_                             _ExprResult_42;                                    // 0x498(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_43;                                    // 0x4A8(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B72[0x6];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_44;                                   // 0x4B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_45 : 1;                           // Mask: 0x1, PropSize: 0x10x4B8(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4BB : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8B73[0x7];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     _AsyncTask_46;                                     // 0x4C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_47;                                // 0x4C8(0x10)(HasGetValueTypeHash)
	int64                                        _AsyncResult_48;                                   // 0x4D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_49;                               // 0x4E0(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_50 : 1;                           // Mask: 0x1, PropSize: 0x10x4E2(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4BC : 7;                                    // Fixing Bit-Field Size..
	uint8                                        _AsyncBeginCount_51 : 1;                           // Mask: 0x1, PropSize: 0x10x4E3(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4BD : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8B74[0x4];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     _AsyncTask_52;                                     // 0x4E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_53;                                // 0x4F0(0x10)(HasGetValueTypeHash)
	struct FTuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R _ExprResult_54;                                    // 0x500(0x3A)(HasGetValueTypeHash)
	uint8                                        Pad_8B75[0x6];                                     // Fixing Size After Last Property..
	struct FTuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b10_2e000000_7d_R __verse_0x00000000__10;                            // 0x540(0x38)(HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x459049A1_Target_10;                      // 0x578(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x00000000__11;                            // 0x580(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_55 : 1;                                // Mask: 0x1, PropSize: 0x10x582(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4BE : 7;                                    // Fixing Bit-Field Size..
	FOptionProperty_                             _ExprResultStack_56;                               // 0x583(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        __verse_0x19F8ABA1_Sprint_10 : 1;                  // Mask: 0x1, PropSize: 0x10x585(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4BF : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8B76[0x2];                                     // Fixing Size After Last Property..
	FOptionProperty_                             _ExprResult_57;                                    // 0x588(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_58;                                    // 0x598(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B77[0x6];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_59;                                   // 0x5A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_60 : 1;                           // Mask: 0x1, PropSize: 0x10x5A8(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4C0 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8B78[0x7];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     _AsyncTask_61;                                     // 0x5B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_62;                                // 0x5B8(0x10)(HasGetValueTypeHash)
	int64                                        _AsyncResult_63;                                   // 0x5C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_64 : 1;                           // Mask: 0x1, PropSize: 0x10x5D0(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4C1 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        _AsyncBeginCount_65 : 1;                           // Mask: 0x1, PropSize: 0x10x5D1(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4C2 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8B79[0x6];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     _AsyncTask_66;                                     // 0x5D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_67;                                // 0x5E0(0x10)(HasGetValueTypeHash)
	struct FTuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R _ExprResult_68;                                    // 0x5F0(0x3A)(HasGetValueTypeHash)
	uint8                                        Pad_8B7A[0x6];                                     // Fixing Size After Last Property..
	struct FTuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b4_2e000000e_2b02_7d_R __verse_0x00000000__14;                            // 0x630(0x38)(HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x459049A1_Target_14;                      // 0x668(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x00000000__15;                            // 0x670(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_69 : 1;                                // Mask: 0x1, PropSize: 0x10x672(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4C3 : 7;                                    // Fixing Bit-Field Size..
	FOptionProperty_                             _ExprResultStack_70;                               // 0x673(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        __verse_0x19F8ABA1_Sprint_14 : 1;                  // Mask: 0x1, PropSize: 0x10x675(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4C4 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8B7B[0x2];                                     // Fixing Size After Last Property..
	FOptionProperty_                             _ExprResult_71;                                    // 0x678(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_72;                                    // 0x688(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B7C[0x6];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_73;                                   // 0x690(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_74 : 1;                           // Mask: 0x1, PropSize: 0x10x698(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4C5 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8B7D[0x7];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     _AsyncTask_75;                                     // 0x6A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_76;                                // 0x6A8(0x10)(HasGetValueTypeHash)
	int64                                        _AsyncResult_77;                                   // 0x6B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_78;                         // 0x6C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B7E[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_79;                                        // 0x6C8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_80;                                    // 0x6D8(0x10)(HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$HandleGoTo_L_Nping__info_R");
		return Clss;
	}

	int64 Update();
};

// 0x5C8 (0x718 - 0x150)
// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$HandleGoToCommand_L_Nping__info_R
class UTask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*     _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FCompanionAI_ping_info                __verse_0xB2CDDD72_Argument;                       // 0x158(0x38)(Parm, NoDestructor)
	enum class EVerseTrue                        _InvokeSureResultDummy_0;                          // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B7F[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_1;                                         // 0x198(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_2;                                     // 0x1A8(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x74FB0571_AttackCommandTarget_1;          // 0x1B8(0x38)(NoDestructor)
	FOptionProperty_                             __verse_0x00000000__2;                             // 0x1F0(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_3 : 1;                                 // Mask: 0x1, PropSize: 0x10x1F2(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4C6 : 7;                                    // Fixing Bit-Field Size..
	FOptionProperty_                             _ExprResultStack_4;                                // 0x1F3(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_5 : 1;                            // Mask: 0x1, PropSize: 0x10x1F5(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4C7 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        _AsyncBeginCount_6 : 1;                            // Mask: 0x1, PropSize: 0x10x1F6(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4C8 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8B80[0x1];                                     // Fixing Size After Last Property..
	FOptionProperty_                             _ExprResult_7;                                     // 0x1F8(0x38)(NoDestructor)
	class UConcurrency_task*                     _AsyncTask_8;                                      // 0x230(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_9;                                 // 0x238(0x10)(HasGetValueTypeHash)
	int64                                        _AsyncResult_10;                                   // 0x248(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_11 : 1;                           // Mask: 0x1, PropSize: 0x10x250(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4C9 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8B81[0x7];                                     // Fixing Size After Last Property..
	class USimulation_agent*                     __verse_0xFD64D7AA_Emitter_5;                      // 0x258(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_12;                               // 0x260(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_13 : 1;                           // Mask: 0x1, PropSize: 0x10x268(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4CA : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8B82[0x7];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     _AsyncTask_14;                                     // 0x270(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_15;                                // 0x278(0x10)(HasGetValueTypeHash)
	struct FTuple_Lvector3_Mfloat_Magent_R       _ExprResult_16;                                    // 0x288(0x28)(HasGetValueTypeHash)
	int64                                        _AsyncResult_17;                                   // 0x2B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UConcurrency_task*                     _AsyncTask_18;                                     // 0x2B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_19;                                // 0x2C0(0x10)(HasGetValueTypeHash)
	int64                                        _AsyncResult_20;                                   // 0x2D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x1EB80E5B_ThreatInfo_7;                   // 0x2D8(0x38)(NoDestructor)
	FVerseFunctionProperty_                      _AsyncTaskClass_21;                                // 0x310(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_22;                                    // 0x320(0x1)(HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_23 : 1;                           // Mask: 0x1, PropSize: 0x10x321(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4CB : 7;                                    // Fixing Bit-Field Size..
	uint8                                        _AsyncBeginCount_24 : 1;                           // Mask: 0x1, PropSize: 0x10x322(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4CC : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8B83[0x5];                                     // Fixing Size After Last Property..
	FOptionProperty_                             _ExprResult_25;                                    // 0x328(0x38)(NoDestructor)
	class UConcurrency_task*                     _AsyncTask_26;                                     // 0x360(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_27;                                // 0x368(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_28;                                    // 0x378(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8B84[0x7];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_29;                                   // 0x380(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_30 : 1;                           // Mask: 0x1, PropSize: 0x10x388(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4CD : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8B85[0x7];                                     // Fixing Size After Last Property..
	FOptionProperty_                             _ExprResult_31;                                    // 0x390(0x38)(NoDestructor)
	class UConcurrency_task*                     _AsyncTask_32;                                     // 0x3C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_33;                                // 0x3D0(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_34;                                    // 0x3E0(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8B86[0x7];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_35;                                   // 0x3E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_36 : 1;                           // Mask: 0x1, PropSize: 0x10x3F0(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4CE : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8B87[0x7];                                     // Fixing Size After Last Property..
	struct FVerseAIBase_fort_threat_info         __verse_0xD4ED8431_Threat_8;                       // 0x3F8(0x30)(NoDestructor)
	FOptionProperty_                             _ExprResultStack_37;                               // 0x428(0x38)(NoDestructor)
	FOptionProperty_                             _ExprResultStack_38;                               // 0x460(0x2)(NoDestructor, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_39;                               // 0x462(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B88[0x4];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     _AsyncTask_40;                                     // 0x468(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_41;                                // 0x470(0x10)(HasGetValueTypeHash)
	int64                                        _AsyncResult_42;                                   // 0x480(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_43;                               // 0x488(0x38)(NoDestructor)
	FVerseFunctionProperty_                      _AsyncTaskClass_44;                                // 0x4C0(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_45;                                    // 0x4D0(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8B89[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _AsyncTaskClass_46;                                // 0x4D8(0x10)(HasGetValueTypeHash)
	struct FTuple_Lvector3_Mtype_7b0_2e500000_7d_Mtype_7b1_2e500000_7d_R _ExprResult_47;                                    // 0x4E8(0x28)(HasGetValueTypeHash)
	uint8                                        __verse_0xBC1095DF_HasRevived_12 : 1;              // Mask: 0x1, PropSize: 0x10x510(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4CF : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8B8A[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _AsyncTaskClass_48;                                // 0x518(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_49;                               // 0x528(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B8B[0x6];                                     // Fixing Size After Last Property..
	FOptionProperty_                             _ExprResultStack_50;                               // 0x530(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       _ExprResultStack_51;                               // 0x540(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_52;                                        // 0x548(0x10)(HasGetValueTypeHash)
	struct FTuple_Lvector3_Mvector3_R            _ExprResult_53;                                    // 0x558(0x30)(HasGetValueTypeHash)
	uint8                                        Pad_8B8C[0x8];                                     // Fixing Size After Last Property..
	struct FSpatialMath_transform                _ExprResult_54;                                    // 0x590(0x60)(NoDestructor)
	class UObject*                               __verse_0x00000000__16;                            // 0x5F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_55;                                        // 0x5F8(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_56;                                    // 0x608(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8B8D[0x7];                                     // Fixing Size After Last Property..
	struct FVerseAIBase_fort_threat_info         __verse_0x459049A1_Target_18;                      // 0x610(0x30)(NoDestructor)
	FOptionProperty_                             _ExprResultStack_57;                               // 0x640(0x38)(NoDestructor)
	enum class EVerseTrue                        _InvokeSureResultDummy_58;                         // 0x678(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B8E[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_59;                                        // 0x680(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_60;                                    // 0x690(0x10)(HasGetValueTypeHash)
	class USimulation_agent*                     __verse_0xFA2219CC_TargetAgent_19;                 // 0x6A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_61;                               // 0x6A8(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class UObject*                               __verse_0x00000000__20;                            // 0x6B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_62;                         // 0x6B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B8F[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_63;                                        // 0x6C0(0x10)(HasGetValueTypeHash)
	class UConcurrency_task*                     _AsyncTask_64;                                     // 0x6D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_65;                                // 0x6D8(0x10)(HasGetValueTypeHash)
	int64                                        _AsyncResult_66;                                   // 0x6E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_67;                         // 0x6F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B90[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_68;                                        // 0x6F8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_69;                                    // 0x708(0x10)(HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$HandleGoToCommand_L_Nping__info_R");
		return Clss;
	}

	int64 Update();
};

// 0x1A8 (0x2F8 - 0x150)
// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$HandleHoldPositionCommand_L_Nping__info_R
class UTask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*     _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FCompanionAI_ping_info                __verse_0xB2CDDD72_Argument;                       // 0x158(0x38)(Parm, NoDestructor)
	enum class EVerseTrue                        _InvokeSureResultDummy_0;                          // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B91[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_1;                                         // 0x198(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_2;                                     // 0x1A8(0x10)(HasGetValueTypeHash)
	class USimulation_agent*                     __verse_0xFD64D7AA_Emitter_2;                      // 0x1B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_3;                                // 0x1C0(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_4 : 1;                            // Mask: 0x1, PropSize: 0x10x1C8(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4D0 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8B92[0x7];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     _AsyncTask_5;                                      // 0x1D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_6;                                 // 0x1D8(0x10)(HasGetValueTypeHash)
	struct FTuple_Lvector3_Mfloat_Magent_R       _ExprResult_7;                                     // 0x1E8(0x28)(HasGetValueTypeHash)
	struct FSpatialMath_transform                _ExprResult_8;                                     // 0x210(0x60)(NoDestructor)
	class UObject*                               __verse_0x00000000__4;                             // 0x270(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_9;                                         // 0x278(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_10;                                    // 0x288(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8B93[0x7];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_11;                                   // 0x290(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UConcurrency_task*                     _AsyncTask_12;                                     // 0x298(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_13;                                // 0x2A0(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_14;                                    // 0x2B0(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8B94[0x7];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_15;                                   // 0x2B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_16;                                // 0x2C0(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_17;                                    // 0x2D0(0x1)(HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_18;                         // 0x2D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B95[0x6];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_19;                                        // 0x2D8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_20;                                    // 0x2E8(0x10)(HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$HandleHoldPositionCommand_L_Nping__info_R");
		return Clss;
	}

	int64 Update();
};

// 0x4F0 (0x640 - 0x150)
// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$HandleNPCCommand_L_Nping__info_R
class UTask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*     _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FCompanionAI_ping_info                __verse_0xB2CDDD72_Argument;                       // 0x158(0x38)(Parm, NoDestructor)
	enum class EVerseTrue                        _InvokeSureResultDummy_0;                          // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B96[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_1;                                         // 0x198(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_2;                                     // 0x1A8(0x10)(HasGetValueTypeHash)
	TArray<FVerseDynamicProperty_>               __verse_0xFFC68BC5_Array_2;                        // 0x1B8(0x10)(ContainsInstancedReference)
	FVerseFunctionProperty_                      _Callee_3;                                         // 0x1C8(0x10)(HasGetValueTypeHash)
	TArray<TArray<FVerseDynamicProperty_>>       _ExprResult_4;                                     // 0x1D8(0x10)(ContainsInstancedReference)
	TArray<FVerseStringProperty_>                __verse_0xFFC68BC5_Array_3;                        // 0x1E8(0x10)(ContainsInstancedReference)
	struct FTuple_L_Kchar_M_Kchar_M_Kchar_M_Kchar_R __verse_0x00000000__4;                             // 0x1F8(0x40)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_5;                                     // 0x238(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResultStack_6;                                // 0x248(0x10)(HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_7;                                         // 0x258(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResultStack_8;                                // 0x268(0x10)(HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_9;                                         // 0x278(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_10;                                    // 0x288(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResultStack_11;                               // 0x298(0x10)(HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_12;                                        // 0x2A8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResultStack_13;                               // 0x2B8(0x10)(HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_14;                                        // 0x2C8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResultDummy_15;                               // 0x2D8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResultDummy_16;                               // 0x2E8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResultDummy_17;                               // 0x2F8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResultDummy_18;                               // 0x308(0x10)(HasGetValueTypeHash)
	TArray<TArray<FVerseDynamicProperty_>>       _ForResult_19;                                     // 0x318(0x10)(ContainsInstancedReference)
	int64                                        _ForIndex_20;                                      // 0x328(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        _ForLength_21;                                     // 0x330(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FVerseStringProperty_                        __verse_0xFB88B569_Item_6;                         // 0x338(0x10)(HasGetValueTypeHash)
	TArray<FVerseDynamicProperty_>               _ExprResult_22;                                    // 0x348(0x10)(ContainsInstancedReference)
	FVerseStringProperty_                        __verse_0xFFC68BC5_Array_7;                        // 0x358(0x10)(HasGetValueTypeHash)
	TArray<FVerseDynamicProperty_>               _ForResult_23;                                     // 0x368(0x10)(ContainsInstancedReference)
	int64                                        _ForIndex_24;                                      // 0x378(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        _ForLength_25;                                     // 0x380(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        __verse_0xFB88B569_Item_9;                         // 0x388(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B97[0x7];                                     // Fixing Size After Last Property..
	FVerseDynamicProperty_                       _ExprResult_26;                                    // 0x390(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ForResult_27;                                     // 0x3A0(0x10)(HasGetValueTypeHash)
	int64                                        _ForIndex_28;                                      // 0x3B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        _ForLength_29;                                     // 0x3B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FVerseDynamicProperty_                       __verse_0xFB88B569_Item_11;                        // 0x3C0(0x10)(HasGetValueTypeHash)
	uint8                                        _ExprResult_30;                                    // 0x3D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B98[0x7];                                     // Fixing Size After Last Property..
	FVerseDynamicProperty_                       InvokeResultDummy_31;                              // 0x3D8(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_32;                               // 0x3E8(0x18)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       _ExprResult_33;                                    // 0x400(0x10)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       _ExprResult_34;                                    // 0x410(0x10)(HasGetValueTypeHash)
	class UObject*                               __verse_0x00000000__14;                            // 0x420(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConcurrency_task*                     _AsyncTask_35;                                     // 0x428(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_36;                                // 0x430(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_37;                                    // 0x440(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8B99[0x7];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_38;                                   // 0x448(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_39;                               // 0x450(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_40 : 1;                                // Mask: 0x1, PropSize: 0x10x452(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4D1 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8B9A[0x5];                                     // Fixing Size After Last Property..
	class UObject*                               __verse_0x00000000__16;                            // 0x458(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_41;                                        // 0x460(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_42;                                    // 0x470(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8B9B[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               __verse_0x00000000__18;                            // 0x478(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_43;                         // 0x480(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B9C[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_44;                                        // 0x488(0x10)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       InvokeResultDummy_45;                              // 0x498(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_46;                               // 0x4A8(0x18)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       _ExprResult_47;                                    // 0x4C0(0x10)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       _ExprResult_48;                                    // 0x4D0(0x10)(HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_49;                                // 0x4E0(0x10)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       InvokeResultDummy_50;                              // 0x4F0(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_51;                               // 0x500(0x18)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       _ExprResult_52;                                    // 0x518(0x10)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       _ExprResult_53;                                    // 0x528(0x10)(HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_54;                                // 0x538(0x10)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       InvokeResultDummy_55;                              // 0x548(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_56;                               // 0x558(0x18)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       _ExprResult_57;                                    // 0x570(0x10)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       _ExprResult_58;                                    // 0x580(0x10)(HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_59;                                // 0x590(0x10)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       InvokeResultDummy_60;                              // 0x5A0(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_61;                               // 0x5B0(0x18)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       _ExprResult_62;                                    // 0x5C8(0x10)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       _ExprResult_63;                                    // 0x5D8(0x10)(HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_64;                                // 0x5E8(0x10)(HasGetValueTypeHash)
	class UObject*                               __verse_0x00000000__24;                            // 0x5F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_65;                         // 0x600(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B9D[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_66;                                        // 0x608(0x10)(HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_67;                         // 0x618(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B9E[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_68;                                        // 0x620(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_69;                                    // 0x630(0x10)(HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$HandleNPCCommand_L_Nping__info_R");
		return Clss;
	}

	int64 Update();
};

// 0x228 (0x378 - 0x150)
// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$HandleObstacleService_L_N_Qentity_R
class UTask_CompanionAI_companion_ai_runtime_HandleObstacleService_L_N_Qentity_R : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*     _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0xB2CDDD72_Argument;                       // 0x158(0x8)(Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_0;                          // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B9F[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_1;                                         // 0x168(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_2;                                     // 0x178(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x39C5E53E_ObstacleInfo_1;                 // 0x188(0x30)(NoDestructor)
	class UConcurrency_task*                     _AsyncTask_3;                                      // 0x1B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_4;                                 // 0x1C0(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_5;                                     // 0x1D0(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8BA0[0x7];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_6;                                    // 0x1D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_7 : 1;                            // Mask: 0x1, PropSize: 0x10x1E0(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4D2 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        _AsyncBeginCount_8 : 1;                            // Mask: 0x1, PropSize: 0x10x1E1(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4D3 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8BA1[0x6];                                     // Fixing Size After Last Property..
	struct FVerseAIBase_fort_obstacle_info       __verse_0x82A44C52_Obstacle_4;                     // 0x1E8(0x28)(NoDestructor)
	FOptionProperty_                             _ExprResultStack_9;                                // 0x210(0x30)(NoDestructor)
	class UVerseEngine_Entity_entity*            __verse_0xBD80729A_CurrentTarget_5;                // 0x240(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_10;                               // 0x248(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_11;                               // 0x250(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResultStack_12 : 1;                           // Mask: 0x1, PropSize: 0x10x252(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4D4 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8BA2[0x5];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_13;                                        // 0x258(0x10)(HasGetValueTypeHash)
	struct FTuple_Lfort__obstacle__info_Mentity_R _ExprResult_14;                                    // 0x268(0x30)(HasGetValueTypeHash)
	class UConcurrency_task*                     _AsyncTask_15;                                     // 0x298(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_16;                                // 0x2A0(0x10)(HasGetValueTypeHash)
	int64                                        _AsyncResult_17;                                   // 0x2B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_18;                                // 0x2B8(0x10)(HasGetValueTypeHash)
	class UObject*                               __verse_0x00000000__7;                             // 0x2C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_19;                                // 0x2D0(0x10)(HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_20;                                // 0x2E0(0x10)(HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_21 : 1;                           // Mask: 0x1, PropSize: 0x10x2F0(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4D5 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8BA3[0x7];                                     // Fixing Size After Last Property..
	FOptionProperty_                             _ExprResult_22;                                    // 0x2F8(0x30)(NoDestructor)
	class UConcurrency_task*                     _AsyncTask_23;                                     // 0x328(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_24;                                // 0x330(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_25;                                    // 0x340(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8BA4[0x7];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_26;                                   // 0x348(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_27;                         // 0x350(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BA5[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_28;                                        // 0x358(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_29;                                    // 0x368(0x10)(HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$HandleObstacleService_L_N_Qentity_R");
		return Clss;
	}

	int64 Update();
};

// 0x160 (0x2B0 - 0x150)
// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$HandleReviveCommand_L_Nping__info_R
class UTask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*     _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FCompanionAI_ping_info                __verse_0xB2CDDD72_Argument;                       // 0x158(0x38)(Parm, NoDestructor)
	enum class EVerseTrue                        _InvokeSureResultDummy_0;                          // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BA6[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_1;                                         // 0x198(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_2;                                     // 0x1A8(0x10)(HasGetValueTypeHash)
	class USimulation_agent*                     __verse_0xFD64D7AA_Emitter_2;                      // 0x1B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_3;                                // 0x1C0(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        __verse_0xC96E9091_HasRevivedEmitter_3 : 1;        // Mask: 0x1, PropSize: 0x10x1C8(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4D6 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8BA7[0x7];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     _AsyncTask_4;                                      // 0x1D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_5;                                 // 0x1D8(0x10)(HasGetValueTypeHash)
	int64                                        _AsyncResult_6;                                    // 0x1E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_7;                                // 0x1F0(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BA8[0x6];                                     // Fixing Size After Last Property..
	TArray<class USimulation_agent*>             __verse_0xBFBCE682_TeamMembers_3;                  // 0x1F8(0x10)(ContainsInstancedReference)
	FVerseFunctionProperty_                      _Callee_8;                                         // 0x208(0x10)(HasGetValueTypeHash)
	struct FTuple_Lagent_Mtuple_L_R_Mtuple_L_R_R _ExprResult_9;                                     // 0x218(0xA)(HasGetValueTypeHash)
	uint8                                        Pad_8BA9[0x6];                                     // Fixing Size After Last Property..
	struct FTuple_L_R                            _ExprResult_10;                                    // 0x228(0x1)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_11;                                    // 0x229(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8BAA[0x6];                                     // Fixing Size After Last Property..
	int64                                        _ForIndex_12;                                      // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        _ForLength_13;                                     // 0x238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USimulation_agent*                     __verse_0xAE35E375_TeamMember_8;                   // 0x240(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint8                                        __verse_0x87226150_HasRevivedTeamMember_10 : 1;    // Mask: 0x1, PropSize: 0x10x248(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4D7 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8BAB[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _AsyncTaskClass_14;                                // 0x250(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_15;                               // 0x260(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BAC[0x6];                                     // Fixing Size After Last Property..
	class UObject*                               __verse_0x00000000__13;                            // 0x268(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_16;                         // 0x270(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BAD[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_17;                                        // 0x278(0x10)(HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_18;                         // 0x288(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BAE[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_19;                                        // 0x290(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_20;                                    // 0x2A0(0x10)(HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$HandleReviveCommand_L_Nping__info_R");
		return Clss;
	}

	int64 Update();
};

// 0x2A8 (0x3F8 - 0x150)
// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R
class UTask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*     _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_Lvector3_Mfloat_Mfloat_R       __verse_0xB2CDDD72_Argument;                       // 0x158(0x28)(Parm, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_0;                          // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BAF[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_1;                                         // 0x188(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_2;                                     // 0x198(0x10)(HasGetValueTypeHash)
	struct FSpatialMath_vector3                  __verse_0x68BA2569_RandomOffset_1;                 // 0x1A8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_3;                                // 0x1C0(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_4;                                     // 0x210(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_5;                                     // 0x220(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_6;                                     // 0x230(0x10)(HasGetValueTypeHash)
	double                                       _ExprResultStack_7;                                // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_8;                                         // 0x248(0x10)(HasGetValueTypeHash)
	struct FTuple_Ltype_7b_2d1_2e000000e_2b03_7d_Mtype_7b1_2e000000e_2b03_7d_R _ExprResult_9;                                     // 0x258(0x10)(HasGetValueTypeHash)
	double                                       _ExprResultStack_10;                               // 0x268(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_11;                                        // 0x270(0x10)(HasGetValueTypeHash)
	struct FTuple_Ltype_7b_2d1_2e000000e_2b03_7d_Mtype_7b1_2e000000e_2b03_7d_R _ExprResult_12;                                    // 0x280(0x10)(HasGetValueTypeHash)
	double                                       _ExprResultStack_13;                               // 0x290(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_14;                                        // 0x298(0x10)(HasGetValueTypeHash)
	struct FTuple_Ltype_7b5_2e000000e_2b01_7d_Mtype_7b2_2e000000e_2b02_7d_R _ExprResult_15;                                    // 0x2A8(0x10)(HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_16 : 1;                           // Mask: 0x1, PropSize: 0x10x2B8(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4D8 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        _AsyncBeginCount_17 : 1;                           // Mask: 0x1, PropSize: 0x10x2B9(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4D9 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8BB0[0x6];                                     // Fixing Size After Last Property..
	class UObject*                               __verse_0x00000000__2;                             // 0x2C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConcurrency_task*                     _AsyncTask_18;                                     // 0x2C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_19;                                // 0x2D0(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_20;                                    // 0x2E0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        _AsyncResult_21;                                   // 0x2F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_22 : 1;                           // Mask: 0x1, PropSize: 0x10x2F8(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4DA : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8BB1[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               __verse_0x00000000__3;                             // 0x300(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConcurrency_task*                     _AsyncTask_23;                                     // 0x308(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_24;                                // 0x310(0x10)(HasGetValueTypeHash)
	struct FSpatialMath_vector3                  _ExprResultStack_25;                               // 0x320(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	FVerseFunctionProperty_                      _Callee_26;                                        // 0x338(0x10)(HasGetValueTypeHash)
	struct FTuple_Lvector3_Mvector3_R            _ExprResult_27;                                    // 0x348(0x30)(HasGetValueTypeHash)
	int64                                        _AsyncResult_28;                                   // 0x378(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_29 : 1;                           // Mask: 0x1, PropSize: 0x10x380(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4DB : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8BB2[0x7];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     _AsyncTask_30;                                     // 0x388(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_31;                                // 0x390(0x10)(HasGetValueTypeHash)
	double                                       _ExprResultStack_32;                               // 0x3A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_33;                                        // 0x3A8(0x10)(HasGetValueTypeHash)
	struct FTuple_Lfloat_Mfloat_R                _ExprResult_34;                                    // 0x3B8(0x10)(HasGetValueTypeHash)
	int64                                        _AsyncResult_35;                                   // 0x3C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_36;                         // 0x3D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BB3[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_37;                                        // 0x3D8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_38;                                    // 0x3E8(0x10)(HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R");
		return Clss;
	}

	int64 Update();
};

// 0x2A0 (0x3F0 - 0x150)
// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$LookAtOrAttackTarget
class UTask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*     _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_0;                          // 0x159(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BB4[0x6];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_1;                                         // 0x160(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_2;                                     // 0x170(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x1EB80E5B_ThreatInfo_1;                   // 0x180(0x38)(NoDestructor)
	class UConcurrency_task*                     _AsyncTask_3;                                      // 0x1B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_4;                                 // 0x1C0(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_5;                                     // 0x1D0(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8BB5[0x7];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_6;                                    // 0x1D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVerseAIBase_fort_threat_info         __verse_0x26CBBAEB_CurrentThreatInfo_3;            // 0x1E0(0x30)(NoDestructor)
	FOptionProperty_                             _ExprResultStack_7;                                // 0x210(0x38)(NoDestructor)
	uint8                                        _AsyncBeginCount_8 : 1;                            // Mask: 0x1, PropSize: 0x10x248(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4DC : 7;                                    // Fixing Bit-Field Size..
	uint8                                        _AsyncBeginCount_9 : 1;                            // Mask: 0x1, PropSize: 0x10x249(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4DD : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8BB6[0x6];                                     // Fixing Size After Last Property..
	FOptionProperty_                             _ExprResult_10;                                    // 0x250(0x38)(NoDestructor)
	class UConcurrency_task*                     _AsyncTask_11;                                     // 0x288(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_12;                                // 0x290(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_13;                                    // 0x2A0(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8BB7[0x7];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_14;                                   // 0x2A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_15 : 1;                           // Mask: 0x1, PropSize: 0x10x2B0(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4DE : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8BB8[0x7];                                     // Fixing Size After Last Property..
	FOptionProperty_                             _ExprResult_16;                                    // 0x2B8(0x38)(NoDestructor)
	class UConcurrency_task*                     _AsyncTask_17;                                     // 0x2F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_18;                                // 0x2F8(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_19;                                    // 0x308(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8BB9[0x7];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_20;                                   // 0x310(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_21 : 1;                           // Mask: 0x1, PropSize: 0x10x318(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4DF : 7;                                    // Fixing Bit-Field Size..
	FOptionProperty_                             _ExprResultStack_22;                               // 0x319(0x2)(NoDestructor, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_23;                               // 0x31B(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BBA[0x3];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     _AsyncTask_24;                                     // 0x320(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_25;                                // 0x328(0x10)(HasGetValueTypeHash)
	int64                                        _AsyncResult_26;                                   // 0x338(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_27 : 1;                           // Mask: 0x1, PropSize: 0x10x340(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4E0 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        _AsyncBeginCount_28 : 1;                           // Mask: 0x1, PropSize: 0x10x341(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4E1 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8BBB[0x6];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     _AsyncTask_29;                                     // 0x348(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_30;                                // 0x350(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_31;                                    // 0x360(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8BBC[0x7];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_32;                                   // 0x368(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_33 : 1;                           // Mask: 0x1, PropSize: 0x10x370(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4E2 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8BBD[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               __verse_0x00000000__7;                             // 0x378(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConcurrency_task*                     _AsyncTask_34;                                     // 0x380(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_35;                                // 0x388(0x10)(HasGetValueTypeHash)
	struct FSpatialMath_vector3                  _ExprResultStack_36;                               // 0x398(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	FVerseFunctionProperty_                      _Callee_37;                                        // 0x3B0(0x10)(HasGetValueTypeHash)
	int64                                        _AsyncResult_38;                                   // 0x3C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_39;                         // 0x3C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BBE[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_40;                                        // 0x3D0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_41;                                    // 0x3E0(0x10)(HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$LookAtOrAttackTarget");
		return Clss;
	}

	int64 Update();
};

// 0x1C8 (0x318 - 0x150)
// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$LookAtThreatTask
class UTask_CompanionAI_companion_ai_runtime_LookAtThreatTask : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*     _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_0;                          // 0x159(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BBF[0x6];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_1;                                         // 0x160(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_2;                                     // 0x170(0x10)(HasGetValueTypeHash)
	struct FVerseAIBase_fort_threat_info         __verse_0x1EB80E5B_ThreatInfo_3;                   // 0x180(0x30)(NoDestructor)
	class UObject*                               __verse_0x00000000__4;                             // 0x1B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_3;                                // 0x1B8(0x38)(NoDestructor)
	FVerseFunctionProperty_                      _Callee_4;                                         // 0x1F0(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_5;                                     // 0x200(0x1)(HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_6 : 1;                            // Mask: 0x1, PropSize: 0x10x201(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4E3 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        _AsyncBeginCount_7 : 1;                            // Mask: 0x1, PropSize: 0x10x202(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4E4 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8BC0[0x5];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     _AsyncTask_8;                                      // 0x208(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_9;                                 // 0x210(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_10;                                    // 0x220(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8BC1[0x7];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_11;                                   // 0x228(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_12 : 1;                           // Mask: 0x1, PropSize: 0x10x230(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4E5 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8BC2[0x7];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     _AsyncTask_13;                                     // 0x238(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_14;                                // 0x240(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_15;                                    // 0x250(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8BC3[0x7];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_16;                                   // 0x258(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_17 : 1;                           // Mask: 0x1, PropSize: 0x10x260(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4E6 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8BC4[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               __verse_0x00000000__6;                             // 0x268(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConcurrency_task*                     _AsyncTask_18;                                     // 0x270(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_19;                                // 0x278(0x10)(HasGetValueTypeHash)
	struct FSpatialMath_vector3                  _ExprResultStack_20;                               // 0x288(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	FVerseFunctionProperty_                      _Callee_21;                                        // 0x2A0(0x10)(HasGetValueTypeHash)
	int64                                        _AsyncResult_22;                                   // 0x2B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_23;                                // 0x2B8(0x10)(HasGetValueTypeHash)
	class UConcurrency_task*                     _AsyncTask_24;                                     // 0x2C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_25;                                // 0x2D0(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_26;                                    // 0x2E0(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8BC5[0x7];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_27;                                   // 0x2E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_28;                         // 0x2F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BC6[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_29;                                        // 0x2F8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_30;                                    // 0x308(0x10)(HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$LookAtThreatTask");
		return Clss;
	}

	int64 Update();
};

// 0x2F8 (0x448 - 0x150)
// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$ReviveCommand_L_Nagent_R
class UTask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*     _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USimulation_agent*                     __verse_0xB2CDDD72_Argument;                       // 0x158(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint8                                        _RetVal : 1;                                       // Mask: 0x1, PropSize: 0x10x160(0x1)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4E7 : 7;                                    // Fixing Bit-Field Size..
	enum class EVerseTrue                        _InvokeSureResultDummy_0;                          // 0x161(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BC7[0x6];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_1;                                         // 0x168(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_2;                                     // 0x178(0x10)(HasGetValueTypeHash)
	class UObject*                               __verse_0x00000000__3;                             // 0x188(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_3;                                // 0x190(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_4;                                         // 0x198(0x10)(HasGetValueTypeHash)
	struct FTuple_Lagent_Mtuple_L_R_Mtuple_L_R_R _ExprResult_5;                                     // 0x1A8(0xA)(HasGetValueTypeHash)
	uint8                                        Pad_8BC8[0x6];                                     // Fixing Size After Last Property..
	struct FTuple_L_R                            _ExprResult_6;                                     // 0x1B8(0x1)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_7;                                     // 0x1B9(0x1)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_8;                                // 0x1BA(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BC9[0x4];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_9;                                         // 0x1C0(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_10;                                    // 0x1D0(0x1)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_11;                               // 0x1D1(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BCA[0x5];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_12;                                        // 0x1D8(0x10)(HasGetValueTypeHash)
	struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R _ExprResult_13;                                    // 0x1E8(0xA)(HasGetValueTypeHash)
	uint8                                        Pad_8BCB[0x6];                                     // Fixing Size After Last Property..
	FOptionProperty_                             _ExprResultStack_14;                               // 0x1F8(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_15;                                        // 0x200(0x10)(HasGetValueTypeHash)
	struct FTuple_Lagent_Mtuple_L_R_Mtuple_L_R_R _ExprResult_16;                                    // 0x210(0xA)(HasGetValueTypeHash)
	uint8                                        Pad_8BCC[0x6];                                     // Fixing Size After Last Property..
	struct FTuple_L_R                            _ExprResult_17;                                    // 0x220(0x1)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_18;                                    // 0x221(0x1)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_19;                                    // 0x222(0x1)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_20;                                    // 0x223(0x1)(HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_21 : 1;                           // Mask: 0x1, PropSize: 0x10x224(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4E8 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8BCD[0x3];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     _AsyncTask_22;                                     // 0x228(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_23;                                // 0x230(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_24;                                    // 0x240(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8BCE[0x7];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_25;                                   // 0x248(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_26 : 1;                           // Mask: 0x1, PropSize: 0x10x250(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4E9 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        _AsyncBeginCount_27 : 1;                           // Mask: 0x1, PropSize: 0x10x251(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4EA : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8BCF[0x6];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     _AsyncTask_28;                                     // 0x258(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_29;                                // 0x260(0x10)(HasGetValueTypeHash)
	int64                                        _AsyncResult_30;                                   // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __verse_0x00000000__6;                             // 0x278(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_31;                               // 0x280(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_32;                                        // 0x288(0x10)(HasGetValueTypeHash)
	struct FTuple_Lagent_Mtuple_L_R_Mtuple_L_R_R _ExprResult_33;                                    // 0x298(0xA)(HasGetValueTypeHash)
	uint8                                        Pad_8BD0[0x6];                                     // Fixing Size After Last Property..
	struct FTuple_L_R                            _ExprResult_34;                                    // 0x2A8(0x1)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_35;                                    // 0x2A9(0x1)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_36;                               // 0x2AA(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BD1[0x4];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_37;                                        // 0x2B0(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_38;                                    // 0x2C0(0x1)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_39;                               // 0x2C1(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BD2[0x5];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_40;                                        // 0x2C8(0x10)(HasGetValueTypeHash)
	struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R _ExprResult_41;                                    // 0x2D8(0xA)(HasGetValueTypeHash)
	uint8                                        Pad_8BD3[0x6];                                     // Fixing Size After Last Property..
	FOptionProperty_                             _ExprResultStack_42;                               // 0x2E8(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_43;                                        // 0x2F0(0x10)(HasGetValueTypeHash)
	struct FTuple_Lagent_Mtuple_L_R_Mtuple_L_R_R _ExprResult_44;                                    // 0x300(0xA)(HasGetValueTypeHash)
	uint8                                        Pad_8BD4[0x6];                                     // Fixing Size After Last Property..
	struct FTuple_L_R                            _ExprResult_45;                                    // 0x310(0x1)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_46;                                    // 0x311(0x1)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_47;                                    // 0x312(0x1)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_48;                                    // 0x313(0x1)(HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_49 : 1;                           // Mask: 0x1, PropSize: 0x10x314(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4EB : 7;                                    // Fixing Bit-Field Size..
	uint8                                        __verse_0x7EBDC403_HasReachedPosition_8 : 1;       // Mask: 0x1, PropSize: 0x10x315(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4EC : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8BD5[0x2];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     _AsyncTask_50;                                     // 0x318(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_51;                                // 0x320(0x10)(HasGetValueTypeHash)
	struct FTuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b5_2e000000e_2b01_7d_M_QAllowPartialPath_Nlogic_R _ExprResult_52;                                    // 0x330(0x3A)(HasGetValueTypeHash)
	uint8                                        Pad_8BD6[0x6];                                     // Fixing Size After Last Property..
	struct FSpatialMath_vector3                  _ExprResult_53;                                    // 0x370(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	FOptionProperty_                             _ExprResult_54;                                    // 0x388(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        __verse_0x19F8ABA1_Sprint_8 : 1;                   // Mask: 0x1, PropSize: 0x10x390(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4ED : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8BD7[0x7];                                     // Fixing Size After Last Property..
	FOptionProperty_                             _ExprResult_55;                                    // 0x398(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_56;                                    // 0x3A8(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BD8[0x6];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_57;                                   // 0x3B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_58;                               // 0x3B8(0x2)(NoDestructor, HasGetValueTypeHash)
	enum class EVerseAIBase_fallible_action_result __verse_0x40FB4916_ReviveResult_8;                 // 0x3BA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BD9[0x5];                                     // Fixing Size After Last Property..
	class UObject*                               __verse_0x00000000__11;                            // 0x3C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_59;                                // 0x3C8(0x10)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       InvokeResultDummy_60;                              // 0x3D8(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_61;                               // 0x3E8(0x18)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       _ExprResult_62;                                    // 0x400(0x10)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       _ExprResult_63;                                    // 0x410(0x10)(HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_64;                         // 0x420(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BDA[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_65;                                        // 0x428(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_66;                                    // 0x438(0x10)(HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$ReviveCommand_L_Nagent_R");
		return Clss;
	}

	int64 Update();
};

// 0x350 (0x4A0 - 0x150)
// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R
class UTask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*     _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_Lvector3_Mfloat_Magent_R       __verse_0xB2CDDD72_Argument;                       // 0x158(0x28)(Parm, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_0;                          // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BDB[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_1;                                         // 0x188(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_2;                                     // 0x198(0x10)(HasGetValueTypeHash)
	TArray<FVerseDynamicProperty_>               __verse_0xFFC68BC5_Array_2;                        // 0x1A8(0x10)(ContainsInstancedReference)
	FVerseFunctionProperty_                      _Callee_3;                                         // 0x1B8(0x10)(HasGetValueTypeHash)
	TArray<TArray<FVerseDynamicProperty_>>       _ExprResult_4;                                     // 0x1C8(0x10)(ContainsInstancedReference)
	TArray<FVerseStringProperty_>                __verse_0xFFC68BC5_Array_3;                        // 0x1D8(0x10)(ContainsInstancedReference)
	struct FTuple_L_Kchar_M_Kchar_R              __verse_0x00000000__4;                             // 0x1E8(0x20)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_5;                                     // 0x208(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResultStack_6;                                // 0x218(0x10)(HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_7;                                         // 0x228(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResultDummy_8;                                // 0x238(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResultDummy_9;                                // 0x248(0x10)(HasGetValueTypeHash)
	TArray<TArray<FVerseDynamicProperty_>>       _ForResult_10;                                     // 0x258(0x10)(ContainsInstancedReference)
	int64                                        _ForIndex_11;                                      // 0x268(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        _ForLength_12;                                     // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FVerseStringProperty_                        __verse_0xFB88B569_Item_6;                         // 0x278(0x10)(HasGetValueTypeHash)
	TArray<FVerseDynamicProperty_>               _ExprResult_13;                                    // 0x288(0x10)(ContainsInstancedReference)
	FVerseStringProperty_                        __verse_0xFFC68BC5_Array_7;                        // 0x298(0x10)(HasGetValueTypeHash)
	TArray<FVerseDynamicProperty_>               _ForResult_14;                                     // 0x2A8(0x10)(ContainsInstancedReference)
	int64                                        _ForIndex_15;                                      // 0x2B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        _ForLength_16;                                     // 0x2C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        __verse_0xFB88B569_Item_9;                         // 0x2C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BDC[0x7];                                     // Fixing Size After Last Property..
	FVerseDynamicProperty_                       _ExprResult_17;                                    // 0x2D0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ForResult_18;                                     // 0x2E0(0x10)(HasGetValueTypeHash)
	int64                                        _ForIndex_19;                                      // 0x2F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        _ForLength_20;                                     // 0x2F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FVerseDynamicProperty_                       __verse_0xFB88B569_Item_11;                        // 0x300(0x10)(HasGetValueTypeHash)
	uint8                                        _ExprResult_21;                                    // 0x310(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_22 : 1;                           // Mask: 0x1, PropSize: 0x10x311(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4EE : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8BDD[0x6];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     _AsyncTask_23;                                     // 0x318(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_24;                                // 0x320(0x10)(HasGetValueTypeHash)
	struct FTuple_Lvector3_Mfloat_Mcolor_R       _ExprResult_25;                                    // 0x330(0x38)(HasGetValueTypeHash)
	int64                                        _AsyncResult_26;                                   // 0x368(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __verse_0x00000000__12;                            // 0x370(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_27;                         // 0x378(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BDE[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_28;                                        // 0x380(0x10)(HasGetValueTypeHash)
	struct FTuple_Lvector3_Mtype_7b1_2e000000e_2b02_7d_Mfloat_R _ExprResult_29;                                    // 0x390(0x28)(HasGetValueTypeHash)
	class UConcurrency_task*                     _AsyncTask_30;                                     // 0x3B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_31;                                // 0x3C0(0x10)(HasGetValueTypeHash)
	int64                                        _AsyncResult_32;                                   // 0x3D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __verse_0x00000000__14;                            // 0x3D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_33;                         // 0x3E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BDF[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_34;                                        // 0x3E8(0x10)(HasGetValueTypeHash)
	struct FTuple_Lagent_Mfloat_Mfloat_R         _ExprResult_35;                                    // 0x3F8(0x18)(HasGetValueTypeHash)
	struct FTuple_Lfloat_Mfloat_R                _ExprResultStack_36;                               // 0x410(0x10)(HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_37;                                        // 0x420(0x10)(HasGetValueTypeHash)
	struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R _ExprResult_38;                                    // 0x430(0xA)(HasGetValueTypeHash)
	uint8                                        Pad_8BE0[0x6];                                     // Fixing Size After Last Property..
	struct FTuple_L_R                            _ExprResult_39;                                    // 0x440(0x1)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_40;                                    // 0x441(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8BE1[0x6];                                     // Fixing Size After Last Property..
	struct FTuple_Lfloat_Mfloat_R                _ExprResultStack_41;                               // 0x448(0x10)(HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_42;                                        // 0x458(0x10)(HasGetValueTypeHash)
	struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R _ExprResult_43;                                    // 0x468(0xA)(HasGetValueTypeHash)
	uint8                                        Pad_8BE2[0x6];                                     // Fixing Size After Last Property..
	struct FTuple_L_R                            _ExprResult_44;                                    // 0x478(0x1)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_45;                                    // 0x479(0x1)(HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_46;                         // 0x47A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BE3[0x5];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_47;                                        // 0x480(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_48;                                    // 0x490(0x10)(HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R");
		return Clss;
	}

	int64 Update();
};

// 0x348 (0x498 - 0x150)
// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$ShootTargetService_L_Nfloat_R
class UTask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*     _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       __verse_0xB2CDDD72_Argument;                       // 0x158(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_0;                          // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BE4[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_1;                                         // 0x168(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_2;                                     // 0x178(0x10)(HasGetValueTypeHash)
	class UConcurrency_task*                     _AsyncTask_3;                                      // 0x188(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_4;                                 // 0x190(0x10)(HasGetValueTypeHash)
	int64                                        _AsyncResult_5;                                    // 0x1A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVerseAIBase_fort_threat_info         __verse_0x1EB80E5B_ThreatInfo_3;                   // 0x1A8(0x30)(NoDestructor)
	class UObject*                               __verse_0x00000000__4;                             // 0x1D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_6;                                // 0x1E0(0x38)(NoDestructor)
	FVerseFunctionProperty_                      _Callee_7;                                         // 0x218(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_8;                                     // 0x228(0x1)(HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_9 : 1;                            // Mask: 0x1, PropSize: 0x10x229(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4EF : 7;                                    // Fixing Bit-Field Size..
	uint8                                        _AsyncBeginCount_10 : 1;                           // Mask: 0x1, PropSize: 0x10x22A(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4F0 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8BE5[0x5];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     _AsyncTask_11;                                     // 0x230(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_12;                                // 0x238(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_13;                                    // 0x248(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8BE6[0x7];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_14;                                   // 0x250(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_15 : 1;                           // Mask: 0x1, PropSize: 0x10x258(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4F1 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8BE7[0x7];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     _AsyncTask_16;                                     // 0x260(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_17;                                // 0x268(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_18;                                    // 0x278(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8BE8[0x7];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_19;                                   // 0x280(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_20 : 1;                           // Mask: 0x1, PropSize: 0x10x288(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4F2 : 7;                                    // Fixing Bit-Field Size..
	FOptionProperty_                             _ExprResultStack_21;                               // 0x289(0x2)(NoDestructor, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_22;                               // 0x28B(0x2)(NoDestructor, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_23;                         // 0x28D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BE9[0x2];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_24;                                        // 0x290(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_25;                                    // 0x2A0(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_26;                               // 0x2B0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       _ExprResultStack_27;                               // 0x2C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_28;                                        // 0x2C8(0x10)(HasGetValueTypeHash)
	struct FTuple_Lvector3_Mvector3_R            _ExprResult_29;                                    // 0x2D8(0x30)(HasGetValueTypeHash)
	struct FSpatialMath_vector3                  _ExprResultStack_30;                               // 0x308(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	FVerseFunctionProperty_                      _Callee_31;                                        // 0x320(0x10)(HasGetValueTypeHash)
	struct FSpatialMath_transform                _ExprResult_32;                                    // 0x330(0x60)(NoDestructor)
	class UObject*                               __verse_0x00000000__9;                             // 0x390(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_33;                                        // 0x398(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_34;                                    // 0x3A8(0x1)(HasGetValueTypeHash)
	enum class EVerseAIBase_action_result        __verse_0x95D09D0E_Result_8;                       // 0x3A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BEA[0x6];                                     // Fixing Size After Last Property..
	class UObject*                               __verse_0x00000000__10;                            // 0x3B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConcurrency_task*                     _AsyncTask_35;                                     // 0x3B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_36;                                // 0x3C0(0x10)(HasGetValueTypeHash)
	int64                                        _AsyncResult_37;                                   // 0x3D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FVerseDynamicProperty_                       InvokeResultDummy_38;                              // 0x3D8(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_39;                               // 0x3E8(0x18)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       _ExprResult_40;                                    // 0x400(0x10)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       _ExprResult_41;                                    // 0x410(0x10)(HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_42;                                // 0x420(0x10)(HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_43;                                // 0x430(0x10)(HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_44;                                // 0x440(0x10)(HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_45;                                // 0x450(0x10)(HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_46;                                // 0x460(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_47;                                    // 0x470(0x1)(HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_48;                         // 0x471(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BEB[0x6];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_49;                                        // 0x478(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_50;                                    // 0x488(0x10)(HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$ShootTargetService_L_Nfloat_R");
		return Clss;
	}

	int64 Update();
};

// 0x40 (0x190 - 0x150)
// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$SprintService
class UTask_CompanionAI_companion_ai_runtime_SprintService : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*     _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8BEC[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               __verse_0x00000000__2;                             // 0x160(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConcurrency_task*                     _AsyncTask_0;                                      // 0x168(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_1;                                 // 0x170(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_2;                                     // 0x180(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8BED[0x7];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_3;                                    // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$SprintService");
		return Clss;
	}

	int64 Update();
};

// 0x40 (0x190 - 0x150)
// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$TacticalSprintService
class UTask_CompanionAI_companion_ai_runtime_TacticalSprintService : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*     _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8BEE[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               __verse_0x00000000__2;                             // 0x160(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConcurrency_task*                     _AsyncTask_0;                                      // 0x168(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_1;                                 // 0x170(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_2;                                     // 0x180(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8BEF[0x7];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_3;                                    // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$TacticalSprintService");
		return Clss;
	}

	int64 Update();
};

// 0x108 (0x258 - 0x150)
// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$WaitForDamageService
class UTask_CompanionAI_companion_ai_runtime_WaitForDamageService : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*     _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_0;                          // 0x159(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BF0[0x6];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_1;                                         // 0x160(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_2;                                     // 0x170(0x10)(HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_3 : 1;                            // Mask: 0x1, PropSize: 0x10x180(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4F3 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        _AsyncBeginCount_4 : 1;                            // Mask: 0x1, PropSize: 0x10x181(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4F4 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8BF1[0x6];                                     // Fixing Size After Last Property..
	class UObject*                               __verse_0x00000000__2;                             // 0x188(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                               __verse_0x00000000__3;                             // 0x190(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_5;                                         // 0x198(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_6;                                     // 0x1A8(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8BF2[0x7];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     _AsyncTask_7;                                      // 0x1B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_8;                                 // 0x1B8(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_9;                                     // 0x1C8(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8BF3[0x7];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_10;                                   // 0x1D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_11 : 1;                           // Mask: 0x1, PropSize: 0x10x1D8(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4F5 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8BF4[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               __verse_0x00000000__4;                             // 0x1E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                               __verse_0x00000000__5;                             // 0x1E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_12;                                        // 0x1F0(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_13;                                    // 0x200(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8BF5[0x7];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     _AsyncTask_14;                                     // 0x208(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_15;                                // 0x210(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_16;                                    // 0x220(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8BF6[0x7];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_17;                                   // 0x228(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_18;                         // 0x230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BF7[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_19;                                        // 0x238(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_20;                                    // 0x248(0x10)(HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$WaitForDamageService");
		return Clss;
	}

	int64 Update();
};

// 0xB8 (0x208 - 0x150)
// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$WaitForTargetInVehicleService_L_Nfort__character_R
class UTask_CompanionAI_companion_ai_runtime_WaitForTargetInVehicleService_L_Nfort__character_R : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*     _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __verse_0xB2CDDD72_Argument;                       // 0x158(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_0;                          // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BF8[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_1;                                         // 0x168(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_2;                                     // 0x178(0x10)(HasGetValueTypeHash)
	class UObject*                               __verse_0x4BB95041_Vehicle_3;                      // 0x188(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_3;                                // 0x190(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_4;                                         // 0x198(0x10)(HasGetValueTypeHash)
	struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R _ExprResult_5;                                     // 0x1A8(0xA)(HasGetValueTypeHash)
	uint8                                        Pad_8BF9[0x6];                                     // Fixing Size After Last Property..
	struct FTuple_L_R                            _ExprResult_6;                                     // 0x1B8(0x1)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_7;                                     // 0x1B9(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8BFA[0x6];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     _AsyncTask_8;                                      // 0x1C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_9;                                 // 0x1C8(0x10)(HasGetValueTypeHash)
	int64                                        _AsyncResult_10;                                   // 0x1D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_11;                         // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BFB[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_12;                                        // 0x1E8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_13;                                    // 0x1F8(0x10)(HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$WaitForTargetInVehicleService_L_Nfort__character_R");
		return Clss;
	}

	int64 Update();
};

// 0x1B0 (0x300 - 0x150)
// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$WaitForTargetMovementService_L_Nfort__character_M_Nfloat_R
class UTask_CompanionAI_companion_ai_runtime_WaitForTargetMovementService_L_Nfort__character_M_Nfloat_R : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*     _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_Lfort__character_Mfloat_R      __verse_0xB2CDDD72_Argument;                       // 0x158(0x10)(Parm, HasGetValueTypeHash)
	struct FSpatialMath_vector3                  __verse_0x455F599A_ReferencePosition_1;            // 0x168(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSpatialMath_transform                _ExprResult_0;                                     // 0x180(0x60)(NoDestructor)
	class UObject*                               __verse_0x00000000__2;                             // 0x1E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_1;                                         // 0x1E8(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_2;                                     // 0x1F8(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8BFC[0x7];                                     // Fixing Size After Last Property..
	double                                       __verse_0x525BA815_DistanceFromReferencePosition_3; // 0x200(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_3;                                         // 0x208(0x10)(HasGetValueTypeHash)
	struct FTuple_Lvector3_Mvector3_R            _ExprResult_4;                                     // 0x218(0x30)(HasGetValueTypeHash)
	uint8                                        Pad_8BFD[0x8];                                     // Fixing Size After Last Property..
	struct FSpatialMath_transform                _ExprResult_5;                                     // 0x250(0x60)(NoDestructor)
	class UObject*                               __verse_0x00000000__4;                             // 0x2B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_6;                                         // 0x2B8(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_7;                                     // 0x2C8(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8BFE[0x7];                                     // Fixing Size After Last Property..
	FOptionProperty_                             _ExprResultStack_8;                                // 0x2D0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UConcurrency_task*                     _AsyncTask_9;                                      // 0x2E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_10;                                // 0x2E8(0x10)(HasGetValueTypeHash)
	int64                                        _AsyncResult_11;                                   // 0x2F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$WaitForTargetMovementService_L_Nfort__character_M_Nfloat_R");
		return Clss;
	}

	int64 Update();
};

// 0x201 (0x351 - 0x150)
// VerseClass CompanionAI.task_CompanionAI_companion_creature$DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R
class UTask_CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R : public UConcurrency_task
{
public:
	class UCompanionAI_companion_creature*       _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_Lvector3_Mfloat_Mcolor_R       __verse_0xB2CDDD72_Argument;                       // 0x158(0x38)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_0;                                // 0x190(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BFF[0x6];                                     // Fixing Size After Last Property..
	class UDiagnostics_debug_draw*               __verse_0x00000000__4;                             // 0x198(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_1;                          // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C00[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_2;                                         // 0x1A8(0x10)(HasGetValueTypeHash)
	struct FTuple_Lvector3_M_QRadius_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QNumSegments_Nint_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R _ExprResult_3;                                     // 0x1B8(0x80)(HasGetValueTypeHash)
	struct FTuple_Lvector3_M_QColor_Ncolor_M_QRadius_Nfloat_M_QThickness_Ntype_7b3_2e000000_7d_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_M_QNumSegments_Ntype_7b32_7d_R __verse_0x00000000__5;                             // 0x238(0x70)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_4;                                     // 0x2A8(0x20)(ZeroConstructor, IsPlainOldData, NoDestructor)
	FOptionProperty_                             _ExprResult_5;                                     // 0x2C8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_6;                                     // 0x2D8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_7;                                     // 0x2E8(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C01[0x6];                                     // Fixing Size After Last Property..
	FOptionProperty_                             _ExprResult_8;                                     // 0x2F0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_9;                                     // 0x300(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UConcurrency_task*                     _AsyncTask_10;                                     // 0x310(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_11;                                // 0x318(0x10)(HasGetValueTypeHash)
	int64                                        _AsyncResult_12;                                   // 0x328(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDiagnostics_debug_draw*               __verse_0x00000000__7;                             // 0x330(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_13;                         // 0x338(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C02[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_14;                                        // 0x340(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_15;                                    // 0x350(0x1)(HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_CompanionAI_companion_creature$DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R");
		return Clss;
	}

	int64 Update();
};

// 0x372 (0x4C2 - 0x150)
// VerseClass CompanionAI.task_CompanionAI_companion_creature$OnBegin
class UTask_CompanionAI_companion_creature_OnBegin : public UConcurrency_task
{
public:
	class UCompanionAI_companion_creature*       _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_0;                                // 0x159(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C03[0x5];                                     // Fixing Size After Last Property..
	class UDiagnostics_debug_draw*               __verse_0x00000000__3;                             // 0x160(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_1;                          // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C04[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_2;                                         // 0x170(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_3;                                     // 0x180(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8C05[0x7];                                     // Fixing Size After Last Property..
	class USimulation_agent*                     __verse_0x75EB3F0A_Agent_4;                        // 0x188(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_4;                                // 0x190(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_5;                                         // 0x198(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_6;                                     // 0x1A8(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8C06[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               __verse_0x963EC691_Character_5;                    // 0x1B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_7;                                // 0x1B8(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_8;                                         // 0x1C0(0x10)(HasGetValueTypeHash)
	struct FTuple_Lagent_Mtuple_L_R_Mtuple_L_R_R _ExprResult_9;                                     // 0x1D0(0xA)(HasGetValueTypeHash)
	uint8                                        Pad_8C07[0x6];                                     // Fixing Size After Last Property..
	struct FTuple_L_R                            _ExprResult_10;                                    // 0x1E0(0x1)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_11;                                    // 0x1E1(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8C08[0x6];                                     // Fixing Size After Last Property..
	class UObject*                               __verse_0xD2827887_Navigatable_6;                  // 0x1E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_12;                               // 0x1F0(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_13;                                        // 0x1F8(0x10)(HasGetValueTypeHash)
	struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R _ExprResult_14;                                    // 0x208(0xA)(HasGetValueTypeHash)
	uint8                                        Pad_8C09[0x6];                                     // Fixing Size After Last Property..
	struct FTuple_L_R                            _ExprResult_15;                                    // 0x218(0x1)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_16;                                    // 0x219(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8C0A[0x6];                                     // Fixing Size After Last Property..
	class UGame_Abilities_ability_component*     __verse_0x8FB74E85_AbilitySystemComponent_7;       // 0x220(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_17;                               // 0x228(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_18;                                        // 0x230(0x10)(HasGetValueTypeHash)
	class UObject*                               __verse_0xDE2F615F_Perception_8;                   // 0x240(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_19;                               // 0x248(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_20;                                        // 0x250(0x10)(HasGetValueTypeHash)
	struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R _ExprResult_21;                                    // 0x260(0xA)(HasGetValueTypeHash)
	uint8                                        Pad_8C0B[0x6];                                     // Fixing Size After Last Property..
	struct FTuple_L_R                            _ExprResult_22;                                    // 0x270(0x1)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_23;                                    // 0x271(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8C0C[0x6];                                     // Fixing Size After Last Property..
	class UObject*                               __verse_0xE91D96EF_Actions_9;                      // 0x278(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_24;                               // 0x280(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_25;                                        // 0x288(0x10)(HasGetValueTypeHash)
	struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R _ExprResult_26;                                    // 0x298(0xA)(HasGetValueTypeHash)
	uint8                                        Pad_8C0D[0x6];                                     // Fixing Size After Last Property..
	struct FTuple_L_R                            _ExprResult_27;                                    // 0x2A8(0x1)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_28;                                    // 0x2A9(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8C0E[0x6];                                     // Fixing Size After Last Property..
	class UCompanionAI_companion_creature_runtime* __verse_0xEF3B3F75_Runtime_10;                     // 0x2B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCompanionAI_companion_creature_runtime* __verse_0x00000000__11;                            // 0x2B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConcurrency_task*                     _AsyncTask_30;                                     // 0x2C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_31;                                // 0x2C8(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_32;                                    // 0x2D8(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8C0F[0x7];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_33;                                   // 0x2E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDiagnostics_log*                      __verse_0x00000000__13;                            // 0x2E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_34;                         // 0x2F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C10[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_35;                                        // 0x2F8(0x10)(HasGetValueTypeHash)
	struct FTuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R _ExprResult_36;                                    // 0x308(0x12)(HasGetValueTypeHash)
	uint8                                        Pad_8C11[0x6];                                     // Fixing Size After Last Property..
	FVerseStringProperty_                        _ExprResult_37;                                    // 0x320(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_38;                                    // 0x330(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C12[0x6];                                     // Fixing Size After Last Property..
	class UDiagnostics_log*                      __verse_0x00000000__15;                            // 0x338(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_39;                         // 0x340(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C13[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_40;                                        // 0x348(0x10)(HasGetValueTypeHash)
	struct FTuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R _ExprResult_41;                                    // 0x358(0x12)(HasGetValueTypeHash)
	uint8                                        Pad_8C14[0x6];                                     // Fixing Size After Last Property..
	FVerseStringProperty_                        _ExprResult_42;                                    // 0x370(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_43;                                    // 0x380(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C15[0x6];                                     // Fixing Size After Last Property..
	class UDiagnostics_log*                      __verse_0x00000000__17;                            // 0x388(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_44;                         // 0x390(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C16[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_45;                                        // 0x398(0x10)(HasGetValueTypeHash)
	struct FTuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R _ExprResult_46;                                    // 0x3A8(0x12)(HasGetValueTypeHash)
	uint8                                        Pad_8C17[0x6];                                     // Fixing Size After Last Property..
	FVerseStringProperty_                        _ExprResult_47;                                    // 0x3C0(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_48;                                    // 0x3D0(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C18[0x6];                                     // Fixing Size After Last Property..
	class UDiagnostics_log*                      __verse_0x00000000__19;                            // 0x3D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_49;                         // 0x3E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C19[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_50;                                        // 0x3E8(0x10)(HasGetValueTypeHash)
	struct FTuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R _ExprResult_51;                                    // 0x3F8(0x12)(HasGetValueTypeHash)
	uint8                                        Pad_8C1A[0x6];                                     // Fixing Size After Last Property..
	FVerseStringProperty_                        _ExprResult_52;                                    // 0x410(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_53;                                    // 0x420(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C1B[0x6];                                     // Fixing Size After Last Property..
	class UDiagnostics_log*                      __verse_0x00000000__21;                            // 0x428(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_54;                         // 0x430(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C1C[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_55;                                        // 0x438(0x10)(HasGetValueTypeHash)
	struct FTuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R _ExprResult_56;                                    // 0x448(0x12)(HasGetValueTypeHash)
	uint8                                        Pad_8C1D[0x6];                                     // Fixing Size After Last Property..
	FVerseStringProperty_                        _ExprResult_57;                                    // 0x460(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_58;                                    // 0x470(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C1E[0x6];                                     // Fixing Size After Last Property..
	class UDiagnostics_log*                      __verse_0x00000000__23;                            // 0x478(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_59;                         // 0x480(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C1F[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_60;                                        // 0x488(0x10)(HasGetValueTypeHash)
	struct FTuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R _ExprResult_61;                                    // 0x498(0x12)(HasGetValueTypeHash)
	uint8                                        Pad_8C20[0x6];                                     // Fixing Size After Last Property..
	FVerseStringProperty_                        _ExprResult_62;                                    // 0x4B0(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_63;                                    // 0x4C0(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_CompanionAI_companion_creature$OnBegin");
		return Clss;
	}

	int64 Update(uint64 _InstancingGraph_29);
};

// 0x268 (0x3B8 - 0x150)
// VerseClass CompanionAI.task_CompanionAI_companion_creature_runtime$ActivateAbilityWhenCloseEnough_L_Nagent_M_Ngameplay__ability__asset_M_Nfloat_M_Nfloat_R
class UTask_CompanionAI_companion_creature_runtime_ActivateAbilityWhenCloseEnough_L_Nagent_M_Ngameplay__ability__asset_M_Nfloat_M_Nfloat_R : public UConcurrency_task
{
public:
	class UCompanionAI_companion_creature_runtime* _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_Lagent_Mgameplay__ability__asset_Mfloat_Mfloat_R __verse_0xB2CDDD72_Argument;                       // 0x158(0x20)(Parm, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_0;                          // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C21[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_1;                                         // 0x180(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_2;                                     // 0x190(0x10)(HasGetValueTypeHash)
	struct FVerseAIBase_fort_threat_info         __verse_0x08287148_Snapshot_3;                     // 0x1A0(0x30)(NoDestructor)
	class UObject*                               __verse_0x00000000__4;                             // 0x1D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_3;                                // 0x1D8(0x38)(NoDestructor)
	FVerseFunctionProperty_                      _Callee_4;                                         // 0x210(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_5;                                // 0x220(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       _ExprResultStack_6;                                // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_7;                                         // 0x238(0x10)(HasGetValueTypeHash)
	struct FTuple_Lvector3_Mvector3_R            _ExprResult_8;                                     // 0x248(0x30)(HasGetValueTypeHash)
	uint8                                        Pad_8C22[0x8];                                     // Fixing Size After Last Property..
	struct FSpatialMath_transform                _ExprResult_9;                                     // 0x280(0x60)(NoDestructor)
	class UObject*                               __verse_0x00000000__6;                             // 0x2E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_10;                                        // 0x2E8(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_11;                                    // 0x2F8(0x1)(HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_12;                         // 0x2F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C23[0x6];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_13;                                        // 0x300(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_14;                                    // 0x310(0x10)(HasGetValueTypeHash)
	class UGame_Abilities_ability_component*     __verse_0x00000000__7;                             // 0x320(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConcurrency_task*                     _AsyncTask_15;                                     // 0x328(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_16;                                // 0x330(0x10)(HasGetValueTypeHash)
	struct FTuple_Lgameplay__ability__asset_M_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R _ExprResult_17;                                    // 0x340(0x18)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_18;                                    // 0x358(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	int64                                        _AsyncResult_19;                                   // 0x368(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_20;                                // 0x370(0x10)(HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_21;                                // 0x380(0x10)(HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_22;                         // 0x390(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C24[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_23;                                        // 0x398(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_24;                                    // 0x3A8(0x10)(HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_CompanionAI_companion_creature_runtime$ActivateAbilityWhenCloseEnough_L_Nagent_M_Ngameplay__ability__asset_M_Nfloat_M_Nfloat_R");
		return Clss;
	}

	int64 Update();
};

// 0x1A0 (0x2F0 - 0x150)
// VerseClass CompanionAI.task_CompanionAI_companion_creature_runtime$DetectMovement_L_Nvector3_M_Nagent_M_Nfloat_R
class UTask_CompanionAI_companion_creature_runtime_DetectMovement_L_Nvector3_M_Nagent_M_Nfloat_R : public UConcurrency_task
{
public:
	class UCompanionAI_companion_creature_runtime* _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_Lvector3_Magent_Mfloat_R       __verse_0xB2CDDD72_Argument;                       // 0x158(0x28)(Parm, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_0;                          // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C25[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_1;                                         // 0x188(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_2;                                     // 0x198(0x10)(HasGetValueTypeHash)
	struct FVerseAIBase_fort_threat_info         __verse_0xE7A6CCE2_UpdatedSnapshot_3;              // 0x1A8(0x30)(NoDestructor)
	class UObject*                               __verse_0x00000000__4;                             // 0x1D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_3;                                // 0x1E0(0x38)(NoDestructor)
	FVerseFunctionProperty_                      _Callee_4;                                         // 0x218(0x10)(HasGetValueTypeHash)
	double                                       __verse_0x06CF9E69_TargetDisplacement_3;           // 0x228(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_5;                                         // 0x230(0x10)(HasGetValueTypeHash)
	struct FTuple_Lvector3_Mvector3_R            _ExprResult_6;                                     // 0x240(0x30)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_7;                                // 0x270(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_8;                          // 0x280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C26[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_9;                                         // 0x288(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_10;                                    // 0x298(0x10)(HasGetValueTypeHash)
	class UConcurrency_task*                     _AsyncTask_11;                                     // 0x2A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_12;                                // 0x2B0(0x10)(HasGetValueTypeHash)
	int64                                        _AsyncResult_13;                                   // 0x2C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_14;                         // 0x2C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C27[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_15;                                        // 0x2D0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_16;                                    // 0x2E0(0x10)(HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_CompanionAI_companion_creature_runtime$DetectMovement_L_Nvector3_M_Nagent_M_Nfloat_R");
		return Clss;
	}

	int64 Update();
};

// 0x2F0 (0x440 - 0x150)
// VerseClass CompanionAI.task_CompanionAI_companion_creature_runtime$DetectNewTarget
class UTask_CompanionAI_companion_creature_runtime_DetectNewTarget : public UConcurrency_task
{
public:
	class UCompanionAI_companion_creature_runtime* _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C28[0x7];                                     // Fixing Size After Last Property..
	FOptionProperty_                             _RetVal;                                           // 0x160(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_0;                          // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C29[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_1;                                         // 0x170(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_2;                                     // 0x180(0x10)(HasGetValueTypeHash)
	struct FSpatialMath_vector3                  __verse_0x5DB9D5B4_MyLocation_1;                   // 0x190(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8C2A[0x8];                                     // Fixing Size After Last Property..
	struct FSpatialMath_transform                _ExprResult_3;                                     // 0x1B0(0x60)(NoDestructor)
	class UObject*                               __verse_0x00000000__2;                             // 0x210(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_4;                                         // 0x218(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_5;                                     // 0x228(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8C2B[0x7];                                     // Fixing Size After Last Property..
	double                                       __verse_0xF8082B80_CurrentTargetBonusWeight_1;     // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __verse_0xF868BEBF_TargetDistanceWeightMultiplier_1; // 0x238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __verse_0x614F22D2_BestTargetWeight_3;             // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x0C4C0F51_BestTarget_3;                   // 0x248(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x00000000__4;                             // 0x250(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_6 : 1;                                 // Mask: 0x1, PropSize: 0x10x252(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4F6 : 7;                                    // Fixing Bit-Field Size..
	FOptionProperty_                             _ExprResultStack_7;                                // 0x253(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C2C[0x3];                                     // Fixing Size After Last Property..
	TArray<struct FVerseAIBase_fort_threat_info> _ForIterable_8;                                    // 0x258(0x10)(ContainsInstancedReference)
	class UObject*                               __verse_0x00000000__8;                             // 0x268(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_9;                                // 0x270(0x18)(ContainsInstancedReference)
	FVerseFunctionProperty_                      _Callee_10;                                        // 0x288(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_11;                                    // 0x298(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8C2D[0x7];                                     // Fixing Size After Last Property..
	int64                                        _ForIndex_12;                                      // 0x2A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        _ForLength_13;                                     // 0x2A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVerseAIBase_fort_threat_info         __verse_0x1EB80E5B_ThreatInfo_9;                   // 0x2B0(0x30)(NoDestructor)
	FOptionProperty_                             _ExprResultStack_14;                               // 0x2E0(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_15;                               // 0x2E8(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C2E[0x6];                                     // Fixing Size After Last Property..
	double                                       __verse_0x29AC0864_ThreatDistance_12;              // 0x2F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_16;                                        // 0x2F8(0x10)(HasGetValueTypeHash)
	struct FTuple_Lvector3_Mvector3_R            _ExprResult_17;                                    // 0x308(0x30)(HasGetValueTypeHash)
	double                                       __verse_0xC6D24390_Weight_12;                      // 0x338(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       _ExprResult_18;                                    // 0x340(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_19;                               // 0x348(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FVerseDynamicProperty_                       InvokeResultDummy_20;                              // 0x358(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_21;                               // 0x368(0x18)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       _ExprResult_22;                                    // 0x380(0x10)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       _ExprResult_23;                                    // 0x390(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_24;                               // 0x3A0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FVerseDynamicProperty_                       InvokeResultDummy_25;                              // 0x3B0(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_26;                               // 0x3C0(0x18)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       _ExprResult_27;                                    // 0x3D8(0x10)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       _ExprResult_28;                                    // 0x3E8(0x10)(HasGetValueTypeHash)
	class UConcurrency_task*                     _AsyncTask_29;                                     // 0x3F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_30;                                // 0x400(0x10)(HasGetValueTypeHash)
	int64                                        _AsyncResult_31;                                   // 0x410(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_32;                         // 0x418(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C2F[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_33;                                        // 0x420(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_34;                                    // 0x430(0x10)(HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_CompanionAI_companion_creature_runtime$DetectNewTarget");
		return Clss;
	}

	int64 Update();
};

// 0x1C0 (0x310 - 0x150)
// VerseClass CompanionAI.task_CompanionAI_companion_creature_runtime$EngageTarget_L_Nagent_M_Ngameplay__ability__asset_R
class UTask_CompanionAI_companion_creature_runtime_EngageTarget_L_Nagent_M_Ngameplay__ability__asset_R : public UConcurrency_task
{
public:
	class UCompanionAI_companion_creature_runtime* _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_Lagent_Mgameplay__ability__asset_R __verse_0xB2CDDD72_Argument;                       // 0x158(0x10)(Parm, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_0;                          // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C30[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_1;                                         // 0x170(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_2;                                     // 0x180(0x10)(HasGetValueTypeHash)
	class UGame_Abilities_gameplay_ability_asset* __verse_0xC4B561B1_HowlAbility_1;                  // 0x190(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_3;                                         // 0x198(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_4;                                     // 0x1A8(0x10)(HasGetValueTypeHash)
	class UGame_Abilities_ability_component*     __verse_0x00000000__2;                             // 0x1B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EGame_Abilities_add_ability_result _InvokeSureResultDummy_5;                          // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C31[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_6;                                         // 0x1C8(0x10)(HasGetValueTypeHash)
	class UGame_Abilities_ability_component*     __verse_0x00000000__3;                             // 0x1D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConcurrency_task*                     _AsyncTask_7;                                      // 0x1E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_8;                                 // 0x1E8(0x10)(HasGetValueTypeHash)
	struct FTuple_Lgameplay__ability__asset_M_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R _ExprResult_9;                                     // 0x1F8(0x18)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_10;                                    // 0x210(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	int64                                        _AsyncResult_11;                                   // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_12;                                // 0x228(0x10)(HasGetValueTypeHash)
	double                                       __verse_0xBF8FBE20_MeleeRange_1;                   // 0x238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_13 : 1;                           // Mask: 0x1, PropSize: 0x10x240(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4F7 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        _AsyncBeginCount_14 : 1;                           // Mask: 0x1, PropSize: 0x10x241(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4F8 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8C32[0x6];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     _AsyncTask_15;                                     // 0x248(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_16;                                // 0x250(0x10)(HasGetValueTypeHash)
	int64                                        _AsyncResult_17;                                   // 0x260(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_18 : 1;                           // Mask: 0x1, PropSize: 0x10x268(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4F9 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8C33[0x7];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     _AsyncTask_19;                                     // 0x270(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_20;                                // 0x278(0x10)(HasGetValueTypeHash)
	struct FTuple_Lagent_Mtype_7b2_2e000000e_2b02_7d_R _ExprResult_21;                                    // 0x288(0x10)(HasGetValueTypeHash)
	int64                                        _AsyncResult_22;                                   // 0x298(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_23 : 1;                           // Mask: 0x1, PropSize: 0x10x2A0(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4FA : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8C34[0x7];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     _AsyncTask_24;                                     // 0x2A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_25;                                // 0x2B0(0x10)(HasGetValueTypeHash)
	struct FTuple_Lagent_Mgameplay__ability__asset_Mtype_7b2_2e000000e_2b02_7d_Mtype_7b3_2e000000_7d_R _ExprResult_26;                                    // 0x2C0(0x20)(HasGetValueTypeHash)
	int64                                        _AsyncResult_27;                                   // 0x2E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_28;                         // 0x2E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C35[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_29;                                        // 0x2F0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_30;                                    // 0x300(0x10)(HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_CompanionAI_companion_creature_runtime$EngageTarget_L_Nagent_M_Ngameplay__ability__asset_R");
		return Clss;
	}

	int64 Update();
};

// 0xE1 (0x231 - 0x150)
// VerseClass CompanionAI.task_CompanionAI_companion_creature_runtime$GameLoop
class UTask_CompanionAI_companion_creature_runtime_GameLoop : public UConcurrency_task
{
public:
	class UCompanionAI_companion_creature_runtime* _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C36[0x7];                                     // Fixing Size After Last Property..
	class UGame_Abilities_gameplay_ability_asset* __verse_0x7F5D3678_MeleeAttackAbility_1;           // 0x160(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_0;                                         // 0x168(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_1;                                     // 0x178(0x10)(HasGetValueTypeHash)
	class UGame_Abilities_ability_component*     __verse_0x00000000__2;                             // 0x188(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EGame_Abilities_add_ability_result _InvokeSureResultDummy_2;                          // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C37[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_3;                                         // 0x198(0x10)(HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_4 : 1;                            // Mask: 0x1, PropSize: 0x10x1A8(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4FB : 7;                                    // Fixing Bit-Field Size..
	uint8                                        _AsyncBeginCount_5 : 1;                            // Mask: 0x1, PropSize: 0x10x1A9(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4FC : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8C38[0x6];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     _AsyncTask_6;                                      // 0x1B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_7;                                 // 0x1B8(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_8;                                     // 0x1C8(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8C39[0x7];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_9;                                    // 0x1D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_10 : 1;                           // Mask: 0x1, PropSize: 0x10x1D8(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4FD : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8C3A[0x7];                                     // Fixing Size After Last Property..
	class USimulation_agent*                     __verse_0x459049A1_Target_4;                       // 0x1E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_11;                               // 0x1E8(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class UConcurrency_task*                     _AsyncTask_12;                                     // 0x1F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_13;                                // 0x1F8(0x10)(HasGetValueTypeHash)
	struct FTuple_Lagent_Mgameplay__ability__asset_R _ExprResult_14;                                    // 0x208(0x10)(HasGetValueTypeHash)
	int64                                        _AsyncResult_15;                                   // 0x218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_16;                                // 0x220(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_17;                                    // 0x230(0x1)(HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_CompanionAI_companion_creature_runtime$GameLoop");
		return Clss;
	}

	int64 Update();
};

// 0xE8 (0x238 - 0x150)
// VerseClass CompanionAI.task_CompanionAI_companion_creature_runtime$LookAtLKP_L_Nagent_R
class UTask_CompanionAI_companion_creature_runtime_LookAtLKP_L_Nagent_R : public UConcurrency_task
{
public:
	class UCompanionAI_companion_creature_runtime* _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USimulation_agent*                     __verse_0xB2CDDD72_Argument;                       // 0x158(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVerseAIBase_fort_threat_info         __verse_0x08287148_Snapshot_2;                     // 0x160(0x30)(NoDestructor)
	class UObject*                               __verse_0x00000000__3;                             // 0x190(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_0;                                // 0x198(0x38)(NoDestructor)
	FVerseFunctionProperty_                      _Callee_1;                                         // 0x1D0(0x10)(HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_2 : 1;                            // Mask: 0x1, PropSize: 0x10x1E0(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4FE : 7;                                    // Fixing Bit-Field Size..
	uint8                                        _AsyncBeginCount_3 : 1;                            // Mask: 0x1, PropSize: 0x10x1E1(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4FF : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8C3B[0x6];                                     // Fixing Size After Last Property..
	class UObject*                               __verse_0x00000000__4;                             // 0x1E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConcurrency_task*                     _AsyncTask_4;                                      // 0x1F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_5;                                 // 0x1F8(0x10)(HasGetValueTypeHash)
	int64                                        _AsyncResult_6;                                    // 0x208(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_7 : 1;                            // Mask: 0x1, PropSize: 0x10x210(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_500 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8C3C[0x7];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     _AsyncTask_8;                                      // 0x218(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_9;                                 // 0x220(0x10)(HasGetValueTypeHash)
	int64                                        _AsyncResult_10;                                   // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_CompanionAI_companion_creature_runtime$LookAtLKP_L_Nagent_R");
		return Clss;
	}

	int64 Update();
};

// 0x660 (0x7B0 - 0x150)
// VerseClass CompanionAI.task_CompanionAI_companion_creature_runtime$PatrolAround
class UTask_CompanionAI_companion_creature_runtime_PatrolAround : public UConcurrency_task
{
public:
	class UCompanionAI_companion_creature_runtime* _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C3D[0x7];                                     // Fixing Size After Last Property..
	struct FSpatialMath_vector3                  __verse_0xFE3AE8F0_OriginalPosition_1;             // 0x160(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8C3E[0x8];                                     // Fixing Size After Last Property..
	struct FSpatialMath_transform                _ExprResult_0;                                     // 0x180(0x60)(NoDestructor)
	class UObject*                               __verse_0x00000000__2;                             // 0x1E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_1;                                         // 0x1E8(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_2;                                     // 0x1F8(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8C3F[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               __verse_0x00000000__4;                             // 0x200(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConcurrency_task*                     _AsyncTask_3;                                      // 0x208(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_4;                                 // 0x210(0x10)(HasGetValueTypeHash)
	struct FTuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R _ExprResult_5;                                     // 0x220(0x1A)(HasGetValueTypeHash)
	uint8                                        Pad_8C40[0x6];                                     // Fixing Size After Last Property..
	class UAI_navigation_target*                 _ExprResultStack_7;                                // 0x240(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_8;                                         // 0x248(0x10)(HasGetValueTypeHash)
	struct FSpatialMath_vector3                  _ExprResultStack_9;                                // 0x258(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	FVerseFunctionProperty_                      _Callee_10;                                        // 0x270(0x10)(HasGetValueTypeHash)
	struct FTuple_Lvector3_Mvector3_R            _ExprResult_11;                                    // 0x280(0x30)(HasGetValueTypeHash)
	struct FSpatialMath_vector3                  _ExprResult_12;                                    // 0x2B0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_13;                               // 0x2C8(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_14;                                    // 0x318(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_15;                                    // 0x328(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_16;                                    // 0x338(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_17;                                    // 0x348(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_18;                                    // 0x358(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C41[0x6];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_19;                                   // 0x360(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_20;                                // 0x368(0x10)(HasGetValueTypeHash)
	class UObject*                               __verse_0x00000000__5;                             // 0x378(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_21;                                // 0x380(0x10)(HasGetValueTypeHash)
	struct FTuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R _ExprResult_22;                                    // 0x390(0x1A)(HasGetValueTypeHash)
	uint8                                        Pad_8C42[0x6];                                     // Fixing Size After Last Property..
	class UAI_navigation_target*                 _ExprResultStack_24;                               // 0x3B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_25;                                        // 0x3B8(0x10)(HasGetValueTypeHash)
	struct FSpatialMath_vector3                  _ExprResultStack_26;                               // 0x3C8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	FVerseFunctionProperty_                      _Callee_27;                                        // 0x3E0(0x10)(HasGetValueTypeHash)
	struct FTuple_Lvector3_Mvector3_R            _ExprResult_28;                                    // 0x3F0(0x30)(HasGetValueTypeHash)
	struct FSpatialMath_vector3                  _ExprResult_29;                                    // 0x420(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_30;                               // 0x438(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_31;                                    // 0x488(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_32;                                    // 0x498(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_33;                                    // 0x4A8(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_34;                                    // 0x4B8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_35;                                    // 0x4C8(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C43[0x6];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _AsyncTaskClass_36;                                // 0x4D0(0x10)(HasGetValueTypeHash)
	class UObject*                               __verse_0x00000000__6;                             // 0x4E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_37;                                // 0x4E8(0x10)(HasGetValueTypeHash)
	struct FTuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R _ExprResult_38;                                    // 0x4F8(0x1A)(HasGetValueTypeHash)
	uint8                                        Pad_8C44[0x6];                                     // Fixing Size After Last Property..
	class UAI_navigation_target*                 _ExprResultStack_40;                               // 0x518(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_41;                                        // 0x520(0x10)(HasGetValueTypeHash)
	struct FSpatialMath_vector3                  _ExprResultStack_42;                               // 0x530(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	FVerseFunctionProperty_                      _Callee_43;                                        // 0x548(0x10)(HasGetValueTypeHash)
	struct FTuple_Lvector3_Mvector3_R            _ExprResult_44;                                    // 0x558(0x30)(HasGetValueTypeHash)
	struct FSpatialMath_vector3                  _ExprResult_45;                                    // 0x588(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_46;                               // 0x5A0(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_47;                                    // 0x5F0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_48;                                    // 0x600(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_49;                                    // 0x610(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_50;                                    // 0x620(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_51;                                    // 0x630(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C45[0x6];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _AsyncTaskClass_52;                                // 0x638(0x10)(HasGetValueTypeHash)
	class UObject*                               __verse_0x00000000__7;                             // 0x648(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_53;                                // 0x650(0x10)(HasGetValueTypeHash)
	struct FTuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R _ExprResult_54;                                    // 0x660(0x1A)(HasGetValueTypeHash)
	uint8                                        Pad_8C46[0x6];                                     // Fixing Size After Last Property..
	class UAI_navigation_target*                 _ExprResultStack_56;                               // 0x680(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_57;                                        // 0x688(0x10)(HasGetValueTypeHash)
	struct FSpatialMath_vector3                  _ExprResultStack_58;                               // 0x698(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	FVerseFunctionProperty_                      _Callee_59;                                        // 0x6B0(0x10)(HasGetValueTypeHash)
	struct FTuple_Lvector3_Mvector3_R            _ExprResult_60;                                    // 0x6C0(0x30)(HasGetValueTypeHash)
	struct FSpatialMath_vector3                  _ExprResult_61;                                    // 0x6F0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_62;                               // 0x708(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_63;                                    // 0x758(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_64;                                    // 0x768(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_65;                                    // 0x778(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_66;                                    // 0x788(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_67;                                    // 0x798(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C47[0x6];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _AsyncTaskClass_68;                                // 0x7A0(0x10)(HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_CompanionAI_companion_creature_runtime$PatrolAround");
		return Clss;
	}

	int64 Update(uint64 _InstancingGraph_6, uint64 _InstancingGraph_23, uint64 _InstancingGraph_39, uint64 _InstancingGraph_55);
};

// 0x2F0 (0x440 - 0x150)
// VerseClass CompanionAI.task_CompanionAI_companion_creature_runtime$SeekLKP_L_Nagent_M_Nfloat_R
class UTask_CompanionAI_companion_creature_runtime_SeekLKP_L_Nagent_M_Nfloat_R : public UConcurrency_task
{
public:
	class UCompanionAI_companion_creature_runtime* _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_Lagent_Mfloat_R                __verse_0xB2CDDD72_Argument;                       // 0x158(0x10)(Parm, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_0;                          // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C48[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_1;                                         // 0x170(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_2;                                     // 0x180(0x10)(HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_3;                          // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C49[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_4;                                         // 0x198(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_5;                                     // 0x1A8(0x10)(HasGetValueTypeHash)
	struct FVerseAIBase_fort_threat_info         __verse_0x08287148_Snapshot_3;                     // 0x1B8(0x30)(NoDestructor)
	class UObject*                               __verse_0x00000000__4;                             // 0x1E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_6;                                // 0x1F0(0x38)(NoDestructor)
	FVerseFunctionProperty_                      _Callee_7;                                         // 0x228(0x10)(HasGetValueTypeHash)
	struct FSpatialMath_vector3                  __verse_0x4550A2D9_MyPosition_3;                   // 0x238(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSpatialMath_transform                _ExprResult_8;                                     // 0x250(0x60)(NoDestructor)
	class UObject*                               __verse_0x00000000__5;                             // 0x2B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_9;                                         // 0x2B8(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_10;                                    // 0x2C8(0x1)(HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_11 : 1;                           // Mask: 0x1, PropSize: 0x10x2C9(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_501 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        _AsyncBeginCount_12 : 1;                           // Mask: 0x1, PropSize: 0x10x2CA(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_502 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8C4A[0x5];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     _AsyncTask_13;                                     // 0x2D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_14;                                // 0x2D8(0x10)(HasGetValueTypeHash)
	struct FTuple_Lvector3_Magent_Mfloat_R       _ExprResult_15;                                    // 0x2E8(0x28)(HasGetValueTypeHash)
	int64                                        _AsyncResult_16;                                   // 0x310(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_17 : 1;                           // Mask: 0x1, PropSize: 0x10x318(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_503 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8C4B[0x7];                                     // Fixing Size After Last Property..
	double                                       __verse_0x47C7BD3D_DistanceToLKP_7;                // 0x320(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_18;                                        // 0x328(0x10)(HasGetValueTypeHash)
	struct FTuple_Lvector3_Mvector3_R            _ExprResult_19;                                    // 0x338(0x30)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_20;                               // 0x368(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __verse_0x00000000__9;                             // 0x378(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConcurrency_task*                     _AsyncTask_21;                                     // 0x380(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_22;                                // 0x388(0x10)(HasGetValueTypeHash)
	struct FTuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R _ExprResult_23;                                    // 0x398(0x1A)(HasGetValueTypeHash)
	uint8                                        Pad_8C4C[0x6];                                     // Fixing Size After Last Property..
	struct FTuple_Lnavigation__target_M_QReachRadius_Nfloat_R __verse_0x00000000__10;                            // 0x3B8(0x18)(HasGetValueTypeHash)
	class UAI_navigation_target*                 _ExprResultStack_25;                               // 0x3D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_26;                                        // 0x3D8(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_27;                                    // 0x3E8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_28;                                    // 0x3F8(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C4D[0x6];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_29;                                   // 0x400(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_30;                                // 0x408(0x10)(HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_31;                         // 0x418(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C4E[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_32;                                        // 0x420(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_33;                                    // 0x430(0x10)(HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_CompanionAI_companion_creature_runtime$SeekLKP_L_Nagent_M_Nfloat_R");
		return Clss;
	}

	int64 Update(uint64 _InstancingGraph_24);
};

// 0xC8 (0x218 - 0x150)
// VerseClass CompanionAI.task_CompanionAI_default_ai_behavior$OnBegin
class UTask_CompanionAI_default_ai_behavior_OnBegin : public UConcurrency_task
{
public:
	class UCompanionAI_default_ai_behavior*      _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C4F[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               __verse_0x963EC691_Character_1;                    // 0x160(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_0;                                // 0x168(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_1;                                         // 0x170(0x10)(HasGetValueTypeHash)
	struct FTuple_Lagent_Mtuple_L_R_Mtuple_L_R_R _ExprResult_2;                                     // 0x180(0xA)(HasGetValueTypeHash)
	uint8                                        Pad_8C50[0x6];                                     // Fixing Size After Last Property..
	FOptionProperty_                             _ExprResultStack_3;                                // 0x190(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_4;                                         // 0x198(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_5;                                     // 0x1A8(0x1)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_6;                                     // 0x1A9(0x1)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_7;                                     // 0x1AA(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8C51[0x5];                                     // Fixing Size After Last Property..
	class UObject*                               __verse_0x03CEBA4E_CharacterActions_1;             // 0x1B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_8;                                // 0x1B8(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_9;                                         // 0x1C0(0x10)(HasGetValueTypeHash)
	struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R _ExprResult_10;                                    // 0x1D0(0xA)(HasGetValueTypeHash)
	uint8                                        Pad_8C52[0x6];                                     // Fixing Size After Last Property..
	struct FTuple_L_R                            _ExprResult_11;                                    // 0x1E0(0x1)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_12;                                    // 0x1E1(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8C53[0x6];                                     // Fixing Size After Last Property..
	class UObject*                               __verse_0x00000000__3;                             // 0x1E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConcurrency_task*                     _AsyncTask_13;                                     // 0x1F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_14;                                // 0x1F8(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_15;                                    // 0x208(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8C54[0x7];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_16;                                   // 0x210(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_CompanionAI_default_ai_behavior$OnBegin");
		return Clss;
	}

	int64 Update();
};

// 0xA (0x15A - 0x150)
// VerseClass CompanionAI.task_CompanionAI_fort_br_character_actions_interface$RunDefaultBehavior
class UTask_CompanionAI_fort_br_character_actions_interface_RunDefaultBehavior : public UConcurrency_task
{
public:
	class UCompanionAI_fort_br_character_actions_interface* _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	enum class EVerseAIBase_action_result        _RetVal;                                           // 0x159(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_CompanionAI_fort_br_character_actions_interface$RunDefaultBehavior");
		return Clss;
	}

	int64 Update();
};

// 0xA (0x15A - 0x150)
// VerseClass CompanionAI.task_CompanionAI_fort_br_creature_actions_interface$RunDefaultBehavior
class UTask_CompanionAI_fort_br_creature_actions_interface_RunDefaultBehavior : public UConcurrency_task
{
public:
	class UCompanionAI_fort_br_creature_actions_interface* _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	enum class EVerseAIBase_action_result        _RetVal;                                           // 0x159(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_CompanionAI_fort_br_creature_actions_interface$RunDefaultBehavior");
		return Clss;
	}

	int64 Update();
};

// 0xA (0x15A - 0x150)
// VerseClass CompanionAI.task_CompanionAI_fort_creature_component$RunDefaultBehavior
class UTask_CompanionAI_fort_creature_component_RunDefaultBehavior : public UConcurrency_task
{
public:
	class UCompanionAI_fort_creature_component*  _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	enum class EVerseAIBase_action_result        _RetVal;                                           // 0x159(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_CompanionAI_fort_creature_component$RunDefaultBehavior");
		return Clss;
	}

	int64 Update();
};

// 0xA (0x15A - 0x150)
// VerseClass CompanionAI.task_CompanionAI_fort_npc_component$RunDefaultBehavior
class UTask_CompanionAI_fort_npc_component_RunDefaultBehavior : public UConcurrency_task
{
public:
	class UCompanionAI_fort_npc_component*       _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	enum class EVerseAIBase_action_result        _RetVal;                                           // 0x159(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_CompanionAI_fort_npc_component$RunDefaultBehavior");
		return Clss;
	}

	int64 Update();
};

// 0x50 (0x1A0 - 0x150)
// VerseClass CompanionAI.task_CompanionAI_fort_ping_interface$OnNPCCommand
class UTask_CompanionAI_fort_ping_interface_OnNPCCommand : public UConcurrency_task
{
public:
	class UCompanionAI_fort_ping_interface*      _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C55[0x7];                                     // Fixing Size After Last Property..
	FOptionProperty_                             _RetVal;                                           // 0x160(0x40)(Parm, OutParm, ReturnParm, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_CompanionAI_fort_ping_interface$OnNPCCommand");
		return Clss;
	}

	int64 Update();
};

// 0x50 (0x1A0 - 0x150)
// VerseClass CompanionAI.task_CompanionAI_ping_component$OnNPCCommand
class UTask_CompanionAI_ping_component_OnNPCCommand : public UConcurrency_task
{
public:
	class UCompanionAI_ping_component*           _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C56[0x7];                                     // Fixing Size After Last Property..
	FOptionProperty_                             _RetVal;                                           // 0x160(0x40)(Parm, OutParm, ReturnParm, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_CompanionAI_ping_component$OnNPCCommand");
		return Clss;
	}

	int64 Update();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
