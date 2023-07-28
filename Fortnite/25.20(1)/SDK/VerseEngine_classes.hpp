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
// VerseClass VerseEngine.$SolarisSignatureFunctionOuter
class U_SolarisSignatureFunctionOuter : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("$SolarisSignatureFunctionOuter");
		return Clss;
	}

};

// 0x20 (0x170 - 0x150)
// VerseClass VerseEngine.task_VerseEngine_subscribable_event$Await
class UTask_VerseEngine_subscribable_event_Await : public UConcurrency_task
{
public:
	class UVerseEngine_subscribable_event*       _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_4720[0x7];                                     // Fixing Size After Last Property..
	FVerseDynamicProperty_                       _RetVal;                                           // 0x160(0x10)(Parm, OutParm, ReturnParm, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_VerseEngine_subscribable_event$Await");
		return Clss;
	}

	int64 Update();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseEngine.VerseEngine
class UVerseEngine : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseEngine");
		return Clss;
	}

	class UClass* _L_2fVerse_2eorg_2fVerseEngine_N_Rsubscribable__event_L_Nt_20where_20t_R(class UClass* __verse_0xB2CDDD72_Argument);
	class UClass* _L_2fVerse_2eorg_2fVerseEngine_N_Rsubscribable__event(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0);
	class UClass* _L_2fVerse_2eorg_2fVerseEngine_N_Rmulticast__delegate_L_Nt_20where_20t_R(class UClass* __verse_0xB2CDDD72_Argument);
	class UClass* _L_2fVerse_2eorg_2fVerseEngine_N_Rmulticast__delegate(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0);
	void _InitCDO();
};

