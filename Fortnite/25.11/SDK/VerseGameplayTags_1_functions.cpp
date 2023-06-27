#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function VerseGameplayTags.Tags._L_2fVerse_2eorg_2fSimulation_2fTags_N_RToString_L_Ntag_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UTags_tag*                   __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseStringProperty_              RetVal                                                           (Parm, OutParm, ReturnParm, HasGetValueTypeHash)

FVerseStringProperty_ UTags::_L_2fVerse_2eorg_2fSimulation_2fTags_N_RToString_L_Ntag_R(class UTags_tag* __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Tags", "_L_2fVerse_2eorg_2fSimulation_2fTags_N_RToString_L_Ntag_R");

	Params::UTags__L_2fVerse_2eorg_2fSimulation_2fTags_N_RToString_L_Ntag_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseGameplayTags.Tags._L_2fVerse_2eorg_2fSimulation_2fTags_N_RToString_L_Ntag__container_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UTags_tag_container*         __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseStringProperty_              RetVal                                                           (Parm, OutParm, ReturnParm, HasGetValueTypeHash)

FVerseStringProperty_ UTags::_L_2fVerse_2eorg_2fSimulation_2fTags_N_RToString_L_Ntag__container_R(class UTags_tag_container* __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Tags", "_L_2fVerse_2eorg_2fSimulation_2fTags_N_RToString_L_Ntag__container_R");

	Params::UTags__L_2fVerse_2eorg_2fSimulation_2fTags_N_RToString_L_Ntag__container_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseGameplayTags.Tags._L_2fVerse_2eorg_2fSimulation_2fTags_N_RMakeTagContainer_L_N_Ktag_R
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class UTags_tag*>           __verse_0xB2CDDD72_Argument                                      (Parm, ContainsInstancedReference)
// uint64                             InstancingGraph                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTags_tag_container*         __verse_0xB482F2DD_CurrentlyInstantiatedObject                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

void UTags::_L_2fVerse_2eorg_2fSimulation_2fTags_N_RMakeTagContainer_L_N_Ktag_R(const TArray<class UTags_tag*>& __verse_0xB2CDDD72_Argument, uint64 InstancingGraph, class UTags_tag_container* __verse_0xB482F2DD_CurrentlyInstantiatedObject)
{
	static auto Func = Class->GetFunction("Tags", "_L_2fVerse_2eorg_2fSimulation_2fTags_N_RMakeTagContainer_L_N_Ktag_R");

	Params::UTags__L_2fVerse_2eorg_2fSimulation_2fTags_N_RMakeTagContainer_L_N_Ktag_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.InstancingGraph = InstancingGraph;
	Parms.__verse_0xB482F2DD_CurrentlyInstantiatedObject = __verse_0xB482F2DD_CurrentlyInstantiatedObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseGameplayTags.Tags._L_2fVerse_2eorg_2fSimulation_2fTags_N_RMakeTagContainer_L_Ntag__selector__container_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVerseGameplayTagContainer  __verse_0xB2CDDD72_Argument                                      (Parm)
// FOptionProperty_                   RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionProperty_ UTags::_L_2fVerse_2eorg_2fSimulation_2fTags_N_RMakeTagContainer_L_Ntag__selector__container_R(const struct FVerseGameplayTagContainer& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Tags", "_L_2fVerse_2eorg_2fSimulation_2fTags_N_RMakeTagContainer_L_Ntag__selector__container_R");

	Params::UTags__L_2fVerse_2eorg_2fSimulation_2fTags_N_RMakeTagContainer_L_Ntag__selector__container_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseGameplayTags.Tags._L_2fVerse_2eorg_2fSimulation_2fTags_N_RMakeGameplayTagFromSubClass_L_Nsubtype_Ltag_R_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UClass*                      __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionProperty_                   RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionProperty_ UTags::_L_2fVerse_2eorg_2fSimulation_2fTags_N_RMakeGameplayTagFromSubClass_L_Nsubtype_Ltag_R_R(class UClass* __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Tags", "_L_2fVerse_2eorg_2fSimulation_2fTags_N_RMakeGameplayTagFromSubClass_L_Nsubtype_Ltag_R_R");

	Params::UTags__L_2fVerse_2eorg_2fSimulation_2fTags_N_RMakeGameplayTagFromSubClass_L_Nsubtype_Ltag_R_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseGameplayTags.Tags._L_2fVerse_2eorg_2fSimulation_2fTags_N_RMakeGameplayTag_L_Ntag__selector_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVerseGameplayTag           __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor, HasGetValueTypeHash)
// FOptionProperty_                   RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionProperty_ UTags::_L_2fVerse_2eorg_2fSimulation_2fTags_N_RMakeGameplayTag_L_Ntag__selector_R(const struct FVerseGameplayTag& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Tags", "_L_2fVerse_2eorg_2fSimulation_2fTags_N_RMakeGameplayTag_L_Ntag__selector_R");

	Params::UTags__L_2fVerse_2eorg_2fSimulation_2fTags_N_RMakeGameplayTag_L_Ntag__selector_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseGameplayTags.Tags._L_2fVerse_2eorg_2fSimulation_2fTags_N_RFindObjectsWithTags_L_Ntag__search__criteria_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UTags_tag_search_criteria*   __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// TArray<class UEntityComponent*>    RetVal                                                           (Parm, OutParm, ReturnParm, ContainsInstancedReference)

TArray<class UEntityComponent*> UTags::_L_2fVerse_2eorg_2fSimulation_2fTags_N_RFindObjectsWithTags_L_Ntag__search__criteria_R(class UTags_tag_search_criteria* __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Tags", "_L_2fVerse_2eorg_2fSimulation_2fTags_N_RFindObjectsWithTags_L_Ntag__search__criteria_R");

	Params::UTags__L_2fVerse_2eorg_2fSimulation_2fTags_N_RFindObjectsWithTags_L_Ntag__search__criteria_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseGameplayTags.Tags._L_2fVerse_2eorg_2fSimulation_2fTags_N_RFindObjectsWithTag_L_Ntag_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UTags_tag*                   __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// TArray<class UEntityComponent*>    RetVal                                                           (Parm, OutParm, ReturnParm, ContainsInstancedReference)

TArray<class UEntityComponent*> UTags::_L_2fVerse_2eorg_2fSimulation_2fTags_N_RFindObjectsWithTag_L_Ntag_R(class UTags_tag* __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Tags", "_L_2fVerse_2eorg_2fSimulation_2fTags_N_RFindObjectsWithTag_L_Ntag_R");

	Params::UTags__L_2fVerse_2eorg_2fSimulation_2fTags_N_RFindObjectsWithTag_L_Ntag_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseGameplayTags.Tags._L_2fVerse_2eorg_2fSimulation_2fTags_N_RFindObjectWithTag_L_Ntag_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UTags_tag*                   __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionProperty_                   RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionProperty_ UTags::_L_2fVerse_2eorg_2fSimulation_2fTags_N_RFindObjectWithTag_L_Ntag_R(class UTags_tag* __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Tags", "_L_2fVerse_2eorg_2fSimulation_2fTags_N_RFindObjectWithTag_L_Ntag_R");

	Params::UTags__L_2fVerse_2eorg_2fSimulation_2fTags_N_RFindObjectWithTag_L_Ntag_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseGameplayTags.Tags._L_2fVerse_2eorg_2fSimulation_2fTags_N_REquals_L_Ntag__container_M_Ntag__container_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Ltag__container_Mtag__container_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionProperty_                   RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionProperty_ UTags::_L_2fVerse_2eorg_2fSimulation_2fTags_N_REquals_L_Ntag__container_M_Ntag__container_R(const struct FTuple_Ltag__container_Mtag__container_R& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Tags", "_L_2fVerse_2eorg_2fSimulation_2fTags_N_REquals_L_Ntag__container_M_Ntag__container_R");

	Params::UTags__L_2fVerse_2eorg_2fSimulation_2fTags_N_REquals_L_Ntag__container_M_Ntag__container_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseGameplayTags.Tags._L_2fVerse_2eorg_2fSimulation_2fTags_N_REquals_L_Ntag_M_Ntag_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Ltag_Mtag_R          __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionProperty_                   RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionProperty_ UTags::_L_2fVerse_2eorg_2fSimulation_2fTags_N_REquals_L_Ntag_M_Ntag_R(const struct FTuple_Ltag_Mtag_R& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Tags", "_L_2fVerse_2eorg_2fSimulation_2fTags_N_REquals_L_Ntag_M_Ntag_R");

	Params::UTags__L_2fVerse_2eorg_2fSimulation_2fTags_N_REquals_L_Ntag_M_Ntag_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseGameplayTags.Tags.$InitCDO
// ()
// Parameters:

void UTags::_InitCDO()
{
	static auto Func = Class->GetFunction("Tags", "$InitCDO");

	Params::UTags__InitCDO_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseGameplayTags.Tags_tag.$InitInstance
// ()
// Parameters:

void UTags_tag::_InitInstance()
{
	static auto Func = Class->GetFunction("Tags_tag", "$InitInstance");

	Params::UTags_tag__InitInstance_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseGameplayTags.Tags_tag.$Block
// ()
// Parameters:

void UTags_tag::_Block()
{
	static auto Func = Class->GetFunction("Tags_tag", "$Block");

	Params::UTags_tag__Block_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseGameplayTags.Tags_tag.$InitCDO
// ()
// Parameters:

void UTags_tag::_InitCDO()
{
	static auto Func = Class->GetFunction("Tags_tag", "$InitCDO");

	Params::UTags_tag__InitCDO_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseGameplayTags.Tags_tag_container._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RResetWithSlack_L_Nint_R
// (Native, Public, BlueprintCallable)
// Parameters:
// int64                              __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTags_tag_container::_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RResetWithSlack_L_Nint_R(int64 __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Tags_tag_container", "_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RResetWithSlack_L_Nint_R");

	Params::UTags_tag_container__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RResetWithSlack_L_Nint_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseGameplayTags.Tags_tag_container._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RReset
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UTags_tag_container::_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RReset(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Tags_tag_container", "_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RReset");

	Params::UTags_tag_container__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RReset_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseGameplayTags.Tags_tag_container._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RRemove_L_Ntag__container_R
// (Native, Public, BlueprintCallable)
// Parameters:
// class UTags_tag_container*         __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

void UTags_tag_container::_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RRemove_L_Ntag__container_R(class UTags_tag_container* __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Tags_tag_container", "_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RRemove_L_Ntag__container_R");

	Params::UTags_tag_container__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RRemove_L_Ntag__container_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseGameplayTags.Tags_tag_container._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RRemove_L_Ntag_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UTags_tag*                   __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionProperty_                   RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionProperty_ UTags_tag_container::_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RRemove_L_Ntag_R(class UTags_tag* __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Tags_tag_container", "_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RRemove_L_Ntag_R");

	Params::UTags_tag_container__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RRemove_L_Ntag_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseGameplayTags.Tags_tag_container._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RRemove_L_N_Ktag_R
// (Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UTags_tag*>           __verse_0xB2CDDD72_Argument                                      (Parm, ContainsInstancedReference)

void UTags_tag_container::_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RRemove_L_N_Ktag_R(const TArray<class UTags_tag*>& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Tags_tag_container", "_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RRemove_L_N_Ktag_R");

	Params::UTags_tag_container__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RRemove_L_N_Ktag_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseGameplayTags.Tags_tag_container._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RNum
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTags_tag_container::_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RNum(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Tags_tag_container", "_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RNum");

	Params::UTags_tag_container__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RNum_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseGameplayTags.Tags_tag_container._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHasAny_L_N_Ktag_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UTags_tag*>           __verse_0xB2CDDD72_Argument                                      (Parm, ContainsInstancedReference)
// FOptionProperty_                   RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionProperty_ UTags_tag_container::_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHasAny_L_N_Ktag_R(const TArray<class UTags_tag*>& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Tags_tag_container", "_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHasAny_L_N_Ktag_R");

	Params::UTags_tag_container__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHasAny_L_N_Ktag_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseGameplayTags.Tags_tag_container._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHasAll_L_N_Ktag_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UTags_tag*>           __verse_0xB2CDDD72_Argument                                      (Parm, ContainsInstancedReference)
// FOptionProperty_                   RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionProperty_ UTags_tag_container::_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHasAll_L_N_Ktag_R(const TArray<class UTags_tag*>& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Tags_tag_container", "_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHasAll_L_N_Ktag_R");

	Params::UTags_tag_container__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHasAll_L_N_Ktag_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseGameplayTags.Tags_tag_container._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHas_L_Ntag_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UTags_tag*                   __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionProperty_                   RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionProperty_ UTags_tag_container::_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHas_L_Ntag_R(class UTags_tag* __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Tags_tag_container", "_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHas_L_Ntag_R");

	Params::UTags_tag_container__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHas_L_Ntag_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseGameplayTags.Tags_tag_container._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RAdd_L_Ntag_R
// (Native, Public, BlueprintCallable)
// Parameters:
// class UTags_tag*                   __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

void UTags_tag_container::_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RAdd_L_Ntag_R(class UTags_tag* __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Tags_tag_container", "_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RAdd_L_Ntag_R");

	Params::UTags_tag_container__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RAdd_L_Ntag_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseGameplayTags.Tags_tag_container._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RAdd_L_N_Ktag_R
// (Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UTags_tag*>           __verse_0xB2CDDD72_Argument                                      (Parm, ContainsInstancedReference)

void UTags_tag_container::_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RAdd_L_N_Ktag_R(const TArray<class UTags_tag*>& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Tags_tag_container", "_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RAdd_L_N_Ktag_R");

	Params::UTags_tag_container__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RAdd_L_N_Ktag_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseGameplayTags.Tags_tag_container._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RAdd_L_Ntag__container_R
// (Native, Public, BlueprintCallable)
// Parameters:
// class UTags_tag_container*         __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

void UTags_tag_container::_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RAdd_L_Ntag__container_R(class UTags_tag_container* __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Tags_tag_container", "_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RAdd_L_Ntag__container_R");

	Params::UTags_tag_container__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RAdd_L_Ntag__container_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseGameplayTags.Tags_tag_container.$InitInstance
// ()
// Parameters:

void UTags_tag_container::_InitInstance()
{
	static auto Func = Class->GetFunction("Tags_tag_container", "$InitInstance");

	Params::UTags_tag_container__InitInstance_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseGameplayTags.Tags_tag_container.$Block
// ()
// Parameters:

void UTags_tag_container::_Block()
{
	static auto Func = Class->GetFunction("Tags_tag_container", "$Block");

	Params::UTags_tag_container__Block_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseGameplayTags.Tags_tag_container.$InitCDO
// ()
// Parameters:

void UTags_tag_container::_InitCDO()
{
	static auto Func = Class->GetFunction("Tags_tag_container", "$InitCDO");

	Params::UTags_tag_container__InitCDO_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseGameplayTags.Tags_tag_container_component._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RSetTags_L_Ntag__container_R
// (Native, Public, BlueprintCallable)
// Parameters:
// class UTags_tag_container*         __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

void UTags_tag_container_component::_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RSetTags_L_Ntag__container_R(class UTags_tag_container* __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Tags_tag_container_component", "_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RSetTags_L_Ntag__container_R");

	Params::UTags_tag_container_component__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RSetTags_L_Ntag__container_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseGameplayTags.Tags_tag_container_component._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RRemoveTag_L_Ntag_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UTags_tag*                   __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UTags_tag_container_component::_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RRemoveTag_L_Ntag_R(class UTags_tag* __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Tags_tag_container_component", "_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RRemoveTag_L_Ntag_R");

	Params::UTags_tag_container_component__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RRemoveTag_L_Ntag_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseGameplayTags.Tags_tag_container_component._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RGetTags
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UTags_tag_container*         RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UTags_tag_container* UTags_tag_container_component::_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RGetTags(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Tags_tag_container_component", "_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RGetTags");

	Params::UTags_tag_container_component__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RGetTags_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseGameplayTags.Tags_tag_container_component._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RAddTag_L_Ntag_R
// (Native, Public, BlueprintCallable)
// Parameters:
// class UTags_tag*                   __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

void UTags_tag_container_component::_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RAddTag_L_Ntag_R(class UTags_tag* __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Tags_tag_container_component", "_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RAddTag_L_Ntag_R");

	Params::UTags_tag_container_component__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RAddTag_L_Ntag_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseGameplayTags.Tags_tag_container_component.$InitInstance
// ()
// Parameters:

void UTags_tag_container_component::_InitInstance()
{
	static auto Func = Class->GetFunction("Tags_tag_container_component", "$InitInstance");

	Params::UTags_tag_container_component__InitInstance_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseGameplayTags.Tags_tag_container_component.$Block
// ()
// Parameters:

void UTags_tag_container_component::_Block()
{
	static auto Func = Class->GetFunction("Tags_tag_container_component", "$Block");

	Params::UTags_tag_container_component__Block_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseGameplayTags.Tags_tag_container_component.$InitCDO
// ()
// Parameters:

void UTags_tag_container_component::_InitCDO()
{
	static auto Func = Class->GetFunction("Tags_tag_container_component", "$InitCDO");

	Params::UTags_tag_container_component__InitCDO_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseGameplayTags.Tags_tag_search_criteria.$InitInstance
// ()
// Parameters:

void UTags_tag_search_criteria::_InitInstance()
{
	static auto Func = Class->GetFunction("Tags_tag_search_criteria", "$InitInstance");

	Params::UTags_tag_search_criteria__InitInstance_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseGameplayTags.Tags_tag_search_criteria.$Block
// ()
// Parameters:

void UTags_tag_search_criteria::_Block()
{
	static auto Func = Class->GetFunction("Tags_tag_search_criteria", "$Block");

	Params::UTags_tag_search_criteria__Block_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseGameplayTags.Tags_tag_search_criteria.$InitCDO
// (HasDefaults)
// Parameters:
// TArray<class UTags_tag*>           _ExprResult_0                                                    (ContainsInstancedReference)
// TArray<enum class EVerseFalse>     __verse_0xFFC68BC5_Array_1                                       (ContainsInstancedReference)
// TArray<class UTags_tag*>           _ForResult_1                                                     (ContainsInstancedReference)
// int64                              _ForIndex_2                                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              _ForLength_3                                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerseFalse             __verse_0xFB88B569_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_4                                                    (NoDestructor, HasGetValueTypeHash)
// TArray<class UTags_tag*>           _ExprResult_5                                                    (ContainsInstancedReference)
// TArray<enum class EVerseFalse>     __verse_0xFFC68BC5_Array_5                                       (ContainsInstancedReference)
// TArray<class UTags_tag*>           _ForResult_6                                                     (ContainsInstancedReference)
// int64                              _ForIndex_7                                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              _ForLength_8                                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerseFalse             __verse_0xFB88B569_Item_7                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_9                                                    (NoDestructor, HasGetValueTypeHash)
// TArray<class UTags_tag*>           _ExprResult_10                                                   (ContainsInstancedReference)
// TArray<enum class EVerseFalse>     __verse_0xFFC68BC5_Array_9                                       (ContainsInstancedReference)
// TArray<class UTags_tag*>           _ForResult_11                                                    (ContainsInstancedReference)
// int64                              _ForIndex_12                                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              _ForLength_13                                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerseFalse             __verse_0xFB88B569_Item_11                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_14                                                   (NoDestructor, HasGetValueTypeHash)

void UTags_tag_search_criteria::_InitCDO(const TArray<class UTags_tag*>& _ExprResult_0, const TArray<enum class EVerseFalse>& __verse_0xFFC68BC5_Array_1, const TArray<class UTags_tag*>& _ForResult_1, int64 _ForIndex_2, int64 _ForLength_3, enum class EVerseFalse __verse_0xFB88B569_Item_3, uint8 _ExprResult_4, const TArray<class UTags_tag*>& _ExprResult_5, const TArray<enum class EVerseFalse>& __verse_0xFFC68BC5_Array_5, const TArray<class UTags_tag*>& _ForResult_6, int64 _ForIndex_7, int64 _ForLength_8, enum class EVerseFalse __verse_0xFB88B569_Item_7, uint8 _ExprResult_9, const TArray<class UTags_tag*>& _ExprResult_10, const TArray<enum class EVerseFalse>& __verse_0xFFC68BC5_Array_9, const TArray<class UTags_tag*>& _ForResult_11, int64 _ForIndex_12, int64 _ForLength_13, enum class EVerseFalse __verse_0xFB88B569_Item_11, uint8 _ExprResult_14)
{
	static auto Func = Class->GetFunction("Tags_tag_search_criteria", "$InitCDO");

	Params::UTags_tag_search_criteria__InitCDO_Params Parms;

	Parms._ExprResult_0 = _ExprResult_0;
	Parms.__verse_0xFFC68BC5_Array_1 = __verse_0xFFC68BC5_Array_1;
	Parms._ForResult_1 = _ForResult_1;
	Parms._ForIndex_2 = _ForIndex_2;
	Parms._ForLength_3 = _ForLength_3;
	Parms.__verse_0xFB88B569_Item_3 = __verse_0xFB88B569_Item_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms.__verse_0xFFC68BC5_Array_5 = __verse_0xFFC68BC5_Array_5;
	Parms._ForResult_6 = _ForResult_6;
	Parms._ForIndex_7 = _ForIndex_7;
	Parms._ForLength_8 = _ForLength_8;
	Parms.__verse_0xFB88B569_Item_7 = __verse_0xFB88B569_Item_7;
	Parms._ExprResult_9 = _ExprResult_9;
	Parms._ExprResult_10 = _ExprResult_10;
	Parms.__verse_0xFFC68BC5_Array_9 = __verse_0xFFC68BC5_Array_9;
	Parms._ForResult_11 = _ForResult_11;
	Parms._ForIndex_12 = _ForIndex_12;
	Parms._ForLength_13 = _ForLength_13;
	Parms.__verse_0xFB88B569_Item_11 = __verse_0xFB88B569_Item_11;
	Parms._ExprResult_14 = _ExprResult_14;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseGameplayTags.Tags_tag_view._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHasAny_L_N_Ktag_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UTags_tag*>           __verse_0xB2CDDD72_Argument                                      (Parm, ContainsInstancedReference)
// FOptionProperty_                   RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionProperty_ UTags_tag_view::_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHasAny_L_N_Ktag_R(const TArray<class UTags_tag*>& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Tags_tag_view", "_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHasAny_L_N_Ktag_R");

	Params::UTags_tag_view__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHasAny_L_N_Ktag_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseGameplayTags.Tags_tag_view._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHasAll_L_N_Ktag_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UTags_tag*>           __verse_0xB2CDDD72_Argument                                      (Parm, ContainsInstancedReference)
// FOptionProperty_                   RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionProperty_ UTags_tag_view::_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHasAll_L_N_Ktag_R(const TArray<class UTags_tag*>& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Tags_tag_view", "_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHasAll_L_N_Ktag_R");

	Params::UTags_tag_view__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHasAll_L_N_Ktag_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseGameplayTags.Tags_tag_view._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHas_L_Ntag_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UTags_tag*                   __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionProperty_                   RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionProperty_ UTags_tag_view::_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHas_L_Ntag_R(class UTags_tag* __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Tags_tag_view", "_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHas_L_Ntag_R");

	Params::UTags_tag_view__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHas_L_Ntag_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
