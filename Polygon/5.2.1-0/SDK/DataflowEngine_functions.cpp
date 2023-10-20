#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class DataflowEngine.DataflowBlueprintLibrary
// (None)

class UClass* UDataflowBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataflowBlueprintLibrary");

	return Clss;
}


// DataflowBlueprintLibrary DataflowEngine.Default__DataflowBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UDataflowBlueprintLibrary* UDataflowBlueprintLibrary::GetDefaultObj()
{
	static class UDataflowBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataflowBlueprintLibrary*>(UDataflowBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function DataflowEngine.DataflowBlueprintLibrary.EvaluateTerminalNodeByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDataflow*                   Dataflow                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TerminalNodeName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ResultAsset                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDataflowBlueprintLibrary::EvaluateTerminalNodeByName(class UDataflow* Dataflow, class FName TerminalNodeName, class UObject* ResultAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataflowBlueprintLibrary", "EvaluateTerminalNodeByName");

	Params::UDataflowBlueprintLibrary_EvaluateTerminalNodeByName_Params Parms{};

	Parms.Dataflow = Dataflow;
	Parms.TerminalNodeName = TerminalNodeName;
	Parms.ResultAsset = ResultAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class DataflowEngine.DataflowEdNode
// (None)

class UClass* UDataflowEdNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataflowEdNode");

	return Clss;
}


// DataflowEdNode DataflowEngine.Default__DataflowEdNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UDataflowEdNode* UDataflowEdNode::GetDefaultObj()
{
	static class UDataflowEdNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataflowEdNode*>(UDataflowEdNode::StaticClass()->DefaultObject);

	return Default;
}


// Class DataflowEngine.Dataflow
// (None)

class UClass* UDataflow::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Dataflow");

	return Clss;
}


// Dataflow DataflowEngine.Default__Dataflow
// (Public, ClassDefaultObject, ArchetypeObject)

class UDataflow* UDataflow::GetDefaultObj()
{
	static class UDataflow* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataflow*>(UDataflow::StaticClass()->DefaultObject);

	return Default;
}

}


