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
// VerseClass VerseBasicGameplay.$SolarisSignatureFunctionOuter
class U_SolarisSignatureFunctionOuter : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("$SolarisSignatureFunctionOuter");
		return Clss;
	}

};

// 0x158 (0x2A8 - 0x150)
// VerseClass VerseBasicGameplay.task_VerseBasicGameplay_PlayerManager_basic_player_manager_impl$BeginWaitingForEvents
class UTask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents : public UConcurrency_task
{
public:
	class UVerseBasicGameplay_PlayerManager_basic_player_manager_impl* _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_3DF6[0x7];                                     // Fixing Size After Last Property
	int64                                        _AsyncEndCount_0;                                  // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_1 : 1;                            // Mask: 0x1, PropSize: 0x10x168(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_21F : 7;                                    // Fixing Bit-Field Size
	uint8                                        Pad_3DF7[0x7];                                     // Fixing Size After Last Property
	class USimulation_player*                    __verse_0x31268F5C_PlayerAdded_1;                  // 0x170(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USimulation_player_component*          __verse_0x00000000__2;                             // 0x178(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayspace_playspace_component*        __verse_0x00000000__3;                             // 0x180(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConcurrency_task*                     _AsyncTask_2;                                      // 0x188(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_3;                                 // 0x190(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_4;                                     // 0x1A0(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_3DFC[0x7];                                     // Fixing Size After Last Property
	int64                                        _AsyncResult_5;                                    // 0x1A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_6;                                         // 0x1B0(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_7;                                     // 0x1C0(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_3E03[0x7];                                     // Fixing Size After Last Property
	class USimulation_player_multicast_delegate* __verse_0x8C908304_MulticastDelegate_4;            // 0x1C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _FallibleType_8;                                   // 0x1D0(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class USimulation_player_multicast_delegate* __verse_0x00000000__5;                             // 0x1D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_9;                          // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E05[0x7];                                     // Fixing Size After Last Property
	FVerseFunctionProperty_                      _Callee_10;                                        // 0x1E8(0x10)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       _ExprResult_11;                                    // 0x1F8(0x10)(HasGetValueTypeHash)
	uint8                                        _AsyncBeginCount_12 : 1;                           // Mask: 0x1, PropSize: 0x10x208(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_220 : 7;                                    // Fixing Bit-Field Size
	uint8                                        Pad_3E08[0x7];                                     // Fixing Size After Last Property
	class USimulation_player*                    __verse_0x0B5DEACA_PlayerRemoved_6;                // 0x210(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USimulation_player_component*          __verse_0x00000000__7;                             // 0x218(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayspace_playspace_component*        __verse_0x00000000__8;                             // 0x220(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConcurrency_task*                     _AsyncTask_13;                                     // 0x228(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_14;                                // 0x230(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_15;                                    // 0x240(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_3E0C[0x7];                                     // Fixing Size After Last Property
	int64                                        _AsyncResult_16;                                   // 0x248(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_17;                                        // 0x250(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_18;                                    // 0x260(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_3E0D[0x7];                                     // Fixing Size After Last Property
	class USimulation_player_multicast_delegate* __verse_0x8C908304_MulticastDelegate_9;            // 0x268(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _FallibleType_19;                                  // 0x270(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class USimulation_player_multicast_delegate* __verse_0x00000000__10;                            // 0x278(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_20;                         // 0x280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E0F[0x7];                                     // Fixing Size After Last Property
	FVerseFunctionProperty_                      _Callee_21;                                        // 0x288(0x10)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       _ExprResult_22;                                    // 0x298(0x10)(HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_VerseBasicGameplay_PlayerManager_basic_player_manager_impl$BeginWaitingForEvents");
		return Clss;
	}

	int64 Update();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseBasicGameplay.VerseBasicGameplay_PlayerManager
