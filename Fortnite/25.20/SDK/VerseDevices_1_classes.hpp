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
// VerseClass VerseDevices.$SolarisSignatureFunctionOuter
class U_SolarisSignatureFunctionOuter : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("$SolarisSignatureFunctionOuter");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// VerseClass VerseDevices.Devices
class UDevices : public UObject
{
public:
	class UDevices_creative_prop_asset*          __verse_0x88F30926_DefaultCreativePropAsset;       // 0x28(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices");
		return Clss;
	}

	enum class EDevices_teleport_to_result _L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eTeleportToInternalImpl_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntransform_R(const struct FTuple_Lcreative__movable__object__base_Mtuple_L_R_Mtransform_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eTeleportToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntransform_R(const struct FTuple_Lcreative__movable__object__base_Mtuple_L_R_Mtransform_R& __verse_0xB2CDDD72_Argument, enum class EVerseTrue _ExprResult_0, enum class EDevices_teleport_to_result __verse_0x95D09D0E_Result_1, FVerseFunctionProperty_ _Callee_1, const struct FTuple_Lcreative__movable__object__base_Mtuple_L_R_Mtransform_R& _ExprResult_2, const struct FTuple_L_R& _ExprResult_3, FOptionProperty_ _ExprResultStack_4, FVerseFunctionProperty_ _Callee_5);
	FOptionProperty_ _L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eTeleportToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Lvector3_Mrotation_R_R(const struct FTuple_Lcreative__movable__object__base_Mtuple_L_R_Mtuple_Lvector3_Mrotation_R_R& __verse_0xB2CDDD72_Argument, enum class EVerseTrue _ExprResult_0, const struct FSpatialMath_transform& __verse_0x61C3007D_Transform_1, FVerseFunctionProperty_ _Callee_1, const struct FTuple_Lcreative__movable__object__base_Mtuple_L_R_Mtuple_L_R_R& _ExprResult_2, const struct FTuple_L_R& _ExprResult_3, const struct FTuple_L_R& _ExprResult_4, enum class EDevices_teleport_to_result __verse_0x95D09D0E_Result_1, FVerseFunctionProperty_ _Callee_5, const struct FTuple_Lcreative__movable__object__base_Mtuple_L_R_Mtransform_R& _ExprResult_6, const struct FTuple_L_R& _ExprResult_7, FOptionProperty_ _ExprResultStack_8, FVerseFunctionProperty_ _Callee_9);
	class UConcurrency_task* Operator_U_2eMoveToInternalImpl_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Ltransform_Mfloat_R_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_Lcreative__movable__object__base_Mtuple_L_R_Mtuple_Ltransform_Mfloat_R_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* Operator_U_2eMoveToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Ltransform_Mfloat_R_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_Lcreative__movable__object__base_Mtuple_L_R_Mtuple_Ltransform_Mfloat_R_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* Operator_U_2eMoveToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Lvector3_Mrotation_Mfloat_R_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_Lcreative__movable__object__base_Mtuple_L_R_Mtuple_Lvector3_Mrotation_Mfloat_R_R& __verse_0xB2CDDD72_Argument);
	struct FSpatialMath_transform _L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eGetTransformInternalImpl_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lcreative__movable__object__base_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	class UObject* _L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eGetTags_U_L_Ncreative__object__interface_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lcreative__object__interface_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	class UObject* _L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eGetPlayspace_U_L_Ncreative__object__interface_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lcreative__object__interface_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	class UClass* _L_2fFortnite_2ecom_2fDevices_N_Rdevice__event_L_Nt_20where_20t_R(class UClass* __verse_0xB2CDDD72_Argument);
	class UClass* _L_2fFortnite_2ecom_2fDevices_N_Rdevice__event(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0);
	FVerseStringProperty_ _L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R(enum class EDevices_move_to_internal_result __verse_0xB2CDDD72_Argument, enum class EDevices_move_to_internal_result __verse_0x00000000__1, FVerseDynamicProperty_ InvokeResultDummy_0, FOptionProperty_ _ExprResultStack_1, FVerseDynamicProperty_ _ExprResult_2, FVerseDynamicProperty_ _ExprResult_3, FVerseDynamicProperty_ InvokeResultDummy_4, FOptionProperty_ _ExprResultStack_5, FVerseDynamicProperty_ _ExprResult_6, FVerseDynamicProperty_ _ExprResult_7, FVerseDynamicProperty_ InvokeResultDummy_8, FOptionProperty_ _ExprResultStack_9, FVerseDynamicProperty_ _ExprResult_10, FVerseDynamicProperty_ _ExprResult_11, FVerseDynamicProperty_ InvokeResultDummy_12, FOptionProperty_ _ExprResultStack_13, FVerseDynamicProperty_ _ExprResult_14, FVerseDynamicProperty_ _ExprResult_15, FVerseDynamicProperty_ InvokeResultDummy_16, FOptionProperty_ _ExprResultStack_17, FVerseDynamicProperty_ _ExprResult_18, FVerseDynamicProperty_ _ExprResult_19, FVerseDynamicProperty_ InvokeResultDummy_20, FOptionProperty_ _ExprResultStack_21, FVerseDynamicProperty_ _ExprResult_22, FVerseDynamicProperty_ _ExprResult_23);
	struct FTuple_L_Qcreative__prop_Mspawn__prop__result_R _L_2fFortnite_2ecom_2fDevices_N_RSpawnProp_L_Ncreative__prop__asset_M_Ntransform_R(const struct FTuple_Lcreative__prop__asset_Mtransform_R& __verse_0xB2CDDD72_Argument);
	struct FTuple_L_Qcreative__prop_Mspawn__prop__result_R _L_2fFortnite_2ecom_2fDevices_N_RSpawnProp_L_Ncreative__prop__asset_M_Nvector3_M_Nrotation_R(const struct FTuple_Lcreative__prop__asset_Mvector3_Mrotation_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fDevices_N_RHandleTeleportToResult_L_Nteleport__to__result_R(enum class EDevices_teleport_to_result __verse_0xB2CDDD72_Argument, uint8 _ExprResult_0, FVerseDynamicProperty_ InvokeResultDummy_1, FOptionProperty_ _ExprResultStack_2, FVerseDynamicProperty_ _ExprResult_3, FVerseDynamicProperty_ _ExprResult_4, class UDiagnostics_log* __verse_0x63A8D5FA_DebugLog_3, uint64 _InstancingGraph_5, FVerseStringProperty_ __verse_0x8BA81554_LogString_3, enum class EDevices_teleport_to_result __verse_0x00000000__4, FVerseDynamicProperty_ InvokeResultDummy_6, FOptionProperty_ _ExprResultStack_7, FVerseDynamicProperty_ _ExprResult_8, FVerseDynamicProperty_ _ExprResult_9, FVerseDynamicProperty_ InvokeResultDummy_10, FOptionProperty_ _ExprResultStack_11, FVerseDynamicProperty_ _ExprResult_12, FVerseDynamicProperty_ _ExprResult_13, FVerseDynamicProperty_ InvokeResultDummy_14, FOptionProperty_ _ExprResultStack_15, FVerseDynamicProperty_ _ExprResult_16, FVerseDynamicProperty_ _ExprResult_17, FVerseDynamicProperty_ InvokeResultDummy_18, FOptionProperty_ _ExprResultStack_19, FVerseDynamicProperty_ _ExprResult_20, FVerseDynamicProperty_ _ExprResult_21, class UDiagnostics_log* __verse_0x00000000__10, enum class EVerseTrue _InvokeSureResultDummy_22, FVerseFunctionProperty_ _Callee_23, const struct FTuple_L_Kchar_M_QLevel_Nlog__level_R& _ExprResult_24, FVerseStringProperty_ _ExprResult_25, const TArray<FVerseDynamicProperty_>& __verse_0xFFC68BC5_Array_11, FVerseFunctionProperty_ _Callee_26, const TArray<TArray<FVerseDynamicProperty_>>& _ExprResult_27, const TArray<FVerseStringProperty_>& __verse_0xFFC68BC5_Array_12, const struct FTuple_L_Kchar_M_Kchar_R& __verse_0x00000000__13, FVerseStringProperty_ _ExprResult_28, FVerseStringProperty_ _ExprResultStack_29, FVerseFunctionProperty_ _Callee_30, FVerseStringProperty_ _ExprResultDummy_31, FVerseStringProperty_ _ExprResultDummy_32, const TArray<TArray<FVerseDynamicProperty_>>& _ForResult_33, int64 _ForIndex_34, int64 _ForLength_35, FVerseStringProperty_ __verse_0xFB88B569_Item_15, const TArray<FVerseDynamicProperty_>& _ExprResult_36, FVerseStringProperty_ __verse_0xFFC68BC5_Array_16, const TArray<FVerseDynamicProperty_>& _ForResult_37, int64 _ForIndex_38, int64 _ForLength_39, uint8 __verse_0xFB88B569_Item_18, FVerseDynamicProperty_ _ExprResult_40, FVerseStringProperty_ _ForResult_41, int64 _ForIndex_42, int64 _ForLength_43, FVerseDynamicProperty_ __verse_0xFB88B569_Item_20, uint8 _ExprResult_44, FOptionProperty_ _ExprResult_45, FVerseDynamicProperty_ InvokeResultDummy_46, FOptionProperty_ _ExprResultStack_47, FVerseDynamicProperty_ _ExprResult_48, FVerseDynamicProperty_ _ExprResult_49);
	enum class EDevices_move_to_result _L_2fFortnite_2ecom_2fDevices_N_RHandleMoveToInternalResult_L_Nmove__to__internal__result_R(enum class EDevices_move_to_internal_result __verse_0xB2CDDD72_Argument, FVerseDynamicProperty_ InvokeResultDummy_0, FOptionProperty_ _ExprResultStack_1, FVerseDynamicProperty_ _ExprResult_2, FVerseDynamicProperty_ _ExprResult_3, FVerseDynamicProperty_ InvokeResultDummy_4, FOptionProperty_ _ExprResultStack_5, FVerseDynamicProperty_ _ExprResult_6, FVerseDynamicProperty_ _ExprResult_7, class UDiagnostics_log* __verse_0x63A8D5FA_DebugLog_3, uint64 _InstancingGraph_8, class UDiagnostics_log* __verse_0x00000000__4, enum class EVerseTrue _InvokeSureResultDummy_9, FVerseFunctionProperty_ _Callee_10, const struct FTuple_L_Kchar_M_QLevel_Nlog__level_R& _ExprResult_11, FVerseStringProperty_ _ExprResult_12, const TArray<FVerseDynamicProperty_>& __verse_0xFFC68BC5_Array_5, FVerseFunctionProperty_ _Callee_13, const TArray<TArray<FVerseDynamicProperty_>>& _ExprResult_14, const TArray<FVerseStringProperty_>& __verse_0xFFC68BC5_Array_6, const struct FTuple_L_Kchar_M_Kchar_R& __verse_0x00000000__7, FVerseStringProperty_ _ExprResult_15, FVerseStringProperty_ _ExprResultStack_16, FVerseFunctionProperty_ _Callee_17, FVerseStringProperty_ _ExprResultDummy_18, FVerseStringProperty_ _ExprResultDummy_19, const TArray<TArray<FVerseDynamicProperty_>>& _ForResult_20, int64 _ForIndex_21, int64 _ForLength_22, FVerseStringProperty_ __verse_0xFB88B569_Item_9, const TArray<FVerseDynamicProperty_>& _ExprResult_23, FVerseStringProperty_ __verse_0xFFC68BC5_Array_10, const TArray<FVerseDynamicProperty_>& _ForResult_24, int64 _ForIndex_25, int64 _ForLength_26, uint8 __verse_0xFB88B569_Item_12, FVerseDynamicProperty_ _ExprResult_27, FVerseStringProperty_ _ForResult_28, int64 _ForIndex_29, int64 _ForLength_30, FVerseDynamicProperty_ __verse_0xFB88B569_Item_14, uint8 _ExprResult_31, FOptionProperty_ _ExprResult_32);
	TArray<class UObject*> _L_2fFortnite_2ecom_2fDevices_N_RGetCreativeObjectsWithTags_L_Ntag__search__criteria_R(class UTags_tag_search_criteria* __verse_0xB2CDDD72_Argument);
	TArray<class UObject*> _L_2fFortnite_2ecom_2fDevices_N_RGetCreativeObjectsWithTag_L_Ntag_R(class UTags_tag* __verse_0xB2CDDD72_Argument);
	struct FDevices_device_ai_interaction_result Devices_device_ai_interaction_result_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap);
	struct FDevices_device_ai_interaction_result Devices_device_ai_interaction_result_Factory();
	void _InitCDO(class UDevices_creative_prop_asset* _ExprResult_0, uint64 _InstancingGraph_1);
};

