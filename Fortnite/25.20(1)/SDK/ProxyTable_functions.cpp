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


// Function ProxyTable.ProxyTableFunctionLibrary.EvaluateProxyTable
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     ContextObject                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UProxyTable*                 ProxyTable                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Key                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UProxyTableFunctionLibrary::EvaluateProxyTable(class UObject* ContextObject, class UProxyTable* ProxyTable, class FName Key)
{
	static auto Func = Class->GetFunction("ProxyTableFunctionLibrary", "EvaluateProxyTable");

	Params::UProxyTableFunctionLibrary_EvaluateProxyTable_Params Parms;

	Parms.ContextObject = ContextObject;
	Parms.ProxyTable = ProxyTable;
	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ProxyTable.ProxyTableFunctionLibrary.EvaluateProxyAsset
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     ContextObject                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UProxyAsset*                 Proxy                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UObject>         ObjectClass                                                      (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UProxyTableFunctionLibrary::EvaluateProxyAsset(class UObject* ContextObject, class UProxyAsset* Proxy, TSubclassOf<class UObject> ObjectClass)
{
	static auto Func = Class->GetFunction("ProxyTableFunctionLibrary", "EvaluateProxyAsset");

	Params::UProxyTableFunctionLibrary_EvaluateProxyAsset_Params Parms;

	Parms.ContextObject = ContextObject;
	Parms.Proxy = Proxy;
	Parms.ObjectClass = ObjectClass;

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
