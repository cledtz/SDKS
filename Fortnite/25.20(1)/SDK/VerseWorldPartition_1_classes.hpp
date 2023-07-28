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
// VerseClass VerseWorldPartition.$SolarisSignatureFunctionOuter
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
// VerseClass VerseWorldPartition.VerseWorldPartition
class UVerseWorldPartition : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseWorldPartition");
		return Clss;
	}

	FOptionProperty_ _L_2fUnrealEngine_2ecom_2fWorldPartition_2fVerseWorldPartition_N_RGetDataLayerManager(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitCDO();
};

// 0x0 (0xD8 - 0xD8)
// VerseClass VerseWorldPartition.VerseWorldPartition_data_layer_asset
class UVerseWorldPartition_data_layer_asset : public UAssets_asset
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseWorldPartition_data_layer_asset");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x20 (0x48 - 0x28)
// VerseClass VerseWorldPartition.VerseWorldPartition_data_layer_manager
class UVerseWorldPartition_data_layer_manager : public UVerseDataLayerManagerBase
{
public:
	FVerseFunctionProperty_                      __verse_0x493EE383__L_2fUnrealEngine_2ecom_2fWorldPartition_2fVerseWorldPartition_2fdata__layer__manager_N_RSetDataLayerRuntimeState_L_Ndata__layer__asset_M_Ndata__layer__runtime__state_M_Nlogic_R; // 0x28(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x2AC50B3B__L_2fUnrealEngine_2ecom_2fWorldPartition_2fVerseWorldPartition_2fdata__layer__manager_N_RGetDataLayerEffectiveRuntimeState_L_Ndata__layer__asset_R; // 0x38(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseWorldPartition_data_layer_manager");
		return Clss;
	}

	uint8 _L_2fUnrealEngine_2ecom_2fWorldPartition_2fVerseWorldPartition_2fdata__layer__manager_N_RSetDataLayerRuntimeState_L_Ndata__layer__asset_M_Ndata__layer__runtime__state_M_Nlogic_R(const struct FTuple_Ldata__layer__asset_Mdata__layer__runtime__state_Mlogic_R& __verse_0xB2CDDD72_Argument);
	enum class EVerseWorldPartition_data_layer_runtime_state _L_2fUnrealEngine_2ecom_2fWorldPartition_2fVerseWorldPartition_2fdata__layer__manager_N_RGetDataLayerEffectiveRuntimeState_L_Ndata__layer__asset_R(class UVerseWorldPartition_data_layer_asset* __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