// 0xB8 (0xE0 - 0x28)
// VerseClass VerseEngine.VerseEngine_Entity_entity
class UVerseEngine_Entity_entity : public UObject
{
public:
	FVerseFunctionProperty_                      __verse_0x370466DA__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RAddComponent_L_NComponentType_20where_20ComponentType_R; // 0x28(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x6CDE1760__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RRemoveComponent_L_Ncomponent_R; // 0x38(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xFF4720DE__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RHasComponents_L_N_Ksubtype_Lcomponent_R_R; // 0x48(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xF82444AF__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_REnsureComponents_L_N_Ksubtype_Lcomponent_R_R; // 0x58(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x6C470E29__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetComponentOfType_L_NComponentType_20where_20ComponentType_R; // 0x68(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x6F1CCD75__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetAllComponentsOfType_L_NComponentType_20where_20ComponentType_R; // 0x78(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x0D438DE2__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetOrCreateComponentOfType_L_NComponentType_20where_20ComponentType_R; // 0x88(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xD0A22E5C__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RDestroy; // 0x98(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xFD2C7399__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetName; // 0xA8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x13AF8BC4__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetFullname; // 0xB8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xF9F147A4__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RIsEqual_L_Nentity_R; // 0xC8(0x10)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_4726[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseEngine_Entity_entity");
		return Clss;
	}

	uint8 _L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RRemoveComponent_L_Ncomponent_R(class UEntityComponent* __verse_0xB2CDDD72_Argument);
	uint8 _L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RIsEqual_L_Nentity_R(class UVerseEngine_Entity_entity* __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RHasComponents_L_N_Ksubtype_Lcomponent_R_R(const TArray<class UClass*>& __verse_0xB2CDDD72_Argument, uint8 _ExprResult_0, int64 _ForIndex_1, int64 _ForLength_2, class UClass* __verse_0xF655308E_ComponentClass_4, FOptionProperty_ _ExprResultStack_3, FOptionProperty_ _ExprResultStack_4, FVerseFunctionProperty_ _Callee_5, FOptionProperty_ _ExprResultStack_6);
	FOptionProperty_ _L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetOrCreateComponentOfType_L_NComponentType_20where_20ComponentType_R(class UClass* __verse_0xB2CDDD72_Argument);
	FVerseStringProperty_ _L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetName(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FVerseStringProperty_ _L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetFullname(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetComponentOfType_L_NComponentType_20where_20ComponentType_R(class UClass* __verse_0xB2CDDD72_Argument);
	TArray<class UEntityComponent*> _L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetAllComponentsOfType_L_NComponentType_20where_20ComponentType_R(class UClass* __verse_0xB2CDDD72_Argument);
	void _L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_REnsureComponents_L_N_Ksubtype_Lcomponent_R_R(const TArray<class UClass*>& __verse_0xB2CDDD72_Argument, int64 _ForIndex_0, int64 _ForLength_1, class UClass* __verse_0xF655308E_ComponentClass_4, FOptionProperty_ _InvokeSureResultDummy_2, FVerseFunctionProperty_ _Callee_3);
	uint8 _L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RDestroy(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RAddComponent_L_NComponentType_20where_20ComponentType_R(class UClass* __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseEngine.VerseEngine_Entity_EntityHelpers
class UVerseEngine_Entity_EntityHelpers : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseEngine_Entity_EntityHelpers");
		return Clss;
	}

	FOptionProperty_ _L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fEntityHelpers_N_RGetEntityFromComponent_L_Ncomponent_R(class UEntityComponent* __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fEntityHelpers_N_RGetComponentOfTypeC_L_Ncomponent_M_NType_20where_20Type_R(const struct FTuple_Lcomponent_Many_R& __verse_0xB2CDDD72_Argument);
	uint8 _L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fEntityHelpers_N_RDestroyObject_L_Ncomponent_R(class UEntityComponent* __verse_0xB2CDDD72_Argument);
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseEngine.VerseEngine_multicast_delegate_base
class UVerseEngine_multicast_delegate_base : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseEngine_multicast_delegate_base");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x70 (0x98 - 0x28)
// VerseClass VerseEngine.VerseEngine_multicast_delegate
class UVerseEngine_multicast_delegate : public UVerseEngine_multicast_delegate_base
{
public:
	uint8                                        Pad_4727[0x40];                                    // Fixing Size After Last Property..
	FVerseFunctionProperty_                      __verse_0x885C3C19__L_2fVerse_2eorg_2fVerseEngine_2fmulticast__delegate_2fmulticast__delegate_Lt_R_N_RBroadcast_L_Nt_R; // 0x68(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xE4680DC9__L_2fVerse_2eorg_2fVerseEngine_2fmulticast__delegate_2fmulticast__delegate_Lt_R_N_REmpty; // 0x78(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xC9C8F929__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R; // 0x88(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseEngine_multicast_delegate");
		return Clss;
	}

	class UObject* _L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R(FVerseFunctionProperty_ __verse_0xB2CDDD72_Argument);
	void _L_2fVerse_2eorg_2fVerseEngine_2fmulticast__delegate_2fmulticast__delegate_Lt_R_N_REmpty(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fVerse_2eorg_2fVerseEngine_2fmulticast__delegate_2fmulticast__delegate_Lt_R_N_RBroadcast_L_Nt_R(FVerseDynamicProperty_ __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x28 (0x50 - 0x28)
// VerseClass VerseEngine.VerseEngine_multicast_delegate_subscription
class UVerseEngine_multicast_delegate_subscription : public UObject
{
public:
	FVerseFunctionProperty_                      __verse_0x08089514__L_2fVerse_2eorg_2fVerse_2fcancelable_N_RCancel; // 0x28(0x10)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_4728[0x8];                                     // Fixing Size After Last Property..
	FOptionProperty_                             __verse_0xC5BA7E5B_InternalDelegate;               // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_4729[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseEngine_multicast_delegate_subscription");
		return Clss;
	}

	void _L_2fVerse_2eorg_2fVerse_2fcancelable_N_RCancel(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x38 (0xD0 - 0x98)
// VerseClass VerseEngine.VerseEngine_subscribable_event
class UVerseEngine_subscribable_event : public UVerseEngine_multicast_delegate
{
public:
	FVerseFunctionProperty_                      __verse_0x8DE7DBE5_Await;                          // 0x98(0x10)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_472B[0x28];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseEngine_subscribable_event");
		return Clss;
	}

	class UConcurrency_task* Await(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