class UVerseBasicGameplay_PlayerManager : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseBasicGameplay_PlayerManager");
		return Clss;
	}

	FOptionProperty_ _L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R(const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument, FOptionProperty_ __verse_0x00000000__1, FOptionProperty_ __verse_0xE3700E84_MaybeEntity_2, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Lvector3_M_Kchar_R& _ExprResult_1, FVerseStringProperty_ _ExprResult_2, class UVerseEngine_Entity_entity* __verse_0x5F5E89D8_ValidEntity_3, FOptionProperty_ _ExprResultStack_3, class UVGameplayRst_Transform_position_component* __verse_0x0A5C85D0_PosComp_3, FOptionProperty_ _FallibleType_4, FOptionProperty_ _ExprResultStack_5, FOptionProperty_ _ExprResult_6, class UVerseEngine_Entity_entity* __verse_0x00000000__4, FVerseFunctionProperty_ _Callee_7, class UPlayspace_playspace_component* __verse_0x9F23064A_ThePlayspaceComp_3, FOptionProperty_ _FallibleType_8, FOptionProperty_ _ExprResultStack_9, FOptionProperty_ _ExprResult_10, class UVerseEngine_Entity_entity* __verse_0x00000000__5, FVerseFunctionProperty_ _Callee_11, class UVGameplayRst_Transform_position_component* __verse_0x00000000__7, enum class EVerseTrue _InvokeSureResultDummy_12, FVerseFunctionProperty_ _Callee_13, class UVerseBasicGameplay_PlayerManager_basic_player_manager_impl* __verse_0xD8BFBA84_BasicPlayerManager_6, uint64 _InstancingGraph_14, class UVerseBasicGameplay_PlayerManager_basic_player_manager_impl* __verse_0x00000000__8, class UConcurrency_task* _AsyncTask_15, FVerseFunctionProperty_ _AsyncTaskClass_16, const struct FTuple_L_R& _ExprResult_17, int64 _AsyncResult_18, uint8 _ExprResult_19, FOptionProperty_ _ExprResultStack_20);
	void _InitCDO();
};

// 0x38 (0x60 - 0x28)
// VerseClass VerseBasicGameplay.VerseBasicGameplay_PlayerManager_basic_player_manager
class UVerseBasicGameplay_PlayerManager_basic_player_manager : public UObject
{
public:
	class UPlayspace_playspace_component*        __verse_0xBC454097_ThePlayspace;                   // 0x28(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                               __verse_0x7DC483AF_PlayerAddedEvent;               // 0x30(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                               __verse_0x5DE94DD9_PlayerRemovedEvent;             // 0x38(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x59C8D3EE__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayerCount; // 0x40(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x01F9C820__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers; // 0x50(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseBasicGameplay_PlayerManager_basic_player_manager");
		return Clss;
	}

	TArray<class USimulation_player*> _L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, const TArray<class USimulation_player*>& _ForResult_0, const TArray<class USimulation_player_component*>& _ForIterable_1, class UPlayspace_playspace_component* __verse_0x00000000__3, FVerseFunctionProperty_ _Callee_2, int64 _ForIndex_3, int64 _ForLength_4, class USimulation_player_component* __verse_0x1AA69DA0_PlayerComp_4, class USimulation_player* _ExprResult_5, class USimulation_player_component* __verse_0x00000000__7, FVerseFunctionProperty_ _Callee_6, const struct FTuple_L_R& _ExprResult_7);
	int64 _L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayerCount(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, class UPlayspace_playspace_component* __verse_0x00000000__1, FVerseFunctionProperty_ _Callee_0);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x10 (0x70 - 0x60)
// VerseClass VerseBasicGameplay.VerseBasicGameplay_PlayerManager_basic_player_manager_impl
class UVerseBasicGameplay_PlayerManager_basic_player_manager_impl : public UVerseBasicGameplay_PlayerManager_basic_player_manager
{
public:
	FVerseFunctionProperty_                      __verse_0xAB577854_BeginWaitingForEvents;          // 0x60(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseBasicGameplay_PlayerManager_basic_player_manager_impl");
		return Clss;
	}

	class UConcurrency_task* BeginWaitingForEvents(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO(class USimulation_player_multicast_delegate* _ExprResult_0, uint64 _InstancingGraph_1, class USimulation_player_multicast_delegate* _ExprResult_2, uint64 _InstancingGraph_3);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
