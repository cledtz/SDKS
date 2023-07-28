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


// Function Solaris.SolarisWeakMapLibrary.Type
// (Final, Native, Static, Public)
// Parameters:
// class UClass*                      KeyType                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                      ValueType                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarisWeakMapLibrary::Type(class UClass* KeyType, class UClass* ValueType)
{
	static auto Func = Class->GetFunction("SolarisWeakMapLibrary", "Type");

	Params::USolarisWeakMapLibrary_Type_Params Parms;

	Parms.KeyType = KeyType;
	Parms.ValueType = ValueType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.SolarisWeakMapLibrary.RefCall
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// TMap<struct FGenericKeyType, struct FGenericValueType>Map                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGenericKeyType             Key                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarisWeakMapLibrary::RefCall(TMap<struct FGenericKeyType, struct FGenericValueType>& Map, const struct FGenericKeyType& Key)
{
	static auto Func = Class->GetFunction("SolarisWeakMapLibrary", "RefCall");

	Params::USolarisWeakMapLibrary_RefCall_Params Parms;

	Parms.Map = Map;
	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.SolarisWeakMapLibrary.PersistentVarRefCall
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// class FString                      Path                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<struct FGenericKeyType, struct FGenericValueType>Map                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGenericKeyType             Key                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarisWeakMapLibrary::PersistentVarRefCall(const class FString& Path, TMap<struct FGenericKeyType, struct FGenericValueType>& Map, const struct FGenericKeyType& Key)
{
	static auto Func = Class->GetFunction("SolarisWeakMapLibrary", "PersistentVarRefCall");

	Params::USolarisWeakMapLibrary_PersistentVarRefCall_Params Parms;

	Parms.Path = Path;
	Parms.Map = Map;
	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.SolarisWeakMapLibrary.PersistentVarCall
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// TMap<struct FGenericKeyType, struct FGenericValueType>Map                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGenericKeyType             Key                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarisWeakMapLibrary::PersistentVarCall(TMap<struct FGenericKeyType, struct FGenericValueType>& Map, const struct FGenericKeyType& Key)
{
	static auto Func = Class->GetFunction("SolarisWeakMapLibrary", "PersistentVarCall");

	Params::USolarisWeakMapLibrary_PersistentVarCall_Params Parms;

	Parms.Map = Map;
	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.SolarisWeakMapLibrary.FitsInPlayerMap
// (Final, Native, Static, Public)
// Parameters:
// struct FGenericValueType           Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void USolarisWeakMapLibrary::FitsInPlayerMap(const struct FGenericValueType& Value)
{
	static auto Func = Class->GetFunction("SolarisWeakMapLibrary", "FitsInPlayerMap");

	Params::USolarisWeakMapLibrary_FitsInPlayerMap_Params Parms;

	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.SolarisWeakMapLibrary.CompletelyAssignedRefCall
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// TMap<struct FGenericKeyType, struct FGenericValueType>Map                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGenericKeyType             Key                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarisWeakMapLibrary::CompletelyAssignedRefCall(TMap<struct FGenericKeyType, struct FGenericValueType>& Map, const struct FGenericKeyType& Key)
{
	static auto Func = Class->GetFunction("SolarisWeakMapLibrary", "CompletelyAssignedRefCall");

	Params::USolarisWeakMapLibrary_CompletelyAssignedRefCall_Params Parms;

	Parms.Map = Map;
	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.SolarisWeakMapLibrary.CompletelyAssignedPersistentVarRefCall
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// class FString                      Path                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<struct FGenericKeyType, struct FGenericValueType>Map                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGenericKeyType             Key                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarisWeakMapLibrary::CompletelyAssignedPersistentVarRefCall(const class FString& Path, TMap<struct FGenericKeyType, struct FGenericValueType>& Map, const struct FGenericKeyType& Key)
{
	static auto Func = Class->GetFunction("SolarisWeakMapLibrary", "CompletelyAssignedPersistentVarRefCall");

	Params::USolarisWeakMapLibrary_CompletelyAssignedPersistentVarRefCall_Params Parms;

	Parms.Path = Path;
	Parms.Map = Map;
	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.SolarisWeakMapLibrary.Call
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// TMap<struct FGenericKeyType, struct FGenericValueType>Map                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGenericKeyType             Key                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarisWeakMapLibrary::Call(TMap<struct FGenericKeyType, struct FGenericValueType>& Map, const struct FGenericKeyType& Key)
{
	static auto Func = Class->GetFunction("SolarisWeakMapLibrary", "Call");

	Params::USolarisWeakMapLibrary_Call_Params Parms;

	Parms.Map = Map;
	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.SolarisArrayLibrary.UnsafeCall
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// TArray<struct FGenericElementType> Array                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int64                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarisArrayLibrary::UnsafeCall(TArray<struct FGenericElementType>& Array, int64 Index)
{
	static auto Func = Class->GetFunction("SolarisArrayLibrary", "UnsafeCall");

	Params::USolarisArrayLibrary_UnsafeCall_Params Parms;

	Parms.Array = Array;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.SolarisArrayLibrary.RefCall
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// TArray<struct FGenericElementType> Array                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int64                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarisArrayLibrary::RefCall(TArray<struct FGenericElementType>& Array, int64 Index)
{
	static auto Func = Class->GetFunction("SolarisArrayLibrary", "RefCall");

	Params::USolarisArrayLibrary_RefCall_Params Parms;

	Parms.Array = Array;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.SolarisArrayLibrary.Move
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// TArray<struct FGenericElementType> Target                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FGenericElementType> Source                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void USolarisArrayLibrary::Move(TArray<struct FGenericElementType>& Target, TArray<struct FGenericElementType>& Source)
{
	static auto Func = Class->GetFunction("SolarisArrayLibrary", "Move");

	Params::USolarisArrayLibrary_Move_Params Parms;

	Parms.Target = Target;
	Parms.Source = Source;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.SolarisArrayLibrary.Length
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// TArray<struct FGenericElementType> Array                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int64                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int64 USolarisArrayLibrary::Length(TArray<struct FGenericElementType>& Array)
{
	static auto Func = Class->GetFunction("SolarisArrayLibrary", "Length");

	Params::USolarisArrayLibrary_Length_Params Parms;

	Parms.Array = Array;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisArrayLibrary.Empty
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// TArray<struct FGenericElementType> Array                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void USolarisArrayLibrary::Empty(TArray<struct FGenericElementType>& Array)
{
	static auto Func = Class->GetFunction("SolarisArrayLibrary", "Empty");

	Params::USolarisArrayLibrary_Empty_Params Parms;

	Parms.Array = Array;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.SolarisArrayLibrary.ConcatEquals
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// TArray<struct FGenericElementType> LHS                                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FGenericElementType> RHS                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FGenericElementType> ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FGenericElementType> USolarisArrayLibrary::ConcatEquals(TArray<struct FGenericElementType>* LHS, TArray<struct FGenericElementType>& RHS)
{
	static auto Func = Class->GetFunction("SolarisArrayLibrary", "ConcatEquals");

	Params::USolarisArrayLibrary_ConcatEquals_Params Parms;

	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (LHS != nullptr)
		*LHS = Parms.LHS;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisArrayLibrary.Concat
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// TArray<struct FGenericElementType> LHS                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FGenericElementType> RHS                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FGenericElementType> ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FGenericElementType> USolarisArrayLibrary::Concat(TArray<struct FGenericElementType>& LHS, TArray<struct FGenericElementType>& RHS)
{
	static auto Func = Class->GetFunction("SolarisArrayLibrary", "Concat");

	Params::USolarisArrayLibrary_Concat_Params Parms;

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisArrayLibrary.Call
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// TArray<struct FGenericElementType> Array                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int64                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarisArrayLibrary::Call(TArray<struct FGenericElementType>& Array, int64 Index)
{
	static auto Func = Class->GetFunction("SolarisArrayLibrary", "Call");

	Params::USolarisArrayLibrary_Call_Params Parms;

	Parms.Array = Array;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.SolarisArrayLibrary.Add
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// TArray<struct FGenericElementType> Array                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGenericElementType         New_item                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// int64                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int64 USolarisArrayLibrary::Add(TArray<struct FGenericElementType>& Array, struct FGenericElementType& New_item)
{
	static auto Func = Class->GetFunction("SolarisArrayLibrary", "Add");

	Params::USolarisArrayLibrary_Add_Params Parms;

	Parms.Array = Array;
	Parms.New_item = New_item;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisCoroutineLibrary.TaskMake
// (Final, Native, Static, Public)
// Parameters:
// class UClass*                      Type                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Caller                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              CallerResumeState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              CallerCancelState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     OwnerInstance                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* USolarisCoroutineLibrary::TaskMake(class UClass* Type, class UObject* Caller, int64 CallerResumeState, int64 CallerCancelState, class UObject* OwnerInstance)
{
	static auto Func = Class->GetFunction("SolarisCoroutineLibrary", "TaskMake");

	Params::USolarisCoroutineLibrary_TaskMake_Params Parms;

	Parms.Type = Type;
	Parms.Caller = Caller;
	Parms.CallerResumeState = CallerResumeState;
	Parms.CallerCancelState = CallerCancelState;
	Parms.OwnerInstance = OwnerInstance;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisCoroutineLibrary.TaskGetState
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                     Task                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int64 USolarisCoroutineLibrary::TaskGetState(class UObject* Task)
{
	static auto Func = Class->GetFunction("SolarisCoroutineLibrary", "TaskGetState");

	Params::USolarisCoroutineLibrary_TaskGetState_Params Parms;

	Parms.Task = Task;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisCoroutineLibrary.TaskGetReturnProperty
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                     Task                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarisCoroutineLibrary::TaskGetReturnProperty(class UObject* Task)
{
	static auto Func = Class->GetFunction("SolarisCoroutineLibrary", "TaskGetReturnProperty");

	Params::USolarisCoroutineLibrary_TaskGetReturnProperty_Params Parms;

	Parms.Task = Task;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.SolarisCoroutineLibrary.TaskFree
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                     Task                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarisCoroutineLibrary::TaskFree(class UObject* Task)
{
	static auto Func = Class->GetFunction("SolarisCoroutineLibrary", "TaskFree");

	Params::USolarisCoroutineLibrary_TaskFree_Params Parms;

	Parms.Task = Task;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.SolarisCoroutineLibrary.TaskCancel
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                     Task                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarisCoroutineLibrary::TaskCancel(class UObject* Task)
{
	static auto Func = Class->GetFunction("SolarisCoroutineLibrary", "TaskCancel");

	Params::USolarisCoroutineLibrary_TaskCancel_Params Parms;

	Parms.Task = Task;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.SolarisMapLibrary.Move
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// TMap<struct FGenericKeyType, struct FGenericValueType>Dest                                                             (Parm, OutParm, NativeAccessSpecifierPublic)
// TMap<struct FGenericKeyType, struct FGenericValueType>Src                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void USolarisMapLibrary::Move(TMap<struct FGenericKeyType, struct FGenericValueType>* Dest, TMap<struct FGenericKeyType, struct FGenericValueType>& Src)
{
	static auto Func = Class->GetFunction("SolarisMapLibrary", "Move");

	Params::USolarisMapLibrary_Move_Params Parms;

	Parms.Src = Src;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Dest != nullptr)
		*Dest = Parms.Dest;

}


// Function Solaris.SolarisMapLibrary.Length
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// TMap<struct FGenericKeyType, struct FGenericValueType>Map                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int64                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int64 USolarisMapLibrary::Length(TMap<struct FGenericKeyType, struct FGenericValueType>& Map)
{
	static auto Func = Class->GetFunction("SolarisMapLibrary", "Length");

	Params::USolarisMapLibrary_Length_Params Parms;

	Parms.Map = Map;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMapLibrary.InitMap
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// TMap<struct FGenericKeyType, struct FGenericValueType>Map                                                              (Parm, OutParm, NativeAccessSpecifierPublic)

void USolarisMapLibrary::InitMap(TMap<struct FGenericKeyType, struct FGenericValueType>* Map)
{
	static auto Func = Class->GetFunction("SolarisMapLibrary", "InitMap");

	Params::USolarisMapLibrary_InitMap_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Map != nullptr)
		*Map = Parms.Map;

}


// Function Solaris.SolarisMapLibrary.GetValueByIndex
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// TMap<struct FGenericKeyType, struct FGenericValueType>Map                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int64                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGenericValueType           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FGenericValueType USolarisMapLibrary::GetValueByIndex(TMap<struct FGenericKeyType, struct FGenericValueType>& Map, int64 Index)
{
	static auto Func = Class->GetFunction("SolarisMapLibrary", "GetValueByIndex");

	Params::USolarisMapLibrary_GetValueByIndex_Params Parms;

	Parms.Map = Map;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMapLibrary.GetNextValidIndex
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// TMap<struct FGenericKeyType, struct FGenericValueType>Map                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int64                              InitialIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int64 USolarisMapLibrary::GetNextValidIndex(TMap<struct FGenericKeyType, struct FGenericValueType>& Map, int64 InitialIndex)
{
	static auto Func = Class->GetFunction("SolarisMapLibrary", "GetNextValidIndex");

	Params::USolarisMapLibrary_GetNextValidIndex_Params Parms;

	Parms.Map = Map;
	Parms.InitialIndex = InitialIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMapLibrary.GetKeyByIndex
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// TMap<struct FGenericKeyType, struct FGenericValueType>Map                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int64                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGenericKeyType             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGenericKeyType USolarisMapLibrary::GetKeyByIndex(TMap<struct FGenericKeyType, struct FGenericValueType>& Map, int64 Index)
{
	static auto Func = Class->GetFunction("SolarisMapLibrary", "GetKeyByIndex");

	Params::USolarisMapLibrary_GetKeyByIndex_Params Parms;

	Parms.Map = Map;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMapLibrary.Concat
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// TMap<struct FGenericKeyType, struct FGenericValueType>LHS                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TMap<struct FGenericKeyType, struct FGenericValueType>RHS                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TMap<struct FGenericKeyType, struct FGenericValueType>ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

TMap<struct FGenericKeyType, struct FGenericValueType> USolarisMapLibrary::Concat(TMap<struct FGenericKeyType, struct FGenericValueType>& LHS, TMap<struct FGenericKeyType, struct FGenericValueType>& RHS)
{
	static auto Func = Class->GetFunction("SolarisMapLibrary", "Concat");

	Params::USolarisMapLibrary_Concat_Params Parms;

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMapLibrary.Add
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// TMap<struct FGenericKeyType, struct FGenericValueType>Map                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGenericKeyType             Key                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGenericValueType           Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void USolarisMapLibrary::Add(TMap<struct FGenericKeyType, struct FGenericValueType>& Map, struct FGenericKeyType& Key, struct FGenericValueType& Value)
{
	static auto Func = Class->GetFunction("SolarisMapLibrary", "Add");

	Params::USolarisMapLibrary_Add_Params Parms;

	Parms.Map = Map;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.SolarisMathLibrary_Bool.Query
// (Final, Native, Static, Public)
// Parameters:

void USolarisMathLibrary_Bool::Query()
{
	static auto Func = Class->GetFunction("SolarisMathLibrary_Bool", "Query");

	Params::USolarisMathLibrary_Bool_Query_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.SolarisMathLibrary_Int.UncheckedConvertI32I64
// (Final, Native, Static, Public)
// Parameters:
// int64                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USolarisMathLibrary_Int::UncheckedConvertI32I64(int64 RHS)
{
	static auto Func = Class->GetFunction("SolarisMathLibrary_Int", "UncheckedConvertI32I64");

	Params::USolarisMathLibrary_Int_UncheckedConvertI32I64_Params Parms;

	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Int.SubtractEquals
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// int64                              LHS                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarisMathLibrary_Int::SubtractEquals(int64* LHS, int64 RHS)
{
	static auto Func = Class->GetFunction("SolarisMathLibrary_Int", "SubtractEquals");

	Params::USolarisMathLibrary_Int_SubtractEquals_Params Parms;

	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (LHS != nullptr)
		*LHS = Parms.LHS;

}


// Function Solaris.SolarisMathLibrary_Int.Subtract
// (Final, Native, Static, Public)
// Parameters:
// int64                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarisMathLibrary_Int::Subtract(int64 LHS, int64 RHS)
{
	static auto Func = Class->GetFunction("SolarisMathLibrary_Int", "Subtract");

	Params::USolarisMathLibrary_Int_Subtract_Params Parms;

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.SolarisMathLibrary_Int.PredicateNotEqual
// (Final, Native, Static, Public)
// Parameters:
// int64                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Int::PredicateNotEqual(int64 LHS, int64 RHS)
{
	static auto Func = Class->GetFunction("SolarisMathLibrary_Int", "PredicateNotEqual");

	Params::USolarisMathLibrary_Int_PredicateNotEqual_Params Parms;

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Int.PredicateLessEqual
// (Final, Native, Static, Public)
// Parameters:
// int64                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Int::PredicateLessEqual(int64 LHS, int64 RHS)
{
	static auto Func = Class->GetFunction("SolarisMathLibrary_Int", "PredicateLessEqual");

	Params::USolarisMathLibrary_Int_PredicateLessEqual_Params Parms;

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Int.PredicateLess
// (Final, Native, Static, Public)
// Parameters:
// int64                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Int::PredicateLess(int64 LHS, int64 RHS)
{
	static auto Func = Class->GetFunction("SolarisMathLibrary_Int", "PredicateLess");

	Params::USolarisMathLibrary_Int_PredicateLess_Params Parms;

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Int.PredicateGreaterEqual
// (Final, Native, Static, Public)
// Parameters:
// int64                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Int::PredicateGreaterEqual(int64 LHS, int64 RHS)
{
	static auto Func = Class->GetFunction("SolarisMathLibrary_Int", "PredicateGreaterEqual");

	Params::USolarisMathLibrary_Int_PredicateGreaterEqual_Params Parms;

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Int.PredicateGreater
// (Final, Native, Static, Public)
// Parameters:
// int64                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Int::PredicateGreater(int64 LHS, int64 RHS)
{
	static auto Func = Class->GetFunction("SolarisMathLibrary_Int", "PredicateGreater");

	Params::USolarisMathLibrary_Int_PredicateGreater_Params Parms;

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Int.PredicateEqual
// (Final, Native, Static, Public)
// Parameters:
// int64                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Int::PredicateEqual(int64 LHS, int64 RHS)
{
	static auto Func = Class->GetFunction("SolarisMathLibrary_Int", "PredicateEqual");

	Params::USolarisMathLibrary_Int_PredicateEqual_Params Parms;

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Int.Negate
// (Final, Native, Static, Public)
// Parameters:
// int64                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarisMathLibrary_Int::Negate(int64 Value)
{
	static auto Func = Class->GetFunction("SolarisMathLibrary_Int", "Negate");

	Params::USolarisMathLibrary_Int_Negate_Params Parms;

	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.SolarisMathLibrary_Int.MultiplyEquals
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// int64                              LHS                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarisMathLibrary_Int::MultiplyEquals(int64* LHS, int64 RHS)
{
	static auto Func = Class->GetFunction("SolarisMathLibrary_Int", "MultiplyEquals");

	Params::USolarisMathLibrary_Int_MultiplyEquals_Params Parms;

	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (LHS != nullptr)
		*LHS = Parms.LHS;

}


// Function Solaris.SolarisMathLibrary_Int.Multiply
// (Final, Native, Static, Public)
// Parameters:
// int64                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarisMathLibrary_Int::Multiply(int64 LHS, int64 RHS)
{
	static auto Func = Class->GetFunction("SolarisMathLibrary_Int", "Multiply");

	Params::USolarisMathLibrary_Int_Multiply_Params Parms;

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.SolarisMathLibrary_Int.LessEqual
// (Final, Native, Static, Public)
// Parameters:
// int64                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarisMathLibrary_Int::LessEqual(int64 LHS, int64 RHS)
{
	static auto Func = Class->GetFunction("SolarisMathLibrary_Int", "LessEqual");

	Params::USolarisMathLibrary_Int_LessEqual_Params Parms;

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.SolarisMathLibrary_Int.Less
// (Final, Native, Static, Public)
// Parameters:
// int64                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarisMathLibrary_Int::Less(int64 LHS, int64 RHS)
{
	static auto Func = Class->GetFunction("SolarisMathLibrary_Int", "Less");

	Params::USolarisMathLibrary_Int_Less_Params Parms;

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.SolarisMathLibrary_Int.GreaterEqual
// (Final, Native, Static, Public)
// Parameters:
// int64                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarisMathLibrary_Int::GreaterEqual(int64 LHS, int64 RHS)
{
	static auto Func = Class->GetFunction("SolarisMathLibrary_Int", "GreaterEqual");

	Params::USolarisMathLibrary_Int_GreaterEqual_Params Parms;

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.SolarisMathLibrary_Int.Greater
// (Final, Native, Static, Public)
// Parameters:
// int64                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarisMathLibrary_Int::Greater(int64 LHS, int64 RHS)
{
	static auto Func = Class->GetFunction("SolarisMathLibrary_Int", "Greater");

	Params::USolarisMathLibrary_Int_Greater_Params Parms;

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.SolarisMathLibrary_Int.Divide
// (Final, Native, Static, Public)
// Parameters:
// int64                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarisMathLibrary_Int::Divide(int64 LHS, int64 RHS)
{
	static auto Func = Class->GetFunction("SolarisMathLibrary_Int", "Divide");

	Params::USolarisMathLibrary_Int_Divide_Params Parms;

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.SolarisMathLibrary_Int.CheckConstrainedInt
// (Final, Native, Static, Public)
// Parameters:
// int64                              Min                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              Max                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarisMathLibrary_Int::CheckConstrainedInt(int64 Min, int64 Max, int64 Value)
{
	static auto Func = Class->GetFunction("SolarisMathLibrary_Int", "CheckConstrainedInt");

	Params::USolarisMathLibrary_Int_CheckConstrainedInt_Params Parms;

	Parms.Min = Min;
	Parms.Max = Max;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.SolarisMathLibrary_Int.AddEquals
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// int64                              LHS                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarisMathLibrary_Int::AddEquals(int64* LHS, int64 RHS)
{
	static auto Func = Class->GetFunction("SolarisMathLibrary_Int", "AddEquals");

	Params::USolarisMathLibrary_Int_AddEquals_Params Parms;

	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (LHS != nullptr)
		*LHS = Parms.LHS;

}


// Function Solaris.SolarisMathLibrary_Int.Add
// (Final, Native, Static, Public)
// Parameters:
// int64                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarisMathLibrary_Int::Add(int64 LHS, int64 RHS)
{
	static auto Func = Class->GetFunction("SolarisMathLibrary_Int", "Add");

	Params::USolarisMathLibrary_Int_Add_Params Parms;

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.SolarisMathLibrary_Int.abs
// (Final, Native, Static, Public)
// Parameters:
// int64                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarisMathLibrary_Int::Abs(int64 Value)
{
	static auto Func = Class->GetFunction("SolarisMathLibrary_Int", "abs");

	Params::USolarisMathLibrary_Int_Abs_Params Parms;

	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.SolarisMathLibrary_Rational.floor
// (Final, Native, Static, Public)
// Parameters:
// struct FVerseRational              Val                                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)

void USolarisMathLibrary_Rational::Floor(const struct FVerseRational& Val)
{
	static auto Func = Class->GetFunction("SolarisMathLibrary_Rational", "floor");

	Params::USolarisMathLibrary_Rational_Floor_Params Parms;

	Parms.Val = Val;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.SolarisMathLibrary_Rational.ceil
// (Final, Native, Static, Public)
// Parameters:
// struct FVerseRational              Val                                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)

void USolarisMathLibrary_Rational::Ceil(const struct FVerseRational& Val)
{
	static auto Func = Class->GetFunction("SolarisMathLibrary_Rational", "ceil");

	Params::USolarisMathLibrary_Rational_Ceil_Params Parms;

	Parms.Val = Val;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.SolarisMathLibrary_Float.SubtractEquals
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// double                             LHS                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

double USolarisMathLibrary_Float::SubtractEquals(double* LHS, double RHS)
{
	static auto Func = Class->GetFunction("SolarisMathLibrary_Float", "SubtractEquals");

	Params::USolarisMathLibrary_Float_SubtractEquals_Params Parms;

	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (LHS != nullptr)
		*LHS = Parms.LHS;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Float.Subtract
// (Final, Native, Static, Public)
// Parameters:
// double                             LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

double USolarisMathLibrary_Float::Subtract(double LHS, double RHS)
{
	static auto Func = Class->GetFunction("SolarisMathLibrary_Float", "Subtract");

	Params::USolarisMathLibrary_Float_Subtract_Params Parms;

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Float.Negate
// (Final, Native, Static, Public)
// Parameters:
// double                             Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

double USolarisMathLibrary_Float::Negate(double Value)
{
	static auto Func = Class->GetFunction("SolarisMathLibrary_Float", "Negate");

	Params::USolarisMathLibrary_Float_Negate_Params Parms;

	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Float.MultiplyIntFloat
// (Final, Native, Static, Public)
// Parameters:
// int64                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

double USolarisMathLibrary_Float::MultiplyIntFloat(int64 LHS, double RHS)
{
	static auto Func = Class->GetFunction("SolarisMathLibrary_Float", "MultiplyIntFloat");

	Params::USolarisMathLibrary_Float_MultiplyIntFloat_Params Parms;

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Float.MultiplyFloatInt
// (Final, Native, Static, Public)
// Parameters:
// double                             LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

double USolarisMathLibrary_Float::MultiplyFloatInt(double LHS, int64 RHS)
{
	static auto Func = Class->GetFunction("SolarisMathLibrary_Float", "MultiplyFloatInt");

	Params::USolarisMathLibrary_Float_MultiplyFloatInt_Params Parms;

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Float.MultiplyEquals
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// double                             LHS                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

double USolarisMathLibrary_Float::MultiplyEquals(double* LHS, double RHS)
{
	static auto Func = Class->GetFunction("SolarisMathLibrary_Float", "MultiplyEquals");

	Params::USolarisMathLibrary_Float_MultiplyEquals_Params Parms;

	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (LHS != nullptr)
		*LHS = Parms.LHS;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Float.Multiply
// (Final, Native, Static, Public)
// Parameters:
// double                             LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

double USolarisMathLibrary_Float::Multiply(double LHS, double RHS)
{
	static auto Func = Class->GetFunction("SolarisMathLibrary_Float", "Multiply");

	Params::USolarisMathLibrary_Float_Multiply_Params Parms;

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Float.LessEqual
// (Final, Native, Static, Public)
// Parameters:
// double                             LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarisMathLibrary_Float::LessEqual(double LHS, double RHS)
{
	static auto Func = Class->GetFunction("SolarisMathLibrary_Float", "LessEqual");

	Params::USolarisMathLibrary_Float_LessEqual_Params Parms;

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.SolarisMathLibrary_Float.Less
// (Final, Native, Static, Public)
// Parameters:
// double                             LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarisMathLibrary_Float::Less(double LHS, double RHS)
{
	static auto Func = Class->GetFunction("SolarisMathLibrary_Float", "Less");

	Params::USolarisMathLibrary_Float_Less_Params Parms;

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.SolarisMathLibrary_Float.GreaterEqual
// (Final, Native, Static, Public)
// Parameters:
// double                             LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarisMathLibrary_Float::GreaterEqual(double LHS, double RHS)
{
	static auto Func = Class->GetFunction("SolarisMathLibrary_Float", "GreaterEqual");

	Params::USolarisMathLibrary_Float_GreaterEqual_Params Parms;

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.SolarisMathLibrary_Float.Greater
// (Final, Native, Static, Public)
// Parameters:
// double                             LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarisMathLibrary_Float::Greater(double LHS, double RHS)
{
	static auto Func = Class->GetFunction("SolarisMathLibrary_Float", "Greater");

	Params::USolarisMathLibrary_Float_Greater_Params Parms;

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.SolarisMathLibrary_Float.DivideEquals
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// double                             LHS                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

double USolarisMathLibrary_Float::DivideEquals(double* LHS, double RHS)
{
	static auto Func = Class->GetFunction("SolarisMathLibrary_Float", "DivideEquals");

	Params::USolarisMathLibrary_Float_DivideEquals_Params Parms;

	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (LHS != nullptr)
		*LHS = Parms.LHS;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Float.Divide
// (Final, Native, Static, Public)
// Parameters:
// double                             LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

double USolarisMathLibrary_Float::Divide(double LHS, double RHS)
{
	static auto Func = Class->GetFunction("SolarisMathLibrary_Float", "Divide");

	Params::USolarisMathLibrary_Float_Divide_Params Parms;

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Float.CheckConstrainedFloat
// (Final, Native, Static, Public)
// Parameters:
// double                             Min                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             Max                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarisMathLibrary_Float::CheckConstrainedFloat(double Min, double Max, double Value)
{
	static auto Func = Class->GetFunction("SolarisMathLibrary_Float", "CheckConstrainedFloat");

	Params::USolarisMathLibrary_Float_CheckConstrainedFloat_Params Parms;

	Parms.Min = Min;
	Parms.Max = Max;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.SolarisMathLibrary_Float.AddEquals
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// double                             LHS                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

double USolarisMathLibrary_Float::AddEquals(double* LHS, double RHS)
{
	static auto Func = Class->GetFunction("SolarisMathLibrary_Float", "AddEquals");

	Params::USolarisMathLibrary_Float_AddEquals_Params Parms;

	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (LHS != nullptr)
		*LHS = Parms.LHS;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Float.Add
// (Final, Native, Static, Public)
// Parameters:
// double                             LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

double USolarisMathLibrary_Float::Add(double LHS, double RHS)
{
	static auto Func = Class->GetFunction("SolarisMathLibrary_Float", "Add");

	Params::USolarisMathLibrary_Float_Add_Params Parms;

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Float.abs
// (Final, Native, Static, Public)
// Parameters:
// double                             Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

double USolarisMathLibrary_Float::Abs(double Value)
{
	static auto Func = Class->GetFunction("SolarisMathLibrary_Float", "abs");

	Params::USolarisMathLibrary_Float_Abs_Params Parms;

	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_String.UncheckedCall
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// int32                              String                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarisMathLibrary_String::UncheckedCall(int32& String, int64 Index)
{
	static auto Func = Class->GetFunction("SolarisMathLibrary_String", "UncheckedCall");

	Params::USolarisMathLibrary_String_UncheckedCall_Params Parms;

	Parms.String = String;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.SolarisMathLibrary_String.RefCall
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// int32                              String                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarisMathLibrary_String::RefCall(int32& String, int64 Index)
{
	static auto Func = Class->GetFunction("SolarisMathLibrary_String", "RefCall");

	Params::USolarisMathLibrary_String_RefCall_Params Parms;

	Parms.String = String;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.SolarisMathLibrary_String.Move
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// int32                              Destination                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Source                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarisMathLibrary_String::Move(int32& Destination, int32& Source)
{
	static auto Func = Class->GetFunction("SolarisMathLibrary_String", "Move");

	Params::USolarisMathLibrary_String_Move_Params Parms;

	Parms.Destination = Destination;
	Parms.Source = Source;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.SolarisMathLibrary_String.MakeLiteral
// (Final, Native, Static, Public)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USolarisMathLibrary_String::MakeLiteral()
{
	static auto Func = Class->GetFunction("SolarisMathLibrary_String", "MakeLiteral");

	Params::USolarisMathLibrary_String_MakeLiteral_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_String.Make
// (Final, Native, Static, Public)
// Parameters:

void USolarisMathLibrary_String::Make()
{
	static auto Func = Class->GetFunction("SolarisMathLibrary_String", "Make");

	Params::USolarisMathLibrary_String_Make_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.SolarisMathLibrary_String.Length
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// int32                              Array                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int64 USolarisMathLibrary_String::Length(int32& Array)
{
	static auto Func = Class->GetFunction("SolarisMathLibrary_String", "Length");

	Params::USolarisMathLibrary_String_Length_Params Parms;

	Parms.Array = Array;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_String.ConcatEquals
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// int32                              LHS                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RHS                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USolarisMathLibrary_String::ConcatEquals(int32* LHS, int32& RHS)
{
	static auto Func = Class->GetFunction("SolarisMathLibrary_String", "ConcatEquals");

	Params::USolarisMathLibrary_String_ConcatEquals_Params Parms;

	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (LHS != nullptr)
		*LHS = Parms.LHS;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_String.Concat
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// int32                              LHS                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RHS                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USolarisMathLibrary_String::Concat(int32& LHS, int32& RHS)
{
	static auto Func = Class->GetFunction("SolarisMathLibrary_String", "Concat");

	Params::USolarisMathLibrary_String_Concat_Params Parms;

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_String.Call
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// int32                              String                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarisMathLibrary_String::Call(int32& String, int64 Index)
{
	static auto Func = Class->GetFunction("SolarisMathLibrary_String", "Call");

	Params::USolarisMathLibrary_String_Call_Params Parms;

	Parms.String = String;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.SolarisMathLibrary_String.Add
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// int32                              String                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int8                               Character                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarisMathLibrary_String::Add(int32& String, int8 Character)
{
	static auto Func = Class->GetFunction("SolarisMathLibrary_String", "Add");

	Params::USolarisMathLibrary_String_Add_Params Parms;

	Parms.String = String;
	Parms.Character = Character;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.SolarisMathLibrary_Option.Query
// (Final, Native, Static, Public)
// Parameters:

void USolarisMathLibrary_Option::Query()
{
	static auto Func = Class->GetFunction("SolarisMathLibrary_Option", "Query");

	Params::USolarisMathLibrary_Option_Query_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.SolarisMathLibrary_Option.Make
// (Final, Native, Static, Public)
// Parameters:

void USolarisMathLibrary_Option::Make()
{
	static auto Func = Class->GetFunction("SolarisMathLibrary_Option", "Make");

	Params::USolarisMathLibrary_Option_Make_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.SolarisUtilLibrary.ReplaceOptionValue
// (Final, Native, Static, Public)
// Parameters:
// int64                              ResultProperty                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              Option                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int64 USolarisUtilLibrary::ReplaceOptionValue(int64 ResultProperty, int64 Option, int64 Value)
{
	static auto Func = Class->GetFunction("SolarisUtilLibrary", "ReplaceOptionValue");

	Params::USolarisUtilLibrary_ReplaceOptionValue_Params Parms;

	Parms.ResultProperty = ResultProperty;
	Parms.Option = Option;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisUtilLibrary.ReferenceIsValid
// (Final, Native, Static, Public)
// Parameters:
// int64                              Reference                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisUtilLibrary::ReferenceIsValid(int64 Reference)
{
	static auto Func = Class->GetFunction("SolarisUtilLibrary", "ReferenceIsValid");

	Params::USolarisUtilLibrary_ReferenceIsValid_Params Parms;

	Parms.Reference = Reference;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisUtilLibrary.ObjectHasNoFlags
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Flags                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisUtilLibrary::ObjectHasNoFlags(class UObject* Object, int32 Flags)
{
	static auto Func = Class->GetFunction("SolarisUtilLibrary", "ObjectHasNoFlags");

	Params::USolarisUtilLibrary_ObjectHasNoFlags_Params Parms;

	Parms.Object = Object;
	Parms.Flags = Flags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisUtilLibrary.MakeUnsetOption
// (Final, Native, Static, Public)
// Parameters:
// int64                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int64 USolarisUtilLibrary::MakeUnsetOption()
{
	static auto Func = Class->GetFunction("SolarisUtilLibrary", "MakeUnsetOption");

	Params::USolarisUtilLibrary_MakeUnsetOption_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisUtilLibrary.MakeOptionFromValue
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                     Property                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisUtilLibrary::MakeOptionFromValue(class UObject* Property, int64 Value)
{
	static auto Func = Class->GetFunction("SolarisUtilLibrary", "MakeOptionFromValue");

	Params::USolarisUtilLibrary_MakeOptionFromValue_Params Parms;

	Parms.Property = Property;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisUtilLibrary.IsOptionSet
// (Final, Native, Static, Public)
// Parameters:
// int64                              Option                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisUtilLibrary::IsOptionSet(int64 Option)
{
	static auto Func = Class->GetFunction("SolarisUtilLibrary", "IsOptionSet");

	Params::USolarisUtilLibrary_IsOptionSet_Params Parms;

	Parms.Option = Option;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisUtilLibrary.IsNonNullObject
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisUtilLibrary::IsNonNullObject(class UObject* Object)
{
	static auto Func = Class->GetFunction("SolarisUtilLibrary", "IsNonNullObject");

	Params::USolarisUtilLibrary_IsNonNullObject_Params Parms;

	Parms.Object = Object;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisUtilLibrary.InstantiateObject
// (Final, Native, Static, Public)
// Parameters:
// class UClass*                      Class                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              InstancingGraph                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarisUtilLibrary::InstantiateObject(class UClass* Class, int64 InstancingGraph)
{
	static auto Func = Class->GetFunction("SolarisUtilLibrary", "InstantiateObject");

	Params::USolarisUtilLibrary_InstantiateObject_Params Parms;

	Parms.Class = Class;
	Parms.InstancingGraph = InstancingGraph;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.SolarisUtilLibrary.InstanceFunction
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        MethodName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarisUtilLibrary::InstanceFunction(class UObject* Object, class FName MethodName)
{
	static auto Func = Class->GetFunction("SolarisUtilLibrary", "InstanceFunction");

	Params::USolarisUtilLibrary_InstanceFunction_Params Parms;

	Parms.Object = Object;
	Parms.MethodName = MethodName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.SolarisUtilLibrary.HasInterface
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                      InterfaceClass                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisUtilLibrary::HasInterface(class UObject* Object, class UClass* InterfaceClass)
{
	static auto Func = Class->GetFunction("SolarisUtilLibrary", "HasInterface");

	Params::USolarisUtilLibrary_HasInterface_Params Parms;

	Parms.Object = Object;
	Parms.InterfaceClass = InterfaceClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisUtilLibrary.GetOptionValue
// (Final, Native, Static, Public)
// Parameters:
// int64                              Option                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int64 USolarisUtilLibrary::GetOptionValue(int64 Option)
{
	static auto Func = Class->GetFunction("SolarisUtilLibrary", "GetOptionValue");

	Params::USolarisUtilLibrary_GetOptionValue_Params Parms;

	Parms.Option = Option;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisUtilLibrary.GetFunctionForInterfaceMethod
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        MethodName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarisUtilLibrary::GetFunctionForInterfaceMethod(class UObject* Object, class FName MethodName)
{
	static auto Func = Class->GetFunction("SolarisUtilLibrary", "GetFunctionForInterfaceMethod");

	Params::USolarisUtilLibrary_GetFunctionForInterfaceMethod_Params Parms;

	Parms.Object = Object;
	Parms.MethodName = MethodName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.SolarisUtilLibrary.GetCurrentlyInstantiatedObject
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* USolarisUtilLibrary::GetCurrentlyInstantiatedObject()
{
	static auto Func = Class->GetFunction("SolarisUtilLibrary", "GetCurrentlyInstantiatedObject");

	Params::USolarisUtilLibrary_GetCurrentlyInstantiatedObject_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisUtilLibrary.Dereference
// (Final, Native, Static, Public)
// Parameters:
// int64                              Reference                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int64 USolarisUtilLibrary::Dereference(int64 Reference)
{
	static auto Func = Class->GetFunction("SolarisUtilLibrary", "Dereference");

	Params::USolarisUtilLibrary_Dereference_Params Parms;

	Parms.Reference = Reference;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisUtilLibrary.CallFunction
// (Final, Native, Static, Public)
// Parameters:

void USolarisUtilLibrary::CallFunction()
{
	static auto Func = Class->GetFunction("SolarisUtilLibrary", "CallFunction");

	Params::USolarisUtilLibrary_CallFunction_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.SolarisUtilLibrary.CallFinalFunctionWithContext
// (Final, Native, Static, Public)
// Parameters:

void USolarisUtilLibrary::CallFinalFunctionWithContext()
{
	static auto Func = Class->GetFunction("SolarisUtilLibrary", "CallFinalFunctionWithContext");

	Params::USolarisUtilLibrary_CallFinalFunctionWithContext_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.SolarisUtilLibrary.AddPropertyToSubobjectExclusionList
// (Final, Native, Static, Public)
// Parameters:
// int64                              InstancingGraph                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              Property                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarisUtilLibrary::AddPropertyToSubobjectExclusionList(int64 InstancingGraph, int64 Property)
{
	static auto Func = Class->GetFunction("SolarisUtilLibrary", "AddPropertyToSubobjectExclusionList");

	Params::USolarisUtilLibrary_AddPropertyToSubobjectExclusionList_Params Parms;

	Parms.InstancingGraph = InstancingGraph;
	Parms.Property = Property;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.VerseDynamicallyTypedValueLibrary.NotEqual
// (Final, Native, Static, Public)
// Parameters:
// int32                              Left                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Right                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseDynamicallyTypedValueLibrary::NotEqual(int32 Left, int32 Right)
{
	static auto Func = Class->GetFunction("VerseDynamicallyTypedValueLibrary", "NotEqual");

	Params::UVerseDynamicallyTypedValueLibrary_NotEqual_Params Parms;

	Parms.Left = Left;
	Parms.Right = Right;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeTuple
// (Final, Native, Static, Public)
// Parameters:
// TArray<int32>                      ValueType                                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UVerseDynamicallyTypedValueLibrary::MakeRuntimeTypeTuple(const TArray<int32>& ValueType)
{
	static auto Func = Class->GetFunction("VerseDynamicallyTypedValueLibrary", "MakeRuntimeTypeTuple");

	Params::UVerseDynamicallyTypedValueLibrary_MakeRuntimeTypeTuple_Params Parms;

	Parms.ValueType = ValueType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeStruct
// (Final, Native, Static, Public)
// Parameters:
// class UStruct*                     Struct                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseDynamicallyTypedValueLibrary::MakeRuntimeTypeStruct(class UStruct* Struct)
{
	static auto Func = Class->GetFunction("VerseDynamicallyTypedValueLibrary", "MakeRuntimeTypeStruct");

	Params::UVerseDynamicallyTypedValueLibrary_MakeRuntimeTypeStruct_Params Parms;

	Parms.Struct = Struct;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeString
// (Final, Native, Static, Public)
// Parameters:

void UVerseDynamicallyTypedValueLibrary::MakeRuntimeTypeString()
{
	static auto Func = Class->GetFunction("VerseDynamicallyTypedValueLibrary", "MakeRuntimeTypeString");

	Params::UVerseDynamicallyTypedValueLibrary_MakeRuntimeTypeString_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeOption
// (Final, Native, Static, Public)
// Parameters:
// int32                              ValueType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseDynamicallyTypedValueLibrary::MakeRuntimeTypeOption(int32 ValueType)
{
	static auto Func = Class->GetFunction("VerseDynamicallyTypedValueLibrary", "MakeRuntimeTypeOption");

	Params::UVerseDynamicallyTypedValueLibrary_MakeRuntimeTypeOption_Params Parms;

	Parms.ValueType = ValueType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeObject
// (Final, Native, Static, Public)
// Parameters:

void UVerseDynamicallyTypedValueLibrary::MakeRuntimeTypeObject()
{
	static auto Func = Class->GetFunction("VerseDynamicallyTypedValueLibrary", "MakeRuntimeTypeObject");

	Params::UVerseDynamicallyTypedValueLibrary_MakeRuntimeTypeObject_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeMap
// (Final, Native, Static, Public)
// Parameters:
// int32                              KeyType                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ValueType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseDynamicallyTypedValueLibrary::MakeRuntimeTypeMap(int32 KeyType, int32 ValueType)
{
	static auto Func = Class->GetFunction("VerseDynamicallyTypedValueLibrary", "MakeRuntimeTypeMap");

	Params::UVerseDynamicallyTypedValueLibrary_MakeRuntimeTypeMap_Params Parms;

	Parms.KeyType = KeyType;
	Parms.ValueType = ValueType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeLogic
// (Final, Native, Static, Public)
// Parameters:

void UVerseDynamicallyTypedValueLibrary::MakeRuntimeTypeLogic()
{
	static auto Func = Class->GetFunction("VerseDynamicallyTypedValueLibrary", "MakeRuntimeTypeLogic");

	Params::UVerseDynamicallyTypedValueLibrary_MakeRuntimeTypeLogic_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeInt64
// (Final, Native, Static, Public)
// Parameters:

void UVerseDynamicallyTypedValueLibrary::MakeRuntimeTypeInt64()
{
	static auto Func = Class->GetFunction("VerseDynamicallyTypedValueLibrary", "MakeRuntimeTypeInt64");

	Params::UVerseDynamicallyTypedValueLibrary_MakeRuntimeTypeInt64_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeFunction
// (Final, Native, Static, Public)
// Parameters:

void UVerseDynamicallyTypedValueLibrary::MakeRuntimeTypeFunction()
{
	static auto Func = Class->GetFunction("VerseDynamicallyTypedValueLibrary", "MakeRuntimeTypeFunction");

	Params::UVerseDynamicallyTypedValueLibrary_MakeRuntimeTypeFunction_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeFloat
// (Final, Native, Static, Public)
// Parameters:

void UVerseDynamicallyTypedValueLibrary::MakeRuntimeTypeFloat()
{
	static auto Func = Class->GetFunction("VerseDynamicallyTypedValueLibrary", "MakeRuntimeTypeFloat");

	Params::UVerseDynamicallyTypedValueLibrary_MakeRuntimeTypeFloat_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeEnum
// (Final, Native, Static, Public)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseDynamicallyTypedValueLibrary::MakeRuntimeTypeEnum(class FName Name)
{
	static auto Func = Class->GetFunction("VerseDynamicallyTypedValueLibrary", "MakeRuntimeTypeEnum");

	Params::UVerseDynamicallyTypedValueLibrary_MakeRuntimeTypeEnum_Params Parms;

	Parms.Name = Name;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeDynamic
// (Final, Native, Static, Public)
// Parameters:

void UVerseDynamicallyTypedValueLibrary::MakeRuntimeTypeDynamic()
{
	static auto Func = Class->GetFunction("VerseDynamicallyTypedValueLibrary", "MakeRuntimeTypeDynamic");

	Params::UVerseDynamicallyTypedValueLibrary_MakeRuntimeTypeDynamic_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeClass
// (Final, Native, Static, Public)
// Parameters:

void UVerseDynamicallyTypedValueLibrary::MakeRuntimeTypeClass()
{
	static auto Func = Class->GetFunction("VerseDynamicallyTypedValueLibrary", "MakeRuntimeTypeClass");

	Params::UVerseDynamicallyTypedValueLibrary_MakeRuntimeTypeClass_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeChar8
// (Final, Native, Static, Public)
// Parameters:

void UVerseDynamicallyTypedValueLibrary::MakeRuntimeTypeChar8()
{
	static auto Func = Class->GetFunction("VerseDynamicallyTypedValueLibrary", "MakeRuntimeTypeChar8");

	Params::UVerseDynamicallyTypedValueLibrary_MakeRuntimeTypeChar8_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeChar32
// (Final, Native, Static, Public)
// Parameters:

void UVerseDynamicallyTypedValueLibrary::MakeRuntimeTypeChar32()
{
	static auto Func = Class->GetFunction("VerseDynamicallyTypedValueLibrary", "MakeRuntimeTypeChar32");

	Params::UVerseDynamicallyTypedValueLibrary_MakeRuntimeTypeChar32_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeArray
// (Final, Native, Static, Public)
// Parameters:
// int32                              ElementType                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseDynamicallyTypedValueLibrary::MakeRuntimeTypeArray(int32 ElementType)
{
	static auto Func = Class->GetFunction("VerseDynamicallyTypedValueLibrary", "MakeRuntimeTypeArray");

	Params::UVerseDynamicallyTypedValueLibrary_MakeRuntimeTypeArray_Params Parms;

	Parms.ElementType = ElementType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.VerseDynamicallyTypedValueLibrary.Equal
// (Final, Native, Static, Public)
// Parameters:
// int32                              Left                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Right                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseDynamicallyTypedValueLibrary::Equal(int32 Left, int32 Right)
{
	static auto Func = Class->GetFunction("VerseDynamicallyTypedValueLibrary", "Equal");

	Params::UVerseDynamicallyTypedValueLibrary_Equal_Params Parms;

	Parms.Left = Left;
	Parms.Right = Right;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.VerseDynamicallyTypedValueLibrary.ConvertToDynamicallyTypedValue
// (Final, Native, Static, Public)
// Parameters:
// int32                              RuntimeType                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseDynamicallyTypedValueLibrary::ConvertToDynamicallyTypedValue(int32 RuntimeType, int32 Value)
{
	static auto Func = Class->GetFunction("VerseDynamicallyTypedValueLibrary", "ConvertToDynamicallyTypedValue");

	Params::UVerseDynamicallyTypedValueLibrary_ConvertToDynamicallyTypedValue_Params Parms;

	Parms.RuntimeType = RuntimeType;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Solaris.VerseDynamicallyTypedValueLibrary.ConvertFromDynamicallyTypedValue
// (Final, Native, Static, Public)
// Parameters:
// int32                              RuntimeType                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseDynamicallyTypedValueLibrary::ConvertFromDynamicallyTypedValue(int32 RuntimeType, int32 Value)
{
	static auto Func = Class->GetFunction("VerseDynamicallyTypedValueLibrary", "ConvertFromDynamicallyTypedValue");

	Params::UVerseDynamicallyTypedValueLibrary_ConvertFromDynamicallyTypedValue_Params Parms;

	Parms.RuntimeType = RuntimeType;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
