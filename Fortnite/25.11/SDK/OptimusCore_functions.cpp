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


// Function OptimusCore.OptimusNode.SetGraphPosition
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InPosition                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOptimusNode::SetGraphPosition(struct FVector2D& InPosition)
{
	static auto Func = Class->GetFunction("OptimusNode", "SetGraphPosition");

	Params::UOptimusNode_SetGraphPosition_Params Parms;

	Parms.InPosition = InPosition;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNode.GetNodeName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UOptimusNode::GetNodeName()
{
	static auto Func = Class->GetFunction("OptimusNode", "GetNodeName");

	Params::UOptimusNode_GetNodeName_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNode.GetNodeCategory
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UOptimusNode::GetNodeCategory()
{
	static auto Func = Class->GetFunction("OptimusNode", "GetNodeCategory");

	Params::UOptimusNode_GetNodeCategory_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNode.GetGraphPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UOptimusNode::GetGraphPosition()
{
	static auto Func = Class->GetFunction("OptimusNode", "GetGraphPosition");

	Params::UOptimusNode_GetGraphPosition_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNode.GetDisplayName
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UOptimusNode::GetDisplayName()
{
	static auto Func = Class->GetFunction("OptimusNode", "GetDisplayName");

	Params::UOptimusNode_GetDisplayName_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusDeformer.GetVariables
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UOptimusVariableDescription*>ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class UOptimusVariableDescription*> UOptimusDeformer::GetVariables()
{
	static auto Func = Class->GetFunction("OptimusDeformer", "GetVariables");

	Params::UOptimusDeformer_GetVariables_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusDeformer.GetResources
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UOptimusResourceDescription*>ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class UOptimusResourceDescription*> UOptimusDeformer::GetResources()
{
	static auto Func = Class->GetFunction("OptimusDeformer", "GetResources");

	Params::UOptimusDeformer_GetResources_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusDeformer.GetComponentBindings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UOptimusComponentSourceBinding*>ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class UOptimusComponentSourceBinding*> UOptimusDeformer::GetComponentBindings()
{
	static auto Func = Class->GetFunction("OptimusDeformer", "GetComponentBindings");

	Params::UOptimusDeformer_GetComponentBindings_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusDeformerInstance.SetVectorVariable
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     InValue                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOptimusDeformerInstance::SetVectorVariable(class FName InVariableName, struct FVector& InValue)
{
	static auto Func = Class->GetFunction("OptimusDeformerInstance", "SetVectorVariable");

	Params::UOptimusDeformerInstance_SetVectorVariable_Params Parms;

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusDeformerInstance.SetVector4Variable
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    InValue                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOptimusDeformerInstance::SetVector4Variable(class FName InVariableName, struct FVector4& InValue)
{
	static auto Func = Class->GetFunction("OptimusDeformerInstance", "SetVector4Variable");

	Params::UOptimusDeformerInstance_SetVector4Variable_Params Parms;

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusDeformerInstance.SetTransformVariable
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  InValue                                                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOptimusDeformerInstance::SetTransformVariable(class FName InVariableName, struct FTransform& InValue)
{
	static auto Func = Class->GetFunction("OptimusDeformerInstance", "SetTransformVariable");

	Params::UOptimusDeformerInstance_SetTransformVariable_Params Parms;

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusDeformerInstance.SetIntVariable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOptimusDeformerInstance::SetIntVariable(class FName InVariableName, int32 InValue)
{
	static auto Func = Class->GetFunction("OptimusDeformerInstance", "SetIntVariable");

	Params::UOptimusDeformerInstance_SetIntVariable_Params Parms;

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusDeformerInstance.SetFloatVariable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOptimusDeformerInstance::SetFloatVariable(class FName InVariableName, double InValue)
{
	static auto Func = Class->GetFunction("OptimusDeformerInstance", "SetFloatVariable");

	Params::UOptimusDeformerInstance_SetFloatVariable_Params Parms;

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusDeformerInstance.SetBoolVariable
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        InVariableName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOptimusDeformerInstance::SetBoolVariable(class FName InVariableName, bool InValue)
{
	static auto Func = Class->GetFunction("OptimusDeformerInstance", "SetBoolVariable");

	Params::UOptimusDeformerInstance_SetBoolVariable_Params Parms;

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusDeformerInstance.GetVariables
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UOptimusVariableDescription*>ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class UOptimusVariableDescription*> UOptimusDeformerInstance::GetVariables()
{
	static auto Func = Class->GetFunction("OptimusDeformerInstance", "GetVariables");

	Params::UOptimusDeformerInstance_GetVariables_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusDeformerInstance.EnqueueTriggerGraph
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InTriggerGraphName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOptimusDeformerInstance::EnqueueTriggerGraph(class FName InTriggerGraphName)
{
	static auto Func = Class->GetFunction("OptimusDeformerInstance", "EnqueueTriggerGraph");

	Params::UOptimusDeformerInstance_EnqueueTriggerGraph_Params Parms;

	Parms.InTriggerGraphName = InTriggerGraphName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.RenameGraph
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UOptimusNodeGraph*           InGraph                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InNewName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOptimusNodeGraph::RenameGraph(class UOptimusNodeGraph* InGraph, const class FString& InNewName)
{
	static auto Func = Class->GetFunction("OptimusNodeGraph", "RenameGraph");

	Params::UOptimusNodeGraph_RenameGraph_Params Parms;

	Parms.InGraph = InGraph;
	Parms.InNewName = InNewName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.RemoveNodes
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UOptimusNode*>        InNodes                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOptimusNodeGraph::RemoveNodes(TArray<class UOptimusNode*>& InNodes)
{
	static auto Func = Class->GetFunction("OptimusNodeGraph", "RemoveNodes");

	Params::UOptimusNodeGraph_RemoveNodes_Params Parms;

	Parms.InNodes = InNodes;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.RemoveNode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UOptimusNode*                InNode                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOptimusNodeGraph::RemoveNode(class UOptimusNode* InNode)
{
	static auto Func = Class->GetFunction("OptimusNodeGraph", "RemoveNode");

	Params::UOptimusNodeGraph_RemoveNode_Params Parms;

	Parms.InNode = InNode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.RemoveLink
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UOptimusNodePin*             InNodeOutputPin                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOptimusNodePin*             InNodeInputPin                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOptimusNodeGraph::RemoveLink(class UOptimusNodePin* InNodeOutputPin, class UOptimusNodePin* InNodeInputPin)
{
	static auto Func = Class->GetFunction("OptimusNodeGraph", "RemoveLink");

	Params::UOptimusNodeGraph_RemoveLink_Params Parms;

	Parms.InNodeOutputPin = InNodeOutputPin;
	Parms.InNodeInputPin = InNodeInputPin;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.RemoveAllLinks
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UOptimusNodePin*             InNodePin                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOptimusNodeGraph::RemoveAllLinks(class UOptimusNodePin* InNodePin)
{
	static auto Func = Class->GetFunction("OptimusNodeGraph", "RemoveAllLinks");

	Params::UOptimusNodeGraph_RemoveAllLinks_Params Parms;

	Parms.InNodePin = InNodePin;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.MoveGraph
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UOptimusNodeGraph*           InGraph                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InInsertBefore                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOptimusNodeGraph::MoveGraph(class UOptimusNodeGraph* InGraph, int32 InInsertBefore)
{
	static auto Func = Class->GetFunction("OptimusNodeGraph", "MoveGraph");

	Params::UOptimusNodeGraph_MoveGraph_Params Parms;

	Parms.InGraph = InGraph;
	Parms.InInsertBefore = InInsertBefore;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.IsSubGraphReference
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UOptimusNode*                InNode                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOptimusNodeGraph::IsSubGraphReference(class UOptimusNode* InNode)
{
	static auto Func = Class->GetFunction("OptimusNodeGraph", "IsSubGraphReference");

	Params::UOptimusNodeGraph_IsSubGraphReference_Params Parms;

	Parms.InNode = InNode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.IsKernelFunction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UOptimusNode*                InNode                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOptimusNodeGraph::IsKernelFunction(class UOptimusNode* InNode)
{
	static auto Func = Class->GetFunction("OptimusNodeGraph", "IsKernelFunction");

	Params::UOptimusNodeGraph_IsKernelFunction_Params Parms;

	Parms.InNode = InNode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.IsFunctionReference
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UOptimusNode*                InNode                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOptimusNodeGraph::IsFunctionReference(class UOptimusNode* InNode)
{
	static auto Func = Class->GetFunction("OptimusNodeGraph", "IsFunctionReference");

	Params::UOptimusNodeGraph_IsFunctionReference_Params Parms;

	Parms.InNode = InNode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.IsFunctionGraph
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOptimusNodeGraph::IsFunctionGraph()
{
	static auto Func = Class->GetFunction("OptimusNodeGraph", "IsFunctionGraph");

	Params::UOptimusNodeGraph_IsFunctionGraph_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.IsExecutionGraph
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOptimusNodeGraph::IsExecutionGraph()
{
	static auto Func = Class->GetFunction("OptimusNodeGraph", "IsExecutionGraph");

	Params::UOptimusNodeGraph_IsExecutionGraph_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.IsCustomKernel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UOptimusNode*                InNode                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOptimusNodeGraph::IsCustomKernel(class UOptimusNode* InNode)
{
	static auto Func = Class->GetFunction("OptimusNodeGraph", "IsCustomKernel");

	Params::UOptimusNodeGraph_IsCustomKernel_Params Parms;

	Parms.InNode = InNode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.GetGraphType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EOptimusNodeGraphType   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EOptimusNodeGraphType UOptimusNodeGraph::GetGraphType()
{
	static auto Func = Class->GetFunction("OptimusNodeGraph", "GetGraphType");

	Params::UOptimusNodeGraph_GetGraphType_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.GetGraphs
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UOptimusNodeGraph*>   ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class UOptimusNodeGraph*> UOptimusNodeGraph::GetGraphs()
{
	static auto Func = Class->GetFunction("OptimusNodeGraph", "GetGraphs");

	Params::UOptimusNodeGraph_GetGraphs_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.GetGraphIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UOptimusNodeGraph::GetGraphIndex()
{
	static auto Func = Class->GetFunction("OptimusNodeGraph", "GetGraphIndex");

	Params::UOptimusNodeGraph_GetGraphIndex_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.ExpandCollapsedNodes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UOptimusNode*                InFunctionNode                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UOptimusNode*>        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UOptimusNode*> UOptimusNodeGraph::ExpandCollapsedNodes(class UOptimusNode* InFunctionNode)
{
	static auto Func = Class->GetFunction("OptimusNodeGraph", "ExpandCollapsedNodes");

	Params::UOptimusNodeGraph_ExpandCollapsedNodes_Params Parms;

	Parms.InFunctionNode = InFunctionNode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.DuplicateNodes
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// TArray<class UOptimusNode*>        InNodes                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVector2D                   InPosition                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOptimusNodeGraph::DuplicateNodes(TArray<class UOptimusNode*>& InNodes, struct FVector2D& InPosition)
{
	static auto Func = Class->GetFunction("OptimusNodeGraph", "DuplicateNodes");

	Params::UOptimusNodeGraph_DuplicateNodes_Params Parms;

	Parms.InNodes = InNodes;
	Parms.InPosition = InPosition;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.DuplicateNode
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UOptimusNode*                InNode                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   InPosition                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOptimusNode*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOptimusNode* UOptimusNodeGraph::DuplicateNode(class UOptimusNode* InNode, struct FVector2D& InPosition)
{
	static auto Func = Class->GetFunction("OptimusNodeGraph", "DuplicateNode");

	Params::UOptimusNodeGraph_DuplicateNode_Params Parms;

	Parms.InNode = InNode;
	Parms.InPosition = InPosition;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.ConvertFunctionToCustomKernel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UOptimusNode*                InKernelFunction                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOptimusNode*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOptimusNode* UOptimusNodeGraph::ConvertFunctionToCustomKernel(class UOptimusNode* InKernelFunction)
{
	static auto Func = Class->GetFunction("OptimusNodeGraph", "ConvertFunctionToCustomKernel");

	Params::UOptimusNodeGraph_ConvertFunctionToCustomKernel_Params Parms;

	Parms.InKernelFunction = InKernelFunction;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.ConvertCustomKernelToFunction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UOptimusNode*                InCustomKernel                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOptimusNode*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOptimusNode* UOptimusNodeGraph::ConvertCustomKernelToFunction(class UOptimusNode* InCustomKernel)
{
	static auto Func = Class->GetFunction("OptimusNodeGraph", "ConvertCustomKernelToFunction");

	Params::UOptimusNodeGraph_ConvertCustomKernelToFunction_Params Parms;

	Parms.InCustomKernel = InCustomKernel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.CollapseNodesToSubGraph
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UOptimusNode*>        InNodes                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class UOptimusNode*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOptimusNode* UOptimusNodeGraph::CollapseNodesToSubGraph(TArray<class UOptimusNode*>& InNodes)
{
	static auto Func = Class->GetFunction("OptimusNodeGraph", "CollapseNodesToSubGraph");

	Params::UOptimusNodeGraph_CollapseNodesToSubGraph_Params Parms;

	Parms.InNodes = InNodes;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.CollapseNodesToFunction
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UOptimusNode*>        InNodes                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class UOptimusNode*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOptimusNode* UOptimusNodeGraph::CollapseNodesToFunction(TArray<class UOptimusNode*>& InNodes)
{
	static auto Func = Class->GetFunction("OptimusNodeGraph", "CollapseNodesToFunction");

	Params::UOptimusNodeGraph_CollapseNodesToFunction_Params Parms;

	Parms.InNodes = InNodes;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.AddVariableGetNode
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UOptimusVariableDescription* InVariableDesc                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   InPosition                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOptimusNode*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOptimusNode* UOptimusNodeGraph::AddVariableGetNode(class UOptimusVariableDescription* InVariableDesc, struct FVector2D& InPosition)
{
	static auto Func = Class->GetFunction("OptimusNodeGraph", "AddVariableGetNode");

	Params::UOptimusNodeGraph_AddVariableGetNode_Params Parms;

	Parms.InVariableDesc = InVariableDesc;
	Parms.InPosition = InPosition;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.AddValueNode
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FOptimusDataTypeRef         InDataTypeRef                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D                   InPosition                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOptimusNode*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOptimusNode* UOptimusNodeGraph::AddValueNode(const struct FOptimusDataTypeRef& InDataTypeRef, struct FVector2D& InPosition)
{
	static auto Func = Class->GetFunction("OptimusNodeGraph", "AddValueNode");

	Params::UOptimusNodeGraph_AddValueNode_Params Parms;

	Parms.InDataTypeRef = InDataTypeRef;
	Parms.InPosition = InPosition;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.AddResourceSetNode
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UOptimusResourceDescription* InResourceDesc                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   InPosition                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOptimusNode*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOptimusNode* UOptimusNodeGraph::AddResourceSetNode(class UOptimusResourceDescription* InResourceDesc, struct FVector2D& InPosition)
{
	static auto Func = Class->GetFunction("OptimusNodeGraph", "AddResourceSetNode");

	Params::UOptimusNodeGraph_AddResourceSetNode_Params Parms;

	Parms.InResourceDesc = InResourceDesc;
	Parms.InPosition = InPosition;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.AddResourceNode
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UOptimusResourceDescription* InResourceDesc                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   InPosition                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOptimusNode*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOptimusNode* UOptimusNodeGraph::AddResourceNode(class UOptimusResourceDescription* InResourceDesc, struct FVector2D& InPosition)
{
	static auto Func = Class->GetFunction("OptimusNodeGraph", "AddResourceNode");

	Params::UOptimusNodeGraph_AddResourceNode_Params Parms;

	Parms.InResourceDesc = InResourceDesc;
	Parms.InPosition = InPosition;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.AddResourceGetNode
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UOptimusResourceDescription* InResourceDesc                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   InPosition                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOptimusNode*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOptimusNode* UOptimusNodeGraph::AddResourceGetNode(class UOptimusResourceDescription* InResourceDesc, struct FVector2D& InPosition)
{
	static auto Func = Class->GetFunction("OptimusNodeGraph", "AddResourceGetNode");

	Params::UOptimusNodeGraph_AddResourceGetNode_Params Parms;

	Parms.InResourceDesc = InResourceDesc;
	Parms.InPosition = InPosition;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.AddNode
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// TSubclassOf<class UOptimusNode>    InNodeClass                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   InPosition                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOptimusNode*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOptimusNode* UOptimusNodeGraph::AddNode(TSubclassOf<class UOptimusNode> InNodeClass, struct FVector2D& InPosition)
{
	static auto Func = Class->GetFunction("OptimusNodeGraph", "AddNode");

	Params::UOptimusNodeGraph_AddNode_Params Parms;

	Parms.InNodeClass = InNodeClass;
	Parms.InPosition = InPosition;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.AddLink
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UOptimusNodePin*             InNodeOutputPin                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOptimusNodePin*             InNodeInputPin                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOptimusNodeGraph::AddLink(class UOptimusNodePin* InNodeOutputPin, class UOptimusNodePin* InNodeInputPin)
{
	static auto Func = Class->GetFunction("OptimusNodeGraph", "AddLink");

	Params::UOptimusNodeGraph_AddLink_Params Parms;

	Parms.InNodeOutputPin = InNodeOutputPin;
	Parms.InNodeInputPin = InNodeInputPin;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.AddDataInterfaceNode
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// TSubclassOf<class UOptimusComputeDataInterface>InDataInterfaceClass                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   InPosition                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOptimusNode*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOptimusNode* UOptimusNodeGraph::AddDataInterfaceNode(TSubclassOf<class UOptimusComputeDataInterface> InDataInterfaceClass, struct FVector2D& InPosition)
{
	static auto Func = Class->GetFunction("OptimusNodeGraph", "AddDataInterfaceNode");

	Params::UOptimusNodeGraph_AddDataInterfaceNode_Params Parms;

	Parms.InDataInterfaceClass = InDataInterfaceClass;
	Parms.InPosition = InPosition;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.AddComponentBindingGetNode
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UOptimusComponentSourceBinding*InComponentBinding                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   InPosition                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOptimusNode*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOptimusNode* UOptimusNodeGraph::AddComponentBindingGetNode(class UOptimusComponentSourceBinding* InComponentBinding, struct FVector2D& InPosition)
{
	static auto Func = Class->GetFunction("OptimusNodeGraph", "AddComponentBindingGetNode");

	Params::UOptimusNodeGraph_AddComponentBindingGetNode_Params Parms;

	Parms.InComponentBinding = InComponentBinding;
	Parms.InPosition = InPosition;

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
