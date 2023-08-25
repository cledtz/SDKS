#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ProxyTable.ChooserParameterProxyTable
// (None)

class UClass* UChooserParameterProxyTable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChooserParameterProxyTable");

	return Clss;
}


// ChooserParameterProxyTable ProxyTable.Default__ChooserParameterProxyTable
// (Public, ClassDefaultObject, ArchetypeObject)

class UChooserParameterProxyTable* UChooserParameterProxyTable::GetDefaultObj()
{
	static class UChooserParameterProxyTable* Default = nullptr;

	if (!Default)
		Default = static_cast<UChooserParameterProxyTable*>(UChooserParameterProxyTable::StaticClass()->DefaultObject);

	return Default;
}


// Class ProxyTable.ProxyAsset
// (None)

class UClass* UProxyAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProxyAsset");

	return Clss;
}


// ProxyAsset ProxyTable.Default__ProxyAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UProxyAsset* UProxyAsset::GetDefaultObj()
{
	static class UProxyAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UProxyAsset*>(UProxyAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class ProxyTable.ProxyTable
// (None)

class UClass* UProxyTable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProxyTable");

	return Clss;
}


// ProxyTable ProxyTable.Default__ProxyTable
// (Public, ClassDefaultObject, ArchetypeObject)

class UProxyTable* UProxyTable::GetDefaultObj()
{
	static class UProxyTable* Default = nullptr;

	if (!Default)
		Default = static_cast<UProxyTable*>(UProxyTable::StaticClass()->DefaultObject);

	return Default;
}


// Class ProxyTable.ProxyTableFunctionLibrary
// (None)

class UClass* UProxyTableFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProxyTableFunctionLibrary");

	return Clss;
}


// ProxyTableFunctionLibrary ProxyTable.Default__ProxyTableFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UProxyTableFunctionLibrary* UProxyTableFunctionLibrary::GetDefaultObj()
{
	static class UProxyTableFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UProxyTableFunctionLibrary*>(UProxyTableFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ProxyTable.ProxyTableFunctionLibrary.MakeLookupProxyWithOverrideTable
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UProxyAsset*                 Proxy                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UProxyTable*                 ProxyTable                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInstancedStruct            ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FInstancedStruct UProxyTableFunctionLibrary::MakeLookupProxyWithOverrideTable(class UProxyAsset* Proxy, class UProxyTable* ProxyTable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProxyTableFunctionLibrary", "MakeLookupProxyWithOverrideTable");

	Params::UProxyTableFunctionLibrary_MakeLookupProxyWithOverrideTable_Params Parms{};

	Parms.Proxy = Proxy;
	Parms.ProxyTable = ProxyTable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ProxyTable.ProxyTableFunctionLibrary.MakeLookupProxy
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UProxyAsset*                 Proxy                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInstancedStruct            ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FInstancedStruct UProxyTableFunctionLibrary::MakeLookupProxy(class UProxyAsset* Proxy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProxyTableFunctionLibrary", "MakeLookupProxy");

	Params::UProxyTableFunctionLibrary_MakeLookupProxy_Params Parms{};

	Parms.Proxy = Proxy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ProxyTable.ProxyTableFunctionLibrary.EvaluateProxyTable
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     ContextObject                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UProxyTable*                 ProxyTable                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Key                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UProxyTableFunctionLibrary::EvaluateProxyTable(class UObject* ContextObject, class UProxyTable* ProxyTable, class FName Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProxyTableFunctionLibrary", "EvaluateProxyTable");

	Params::UProxyTableFunctionLibrary_EvaluateProxyTable_Params Parms{};

	Parms.ContextObject = ContextObject;
	Parms.ProxyTable = ProxyTable;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProxyTableFunctionLibrary", "EvaluateProxyAsset");

	Params::UProxyTableFunctionLibrary_EvaluateProxyAsset_Params Parms{};

	Parms.ContextObject = ContextObject;
	Parms.Proxy = Proxy;
	Parms.ObjectClass = ObjectClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