// 0xA0 (0x150 - 0xB0)
// VerseClass VerseDevices.Devices_creative_device
class UDevices_creative_device : public UVerseCreativeDevice
{
public:
	FVerseFunctionProperty_                      __verse_0x1F792AAA_OnBegin;                        // 0xB0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x3DFFEDE4__L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnEnd; // 0xC0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xEAC73ECC__L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnBegin__Internal; // 0xD0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x0AA415A9__L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_RTeleportTo_L_Nvector3_M_Nrotation_R; // 0xE0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x826ED8B5__L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_RTeleportTo_L_Ntransform_R; // 0xF0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x1CEDCD6B_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R; // 0x100(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x3F1971E6_MoveTo_L_Ntransform_M_Nfloat_R; // 0x110(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x592F1135__L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_RShow; // 0x120(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x57F532B5__L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_RHide; // 0x130(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x6B57E438__L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform; // 0x140(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_creative_device");
		return Clss;
	}

	FOptionProperty_ _L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_RTeleportTo_L_Ntransform_R(const struct FSpatialMath_transform& __verse_0xB2CDDD72_Argument, FOptionProperty_ _ExprResultStack_0, FVerseFunctionProperty_ _Callee_1, const struct FTuple_Lcreative__device_Mtuple_L_R_Mtransform_R& _ExprResult_2, const struct FTuple_L_R& _ExprResult_3);
	FOptionProperty_ _L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_RTeleportTo_L_Nvector3_M_Nrotation_R(const struct FTuple_Lvector3_Mrotation_R& __verse_0xB2CDDD72_Argument, FOptionProperty_ _ExprResultStack_0, FVerseFunctionProperty_ _Callee_1, const struct FTuple_Lcreative__device_Mtuple_L_R_Mtuple_Lvector3_Mrotation_R_R& _ExprResult_2, const struct FTuple_L_R& _ExprResult_3, const struct FTuple_Lvector3_Mrotation_R& _ExprResult_4);
	void _L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_RShow(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnEnd(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnBegin__Internal(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, class UConcurrency_task* _AsyncTask_0, FVerseFunctionProperty_ _AsyncTaskClass_1, const struct FTuple_L_R& _ExprResult_2, int64 _AsyncResult_3);
	class UConcurrency_task* OnBegin(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* MoveTo_L_Ntransform_M_Nfloat_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_Ltransform_Mfloat_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_Lvector3_Mrotation_Mfloat_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_RHide(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	struct FSpatialMath_transform _L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Lcreative__device_Mtuple_L_R_Mtuple_L_R_R& _ExprResult_1, const struct FTuple_L_R& _ExprResult_2, const struct FTuple_L_R& _ExprResult_3);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0xD8 - 0xD8)
// VerseClass VerseDevices.Devices_creative_device_asset
class UDevices_creative_device_asset : public UAssets_asset
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_creative_device_asset");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x10 (0xC8 - 0xB8)
// VerseClass VerseDevices.Devices_creative_object
class UDevices_creative_object : public UVerseCreativeObject
{
public:
	FVerseFunctionProperty_                      __verse_0x6B57E438__L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform; // 0xB8(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_creative_object");
		return Clss;
	}

	struct FSpatialMath_transform _L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Lcreative__object_Mtuple_L_R_Mtuple_L_R_R& _ExprResult_1, const struct FTuple_L_R& _ExprResult_2, const struct FTuple_L_R& _ExprResult_3);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x28 (0xF0 - 0xC8)
// VerseClass VerseDevices.Devices_creative_device_base
class UDevices_creative_device_base : public UDevices_creative_object
{
public:
	FVerseFunctionProperty_                      __verse_0x0182371F__L_2fFortnite_2ecom_2fDevices_2fcreative__device__base_N_RShow__Internal; // 0xC8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x1E46A055__L_2fFortnite_2ecom_2fDevices_2fcreative__device__base_N_RHide__Internal; // 0xD8(0x10)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_8E70[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_creative_device_base");
		return Clss;
	}

	void _L_2fFortnite_2ecom_2fDevices_2fcreative__device__base_N_RShow__Internal(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fDevices_2fcreative__device__base_N_RHide__Internal(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseDevices.Devices_creative_object_interface
class UDevices_creative_object_interface : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_creative_object_interface");
		return Clss;
	}

};

// 0xC8 (0x190 - 0xC8)
// VerseClass VerseDevices.Devices_creative_prop
class UDevices_creative_prop : public UDevices_creative_object
{
public:
	FVerseFunctionProperty_                      __verse_0x30E66B48__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R; // 0xC8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x354FC635__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Ntransform_R; // 0xD8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x1CEDCD6B_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R; // 0xE8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x3F1971E6_MoveTo_L_Ntransform_M_Nfloat_R; // 0xF8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xC4FF6975__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RSetMesh_L_Nmesh_R; // 0x108(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x63B9DF33__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RSetMaterial_L_Nmaterial_R; // 0x118(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x3799D4E2__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RSetMaterialAtIndex_L_Nmaterial_M_Nint_R; // 0x128(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x6E31A773__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RShow; // 0x138(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x60EB84F3__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RHide; // 0x148(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x909F40CD__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RIsHidden; // 0x158(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x1E6B9248__L_2fVerse_2eorg_2fVerse_2finvalidatable_N_RIsValid; // 0x168(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x5201150D__L_2fVerse_2eorg_2fVerse_2fdisposable_N_RDispose; // 0x178(0x10)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_8E7A[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_creative_prop");
		return Clss;
	}

	FOptionProperty_ _L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Ntransform_R(const struct FSpatialMath_transform& __verse_0xB2CDDD72_Argument, FOptionProperty_ _ExprResultStack_0, FVerseFunctionProperty_ _Callee_1, const struct FTuple_Lcreative__prop_Mtuple_L_R_Mtransform_R& _ExprResult_2, const struct FTuple_L_R& _ExprResult_3);
	FOptionProperty_ _L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R(const struct FTuple_Lvector3_Mrotation_R& __verse_0xB2CDDD72_Argument, FOptionProperty_ _ExprResultStack_0, FVerseFunctionProperty_ _Callee_1, const struct FTuple_Lcreative__prop_Mtuple_L_R_Mtuple_Lvector3_Mrotation_R_R& _ExprResult_2, const struct FTuple_L_R& _ExprResult_3, const struct FTuple_Lvector3_Mrotation_R& _ExprResult_4);
	void _L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RShow(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RSetMesh_L_Nmesh_R(class UAssets_mesh* __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RSetMaterialAtIndex_L_Nmaterial_M_Nint_R(const struct FTuple_Lmaterial_Mint_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RSetMaterial_L_Nmaterial_R(class UAssets_material* __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_Lvector3_Mrotation_Mfloat_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* MoveTo_L_Ntransform_M_Nfloat_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_Ltransform_Mfloat_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fVerse_2eorg_2fVerse_2finvalidatable_N_RIsValid(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	uint8 _L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RIsHidden(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RHide(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fVerse_2eorg_2fVerse_2fdisposable_N_RDispose(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x60 - 0x60)
// VerseClass VerseDevices.Devices_creative_prop_asset
class UDevices_creative_prop_asset : public UVerseCreativePropAsset
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_creative_prop_asset");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseDevices.Devices_creative_prop_debug_log
class UDevices_creative_prop_debug_log : public UDiagnostics_log_channel
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_creative_prop_debug_log");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseDevices.Devices_CreativeAnimation
class UDevices_CreativeAnimation : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_CreativeAnimation");
		return Clss;
	}

	FOptionProperty_ _L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lcreative__prop_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument, enum class EVerseFalse _ExprResult_0, const struct FTuple_L_Qanimation__controller_Mget__animation__controller__result_R& __verse_0x95D09D0E_Result_1, FVerseFunctionProperty_ _Callee_1, class UDiagnostics_log* __verse_0x63A8D5FA_DebugLog_1, uint64 _InstancingGraph_2, FVerseDynamicProperty_ InvokeResultDummy_3, FOptionProperty_ _ExprResultStack_4, FVerseDynamicProperty_ _ExprResult_5, FVerseDynamicProperty_ _ExprResult_6, class UDiagnostics_log* __verse_0x00000000__3, enum class EVerseTrue _InvokeSureResultDummy_7, FVerseFunctionProperty_ _Callee_8, const struct FTuple_L_Kchar_M_QLevel_Nlog__level_R& _ExprResult_9, FVerseStringProperty_ _ExprResult_10, FOptionProperty_ _ExprResult_11, FVerseDynamicProperty_ InvokeResultDummy_12, FOptionProperty_ _ExprResultStack_13, FVerseDynamicProperty_ _ExprResult_14, FVerseDynamicProperty_ _ExprResult_15, class UDiagnostics_log* __verse_0x00000000__5, enum class EVerseTrue _InvokeSureResultDummy_16, FVerseFunctionProperty_ _Callee_17, const struct FTuple_L_Kchar_M_QLevel_Nlog__level_R& _ExprResult_18, FVerseStringProperty_ _ExprResult_19, FOptionProperty_ _ExprResult_20, FOptionProperty_ _ExprResultStack_21);
	struct FTuple_L_Qanimation__controller_Mget__animation__controller__result_R _L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_RGetAnimationController_L_Ncreative__movable__object__base_R(class UVerseMovableObjectBase* __verse_0xB2CDDD72_Argument);
	struct FDevices_CreativeAnimation_keyframe_delta Devices_CreativeAnimation_keyframe_delta_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap, FVerseStringProperty_ _ExprResultStack_0, FOptionProperty_ _ExprResult_1, const struct FSpatialMath_vector3& _ExprResult_2, TMap<FVerseStringProperty_, uint8> _ExprResultStack_3, FVerseStringProperty_ _ExprResult_4, FVerseStringProperty_ _ExprResult_5, FVerseStringProperty_ _ExprResult_6, FVerseStringProperty_ _ExprResultStack_7, FOptionProperty_ _ExprResult_8);
	struct FDevices_CreativeAnimation_keyframe_delta Devices_CreativeAnimation_keyframe_delta_Factory(const struct FSpatialMath_vector3& _ExprResult_0, TMap<FVerseStringProperty_, uint8> _ExprResultStack_1, FVerseStringProperty_ _ExprResult_2, FVerseStringProperty_ _ExprResult_3, FVerseStringProperty_ _ExprResult_4);
	struct FDevices_CreativeAnimation_cubic_bezier_parameters Devices_CreativeAnimation_cubic_bezier_parameters_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap, FVerseStringProperty_ _ExprResultStack_0, FOptionProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResultStack_2, FOptionProperty_ _ExprResult_3, FVerseStringProperty_ _ExprResultStack_4, FOptionProperty_ _ExprResult_5, FVerseStringProperty_ _ExprResultStack_6, FOptionProperty_ _ExprResult_7);
	struct FDevices_CreativeAnimation_cubic_bezier_parameters Devices_CreativeAnimation_cubic_bezier_parameters_Factory();
	void _InitCDO();
};

// 0x140 (0x168 - 0x28)
// VerseClass VerseDevices.Devices_CreativeAnimation_animation_controller
class UDevices_CreativeAnimation_animation_controller : public UObject
{
public:
	FVerseFunctionProperty_                      __verse_0x0E85E6FA__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R; // 0x28(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x053E8BA6_AwaitNextKeyframe;              // 0x38(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x5D81E59F__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlayInternal; // 0x48(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x6B727DF3__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlay; // 0x58(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x1A1EC93E__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPauseInternal; // 0x68(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x1E385FBF__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPause; // 0x78(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xDF78CD56__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStopInternal; // 0x88(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x230023B8__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStop; // 0x98(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x4A2A0F34__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RGetState; // 0xA8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xDCA25E7B__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RIsValid; // 0xB8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xECB7EA34__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimationInternal_L_N_Kkeyframe__delta_M_N_QAnimationMode_Nanimation__mode_20_3d_20_2e_2e_2e_R; // 0xC8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x30521B48__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R; // 0xD8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x8C3C09A2__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_N_QMode_Nanimation__mode_R; // 0xE8(0x10)(InstancedReference, HasGetValueTypeHash)
	class UDiagnostics_log*                      __verse_0x63A8D5FA_DebugLog;                       // 0xF8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                               __verse_0x1A3A2D49_KeyframeReachedEvent;           // 0x100(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                               __verse_0xEC8DE8C6_MovementCompleteEvent;          // 0x108(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                               __verse_0xDE60FD58_StateChangedEvent;              // 0x110(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint8                                        Pad_8EA4[0x50];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_CreativeAnimation_animation_controller");
		return Clss;
	}

	FVerseStringProperty_ _L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R(enum class EDevices_CreativeAnimation_set_animation_result __verse_0xB2CDDD72_Argument, enum class EDevices_CreativeAnimation_set_animation_result __verse_0x00000000__1, FVerseDynamicProperty_ InvokeResultDummy_0, FOptionProperty_ _ExprResultStack_1, FVerseDynamicProperty_ _ExprResult_2, FVerseDynamicProperty_ _ExprResult_3, FVerseDynamicProperty_ InvokeResultDummy_4, FOptionProperty_ _ExprResultStack_5, FVerseDynamicProperty_ _ExprResult_6, FVerseDynamicProperty_ _ExprResult_7, FVerseDynamicProperty_ InvokeResultDummy_8, FOptionProperty_ _ExprResultStack_9, FVerseDynamicProperty_ _ExprResult_10, FVerseDynamicProperty_ _ExprResult_11, FVerseDynamicProperty_ InvokeResultDummy_12, FOptionProperty_ _ExprResultStack_13, FVerseDynamicProperty_ _ExprResult_14, FVerseDynamicProperty_ _ExprResult_15, FVerseDynamicProperty_ InvokeResultDummy_16, FOptionProperty_ _ExprResultStack_17, FVerseDynamicProperty_ _ExprResult_18, FVerseDynamicProperty_ _ExprResult_19, FVerseDynamicProperty_ InvokeResultDummy_20, FOptionProperty_ _ExprResultStack_21, FVerseDynamicProperty_ _ExprResult_22, FVerseDynamicProperty_ _ExprResult_23, FVerseDynamicProperty_ InvokeResultDummy_24, FOptionProperty_ _ExprResultStack_25, FVerseDynamicProperty_ _ExprResult_26, FVerseDynamicProperty_ _ExprResult_27, FVerseDynamicProperty_ InvokeResultDummy_28, FOptionProperty_ _ExprResultStack_29, FVerseDynamicProperty_ _ExprResult_30, FVerseDynamicProperty_ _ExprResult_31);
	enum class EDevices_CreativeAnimation_playstoppause_result _L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStopInternal(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStop(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, enum class EDevices_CreativeAnimation_playstoppause_result __verse_0x95D09D0E_Result_1, FVerseFunctionProperty_ _Callee_0, const struct FTuple_L_R& _ExprResult_1, enum class EVerseTrue _InvokeSureResultDummy_2, FVerseFunctionProperty_ _Callee_3, const struct FTuple_L_Kchar_Mplaystoppause__result_R& _ExprResult_4, FVerseStringProperty_ _ExprResult_5);
	enum class EDevices_CreativeAnimation_set_animation_result _L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimationInternal_L_N_Kkeyframe__delta_M_N_QAnimationMode_Nanimation__mode_20_3d_20_2e_2e_2e_R(const struct FTuple_L_Kkeyframe__delta_M_QAnimationMode_Nanimation__mode_20_3d_20_2e_2e_2e_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_N_QMode_Nanimation__mode_R(const struct FTuple_L_Kkeyframe__delta_M_QMode_Nanimation__mode_R& __verse_0xB2CDDD72_Argument, enum class EDevices_CreativeAnimation_set_animation_result __verse_0x95D09D0E_Result_1, FVerseFunctionProperty_ _Callee_0, const struct FTuple_L_Kkeyframe__delta_M_QAnimationMode_Nanimation__mode_R& _ExprResult_1, FOptionProperty_ _ExprResult_2, FVerseDynamicProperty_ InvokeResultDummy_3, FOptionProperty_ _ExprResultStack_4, FVerseDynamicProperty_ _ExprResult_5, FVerseDynamicProperty_ _ExprResult_6, class UDiagnostics_log* __verse_0x00000000__3, enum class EVerseTrue _InvokeSureResultDummy_7, FVerseFunctionProperty_ _Callee_8, const struct FTuple_L_Kchar_M_QLevel_Nlog__level_R& _ExprResult_9, FVerseStringProperty_ _ExprResultStack_10, FVerseStringProperty_ _ExprResult_11, FVerseStringProperty_ _ExprResultStack_12, FVerseFunctionProperty_ _Callee_13, FOptionProperty_ _ExprResult_14);
	enum class EDevices_CreativeAnimation_playstoppause_result _L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlayInternal(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlay(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, enum class EDevices_CreativeAnimation_playstoppause_result __verse_0x95D09D0E_Result_1, FVerseFunctionProperty_ _Callee_0, const struct FTuple_L_R& _ExprResult_1, enum class EVerseTrue _InvokeSureResultDummy_2, FVerseFunctionProperty_ _Callee_3, const struct FTuple_L_Kchar_Mplaystoppause__result_R& _ExprResult_4, FVerseStringProperty_ _ExprResult_5);
	enum class EDevices_CreativeAnimation_playstoppause_result _L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPauseInternal(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPause(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, enum class EDevices_CreativeAnimation_playstoppause_result __verse_0x95D09D0E_Result_1, FVerseFunctionProperty_ _Callee_0, const struct FTuple_L_R& _ExprResult_1, enum class EVerseTrue _InvokeSureResultDummy_2, FVerseFunctionProperty_ _Callee_3, const struct FTuple_L_Kchar_Mplaystoppause__result_R& _ExprResult_4, FVerseStringProperty_ _ExprResult_5);
	void _L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R(const struct FTuple_L_Kchar_Mplaystoppause__result_R& __verse_0xB2CDDD72_Argument, FVerseDynamicProperty_ InvokeResultDummy_0, FOptionProperty_ _ExprResultStack_1, FVerseDynamicProperty_ _ExprResult_2, FVerseDynamicProperty_ _ExprResult_3, class UDiagnostics_log* __verse_0x00000000__2, enum class EVerseTrue _InvokeSureResultDummy_4, FVerseFunctionProperty_ _Callee_5, const struct FTuple_L_Kchar_M_QLevel_Nlog__level_R& _ExprResult_6, FVerseStringProperty_ _ExprResult_7, const TArray<FVerseDynamicProperty_>& __verse_0xFFC68BC5_Array_3, FVerseFunctionProperty_ _Callee_8, const TArray<TArray<FVerseDynamicProperty_>>& _ExprResult_9, const TArray<FVerseStringProperty_>& __verse_0xFFC68BC5_Array_4, const struct FTuple_L_Kchar_M_Kchar_R& __verse_0x00000000__5, FVerseStringProperty_ _ExprResultStack_10, FVerseFunctionProperty_ _Callee_11, FVerseStringProperty_ _ExprResult_12, FVerseStringProperty_ _ExprResultDummy_13, FVerseStringProperty_ _ExprResultDummy_14, const TArray<TArray<FVerseDynamicProperty_>>& _ForResult_15, int64 _ForIndex_16, int64 _ForLength_17, FVerseStringProperty_ __verse_0xFB88B569_Item_7, const TArray<FVerseDynamicProperty_>& _ExprResult_18, FVerseStringProperty_ __verse_0xFFC68BC5_Array_8, const TArray<FVerseDynamicProperty_>& _ForResult_19, int64 _ForIndex_20, int64 _ForLength_21, uint8 __verse_0xFB88B569_Item_10, FVerseDynamicProperty_ _ExprResult_22, FVerseStringProperty_ _ForResult_23, int64 _ForIndex_24, int64 _ForLength_25, FVerseDynamicProperty_ __verse_0xFB88B569_Item_12, uint8 _ExprResult_26, FOptionProperty_ _ExprResult_27, FVerseDynamicProperty_ InvokeResultDummy_28, FOptionProperty_ _ExprResultStack_29, FVerseDynamicProperty_ _ExprResult_30, FVerseDynamicProperty_ _ExprResult_31, class UDiagnostics_log* __verse_0x00000000__14, enum class EVerseTrue _InvokeSureResultDummy_32, FVerseFunctionProperty_ _Callee_33, const struct FTuple_L_Kchar_M_QLevel_Nlog__level_R& _ExprResult_34, FVerseStringProperty_ _ExprResult_35, const TArray<FVerseDynamicProperty_>& __verse_0xFFC68BC5_Array_15, FVerseFunctionProperty_ _Callee_36, const TArray<TArray<FVerseDynamicProperty_>>& _ExprResult_37, const TArray<FVerseStringProperty_>& __verse_0xFFC68BC5_Array_16, const struct FTuple_L_Kchar_M_Kchar_R& __verse_0x00000000__17, FVerseStringProperty_ _ExprResultStack_38, FVerseFunctionProperty_ _Callee_39, FVerseStringProperty_ _ExprResult_40, FVerseStringProperty_ _ExprResultDummy_41, FVerseStringProperty_ _ExprResultDummy_42, const TArray<TArray<FVerseDynamicProperty_>>& _ForResult_43, int64 _ForIndex_44, int64 _ForLength_45, FVerseStringProperty_ __verse_0xFB88B569_Item_19, const TArray<FVerseDynamicProperty_>& _ExprResult_46, FVerseStringProperty_ __verse_0xFFC68BC5_Array_20, const TArray<FVerseDynamicProperty_>& _ForResult_47, int64 _ForIndex_48, int64 _ForLength_49, uint8 __verse_0xFB88B569_Item_22, FVerseDynamicProperty_ _ExprResult_50, FVerseStringProperty_ _ForResult_51, int64 _ForIndex_52, int64 _ForLength_53, FVerseDynamicProperty_ __verse_0xFB88B569_Item_24, uint8 _ExprResult_54, FOptionProperty_ _ExprResult_55);
	FOptionProperty_ _L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RIsValid(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	enum class EDevices_CreativeAnimation_animation_controller_state _L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RGetState(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* AwaitNextKeyframe(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO(class UDiagnostics_log* _ExprResult_0, uint64 _InstancingGraph_1, class UVerseEngine_multicast_delegate* _ExprResult_2, uint64 _InstancingGraph_3, class UVerseEngine_multicast_delegate* _ExprResult_4, uint64 _InstancingGraph_5, class UVerseEngine_multicast_delegate* _ExprResult_6, uint64 _InstancingGraph_7);
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseDevices.Devices_CreativeAnimation_animation_controller_debug_log
class UDevices_CreativeAnimation_animation_controller_debug_log : public UDiagnostics_log_channel
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_CreativeAnimation_animation_controller_debug_log");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0xA0 (0xC8 - 0x28)
// VerseClass VerseDevices.Devices_CreativeAnimation_InterpolationTypes
class UDevices_CreativeAnimation_InterpolationTypes : public UObject
{
public:
	struct FDevices_CreativeAnimation_cubic_bezier_parameters __verse_0x9B27EB9D_Linear;                         // 0x28(0x20)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FDevices_CreativeAnimation_cubic_bezier_parameters __verse_0x9CD14C25_Ease;                           // 0x48(0x20)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FDevices_CreativeAnimation_cubic_bezier_parameters __verse_0xB345298C_EaseIn;                         // 0x68(0x20)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FDevices_CreativeAnimation_cubic_bezier_parameters __verse_0xF59E2BD2_EaseOut;                        // 0x88(0x20)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FDevices_CreativeAnimation_cubic_bezier_parameters __verse_0x29A389AE_EaseInOut;                      // 0xA8(0x20)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_CreativeAnimation_InterpolationTypes");
		return Clss;
	}

	void _InitCDO(const struct FDevices_CreativeAnimation_cubic_bezier_parameters& _ExprResult_0, TMap<FVerseStringProperty_, uint8> _ExprResultStack_1, FVerseStringProperty_ _ExprResult_2, FVerseStringProperty_ _ExprResult_3, FVerseStringProperty_ _ExprResult_4, FVerseStringProperty_ _ExprResult_5, const struct FDevices_CreativeAnimation_cubic_bezier_parameters& _ExprResult_6, TMap<FVerseStringProperty_, uint8> _ExprResultStack_7, FVerseStringProperty_ _ExprResult_8, FVerseStringProperty_ _ExprResult_9, FVerseStringProperty_ _ExprResult_10, FVerseStringProperty_ _ExprResult_11, const struct FDevices_CreativeAnimation_cubic_bezier_parameters& _ExprResult_12, TMap<FVerseStringProperty_, uint8> _ExprResultStack_13, FVerseStringProperty_ _ExprResult_14, FVerseStringProperty_ _ExprResult_15, FVerseStringProperty_ _ExprResult_16, FVerseStringProperty_ _ExprResult_17, const struct FDevices_CreativeAnimation_cubic_bezier_parameters& _ExprResult_18, TMap<FVerseStringProperty_, uint8> _ExprResultStack_19, FVerseStringProperty_ _ExprResult_20, FVerseStringProperty_ _ExprResult_21, FVerseStringProperty_ _ExprResult_22, FVerseStringProperty_ _ExprResult_23, const struct FDevices_CreativeAnimation_cubic_bezier_parameters& _ExprResult_24, TMap<FVerseStringProperty_, uint8> _ExprResultStack_25, FVerseStringProperty_ _ExprResult_26, FVerseStringProperty_ _ExprResult_27, FVerseStringProperty_ _ExprResult_28, FVerseStringProperty_ _ExprResult_29);
};

// 0x50 (0x78 - 0x28)
// VerseClass VerseDevices.Devices_device_event
class UDevices_device_event : public UObject
{
public:
	FVerseFunctionProperty_                      __verse_0xC9C8F929__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R; // 0x28(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x8DE7DBE5_Await;                          // 0x38(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseStringProperty_                        __verse_0x21011A72_EventName;                      // 0x48(0x10)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_8EA5[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_device_event");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x78 - 0x78)
// VerseClass VerseDevices.Devices_device_event_agent
class UDevices_device_event_agent : public UDevices_device_event
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_device_event_agent");
		return Clss;
	}

	class UObject* _L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R(FVerseFunctionProperty_ __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* Await(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x78 - 0x78)
// VerseClass VerseDevices.Devices_device_event_agent_int
class UDevices_device_event_agent_int : public UDevices_device_event
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_device_event_agent_int");
		return Clss;
	}

	class UObject* _L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R(FVerseFunctionProperty_ __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* Await(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x20 (0x98 - 0x78)
// VerseClass VerseDevices.Devices_device_event_ai_interaction
class UDevices_device_event_ai_interaction : public UDevices_device_event
{
public:
	FVerseStringProperty_                        __verse_0x6C9F60BB_SourceName;                     // 0x78(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseStringProperty_                        __verse_0xF6220969_TargetName;                     // 0x88(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_device_event_ai_interaction");
		return Clss;
	}

	class UObject* _L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R(FVerseFunctionProperty_ __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* Await(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x78 - 0x78)
// VerseClass VerseDevices.Devices_device_event_optional_agent
class UDevices_device_event_optional_agent : public UDevices_device_event
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_device_event_optional_agent");
		return Clss;
	}

	class UObject* _L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R(FVerseFunctionProperty_ __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* Await(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x78 - 0x78)
// VerseClass VerseDevices.Devices_device_event_optional_agent_int
class UDevices_device_event_optional_agent_int : public UDevices_device_event
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_device_event_optional_agent_int");
		return Clss;
	}

	class UObject* _L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R(FVerseFunctionProperty_ __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* Await(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x78 - 0x78)
// VerseClass VerseDevices.Devices_device_event_vehicle
class UDevices_device_event_vehicle : public UDevices_device_event
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_device_event_vehicle");
		return Clss;
	}

	class UObject* _L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R(FVerseFunctionProperty_ __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* Await(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x78 - 0x78)
// VerseClass VerseDevices.Devices_device_event_void
class UDevices_device_event_void : public UDevices_device_event
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_device_event_void");
		return Clss;
	}

	class UObject* _L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R(FVerseFunctionProperty_ __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* Await(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x30 (0x58 - 0x28)
// VerseClass VerseDevices.Devices_device_function
class UDevices_device_function : public UObject
{
public:
	FVerseFunctionProperty_                      __verse_0x72D2D0E5__L_2fFortnite_2ecom_2fDevices_2fdevice__function_N_RInvoke; // 0x28(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x40164272__L_2fFortnite_2ecom_2fDevices_2fdevice__function_N_RInvoke_L_Nagent_R; // 0x38(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseStringProperty_                        __verse_0xF8B4D924_FunctionName;                   // 0x48(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_device_function");
		return Clss;
	}

	void _L_2fFortnite_2ecom_2fDevices_2fdevice__function_N_RInvoke(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fDevices_2fdevice__function_N_RInvoke_L_Nagent_R(class USimulation_agent* __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x10 (0x38 - 0x28)
// VerseClass VerseDevices.Devices_device_function_get_base
class UDevices_device_function_get_base : public UObject
{
public:
	FVerseStringProperty_                        __verse_0xF8B4D924_FunctionName;                   // 0x28(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_device_function_get_base");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x10 (0x48 - 0x38)
// VerseClass VerseDevices.Devices_device_function_get_agent
class UDevices_device_function_get_agent : public UDevices_device_function_get_base
{
public:
	FVerseFunctionProperty_                      __verse_0x2376EEDD__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__agent_N_RInvoke; // 0x38(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_device_function_get_agent");
		return Clss;
	}

	FOptionProperty_ _L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__agent_N_RInvoke(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x10 (0x48 - 0x38)
// VerseClass VerseDevices.Devices_device_function_get_color
class UDevices_device_function_get_color : public UDevices_device_function_get_base
{
public:
	FVerseFunctionProperty_                      __verse_0xB39E982F__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__color_N_RInvoke; // 0x38(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_device_function_get_color");
		return Clss;
	}

	struct FColors_color _L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__color_N_RInvoke(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x10 (0x48 - 0x38)
// VerseClass VerseDevices.Devices_device_function_get_float
class UDevices_device_function_get_float : public UDevices_device_function_get_base
{
public:
	FVerseFunctionProperty_                      __verse_0xC98DA7A3__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__float_N_RInvoke; // 0x38(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_device_function_get_float");
		return Clss;
	}

	double _L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__float_N_RInvoke(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x10 (0x48 - 0x38)
// VerseClass VerseDevices.Devices_device_function_get_int
class UDevices_device_function_get_int : public UDevices_device_function_get_base
{
public:
	FVerseFunctionProperty_                      __verse_0x5F417C53__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__int_N_RInvoke; // 0x38(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_device_function_get_int");
		return Clss;
	}

	int64 _L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__int_N_RInvoke(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x10 (0x48 - 0x38)
// VerseClass VerseDevices.Devices_device_function_get_logic
class UDevices_device_function_get_logic : public UDevices_device_function_get_base
{
public:
	FVerseFunctionProperty_                      __verse_0x546054FC__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__logic_N_RInvoke; // 0x38(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_device_function_get_logic");
		return Clss;
	}

	uint8 _L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__logic_N_RInvoke(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x10 (0x48 - 0x38)
// VerseClass VerseDevices.Devices_device_function_get_string
class UDevices_device_function_get_string : public UDevices_device_function_get_base
{
public:
	FVerseFunctionProperty_                      __verse_0xBD53BC40__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__string_N_RInvoke; // 0x38(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_device_function_get_string");
		return Clss;
	}

	FVerseStringProperty_ _L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__string_N_RInvoke(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x10 (0x48 - 0x38)
// VerseClass VerseDevices.Devices_device_function_get_vector3
class UDevices_device_function_get_vector3 : public UDevices_device_function_get_base
{
public:
	FVerseFunctionProperty_                      __verse_0xED077618__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__vector3_N_RInvoke; // 0x38(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_device_function_get_vector3");
		return Clss;
	}

	struct FSpatialMath_vector3 _L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__vector3_N_RInvoke(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x10 (0x38 - 0x28)
// VerseClass VerseDevices.Devices_device_function_set_base
class UDevices_device_function_set_base : public UObject
{
public:
	FVerseStringProperty_                        __verse_0xF8B4D924_FunctionName;                   // 0x28(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_device_function_set_base");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x10 (0x48 - 0x38)
// VerseClass VerseDevices.Devices_device_function_set_agent
class UDevices_device_function_set_agent : public UDevices_device_function_set_base
{
public:
	FVerseFunctionProperty_                      __verse_0xD0C1D7A3__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__agent_N_RInvoke_L_N_Qagent_R; // 0x38(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_device_function_set_agent");
		return Clss;
	}

	void _L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__agent_N_RInvoke_L_N_Qagent_R(FOptionProperty_ __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x10 (0x48 - 0x38)
// VerseClass VerseDevices.Devices_device_function_set_color
class UDevices_device_function_set_color : public UDevices_device_function_set_base
{
public:
	FVerseFunctionProperty_                      __verse_0xBEAEBA6C__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__color_N_RInvoke_L_Ncolor_R; // 0x38(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_device_function_set_color");
		return Clss;
	}

	void _L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__color_N_RInvoke_L_Ncolor_R(const struct FColors_color& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x10 (0x48 - 0x38)
// VerseClass VerseDevices.Devices_device_function_set_float
class UDevices_device_function_set_float : public UDevices_device_function_set_base
{
public:
	FVerseFunctionProperty_                      __verse_0xBE6D2C82__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__float_N_RInvoke_L_Nfloat_R; // 0x38(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_device_function_set_float");
		return Clss;
	}

	void _L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__float_N_RInvoke_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x10 (0x48 - 0x38)
// VerseClass VerseDevices.Devices_device_function_set_int
class UDevices_device_function_set_int : public UDevices_device_function_set_base
{
public:
	FVerseFunctionProperty_                      __verse_0x53CE1022__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__int_N_RInvoke_L_Nint_R; // 0x38(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_device_function_set_int");
		return Clss;
	}

	void _L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__int_N_RInvoke_L_Nint_R(int64 __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x10 (0x48 - 0x38)
// VerseClass VerseDevices.Devices_device_function_set_logic
class UDevices_device_function_set_logic : public UDevices_device_function_set_base
{
public:
	FVerseFunctionProperty_                      __verse_0x5B52ED6E__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__logic_N_RInvoke_L_Nlogic_R; // 0x38(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_device_function_set_logic");
		return Clss;
	}

	void _L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__logic_N_RInvoke_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x10 (0x48 - 0x38)
// VerseClass VerseDevices.Devices_device_function_set_message
class UDevices_device_function_set_message : public UDevices_device_function_set_base
{
public:
	FVerseFunctionProperty_                      __verse_0xEE3C8C22__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__message_N_RInvoke_L_Nmessage_R; // 0x38(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_device_function_set_message");
		return Clss;
	}

	void _L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__message_N_RInvoke_L_Nmessage_R(class UVerse_message* __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x10 (0x48 - 0x38)
// VerseClass VerseDevices.Devices_device_function_set_multi_parameter_base
class UDevices_device_function_set_multi_parameter_base : public UDevices_device_function_set_base
{
public:
	FOptionProperty_                             __verse_0xBF5FC553_ReturnType;                     // 0x38(0x10)(ZeroConstructor, InstancedReference, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_device_function_set_multi_parameter_base");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO(FOptionProperty_ _ExprResult_0, FOptionProperty_ __verse_0x00000000__1, uint8 _ExprResult_1, FOptionProperty_ _ExprResultStack_2);
};

// 0x60 (0xA8 - 0x48)
// VerseClass VerseDevices.Devices_device_function_set_params_by_name
class UDevices_device_function_set_params_by_name : public UDevices_device_function_set_multi_parameter_base
{
public:
	FVerseFunctionProperty_                      __verse_0xD67AF8BF__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__name_N_RInvoke_L_N_5b_Kchar_5dfunction__parameter__base_R; // 0x48(0x10)(InstancedReference, HasGetValueTypeHash)
	TMap<FVerseStringProperty_, class UClass*>   __verse_0x8F623C81_ParameterTypes;                 // 0x58(0x50)(InstancedReference, ContainsInstancedReference)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_device_function_set_params_by_name");
		return Clss;
	}

	FOptionProperty_ _L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__name_N_RInvoke_L_N_5b_Kchar_5dfunction__parameter__base_R(TMap<FVerseStringProperty_, class UDevices_function_parameter_base*> __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x10 (0xB8 - 0xA8)
// VerseClass VerseDevices.Devices_device_function_set_params_by_name_const
class UDevices_device_function_set_params_by_name_const : public UDevices_device_function_set_params_by_name
{
public:
	FVerseFunctionProperty_                      __verse_0xE5C254F3__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__name__const_N_RInvokeConst_L_N_5b_Kchar_5dfunction__parameter__base_R; // 0xA8(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_device_function_set_params_by_name_const");
		return Clss;
	}

	FOptionProperty_ _L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__name__const_N_RInvokeConst_L_N_5b_Kchar_5dfunction__parameter__base_R(TMap<FVerseStringProperty_, class UDevices_function_parameter_base*> __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x20 (0x68 - 0x48)
// VerseClass VerseDevices.Devices_device_function_set_params_by_type
class UDevices_device_function_set_params_by_type : public UDevices_device_function_set_multi_parameter_base
{
public:
	FVerseFunctionProperty_                      __verse_0x59B457FF__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__type_N_RInvoke_L_N_Kfunction__parameter__base_R; // 0x48(0x10)(InstancedReference, HasGetValueTypeHash)
	TArray<class UClass*>                        __verse_0x8F623C81_ParameterTypes;                 // 0x58(0x10)(InstancedReference, ContainsInstancedReference)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_device_function_set_params_by_type");
		return Clss;
	}

	FOptionProperty_ _L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__type_N_RInvoke_L_N_Kfunction__parameter__base_R(const TArray<class UDevices_function_parameter_base*>& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x10 (0x78 - 0x68)
// VerseClass VerseDevices.Devices_device_function_set_params_by_type_const
class UDevices_device_function_set_params_by_type_const : public UDevices_device_function_set_params_by_type
{
public:
	FVerseFunctionProperty_                      __verse_0x4A59905A__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__type__const_N_RInvokeConst_L_N_Kfunction__parameter__base_R; // 0x68(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_device_function_set_params_by_type_const");
		return Clss;
	}

	FOptionProperty_ _L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__type__const_N_RInvokeConst_L_N_Kfunction__parameter__base_R(const TArray<class UDevices_function_parameter_base*>& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x10 (0x48 - 0x38)
// VerseClass VerseDevices.Devices_device_function_set_string
class UDevices_device_function_set_string : public UDevices_device_function_set_base
{
public:
	FVerseFunctionProperty_                      __verse_0x23330E3C__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__string_N_RInvoke_L_N_Kchar_R; // 0x38(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_device_function_set_string");
		return Clss;
	}

	void _L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__string_N_RInvoke_L_N_Kchar_R(FVerseStringProperty_ __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x10 (0x48 - 0x38)
// VerseClass VerseDevices.Devices_device_function_set_vector3
class UDevices_device_function_set_vector3 : public UDevices_device_function_set_base
{
public:
	FVerseFunctionProperty_                      __verse_0x3B995A88__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__vector3_N_RInvoke_L_Nvector3_R; // 0x38(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_device_function_set_vector3");
		return Clss;
	}

	void _L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__vector3_N_RInvoke_L_Nvector3_R(const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x40 (0x68 - 0x28)
// VerseClass VerseDevices.Devices_device_subscription
class UDevices_device_subscription : public UObject
{
public:
	FVerseFunctionProperty_                      __verse_0x08089514__L_2fVerse_2eorg_2fVerse_2fcancelable_N_RCancel; // 0x28(0x10)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_8EB3[0x30];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_device_subscription");
		return Clss;
	}

	void _L_2fVerse_2eorg_2fVerse_2fcancelable_N_RCancel(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseDevices.Devices_function_parameter_base
class UDevices_function_parameter_base : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_function_parameter_base");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x8 (0x30 - 0x28)
// VerseClass VerseDevices.Devices_function_parameter_agent
class UDevices_function_parameter_agent : public UDevices_function_parameter_base
{
public:
	FOptionProperty_                             __verse_0x31A8F10C_Value;                          // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_function_parameter_agent");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x18 (0x40 - 0x28)
// VerseClass VerseDevices.Devices_function_parameter_color
class UDevices_function_parameter_color : public UDevices_function_parameter_base
{
public:
	struct FColors_color                         __verse_0x31A8F10C_Value;                          // 0x28(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_function_parameter_color");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x8 (0x30 - 0x28)
// VerseClass VerseDevices.Devices_function_parameter_float
class UDevices_function_parameter_float : public UDevices_function_parameter_base
{
public:
	double                                       __verse_0x31A8F10C_Value;                          // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_function_parameter_float");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x8 (0x30 - 0x28)
// VerseClass VerseDevices.Devices_function_parameter_int
class UDevices_function_parameter_int : public UDevices_function_parameter_base
{
public:
	int64                                        __verse_0x31A8F10C_Value;                          // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_function_parameter_int");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x8 (0x30 - 0x28)
// VerseClass VerseDevices.Devices_function_parameter_logic
class UDevices_function_parameter_logic : public UDevices_function_parameter_base
{
public:
	uint8                                        __verse_0x31A8F10C_Value : 1;                      // Mask: 0x1, PropSize: 0x10x28(0x1)(InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8EB4[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_function_parameter_logic");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x8 (0x30 - 0x28)
// VerseClass VerseDevices.Devices_function_parameter_message
class UDevices_function_parameter_message : public UDevices_function_parameter_base
{
public:
	FOptionProperty_                             __verse_0x31A8F10C_Value;                          // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_function_parameter_message");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x10 (0x38 - 0x28)
// VerseClass VerseDevices.Devices_function_parameter_string
class UDevices_function_parameter_string : public UDevices_function_parameter_base
{
public:
	FVerseStringProperty_                        __verse_0x31A8F10C_Value;                          // 0x28(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_function_parameter_string");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x18 (0x40 - 0x28)
// VerseClass VerseDevices.Devices_function_parameter_vector3
class UDevices_function_parameter_vector3 : public UDevices_function_parameter_base
{
public:
	struct FSpatialMath_vector3                  __verse_0x31A8F10C_Value;                          // 0x28(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_function_parameter_vector3");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseDevices.Devices_move_to_debug_log
class UDevices_move_to_debug_log : public UDiagnostics_log_channel
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_move_to_debug_log");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseDevices.Devices_teleport_to_debug_log
class UDevices_teleport_to_debug_log : public UDiagnostics_log_channel
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Devices_teleport_to_debug_log");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x1B8 (0x308 - 0x150)
// VerseClass VerseDevices.task_Devices$operator_U_2eMoveToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Ltransform_Mfloat_R_R
class UTask_Devices_operator_U_2eMoveToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Ltransform_Mfloat_R_R : public UConcurrency_task
{
public:
	struct FTuple_Lcreative__movable__object__base_Mtuple_L_R_Mtuple_Ltransform_Mfloat_R_R __verse_0xB2CDDD72_Argument;                       // 0x150(0x80)(Parm, HasGetValueTypeHash)
	enum class EDevices_move_to_result           _RetVal;                                           // 0x1D0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDevices_move_to_internal_result  __verse_0x95D09D0E_Result_1;                       // 0x1D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8EB5[0x6];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     _AsyncTask_0;                                      // 0x1D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_1;                                 // 0x1E0(0x10)(HasGetValueTypeHash)
	struct FTuple_Lcreative__movable__object__base_Mtuple_L_R_Mtuple_Ltransform_Mfloat_R_R _ExprResult_2;                                     // 0x1F0(0x80)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_3;                                     // 0x270(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8EB6[0xF];                                     // Fixing Size After Last Property..
	struct FTuple_Ltransform_Mfloat_R            _ExprResult_4;                                     // 0x280(0x68)(HasGetValueTypeHash)
	uint8                                        Pad_8EB7[0x8];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_5;                                    // 0x2F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_6;                                         // 0x2F8(0x10)(HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_Devices$operator_U_2eMoveToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Ltransform_Mfloat_R_R");
		return Clss;
	}

	int64 Update();
};

// 0x218 (0x368 - 0x150)
// VerseClass VerseDevices.task_Devices$operator_U_2eMoveToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Lvector3_Mrotation_Mfloat_R_R
class UTask_Devices_operator_U_2eMoveToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Lvector3_Mrotation_Mfloat_R_R : public UConcurrency_task
{
public:
	struct FTuple_Lcreative__movable__object__base_Mtuple_L_R_Mtuple_Lvector3_Mrotation_Mfloat_R_R __verse_0xB2CDDD72_Argument;                       // 0x150(0x60)(Parm, HasGetValueTypeHash)
	enum class EDevices_move_to_result           _RetVal;                                           // 0x1B0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8EB8[0xF];                                     // Fixing Size After Last Property..
	struct FSpatialMath_transform                __verse_0x61C3007D_Transform_1;                    // 0x1C0(0x60)(NoDestructor)
	FVerseFunctionProperty_                      _Callee_0;                                         // 0x220(0x10)(HasGetValueTypeHash)
	struct FTuple_Lcreative__movable__object__base_Mtuple_L_R_Mtuple_L_R_R _ExprResult_1;                                     // 0x230(0xA)(HasGetValueTypeHash)
	uint8                                        Pad_8EB9[0x6];                                     // Fixing Size After Last Property..
	struct FTuple_L_R                            _ExprResult_2;                                     // 0x240(0x1)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_3;                                     // 0x241(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8EBA[0x6];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     _AsyncTask_4;                                      // 0x248(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_5;                                 // 0x250(0x10)(HasGetValueTypeHash)
	struct FTuple_Lcreative__movable__object__base_Mtuple_L_R_Mtuple_Ltransform_Mfloat_R_R _ExprResult_6;                                     // 0x260(0x80)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_7;                                     // 0x2E0(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8EBB[0xF];                                     // Fixing Size After Last Property..
	struct FTuple_Ltransform_Mfloat_R            _ExprResult_8;                                     // 0x2F0(0x68)(HasGetValueTypeHash)
	uint8                                        Pad_8EBC[0x8];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_9;                                    // 0x360(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_Devices$operator_U_2eMoveToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Lvector3_Mrotation_Mfloat_R_R");
		return Clss;
	}

	int64 Update();
};

// 0x658 (0x7A8 - 0x150)
// VerseClass VerseDevices.task_Devices$operator_U_2eMoveToInternalImpl_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Ltransform_Mfloat_R_R
class UTask_Devices_operator_U_2eMoveToInternalImpl_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Ltransform_Mfloat_R_R : public UConcurrency_task
{
public:
	struct FTuple_Lcreative__movable__object__base_Mtuple_L_R_Mtuple_Ltransform_Mfloat_R_R __verse_0xB2CDDD72_Argument;                       // 0x150(0x80)(Parm, HasGetValueTypeHash)
	enum class EDevices_move_to_internal_result  _RetVal;                                           // 0x1D0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8EBD[0x7];                                     // Fixing Size After Last Property..
	FOptionProperty_                             _ExprResultStack_0;                                // 0x1D8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_Qanimation__controller_Mget__animation__controller__result_R __verse_0xA8BECD0D_GetControllerResult_1;          // 0x1E8(0x9)(HasGetValueTypeHash)
	uint8                                        Pad_8EBE[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      _Callee_1;                                         // 0x1F8(0x10)(HasGetValueTypeHash)
	class UDevices_CreativeAnimation_animation_controller* __verse_0x995129C4_Controller_4;                   // 0x208(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_2;                                // 0x210(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_8EBF[0x8];                                     // Fixing Size After Last Property..
	struct FSpatialMath_transform                __verse_0x80B800AD_CurrentTransform_4;             // 0x220(0x60)(NoDestructor)
	FVerseFunctionProperty_                      _Callee_3;                                         // 0x280(0x10)(HasGetValueTypeHash)
	struct FTuple_Lcreative__movable__object__base_Mtuple_L_R_Mtuple_L_R_R _ExprResult_4;                                     // 0x290(0xA)(HasGetValueTypeHash)
	uint8                                        Pad_8EC0[0x6];                                     // Fixing Size After Last Property..
	struct FTuple_L_R                            _ExprResult_5;                                     // 0x2A0(0x1)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_6;                                     // 0x2A1(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8EC1[0x6];                                     // Fixing Size After Last Property..
	TArray<struct FDevices_CreativeAnimation_keyframe_delta> __verse_0xB23BEFD6_KeyframeArray_4;                // 0x2A8(0x10)(ContainsInstancedReference)
	uint8                                        Pad_8EC2[0x8];                                     // Fixing Size After Last Property..
	struct FDevices_CreativeAnimation_keyframe_delta _ExprResult_7;                                     // 0x2C0(0x80)(NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_8;                                // 0x340(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_9;                                     // 0x390(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_10;                                    // 0x3A0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_11;                                    // 0x3B0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_12;                                    // 0x3C0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_13;                                    // 0x3D0(0x10)(HasGetValueTypeHash)
	struct FSpatialMath_vector3                  _ExprResultStack_14;                               // 0x3E0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	FVerseFunctionProperty_                      _Callee_15;                                        // 0x3F8(0x10)(HasGetValueTypeHash)
	struct FTuple_Lvector3_Mvector3_R            _ExprResult_16;                                    // 0x408(0x30)(HasGetValueTypeHash)
	uint8                                        Pad_8EC3[0x8];                                     // Fixing Size After Last Property..
	struct FVerseRotation                        _ExprResultStack_17;                               // 0x440(0x20)(NoDestructor)
	FVerseFunctionProperty_                      _Callee_18;                                        // 0x460(0x10)(HasGetValueTypeHash)
	struct FTuple_Lrotation_Mrotation_R          _ExprResult_19;                                    // 0x470(0x40)(HasGetValueTypeHash)
	struct FSpatialMath_vector3                  _ExprResultStack_20;                               // 0x4B0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	FVerseFunctionProperty_                      _Callee_21;                                        // 0x4C8(0x10)(HasGetValueTypeHash)
	struct FTuple_Lvector3_Mvector3_R            _ExprResult_22;                                    // 0x4D8(0x30)(HasGetValueTypeHash)
	enum class EDevices_CreativeAnimation_set_animation_result __verse_0xC40A5F4A_SetAnimationResult_4;           // 0x508(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8EC4[0x7];                                     // Fixing Size After Last Property..
	class UDevices_CreativeAnimation_animation_controller* __verse_0x00000000__5;                             // 0x510(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_23;                                        // 0x518(0x10)(HasGetValueTypeHash)
	struct FTuple_L_Kkeyframe__delta_M_QAnimationMode_Nanimation__mode_R _ExprResult_24;                                    // 0x528(0x12)(HasGetValueTypeHash)
	uint8                                        Pad_8EC5[0x6];                                     // Fixing Size After Last Property..
	FOptionProperty_                             _ExprResult_25;                                    // 0x540(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8EC6[0x6];                                     // Fixing Size After Last Property..
	FVerseDynamicProperty_                       InvokeResultDummy_26;                              // 0x548(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_27;                               // 0x558(0x18)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       _ExprResult_28;                                    // 0x570(0x10)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       _ExprResult_29;                                    // 0x580(0x10)(HasGetValueTypeHash)
	enum class EDevices_CreativeAnimation_playstoppause_result __verse_0x2BCA4545_PlayResult_6;                   // 0x590(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8EC7[0x7];                                     // Fixing Size After Last Property..
	class UDevices_CreativeAnimation_animation_controller* __verse_0x00000000__7;                             // 0x598(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_30;                                        // 0x5A0(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_31;                                    // 0x5B0(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8EC8[0x7];                                     // Fixing Size After Last Property..
	FVerseDynamicProperty_                       InvokeResultDummy_32;                              // 0x5B8(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_33;                               // 0x5C8(0x18)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       _ExprResult_34;                                    // 0x5E0(0x10)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       _ExprResult_35;                                    // 0x5F0(0x10)(HasGetValueTypeHash)
	enum class EDevices_CreativeAnimation_await_next_keyframe_result __verse_0x95D09D0E_Result_8;                       // 0x600(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8EC9[0x7];                                     // Fixing Size After Last Property..
	class UDevices_CreativeAnimation_animation_controller* __verse_0x00000000__9;                             // 0x608(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConcurrency_task*                     _AsyncTask_36;                                     // 0x610(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_37;                                // 0x618(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_38;                                    // 0x628(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8ECA[0x7];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_39;                                   // 0x630(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDevices_CreativeAnimation_await_next_keyframe_result __verse_0x00000000__10;                            // 0x638(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8ECB[0x7];                                     // Fixing Size After Last Property..
	FVerseDynamicProperty_                       InvokeResultDummy_40;                              // 0x640(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_41;                               // 0x650(0x18)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       _ExprResult_42;                                    // 0x668(0x10)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       _ExprResult_43;                                    // 0x678(0x10)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       InvokeResultDummy_44;                              // 0x688(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_45;                               // 0x698(0x18)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       _ExprResult_46;                                    // 0x6B0(0x10)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       _ExprResult_47;                                    // 0x6C0(0x10)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       InvokeResultDummy_48;                              // 0x6D0(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_49;                               // 0x6E0(0x18)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       _ExprResult_50;                                    // 0x6F8(0x10)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       _ExprResult_51;                                    // 0x708(0x10)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       InvokeResultDummy_52;                              // 0x718(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_53;                               // 0x728(0x18)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       _ExprResult_54;                                    // 0x740(0x10)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       _ExprResult_55;                                    // 0x750(0x10)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       InvokeResultDummy_56;                              // 0x760(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_57;                               // 0x770(0x18)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       _ExprResult_58;                                    // 0x788(0x10)(HasGetValueTypeHash)
	FVerseDynamicProperty_                       _ExprResult_59;                                    // 0x798(0x10)(HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_Devices$operator_U_2eMoveToInternalImpl_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Ltransform_Mfloat_R_R");
		return Clss;
	}

	int64 Update();
};

// 0x1A8 (0x2F8 - 0x150)
// VerseClass VerseDevices.task_Devices_creative_device$MoveTo_L_Ntransform_M_Nfloat_R
class UTask_Devices_creative_device_MoveTo_L_Ntransform_M_Nfloat_R : public UConcurrency_task
{
public:
	class UDevices_creative_device*              _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8ECC[0x8];                                     // Fixing Size After Last Property..
	struct FTuple_Ltransform_Mfloat_R            __verse_0xB2CDDD72_Argument;                       // 0x160(0x68)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8ECD[0x8];                                     // Fixing Size After Last Property..
	enum class EDevices_move_to_result           _RetVal;                                           // 0x1D0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8ECE[0x7];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     _AsyncTask_0;                                      // 0x1D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_1;                                 // 0x1E0(0x10)(HasGetValueTypeHash)
	struct FTuple_Lcreative__device_Mtuple_L_R_Mtuple_Ltransform_Mfloat_R_R _ExprResult_2;                                     // 0x1F0(0x80)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_3;                                     // 0x270(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8ECF[0xF];                                     // Fixing Size After Last Property..
	struct FTuple_Ltransform_Mfloat_R            _ExprResult_4;                                     // 0x280(0x68)(HasGetValueTypeHash)
	uint8                                        Pad_8ED0[0x8];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_5;                                    // 0x2F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_Devices_creative_device$MoveTo_L_Ntransform_M_Nfloat_R");
		return Clss;
	}

	int64 Update();
};

// 0x148 (0x298 - 0x150)
// VerseClass VerseDevices.task_Devices_creative_device$MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R
class UTask_Devices_creative_device_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R : public UConcurrency_task
{
public:
	class UDevices_creative_device*              _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8ED1[0x8];                                     // Fixing Size After Last Property..
	struct FTuple_Lvector3_Mrotation_Mfloat_R    __verse_0xB2CDDD72_Argument;                       // 0x160(0x48)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8ED2[0x8];                                     // Fixing Size After Last Property..
	enum class EDevices_move_to_result           _RetVal;                                           // 0x1B0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8ED3[0x7];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     _AsyncTask_0;                                      // 0x1B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_1;                                 // 0x1C0(0x10)(HasGetValueTypeHash)
	struct FTuple_Lcreative__device_Mtuple_L_R_Mtuple_Lvector3_Mrotation_Mfloat_R_R _ExprResult_2;                                     // 0x1D0(0x60)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_3;                                     // 0x230(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8ED4[0xF];                                     // Fixing Size After Last Property..
	struct FTuple_Lvector3_Mrotation_Mfloat_R    _ExprResult_4;                                     // 0x240(0x48)(HasGetValueTypeHash)
	uint8                                        Pad_8ED5[0x8];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_5;                                    // 0x290(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_Devices_creative_device$MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R");
		return Clss;
	}

	int64 Update();
};

// 0x9 (0x159 - 0x150)
// VerseClass VerseDevices.task_Devices_creative_device$OnBegin
class UTask_Devices_creative_device_OnBegin : public UConcurrency_task
{
public:
	class UDevices_creative_device*              _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_Devices_creative_device$OnBegin");
		return Clss;
	}

	int64 Update();
};

// 0x1A8 (0x2F8 - 0x150)
// VerseClass VerseDevices.task_Devices_creative_prop$MoveTo_L_Ntransform_M_Nfloat_R
class UTask_Devices_creative_prop_MoveTo_L_Ntransform_M_Nfloat_R : public UConcurrency_task
{
public:
	class UDevices_creative_prop*                _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8ED6[0x8];                                     // Fixing Size After Last Property..
	struct FTuple_Ltransform_Mfloat_R            __verse_0xB2CDDD72_Argument;                       // 0x160(0x68)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8ED7[0x8];                                     // Fixing Size After Last Property..
	enum class EDevices_move_to_result           _RetVal;                                           // 0x1D0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8ED8[0x7];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     _AsyncTask_0;                                      // 0x1D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_1;                                 // 0x1E0(0x10)(HasGetValueTypeHash)
	struct FTuple_Lcreative__prop_Mtuple_L_R_Mtuple_Ltransform_Mfloat_R_R _ExprResult_2;                                     // 0x1F0(0x80)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_3;                                     // 0x270(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8ED9[0xF];                                     // Fixing Size After Last Property..
	struct FTuple_Ltransform_Mfloat_R            _ExprResult_4;                                     // 0x280(0x68)(HasGetValueTypeHash)
	uint8                                        Pad_8EDA[0x8];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_5;                                    // 0x2F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_Devices_creative_prop$MoveTo_L_Ntransform_M_Nfloat_R");
		return Clss;
	}

	int64 Update();
};

// 0x148 (0x298 - 0x150)
// VerseClass VerseDevices.task_Devices_creative_prop$MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R
class UTask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R : public UConcurrency_task
{
public:
	class UDevices_creative_prop*                _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8EDB[0x8];                                     // Fixing Size After Last Property..
	struct FTuple_Lvector3_Mrotation_Mfloat_R    __verse_0xB2CDDD72_Argument;                       // 0x160(0x48)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8EDC[0x8];                                     // Fixing Size After Last Property..
	enum class EDevices_move_to_result           _RetVal;                                           // 0x1B0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8EDD[0x7];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     _AsyncTask_0;                                      // 0x1B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _AsyncTaskClass_1;                                 // 0x1C0(0x10)(HasGetValueTypeHash)
	struct FTuple_Lcreative__prop_Mtuple_L_R_Mtuple_Lvector3_Mrotation_Mfloat_R_R _ExprResult_2;                                     // 0x1D0(0x60)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_3;                                     // 0x230(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_8EDE[0xF];                                     // Fixing Size After Last Property..
	struct FTuple_Lvector3_Mrotation_Mfloat_R    _ExprResult_4;                                     // 0x240(0x48)(HasGetValueTypeHash)
	uint8                                        Pad_8EDF[0x8];                                     // Fixing Size After Last Property..
	int64                                        _AsyncResult_5;                                    // 0x290(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_Devices_creative_prop$MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R");
		return Clss;
	}

	int64 Update();
};

// 0xA (0x15A - 0x150)
// VerseClass VerseDevices.task_Devices_CreativeAnimation_animation_controller$AwaitNextKeyframe
class UTask_Devices_CreativeAnimation_animation_controller_AwaitNextKeyframe : public UConcurrency_task
{
public:
	class UDevices_CreativeAnimation_animation_controller* _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	enum class EDevices_CreativeAnimation_await_next_keyframe_result _RetVal;                                           // 0x159(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_Devices_CreativeAnimation_animation_controller$AwaitNextKeyframe");
		return Clss;
	}

	int64 Update();
};

// 0x20 (0x170 - 0x150)
// VerseClass VerseDevices.task_Devices_device_event_agent$Await
class UTask_Devices_device_event_agent_Await : public UConcurrency_task
{
public:
	class UDevices_device_event_agent*           _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8EE0[0x7];                                     // Fixing Size After Last Property..
	FVerseDynamicProperty_                       _RetVal;                                           // 0x160(0x10)(Parm, OutParm, ReturnParm, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_Devices_device_event_agent$Await");
		return Clss;
	}

	int64 Update();
};

// 0x20 (0x170 - 0x150)
// VerseClass VerseDevices.task_Devices_device_event_agent_int$Await
class UTask_Devices_device_event_agent_int_Await : public UConcurrency_task
{
public:
	class UDevices_device_event_agent_int*       _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8EE1[0x7];                                     // Fixing Size After Last Property..
	FVerseDynamicProperty_                       _RetVal;                                           // 0x160(0x10)(Parm, OutParm, ReturnParm, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_Devices_device_event_agent_int$Await");
		return Clss;
	}

	int64 Update();
};

// 0x20 (0x170 - 0x150)
// VerseClass VerseDevices.task_Devices_device_event_ai_interaction$Await
class UTask_Devices_device_event_ai_interaction_Await : public UConcurrency_task
{
public:
	class UDevices_device_event_ai_interaction*  _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8EE2[0x7];                                     // Fixing Size After Last Property..
	FVerseDynamicProperty_                       _RetVal;                                           // 0x160(0x10)(Parm, OutParm, ReturnParm, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_Devices_device_event_ai_interaction$Await");
		return Clss;
	}

	int64 Update();
};

// 0x20 (0x170 - 0x150)
// VerseClass VerseDevices.task_Devices_device_event_optional_agent$Await
class UTask_Devices_device_event_optional_agent_Await : public UConcurrency_task
{
public:
	class UDevices_device_event_optional_agent*  _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8EE3[0x7];                                     // Fixing Size After Last Property..
	FVerseDynamicProperty_                       _RetVal;                                           // 0x160(0x10)(Parm, OutParm, ReturnParm, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_Devices_device_event_optional_agent$Await");
		return Clss;
	}

	int64 Update();
};

// 0x20 (0x170 - 0x150)
// VerseClass VerseDevices.task_Devices_device_event_optional_agent_int$Await
class UTask_Devices_device_event_optional_agent_int_Await : public UConcurrency_task
{
public:
	class UDevices_device_event_optional_agent_int* _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8EE4[0x7];                                     // Fixing Size After Last Property..
	FVerseDynamicProperty_                       _RetVal;                                           // 0x160(0x10)(Parm, OutParm, ReturnParm, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_Devices_device_event_optional_agent_int$Await");
		return Clss;
	}

	int64 Update();
};

// 0x20 (0x170 - 0x150)
// VerseClass VerseDevices.task_Devices_device_event_vehicle$Await
class UTask_Devices_device_event_vehicle_Await : public UConcurrency_task
{
public:
	class UDevices_device_event_vehicle*         _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8EE5[0x7];                                     // Fixing Size After Last Property..
	FVerseDynamicProperty_                       _RetVal;                                           // 0x160(0x10)(Parm, OutParm, ReturnParm, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_Devices_device_event_vehicle$Await");
		return Clss;
	}

	int64 Update();
};

// 0x20 (0x170 - 0x150)
// VerseClass VerseDevices.task_Devices_device_event_void$Await
class UTask_Devices_device_event_void_Await : public UConcurrency_task
{
public:
	class UDevices_device_event_void*            _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8EE6[0x7];                                     // Fixing Size After Last Property..
	FVerseDynamicProperty_                       _RetVal;                                           // 0x160(0x10)(Parm, OutParm, ReturnParm, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_Devices_device_event_void$Await");
		return Clss;
	}

	int64 Update();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
