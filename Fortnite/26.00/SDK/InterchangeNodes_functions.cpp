#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class InterchangeNodes.InterchangeAnimationTrackSetNode
// (None)

class UClass* UInterchangeAnimationTrackSetNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeAnimationTrackSetNode");

	return Clss;
}


// InterchangeAnimationTrackSetNode InterchangeNodes.Default__InterchangeAnimationTrackSetNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeAnimationTrackSetNode* UInterchangeAnimationTrackSetNode::GetDefaultObj()
{
	static class UInterchangeAnimationTrackSetNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeAnimationTrackSetNode*>(UInterchangeAnimationTrackSetNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeNodes.InterchangeAnimationTrackSetNode.SetCustomFrameRate
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimationTrackSetNode::SetCustomFrameRate(float& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimationTrackSetNode", "SetCustomFrameRate");

	Params::UInterchangeAnimationTrackSetNode_SetCustomFrameRate_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeAnimationTrackSetNode.RemoveCustomAnimationTrackUid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationTrackUid                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimationTrackSetNode::RemoveCustomAnimationTrackUid(const class FString& AnimationTrackUid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimationTrackSetNode", "RemoveCustomAnimationTrackUid");

	Params::UInterchangeAnimationTrackSetNode_RemoveCustomAnimationTrackUid_Params Parms{};

	Parms.AnimationTrackUid = AnimationTrackUid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeAnimationTrackSetNode.GetCustomFrameRate
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimationTrackSetNode::GetCustomFrameRate(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimationTrackSetNode", "GetCustomFrameRate");

	Params::UInterchangeAnimationTrackSetNode_GetCustomFrameRate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeAnimationTrackSetNode.GetCustomAnimationTrackUids
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              OutAnimationTrackUids                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UInterchangeAnimationTrackSetNode::GetCustomAnimationTrackUids(TArray<class FString>* OutAnimationTrackUids)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimationTrackSetNode", "GetCustomAnimationTrackUids");

	Params::UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUids_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutAnimationTrackUids != nullptr)
		*OutAnimationTrackUids = Parms.OutAnimationTrackUids;

}


// Function InterchangeNodes.InterchangeAnimationTrackSetNode.GetCustomAnimationTrackUidCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UInterchangeAnimationTrackSetNode::GetCustomAnimationTrackUidCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimationTrackSetNode", "GetCustomAnimationTrackUidCount");

	Params::UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUidCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeAnimationTrackSetNode.GetCustomAnimationTrackUid
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutAnimationTrackUid                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInterchangeAnimationTrackSetNode::GetCustomAnimationTrackUid(int32 Index, class FString* OutAnimationTrackUid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimationTrackSetNode", "GetCustomAnimationTrackUid");

	Params::UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUid_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutAnimationTrackUid != nullptr)
		*OutAnimationTrackUid = Parms.OutAnimationTrackUid;

}


// Function InterchangeNodes.InterchangeAnimationTrackSetNode.AddCustomAnimationTrackUid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationTrackUid                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimationTrackSetNode::AddCustomAnimationTrackUid(const class FString& AnimationTrackUid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimationTrackSetNode", "AddCustomAnimationTrackUid");

	Params::UInterchangeAnimationTrackSetNode_AddCustomAnimationTrackUid_Params Parms{};

	Parms.AnimationTrackUid = AnimationTrackUid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class InterchangeNodes.InterchangeAnimationTrackBaseNode
// (None)

class UClass* UInterchangeAnimationTrackBaseNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeAnimationTrackBaseNode");

	return Clss;
}


// InterchangeAnimationTrackBaseNode InterchangeNodes.Default__InterchangeAnimationTrackBaseNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeAnimationTrackBaseNode* UInterchangeAnimationTrackBaseNode::GetDefaultObj()
{
	static class UInterchangeAnimationTrackBaseNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeAnimationTrackBaseNode*>(UInterchangeAnimationTrackBaseNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeNodes.InterchangeAnimationTrackBaseNode.SetCustomCompletionMode
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimationTrackBaseNode::SetCustomCompletionMode(int32& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimationTrackBaseNode", "SetCustomCompletionMode");

	Params::UInterchangeAnimationTrackBaseNode_SetCustomCompletionMode_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeAnimationTrackBaseNode.GetCustomCompletionMode
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimationTrackBaseNode::GetCustomCompletionMode(int32* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimationTrackBaseNode", "GetCustomCompletionMode");

	Params::UInterchangeAnimationTrackBaseNode_GetCustomCompletionMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Class InterchangeNodes.InterchangeAnimationTrackSetInstanceNode
// (None)

class UClass* UInterchangeAnimationTrackSetInstanceNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeAnimationTrackSetInstanceNode");

	return Clss;
}


// InterchangeAnimationTrackSetInstanceNode InterchangeNodes.Default__InterchangeAnimationTrackSetInstanceNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeAnimationTrackSetInstanceNode* UInterchangeAnimationTrackSetInstanceNode::GetDefaultObj()
{
	static class UInterchangeAnimationTrackSetInstanceNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeAnimationTrackSetInstanceNode*>(UInterchangeAnimationTrackSetInstanceNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.SetCustomTrackSetDependencyUid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimationTrackSetInstanceNode::SetCustomTrackSetDependencyUid(const class FString& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimationTrackSetInstanceNode", "SetCustomTrackSetDependencyUid");

	Params::UInterchangeAnimationTrackSetInstanceNode_SetCustomTrackSetDependencyUid_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.SetCustomTimeScale
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimationTrackSetInstanceNode::SetCustomTimeScale(float& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimationTrackSetInstanceNode", "SetCustomTimeScale");

	Params::UInterchangeAnimationTrackSetInstanceNode_SetCustomTimeScale_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.SetCustomStartFrame
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimationTrackSetInstanceNode::SetCustomStartFrame(int32& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimationTrackSetInstanceNode", "SetCustomStartFrame");

	Params::UInterchangeAnimationTrackSetInstanceNode_SetCustomStartFrame_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.SetCustomDuration
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimationTrackSetInstanceNode::SetCustomDuration(int32& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimationTrackSetInstanceNode", "SetCustomDuration");

	Params::UInterchangeAnimationTrackSetInstanceNode_SetCustomDuration_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.GetCustomTrackSetDependencyUid
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimationTrackSetInstanceNode::GetCustomTrackSetDependencyUid(class FString* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimationTrackSetInstanceNode", "GetCustomTrackSetDependencyUid");

	Params::UInterchangeAnimationTrackSetInstanceNode_GetCustomTrackSetDependencyUid_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.GetCustomTimeScale
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimationTrackSetInstanceNode::GetCustomTimeScale(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimationTrackSetInstanceNode", "GetCustomTimeScale");

	Params::UInterchangeAnimationTrackSetInstanceNode_GetCustomTimeScale_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.GetCustomStartFrame
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimationTrackSetInstanceNode::GetCustomStartFrame(int32* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimationTrackSetInstanceNode", "GetCustomStartFrame");

	Params::UInterchangeAnimationTrackSetInstanceNode_GetCustomStartFrame_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.GetCustomDuration
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimationTrackSetInstanceNode::GetCustomDuration(int32* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimationTrackSetInstanceNode", "GetCustomDuration");

	Params::UInterchangeAnimationTrackSetInstanceNode_GetCustomDuration_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Class InterchangeNodes.InterchangeAnimationTrackNode
// (None)

class UClass* UInterchangeAnimationTrackNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeAnimationTrackNode");

	return Clss;
}


// InterchangeAnimationTrackNode InterchangeNodes.Default__InterchangeAnimationTrackNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeAnimationTrackNode* UInterchangeAnimationTrackNode::GetDefaultObj()
{
	static class UInterchangeAnimationTrackNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeAnimationTrackNode*>(UInterchangeAnimationTrackNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeNodes.InterchangeAnimationTrackNode.SetCustomTargetedProperty
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              TargetedProperty                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimationTrackNode::SetCustomTargetedProperty(int32& TargetedProperty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimationTrackNode", "SetCustomTargetedProperty");

	Params::UInterchangeAnimationTrackNode_SetCustomTargetedProperty_Params Parms{};

	Parms.TargetedProperty = TargetedProperty;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeAnimationTrackNode.SetCustomFrameCount
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimationTrackNode::SetCustomFrameCount(int32& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimationTrackNode", "SetCustomFrameCount");

	Params::UInterchangeAnimationTrackNode_SetCustomFrameCount_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeAnimationTrackNode.SetCustomAnimationPayloadKey
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      InUniqueId                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EInterchangeAnimationPayLoadTypeInType                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimationTrackNode::SetCustomAnimationPayloadKey(const class FString& InUniqueId, enum class EInterchangeAnimationPayLoadType& InType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimationTrackNode", "SetCustomAnimationPayloadKey");

	Params::UInterchangeAnimationTrackNode_SetCustomAnimationPayloadKey_Params Parms{};

	Parms.InUniqueId = InUniqueId;
	Parms.InType = InType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeAnimationTrackNode.SetCustomActorDependencyUid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      DependencyUid                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimationTrackNode::SetCustomActorDependencyUid(const class FString& DependencyUid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimationTrackNode", "SetCustomActorDependencyUid");

	Params::UInterchangeAnimationTrackNode_SetCustomActorDependencyUid_Params Parms{};

	Parms.DependencyUid = DependencyUid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeAnimationTrackNode.GetCustomTargetedProperty
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              TargetedProperty                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimationTrackNode::GetCustomTargetedProperty(int32* TargetedProperty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimationTrackNode", "GetCustomTargetedProperty");

	Params::UInterchangeAnimationTrackNode_GetCustomTargetedProperty_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TargetedProperty != nullptr)
		*TargetedProperty = Parms.TargetedProperty;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeAnimationTrackNode.GetCustomFrameCount
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimationTrackNode::GetCustomFrameCount(int32* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimationTrackNode", "GetCustomFrameCount");

	Params::UInterchangeAnimationTrackNode_GetCustomFrameCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeAnimationTrackNode.GetCustomAnimationPayloadKey
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FInterchangeAnimationPayLoadKeyAnimationPayLoadKey                                              (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimationTrackNode::GetCustomAnimationPayloadKey(struct FInterchangeAnimationPayLoadKey* AnimationPayLoadKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimationTrackNode", "GetCustomAnimationPayloadKey");

	Params::UInterchangeAnimationTrackNode_GetCustomAnimationPayloadKey_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AnimationPayLoadKey != nullptr)
		*AnimationPayLoadKey = Parms.AnimationPayLoadKey;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeAnimationTrackNode.GetCustomActorDependencyUid
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      DependencyUid                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimationTrackNode::GetCustomActorDependencyUid(class FString* DependencyUid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimationTrackNode", "GetCustomActorDependencyUid");

	Params::UInterchangeAnimationTrackNode_GetCustomActorDependencyUid_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DependencyUid != nullptr)
		*DependencyUid = Parms.DependencyUid;

	return Parms.ReturnValue;

}


// Class InterchangeNodes.InterchangeTransformAnimationTrackNode
// (None)

class UClass* UInterchangeTransformAnimationTrackNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeTransformAnimationTrackNode");

	return Clss;
}


// InterchangeTransformAnimationTrackNode InterchangeNodes.Default__InterchangeTransformAnimationTrackNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeTransformAnimationTrackNode* UInterchangeTransformAnimationTrackNode::GetDefaultObj()
{
	static class UInterchangeTransformAnimationTrackNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeTransformAnimationTrackNode*>(UInterchangeTransformAnimationTrackNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeNodes.InterchangeTransformAnimationTrackNode.SetCustomUsedChannels
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTransformAnimationTrackNode::SetCustomUsedChannels(int32& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTransformAnimationTrackNode", "SetCustomUsedChannels");

	Params::UInterchangeTransformAnimationTrackNode_SetCustomUsedChannels_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeTransformAnimationTrackNode.GetCustomUsedChannels
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTransformAnimationTrackNode::GetCustomUsedChannels(int32* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTransformAnimationTrackNode", "GetCustomUsedChannels");

	Params::UInterchangeTransformAnimationTrackNode_GetCustomUsedChannels_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Class InterchangeNodes.InterchangeSkeletalAnimationTrackNode
// (None)

class UClass* UInterchangeSkeletalAnimationTrackNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeSkeletalAnimationTrackNode");

	return Clss;
}


// InterchangeSkeletalAnimationTrackNode InterchangeNodes.Default__InterchangeSkeletalAnimationTrackNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeSkeletalAnimationTrackNode* UInterchangeSkeletalAnimationTrackNode::GetDefaultObj()
{
	static class UInterchangeSkeletalAnimationTrackNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeSkeletalAnimationTrackNode*>(UInterchangeSkeletalAnimationTrackNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeNodes.InterchangeSkeletalAnimationTrackNode.SetCustomSkeletonNodeUid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSkeletalAnimationTrackNode::SetCustomSkeletonNodeUid(const class FString& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSkeletalAnimationTrackNode", "SetCustomSkeletonNodeUid");

	Params::UInterchangeSkeletalAnimationTrackNode_SetCustomSkeletonNodeUid_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeSkeletalAnimationTrackNode.SetCustomAnimationStopTime
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// double                             StopTime                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSkeletalAnimationTrackNode::SetCustomAnimationStopTime(double& StopTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSkeletalAnimationTrackNode", "SetCustomAnimationStopTime");

	Params::UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationStopTime_Params Parms{};

	Parms.StopTime = StopTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeSkeletalAnimationTrackNode.SetCustomAnimationStartTime
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// double                             StartTime                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSkeletalAnimationTrackNode::SetCustomAnimationStartTime(double& StartTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSkeletalAnimationTrackNode", "SetCustomAnimationStartTime");

	Params::UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationStartTime_Params Parms{};

	Parms.StartTime = StartTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeSkeletalAnimationTrackNode.SetCustomAnimationSampleRate
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// double                             SampleRate                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSkeletalAnimationTrackNode::SetCustomAnimationSampleRate(double& SampleRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSkeletalAnimationTrackNode", "SetCustomAnimationSampleRate");

	Params::UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationSampleRate_Params Parms{};

	Parms.SampleRate = SampleRate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeSkeletalAnimationTrackNode.SetAnimationPayloadKeyForSceneNodeUid
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      SceneNodeUid                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InUniqueId                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EInterchangeAnimationPayLoadTypeInType                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSkeletalAnimationTrackNode::SetAnimationPayloadKeyForSceneNodeUid(const class FString& SceneNodeUid, const class FString& InUniqueId, enum class EInterchangeAnimationPayLoadType& InType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSkeletalAnimationTrackNode", "SetAnimationPayloadKeyForSceneNodeUid");

	Params::UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForSceneNodeUid_Params Parms{};

	Parms.SceneNodeUid = SceneNodeUid;
	Parms.InUniqueId = InUniqueId;
	Parms.InType = InType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeSkeletalAnimationTrackNode.SetAnimationPayloadKeyForMorphTargetNodeUid
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      MorphTargetNodeUid                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InUniqueId                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EInterchangeAnimationPayLoadTypeInType                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSkeletalAnimationTrackNode::SetAnimationPayloadKeyForMorphTargetNodeUid(const class FString& MorphTargetNodeUid, const class FString& InUniqueId, enum class EInterchangeAnimationPayLoadType& InType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSkeletalAnimationTrackNode", "SetAnimationPayloadKeyForMorphTargetNodeUid");

	Params::UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForMorphTargetNodeUid_Params Parms{};

	Parms.MorphTargetNodeUid = MorphTargetNodeUid;
	Parms.InUniqueId = InUniqueId;
	Parms.InType = InType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeSkeletalAnimationTrackNode.GetSceneNodeAnimationPayloadKeys
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<class FString, class FString> OutSceneNodeAnimationPayloadKeyUids                              (Parm, OutParm, NativeAccessSpecifierPublic)
// TMap<class FString, uint8>         OutSceneNodeAnimationPayloadKeyTypes                             (Parm, OutParm, NativeAccessSpecifierPublic)

void UInterchangeSkeletalAnimationTrackNode::GetSceneNodeAnimationPayloadKeys(TMap<class FString, class FString>* OutSceneNodeAnimationPayloadKeyUids, TMap<class FString, uint8>* OutSceneNodeAnimationPayloadKeyTypes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSkeletalAnimationTrackNode", "GetSceneNodeAnimationPayloadKeys");

	Params::UInterchangeSkeletalAnimationTrackNode_GetSceneNodeAnimationPayloadKeys_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutSceneNodeAnimationPayloadKeyUids != nullptr)
		*OutSceneNodeAnimationPayloadKeyUids = Parms.OutSceneNodeAnimationPayloadKeyUids;

	if (OutSceneNodeAnimationPayloadKeyTypes != nullptr)
		*OutSceneNodeAnimationPayloadKeyTypes = Parms.OutSceneNodeAnimationPayloadKeyTypes;

}


// Function InterchangeNodes.InterchangeSkeletalAnimationTrackNode.GetMorphTargetNodeAnimationPayloadKeys
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<class FString, class FString> OutMorphTargetNodeAnimationPayloadKeyUids                        (Parm, OutParm, NativeAccessSpecifierPublic)
// TMap<class FString, uint8>         OutMorphTargetNodeAnimationPayloadKeyTypes                       (Parm, OutParm, NativeAccessSpecifierPublic)

void UInterchangeSkeletalAnimationTrackNode::GetMorphTargetNodeAnimationPayloadKeys(TMap<class FString, class FString>* OutMorphTargetNodeAnimationPayloadKeyUids, TMap<class FString, uint8>* OutMorphTargetNodeAnimationPayloadKeyTypes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSkeletalAnimationTrackNode", "GetMorphTargetNodeAnimationPayloadKeys");

	Params::UInterchangeSkeletalAnimationTrackNode_GetMorphTargetNodeAnimationPayloadKeys_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutMorphTargetNodeAnimationPayloadKeyUids != nullptr)
		*OutMorphTargetNodeAnimationPayloadKeyUids = Parms.OutMorphTargetNodeAnimationPayloadKeyUids;

	if (OutMorphTargetNodeAnimationPayloadKeyTypes != nullptr)
		*OutMorphTargetNodeAnimationPayloadKeyTypes = Parms.OutMorphTargetNodeAnimationPayloadKeyTypes;

}


// Function InterchangeNodes.InterchangeSkeletalAnimationTrackNode.GetCustomSkeletonNodeUid
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSkeletalAnimationTrackNode::GetCustomSkeletonNodeUid(class FString* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSkeletalAnimationTrackNode", "GetCustomSkeletonNodeUid");

	Params::UInterchangeSkeletalAnimationTrackNode_GetCustomSkeletonNodeUid_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeSkeletalAnimationTrackNode.GetCustomAnimationStopTime
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// double                             StopTime                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSkeletalAnimationTrackNode::GetCustomAnimationStopTime(double* StopTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSkeletalAnimationTrackNode", "GetCustomAnimationStopTime");

	Params::UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationStopTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (StopTime != nullptr)
		*StopTime = Parms.StopTime;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeSkeletalAnimationTrackNode.GetCustomAnimationStartTime
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// double                             StartTime                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSkeletalAnimationTrackNode::GetCustomAnimationStartTime(double* StartTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSkeletalAnimationTrackNode", "GetCustomAnimationStartTime");

	Params::UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationStartTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (StartTime != nullptr)
		*StartTime = Parms.StartTime;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeSkeletalAnimationTrackNode.GetCustomAnimationSampleRate
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// double                             SampleRate                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSkeletalAnimationTrackNode::GetCustomAnimationSampleRate(double* SampleRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSkeletalAnimationTrackNode", "GetCustomAnimationSampleRate");

	Params::UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationSampleRate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SampleRate != nullptr)
		*SampleRate = Parms.SampleRate;

	return Parms.ReturnValue;

}


// Class InterchangeNodes.InterchangePhysicalCameraNode
// (None)

class UClass* UInterchangePhysicalCameraNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangePhysicalCameraNode");

	return Clss;
}


// InterchangePhysicalCameraNode InterchangeNodes.Default__InterchangePhysicalCameraNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangePhysicalCameraNode* UInterchangePhysicalCameraNode::GetDefaultObj()
{
	static class UInterchangePhysicalCameraNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangePhysicalCameraNode*>(UInterchangePhysicalCameraNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeNodes.InterchangePhysicalCameraNode.SetCustomSensorWidth
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangePhysicalCameraNode::SetCustomSensorWidth(float& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePhysicalCameraNode", "SetCustomSensorWidth");

	Params::UInterchangePhysicalCameraNode_SetCustomSensorWidth_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangePhysicalCameraNode.SetCustomSensorHeight
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangePhysicalCameraNode::SetCustomSensorHeight(float& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePhysicalCameraNode", "SetCustomSensorHeight");

	Params::UInterchangePhysicalCameraNode_SetCustomSensorHeight_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangePhysicalCameraNode.SetCustomFocalLength
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangePhysicalCameraNode::SetCustomFocalLength(float& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePhysicalCameraNode", "SetCustomFocalLength");

	Params::UInterchangePhysicalCameraNode_SetCustomFocalLength_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangePhysicalCameraNode.SetCustomEnableDepthOfField
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangePhysicalCameraNode::SetCustomEnableDepthOfField(bool& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePhysicalCameraNode", "SetCustomEnableDepthOfField");

	Params::UInterchangePhysicalCameraNode_SetCustomEnableDepthOfField_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangePhysicalCameraNode.GetCustomSensorWidth
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangePhysicalCameraNode::GetCustomSensorWidth(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePhysicalCameraNode", "GetCustomSensorWidth");

	Params::UInterchangePhysicalCameraNode_GetCustomSensorWidth_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangePhysicalCameraNode.GetCustomSensorHeight
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangePhysicalCameraNode::GetCustomSensorHeight(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePhysicalCameraNode", "GetCustomSensorHeight");

	Params::UInterchangePhysicalCameraNode_GetCustomSensorHeight_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangePhysicalCameraNode.GetCustomFocalLength
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangePhysicalCameraNode::GetCustomFocalLength(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePhysicalCameraNode", "GetCustomFocalLength");

	Params::UInterchangePhysicalCameraNode_GetCustomFocalLength_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangePhysicalCameraNode.GetCustomEnableDepthOfField
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangePhysicalCameraNode::GetCustomEnableDepthOfField(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePhysicalCameraNode", "GetCustomEnableDepthOfField");

	Params::UInterchangePhysicalCameraNode_GetCustomEnableDepthOfField_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Class InterchangeNodes.InterchangeStandardCameraNode
// (None)

class UClass* UInterchangeStandardCameraNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeStandardCameraNode");

	return Clss;
}


// InterchangeStandardCameraNode InterchangeNodes.Default__InterchangeStandardCameraNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeStandardCameraNode* UInterchangeStandardCameraNode::GetDefaultObj()
{
	static class UInterchangeStandardCameraNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeStandardCameraNode*>(UInterchangeStandardCameraNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeNodes.InterchangeStandardCameraNode.SetCustomWidth
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStandardCameraNode::SetCustomWidth(float& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStandardCameraNode", "SetCustomWidth");

	Params::UInterchangeStandardCameraNode_SetCustomWidth_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeStandardCameraNode.SetCustomProjectionMode
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EInterchangeCameraProjectionTypeAttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStandardCameraNode::SetCustomProjectionMode(enum class EInterchangeCameraProjectionType& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStandardCameraNode", "SetCustomProjectionMode");

	Params::UInterchangeStandardCameraNode_SetCustomProjectionMode_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeStandardCameraNode.SetCustomNearClipPlane
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStandardCameraNode::SetCustomNearClipPlane(float& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStandardCameraNode", "SetCustomNearClipPlane");

	Params::UInterchangeStandardCameraNode_SetCustomNearClipPlane_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeStandardCameraNode.SetCustomFieldOfView
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStandardCameraNode::SetCustomFieldOfView(float& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStandardCameraNode", "SetCustomFieldOfView");

	Params::UInterchangeStandardCameraNode_SetCustomFieldOfView_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeStandardCameraNode.SetCustomFarClipPlane
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStandardCameraNode::SetCustomFarClipPlane(float& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStandardCameraNode", "SetCustomFarClipPlane");

	Params::UInterchangeStandardCameraNode_SetCustomFarClipPlane_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeStandardCameraNode.SetCustomAspectRatio
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStandardCameraNode::SetCustomAspectRatio(float& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStandardCameraNode", "SetCustomAspectRatio");

	Params::UInterchangeStandardCameraNode_SetCustomAspectRatio_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeStandardCameraNode.GetCustomWidth
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStandardCameraNode::GetCustomWidth(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStandardCameraNode", "GetCustomWidth");

	Params::UInterchangeStandardCameraNode_GetCustomWidth_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeStandardCameraNode.GetCustomProjectionMode
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EInterchangeCameraProjectionTypeAttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStandardCameraNode::GetCustomProjectionMode(enum class EInterchangeCameraProjectionType* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStandardCameraNode", "GetCustomProjectionMode");

	Params::UInterchangeStandardCameraNode_GetCustomProjectionMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeStandardCameraNode.GetCustomNearClipPlane
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStandardCameraNode::GetCustomNearClipPlane(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStandardCameraNode", "GetCustomNearClipPlane");

	Params::UInterchangeStandardCameraNode_GetCustomNearClipPlane_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeStandardCameraNode.GetCustomFieldOfView
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStandardCameraNode::GetCustomFieldOfView(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStandardCameraNode", "GetCustomFieldOfView");

	Params::UInterchangeStandardCameraNode_GetCustomFieldOfView_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeStandardCameraNode.GetCustomFarClipPlane
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStandardCameraNode::GetCustomFarClipPlane(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStandardCameraNode", "GetCustomFarClipPlane");

	Params::UInterchangeStandardCameraNode_GetCustomFarClipPlane_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeStandardCameraNode.GetCustomAspectRatio
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStandardCameraNode::GetCustomAspectRatio(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStandardCameraNode", "GetCustomAspectRatio");

	Params::UInterchangeStandardCameraNode_GetCustomAspectRatio_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Class InterchangeNodes.InterchangeBaseLightNode
// (None)

class UClass* UInterchangeBaseLightNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeBaseLightNode");

	return Clss;
}


// InterchangeBaseLightNode InterchangeNodes.Default__InterchangeBaseLightNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeBaseLightNode* UInterchangeBaseLightNode::GetDefaultObj()
{
	static class UInterchangeBaseLightNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeBaseLightNode*>(UInterchangeBaseLightNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeNodes.InterchangeBaseLightNode.SetCustomUseTemperature
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeBaseLightNode::SetCustomUseTemperature(bool AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseLightNode", "SetCustomUseTemperature");

	Params::UInterchangeBaseLightNode_SetCustomUseTemperature_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeBaseLightNode.SetCustomTemperature
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeBaseLightNode::SetCustomTemperature(float AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseLightNode", "SetCustomTemperature");

	Params::UInterchangeBaseLightNode_SetCustomTemperature_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeBaseLightNode.SetCustomLightColor
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeBaseLightNode::SetCustomLightColor(struct FLinearColor& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseLightNode", "SetCustomLightColor");

	Params::UInterchangeBaseLightNode_SetCustomLightColor_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeBaseLightNode.SetCustomIntensity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeBaseLightNode::SetCustomIntensity(float AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseLightNode", "SetCustomIntensity");

	Params::UInterchangeBaseLightNode_SetCustomIntensity_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeBaseLightNode.GetCustomUseTemperature
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeBaseLightNode::GetCustomUseTemperature(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseLightNode", "GetCustomUseTemperature");

	Params::UInterchangeBaseLightNode_GetCustomUseTemperature_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeBaseLightNode.GetCustomTemperature
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeBaseLightNode::GetCustomTemperature(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseLightNode", "GetCustomTemperature");

	Params::UInterchangeBaseLightNode_GetCustomTemperature_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeBaseLightNode.GetCustomLightColor
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor                AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeBaseLightNode::GetCustomLightColor(struct FLinearColor* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseLightNode", "GetCustomLightColor");

	Params::UInterchangeBaseLightNode_GetCustomLightColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeBaseLightNode.GetCustomIntensity
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeBaseLightNode::GetCustomIntensity(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseLightNode", "GetCustomIntensity");

	Params::UInterchangeBaseLightNode_GetCustomIntensity_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Class InterchangeNodes.InterchangeLightNode
// (None)

class UClass* UInterchangeLightNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeLightNode");

	return Clss;
}


// InterchangeLightNode InterchangeNodes.Default__InterchangeLightNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeLightNode* UInterchangeLightNode::GetDefaultObj()
{
	static class UInterchangeLightNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeLightNode*>(UInterchangeLightNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeNodes.InterchangeLightNode.SetCustomIntensityUnits
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EInterchangeLightUnits  AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeLightNode::SetCustomIntensityUnits(enum class EInterchangeLightUnits& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeLightNode", "SetCustomIntensityUnits");

	Params::UInterchangeLightNode_SetCustomIntensityUnits_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeLightNode.SetCustomIESTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeLightNode::SetCustomIESTexture(const class FString& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeLightNode", "SetCustomIESTexture");

	Params::UInterchangeLightNode_SetCustomIESTexture_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeLightNode.SetCustomAttenuationRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeLightNode::SetCustomAttenuationRadius(float AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeLightNode", "SetCustomAttenuationRadius");

	Params::UInterchangeLightNode_SetCustomAttenuationRadius_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeLightNode.GetCustomIntensityUnits
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EInterchangeLightUnits  AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeLightNode::GetCustomIntensityUnits(enum class EInterchangeLightUnits* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeLightNode", "GetCustomIntensityUnits");

	Params::UInterchangeLightNode_GetCustomIntensityUnits_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeLightNode.GetCustomIESTexture
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeLightNode::GetCustomIESTexture(class FString* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeLightNode", "GetCustomIESTexture");

	Params::UInterchangeLightNode_GetCustomIESTexture_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeLightNode.GetCustomAttenuationRadius
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeLightNode::GetCustomAttenuationRadius(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeLightNode", "GetCustomAttenuationRadius");

	Params::UInterchangeLightNode_GetCustomAttenuationRadius_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Class InterchangeNodes.InterchangePointLightNode
// (None)

class UClass* UInterchangePointLightNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangePointLightNode");

	return Clss;
}


// InterchangePointLightNode InterchangeNodes.Default__InterchangePointLightNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangePointLightNode* UInterchangePointLightNode::GetDefaultObj()
{
	static class UInterchangePointLightNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangePointLightNode*>(UInterchangePointLightNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeNodes.InterchangePointLightNode.SetCustomUseInverseSquaredFalloff
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangePointLightNode::SetCustomUseInverseSquaredFalloff(bool AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePointLightNode", "SetCustomUseInverseSquaredFalloff");

	Params::UInterchangePointLightNode_SetCustomUseInverseSquaredFalloff_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangePointLightNode.SetCustomLightFalloffExponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangePointLightNode::SetCustomLightFalloffExponent(float AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePointLightNode", "SetCustomLightFalloffExponent");

	Params::UInterchangePointLightNode_SetCustomLightFalloffExponent_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangePointLightNode.GetCustomUseInverseSquaredFalloff
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangePointLightNode::GetCustomUseInverseSquaredFalloff(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePointLightNode", "GetCustomUseInverseSquaredFalloff");

	Params::UInterchangePointLightNode_GetCustomUseInverseSquaredFalloff_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangePointLightNode.GetCustomLightFalloffExponent
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangePointLightNode::GetCustomLightFalloffExponent(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePointLightNode", "GetCustomLightFalloffExponent");

	Params::UInterchangePointLightNode_GetCustomLightFalloffExponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Class InterchangeNodes.InterchangeSpotLightNode
// (None)

class UClass* UInterchangeSpotLightNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeSpotLightNode");

	return Clss;
}


// InterchangeSpotLightNode InterchangeNodes.Default__InterchangeSpotLightNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeSpotLightNode* UInterchangeSpotLightNode::GetDefaultObj()
{
	static class UInterchangeSpotLightNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeSpotLightNode*>(UInterchangeSpotLightNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeNodes.InterchangeSpotLightNode.SetCustomOuterConeAngle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSpotLightNode::SetCustomOuterConeAngle(float AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSpotLightNode", "SetCustomOuterConeAngle");

	Params::UInterchangeSpotLightNode_SetCustomOuterConeAngle_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeSpotLightNode.SetCustomInnerConeAngle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSpotLightNode::SetCustomInnerConeAngle(float AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSpotLightNode", "SetCustomInnerConeAngle");

	Params::UInterchangeSpotLightNode_SetCustomInnerConeAngle_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeSpotLightNode.GetCustomOuterConeAngle
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSpotLightNode::GetCustomOuterConeAngle(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSpotLightNode", "GetCustomOuterConeAngle");

	Params::UInterchangeSpotLightNode_GetCustomOuterConeAngle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeSpotLightNode.GetCustomInnerConeAngle
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSpotLightNode::GetCustomInnerConeAngle(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSpotLightNode", "GetCustomInnerConeAngle");

	Params::UInterchangeSpotLightNode_GetCustomInnerConeAngle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Class InterchangeNodes.InterchangeRectLightNode
// (None)

class UClass* UInterchangeRectLightNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeRectLightNode");

	return Clss;
}


// InterchangeRectLightNode InterchangeNodes.Default__InterchangeRectLightNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeRectLightNode* UInterchangeRectLightNode::GetDefaultObj()
{
	static class UInterchangeRectLightNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeRectLightNode*>(UInterchangeRectLightNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeNodes.InterchangeRectLightNode.SetCustomSourceWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeRectLightNode::SetCustomSourceWidth(float AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeRectLightNode", "SetCustomSourceWidth");

	Params::UInterchangeRectLightNode_SetCustomSourceWidth_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeRectLightNode.SetCustomSourceHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeRectLightNode::SetCustomSourceHeight(float AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeRectLightNode", "SetCustomSourceHeight");

	Params::UInterchangeRectLightNode_SetCustomSourceHeight_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeRectLightNode.GetCustomSourceWidth
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeRectLightNode::GetCustomSourceWidth(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeRectLightNode", "GetCustomSourceWidth");

	Params::UInterchangeRectLightNode_GetCustomSourceWidth_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeRectLightNode.GetCustomSourceHeight
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeRectLightNode::GetCustomSourceHeight(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeRectLightNode", "GetCustomSourceHeight");

	Params::UInterchangeRectLightNode_GetCustomSourceHeight_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Class InterchangeNodes.InterchangeDirectionalLightNode
// (None)

class UClass* UInterchangeDirectionalLightNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeDirectionalLightNode");

	return Clss;
}


// InterchangeDirectionalLightNode InterchangeNodes.Default__InterchangeDirectionalLightNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeDirectionalLightNode* UInterchangeDirectionalLightNode::GetDefaultObj()
{
	static class UInterchangeDirectionalLightNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeDirectionalLightNode*>(UInterchangeDirectionalLightNode::StaticClass()->DefaultObject);

	return Default;
}


// Class InterchangeNodes.InterchangeTextureNode
// (None)

class UClass* UInterchangeTextureNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeTextureNode");

	return Clss;
}


// InterchangeTextureNode InterchangeNodes.Default__InterchangeTextureNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeTextureNode* UInterchangeTextureNode::GetDefaultObj()
{
	static class UInterchangeTextureNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeTextureNode*>(UInterchangeTextureNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeNodes.InterchangeTextureNode.SetPayLoadKey
// (Native, Public, BlueprintCallable)
// Parameters:
// class FString                      PayloadKey                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInterchangeTextureNode::SetPayLoadKey(const class FString& PayloadKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureNode", "SetPayLoadKey");

	Params::UInterchangeTextureNode_SetPayLoadKey_Params Parms{};

	Parms.PayloadKey = PayloadKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function InterchangeNodes.InterchangeTextureNode.SetCustomSRGB
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureNode::SetCustomSRGB(bool& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureNode", "SetCustomSRGB");

	Params::UInterchangeTextureNode_SetCustomSRGB_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeTextureNode.SetCustomFilter
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EInterchangeTextureFilterModeAttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureNode::SetCustomFilter(enum class EInterchangeTextureFilterMode& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureNode", "SetCustomFilter");

	Params::UInterchangeTextureNode_SetCustomFilter_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeTextureNode.SetCustombFlipGreenChannel
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureNode::SetCustombFlipGreenChannel(bool& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureNode", "SetCustombFlipGreenChannel");

	Params::UInterchangeTextureNode_SetCustombFlipGreenChannel_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeTextureNode.GetCustomSRGB
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureNode::GetCustomSRGB(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureNode", "GetCustomSRGB");

	Params::UInterchangeTextureNode_GetCustomSRGB_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeTextureNode.GetCustomFilter
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EInterchangeTextureFilterModeAttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureNode::GetCustomFilter(enum class EInterchangeTextureFilterMode* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureNode", "GetCustomFilter");

	Params::UInterchangeTextureNode_GetCustomFilter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeTextureNode.GetCustombFlipGreenChannel
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureNode::GetCustombFlipGreenChannel(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureNode", "GetCustombFlipGreenChannel");

	Params::UInterchangeTextureNode_GetCustombFlipGreenChannel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Class InterchangeNodes.InterchangeTexture2DArrayNode
// (None)

class UClass* UInterchangeTexture2DArrayNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeTexture2DArrayNode");

	return Clss;
}


// InterchangeTexture2DArrayNode InterchangeNodes.Default__InterchangeTexture2DArrayNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeTexture2DArrayNode* UInterchangeTexture2DArrayNode::GetDefaultObj()
{
	static class UInterchangeTexture2DArrayNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeTexture2DArrayNode*>(UInterchangeTexture2DArrayNode::StaticClass()->DefaultObject);

	return Default;
}


// Class InterchangeNodes.InterchangeTextureCubeArrayNode
// (None)

class UClass* UInterchangeTextureCubeArrayNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeTextureCubeArrayNode");

	return Clss;
}


// InterchangeTextureCubeArrayNode InterchangeNodes.Default__InterchangeTextureCubeArrayNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeTextureCubeArrayNode* UInterchangeTextureCubeArrayNode::GetDefaultObj()
{
	static class UInterchangeTextureCubeArrayNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeTextureCubeArrayNode*>(UInterchangeTextureCubeArrayNode::StaticClass()->DefaultObject);

	return Default;
}


// Class InterchangeNodes.InterchangeTextureCubeNode
// (None)

class UClass* UInterchangeTextureCubeNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeTextureCubeNode");

	return Clss;
}


// InterchangeTextureCubeNode InterchangeNodes.Default__InterchangeTextureCubeNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeTextureCubeNode* UInterchangeTextureCubeNode::GetDefaultObj()
{
	static class UInterchangeTextureCubeNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeTextureCubeNode*>(UInterchangeTextureCubeNode::StaticClass()->DefaultObject);

	return Default;
}


// Class InterchangeNodes.InterchangeTextureLightProfileNode
// (None)

class UClass* UInterchangeTextureLightProfileNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeTextureLightProfileNode");

	return Clss;
}


// InterchangeTextureLightProfileNode InterchangeNodes.Default__InterchangeTextureLightProfileNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeTextureLightProfileNode* UInterchangeTextureLightProfileNode::GetDefaultObj()
{
	static class UInterchangeTextureLightProfileNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeTextureLightProfileNode*>(UInterchangeTextureLightProfileNode::StaticClass()->DefaultObject);

	return Default;
}


// Class InterchangeNodes.InterchangeVariantSetNode
// (None)

class UClass* UInterchangeVariantSetNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeVariantSetNode");

	return Clss;
}


// InterchangeVariantSetNode InterchangeNodes.Default__InterchangeVariantSetNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeVariantSetNode* UInterchangeVariantSetNode::GetDefaultObj()
{
	static class UInterchangeVariantSetNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeVariantSetNode*>(UInterchangeVariantSetNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeNodes.InterchangeVariantSetNode.SetCustomVariantsPayloadKey
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      PayloadKey                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeVariantSetNode::SetCustomVariantsPayloadKey(const class FString& PayloadKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeVariantSetNode", "SetCustomVariantsPayloadKey");

	Params::UInterchangeVariantSetNode_SetCustomVariantsPayloadKey_Params Parms{};

	Parms.PayloadKey = PayloadKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeVariantSetNode.SetCustomDisplayText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeVariantSetNode::SetCustomDisplayText(const class FString& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeVariantSetNode", "SetCustomDisplayText");

	Params::UInterchangeVariantSetNode_SetCustomDisplayText_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeVariantSetNode.RemoveCustomDependencyUid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      DependencyUid                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeVariantSetNode::RemoveCustomDependencyUid(const class FString& DependencyUid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeVariantSetNode", "RemoveCustomDependencyUid");

	Params::UInterchangeVariantSetNode_RemoveCustomDependencyUid_Params Parms{};

	Parms.DependencyUid = DependencyUid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeVariantSetNode.GetCustomVariantsPayloadKey
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      PayloadKey                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeVariantSetNode::GetCustomVariantsPayloadKey(class FString* PayloadKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeVariantSetNode", "GetCustomVariantsPayloadKey");

	Params::UInterchangeVariantSetNode_GetCustomVariantsPayloadKey_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PayloadKey != nullptr)
		*PayloadKey = Parms.PayloadKey;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeVariantSetNode.GetCustomDisplayText
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeVariantSetNode::GetCustomDisplayText(class FString* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeVariantSetNode", "GetCustomDisplayText");

	Params::UInterchangeVariantSetNode_GetCustomDisplayText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeVariantSetNode.GetCustomDependencyUids
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              OutDependencyUids                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UInterchangeVariantSetNode::GetCustomDependencyUids(TArray<class FString>* OutDependencyUids)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeVariantSetNode", "GetCustomDependencyUids");

	Params::UInterchangeVariantSetNode_GetCustomDependencyUids_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutDependencyUids != nullptr)
		*OutDependencyUids = Parms.OutDependencyUids;

}


// Function InterchangeNodes.InterchangeVariantSetNode.GetCustomDependencyUidCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UInterchangeVariantSetNode::GetCustomDependencyUidCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeVariantSetNode", "GetCustomDependencyUidCount");

	Params::UInterchangeVariantSetNode_GetCustomDependencyUidCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeVariantSetNode.GetCustomDependencyUid
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutDependencyUid                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInterchangeVariantSetNode::GetCustomDependencyUid(int32 Index, class FString* OutDependencyUid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeVariantSetNode", "GetCustomDependencyUid");

	Params::UInterchangeVariantSetNode_GetCustomDependencyUid_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutDependencyUid != nullptr)
		*OutDependencyUid = Parms.OutDependencyUid;

}


// Function InterchangeNodes.InterchangeVariantSetNode.AddCustomDependencyUid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      DependencyUid                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeVariantSetNode::AddCustomDependencyUid(const class FString& DependencyUid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeVariantSetNode", "AddCustomDependencyUid");

	Params::UInterchangeVariantSetNode_AddCustomDependencyUid_Params Parms{};

	Parms.DependencyUid = DependencyUid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class InterchangeNodes.InterchangeSceneVariantSetsNode
// (None)

class UClass* UInterchangeSceneVariantSetsNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeSceneVariantSetsNode");

	return Clss;
}


// InterchangeSceneVariantSetsNode InterchangeNodes.Default__InterchangeSceneVariantSetsNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeSceneVariantSetsNode* UInterchangeSceneVariantSetsNode::GetDefaultObj()
{
	static class UInterchangeSceneVariantSetsNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeSceneVariantSetsNode*>(UInterchangeSceneVariantSetsNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeNodes.InterchangeSceneVariantSetsNode.RemoveCustomVariantSetUid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      VariantUid                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSceneVariantSetsNode::RemoveCustomVariantSetUid(const class FString& VariantUid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSceneVariantSetsNode", "RemoveCustomVariantSetUid");

	Params::UInterchangeSceneVariantSetsNode_RemoveCustomVariantSetUid_Params Parms{};

	Parms.VariantUid = VariantUid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeSceneVariantSetsNode.GetCustomVariantSetUids
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              OutVariantUids                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UInterchangeSceneVariantSetsNode::GetCustomVariantSetUids(TArray<class FString>* OutVariantUids)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSceneVariantSetsNode", "GetCustomVariantSetUids");

	Params::UInterchangeSceneVariantSetsNode_GetCustomVariantSetUids_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutVariantUids != nullptr)
		*OutVariantUids = Parms.OutVariantUids;

}


// Function InterchangeNodes.InterchangeSceneVariantSetsNode.GetCustomVariantSetUidCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UInterchangeSceneVariantSetsNode::GetCustomVariantSetUidCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSceneVariantSetsNode", "GetCustomVariantSetUidCount");

	Params::UInterchangeSceneVariantSetsNode_GetCustomVariantSetUidCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeSceneVariantSetsNode.GetCustomVariantSetUid
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutVariantUid                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInterchangeSceneVariantSetsNode::GetCustomVariantSetUid(int32 Index, class FString* OutVariantUid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSceneVariantSetsNode", "GetCustomVariantSetUid");

	Params::UInterchangeSceneVariantSetsNode_GetCustomVariantSetUid_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutVariantUid != nullptr)
		*OutVariantUid = Parms.OutVariantUid;

}


// Function InterchangeNodes.InterchangeSceneVariantSetsNode.AddCustomVariantSetUid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      VariantUid                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSceneVariantSetsNode::AddCustomVariantSetUid(const class FString& VariantUid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSceneVariantSetsNode", "AddCustomVariantSetUid");

	Params::UInterchangeSceneVariantSetsNode_AddCustomVariantSetUid_Params Parms{};

	Parms.VariantUid = VariantUid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class InterchangeNodes.InterchangeVolumeTextureNode
// (None)

class UClass* UInterchangeVolumeTextureNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeVolumeTextureNode");

	return Clss;
}


// InterchangeVolumeTextureNode InterchangeNodes.Default__InterchangeVolumeTextureNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeVolumeTextureNode* UInterchangeVolumeTextureNode::GetDefaultObj()
{
	static class UInterchangeVolumeTextureNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeVolumeTextureNode*>(UInterchangeVolumeTextureNode::StaticClass()->DefaultObject);

	return Default;
}


// Class InterchangeNodes.InterchangeMaterialInstanceNode
// (None)

class UClass* UInterchangeMaterialInstanceNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeMaterialInstanceNode");

	return Clss;
}


// InterchangeMaterialInstanceNode InterchangeNodes.Default__InterchangeMaterialInstanceNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeMaterialInstanceNode* UInterchangeMaterialInstanceNode::GetDefaultObj()
{
	static class UInterchangeMaterialInstanceNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeMaterialInstanceNode*>(UInterchangeMaterialInstanceNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeNodes.InterchangeMaterialInstanceNode.SetCustomParent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialInstanceNode::SetCustomParent(const class FString& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialInstanceNode", "SetCustomParent");

	Params::UInterchangeMaterialInstanceNode_SetCustomParent_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeMaterialInstanceNode.GetVectorParameterValue
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ParameterName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialInstanceNode::GetVectorParameterValue(const class FString& ParameterName, struct FLinearColor* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialInstanceNode", "GetVectorParameterValue");

	Params::UInterchangeMaterialInstanceNode_GetVectorParameterValue_Params Parms{};

	Parms.ParameterName = ParameterName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeMaterialInstanceNode.GetTextureParameterValue
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ParameterName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AttributeValue                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialInstanceNode::GetTextureParameterValue(const class FString& ParameterName, class FString* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialInstanceNode", "GetTextureParameterValue");

	Params::UInterchangeMaterialInstanceNode_GetTextureParameterValue_Params Parms{};

	Parms.ParameterName = ParameterName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeMaterialInstanceNode.GetStaticSwitchParameterValue
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ParameterName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialInstanceNode::GetStaticSwitchParameterValue(const class FString& ParameterName, bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialInstanceNode", "GetStaticSwitchParameterValue");

	Params::UInterchangeMaterialInstanceNode_GetStaticSwitchParameterValue_Params Parms{};

	Parms.ParameterName = ParameterName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeMaterialInstanceNode.GetScalarParameterValue
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ParameterName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialInstanceNode::GetScalarParameterValue(const class FString& ParameterName, float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialInstanceNode", "GetScalarParameterValue");

	Params::UInterchangeMaterialInstanceNode_GetScalarParameterValue_Params Parms{};

	Parms.ParameterName = ParameterName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeMaterialInstanceNode.GetCustomParent
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialInstanceNode::GetCustomParent(class FString* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialInstanceNode", "GetCustomParent");

	Params::UInterchangeMaterialInstanceNode_GetCustomParent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeMaterialInstanceNode.AddVectorParameterValue
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      ParameterName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialInstanceNode::AddVectorParameterValue(const class FString& ParameterName, struct FLinearColor& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialInstanceNode", "AddVectorParameterValue");

	Params::UInterchangeMaterialInstanceNode_AddVectorParameterValue_Params Parms{};

	Parms.ParameterName = ParameterName;
	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeMaterialInstanceNode.AddTextureParameterValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ParameterName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AttributeValue                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialInstanceNode::AddTextureParameterValue(const class FString& ParameterName, const class FString& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialInstanceNode", "AddTextureParameterValue");

	Params::UInterchangeMaterialInstanceNode_AddTextureParameterValue_Params Parms{};

	Parms.ParameterName = ParameterName;
	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeMaterialInstanceNode.AddStaticSwitchParameterValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ParameterName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               AttributeValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialInstanceNode::AddStaticSwitchParameterValue(const class FString& ParameterName, bool AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialInstanceNode", "AddStaticSwitchParameterValue");

	Params::UInterchangeMaterialInstanceNode_AddStaticSwitchParameterValue_Params Parms{};

	Parms.ParameterName = ParameterName;
	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeMaterialInstanceNode.AddScalarParameterValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ParameterName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              AttributeValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialInstanceNode::AddScalarParameterValue(const class FString& ParameterName, float AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialInstanceNode", "AddScalarParameterValue");

	Params::UInterchangeMaterialInstanceNode_AddScalarParameterValue_Params Parms{};

	Parms.ParameterName = ParameterName;
	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class InterchangeNodes.InterchangeMeshNode
// (None)

class UClass* UInterchangeMeshNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeMeshNode");

	return Clss;
}


// InterchangeMeshNode InterchangeNodes.Default__InterchangeMeshNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeMeshNode* UInterchangeMeshNode::GetDefaultObj()
{
	static class UInterchangeMeshNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeMeshNode*>(UInterchangeMeshNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeNodes.InterchangeMeshNode.SetSlotMaterialDependencyUid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      SlotName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      MaterialDependencyUid                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshNode::SetSlotMaterialDependencyUid(const class FString& SlotName, const class FString& MaterialDependencyUid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshNode", "SetSlotMaterialDependencyUid");

	Params::UInterchangeMeshNode_SetSlotMaterialDependencyUid_Params Parms{};

	Parms.SlotName = SlotName;
	Parms.MaterialDependencyUid = MaterialDependencyUid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeMeshNode.SetSkinnedMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsSkinnedMesh                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshNode::SetSkinnedMesh(bool bIsSkinnedMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshNode", "SetSkinnedMesh");

	Params::UInterchangeMeshNode_SetSkinnedMesh_Params Parms{};

	Parms.bIsSkinnedMesh = bIsSkinnedMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeMeshNode.SetSkeletonDependencyUid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      DependencyUid                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshNode::SetSkeletonDependencyUid(const class FString& DependencyUid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshNode", "SetSkeletonDependencyUid");

	Params::UInterchangeMeshNode_SetSkeletonDependencyUid_Params Parms{};

	Parms.DependencyUid = DependencyUid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeMeshNode.SetSceneInstanceUid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      DependencyUid                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshNode::SetSceneInstanceUid(const class FString& DependencyUid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshNode", "SetSceneInstanceUid");

	Params::UInterchangeMeshNode_SetSceneInstanceUid_Params Parms{};

	Parms.DependencyUid = DependencyUid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeMeshNode.SetPayLoadKey
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      PayloadKey                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EInterchangeMeshPayLoadTypePayloadType                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInterchangeMeshNode::SetPayLoadKey(const class FString& PayloadKey, enum class EInterchangeMeshPayLoadType& PayloadType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshNode", "SetPayLoadKey");

	Params::UInterchangeMeshNode_SetPayLoadKey_Params Parms{};

	Parms.PayloadKey = PayloadKey;
	Parms.PayloadType = PayloadType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function InterchangeNodes.InterchangeMeshNode.SetMorphTargetName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      MorphTargetName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshNode::SetMorphTargetName(const class FString& MorphTargetName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshNode", "SetMorphTargetName");

	Params::UInterchangeMeshNode_SetMorphTargetName_Params Parms{};

	Parms.MorphTargetName = MorphTargetName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeMeshNode.SetMorphTargetDependencyUid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      DependencyUid                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshNode::SetMorphTargetDependencyUid(const class FString& DependencyUid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshNode", "SetMorphTargetDependencyUid");

	Params::UInterchangeMeshNode_SetMorphTargetDependencyUid_Params Parms{};

	Parms.DependencyUid = DependencyUid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeMeshNode.SetMorphTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsMorphTarget                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshNode::SetMorphTarget(bool bIsMorphTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshNode", "SetMorphTarget");

	Params::UInterchangeMeshNode_SetMorphTarget_Params Parms{};

	Parms.bIsMorphTarget = bIsMorphTarget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeMeshNode.SetCustomVertexCount
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshNode::SetCustomVertexCount(int32& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshNode", "SetCustomVertexCount");

	Params::UInterchangeMeshNode_SetCustomVertexCount_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeMeshNode.SetCustomUVCount
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshNode::SetCustomUVCount(int32& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshNode", "SetCustomUVCount");

	Params::UInterchangeMeshNode_SetCustomUVCount_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeMeshNode.SetCustomPolygonCount
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshNode::SetCustomPolygonCount(int32& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshNode", "SetCustomPolygonCount");

	Params::UInterchangeMeshNode_SetCustomPolygonCount_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeMeshNode.SetCustomHasVertexTangent
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshNode::SetCustomHasVertexTangent(bool& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshNode", "SetCustomHasVertexTangent");

	Params::UInterchangeMeshNode_SetCustomHasVertexTangent_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeMeshNode.SetCustomHasVertexNormal
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshNode::SetCustomHasVertexNormal(bool& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshNode", "SetCustomHasVertexNormal");

	Params::UInterchangeMeshNode_SetCustomHasVertexNormal_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeMeshNode.SetCustomHasVertexColor
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshNode::SetCustomHasVertexColor(bool& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshNode", "SetCustomHasVertexColor");

	Params::UInterchangeMeshNode_SetCustomHasVertexColor_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeMeshNode.SetCustomHasVertexBinormal
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshNode::SetCustomHasVertexBinormal(bool& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshNode", "SetCustomHasVertexBinormal");

	Params::UInterchangeMeshNode_SetCustomHasVertexBinormal_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeMeshNode.SetCustomHasSmoothGroup
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshNode::SetCustomHasSmoothGroup(bool& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshNode", "SetCustomHasSmoothGroup");

	Params::UInterchangeMeshNode_SetCustomHasSmoothGroup_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeMeshNode.SetCustomBoundingBox
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FBox                        AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshNode::SetCustomBoundingBox(struct FBox& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshNode", "SetCustomBoundingBox");

	Params::UInterchangeMeshNode_SetCustomBoundingBox_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeMeshNode.RemoveSlotMaterialDependencyUid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      SlotName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshNode::RemoveSlotMaterialDependencyUid(const class FString& SlotName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshNode", "RemoveSlotMaterialDependencyUid");

	Params::UInterchangeMeshNode_RemoveSlotMaterialDependencyUid_Params Parms{};

	Parms.SlotName = SlotName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeMeshNode.RemoveSkeletonDependencyUid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      DependencyUid                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshNode::RemoveSkeletonDependencyUid(const class FString& DependencyUid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshNode", "RemoveSkeletonDependencyUid");

	Params::UInterchangeMeshNode_RemoveSkeletonDependencyUid_Params Parms{};

	Parms.DependencyUid = DependencyUid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeMeshNode.RemoveSceneInstanceUid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      DependencyUid                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshNode::RemoveSceneInstanceUid(const class FString& DependencyUid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshNode", "RemoveSceneInstanceUid");

	Params::UInterchangeMeshNode_RemoveSceneInstanceUid_Params Parms{};

	Parms.DependencyUid = DependencyUid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeMeshNode.RemoveMorphTargetDependencyUid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      DependencyUid                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshNode::RemoveMorphTargetDependencyUid(const class FString& DependencyUid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshNode", "RemoveMorphTargetDependencyUid");

	Params::UInterchangeMeshNode_RemoveMorphTargetDependencyUid_Params Parms{};

	Parms.DependencyUid = DependencyUid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeMeshNode.IsSkinnedMesh
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshNode::IsSkinnedMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshNode", "IsSkinnedMesh");

	Params::UInterchangeMeshNode_IsSkinnedMesh_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeMeshNode.IsMorphTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshNode::IsMorphTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshNode", "IsMorphTarget");

	Params::UInterchangeMeshNode_IsMorphTarget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeMeshNode.GetSlotMaterialDependencyUid
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      SlotName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutMaterialDependency                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshNode::GetSlotMaterialDependencyUid(const class FString& SlotName, class FString* OutMaterialDependency)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshNode", "GetSlotMaterialDependencyUid");

	Params::UInterchangeMeshNode_GetSlotMaterialDependencyUid_Params Parms{};

	Parms.SlotName = SlotName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutMaterialDependency != nullptr)
		*OutMaterialDependency = Parms.OutMaterialDependency;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeMeshNode.GetSlotMaterialDependencies
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<class FString, class FString> OutMaterialDependencies                                          (Parm, OutParm, NativeAccessSpecifierPublic)

void UInterchangeMeshNode::GetSlotMaterialDependencies(TMap<class FString, class FString>* OutMaterialDependencies)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshNode", "GetSlotMaterialDependencies");

	Params::UInterchangeMeshNode_GetSlotMaterialDependencies_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutMaterialDependencies != nullptr)
		*OutMaterialDependencies = Parms.OutMaterialDependencies;

}


// Function InterchangeNodes.InterchangeMeshNode.GetSkeletonDependency
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutDependency                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInterchangeMeshNode::GetSkeletonDependency(int32 Index, class FString* OutDependency)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshNode", "GetSkeletonDependency");

	Params::UInterchangeMeshNode_GetSkeletonDependency_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutDependency != nullptr)
		*OutDependency = Parms.OutDependency;

}


// Function InterchangeNodes.InterchangeMeshNode.GetSkeletonDependencies
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              OutDependencies                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UInterchangeMeshNode::GetSkeletonDependencies(TArray<class FString>* OutDependencies)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshNode", "GetSkeletonDependencies");

	Params::UInterchangeMeshNode_GetSkeletonDependencies_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutDependencies != nullptr)
		*OutDependencies = Parms.OutDependencies;

}


// Function InterchangeNodes.InterchangeMeshNode.GetSkeletonDependeciesCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UInterchangeMeshNode::GetSkeletonDependeciesCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshNode", "GetSkeletonDependeciesCount");

	Params::UInterchangeMeshNode_GetSkeletonDependeciesCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeMeshNode.GetSceneInstanceUidsCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UInterchangeMeshNode::GetSceneInstanceUidsCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshNode", "GetSceneInstanceUidsCount");

	Params::UInterchangeMeshNode_GetSceneInstanceUidsCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeMeshNode.GetSceneInstanceUids
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              OutDependencies                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UInterchangeMeshNode::GetSceneInstanceUids(TArray<class FString>* OutDependencies)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshNode", "GetSceneInstanceUids");

	Params::UInterchangeMeshNode_GetSceneInstanceUids_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutDependencies != nullptr)
		*OutDependencies = Parms.OutDependencies;

}


// Function InterchangeNodes.InterchangeMeshNode.GetSceneInstanceUid
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutDependency                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInterchangeMeshNode::GetSceneInstanceUid(int32 Index, class FString* OutDependency)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshNode", "GetSceneInstanceUid");

	Params::UInterchangeMeshNode_GetSceneInstanceUid_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutDependency != nullptr)
		*OutDependency = Parms.OutDependency;

}


// Function InterchangeNodes.InterchangeMeshNode.GetMorphTargetName
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      OutMorphTargetName                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshNode::GetMorphTargetName(class FString* OutMorphTargetName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshNode", "GetMorphTargetName");

	Params::UInterchangeMeshNode_GetMorphTargetName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutMorphTargetName != nullptr)
		*OutMorphTargetName = Parms.OutMorphTargetName;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeMeshNode.GetMorphTargetDependency
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutDependency                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInterchangeMeshNode::GetMorphTargetDependency(int32 Index, class FString* OutDependency)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshNode", "GetMorphTargetDependency");

	Params::UInterchangeMeshNode_GetMorphTargetDependency_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutDependency != nullptr)
		*OutDependency = Parms.OutDependency;

}


// Function InterchangeNodes.InterchangeMeshNode.GetMorphTargetDependencies
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              OutDependencies                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UInterchangeMeshNode::GetMorphTargetDependencies(TArray<class FString>* OutDependencies)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshNode", "GetMorphTargetDependencies");

	Params::UInterchangeMeshNode_GetMorphTargetDependencies_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutDependencies != nullptr)
		*OutDependencies = Parms.OutDependencies;

}


// Function InterchangeNodes.InterchangeMeshNode.GetMorphTargetDependeciesCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UInterchangeMeshNode::GetMorphTargetDependeciesCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshNode", "GetMorphTargetDependeciesCount");

	Params::UInterchangeMeshNode_GetMorphTargetDependeciesCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeMeshNode.GetCustomVertexCount
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshNode::GetCustomVertexCount(int32* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshNode", "GetCustomVertexCount");

	Params::UInterchangeMeshNode_GetCustomVertexCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeMeshNode.GetCustomUVCount
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshNode::GetCustomUVCount(int32* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshNode", "GetCustomUVCount");

	Params::UInterchangeMeshNode_GetCustomUVCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeMeshNode.GetCustomPolygonCount
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshNode::GetCustomPolygonCount(int32* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshNode", "GetCustomPolygonCount");

	Params::UInterchangeMeshNode_GetCustomPolygonCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeMeshNode.GetCustomHasVertexTangent
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshNode::GetCustomHasVertexTangent(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshNode", "GetCustomHasVertexTangent");

	Params::UInterchangeMeshNode_GetCustomHasVertexTangent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeMeshNode.GetCustomHasVertexNormal
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshNode::GetCustomHasVertexNormal(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshNode", "GetCustomHasVertexNormal");

	Params::UInterchangeMeshNode_GetCustomHasVertexNormal_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeMeshNode.GetCustomHasVertexColor
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshNode::GetCustomHasVertexColor(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshNode", "GetCustomHasVertexColor");

	Params::UInterchangeMeshNode_GetCustomHasVertexColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeMeshNode.GetCustomHasVertexBinormal
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshNode::GetCustomHasVertexBinormal(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshNode", "GetCustomHasVertexBinormal");

	Params::UInterchangeMeshNode_GetCustomHasVertexBinormal_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeMeshNode.GetCustomHasSmoothGroup
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshNode::GetCustomHasSmoothGroup(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshNode", "GetCustomHasSmoothGroup");

	Params::UInterchangeMeshNode_GetCustomHasSmoothGroup_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeMeshNode.GetCustomBoundingBox
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FBox                        AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshNode::GetCustomBoundingBox(struct FBox* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshNode", "GetCustomBoundingBox");

	Params::UInterchangeMeshNode_GetCustomBoundingBox_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Class InterchangeNodes.InterchangeSceneNode
// (None)

class UClass* UInterchangeSceneNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeSceneNode");

	return Clss;
}


// InterchangeSceneNode InterchangeNodes.Default__InterchangeSceneNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeSceneNode* UInterchangeSceneNode::GetDefaultObj()
{
	static class UInterchangeSceneNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeSceneNode*>(UInterchangeSceneNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeNodes.InterchangeSceneNode.SetSlotMaterialDependencyUid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      SlotName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      MaterialDependencyUid                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSceneNode::SetSlotMaterialDependencyUid(const class FString& SlotName, const class FString& MaterialDependencyUid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSceneNode", "SetSlotMaterialDependencyUid");

	Params::UInterchangeSceneNode_SetSlotMaterialDependencyUid_Params Parms{};

	Parms.SlotName = SlotName;
	Parms.MaterialDependencyUid = MaterialDependencyUid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeSceneNode.SetMorphTargetCurveWeight
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      MorphTargetName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Weight                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSceneNode::SetMorphTargetCurveWeight(const class FString& MorphTargetName, float& Weight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSceneNode", "SetMorphTargetCurveWeight");

	Params::UInterchangeSceneNode_SetMorphTargetCurveWeight_Params Parms{};

	Parms.MorphTargetName = MorphTargetName;
	Parms.Weight = Weight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeSceneNode.SetCustomTimeZeroLocalTransform
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UInterchangeBaseNodeContainer*BaseNodeContainer                                                (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  AttributeValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bResetCache                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSceneNode::SetCustomTimeZeroLocalTransform(class UInterchangeBaseNodeContainer* BaseNodeContainer, struct FTransform& AttributeValue, bool bResetCache)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSceneNode", "SetCustomTimeZeroLocalTransform");

	Params::UInterchangeSceneNode_SetCustomTimeZeroLocalTransform_Params Parms{};

	Parms.BaseNodeContainer = BaseNodeContainer;
	Parms.AttributeValue = AttributeValue;
	Parms.bResetCache = bResetCache;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeSceneNode.SetCustomLocalTransform
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UInterchangeBaseNodeContainer*BaseNodeContainer                                                (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  AttributeValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bResetCache                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSceneNode::SetCustomLocalTransform(class UInterchangeBaseNodeContainer* BaseNodeContainer, struct FTransform& AttributeValue, bool bResetCache)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSceneNode", "SetCustomLocalTransform");

	Params::UInterchangeSceneNode_SetCustomLocalTransform_Params Parms{};

	Parms.BaseNodeContainer = BaseNodeContainer;
	Parms.AttributeValue = AttributeValue;
	Parms.bResetCache = bResetCache;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeSceneNode.SetCustomGeometricTransform
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  AttributeValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSceneNode::SetCustomGeometricTransform(struct FTransform& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSceneNode", "SetCustomGeometricTransform");

	Params::UInterchangeSceneNode_SetCustomGeometricTransform_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeSceneNode.SetCustomBindPoseLocalTransform
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UInterchangeBaseNodeContainer*BaseNodeContainer                                                (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  AttributeValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bResetCache                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSceneNode::SetCustomBindPoseLocalTransform(class UInterchangeBaseNodeContainer* BaseNodeContainer, struct FTransform& AttributeValue, bool bResetCache)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSceneNode", "SetCustomBindPoseLocalTransform");

	Params::UInterchangeSceneNode_SetCustomBindPoseLocalTransform_Params Parms{};

	Parms.BaseNodeContainer = BaseNodeContainer;
	Parms.AttributeValue = AttributeValue;
	Parms.bResetCache = bResetCache;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeSceneNode.SetCustomAssetInstanceUid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSceneNode::SetCustomAssetInstanceUid(const class FString& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSceneNode", "SetCustomAssetInstanceUid");

	Params::UInterchangeSceneNode_SetCustomAssetInstanceUid_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeSceneNode.SetCustomAnimationAssetUidToPlay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSceneNode::SetCustomAnimationAssetUidToPlay(const class FString& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSceneNode", "SetCustomAnimationAssetUidToPlay");

	Params::UInterchangeSceneNode_SetCustomAnimationAssetUidToPlay_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeSceneNode.RemoveSpecializedType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      SpecializedType                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSceneNode::RemoveSpecializedType(const class FString& SpecializedType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSceneNode", "RemoveSpecializedType");

	Params::UInterchangeSceneNode_RemoveSpecializedType_Params Parms{};

	Parms.SpecializedType = SpecializedType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeSceneNode.RemoveSlotMaterialDependencyUid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      SlotName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSceneNode::RemoveSlotMaterialDependencyUid(const class FString& SlotName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSceneNode", "RemoveSlotMaterialDependencyUid");

	Params::UInterchangeSceneNode_RemoveSlotMaterialDependencyUid_Params Parms{};

	Parms.SlotName = SlotName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeSceneNode.IsSpecializedTypeContains
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      SpecializedType                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSceneNode::IsSpecializedTypeContains(const class FString& SpecializedType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSceneNode", "IsSpecializedTypeContains");

	Params::UInterchangeSceneNode_IsSpecializedTypeContains_Params Parms{};

	Parms.SpecializedType = SpecializedType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeSceneNode.GetSpecializedTypes
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              OutSpecializedTypes                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UInterchangeSceneNode::GetSpecializedTypes(TArray<class FString>* OutSpecializedTypes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSceneNode", "GetSpecializedTypes");

	Params::UInterchangeSceneNode_GetSpecializedTypes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutSpecializedTypes != nullptr)
		*OutSpecializedTypes = Parms.OutSpecializedTypes;

}


// Function InterchangeNodes.InterchangeSceneNode.GetSpecializedTypeCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UInterchangeSceneNode::GetSpecializedTypeCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSceneNode", "GetSpecializedTypeCount");

	Params::UInterchangeSceneNode_GetSpecializedTypeCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeSceneNode.GetSpecializedType
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutSpecializedType                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInterchangeSceneNode::GetSpecializedType(int32 Index, class FString* OutSpecializedType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSceneNode", "GetSpecializedType");

	Params::UInterchangeSceneNode_GetSpecializedType_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutSpecializedType != nullptr)
		*OutSpecializedType = Parms.OutSpecializedType;

}


// Function InterchangeNodes.InterchangeSceneNode.GetSlotMaterialDependencyUid
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      SlotName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutMaterialDependency                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSceneNode::GetSlotMaterialDependencyUid(const class FString& SlotName, class FString* OutMaterialDependency)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSceneNode", "GetSlotMaterialDependencyUid");

	Params::UInterchangeSceneNode_GetSlotMaterialDependencyUid_Params Parms{};

	Parms.SlotName = SlotName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutMaterialDependency != nullptr)
		*OutMaterialDependency = Parms.OutMaterialDependency;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeSceneNode.GetSlotMaterialDependencies
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<class FString, class FString> OutMaterialDependencies                                          (Parm, OutParm, NativeAccessSpecifierPublic)

void UInterchangeSceneNode::GetSlotMaterialDependencies(TMap<class FString, class FString>* OutMaterialDependencies)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSceneNode", "GetSlotMaterialDependencies");

	Params::UInterchangeSceneNode_GetSlotMaterialDependencies_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutMaterialDependencies != nullptr)
		*OutMaterialDependencies = Parms.OutMaterialDependencies;

}


// Function InterchangeNodes.InterchangeSceneNode.GetMorphTargetCurveWeights
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<class FString, float>         OutMorphTargetCurveWeights                                       (Parm, OutParm, NativeAccessSpecifierPublic)

void UInterchangeSceneNode::GetMorphTargetCurveWeights(TMap<class FString, float>* OutMorphTargetCurveWeights)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSceneNode", "GetMorphTargetCurveWeights");

	Params::UInterchangeSceneNode_GetMorphTargetCurveWeights_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutMorphTargetCurveWeights != nullptr)
		*OutMorphTargetCurveWeights = Parms.OutMorphTargetCurveWeights;

}


// Function InterchangeNodes.InterchangeSceneNode.GetCustomTimeZeroLocalTransform
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform                  AttributeValue                                                   (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSceneNode::GetCustomTimeZeroLocalTransform(struct FTransform* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSceneNode", "GetCustomTimeZeroLocalTransform");

	Params::UInterchangeSceneNode_GetCustomTimeZeroLocalTransform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeSceneNode.GetCustomTimeZeroGlobalTransform
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInterchangeBaseNodeContainer*BaseNodeContainer                                                (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  GlobalOffsetTransform                                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  AttributeValue                                                   (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForceRecache                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSceneNode::GetCustomTimeZeroGlobalTransform(class UInterchangeBaseNodeContainer* BaseNodeContainer, struct FTransform& GlobalOffsetTransform, struct FTransform* AttributeValue, bool bForceRecache)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSceneNode", "GetCustomTimeZeroGlobalTransform");

	Params::UInterchangeSceneNode_GetCustomTimeZeroGlobalTransform_Params Parms{};

	Parms.BaseNodeContainer = BaseNodeContainer;
	Parms.GlobalOffsetTransform = GlobalOffsetTransform;
	Parms.bForceRecache = bForceRecache;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeSceneNode.GetCustomLocalTransform
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform                  AttributeValue                                                   (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSceneNode::GetCustomLocalTransform(struct FTransform* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSceneNode", "GetCustomLocalTransform");

	Params::UInterchangeSceneNode_GetCustomLocalTransform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeSceneNode.GetCustomGlobalTransform
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInterchangeBaseNodeContainer*BaseNodeContainer                                                (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  GlobalOffsetTransform                                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  AttributeValue                                                   (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForceRecache                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSceneNode::GetCustomGlobalTransform(class UInterchangeBaseNodeContainer* BaseNodeContainer, struct FTransform& GlobalOffsetTransform, struct FTransform* AttributeValue, bool bForceRecache)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSceneNode", "GetCustomGlobalTransform");

	Params::UInterchangeSceneNode_GetCustomGlobalTransform_Params Parms{};

	Parms.BaseNodeContainer = BaseNodeContainer;
	Parms.GlobalOffsetTransform = GlobalOffsetTransform;
	Parms.bForceRecache = bForceRecache;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeSceneNode.GetCustomGeometricTransform
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform                  AttributeValue                                                   (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSceneNode::GetCustomGeometricTransform(struct FTransform* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSceneNode", "GetCustomGeometricTransform");

	Params::UInterchangeSceneNode_GetCustomGeometricTransform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeSceneNode.GetCustomBindPoseLocalTransform
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform                  AttributeValue                                                   (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSceneNode::GetCustomBindPoseLocalTransform(struct FTransform* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSceneNode", "GetCustomBindPoseLocalTransform");

	Params::UInterchangeSceneNode_GetCustomBindPoseLocalTransform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeSceneNode.GetCustomBindPoseGlobalTransform
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInterchangeBaseNodeContainer*BaseNodeContainer                                                (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  GlobalOffsetTransform                                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  AttributeValue                                                   (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForceRecache                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSceneNode::GetCustomBindPoseGlobalTransform(class UInterchangeBaseNodeContainer* BaseNodeContainer, struct FTransform& GlobalOffsetTransform, struct FTransform* AttributeValue, bool bForceRecache)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSceneNode", "GetCustomBindPoseGlobalTransform");

	Params::UInterchangeSceneNode_GetCustomBindPoseGlobalTransform_Params Parms{};

	Parms.BaseNodeContainer = BaseNodeContainer;
	Parms.GlobalOffsetTransform = GlobalOffsetTransform;
	Parms.bForceRecache = bForceRecache;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeSceneNode.GetCustomAssetInstanceUid
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSceneNode::GetCustomAssetInstanceUid(class FString* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSceneNode", "GetCustomAssetInstanceUid");

	Params::UInterchangeSceneNode_GetCustomAssetInstanceUid_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeSceneNode.GetCustomAnimationAssetUidToPlay
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSceneNode::GetCustomAnimationAssetUidToPlay(class FString* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSceneNode", "GetCustomAnimationAssetUidToPlay");

	Params::UInterchangeSceneNode_GetCustomAnimationAssetUidToPlay_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeSceneNode.AddSpecializedType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      SpecializedType                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSceneNode::AddSpecializedType(const class FString& SpecializedType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSceneNode", "AddSpecializedType");

	Params::UInterchangeSceneNode_AddSpecializedType_Params Parms{};

	Parms.SpecializedType = SpecializedType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class InterchangeNodes.InterchangeShaderPortsAPI
// (None)

class UClass* UInterchangeShaderPortsAPI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeShaderPortsAPI");

	return Clss;
}


// InterchangeShaderPortsAPI InterchangeNodes.Default__InterchangeShaderPortsAPI
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeShaderPortsAPI* UInterchangeShaderPortsAPI::GetDefaultObj()
{
	static class UInterchangeShaderPortsAPI* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeShaderPortsAPI*>(UInterchangeShaderPortsAPI::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeNodes.InterchangeShaderPortsAPI.MakeInputValueKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InputName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UInterchangeShaderPortsAPI::MakeInputValueKey(const class FString& InputName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeShaderPortsAPI", "MakeInputValueKey");

	Params::UInterchangeShaderPortsAPI_MakeInputValueKey_Params Parms{};

	Parms.InputName = InputName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeShaderPortsAPI.MakeInputName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InputKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UInterchangeShaderPortsAPI::MakeInputName(const class FString& InputKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeShaderPortsAPI", "MakeInputName");

	Params::UInterchangeShaderPortsAPI_MakeInputName_Params Parms{};

	Parms.InputKey = InputKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeShaderPortsAPI.MakeInputConnectionKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InputName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UInterchangeShaderPortsAPI::MakeInputConnectionKey(const class FString& InputName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeShaderPortsAPI", "MakeInputConnectionKey");

	Params::UInterchangeShaderPortsAPI_MakeInputConnectionKey_Params Parms{};

	Parms.InputName = InputName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeShaderPortsAPI.IsAnInput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AttributeKey                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeShaderPortsAPI::IsAnInput(const class FString& AttributeKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeShaderPortsAPI", "IsAnInput");

	Params::UInterchangeShaderPortsAPI_IsAnInput_Params Parms{};

	Parms.AttributeKey = AttributeKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeShaderPortsAPI.HasInput
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UInterchangeBaseNode*        InterchangeNode                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InInputName                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeShaderPortsAPI::HasInput(class UInterchangeBaseNode* InterchangeNode, class FName& InInputName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeShaderPortsAPI", "HasInput");

	Params::UInterchangeShaderPortsAPI_HasInput_Params Parms{};

	Parms.InterchangeNode = InterchangeNode;
	Parms.InInputName = InInputName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeShaderPortsAPI.GetInputConnection
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UInterchangeBaseNode*        InterchangeNode                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InputName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutExpressionUid                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutputName                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeShaderPortsAPI::GetInputConnection(class UInterchangeBaseNode* InterchangeNode, const class FString& InputName, class FString* OutExpressionUid, class FString* OutputName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeShaderPortsAPI", "GetInputConnection");

	Params::UInterchangeShaderPortsAPI_GetInputConnection_Params Parms{};

	Parms.InterchangeNode = InterchangeNode;
	Parms.InputName = InputName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutExpressionUid != nullptr)
		*OutExpressionUid = Parms.OutExpressionUid;

	if (OutputName != nullptr)
		*OutputName = Parms.OutputName;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeShaderPortsAPI.GatherInputs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UInterchangeBaseNode*        InterchangeNode                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              OutInputNames                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UInterchangeShaderPortsAPI::GatherInputs(class UInterchangeBaseNode* InterchangeNode, TArray<class FString>* OutInputNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeShaderPortsAPI", "GatherInputs");

	Params::UInterchangeShaderPortsAPI_GatherInputs_Params Parms{};

	Parms.InterchangeNode = InterchangeNode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutInputNames != nullptr)
		*OutInputNames = Parms.OutInputNames;

}


// Function InterchangeNodes.InterchangeShaderPortsAPI.ConnectOuputToInputByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UInterchangeBaseNode*        InterchangeNode                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InputName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ExpressionUid                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutputName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeShaderPortsAPI::ConnectOuputToInputByName(class UInterchangeBaseNode* InterchangeNode, const class FString& InputName, const class FString& ExpressionUid, const class FString& OutputName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeShaderPortsAPI", "ConnectOuputToInputByName");

	Params::UInterchangeShaderPortsAPI_ConnectOuputToInputByName_Params Parms{};

	Parms.InterchangeNode = InterchangeNode;
	Parms.InputName = InputName;
	Parms.ExpressionUid = ExpressionUid;
	Parms.OutputName = OutputName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeShaderPortsAPI.ConnectOuputToInputByIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UInterchangeBaseNode*        InterchangeNode                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InputName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ExpressionUid                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OutputIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeShaderPortsAPI::ConnectOuputToInputByIndex(class UInterchangeBaseNode* InterchangeNode, const class FString& InputName, const class FString& ExpressionUid, int32 OutputIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeShaderPortsAPI", "ConnectOuputToInputByIndex");

	Params::UInterchangeShaderPortsAPI_ConnectOuputToInputByIndex_Params Parms{};

	Parms.InterchangeNode = InterchangeNode;
	Parms.InputName = InputName;
	Parms.ExpressionUid = ExpressionUid;
	Parms.OutputIndex = OutputIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeShaderPortsAPI.ConnectDefaultOuputToInput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UInterchangeBaseNode*        InterchangeNode                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InputName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ExpressionUid                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeShaderPortsAPI::ConnectDefaultOuputToInput(class UInterchangeBaseNode* InterchangeNode, const class FString& InputName, const class FString& ExpressionUid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeShaderPortsAPI", "ConnectDefaultOuputToInput");

	Params::UInterchangeShaderPortsAPI_ConnectDefaultOuputToInput_Params Parms{};

	Parms.InterchangeNode = InterchangeNode;
	Parms.InputName = InputName;
	Parms.ExpressionUid = ExpressionUid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class InterchangeNodes.InterchangeShaderNode
// (None)

class UClass* UInterchangeShaderNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeShaderNode");

	return Clss;
}


// InterchangeShaderNode InterchangeNodes.Default__InterchangeShaderNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeShaderNode* UInterchangeShaderNode::GetDefaultObj()
{
	static class UInterchangeShaderNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeShaderNode*>(UInterchangeShaderNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeNodes.InterchangeShaderNode.SetCustomShaderType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeShaderNode::SetCustomShaderType(const class FString& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeShaderNode", "SetCustomShaderType");

	Params::UInterchangeShaderNode_SetCustomShaderType_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeShaderNode.GetCustomShaderType
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeShaderNode::GetCustomShaderType(class FString* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeShaderNode", "GetCustomShaderType");

	Params::UInterchangeShaderNode_GetCustomShaderType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Class InterchangeNodes.InterchangeFunctionCallShaderNode
// (None)

class UClass* UInterchangeFunctionCallShaderNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeFunctionCallShaderNode");

	return Clss;
}


// InterchangeFunctionCallShaderNode InterchangeNodes.Default__InterchangeFunctionCallShaderNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeFunctionCallShaderNode* UInterchangeFunctionCallShaderNode::GetDefaultObj()
{
	static class UInterchangeFunctionCallShaderNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeFunctionCallShaderNode*>(UInterchangeFunctionCallShaderNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeNodes.InterchangeFunctionCallShaderNode.SetCustomMaterialFunction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeFunctionCallShaderNode::SetCustomMaterialFunction(const class FString& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeFunctionCallShaderNode", "SetCustomMaterialFunction");

	Params::UInterchangeFunctionCallShaderNode_SetCustomMaterialFunction_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeFunctionCallShaderNode.GetCustomMaterialFunction
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeFunctionCallShaderNode::GetCustomMaterialFunction(class FString* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeFunctionCallShaderNode", "GetCustomMaterialFunction");

	Params::UInterchangeFunctionCallShaderNode_GetCustomMaterialFunction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Class InterchangeNodes.InterchangeShaderGraphNode
// (None)

class UClass* UInterchangeShaderGraphNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeShaderGraphNode");

	return Clss;
}


// InterchangeShaderGraphNode InterchangeNodes.Default__InterchangeShaderGraphNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeShaderGraphNode* UInterchangeShaderGraphNode::GetDefaultObj()
{
	static class UInterchangeShaderGraphNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeShaderGraphNode*>(UInterchangeShaderGraphNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeNodes.InterchangeShaderGraphNode.SetCustomTwoSidedTransmission
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeShaderGraphNode::SetCustomTwoSidedTransmission(bool& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeShaderGraphNode", "SetCustomTwoSidedTransmission");

	Params::UInterchangeShaderGraphNode_SetCustomTwoSidedTransmission_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeShaderGraphNode.SetCustomTwoSided
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeShaderGraphNode::SetCustomTwoSided(bool& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeShaderGraphNode", "SetCustomTwoSided");

	Params::UInterchangeShaderGraphNode_SetCustomTwoSided_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeShaderGraphNode.SetCustomScreenSpaceReflections
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeShaderGraphNode::SetCustomScreenSpaceReflections(bool& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeShaderGraphNode", "SetCustomScreenSpaceReflections");

	Params::UInterchangeShaderGraphNode_SetCustomScreenSpaceReflections_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeShaderGraphNode.SetCustomOpacityMaskClipValue
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeShaderGraphNode::SetCustomOpacityMaskClipValue(float& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeShaderGraphNode", "SetCustomOpacityMaskClipValue");

	Params::UInterchangeShaderGraphNode_SetCustomOpacityMaskClipValue_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeShaderGraphNode.SetCustomIsAShaderFunction
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeShaderGraphNode::SetCustomIsAShaderFunction(bool& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeShaderGraphNode", "SetCustomIsAShaderFunction");

	Params::UInterchangeShaderGraphNode_SetCustomIsAShaderFunction_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeShaderGraphNode.GetCustomTwoSidedTransmission
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeShaderGraphNode::GetCustomTwoSidedTransmission(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeShaderGraphNode", "GetCustomTwoSidedTransmission");

	Params::UInterchangeShaderGraphNode_GetCustomTwoSidedTransmission_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeShaderGraphNode.GetCustomTwoSided
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeShaderGraphNode::GetCustomTwoSided(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeShaderGraphNode", "GetCustomTwoSided");

	Params::UInterchangeShaderGraphNode_GetCustomTwoSided_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeShaderGraphNode.GetCustomScreenSpaceReflections
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeShaderGraphNode::GetCustomScreenSpaceReflections(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeShaderGraphNode", "GetCustomScreenSpaceReflections");

	Params::UInterchangeShaderGraphNode_GetCustomScreenSpaceReflections_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeShaderGraphNode.GetCustomOpacityMaskClipValue
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeShaderGraphNode::GetCustomOpacityMaskClipValue(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeShaderGraphNode", "GetCustomOpacityMaskClipValue");

	Params::UInterchangeShaderGraphNode_GetCustomOpacityMaskClipValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeShaderGraphNode.GetCustomIsAShaderFunction
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeShaderGraphNode::GetCustomIsAShaderFunction(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeShaderGraphNode", "GetCustomIsAShaderFunction");

	Params::UInterchangeShaderGraphNode_GetCustomIsAShaderFunction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Class InterchangeNodes.InterchangeTexture2DNode
// (None)

class UClass* UInterchangeTexture2DNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeTexture2DNode");

	return Clss;
}


// InterchangeTexture2DNode InterchangeNodes.Default__InterchangeTexture2DNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeTexture2DNode* UInterchangeTexture2DNode::GetDefaultObj()
{
	static class UInterchangeTexture2DNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeTexture2DNode*>(UInterchangeTexture2DNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeNodes.InterchangeTexture2DNode.SetCustomWrapV
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EInterchangeTextureWrapModeAttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTexture2DNode::SetCustomWrapV(enum class EInterchangeTextureWrapMode& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTexture2DNode", "SetCustomWrapV");

	Params::UInterchangeTexture2DNode_SetCustomWrapV_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeTexture2DNode.SetCustomWrapU
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EInterchangeTextureWrapModeAttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTexture2DNode::SetCustomWrapU(enum class EInterchangeTextureWrapMode& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTexture2DNode", "SetCustomWrapU");

	Params::UInterchangeTexture2DNode_SetCustomWrapU_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeTexture2DNode.GetSourceBlocks
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<int32, class FString>         ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

TMap<int32, class FString> UInterchangeTexture2DNode::GetSourceBlocks()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTexture2DNode", "GetSourceBlocks");

	Params::UInterchangeTexture2DNode_GetSourceBlocks_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeTexture2DNode.GetCustomWrapV
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EInterchangeTextureWrapModeAttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTexture2DNode::GetCustomWrapV(enum class EInterchangeTextureWrapMode* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTexture2DNode", "GetCustomWrapV");

	Params::UInterchangeTexture2DNode_GetCustomWrapV_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeNodes.InterchangeTexture2DNode.GetCustomWrapU
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EInterchangeTextureWrapModeAttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTexture2DNode::GetCustomWrapU(enum class EInterchangeTextureWrapMode* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTexture2DNode", "GetCustomWrapU");

	Params::UInterchangeTexture2DNode_GetCustomWrapU_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Class InterchangeNodes.InterchangeTextureBlurNode
// (None)

class UClass* UInterchangeTextureBlurNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeTextureBlurNode");

	return Clss;
}


// InterchangeTextureBlurNode InterchangeNodes.Default__InterchangeTextureBlurNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeTextureBlurNode* UInterchangeTextureBlurNode::GetDefaultObj()
{
	static class UInterchangeTextureBlurNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeTextureBlurNode*>(UInterchangeTextureBlurNode::StaticClass()->DefaultObject);

	return Default;
}

}


