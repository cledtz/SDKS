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


// Function DataflowEngine.DataflowBlueprintLibrary.EvaluateTerminalNodeByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDataflow*                   Dataflow                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TerminalNodeName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ResultAsset                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDataflowBlueprintLibrary::EvaluateTerminalNodeByName(class UDataflow* Dataflow, class FName TerminalNodeName, class UObject* ResultAsset)
{
	static auto Func = Class->GetFunction("DataflowBlueprintLibrary", "EvaluateTerminalNodeByName");

	Params::UDataflowBlueprintLibrary_EvaluateTerminalNodeByName_Params Parms;

	Parms.Dataflow = Dataflow;
	Parms.TerminalNodeName = TerminalNodeName;
	Parms.ResultAsset = ResultAsset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
