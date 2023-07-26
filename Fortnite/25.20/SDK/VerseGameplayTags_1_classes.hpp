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
// VerseClass VerseGameplayTags.$SolarisSignatureFunctionOuter
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
// VerseClass VerseGameplayTags.Tags
class UTags : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Tags");
		return Clss;
	}

	FVerseStringProperty_ _L_2fVerse_2eorg_2fSimulation_2fTags_N_RToString_L_Ntag_R(class UTags_tag* __verse_0xB2CDDD72_Argument);
	FVerseStringProperty_ _L_2fVerse_2eorg_2fSimulation_2fTags_N_RToString_L_Ntag__container_R(class UTags_tag_container* __verse_0xB2CDDD72_Argument);
	void _L_2fVerse_2eorg_2fSimulation_2fTags_N_RMakeTagContainer_L_N_Ktag_R(const TArray<class UTags_tag*>& __verse_0xB2CDDD72_Argument, uint64 InstancingGraph, class UTags_tag_container* __verse_0xB482F2DD_CurrentlyInstantiatedObject);
	FOptionProperty_ _L_2fVerse_2eorg_2fSimulation_2fTags_N_RMakeTagContainer_L_Ntag__selector__container_R(const struct FVerseGameplayTagContainer& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fVerse_2eorg_2fSimulation_2fTags_N_RMakeGameplayTagFromSubClass_L_NType_20where_20Type_R(class UClass* __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fVerse_2eorg_2fSimulation_2fTags_N_RMakeGameplayTag_L_Ntag__selector_R(const struct FVerseGameplayTag& __verse_0xB2CDDD72_Argument);
	TArray<class UEntityComponent*> _L_2fVerse_2eorg_2fSimulation_2fTags_N_RFindObjectsWithTags_L_Ntag__search__criteria_R(class UTags_tag_search_criteria* __verse_0xB2CDDD72_Argument);
	TArray<class UEntityComponent*> _L_2fVerse_2eorg_2fSimulation_2fTags_N_RFindObjectsWithTag_L_Ntag_R(class UTags_tag* __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fVerse_2eorg_2fSimulation_2fTags_N_RFindObjectWithTag_L_Ntag_R(class UTags_tag* __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fVerse_2eorg_2fSimulation_2fTags_N_REquals_L_Ntag__container_M_Ntag__container_R(const struct FTuple_Ltag__container_Mtag__container_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fVerse_2eorg_2fSimulation_2fTags_N_REquals_L_Ntag_M_Ntag_R(const struct FTuple_Ltag_Mtag_R& __verse_0xB2CDDD72_Argument);
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseGameplayTags.Tags_tag
class UTags_tag : public UVerseGameplayTagBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Tags_tag");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0xC0 (0xF8 - 0x38)
// VerseClass VerseGameplayTags.Tags_tag_container
class UTags_tag_container : public UVerseGameplayTagContainerBase
{
public:
	FVerseFunctionProperty_                      __verse_0x2B191198__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RAdd_L_Ntag_R; // 0x38(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x8D50B5CF__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RRemove_L_Ntag_R; // 0x48(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xCFB5D729__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RAdd_L_N_Ktag_R; // 0x58(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x4D2BD89C__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RRemove_L_N_Ktag_R; // 0x68(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x64E4995F__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RAdd_L_Ntag__container_R; // 0x78(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x431CFAB6__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RRemove_L_Ntag__container_R; // 0x88(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x01C6626F__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RReset; // 0x98(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x7955A9D1__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RResetWithSlack_L_Nint_R; // 0xA8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x5DCAADF9__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RNum; // 0xB8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xE22D7C25__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHas_L_Ntag_R; // 0xC8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x59FE2A56__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHasAny_L_N_Ktag_R; // 0xD8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xAD983923__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHasAll_L_N_Ktag_R; // 0xE8(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Tags_tag_container");
		return Clss;
	}

	void _L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RResetWithSlack_L_Nint_R(int64 __verse_0xB2CDDD72_Argument);
	void _L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RReset(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RRemove_L_Ntag__container_R(class UTags_tag_container* __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RRemove_L_Ntag_R(class UTags_tag* __verse_0xB2CDDD72_Argument);
	void _L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RRemove_L_N_Ktag_R(const TArray<class UTags_tag*>& __verse_0xB2CDDD72_Argument);
	int64 _L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RNum(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHasAny_L_N_Ktag_R(const TArray<class UTags_tag*>& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHasAll_L_N_Ktag_R(const TArray<class UTags_tag*>& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHas_L_Ntag_R(class UTags_tag* __verse_0xB2CDDD72_Argument);
	void _L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RAdd_L_Ntag_R(class UTags_tag* __verse_0xB2CDDD72_Argument);
	void _L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RAdd_L_N_Ktag_R(const TArray<class UTags_tag*>& __verse_0xB2CDDD72_Argument);
	void _L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RAdd_L_Ntag__container_R(class UTags_tag_container* __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x40 (0xB8 - 0x78)
// VerseClass VerseGameplayTags.Tags_tag_container_component
class UTags_tag_container_component : public UEntityTagContainerComponent
{
public:
	FVerseFunctionProperty_                      __verse_0xCE39A097__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RGetTags; // 0x78(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x4182B069__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RSetTags_L_Ntag__container_R; // 0x88(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x78A18B3B__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RAddTag_L_Ntag_R; // 0x98(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x60A0B16A__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RRemoveTag_L_Ntag_R; // 0xA8(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Tags_tag_container_component");
		return Clss;
	}

	void _L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RSetTags_L_Ntag__container_R(class UTags_tag_container* __verse_0xB2CDDD72_Argument);
	uint8 _L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RRemoveTag_L_Ntag_R(class UTags_tag* __verse_0xB2CDDD72_Argument);
	class UTags_tag_container* _L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RGetTags(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RAddTag_L_Ntag_R(class UTags_tag* __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x38 (0x60 - 0x28)
// VerseClass VerseGameplayTags.Tags_tag_search_criteria
class UTags_tag_search_criteria : public UObject
{
public:
	TArray<class UTags_tag*>                     __verse_0x4B15ECEC_RequiredTags;                   // 0x28(0x10)(InstancedReference, ContainsInstancedReference)
	TArray<class UTags_tag*>                     __verse_0xDC4AEE52_PreferredTags;                  // 0x38(0x10)(InstancedReference, ContainsInstancedReference)
	TArray<class UTags_tag*>                     __verse_0x321D6A7B_ExclusionTags;                  // 0x48(0x10)(InstancedReference, ContainsInstancedReference)
	enum class ETags_tag_search_sort_type        __verse_0xBFD91910_SortType;                       // 0x58(0x1)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B78[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Tags_tag_search_criteria");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO(const TArray<class UTags_tag*>& _ExprResult_0, const TArray<enum class EVerseFalse>& __verse_0xFFC68BC5_Array_1, const TArray<class UTags_tag*>& _ForResult_1, int64 _ForIndex_2, int64 _ForLength_3, enum class EVerseFalse __verse_0xFB88B569_Item_3, uint8 _ExprResult_4, const TArray<class UTags_tag*>& _ExprResult_5, const TArray<enum class EVerseFalse>& __verse_0xFFC68BC5_Array_5, const TArray<class UTags_tag*>& _ForResult_6, int64 _ForIndex_7, int64 _ForLength_8, enum class EVerseFalse __verse_0xFB88B569_Item_7, uint8 _ExprResult_9, const TArray<class UTags_tag*>& _ExprResult_10, const TArray<enum class EVerseFalse>& __verse_0xFFC68BC5_Array_9, const TArray<class UTags_tag*>& _ForResult_11, int64 _ForIndex_12, int64 _ForLength_13, enum class EVerseFalse __verse_0xFB88B569_Item_11, uint8 _ExprResult_14);
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseGameplayTags.Tags_tag_view
class UTags_tag_view : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Tags_tag_view");
		return Clss;
	}

	FOptionProperty_ _L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHasAny_L_N_Ktag_R(const TArray<class UTags_tag*>& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHasAll_L_N_Ktag_R(const TArray<class UTags_tag*>& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHas_L_Ntag_R(class UTags_tag* __verse_0xB2CDDD72_Argument);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
