#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function DataContainer.DataContainerValue_Base.FindDataContainerValue
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      TagPath                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDataContainerValue_Base*    ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDataContainerValue_Base* UDataContainerValue_Base::FindDataContainerValue(const class FString& TagPath)
{
	static auto Func = Class->GetFunction("DataContainerValue_Base", "FindDataContainerValue");

	Params::UDataContainerValue_Base_FindDataContainerValue_Params Parms;

	Parms.TagPath = TagPath;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
