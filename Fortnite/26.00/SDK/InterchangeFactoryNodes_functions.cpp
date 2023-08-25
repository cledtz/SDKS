#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class InterchangeFactoryNodes.InterchangeAnimationTrackSetFactoryNode
// (None)

class UClass* UInterchangeAnimationTrackSetFactoryNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeAnimationTrackSetFactoryNode");

	return Clss;
}


// InterchangeAnimationTrackSetFactoryNode InterchangeFactoryNodes.Default__InterchangeAnimationTrackSetFactoryNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeAnimationTrackSetFactoryNode* UInterchangeAnimationTrackSetFactoryNode::GetDefaultObj()
{
	static class UInterchangeAnimationTrackSetFactoryNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeAnimationTrackSetFactoryNode*>(UInterchangeAnimationTrackSetFactoryNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeFactoryNodes.InterchangeAnimationTrackSetFactoryNode.SetCustomFrameRate
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimationTrackSetFactoryNode::SetCustomFrameRate(float& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimationTrackSetFactoryNode", "SetCustomFrameRate");

	Params::UInterchangeAnimationTrackSetFactoryNode_SetCustomFrameRate_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeAnimationTrackSetFactoryNode.RemoveCustomAnimationTrackUid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationTrackUid                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimationTrackSetFactoryNode::RemoveCustomAnimationTrackUid(const class FString& AnimationTrackUid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimationTrackSetFactoryNode", "RemoveCustomAnimationTrackUid");

	Params::UInterchangeAnimationTrackSetFactoryNode_RemoveCustomAnimationTrackUid_Params Parms{};

	Parms.AnimationTrackUid = AnimationTrackUid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeAnimationTrackSetFactoryNode.GetObjectClass
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UClass* UInterchangeAnimationTrackSetFactoryNode::GetObjectClass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimationTrackSetFactoryNode", "GetObjectClass");

	Params::UInterchangeAnimationTrackSetFactoryNode_GetObjectClass_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeAnimationTrackSetFactoryNode.GetCustomFrameRate
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimationTrackSetFactoryNode::GetCustomFrameRate(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimationTrackSetFactoryNode", "GetCustomFrameRate");

	Params::UInterchangeAnimationTrackSetFactoryNode_GetCustomFrameRate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeAnimationTrackSetFactoryNode.GetCustomAnimationTrackUids
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              OutAnimationTrackUids                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UInterchangeAnimationTrackSetFactoryNode::GetCustomAnimationTrackUids(TArray<class FString>* OutAnimationTrackUids)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimationTrackSetFactoryNode", "GetCustomAnimationTrackUids");

	Params::UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUids_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutAnimationTrackUids != nullptr)
		*OutAnimationTrackUids = Parms.OutAnimationTrackUids;

}


// Function InterchangeFactoryNodes.InterchangeAnimationTrackSetFactoryNode.GetCustomAnimationTrackUidCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UInterchangeAnimationTrackSetFactoryNode::GetCustomAnimationTrackUidCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimationTrackSetFactoryNode", "GetCustomAnimationTrackUidCount");

	Params::UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUidCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeAnimationTrackSetFactoryNode.GetCustomAnimationTrackUid
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutAnimationTrackUid                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInterchangeAnimationTrackSetFactoryNode::GetCustomAnimationTrackUid(int32 Index, class FString* OutAnimationTrackUid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimationTrackSetFactoryNode", "GetCustomAnimationTrackUid");

	Params::UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUid_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutAnimationTrackUid != nullptr)
		*OutAnimationTrackUid = Parms.OutAnimationTrackUid;

}


// Function InterchangeFactoryNodes.InterchangeAnimationTrackSetFactoryNode.AddCustomAnimationTrackUid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationTrackUid                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimationTrackSetFactoryNode::AddCustomAnimationTrackUid(const class FString& AnimationTrackUid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimationTrackSetFactoryNode", "AddCustomAnimationTrackUid");

	Params::UInterchangeAnimationTrackSetFactoryNode_AddCustomAnimationTrackUid_Params Parms{};

	Parms.AnimationTrackUid = AnimationTrackUid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class InterchangeFactoryNodes.InterchangeActorFactoryNode
// (None)

class UClass* UInterchangeActorFactoryNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeActorFactoryNode");

	return Clss;
}


// InterchangeActorFactoryNode InterchangeFactoryNodes.Default__InterchangeActorFactoryNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeActorFactoryNode* UInterchangeActorFactoryNode::GetDefaultObj()
{
	static class UInterchangeActorFactoryNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeActorFactoryNode*>(UInterchangeActorFactoryNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeFactoryNodes.InterchangeActorFactoryNode.SetCustomMobility
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// uint8                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeActorFactoryNode::SetCustomMobility(uint8& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeActorFactoryNode", "SetCustomMobility");

	Params::UInterchangeActorFactoryNode_SetCustomMobility_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeActorFactoryNode.SetCustomGlobalTransform
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  AttributeValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeActorFactoryNode::SetCustomGlobalTransform(struct FTransform& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeActorFactoryNode", "SetCustomGlobalTransform");

	Params::UInterchangeActorFactoryNode_SetCustomGlobalTransform_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeActorFactoryNode.SetCustomActorClassName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeActorFactoryNode::SetCustomActorClassName(const class FString& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeActorFactoryNode", "SetCustomActorClassName");

	Params::UInterchangeActorFactoryNode_SetCustomActorClassName_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeActorFactoryNode.GetCustomMobility
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// uint8                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeActorFactoryNode::GetCustomMobility(uint8* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeActorFactoryNode", "GetCustomMobility");

	Params::UInterchangeActorFactoryNode_GetCustomMobility_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeActorFactoryNode.GetCustomGlobalTransform
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform                  AttributeValue                                                   (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeActorFactoryNode::GetCustomGlobalTransform(struct FTransform* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeActorFactoryNode", "GetCustomGlobalTransform");

	Params::UInterchangeActorFactoryNode_GetCustomGlobalTransform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeActorFactoryNode.GetCustomActorClassName
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeActorFactoryNode::GetCustomActorClassName(class FString* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeActorFactoryNode", "GetCustomActorClassName");

	Params::UInterchangeActorFactoryNode_GetCustomActorClassName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Class InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode
// (None)

class UClass* UInterchangePhysicalCameraFactoryNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangePhysicalCameraFactoryNode");

	return Clss;
}


// InterchangePhysicalCameraFactoryNode InterchangeFactoryNodes.Default__InterchangePhysicalCameraFactoryNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangePhysicalCameraFactoryNode* UInterchangePhysicalCameraFactoryNode::GetDefaultObj()
{
	static class UInterchangePhysicalCameraFactoryNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangePhysicalCameraFactoryNode*>(UInterchangePhysicalCameraFactoryNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.SetCustomSensorWidth
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangePhysicalCameraFactoryNode::SetCustomSensorWidth(float& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePhysicalCameraFactoryNode", "SetCustomSensorWidth");

	Params::UInterchangePhysicalCameraFactoryNode_SetCustomSensorWidth_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.SetCustomSensorHeight
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangePhysicalCameraFactoryNode::SetCustomSensorHeight(float& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePhysicalCameraFactoryNode", "SetCustomSensorHeight");

	Params::UInterchangePhysicalCameraFactoryNode_SetCustomSensorHeight_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.SetCustomFocusMethod
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class ECameraFocusMethod      AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangePhysicalCameraFactoryNode::SetCustomFocusMethod(enum class ECameraFocusMethod& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePhysicalCameraFactoryNode", "SetCustomFocusMethod");

	Params::UInterchangePhysicalCameraFactoryNode_SetCustomFocusMethod_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.SetCustomFocalLength
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangePhysicalCameraFactoryNode::SetCustomFocalLength(float& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePhysicalCameraFactoryNode", "SetCustomFocalLength");

	Params::UInterchangePhysicalCameraFactoryNode_SetCustomFocalLength_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.GetCustomSensorWidth
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangePhysicalCameraFactoryNode::GetCustomSensorWidth(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePhysicalCameraFactoryNode", "GetCustomSensorWidth");

	Params::UInterchangePhysicalCameraFactoryNode_GetCustomSensorWidth_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.GetCustomSensorHeight
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangePhysicalCameraFactoryNode::GetCustomSensorHeight(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePhysicalCameraFactoryNode", "GetCustomSensorHeight");

	Params::UInterchangePhysicalCameraFactoryNode_GetCustomSensorHeight_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.GetCustomFocusMethod
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ECameraFocusMethod      AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangePhysicalCameraFactoryNode::GetCustomFocusMethod(enum class ECameraFocusMethod* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePhysicalCameraFactoryNode", "GetCustomFocusMethod");

	Params::UInterchangePhysicalCameraFactoryNode_GetCustomFocusMethod_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.GetCustomFocalLength
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangePhysicalCameraFactoryNode::GetCustomFocalLength(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePhysicalCameraFactoryNode", "GetCustomFocalLength");

	Params::UInterchangePhysicalCameraFactoryNode_GetCustomFocalLength_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Class InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode
// (None)

class UClass* UInterchangeStandardCameraFactoryNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeStandardCameraFactoryNode");

	return Clss;
}


// InterchangeStandardCameraFactoryNode InterchangeFactoryNodes.Default__InterchangeStandardCameraFactoryNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeStandardCameraFactoryNode* UInterchangeStandardCameraFactoryNode::GetDefaultObj()
{
	static class UInterchangeStandardCameraFactoryNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeStandardCameraFactoryNode*>(UInterchangeStandardCameraFactoryNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.SetCustomWidth
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStandardCameraFactoryNode::SetCustomWidth(float& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStandardCameraFactoryNode", "SetCustomWidth");

	Params::UInterchangeStandardCameraFactoryNode_SetCustomWidth_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.SetCustomProjectionMode
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class ECameraProjectionMode   AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStandardCameraFactoryNode::SetCustomProjectionMode(enum class ECameraProjectionMode& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStandardCameraFactoryNode", "SetCustomProjectionMode");

	Params::UInterchangeStandardCameraFactoryNode_SetCustomProjectionMode_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.SetCustomNearClipPlane
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStandardCameraFactoryNode::SetCustomNearClipPlane(float& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStandardCameraFactoryNode", "SetCustomNearClipPlane");

	Params::UInterchangeStandardCameraFactoryNode_SetCustomNearClipPlane_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.SetCustomFieldOfView
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStandardCameraFactoryNode::SetCustomFieldOfView(float& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStandardCameraFactoryNode", "SetCustomFieldOfView");

	Params::UInterchangeStandardCameraFactoryNode_SetCustomFieldOfView_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.SetCustomFarClipPlane
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStandardCameraFactoryNode::SetCustomFarClipPlane(float& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStandardCameraFactoryNode", "SetCustomFarClipPlane");

	Params::UInterchangeStandardCameraFactoryNode_SetCustomFarClipPlane_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.SetCustomAspectRatio
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStandardCameraFactoryNode::SetCustomAspectRatio(float& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStandardCameraFactoryNode", "SetCustomAspectRatio");

	Params::UInterchangeStandardCameraFactoryNode_SetCustomAspectRatio_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.GetCustomWidth
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStandardCameraFactoryNode::GetCustomWidth(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStandardCameraFactoryNode", "GetCustomWidth");

	Params::UInterchangeStandardCameraFactoryNode_GetCustomWidth_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.GetCustomProjectionMode
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ECameraProjectionMode   AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStandardCameraFactoryNode::GetCustomProjectionMode(enum class ECameraProjectionMode* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStandardCameraFactoryNode", "GetCustomProjectionMode");

	Params::UInterchangeStandardCameraFactoryNode_GetCustomProjectionMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.GetCustomNearClipPlane
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStandardCameraFactoryNode::GetCustomNearClipPlane(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStandardCameraFactoryNode", "GetCustomNearClipPlane");

	Params::UInterchangeStandardCameraFactoryNode_GetCustomNearClipPlane_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.GetCustomFieldOfView
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStandardCameraFactoryNode::GetCustomFieldOfView(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStandardCameraFactoryNode", "GetCustomFieldOfView");

	Params::UInterchangeStandardCameraFactoryNode_GetCustomFieldOfView_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.GetCustomFarClipPlane
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStandardCameraFactoryNode::GetCustomFarClipPlane(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStandardCameraFactoryNode", "GetCustomFarClipPlane");

	Params::UInterchangeStandardCameraFactoryNode_GetCustomFarClipPlane_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.GetCustomAspectRatio
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStandardCameraFactoryNode::GetCustomAspectRatio(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStandardCameraFactoryNode", "GetCustomAspectRatio");

	Params::UInterchangeStandardCameraFactoryNode_GetCustomAspectRatio_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Class InterchangeFactoryNodes.InterchangeBaseLightFactoryNode
// (None)

class UClass* UInterchangeBaseLightFactoryNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeBaseLightFactoryNode");

	return Clss;
}


// InterchangeBaseLightFactoryNode InterchangeFactoryNodes.Default__InterchangeBaseLightFactoryNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeBaseLightFactoryNode* UInterchangeBaseLightFactoryNode::GetDefaultObj()
{
	static class UInterchangeBaseLightFactoryNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeBaseLightFactoryNode*>(UInterchangeBaseLightFactoryNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.SetCustomUseTemperature
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeBaseLightFactoryNode::SetCustomUseTemperature(bool AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseLightFactoryNode", "SetCustomUseTemperature");

	Params::UInterchangeBaseLightFactoryNode_SetCustomUseTemperature_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.SetCustomTemperature
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeBaseLightFactoryNode::SetCustomTemperature(float AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseLightFactoryNode", "SetCustomTemperature");

	Params::UInterchangeBaseLightFactoryNode_SetCustomTemperature_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.SetCustomLightColor
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FColor                      AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeBaseLightFactoryNode::SetCustomLightColor(struct FColor& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseLightFactoryNode", "SetCustomLightColor");

	Params::UInterchangeBaseLightFactoryNode_SetCustomLightColor_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.SetCustomIntensity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeBaseLightFactoryNode::SetCustomIntensity(float AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseLightFactoryNode", "SetCustomIntensity");

	Params::UInterchangeBaseLightFactoryNode_SetCustomIntensity_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.GetCustomUseTemperature
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeBaseLightFactoryNode::GetCustomUseTemperature(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseLightFactoryNode", "GetCustomUseTemperature");

	Params::UInterchangeBaseLightFactoryNode_GetCustomUseTemperature_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.GetCustomTemperature
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeBaseLightFactoryNode::GetCustomTemperature(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseLightFactoryNode", "GetCustomTemperature");

	Params::UInterchangeBaseLightFactoryNode_GetCustomTemperature_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.GetCustomLightColor
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FColor                      AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeBaseLightFactoryNode::GetCustomLightColor(struct FColor* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseLightFactoryNode", "GetCustomLightColor");

	Params::UInterchangeBaseLightFactoryNode_GetCustomLightColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.GetCustomIntensity
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeBaseLightFactoryNode::GetCustomIntensity(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseLightFactoryNode", "GetCustomIntensity");

	Params::UInterchangeBaseLightFactoryNode_GetCustomIntensity_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Class InterchangeFactoryNodes.InterchangeDirectionalLightFactoryNode
// (None)

class UClass* UInterchangeDirectionalLightFactoryNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeDirectionalLightFactoryNode");

	return Clss;
}


// InterchangeDirectionalLightFactoryNode InterchangeFactoryNodes.Default__InterchangeDirectionalLightFactoryNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeDirectionalLightFactoryNode* UInterchangeDirectionalLightFactoryNode::GetDefaultObj()
{
	static class UInterchangeDirectionalLightFactoryNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeDirectionalLightFactoryNode*>(UInterchangeDirectionalLightFactoryNode::StaticClass()->DefaultObject);

	return Default;
}


// Class InterchangeFactoryNodes.InterchangeLightFactoryNode
// (None)

class UClass* UInterchangeLightFactoryNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeLightFactoryNode");

	return Clss;
}


// InterchangeLightFactoryNode InterchangeFactoryNodes.Default__InterchangeLightFactoryNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeLightFactoryNode* UInterchangeLightFactoryNode::GetDefaultObj()
{
	static class UInterchangeLightFactoryNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeLightFactoryNode*>(UInterchangeLightFactoryNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeFactoryNodes.InterchangeLightFactoryNode.SetCustomIntensityUnits
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ELightUnits             AttributeValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeLightFactoryNode::SetCustomIntensityUnits(enum class ELightUnits AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeLightFactoryNode", "SetCustomIntensityUnits");

	Params::UInterchangeLightFactoryNode_SetCustomIntensityUnits_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeLightFactoryNode.SetCustomIESTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeLightFactoryNode::SetCustomIESTexture(const class FString& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeLightFactoryNode", "SetCustomIESTexture");

	Params::UInterchangeLightFactoryNode_SetCustomIESTexture_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeLightFactoryNode.SetCustomAttenuationRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeLightFactoryNode::SetCustomAttenuationRadius(float AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeLightFactoryNode", "SetCustomAttenuationRadius");

	Params::UInterchangeLightFactoryNode_SetCustomAttenuationRadius_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeLightFactoryNode.GetCustomIntensityUnits
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ELightUnits             AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeLightFactoryNode::GetCustomIntensityUnits(enum class ELightUnits* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeLightFactoryNode", "GetCustomIntensityUnits");

	Params::UInterchangeLightFactoryNode_GetCustomIntensityUnits_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeLightFactoryNode.GetCustomIESTexture
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeLightFactoryNode::GetCustomIESTexture(class FString* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeLightFactoryNode", "GetCustomIESTexture");

	Params::UInterchangeLightFactoryNode_GetCustomIESTexture_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeLightFactoryNode.GetCustomAttenuationRadius
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeLightFactoryNode::GetCustomAttenuationRadius(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeLightFactoryNode", "GetCustomAttenuationRadius");

	Params::UInterchangeLightFactoryNode_GetCustomAttenuationRadius_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Class InterchangeFactoryNodes.InterchangeRectLightFactoryNode
// (None)

class UClass* UInterchangeRectLightFactoryNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeRectLightFactoryNode");

	return Clss;
}


// InterchangeRectLightFactoryNode InterchangeFactoryNodes.Default__InterchangeRectLightFactoryNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeRectLightFactoryNode* UInterchangeRectLightFactoryNode::GetDefaultObj()
{
	static class UInterchangeRectLightFactoryNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeRectLightFactoryNode*>(UInterchangeRectLightFactoryNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeFactoryNodes.InterchangeRectLightFactoryNode.SetCustomSourceWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeRectLightFactoryNode::SetCustomSourceWidth(float AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeRectLightFactoryNode", "SetCustomSourceWidth");

	Params::UInterchangeRectLightFactoryNode_SetCustomSourceWidth_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeRectLightFactoryNode.SetCustomSourceHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeRectLightFactoryNode::SetCustomSourceHeight(float AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeRectLightFactoryNode", "SetCustomSourceHeight");

	Params::UInterchangeRectLightFactoryNode_SetCustomSourceHeight_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeRectLightFactoryNode.GetCustomSourceWidth
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeRectLightFactoryNode::GetCustomSourceWidth(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeRectLightFactoryNode", "GetCustomSourceWidth");

	Params::UInterchangeRectLightFactoryNode_GetCustomSourceWidth_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeRectLightFactoryNode.GetCustomSourceHeight
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeRectLightFactoryNode::GetCustomSourceHeight(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeRectLightFactoryNode", "GetCustomSourceHeight");

	Params::UInterchangeRectLightFactoryNode_GetCustomSourceHeight_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Class InterchangeFactoryNodes.InterchangePointLightFactoryNode
// (None)

class UClass* UInterchangePointLightFactoryNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangePointLightFactoryNode");

	return Clss;
}


// InterchangePointLightFactoryNode InterchangeFactoryNodes.Default__InterchangePointLightFactoryNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangePointLightFactoryNode* UInterchangePointLightFactoryNode::GetDefaultObj()
{
	static class UInterchangePointLightFactoryNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangePointLightFactoryNode*>(UInterchangePointLightFactoryNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeFactoryNodes.InterchangePointLightFactoryNode.SetCustomUseInverseSquaredFalloff
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangePointLightFactoryNode::SetCustomUseInverseSquaredFalloff(bool AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePointLightFactoryNode", "SetCustomUseInverseSquaredFalloff");

	Params::UInterchangePointLightFactoryNode_SetCustomUseInverseSquaredFalloff_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangePointLightFactoryNode.SetCustomLightFalloffExponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangePointLightFactoryNode::SetCustomLightFalloffExponent(float AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePointLightFactoryNode", "SetCustomLightFalloffExponent");

	Params::UInterchangePointLightFactoryNode_SetCustomLightFalloffExponent_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangePointLightFactoryNode.GetCustomUseInverseSquaredFalloff
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangePointLightFactoryNode::GetCustomUseInverseSquaredFalloff(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePointLightFactoryNode", "GetCustomUseInverseSquaredFalloff");

	Params::UInterchangePointLightFactoryNode_GetCustomUseInverseSquaredFalloff_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangePointLightFactoryNode.GetCustomLightFalloffExponent
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangePointLightFactoryNode::GetCustomLightFalloffExponent(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePointLightFactoryNode", "GetCustomLightFalloffExponent");

	Params::UInterchangePointLightFactoryNode_GetCustomLightFalloffExponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Class InterchangeFactoryNodes.InterchangeSpotLightFactoryNode
// (None)

class UClass* UInterchangeSpotLightFactoryNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeSpotLightFactoryNode");

	return Clss;
}


// InterchangeSpotLightFactoryNode InterchangeFactoryNodes.Default__InterchangeSpotLightFactoryNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeSpotLightFactoryNode* UInterchangeSpotLightFactoryNode::GetDefaultObj()
{
	static class UInterchangeSpotLightFactoryNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeSpotLightFactoryNode*>(UInterchangeSpotLightFactoryNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeFactoryNodes.InterchangeSpotLightFactoryNode.SetCustomOuterConeAngle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSpotLightFactoryNode::SetCustomOuterConeAngle(float AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSpotLightFactoryNode", "SetCustomOuterConeAngle");

	Params::UInterchangeSpotLightFactoryNode_SetCustomOuterConeAngle_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeSpotLightFactoryNode.SetCustomInnerConeAngle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSpotLightFactoryNode::SetCustomInnerConeAngle(float AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSpotLightFactoryNode", "SetCustomInnerConeAngle");

	Params::UInterchangeSpotLightFactoryNode_SetCustomInnerConeAngle_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeSpotLightFactoryNode.GetCustomOuterConeAngle
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSpotLightFactoryNode::GetCustomOuterConeAngle(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSpotLightFactoryNode", "GetCustomOuterConeAngle");

	Params::UInterchangeSpotLightFactoryNode_GetCustomOuterConeAngle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeSpotLightFactoryNode.GetCustomInnerConeAngle
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSpotLightFactoryNode::GetCustomInnerConeAngle(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSpotLightFactoryNode", "GetCustomInnerConeAngle");

	Params::UInterchangeSpotLightFactoryNode_GetCustomInnerConeAngle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Class InterchangeFactoryNodes.InterchangePhysicsAssetFactoryNode
// (None)

class UClass* UInterchangePhysicsAssetFactoryNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangePhysicsAssetFactoryNode");

	return Clss;
}


// InterchangePhysicsAssetFactoryNode InterchangeFactoryNodes.Default__InterchangePhysicsAssetFactoryNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangePhysicsAssetFactoryNode* UInterchangePhysicsAssetFactoryNode::GetDefaultObj()
{
	static class UInterchangePhysicsAssetFactoryNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangePhysicsAssetFactoryNode*>(UInterchangePhysicsAssetFactoryNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeFactoryNodes.InterchangePhysicsAssetFactoryNode.SetCustomSkeletalMeshUid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangePhysicsAssetFactoryNode::SetCustomSkeletalMeshUid(const class FString& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePhysicsAssetFactoryNode", "SetCustomSkeletalMeshUid");

	Params::UInterchangePhysicsAssetFactoryNode_SetCustomSkeletalMeshUid_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangePhysicsAssetFactoryNode.InitializePhysicsAssetNode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      UniqueID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      DisplayLabel                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InAssetClass                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInterchangePhysicsAssetFactoryNode::InitializePhysicsAssetNode(const class FString& UniqueID, const class FString& DisplayLabel, const class FString& InAssetClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePhysicsAssetFactoryNode", "InitializePhysicsAssetNode");

	Params::UInterchangePhysicsAssetFactoryNode_InitializePhysicsAssetNode_Params Parms{};

	Parms.UniqueID = UniqueID;
	Parms.DisplayLabel = DisplayLabel;
	Parms.InAssetClass = InAssetClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function InterchangeFactoryNodes.InterchangePhysicsAssetFactoryNode.GetObjectClass
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UClass* UInterchangePhysicsAssetFactoryNode::GetObjectClass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePhysicsAssetFactoryNode", "GetObjectClass");

	Params::UInterchangePhysicsAssetFactoryNode_GetObjectClass_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangePhysicsAssetFactoryNode.GetCustomSkeletalMeshUid
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangePhysicsAssetFactoryNode::GetCustomSkeletalMeshUid(class FString* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePhysicsAssetFactoryNode", "GetCustomSkeletalMeshUid");

	Params::UInterchangePhysicsAssetFactoryNode_GetCustomSkeletalMeshUid_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Class InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode
// (None)

class UClass* UInterchangeSceneVariantSetsFactoryNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeSceneVariantSetsFactoryNode");

	return Clss;
}


// InterchangeSceneVariantSetsFactoryNode InterchangeFactoryNodes.Default__InterchangeSceneVariantSetsFactoryNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeSceneVariantSetsFactoryNode* UInterchangeSceneVariantSetsFactoryNode::GetDefaultObj()
{
	static class UInterchangeSceneVariantSetsFactoryNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeSceneVariantSetsFactoryNode*>(UInterchangeSceneVariantSetsFactoryNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode.RemoveCustomVariantSetUid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      VariantUid                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSceneVariantSetsFactoryNode::RemoveCustomVariantSetUid(const class FString& VariantUid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSceneVariantSetsFactoryNode", "RemoveCustomVariantSetUid");

	Params::UInterchangeSceneVariantSetsFactoryNode_RemoveCustomVariantSetUid_Params Parms{};

	Parms.VariantUid = VariantUid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode.GetObjectClass
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UClass* UInterchangeSceneVariantSetsFactoryNode::GetObjectClass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSceneVariantSetsFactoryNode", "GetObjectClass");

	Params::UInterchangeSceneVariantSetsFactoryNode_GetObjectClass_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode.GetCustomVariantSetUids
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              OutVariantUids                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UInterchangeSceneVariantSetsFactoryNode::GetCustomVariantSetUids(TArray<class FString>* OutVariantUids)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSceneVariantSetsFactoryNode", "GetCustomVariantSetUids");

	Params::UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUids_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutVariantUids != nullptr)
		*OutVariantUids = Parms.OutVariantUids;

}


// Function InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode.GetCustomVariantSetUidCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UInterchangeSceneVariantSetsFactoryNode::GetCustomVariantSetUidCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSceneVariantSetsFactoryNode", "GetCustomVariantSetUidCount");

	Params::UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUidCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode.GetCustomVariantSetUid
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutVariantUid                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInterchangeSceneVariantSetsFactoryNode::GetCustomVariantSetUid(int32 Index, class FString* OutVariantUid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSceneVariantSetsFactoryNode", "GetCustomVariantSetUid");

	Params::UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUid_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutVariantUid != nullptr)
		*OutVariantUid = Parms.OutVariantUid;

}


// Function InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode.AddCustomVariantSetUid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      VariantUid                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSceneVariantSetsFactoryNode::AddCustomVariantSetUid(const class FString& VariantUid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSceneVariantSetsFactoryNode", "AddCustomVariantSetUid");

	Params::UInterchangeSceneVariantSetsFactoryNode_AddCustomVariantSetUid_Params Parms{};

	Parms.VariantUid = VariantUid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class InterchangeFactoryNodes.InterchangeSkeletonFactoryNode
// (None)

class UClass* UInterchangeSkeletonFactoryNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeSkeletonFactoryNode");

	return Clss;
}


// InterchangeSkeletonFactoryNode InterchangeFactoryNodes.Default__InterchangeSkeletonFactoryNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeSkeletonFactoryNode* UInterchangeSkeletonFactoryNode::GetDefaultObj()
{
	static class UInterchangeSkeletonFactoryNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeSkeletonFactoryNode*>(UInterchangeSkeletonFactoryNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.SetCustomUseTimeZeroForBindPose
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSkeletonFactoryNode::SetCustomUseTimeZeroForBindPose(bool& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSkeletonFactoryNode", "SetCustomUseTimeZeroForBindPose");

	Params::UInterchangeSkeletonFactoryNode_SetCustomUseTimeZeroForBindPose_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.SetCustomSkeletalMeshFactoryNodeUid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSkeletonFactoryNode::SetCustomSkeletalMeshFactoryNodeUid(const class FString& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSkeletonFactoryNode", "SetCustomSkeletalMeshFactoryNodeUid");

	Params::UInterchangeSkeletonFactoryNode_SetCustomSkeletalMeshFactoryNodeUid_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.SetCustomRootJointUid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSkeletonFactoryNode::SetCustomRootJointUid(const class FString& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSkeletonFactoryNode", "SetCustomRootJointUid");

	Params::UInterchangeSkeletonFactoryNode_SetCustomRootJointUid_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.InitializeSkeletonNode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      UniqueID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      DisplayLabel                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InAssetClass                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInterchangeSkeletonFactoryNode::InitializeSkeletonNode(const class FString& UniqueID, const class FString& DisplayLabel, const class FString& InAssetClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSkeletonFactoryNode", "InitializeSkeletonNode");

	Params::UInterchangeSkeletonFactoryNode_InitializeSkeletonNode_Params Parms{};

	Parms.UniqueID = UniqueID;
	Parms.DisplayLabel = DisplayLabel;
	Parms.InAssetClass = InAssetClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.GetObjectClass
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UClass* UInterchangeSkeletonFactoryNode::GetObjectClass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSkeletonFactoryNode", "GetObjectClass");

	Params::UInterchangeSkeletonFactoryNode_GetObjectClass_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.GetCustomUseTimeZeroForBindPose
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSkeletonFactoryNode::GetCustomUseTimeZeroForBindPose(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSkeletonFactoryNode", "GetCustomUseTimeZeroForBindPose");

	Params::UInterchangeSkeletonFactoryNode_GetCustomUseTimeZeroForBindPose_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.GetCustomSkeletalMeshFactoryNodeUid
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSkeletonFactoryNode::GetCustomSkeletalMeshFactoryNodeUid(class FString* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSkeletonFactoryNode", "GetCustomSkeletalMeshFactoryNodeUid");

	Params::UInterchangeSkeletonFactoryNode_GetCustomSkeletalMeshFactoryNodeUid_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.GetCustomRootJointUid
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSkeletonFactoryNode::GetCustomRootJointUid(class FString* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSkeletonFactoryNode", "GetCustomRootJointUid");

	Params::UInterchangeSkeletonFactoryNode_GetCustomRootJointUid_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Class InterchangeFactoryNodes.InterchangeTextureFactoryNode
// (None)

class UClass* UInterchangeTextureFactoryNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeTextureFactoryNode");

	return Clss;
}


// InterchangeTextureFactoryNode InterchangeFactoryNodes.Default__InterchangeTextureFactoryNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeTextureFactoryNode* UInterchangeTextureFactoryNode::GetDefaultObj()
{
	static class UInterchangeTextureFactoryNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeTextureFactoryNode*>(UInterchangeTextureFactoryNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomVirtualTextureStreaming
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::SetCustomVirtualTextureStreaming(bool& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "SetCustomVirtualTextureStreaming");

	Params::UInterchangeTextureFactoryNode_SetCustomVirtualTextureStreaming_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomTranslatedTextureNodeUid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::SetCustomTranslatedTextureNodeUid(const class FString& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "SetCustomTranslatedTextureNodeUid");

	Params::UInterchangeTextureFactoryNode_SetCustomTranslatedTextureNodeUid_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomSRGB
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::SetCustomSRGB(bool& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "SetCustomSRGB");

	Params::UInterchangeTextureFactoryNode_SetCustomSRGB_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomPreferCompressedSourceData
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::SetCustomPreferCompressedSourceData(bool& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "SetCustomPreferCompressedSourceData");

	Params::UInterchangeTextureFactoryNode_SetCustomPreferCompressedSourceData_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomPowerOfTwoMode
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// uint8                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::SetCustomPowerOfTwoMode(uint8& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "SetCustomPowerOfTwoMode");

	Params::UInterchangeTextureFactoryNode_SetCustomPowerOfTwoMode_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomPaddingColor
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FColor                      AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::SetCustomPaddingColor(struct FColor& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "SetCustomPaddingColor");

	Params::UInterchangeTextureFactoryNode_SetCustomPaddingColor_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomMipLoadOptions
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// uint8                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::SetCustomMipLoadOptions(uint8& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "SetCustomMipLoadOptions");

	Params::UInterchangeTextureFactoryNode_SetCustomMipLoadOptions_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomMipGenSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// uint8                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::SetCustomMipGenSettings(uint8& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "SetCustomMipGenSettings");

	Params::UInterchangeTextureFactoryNode_SetCustomMipGenSettings_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomMaxTextureSize
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::SetCustomMaxTextureSize(int32& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "SetCustomMaxTextureSize");

	Params::UInterchangeTextureFactoryNode_SetCustomMaxTextureSize_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomLossyCompressionAmount
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// uint8                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::SetCustomLossyCompressionAmount(uint8& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "SetCustomLossyCompressionAmount");

	Params::UInterchangeTextureFactoryNode_SetCustomLossyCompressionAmount_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomLODGroup
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// uint8                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::SetCustomLODGroup(uint8& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "SetCustomLODGroup");

	Params::UInterchangeTextureFactoryNode_SetCustomLODGroup_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomLODBias
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::SetCustomLODBias(int32& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "SetCustomLODBias");

	Params::UInterchangeTextureFactoryNode_SetCustomLODBias_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomFilter
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// uint8                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::SetCustomFilter(uint8& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "SetCustomFilter");

	Params::UInterchangeTextureFactoryNode_SetCustomFilter_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomDownscaleOptions
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// uint8                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::SetCustomDownscaleOptions(uint8& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "SetCustomDownscaleOptions");

	Params::UInterchangeTextureFactoryNode_SetCustomDownscaleOptions_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomDownscale
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::SetCustomDownscale(float& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "SetCustomDownscale");

	Params::UInterchangeTextureFactoryNode_SetCustomDownscale_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomDeferCompression
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::SetCustomDeferCompression(bool& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "SetCustomDeferCompression");

	Params::UInterchangeTextureFactoryNode_SetCustomDeferCompression_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomCompressionSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// uint8                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::SetCustomCompressionSettings(uint8& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "SetCustomCompressionSettings");

	Params::UInterchangeTextureFactoryNode_SetCustomCompressionSettings_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomCompressionQuality
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// uint8                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::SetCustomCompressionQuality(uint8& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "SetCustomCompressionQuality");

	Params::UInterchangeTextureFactoryNode_SetCustomCompressionQuality_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomCompressionNoAlpha
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::SetCustomCompressionNoAlpha(bool& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "SetCustomCompressionNoAlpha");

	Params::UInterchangeTextureFactoryNode_SetCustomCompressionNoAlpha_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomCompositeTextureMode
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// uint8                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::SetCustomCompositeTextureMode(uint8& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "SetCustomCompositeTextureMode");

	Params::UInterchangeTextureFactoryNode_SetCustomCompositeTextureMode_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomCompositePower
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::SetCustomCompositePower(float& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "SetCustomCompositePower");

	Params::UInterchangeTextureFactoryNode_SetCustomCompositePower_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomChromaKeyThreshold
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::SetCustomChromaKeyThreshold(float& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "SetCustomChromaKeyThreshold");

	Params::UInterchangeTextureFactoryNode_SetCustomChromaKeyThreshold_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomChromaKeyColor
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FColor                      AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::SetCustomChromaKeyColor(struct FColor& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "SetCustomChromaKeyColor");

	Params::UInterchangeTextureFactoryNode_SetCustomChromaKeyColor_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustombUseLegacyGamma
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::SetCustombUseLegacyGamma(bool& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "SetCustombUseLegacyGamma");

	Params::UInterchangeTextureFactoryNode_SetCustombUseLegacyGamma_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustombPreserveBorder
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::SetCustombPreserveBorder(bool& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "SetCustombPreserveBorder");

	Params::UInterchangeTextureFactoryNode_SetCustombPreserveBorder_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustombFlipGreenChannel
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::SetCustombFlipGreenChannel(bool& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "SetCustombFlipGreenChannel");

	Params::UInterchangeTextureFactoryNode_SetCustombFlipGreenChannel_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustombDoScaleMipsForAlphaCoverage
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::SetCustombDoScaleMipsForAlphaCoverage(bool& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "SetCustombDoScaleMipsForAlphaCoverage");

	Params::UInterchangeTextureFactoryNode_SetCustombDoScaleMipsForAlphaCoverage_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustombChromaKeyTexture
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::SetCustombChromaKeyTexture(bool& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "SetCustombChromaKeyTexture");

	Params::UInterchangeTextureFactoryNode_SetCustombChromaKeyTexture_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAlphaCoverageThresholds
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector4                    AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::SetCustomAlphaCoverageThresholds(struct FVector4& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "SetCustomAlphaCoverageThresholds");

	Params::UInterchangeTextureFactoryNode_SetCustomAlphaCoverageThresholds_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAllowNonPowerOfTwo
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::SetCustomAllowNonPowerOfTwo(bool& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "SetCustomAllowNonPowerOfTwo");

	Params::UInterchangeTextureFactoryNode_SetCustomAllowNonPowerOfTwo_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustVibrance
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::SetCustomAdjustVibrance(float& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "SetCustomAdjustVibrance");

	Params::UInterchangeTextureFactoryNode_SetCustomAdjustVibrance_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustSaturation
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::SetCustomAdjustSaturation(float& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "SetCustomAdjustSaturation");

	Params::UInterchangeTextureFactoryNode_SetCustomAdjustSaturation_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustRGBCurve
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::SetCustomAdjustRGBCurve(float& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "SetCustomAdjustRGBCurve");

	Params::UInterchangeTextureFactoryNode_SetCustomAdjustRGBCurve_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustMinAlpha
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::SetCustomAdjustMinAlpha(float& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "SetCustomAdjustMinAlpha");

	Params::UInterchangeTextureFactoryNode_SetCustomAdjustMinAlpha_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustMaxAlpha
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::SetCustomAdjustMaxAlpha(float& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "SetCustomAdjustMaxAlpha");

	Params::UInterchangeTextureFactoryNode_SetCustomAdjustMaxAlpha_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustHue
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::SetCustomAdjustHue(float& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "SetCustomAdjustHue");

	Params::UInterchangeTextureFactoryNode_SetCustomAdjustHue_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustBrightnessCurve
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::SetCustomAdjustBrightnessCurve(float& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "SetCustomAdjustBrightnessCurve");

	Params::UInterchangeTextureFactoryNode_SetCustomAdjustBrightnessCurve_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustBrightness
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::SetCustomAdjustBrightness(float& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "SetCustomAdjustBrightness");

	Params::UInterchangeTextureFactoryNode_SetCustomAdjustBrightness_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.InitializeTextureNode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      UniqueID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      DisplayLabel                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InAssetName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInterchangeTextureFactoryNode::InitializeTextureNode(const class FString& UniqueID, const class FString& DisplayLabel, const class FString& InAssetName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "InitializeTextureNode");

	Params::UInterchangeTextureFactoryNode_InitializeTextureNode_Params Parms{};

	Parms.UniqueID = UniqueID;
	Parms.DisplayLabel = DisplayLabel;
	Parms.InAssetName = InAssetName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetObjectClass
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UClass* UInterchangeTextureFactoryNode::GetObjectClass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "GetObjectClass");

	Params::UInterchangeTextureFactoryNode_GetObjectClass_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomVirtualTextureStreaming
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::GetCustomVirtualTextureStreaming(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "GetCustomVirtualTextureStreaming");

	Params::UInterchangeTextureFactoryNode_GetCustomVirtualTextureStreaming_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomTranslatedTextureNodeUid
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::GetCustomTranslatedTextureNodeUid(class FString* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "GetCustomTranslatedTextureNodeUid");

	Params::UInterchangeTextureFactoryNode_GetCustomTranslatedTextureNodeUid_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomSRGB
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::GetCustomSRGB(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "GetCustomSRGB");

	Params::UInterchangeTextureFactoryNode_GetCustomSRGB_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomPreferCompressedSourceData
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::GetCustomPreferCompressedSourceData(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "GetCustomPreferCompressedSourceData");

	Params::UInterchangeTextureFactoryNode_GetCustomPreferCompressedSourceData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomPowerOfTwoMode
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// uint8                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::GetCustomPowerOfTwoMode(uint8* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "GetCustomPowerOfTwoMode");

	Params::UInterchangeTextureFactoryNode_GetCustomPowerOfTwoMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomPaddingColor
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FColor                      AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::GetCustomPaddingColor(struct FColor* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "GetCustomPaddingColor");

	Params::UInterchangeTextureFactoryNode_GetCustomPaddingColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomMipLoadOptions
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// uint8                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::GetCustomMipLoadOptions(uint8* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "GetCustomMipLoadOptions");

	Params::UInterchangeTextureFactoryNode_GetCustomMipLoadOptions_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomMipGenSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// uint8                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::GetCustomMipGenSettings(uint8* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "GetCustomMipGenSettings");

	Params::UInterchangeTextureFactoryNode_GetCustomMipGenSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomMaxTextureSize
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::GetCustomMaxTextureSize(int32* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "GetCustomMaxTextureSize");

	Params::UInterchangeTextureFactoryNode_GetCustomMaxTextureSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomLossyCompressionAmount
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// uint8                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::GetCustomLossyCompressionAmount(uint8* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "GetCustomLossyCompressionAmount");

	Params::UInterchangeTextureFactoryNode_GetCustomLossyCompressionAmount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomLODGroup
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// uint8                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::GetCustomLODGroup(uint8* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "GetCustomLODGroup");

	Params::UInterchangeTextureFactoryNode_GetCustomLODGroup_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomLODBias
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::GetCustomLODBias(int32* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "GetCustomLODBias");

	Params::UInterchangeTextureFactoryNode_GetCustomLODBias_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomFilter
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// uint8                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::GetCustomFilter(uint8* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "GetCustomFilter");

	Params::UInterchangeTextureFactoryNode_GetCustomFilter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomDownscaleOptions
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// uint8                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::GetCustomDownscaleOptions(uint8* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "GetCustomDownscaleOptions");

	Params::UInterchangeTextureFactoryNode_GetCustomDownscaleOptions_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomDownscale
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::GetCustomDownscale(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "GetCustomDownscale");

	Params::UInterchangeTextureFactoryNode_GetCustomDownscale_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomDeferCompression
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::GetCustomDeferCompression(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "GetCustomDeferCompression");

	Params::UInterchangeTextureFactoryNode_GetCustomDeferCompression_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomCompressionSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// uint8                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::GetCustomCompressionSettings(uint8* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "GetCustomCompressionSettings");

	Params::UInterchangeTextureFactoryNode_GetCustomCompressionSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomCompressionQuality
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// uint8                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::GetCustomCompressionQuality(uint8* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "GetCustomCompressionQuality");

	Params::UInterchangeTextureFactoryNode_GetCustomCompressionQuality_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomCompressionNoAlpha
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::GetCustomCompressionNoAlpha(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "GetCustomCompressionNoAlpha");

	Params::UInterchangeTextureFactoryNode_GetCustomCompressionNoAlpha_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomCompositeTextureMode
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// uint8                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::GetCustomCompositeTextureMode(uint8* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "GetCustomCompositeTextureMode");

	Params::UInterchangeTextureFactoryNode_GetCustomCompositeTextureMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomCompositePower
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::GetCustomCompositePower(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "GetCustomCompositePower");

	Params::UInterchangeTextureFactoryNode_GetCustomCompositePower_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomChromaKeyThreshold
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::GetCustomChromaKeyThreshold(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "GetCustomChromaKeyThreshold");

	Params::UInterchangeTextureFactoryNode_GetCustomChromaKeyThreshold_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomChromaKeyColor
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FColor                      AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::GetCustomChromaKeyColor(struct FColor* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "GetCustomChromaKeyColor");

	Params::UInterchangeTextureFactoryNode_GetCustomChromaKeyColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustombUseLegacyGamma
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::GetCustombUseLegacyGamma(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "GetCustombUseLegacyGamma");

	Params::UInterchangeTextureFactoryNode_GetCustombUseLegacyGamma_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustombPreserveBorder
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::GetCustombPreserveBorder(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "GetCustombPreserveBorder");

	Params::UInterchangeTextureFactoryNode_GetCustombPreserveBorder_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustombFlipGreenChannel
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::GetCustombFlipGreenChannel(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "GetCustombFlipGreenChannel");

	Params::UInterchangeTextureFactoryNode_GetCustombFlipGreenChannel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustombDoScaleMipsForAlphaCoverage
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::GetCustombDoScaleMipsForAlphaCoverage(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "GetCustombDoScaleMipsForAlphaCoverage");

	Params::UInterchangeTextureFactoryNode_GetCustombDoScaleMipsForAlphaCoverage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustombChromaKeyTexture
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::GetCustombChromaKeyTexture(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "GetCustombChromaKeyTexture");

	Params::UInterchangeTextureFactoryNode_GetCustombChromaKeyTexture_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAlphaCoverageThresholds
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector4                    AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::GetCustomAlphaCoverageThresholds(struct FVector4* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "GetCustomAlphaCoverageThresholds");

	Params::UInterchangeTextureFactoryNode_GetCustomAlphaCoverageThresholds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAllowNonPowerOfTwo
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::GetCustomAllowNonPowerOfTwo(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "GetCustomAllowNonPowerOfTwo");

	Params::UInterchangeTextureFactoryNode_GetCustomAllowNonPowerOfTwo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustVibrance
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::GetCustomAdjustVibrance(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "GetCustomAdjustVibrance");

	Params::UInterchangeTextureFactoryNode_GetCustomAdjustVibrance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustSaturation
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::GetCustomAdjustSaturation(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "GetCustomAdjustSaturation");

	Params::UInterchangeTextureFactoryNode_GetCustomAdjustSaturation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustRGBCurve
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::GetCustomAdjustRGBCurve(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "GetCustomAdjustRGBCurve");

	Params::UInterchangeTextureFactoryNode_GetCustomAdjustRGBCurve_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustMinAlpha
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::GetCustomAdjustMinAlpha(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "GetCustomAdjustMinAlpha");

	Params::UInterchangeTextureFactoryNode_GetCustomAdjustMinAlpha_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustMaxAlpha
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::GetCustomAdjustMaxAlpha(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "GetCustomAdjustMaxAlpha");

	Params::UInterchangeTextureFactoryNode_GetCustomAdjustMaxAlpha_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustHue
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::GetCustomAdjustHue(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "GetCustomAdjustHue");

	Params::UInterchangeTextureFactoryNode_GetCustomAdjustHue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustBrightnessCurve
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::GetCustomAdjustBrightnessCurve(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "GetCustomAdjustBrightnessCurve");

	Params::UInterchangeTextureFactoryNode_GetCustomAdjustBrightnessCurve_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustBrightness
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureFactoryNode::GetCustomAdjustBrightness(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureFactoryNode", "GetCustomAdjustBrightness");

	Params::UInterchangeTextureFactoryNode_GetCustomAdjustBrightness_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Class InterchangeFactoryNodes.InterchangeTexture2DArrayFactoryNode
// (None)

class UClass* UInterchangeTexture2DArrayFactoryNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeTexture2DArrayFactoryNode");

	return Clss;
}


// InterchangeTexture2DArrayFactoryNode InterchangeFactoryNodes.Default__InterchangeTexture2DArrayFactoryNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeTexture2DArrayFactoryNode* UInterchangeTexture2DArrayFactoryNode::GetDefaultObj()
{
	static class UInterchangeTexture2DArrayFactoryNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeTexture2DArrayFactoryNode*>(UInterchangeTexture2DArrayFactoryNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeFactoryNodes.InterchangeTexture2DArrayFactoryNode.SetCustomAddressZ
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// uint8                              AttributeValue                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTexture2DArrayFactoryNode::SetCustomAddressZ(uint8 AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTexture2DArrayFactoryNode", "SetCustomAddressZ");

	Params::UInterchangeTexture2DArrayFactoryNode_SetCustomAddressZ_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTexture2DArrayFactoryNode.GetCustomAddressZ
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// uint8                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTexture2DArrayFactoryNode::GetCustomAddressZ(uint8* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTexture2DArrayFactoryNode", "GetCustomAddressZ");

	Params::UInterchangeTexture2DArrayFactoryNode_GetCustomAddressZ_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTexture2DArrayFactoryNode.GetCustomAddressY
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// uint8                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTexture2DArrayFactoryNode::GetCustomAddressY(uint8* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTexture2DArrayFactoryNode", "GetCustomAddressY");

	Params::UInterchangeTexture2DArrayFactoryNode_GetCustomAddressY_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTexture2DArrayFactoryNode.GetCustomAddressX
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// uint8                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTexture2DArrayFactoryNode::GetCustomAddressX(uint8* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTexture2DArrayFactoryNode", "GetCustomAddressX");

	Params::UInterchangeTexture2DArrayFactoryNode_GetCustomAddressX_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Class InterchangeFactoryNodes.InterchangeTexture2DFactoryNode
// (None)

class UClass* UInterchangeTexture2DFactoryNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeTexture2DFactoryNode");

	return Clss;
}


// InterchangeTexture2DFactoryNode InterchangeFactoryNodes.Default__InterchangeTexture2DFactoryNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeTexture2DFactoryNode* UInterchangeTexture2DFactoryNode::GetDefaultObj()
{
	static class UInterchangeTexture2DFactoryNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeTexture2DFactoryNode*>(UInterchangeTexture2DFactoryNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.SetSourceBlocks
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TMap<int32, class FString>         InSourceBlocks                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UInterchangeTexture2DFactoryNode::SetSourceBlocks(TMap<int32, class FString>& InSourceBlocks)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTexture2DFactoryNode", "SetSourceBlocks");

	Params::UInterchangeTexture2DFactoryNode_SetSourceBlocks_Params Parms{};

	Parms.InSourceBlocks = InSourceBlocks;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.SetSourceBlockByCoordinates
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              X                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Y                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InSourceFile                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInterchangeTexture2DFactoryNode::SetSourceBlockByCoordinates(int32 X, int32 Y, const class FString& InSourceFile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTexture2DFactoryNode", "SetSourceBlockByCoordinates");

	Params::UInterchangeTexture2DFactoryNode_SetSourceBlockByCoordinates_Params Parms{};

	Parms.X = X;
	Parms.Y = Y;
	Parms.InSourceFile = InSourceFile;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.SetSourceBlock
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              BlockIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InSourceFile                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInterchangeTexture2DFactoryNode::SetSourceBlock(int32 BlockIndex, const class FString& InSourceFile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTexture2DFactoryNode", "SetSourceBlock");

	Params::UInterchangeTexture2DFactoryNode_SetSourceBlock_Params Parms{};

	Parms.BlockIndex = BlockIndex;
	Parms.InSourceFile = InSourceFile;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.SetCustomAddressY
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ETextureAddress         AttributeValue                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTexture2DFactoryNode::SetCustomAddressY(enum class ETextureAddress AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTexture2DFactoryNode", "SetCustomAddressY");

	Params::UInterchangeTexture2DFactoryNode_SetCustomAddressY_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.SetCustomAddressX
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ETextureAddress         AttributeValue                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTexture2DFactoryNode::SetCustomAddressX(enum class ETextureAddress AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTexture2DFactoryNode", "SetCustomAddressX");

	Params::UInterchangeTexture2DFactoryNode_SetCustomAddressX_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.GetSourceBlocks
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<int32, class FString>         ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

TMap<int32, class FString> UInterchangeTexture2DFactoryNode::GetSourceBlocks()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTexture2DFactoryNode", "GetSourceBlocks");

	Params::UInterchangeTexture2DFactoryNode_GetSourceBlocks_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.GetSourceBlockByCoordinates
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              X                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Y                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutSourceFile                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTexture2DFactoryNode::GetSourceBlockByCoordinates(int32 X, int32 Y, class FString* OutSourceFile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTexture2DFactoryNode", "GetSourceBlockByCoordinates");

	Params::UInterchangeTexture2DFactoryNode_GetSourceBlockByCoordinates_Params Parms{};

	Parms.X = X;
	Parms.Y = Y;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutSourceFile != nullptr)
		*OutSourceFile = Parms.OutSourceFile;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.GetSourceBlock
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              BlockIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutSourceFile                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTexture2DFactoryNode::GetSourceBlock(int32 BlockIndex, class FString* OutSourceFile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTexture2DFactoryNode", "GetSourceBlock");

	Params::UInterchangeTexture2DFactoryNode_GetSourceBlock_Params Parms{};

	Parms.BlockIndex = BlockIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutSourceFile != nullptr)
		*OutSourceFile = Parms.OutSourceFile;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.GetCustomAddressY
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ETextureAddress         AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTexture2DFactoryNode::GetCustomAddressY(enum class ETextureAddress* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTexture2DFactoryNode", "GetCustomAddressY");

	Params::UInterchangeTexture2DFactoryNode_GetCustomAddressY_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.GetCustomAddressX
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ETextureAddress         AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTexture2DFactoryNode::GetCustomAddressX(enum class ETextureAddress* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTexture2DFactoryNode", "GetCustomAddressX");

	Params::UInterchangeTexture2DFactoryNode_GetCustomAddressX_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Class InterchangeFactoryNodes.InterchangeTextureCubeArrayFactoryNode
// (None)

class UClass* UInterchangeTextureCubeArrayFactoryNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeTextureCubeArrayFactoryNode");

	return Clss;
}


// InterchangeTextureCubeArrayFactoryNode InterchangeFactoryNodes.Default__InterchangeTextureCubeArrayFactoryNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeTextureCubeArrayFactoryNode* UInterchangeTextureCubeArrayFactoryNode::GetDefaultObj()
{
	static class UInterchangeTextureCubeArrayFactoryNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeTextureCubeArrayFactoryNode*>(UInterchangeTextureCubeArrayFactoryNode::StaticClass()->DefaultObject);

	return Default;
}


// Class InterchangeFactoryNodes.InterchangeTextureCubeFactoryNode
// (None)

class UClass* UInterchangeTextureCubeFactoryNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeTextureCubeFactoryNode");

	return Clss;
}


// InterchangeTextureCubeFactoryNode InterchangeFactoryNodes.Default__InterchangeTextureCubeFactoryNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeTextureCubeFactoryNode* UInterchangeTextureCubeFactoryNode::GetDefaultObj()
{
	static class UInterchangeTextureCubeFactoryNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeTextureCubeFactoryNode*>(UInterchangeTextureCubeFactoryNode::StaticClass()->DefaultObject);

	return Default;
}


// Class InterchangeFactoryNodes.InterchangeTextureLightProfileFactoryNode
// (None)

class UClass* UInterchangeTextureLightProfileFactoryNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeTextureLightProfileFactoryNode");

	return Clss;
}


// InterchangeTextureLightProfileFactoryNode InterchangeFactoryNodes.Default__InterchangeTextureLightProfileFactoryNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeTextureLightProfileFactoryNode* UInterchangeTextureLightProfileFactoryNode::GetDefaultObj()
{
	static class UInterchangeTextureLightProfileFactoryNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeTextureLightProfileFactoryNode*>(UInterchangeTextureLightProfileFactoryNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeFactoryNodes.InterchangeTextureLightProfileFactoryNode.SetCustomTextureMultiplier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureLightProfileFactoryNode::SetCustomTextureMultiplier(float AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureLightProfileFactoryNode", "SetCustomTextureMultiplier");

	Params::UInterchangeTextureLightProfileFactoryNode_SetCustomTextureMultiplier_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureLightProfileFactoryNode.SetCustomBrightness
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureLightProfileFactoryNode::SetCustomBrightness(float AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureLightProfileFactoryNode", "SetCustomBrightness");

	Params::UInterchangeTextureLightProfileFactoryNode_SetCustomBrightness_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureLightProfileFactoryNode.GetCustomTextureMultiplier
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureLightProfileFactoryNode::GetCustomTextureMultiplier(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureLightProfileFactoryNode", "GetCustomTextureMultiplier");

	Params::UInterchangeTextureLightProfileFactoryNode_GetCustomTextureMultiplier_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeTextureLightProfileFactoryNode.GetCustomBrightness
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeTextureLightProfileFactoryNode::GetCustomBrightness(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeTextureLightProfileFactoryNode", "GetCustomBrightness");

	Params::UInterchangeTextureLightProfileFactoryNode_GetCustomBrightness_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Class InterchangeFactoryNodes.InterchangeVolumeTextureFactoryNode
// (None)

class UClass* UInterchangeVolumeTextureFactoryNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeVolumeTextureFactoryNode");

	return Clss;
}


// InterchangeVolumeTextureFactoryNode InterchangeFactoryNodes.Default__InterchangeVolumeTextureFactoryNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeVolumeTextureFactoryNode* UInterchangeVolumeTextureFactoryNode::GetDefaultObj()
{
	static class UInterchangeVolumeTextureFactoryNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeVolumeTextureFactoryNode*>(UInterchangeVolumeTextureFactoryNode::StaticClass()->DefaultObject);

	return Default;
}


// Class InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode
// (None)

class UClass* UInterchangeAnimSequenceFactoryNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeAnimSequenceFactoryNode");

	return Clss;
}


// InterchangeAnimSequenceFactoryNode InterchangeFactoryNodes.Default__InterchangeAnimSequenceFactoryNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeAnimSequenceFactoryNode* UInterchangeAnimSequenceFactoryNode::GetDefaultObj()
{
	static class UInterchangeAnimSequenceFactoryNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeAnimSequenceFactoryNode*>(UInterchangeAnimSequenceFactoryNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomSkeletonSoftObjectPath
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSoftObjectPath             AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimSequenceFactoryNode::SetCustomSkeletonSoftObjectPath(struct FSoftObjectPath& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimSequenceFactoryNode", "SetCustomSkeletonSoftObjectPath");

	Params::UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonSoftObjectPath_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomSkeletonFactoryNodeUid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimSequenceFactoryNode::SetCustomSkeletonFactoryNodeUid(const class FString& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimSequenceFactoryNode", "SetCustomSkeletonFactoryNodeUid");

	Params::UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonFactoryNodeUid_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomRemoveCurveRedundantKeys
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimSequenceFactoryNode::SetCustomRemoveCurveRedundantKeys(bool& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimSequenceFactoryNode", "SetCustomRemoveCurveRedundantKeys");

	Params::UInterchangeAnimSequenceFactoryNode_SetCustomRemoveCurveRedundantKeys_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomMaterialDriveParameterOnCustomAttribute
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimSequenceFactoryNode::SetCustomMaterialDriveParameterOnCustomAttribute(bool& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimSequenceFactoryNode", "SetCustomMaterialDriveParameterOnCustomAttribute");

	Params::UInterchangeAnimSequenceFactoryNode_SetCustomMaterialDriveParameterOnCustomAttribute_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomImportBoneTracksSampleRate
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// double                             AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimSequenceFactoryNode::SetCustomImportBoneTracksSampleRate(double& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimSequenceFactoryNode", "SetCustomImportBoneTracksSampleRate");

	Params::UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksSampleRate_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomImportBoneTracksRangeStop
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// double                             AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimSequenceFactoryNode::SetCustomImportBoneTracksRangeStop(double& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimSequenceFactoryNode", "SetCustomImportBoneTracksRangeStop");

	Params::UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStop_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomImportBoneTracksRangeStart
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// double                             AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimSequenceFactoryNode::SetCustomImportBoneTracksRangeStart(double& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimSequenceFactoryNode", "SetCustomImportBoneTracksRangeStart");

	Params::UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStart_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomImportBoneTracks
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimSequenceFactoryNode::SetCustomImportBoneTracks(bool& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimSequenceFactoryNode", "SetCustomImportBoneTracks");

	Params::UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracks_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomImportAttributeCurves
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimSequenceFactoryNode::SetCustomImportAttributeCurves(bool& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimSequenceFactoryNode", "SetCustomImportAttributeCurves");

	Params::UInterchangeAnimSequenceFactoryNode_SetCustomImportAttributeCurves_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomDoNotImportCurveWithZero
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimSequenceFactoryNode::SetCustomDoNotImportCurveWithZero(bool& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimSequenceFactoryNode", "SetCustomDoNotImportCurveWithZero");

	Params::UInterchangeAnimSequenceFactoryNode_SetCustomDoNotImportCurveWithZero_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomDeleteExistingNonCurveCustomAttributes
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimSequenceFactoryNode::SetCustomDeleteExistingNonCurveCustomAttributes(bool& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimSequenceFactoryNode", "SetCustomDeleteExistingNonCurveCustomAttributes");

	Params::UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingNonCurveCustomAttributes_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomDeleteExistingMorphTargetCurves
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimSequenceFactoryNode::SetCustomDeleteExistingMorphTargetCurves(bool& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimSequenceFactoryNode", "SetCustomDeleteExistingMorphTargetCurves");

	Params::UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingMorphTargetCurves_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomDeleteExistingCustomAttributeCurves
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimSequenceFactoryNode::SetCustomDeleteExistingCustomAttributeCurves(bool& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimSequenceFactoryNode", "SetCustomDeleteExistingCustomAttributeCurves");

	Params::UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingCustomAttributeCurves_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomAddCurveMetadataToSkeleton
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimSequenceFactoryNode::SetCustomAddCurveMetadataToSkeleton(bool& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimSequenceFactoryNode", "SetCustomAddCurveMetadataToSkeleton");

	Params::UInterchangeAnimSequenceFactoryNode_SetCustomAddCurveMetadataToSkeleton_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetAnimationPayloadKeysForSceneNodeUids
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TMap<class FString, class FString> SceneNodeAnimationPayloadKeyUids                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TMap<class FString, uint8>         SceneNodeAnimationPayloadKeyTypes                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UInterchangeAnimSequenceFactoryNode::SetAnimationPayloadKeysForSceneNodeUids(TMap<class FString, class FString>& SceneNodeAnimationPayloadKeyUids, TMap<class FString, uint8>& SceneNodeAnimationPayloadKeyTypes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimSequenceFactoryNode", "SetAnimationPayloadKeysForSceneNodeUids");

	Params::UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForSceneNodeUids_Params Parms{};

	Parms.SceneNodeAnimationPayloadKeyUids = SceneNodeAnimationPayloadKeyUids;
	Parms.SceneNodeAnimationPayloadKeyTypes = SceneNodeAnimationPayloadKeyTypes;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetAnimationPayloadKeysForMorphTargetNodeUids
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TMap<class FString, class FString> MorphTargetAnimationPayloadKeyUids                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TMap<class FString, uint8>         MorphTargetAnimationPayloadKeyTypes                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UInterchangeAnimSequenceFactoryNode::SetAnimationPayloadKeysForMorphTargetNodeUids(TMap<class FString, class FString>& MorphTargetAnimationPayloadKeyUids, TMap<class FString, uint8>& MorphTargetAnimationPayloadKeyTypes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimSequenceFactoryNode", "SetAnimationPayloadKeysForMorphTargetNodeUids");

	Params::UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForMorphTargetNodeUids_Params Parms{};

	Parms.MorphTargetAnimationPayloadKeyUids = MorphTargetAnimationPayloadKeyUids;
	Parms.MorphTargetAnimationPayloadKeyTypes = MorphTargetAnimationPayloadKeyTypes;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetAnimatedMaterialCurveSuffixe
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      MaterialCurveSuffixe                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimSequenceFactoryNode::SetAnimatedMaterialCurveSuffixe(const class FString& MaterialCurveSuffixe)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimSequenceFactoryNode", "SetAnimatedMaterialCurveSuffixe");

	Params::UInterchangeAnimSequenceFactoryNode_SetAnimatedMaterialCurveSuffixe_Params Parms{};

	Parms.MaterialCurveSuffixe = MaterialCurveSuffixe;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetAnimatedAttributeStepCurveName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AttributeStepCurveName                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimSequenceFactoryNode::SetAnimatedAttributeStepCurveName(const class FString& AttributeStepCurveName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimSequenceFactoryNode", "SetAnimatedAttributeStepCurveName");

	Params::UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeStepCurveName_Params Parms{};

	Parms.AttributeStepCurveName = AttributeStepCurveName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetAnimatedAttributeCurveName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AttributeCurveName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimSequenceFactoryNode::SetAnimatedAttributeCurveName(const class FString& AttributeCurveName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimSequenceFactoryNode", "SetAnimatedAttributeCurveName");

	Params::UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeCurveName_Params Parms{};

	Parms.AttributeCurveName = AttributeCurveName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.RemoveAnimatedMaterialCurveSuffixe
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      MaterialCurveSuffixe                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimSequenceFactoryNode::RemoveAnimatedMaterialCurveSuffixe(const class FString& MaterialCurveSuffixe)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimSequenceFactoryNode", "RemoveAnimatedMaterialCurveSuffixe");

	Params::UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMaterialCurveSuffixe_Params Parms{};

	Parms.MaterialCurveSuffixe = MaterialCurveSuffixe;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.RemoveAnimatedAttributeStepCurveName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AttributeStepCurveName                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimSequenceFactoryNode::RemoveAnimatedAttributeStepCurveName(const class FString& AttributeStepCurveName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimSequenceFactoryNode", "RemoveAnimatedAttributeStepCurveName");

	Params::UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeStepCurveName_Params Parms{};

	Parms.AttributeStepCurveName = AttributeStepCurveName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.RemoveAnimatedAttributeCurveName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AttributeCurveName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimSequenceFactoryNode::RemoveAnimatedAttributeCurveName(const class FString& AttributeCurveName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimSequenceFactoryNode", "RemoveAnimatedAttributeCurveName");

	Params::UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeCurveName_Params Parms{};

	Parms.AttributeCurveName = AttributeCurveName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.InitializeAnimSequenceNode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      UniqueID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      DisplayLabel                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInterchangeAnimSequenceFactoryNode::InitializeAnimSequenceNode(const class FString& UniqueID, const class FString& DisplayLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimSequenceFactoryNode", "InitializeAnimSequenceNode");

	Params::UInterchangeAnimSequenceFactoryNode_InitializeAnimSequenceNode_Params Parms{};

	Parms.UniqueID = UniqueID;
	Parms.DisplayLabel = DisplayLabel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetSceneNodeAnimationPayloadKeys
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<class FString, struct FInterchangeAnimationPayLoadKey>OutSceneNodeAnimationPayloadKeys                                 (Parm, OutParm, NativeAccessSpecifierPublic)

void UInterchangeAnimSequenceFactoryNode::GetSceneNodeAnimationPayloadKeys(TMap<class FString, struct FInterchangeAnimationPayLoadKey>* OutSceneNodeAnimationPayloadKeys)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimSequenceFactoryNode", "GetSceneNodeAnimationPayloadKeys");

	Params::UInterchangeAnimSequenceFactoryNode_GetSceneNodeAnimationPayloadKeys_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutSceneNodeAnimationPayloadKeys != nullptr)
		*OutSceneNodeAnimationPayloadKeys = Parms.OutSceneNodeAnimationPayloadKeys;

}


// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetObjectClass
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UClass* UInterchangeAnimSequenceFactoryNode::GetObjectClass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimSequenceFactoryNode", "GetObjectClass");

	Params::UInterchangeAnimSequenceFactoryNode_GetObjectClass_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetMorphTargetNodeAnimationPayloadKeys
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<class FString, struct FInterchangeAnimationPayLoadKey>OutMorphTargetNodeAnimationPayloads                              (Parm, OutParm, NativeAccessSpecifierPublic)

void UInterchangeAnimSequenceFactoryNode::GetMorphTargetNodeAnimationPayloadKeys(TMap<class FString, struct FInterchangeAnimationPayLoadKey>* OutMorphTargetNodeAnimationPayloads)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimSequenceFactoryNode", "GetMorphTargetNodeAnimationPayloadKeys");

	Params::UInterchangeAnimSequenceFactoryNode_GetMorphTargetNodeAnimationPayloadKeys_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutMorphTargetNodeAnimationPayloads != nullptr)
		*OutMorphTargetNodeAnimationPayloads = Parms.OutMorphTargetNodeAnimationPayloads;

}


// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomSkeletonSoftObjectPath
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSoftObjectPath             AttributeValue                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimSequenceFactoryNode::GetCustomSkeletonSoftObjectPath(struct FSoftObjectPath* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimSequenceFactoryNode", "GetCustomSkeletonSoftObjectPath");

	Params::UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonSoftObjectPath_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomSkeletonFactoryNodeUid
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimSequenceFactoryNode::GetCustomSkeletonFactoryNodeUid(class FString* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimSequenceFactoryNode", "GetCustomSkeletonFactoryNodeUid");

	Params::UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonFactoryNodeUid_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomRemoveCurveRedundantKeys
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimSequenceFactoryNode::GetCustomRemoveCurveRedundantKeys(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimSequenceFactoryNode", "GetCustomRemoveCurveRedundantKeys");

	Params::UInterchangeAnimSequenceFactoryNode_GetCustomRemoveCurveRedundantKeys_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomMaterialDriveParameterOnCustomAttribute
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimSequenceFactoryNode::GetCustomMaterialDriveParameterOnCustomAttribute(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimSequenceFactoryNode", "GetCustomMaterialDriveParameterOnCustomAttribute");

	Params::UInterchangeAnimSequenceFactoryNode_GetCustomMaterialDriveParameterOnCustomAttribute_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomImportBoneTracksSampleRate
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// double                             AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimSequenceFactoryNode::GetCustomImportBoneTracksSampleRate(double* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimSequenceFactoryNode", "GetCustomImportBoneTracksSampleRate");

	Params::UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksSampleRate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomImportBoneTracksRangeStop
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// double                             AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimSequenceFactoryNode::GetCustomImportBoneTracksRangeStop(double* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimSequenceFactoryNode", "GetCustomImportBoneTracksRangeStop");

	Params::UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStop_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomImportBoneTracksRangeStart
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// double                             AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimSequenceFactoryNode::GetCustomImportBoneTracksRangeStart(double* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimSequenceFactoryNode", "GetCustomImportBoneTracksRangeStart");

	Params::UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStart_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomImportBoneTracks
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimSequenceFactoryNode::GetCustomImportBoneTracks(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimSequenceFactoryNode", "GetCustomImportBoneTracks");

	Params::UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracks_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomImportAttributeCurves
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimSequenceFactoryNode::GetCustomImportAttributeCurves(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimSequenceFactoryNode", "GetCustomImportAttributeCurves");

	Params::UInterchangeAnimSequenceFactoryNode_GetCustomImportAttributeCurves_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomDoNotImportCurveWithZero
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimSequenceFactoryNode::GetCustomDoNotImportCurveWithZero(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimSequenceFactoryNode", "GetCustomDoNotImportCurveWithZero");

	Params::UInterchangeAnimSequenceFactoryNode_GetCustomDoNotImportCurveWithZero_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomDeleteExistingNonCurveCustomAttributes
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimSequenceFactoryNode::GetCustomDeleteExistingNonCurveCustomAttributes(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimSequenceFactoryNode", "GetCustomDeleteExistingNonCurveCustomAttributes");

	Params::UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingNonCurveCustomAttributes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomDeleteExistingMorphTargetCurves
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimSequenceFactoryNode::GetCustomDeleteExistingMorphTargetCurves(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimSequenceFactoryNode", "GetCustomDeleteExistingMorphTargetCurves");

	Params::UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingMorphTargetCurves_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomDeleteExistingCustomAttributeCurves
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimSequenceFactoryNode::GetCustomDeleteExistingCustomAttributeCurves(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimSequenceFactoryNode", "GetCustomDeleteExistingCustomAttributeCurves");

	Params::UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingCustomAttributeCurves_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomAddCurveMetadataToSkeleton
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeAnimSequenceFactoryNode::GetCustomAddCurveMetadataToSkeleton(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimSequenceFactoryNode", "GetCustomAddCurveMetadataToSkeleton");

	Params::UInterchangeAnimSequenceFactoryNode_GetCustomAddCurveMetadataToSkeleton_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedMaterialCurveSuffixesCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UInterchangeAnimSequenceFactoryNode::GetAnimatedMaterialCurveSuffixesCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimSequenceFactoryNode", "GetAnimatedMaterialCurveSuffixesCount");

	Params::UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixesCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedMaterialCurveSuffixes
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              OutMaterialCurveSuffixes                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UInterchangeAnimSequenceFactoryNode::GetAnimatedMaterialCurveSuffixes(TArray<class FString>* OutMaterialCurveSuffixes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimSequenceFactoryNode", "GetAnimatedMaterialCurveSuffixes");

	Params::UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutMaterialCurveSuffixes != nullptr)
		*OutMaterialCurveSuffixes = Parms.OutMaterialCurveSuffixes;

}


// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedMaterialCurveSuffixe
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutMaterialCurveSuffixe                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInterchangeAnimSequenceFactoryNode::GetAnimatedMaterialCurveSuffixe(int32 Index, class FString* OutMaterialCurveSuffixe)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimSequenceFactoryNode", "GetAnimatedMaterialCurveSuffixe");

	Params::UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixe_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutMaterialCurveSuffixe != nullptr)
		*OutMaterialCurveSuffixe = Parms.OutMaterialCurveSuffixe;

}


// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedAttributeStepCurveNamesCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UInterchangeAnimSequenceFactoryNode::GetAnimatedAttributeStepCurveNamesCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimSequenceFactoryNode", "GetAnimatedAttributeStepCurveNamesCount");

	Params::UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNamesCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedAttributeStepCurveNames
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              OutAttributeStepCurveNames                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UInterchangeAnimSequenceFactoryNode::GetAnimatedAttributeStepCurveNames(TArray<class FString>* OutAttributeStepCurveNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimSequenceFactoryNode", "GetAnimatedAttributeStepCurveNames");

	Params::UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutAttributeStepCurveNames != nullptr)
		*OutAttributeStepCurveNames = Parms.OutAttributeStepCurveNames;

}


// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedAttributeStepCurveName
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutAttributeStepCurveName                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInterchangeAnimSequenceFactoryNode::GetAnimatedAttributeStepCurveName(int32 Index, class FString* OutAttributeStepCurveName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimSequenceFactoryNode", "GetAnimatedAttributeStepCurveName");

	Params::UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveName_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutAttributeStepCurveName != nullptr)
		*OutAttributeStepCurveName = Parms.OutAttributeStepCurveName;

}


// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedAttributeCurveNamesCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UInterchangeAnimSequenceFactoryNode::GetAnimatedAttributeCurveNamesCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimSequenceFactoryNode", "GetAnimatedAttributeCurveNamesCount");

	Params::UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNamesCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedAttributeCurveNames
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              OutAttributeCurveNames                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UInterchangeAnimSequenceFactoryNode::GetAnimatedAttributeCurveNames(TArray<class FString>* OutAttributeCurveNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimSequenceFactoryNode", "GetAnimatedAttributeCurveNames");

	Params::UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutAttributeCurveNames != nullptr)
		*OutAttributeCurveNames = Parms.OutAttributeCurveNames;

}


// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedAttributeCurveName
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutAttributeCurveName                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInterchangeAnimSequenceFactoryNode::GetAnimatedAttributeCurveName(int32 Index, class FString* OutAttributeCurveName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAnimSequenceFactoryNode", "GetAnimatedAttributeCurveName");

	Params::UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveName_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutAttributeCurveName != nullptr)
		*OutAttributeCurveName = Parms.OutAttributeCurveName;

}


// Class InterchangeFactoryNodes.InterchangeCommonPipelineDataFactoryNode
// (None)

class UClass* UInterchangeCommonPipelineDataFactoryNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeCommonPipelineDataFactoryNode");

	return Clss;
}


// InterchangeCommonPipelineDataFactoryNode InterchangeFactoryNodes.Default__InterchangeCommonPipelineDataFactoryNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeCommonPipelineDataFactoryNode* UInterchangeCommonPipelineDataFactoryNode::GetDefaultObj()
{
	static class UInterchangeCommonPipelineDataFactoryNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeCommonPipelineDataFactoryNode*>(UInterchangeCommonPipelineDataFactoryNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeFactoryNodes.InterchangeCommonPipelineDataFactoryNode.SetCustomGlobalOffsetTransform
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UInterchangeBaseNodeContainer*NodeContainer                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  AttributeValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeCommonPipelineDataFactoryNode::SetCustomGlobalOffsetTransform(class UInterchangeBaseNodeContainer* NodeContainer, struct FTransform& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeCommonPipelineDataFactoryNode", "SetCustomGlobalOffsetTransform");

	Params::UInterchangeCommonPipelineDataFactoryNode_SetCustomGlobalOffsetTransform_Params Parms{};

	Parms.NodeContainer = NodeContainer;
	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeCommonPipelineDataFactoryNode.SetBakeMeshes
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UInterchangeBaseNodeContainer*NodeContainer                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeCommonPipelineDataFactoryNode::SetBakeMeshes(class UInterchangeBaseNodeContainer* NodeContainer, bool& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeCommonPipelineDataFactoryNode", "SetBakeMeshes");

	Params::UInterchangeCommonPipelineDataFactoryNode_SetBakeMeshes_Params Parms{};

	Parms.NodeContainer = NodeContainer;
	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeCommonPipelineDataFactoryNode.GetCustomGlobalOffsetTransform
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform                  AttributeValue                                                   (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeCommonPipelineDataFactoryNode::GetCustomGlobalOffsetTransform(struct FTransform* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeCommonPipelineDataFactoryNode", "GetCustomGlobalOffsetTransform");

	Params::UInterchangeCommonPipelineDataFactoryNode_GetCustomGlobalOffsetTransform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeCommonPipelineDataFactoryNode.GetBakeMeshes
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeCommonPipelineDataFactoryNode::GetBakeMeshes(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeCommonPipelineDataFactoryNode", "GetBakeMeshes");

	Params::UInterchangeCommonPipelineDataFactoryNode_GetBakeMeshes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Class InterchangeFactoryNodes.InterchangeBaseMaterialFactoryNode
// (None)

class UClass* UInterchangeBaseMaterialFactoryNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeBaseMaterialFactoryNode");

	return Clss;
}


// InterchangeBaseMaterialFactoryNode InterchangeFactoryNodes.Default__InterchangeBaseMaterialFactoryNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeBaseMaterialFactoryNode* UInterchangeBaseMaterialFactoryNode::GetDefaultObj()
{
	static class UInterchangeBaseMaterialFactoryNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeBaseMaterialFactoryNode*>(UInterchangeBaseMaterialFactoryNode::StaticClass()->DefaultObject);

	return Default;
}


// Class InterchangeFactoryNodes.InterchangeMaterialFactoryNode
// (None)

class UClass* UInterchangeMaterialFactoryNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeMaterialFactoryNode");

	return Clss;
}


// InterchangeMaterialFactoryNode InterchangeFactoryNodes.Default__InterchangeMaterialFactoryNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeMaterialFactoryNode* UInterchangeMaterialFactoryNode::GetDefaultObj()
{
	static class UInterchangeMaterialFactoryNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeMaterialFactoryNode*>(UInterchangeMaterialFactoryNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomTwoSided
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::SetCustomTwoSided(bool& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "SetCustomTwoSided");

	Params::UInterchangeMaterialFactoryNode_SetCustomTwoSided_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomTranslucencyLightingMode
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class ETranslucencyLightingModeAttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::SetCustomTranslucencyLightingMode(enum class ETranslucencyLightingMode& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "SetCustomTranslucencyLightingMode");

	Params::UInterchangeMaterialFactoryNode_SetCustomTranslucencyLightingMode_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomShadingModel
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EMaterialShadingModel   AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::SetCustomShadingModel(enum class EMaterialShadingModel& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "SetCustomShadingModel");

	Params::UInterchangeMaterialFactoryNode_SetCustomShadingModel_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomScreenSpaceReflections
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::SetCustomScreenSpaceReflections(bool& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "SetCustomScreenSpaceReflections");

	Params::UInterchangeMaterialFactoryNode_SetCustomScreenSpaceReflections_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomRefractionMethod
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class ERefractionMode         AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::SetCustomRefractionMethod(enum class ERefractionMode& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "SetCustomRefractionMethod");

	Params::UInterchangeMaterialFactoryNode_SetCustomRefractionMethod_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomOpacityMaskClipValue
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::SetCustomOpacityMaskClipValue(float& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "SetCustomOpacityMaskClipValue");

	Params::UInterchangeMaterialFactoryNode_SetCustomOpacityMaskClipValue_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomBlendMode
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EBlendMode              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::SetCustomBlendMode(enum class EBlendMode& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "SetCustomBlendMode");

	Params::UInterchangeMaterialFactoryNode_SetCustomBlendMode_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetTransmissionColorConnection
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ExpressionNodeUid                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutputName                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::GetTransmissionColorConnection(class FString* ExpressionNodeUid, class FString* OutputName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "GetTransmissionColorConnection");

	Params::UInterchangeMaterialFactoryNode_GetTransmissionColorConnection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ExpressionNodeUid != nullptr)
		*ExpressionNodeUid = Parms.ExpressionNodeUid;

	if (OutputName != nullptr)
		*OutputName = Parms.OutputName;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetTangentConnection
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ExpressionNodeUid                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutputName                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::GetTangentConnection(class FString* ExpressionNodeUid, class FString* OutputName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "GetTangentConnection");

	Params::UInterchangeMaterialFactoryNode_GetTangentConnection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ExpressionNodeUid != nullptr)
		*ExpressionNodeUid = Parms.ExpressionNodeUid;

	if (OutputName != nullptr)
		*OutputName = Parms.OutputName;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetSubsurfaceConnection
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ExpressionNodeUid                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutputName                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::GetSubsurfaceConnection(class FString* ExpressionNodeUid, class FString* OutputName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "GetSubsurfaceConnection");

	Params::UInterchangeMaterialFactoryNode_GetSubsurfaceConnection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ExpressionNodeUid != nullptr)
		*ExpressionNodeUid = Parms.ExpressionNodeUid;

	if (OutputName != nullptr)
		*OutputName = Parms.OutputName;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetSpecularConnection
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ExpressionNodeUid                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutputName                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::GetSpecularConnection(class FString* ExpressionNodeUid, class FString* OutputName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "GetSpecularConnection");

	Params::UInterchangeMaterialFactoryNode_GetSpecularConnection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ExpressionNodeUid != nullptr)
		*ExpressionNodeUid = Parms.ExpressionNodeUid;

	if (OutputName != nullptr)
		*OutputName = Parms.OutputName;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetRoughnessConnection
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ExpressionNodeUid                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutputName                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::GetRoughnessConnection(class FString* ExpressionNodeUid, class FString* OutputName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "GetRoughnessConnection");

	Params::UInterchangeMaterialFactoryNode_GetRoughnessConnection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ExpressionNodeUid != nullptr)
		*ExpressionNodeUid = Parms.ExpressionNodeUid;

	if (OutputName != nullptr)
		*OutputName = Parms.OutputName;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetRefractionConnection
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ExpressionNodeUid                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutputName                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::GetRefractionConnection(class FString* ExpressionNodeUid, class FString* OutputName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "GetRefractionConnection");

	Params::UInterchangeMaterialFactoryNode_GetRefractionConnection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ExpressionNodeUid != nullptr)
		*ExpressionNodeUid = Parms.ExpressionNodeUid;

	if (OutputName != nullptr)
		*OutputName = Parms.OutputName;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetOpacityConnection
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ExpressionNodeUid                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutputName                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::GetOpacityConnection(class FString* ExpressionNodeUid, class FString* OutputName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "GetOpacityConnection");

	Params::UInterchangeMaterialFactoryNode_GetOpacityConnection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ExpressionNodeUid != nullptr)
		*ExpressionNodeUid = Parms.ExpressionNodeUid;

	if (OutputName != nullptr)
		*OutputName = Parms.OutputName;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetOcclusionConnection
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ExpressionNodeUid                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutputName                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::GetOcclusionConnection(class FString* ExpressionNodeUid, class FString* OutputName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "GetOcclusionConnection");

	Params::UInterchangeMaterialFactoryNode_GetOcclusionConnection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ExpressionNodeUid != nullptr)
		*ExpressionNodeUid = Parms.ExpressionNodeUid;

	if (OutputName != nullptr)
		*OutputName = Parms.OutputName;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetObjectClass
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UClass* UInterchangeMaterialFactoryNode::GetObjectClass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "GetObjectClass");

	Params::UInterchangeMaterialFactoryNode_GetObjectClass_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetNormalConnection
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ExpressionNodeUid                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutputName                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::GetNormalConnection(class FString* ExpressionNodeUid, class FString* OutputName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "GetNormalConnection");

	Params::UInterchangeMaterialFactoryNode_GetNormalConnection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ExpressionNodeUid != nullptr)
		*ExpressionNodeUid = Parms.ExpressionNodeUid;

	if (OutputName != nullptr)
		*OutputName = Parms.OutputName;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetMetallicConnection
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ExpressionNodeUid                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutputName                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::GetMetallicConnection(class FString* ExpressionNodeUid, class FString* OutputName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "GetMetallicConnection");

	Params::UInterchangeMaterialFactoryNode_GetMetallicConnection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ExpressionNodeUid != nullptr)
		*ExpressionNodeUid = Parms.ExpressionNodeUid;

	if (OutputName != nullptr)
		*OutputName = Parms.OutputName;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetFuzzColorConnection
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ExpressionNodeUid                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutputName                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::GetFuzzColorConnection(class FString* ExpressionNodeUid, class FString* OutputName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "GetFuzzColorConnection");

	Params::UInterchangeMaterialFactoryNode_GetFuzzColorConnection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ExpressionNodeUid != nullptr)
		*ExpressionNodeUid = Parms.ExpressionNodeUid;

	if (OutputName != nullptr)
		*OutputName = Parms.OutputName;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetEmissiveColorConnection
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ExpressionNodeUid                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutputName                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::GetEmissiveColorConnection(class FString* ExpressionNodeUid, class FString* OutputName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "GetEmissiveColorConnection");

	Params::UInterchangeMaterialFactoryNode_GetEmissiveColorConnection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ExpressionNodeUid != nullptr)
		*ExpressionNodeUid = Parms.ExpressionNodeUid;

	if (OutputName != nullptr)
		*OutputName = Parms.OutputName;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomTwoSided
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::GetCustomTwoSided(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "GetCustomTwoSided");

	Params::UInterchangeMaterialFactoryNode_GetCustomTwoSided_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomTranslucencyLightingMode
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ETranslucencyLightingModeAttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::GetCustomTranslucencyLightingMode(enum class ETranslucencyLightingMode* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "GetCustomTranslucencyLightingMode");

	Params::UInterchangeMaterialFactoryNode_GetCustomTranslucencyLightingMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomShadingModel
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EMaterialShadingModel   AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::GetCustomShadingModel(enum class EMaterialShadingModel* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "GetCustomShadingModel");

	Params::UInterchangeMaterialFactoryNode_GetCustomShadingModel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomScreenSpaceReflections
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::GetCustomScreenSpaceReflections(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "GetCustomScreenSpaceReflections");

	Params::UInterchangeMaterialFactoryNode_GetCustomScreenSpaceReflections_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomRefractionMethod
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ERefractionMode         AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::GetCustomRefractionMethod(enum class ERefractionMode* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "GetCustomRefractionMethod");

	Params::UInterchangeMaterialFactoryNode_GetCustomRefractionMethod_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomOpacityMaskClipValue
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::GetCustomOpacityMaskClipValue(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "GetCustomOpacityMaskClipValue");

	Params::UInterchangeMaterialFactoryNode_GetCustomOpacityMaskClipValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomBlendMode
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EBlendMode              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::GetCustomBlendMode(enum class EBlendMode* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "GetCustomBlendMode");

	Params::UInterchangeMaterialFactoryNode_GetCustomBlendMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetClothConnection
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ExpressionNodeUid                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutputName                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::GetClothConnection(class FString* ExpressionNodeUid, class FString* OutputName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "GetClothConnection");

	Params::UInterchangeMaterialFactoryNode_GetClothConnection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ExpressionNodeUid != nullptr)
		*ExpressionNodeUid = Parms.ExpressionNodeUid;

	if (OutputName != nullptr)
		*OutputName = Parms.OutputName;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetClearCoatRoughnessConnection
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ExpressionNodeUid                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutputName                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::GetClearCoatRoughnessConnection(class FString* ExpressionNodeUid, class FString* OutputName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "GetClearCoatRoughnessConnection");

	Params::UInterchangeMaterialFactoryNode_GetClearCoatRoughnessConnection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ExpressionNodeUid != nullptr)
		*ExpressionNodeUid = Parms.ExpressionNodeUid;

	if (OutputName != nullptr)
		*OutputName = Parms.OutputName;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetClearCoatNormalConnection
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ExpressionNodeUid                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutputName                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::GetClearCoatNormalConnection(class FString* ExpressionNodeUid, class FString* OutputName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "GetClearCoatNormalConnection");

	Params::UInterchangeMaterialFactoryNode_GetClearCoatNormalConnection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ExpressionNodeUid != nullptr)
		*ExpressionNodeUid = Parms.ExpressionNodeUid;

	if (OutputName != nullptr)
		*OutputName = Parms.OutputName;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetClearCoatConnection
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ExpressionNodeUid                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutputName                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::GetClearCoatConnection(class FString* ExpressionNodeUid, class FString* OutputName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "GetClearCoatConnection");

	Params::UInterchangeMaterialFactoryNode_GetClearCoatConnection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ExpressionNodeUid != nullptr)
		*ExpressionNodeUid = Parms.ExpressionNodeUid;

	if (OutputName != nullptr)
		*OutputName = Parms.OutputName;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetBaseColorConnection
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ExpressionNodeUid                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutputName                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::GetBaseColorConnection(class FString* ExpressionNodeUid, class FString* OutputName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "GetBaseColorConnection");

	Params::UInterchangeMaterialFactoryNode_GetBaseColorConnection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ExpressionNodeUid != nullptr)
		*ExpressionNodeUid = Parms.ExpressionNodeUid;

	if (OutputName != nullptr)
		*OutputName = Parms.OutputName;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetAnisotropyConnection
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ExpressionNodeUid                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutputName                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::GetAnisotropyConnection(class FString* ExpressionNodeUid, class FString* OutputName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "GetAnisotropyConnection");

	Params::UInterchangeMaterialFactoryNode_GetAnisotropyConnection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ExpressionNodeUid != nullptr)
		*ExpressionNodeUid = Parms.ExpressionNodeUid;

	if (OutputName != nullptr)
		*OutputName = Parms.OutputName;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToTransmissionColor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::ConnectToTransmissionColor(const class FString& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "ConnectToTransmissionColor");

	Params::UInterchangeMaterialFactoryNode_ConnectToTransmissionColor_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToTangent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ExpressionNodeUid                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::ConnectToTangent(const class FString& ExpressionNodeUid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "ConnectToTangent");

	Params::UInterchangeMaterialFactoryNode_ConnectToTangent_Params Parms{};

	Parms.ExpressionNodeUid = ExpressionNodeUid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToSubsurface
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ExpressionNodeUid                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::ConnectToSubsurface(const class FString& ExpressionNodeUid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "ConnectToSubsurface");

	Params::UInterchangeMaterialFactoryNode_ConnectToSubsurface_Params Parms{};

	Parms.ExpressionNodeUid = ExpressionNodeUid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToSpecular
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ExpressionNodeUid                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::ConnectToSpecular(const class FString& ExpressionNodeUid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "ConnectToSpecular");

	Params::UInterchangeMaterialFactoryNode_ConnectToSpecular_Params Parms{};

	Parms.ExpressionNodeUid = ExpressionNodeUid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToRoughness
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ExpressionNodeUid                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::ConnectToRoughness(const class FString& ExpressionNodeUid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "ConnectToRoughness");

	Params::UInterchangeMaterialFactoryNode_ConnectToRoughness_Params Parms{};

	Parms.ExpressionNodeUid = ExpressionNodeUid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToRefraction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::ConnectToRefraction(const class FString& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "ConnectToRefraction");

	Params::UInterchangeMaterialFactoryNode_ConnectToRefraction_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToOpacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::ConnectToOpacity(const class FString& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "ConnectToOpacity");

	Params::UInterchangeMaterialFactoryNode_ConnectToOpacity_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToOcclusion
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::ConnectToOcclusion(const class FString& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "ConnectToOcclusion");

	Params::UInterchangeMaterialFactoryNode_ConnectToOcclusion_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToNormal
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ExpressionNodeUid                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::ConnectToNormal(const class FString& ExpressionNodeUid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "ConnectToNormal");

	Params::UInterchangeMaterialFactoryNode_ConnectToNormal_Params Parms{};

	Parms.ExpressionNodeUid = ExpressionNodeUid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToMetallic
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::ConnectToMetallic(const class FString& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "ConnectToMetallic");

	Params::UInterchangeMaterialFactoryNode_ConnectToMetallic_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToFuzzColor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::ConnectToFuzzColor(const class FString& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "ConnectToFuzzColor");

	Params::UInterchangeMaterialFactoryNode_ConnectToFuzzColor_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToEmissiveColor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ExpressionNodeUid                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::ConnectToEmissiveColor(const class FString& ExpressionNodeUid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "ConnectToEmissiveColor");

	Params::UInterchangeMaterialFactoryNode_ConnectToEmissiveColor_Params Parms{};

	Parms.ExpressionNodeUid = ExpressionNodeUid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToCloth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::ConnectToCloth(const class FString& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "ConnectToCloth");

	Params::UInterchangeMaterialFactoryNode_ConnectToCloth_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToClearCoatRoughness
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::ConnectToClearCoatRoughness(const class FString& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "ConnectToClearCoatRoughness");

	Params::UInterchangeMaterialFactoryNode_ConnectToClearCoatRoughness_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToClearCoatNormal
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::ConnectToClearCoatNormal(const class FString& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "ConnectToClearCoatNormal");

	Params::UInterchangeMaterialFactoryNode_ConnectToClearCoatNormal_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToClearCoat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::ConnectToClearCoat(const class FString& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "ConnectToClearCoat");

	Params::UInterchangeMaterialFactoryNode_ConnectToClearCoat_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToBaseColor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::ConnectToBaseColor(const class FString& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "ConnectToBaseColor");

	Params::UInterchangeMaterialFactoryNode_ConnectToBaseColor_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToAnisotropy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ExpressionNodeUid                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::ConnectToAnisotropy(const class FString& ExpressionNodeUid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "ConnectToAnisotropy");

	Params::UInterchangeMaterialFactoryNode_ConnectToAnisotropy_Params Parms{};

	Parms.ExpressionNodeUid = ExpressionNodeUid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToTransmissionColor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ExpressionNodeUid                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutputName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::ConnectOutputToTransmissionColor(const class FString& ExpressionNodeUid, const class FString& OutputName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "ConnectOutputToTransmissionColor");

	Params::UInterchangeMaterialFactoryNode_ConnectOutputToTransmissionColor_Params Parms{};

	Parms.ExpressionNodeUid = ExpressionNodeUid;
	Parms.OutputName = OutputName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToTangent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ExpressionNodeUid                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutputName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::ConnectOutputToTangent(const class FString& ExpressionNodeUid, const class FString& OutputName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "ConnectOutputToTangent");

	Params::UInterchangeMaterialFactoryNode_ConnectOutputToTangent_Params Parms{};

	Parms.ExpressionNodeUid = ExpressionNodeUid;
	Parms.OutputName = OutputName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToSubsurface
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ExpressionNodeUid                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutputName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::ConnectOutputToSubsurface(const class FString& ExpressionNodeUid, const class FString& OutputName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "ConnectOutputToSubsurface");

	Params::UInterchangeMaterialFactoryNode_ConnectOutputToSubsurface_Params Parms{};

	Parms.ExpressionNodeUid = ExpressionNodeUid;
	Parms.OutputName = OutputName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToSpecular
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ExpressionNodeUid                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutputName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::ConnectOutputToSpecular(const class FString& ExpressionNodeUid, const class FString& OutputName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "ConnectOutputToSpecular");

	Params::UInterchangeMaterialFactoryNode_ConnectOutputToSpecular_Params Parms{};

	Parms.ExpressionNodeUid = ExpressionNodeUid;
	Parms.OutputName = OutputName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToRoughness
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ExpressionNodeUid                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutputName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::ConnectOutputToRoughness(const class FString& ExpressionNodeUid, const class FString& OutputName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "ConnectOutputToRoughness");

	Params::UInterchangeMaterialFactoryNode_ConnectOutputToRoughness_Params Parms{};

	Parms.ExpressionNodeUid = ExpressionNodeUid;
	Parms.OutputName = OutputName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToRefraction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ExpressionNodeUid                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutputName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::ConnectOutputToRefraction(const class FString& ExpressionNodeUid, const class FString& OutputName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "ConnectOutputToRefraction");

	Params::UInterchangeMaterialFactoryNode_ConnectOutputToRefraction_Params Parms{};

	Parms.ExpressionNodeUid = ExpressionNodeUid;
	Parms.OutputName = OutputName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToOpacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ExpressionNodeUid                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutputName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::ConnectOutputToOpacity(const class FString& ExpressionNodeUid, const class FString& OutputName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "ConnectOutputToOpacity");

	Params::UInterchangeMaterialFactoryNode_ConnectOutputToOpacity_Params Parms{};

	Parms.ExpressionNodeUid = ExpressionNodeUid;
	Parms.OutputName = OutputName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToOcclusion
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ExpressionNodeUid                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutputName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::ConnectOutputToOcclusion(const class FString& ExpressionNodeUid, const class FString& OutputName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "ConnectOutputToOcclusion");

	Params::UInterchangeMaterialFactoryNode_ConnectOutputToOcclusion_Params Parms{};

	Parms.ExpressionNodeUid = ExpressionNodeUid;
	Parms.OutputName = OutputName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToNormal
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ExpressionNodeUid                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutputName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::ConnectOutputToNormal(const class FString& ExpressionNodeUid, const class FString& OutputName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "ConnectOutputToNormal");

	Params::UInterchangeMaterialFactoryNode_ConnectOutputToNormal_Params Parms{};

	Parms.ExpressionNodeUid = ExpressionNodeUid;
	Parms.OutputName = OutputName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToMetallic
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ExpressionNodeUid                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutputName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::ConnectOutputToMetallic(const class FString& ExpressionNodeUid, const class FString& OutputName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "ConnectOutputToMetallic");

	Params::UInterchangeMaterialFactoryNode_ConnectOutputToMetallic_Params Parms{};

	Parms.ExpressionNodeUid = ExpressionNodeUid;
	Parms.OutputName = OutputName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToFuzzColor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ExpressionNodeUid                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutputName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::ConnectOutputToFuzzColor(const class FString& ExpressionNodeUid, const class FString& OutputName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "ConnectOutputToFuzzColor");

	Params::UInterchangeMaterialFactoryNode_ConnectOutputToFuzzColor_Params Parms{};

	Parms.ExpressionNodeUid = ExpressionNodeUid;
	Parms.OutputName = OutputName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToEmissiveColor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ExpressionNodeUid                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutputName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::ConnectOutputToEmissiveColor(const class FString& ExpressionNodeUid, const class FString& OutputName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "ConnectOutputToEmissiveColor");

	Params::UInterchangeMaterialFactoryNode_ConnectOutputToEmissiveColor_Params Parms{};

	Parms.ExpressionNodeUid = ExpressionNodeUid;
	Parms.OutputName = OutputName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToCloth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ExpressionNodeUid                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutputName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::ConnectOutputToCloth(const class FString& ExpressionNodeUid, const class FString& OutputName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "ConnectOutputToCloth");

	Params::UInterchangeMaterialFactoryNode_ConnectOutputToCloth_Params Parms{};

	Parms.ExpressionNodeUid = ExpressionNodeUid;
	Parms.OutputName = OutputName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToClearCoatRoughness
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ExpressionNodeUid                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutputName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::ConnectOutputToClearCoatRoughness(const class FString& ExpressionNodeUid, const class FString& OutputName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "ConnectOutputToClearCoatRoughness");

	Params::UInterchangeMaterialFactoryNode_ConnectOutputToClearCoatRoughness_Params Parms{};

	Parms.ExpressionNodeUid = ExpressionNodeUid;
	Parms.OutputName = OutputName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToClearCoatNormal
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ExpressionNodeUid                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutputName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::ConnectOutputToClearCoatNormal(const class FString& ExpressionNodeUid, const class FString& OutputName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "ConnectOutputToClearCoatNormal");

	Params::UInterchangeMaterialFactoryNode_ConnectOutputToClearCoatNormal_Params Parms{};

	Parms.ExpressionNodeUid = ExpressionNodeUid;
	Parms.OutputName = OutputName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToClearCoat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ExpressionNodeUid                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutputName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::ConnectOutputToClearCoat(const class FString& ExpressionNodeUid, const class FString& OutputName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "ConnectOutputToClearCoat");

	Params::UInterchangeMaterialFactoryNode_ConnectOutputToClearCoat_Params Parms{};

	Parms.ExpressionNodeUid = ExpressionNodeUid;
	Parms.OutputName = OutputName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToBaseColor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ExpressionNodeUid                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutputName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::ConnectOutputToBaseColor(const class FString& ExpressionNodeUid, const class FString& OutputName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "ConnectOutputToBaseColor");

	Params::UInterchangeMaterialFactoryNode_ConnectOutputToBaseColor_Params Parms{};

	Parms.ExpressionNodeUid = ExpressionNodeUid;
	Parms.OutputName = OutputName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToAnisotropy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ExpressionNodeUid                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutputName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFactoryNode::ConnectOutputToAnisotropy(const class FString& ExpressionNodeUid, const class FString& OutputName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFactoryNode", "ConnectOutputToAnisotropy");

	Params::UInterchangeMaterialFactoryNode_ConnectOutputToAnisotropy_Params Parms{};

	Parms.ExpressionNodeUid = ExpressionNodeUid;
	Parms.OutputName = OutputName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class InterchangeFactoryNodes.InterchangeMaterialExpressionFactoryNode
// (None)

class UClass* UInterchangeMaterialExpressionFactoryNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeMaterialExpressionFactoryNode");

	return Clss;
}


// InterchangeMaterialExpressionFactoryNode InterchangeFactoryNodes.Default__InterchangeMaterialExpressionFactoryNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeMaterialExpressionFactoryNode* UInterchangeMaterialExpressionFactoryNode::GetDefaultObj()
{
	static class UInterchangeMaterialExpressionFactoryNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeMaterialExpressionFactoryNode*>(UInterchangeMaterialExpressionFactoryNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeFactoryNodes.InterchangeMaterialExpressionFactoryNode.SetCustomExpressionClassName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialExpressionFactoryNode::SetCustomExpressionClassName(const class FString& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialExpressionFactoryNode", "SetCustomExpressionClassName");

	Params::UInterchangeMaterialExpressionFactoryNode_SetCustomExpressionClassName_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialExpressionFactoryNode.GetCustomExpressionClassName
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialExpressionFactoryNode::GetCustomExpressionClassName(class FString* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialExpressionFactoryNode", "GetCustomExpressionClassName");

	Params::UInterchangeMaterialExpressionFactoryNode_GetCustomExpressionClassName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Class InterchangeFactoryNodes.InterchangeMaterialInstanceFactoryNode
// (None)

class UClass* UInterchangeMaterialInstanceFactoryNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeMaterialInstanceFactoryNode");

	return Clss;
}


// InterchangeMaterialInstanceFactoryNode InterchangeFactoryNodes.Default__InterchangeMaterialInstanceFactoryNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeMaterialInstanceFactoryNode* UInterchangeMaterialInstanceFactoryNode::GetDefaultObj()
{
	static class UInterchangeMaterialInstanceFactoryNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeMaterialInstanceFactoryNode*>(UInterchangeMaterialInstanceFactoryNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeFactoryNodes.InterchangeMaterialInstanceFactoryNode.SetCustomParent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialInstanceFactoryNode::SetCustomParent(const class FString& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialInstanceFactoryNode", "SetCustomParent");

	Params::UInterchangeMaterialInstanceFactoryNode_SetCustomParent_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialInstanceFactoryNode.SetCustomInstanceClassName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialInstanceFactoryNode::SetCustomInstanceClassName(const class FString& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialInstanceFactoryNode", "SetCustomInstanceClassName");

	Params::UInterchangeMaterialInstanceFactoryNode_SetCustomInstanceClassName_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialInstanceFactoryNode.GetCustomParent
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialInstanceFactoryNode::GetCustomParent(class FString* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialInstanceFactoryNode", "GetCustomParent");

	Params::UInterchangeMaterialInstanceFactoryNode_GetCustomParent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialInstanceFactoryNode.GetCustomInstanceClassName
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialInstanceFactoryNode::GetCustomInstanceClassName(class FString* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialInstanceFactoryNode", "GetCustomInstanceClassName");

	Params::UInterchangeMaterialInstanceFactoryNode_GetCustomInstanceClassName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Class InterchangeFactoryNodes.InterchangeMaterialFunctionCallExpressionFactoryNode
// (None)

class UClass* UInterchangeMaterialFunctionCallExpressionFactoryNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeMaterialFunctionCallExpressionFactoryNode");

	return Clss;
}


// InterchangeMaterialFunctionCallExpressionFactoryNode InterchangeFactoryNodes.Default__InterchangeMaterialFunctionCallExpressionFactoryNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeMaterialFunctionCallExpressionFactoryNode* UInterchangeMaterialFunctionCallExpressionFactoryNode::GetDefaultObj()
{
	static class UInterchangeMaterialFunctionCallExpressionFactoryNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeMaterialFunctionCallExpressionFactoryNode*>(UInterchangeMaterialFunctionCallExpressionFactoryNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeFactoryNodes.InterchangeMaterialFunctionCallExpressionFactoryNode.SetCustomMaterialFunctionDependency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFunctionCallExpressionFactoryNode::SetCustomMaterialFunctionDependency(const class FString& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFunctionCallExpressionFactoryNode", "SetCustomMaterialFunctionDependency");

	Params::UInterchangeMaterialFunctionCallExpressionFactoryNode_SetCustomMaterialFunctionDependency_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFunctionCallExpressionFactoryNode.GetCustomMaterialFunctionDependency
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFunctionCallExpressionFactoryNode::GetCustomMaterialFunctionDependency(class FString* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFunctionCallExpressionFactoryNode", "GetCustomMaterialFunctionDependency");

	Params::UInterchangeMaterialFunctionCallExpressionFactoryNode_GetCustomMaterialFunctionDependency_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Class InterchangeFactoryNodes.InterchangeMaterialFunctionFactoryNode
// (None)

class UClass* UInterchangeMaterialFunctionFactoryNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeMaterialFunctionFactoryNode");

	return Clss;
}


// InterchangeMaterialFunctionFactoryNode InterchangeFactoryNodes.Default__InterchangeMaterialFunctionFactoryNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeMaterialFunctionFactoryNode* UInterchangeMaterialFunctionFactoryNode::GetDefaultObj()
{
	static class UInterchangeMaterialFunctionFactoryNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeMaterialFunctionFactoryNode*>(UInterchangeMaterialFunctionFactoryNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeFactoryNodes.InterchangeMaterialFunctionFactoryNode.GetObjectClass
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UClass* UInterchangeMaterialFunctionFactoryNode::GetObjectClass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFunctionFactoryNode", "GetObjectClass");

	Params::UInterchangeMaterialFunctionFactoryNode_GetObjectClass_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMaterialFunctionFactoryNode.GetInputConnection
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      InputName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ExpressionNodeUid                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutputName                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMaterialFunctionFactoryNode::GetInputConnection(const class FString& InputName, class FString* ExpressionNodeUid, class FString* OutputName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMaterialFunctionFactoryNode", "GetInputConnection");

	Params::UInterchangeMaterialFunctionFactoryNode_GetInputConnection_Params Parms{};

	Parms.InputName = InputName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ExpressionNodeUid != nullptr)
		*ExpressionNodeUid = Parms.ExpressionNodeUid;

	if (OutputName != nullptr)
		*OutputName = Parms.OutputName;

	return Parms.ReturnValue;

}


// Class InterchangeFactoryNodes.InterchangeMeshActorFactoryNode
// (None)

class UClass* UInterchangeMeshActorFactoryNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeMeshActorFactoryNode");

	return Clss;
}


// InterchangeMeshActorFactoryNode InterchangeFactoryNodes.Default__InterchangeMeshActorFactoryNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeMeshActorFactoryNode* UInterchangeMeshActorFactoryNode::GetDefaultObj()
{
	static class UInterchangeMeshActorFactoryNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeMeshActorFactoryNode*>(UInterchangeMeshActorFactoryNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.SetSlotMaterialDependencyUid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      SlotName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      MaterialDependencyUid                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshActorFactoryNode::SetSlotMaterialDependencyUid(const class FString& SlotName, const class FString& MaterialDependencyUid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshActorFactoryNode", "SetSlotMaterialDependencyUid");

	Params::UInterchangeMeshActorFactoryNode_SetSlotMaterialDependencyUid_Params Parms{};

	Parms.SlotName = SlotName;
	Parms.MaterialDependencyUid = MaterialDependencyUid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.SetCustomGeometricTransform
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  AttributeValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshActorFactoryNode::SetCustomGeometricTransform(struct FTransform& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshActorFactoryNode", "SetCustomGeometricTransform");

	Params::UInterchangeMeshActorFactoryNode_SetCustomGeometricTransform_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.SetCustomAnimationAssetUidToPlay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshActorFactoryNode::SetCustomAnimationAssetUidToPlay(const class FString& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshActorFactoryNode", "SetCustomAnimationAssetUidToPlay");

	Params::UInterchangeMeshActorFactoryNode_SetCustomAnimationAssetUidToPlay_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.RemoveSlotMaterialDependencyUid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      SlotName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshActorFactoryNode::RemoveSlotMaterialDependencyUid(const class FString& SlotName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshActorFactoryNode", "RemoveSlotMaterialDependencyUid");

	Params::UInterchangeMeshActorFactoryNode_RemoveSlotMaterialDependencyUid_Params Parms{};

	Parms.SlotName = SlotName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.GetSlotMaterialDependencyUid
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      SlotName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutMaterialDependency                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshActorFactoryNode::GetSlotMaterialDependencyUid(const class FString& SlotName, class FString* OutMaterialDependency)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshActorFactoryNode", "GetSlotMaterialDependencyUid");

	Params::UInterchangeMeshActorFactoryNode_GetSlotMaterialDependencyUid_Params Parms{};

	Parms.SlotName = SlotName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutMaterialDependency != nullptr)
		*OutMaterialDependency = Parms.OutMaterialDependency;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.GetSlotMaterialDependencies
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<class FString, class FString> OutMaterialDependencies                                          (Parm, OutParm, NativeAccessSpecifierPublic)

void UInterchangeMeshActorFactoryNode::GetSlotMaterialDependencies(TMap<class FString, class FString>* OutMaterialDependencies)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshActorFactoryNode", "GetSlotMaterialDependencies");

	Params::UInterchangeMeshActorFactoryNode_GetSlotMaterialDependencies_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutMaterialDependencies != nullptr)
		*OutMaterialDependencies = Parms.OutMaterialDependencies;

}


// Function InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.GetCustomGeometricTransform
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform                  AttributeValue                                                   (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshActorFactoryNode::GetCustomGeometricTransform(struct FTransform* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshActorFactoryNode", "GetCustomGeometricTransform");

	Params::UInterchangeMeshActorFactoryNode_GetCustomGeometricTransform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.GetCustomAnimationAssetUidToPlay
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshActorFactoryNode::GetCustomAnimationAssetUidToPlay(class FString* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshActorFactoryNode", "GetCustomAnimationAssetUidToPlay");

	Params::UInterchangeMeshActorFactoryNode_GetCustomAnimationAssetUidToPlay_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Class InterchangeFactoryNodes.InterchangeMeshFactoryNode
// (None)

class UClass* UInterchangeMeshFactoryNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeMeshFactoryNode");

	return Clss;
}


// InterchangeMeshFactoryNode InterchangeFactoryNodes.Default__InterchangeMeshFactoryNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeMeshFactoryNode* UInterchangeMeshFactoryNode::GetDefaultObj()
{
	static class UInterchangeMeshFactoryNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeMeshFactoryNode*>(UInterchangeMeshFactoryNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetSlotMaterialDependencyUid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      SlotName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      MaterialDependencyUid                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshFactoryNode::SetSlotMaterialDependencyUid(const class FString& SlotName, const class FString& MaterialDependencyUid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshFactoryNode", "SetSlotMaterialDependencyUid");

	Params::UInterchangeMeshFactoryNode_SetSlotMaterialDependencyUid_Params Parms{};

	Parms.SlotName = SlotName;
	Parms.MaterialDependencyUid = MaterialDependencyUid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomVertexColorReplace
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshFactoryNode::SetCustomVertexColorReplace(bool& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshFactoryNode", "SetCustomVertexColorReplace");

	Params::UInterchangeMeshFactoryNode_SetCustomVertexColorReplace_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomVertexColorOverride
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FColor                      AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshFactoryNode::SetCustomVertexColorOverride(struct FColor& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshFactoryNode", "SetCustomVertexColorOverride");

	Params::UInterchangeMeshFactoryNode_SetCustomVertexColorOverride_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomVertexColorIgnore
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshFactoryNode::SetCustomVertexColorIgnore(bool& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshFactoryNode", "SetCustomVertexColorIgnore");

	Params::UInterchangeMeshFactoryNode_SetCustomVertexColorIgnore_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomUseMikkTSpace
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshFactoryNode::SetCustomUseMikkTSpace(bool& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshFactoryNode", "SetCustomUseMikkTSpace");

	Params::UInterchangeMeshFactoryNode_SetCustomUseMikkTSpace_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomUseHighPrecisionTangentBasis
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshFactoryNode::SetCustomUseHighPrecisionTangentBasis(bool& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshFactoryNode", "SetCustomUseHighPrecisionTangentBasis");

	Params::UInterchangeMeshFactoryNode_SetCustomUseHighPrecisionTangentBasis_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomUseFullPrecisionUVs
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshFactoryNode::SetCustomUseFullPrecisionUVs(bool& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshFactoryNode", "SetCustomUseFullPrecisionUVs");

	Params::UInterchangeMeshFactoryNode_SetCustomUseFullPrecisionUVs_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomUseBackwardsCompatibleF16TruncUVs
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshFactoryNode::SetCustomUseBackwardsCompatibleF16TruncUVs(bool& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshFactoryNode", "SetCustomUseBackwardsCompatibleF16TruncUVs");

	Params::UInterchangeMeshFactoryNode_SetCustomUseBackwardsCompatibleF16TruncUVs_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomRemoveDegenerates
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshFactoryNode::SetCustomRemoveDegenerates(bool& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshFactoryNode", "SetCustomRemoveDegenerates");

	Params::UInterchangeMeshFactoryNode_SetCustomRemoveDegenerates_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomRecomputeTangents
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshFactoryNode::SetCustomRecomputeTangents(bool& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshFactoryNode", "SetCustomRecomputeTangents");

	Params::UInterchangeMeshFactoryNode_SetCustomRecomputeTangents_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomRecomputeNormals
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshFactoryNode::SetCustomRecomputeNormals(bool& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshFactoryNode", "SetCustomRecomputeNormals");

	Params::UInterchangeMeshFactoryNode_SetCustomRecomputeNormals_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomLODGroup
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshFactoryNode::SetCustomLODGroup(class FName& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshFactoryNode", "SetCustomLODGroup");

	Params::UInterchangeMeshFactoryNode_SetCustomLODGroup_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomComputeWeightedNormals
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshFactoryNode::SetCustomComputeWeightedNormals(bool& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshFactoryNode", "SetCustomComputeWeightedNormals");

	Params::UInterchangeMeshFactoryNode_SetCustomComputeWeightedNormals_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.RemoveSlotMaterialDependencyUid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      SlotName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshFactoryNode::RemoveSlotMaterialDependencyUid(const class FString& SlotName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshFactoryNode", "RemoveSlotMaterialDependencyUid");

	Params::UInterchangeMeshFactoryNode_RemoveSlotMaterialDependencyUid_Params Parms{};

	Parms.SlotName = SlotName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.RemoveLodDataUniqueId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      LodDataUniqueId                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshFactoryNode::RemoveLodDataUniqueId(const class FString& LodDataUniqueId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshFactoryNode", "RemoveLodDataUniqueId");

	Params::UInterchangeMeshFactoryNode_RemoveLodDataUniqueId_Params Parms{};

	Parms.LodDataUniqueId = LodDataUniqueId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetSlotMaterialDependencyUid
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      SlotName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutMaterialDependency                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshFactoryNode::GetSlotMaterialDependencyUid(const class FString& SlotName, class FString* OutMaterialDependency)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshFactoryNode", "GetSlotMaterialDependencyUid");

	Params::UInterchangeMeshFactoryNode_GetSlotMaterialDependencyUid_Params Parms{};

	Parms.SlotName = SlotName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutMaterialDependency != nullptr)
		*OutMaterialDependency = Parms.OutMaterialDependency;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetSlotMaterialDependencies
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<class FString, class FString> OutMaterialDependencies                                          (Parm, OutParm, NativeAccessSpecifierPublic)

void UInterchangeMeshFactoryNode::GetSlotMaterialDependencies(TMap<class FString, class FString>* OutMaterialDependencies)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshFactoryNode", "GetSlotMaterialDependencies");

	Params::UInterchangeMeshFactoryNode_GetSlotMaterialDependencies_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutMaterialDependencies != nullptr)
		*OutMaterialDependencies = Parms.OutMaterialDependencies;

}


// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetLodDataUniqueIds
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              OutLodDataUniqueIds                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UInterchangeMeshFactoryNode::GetLodDataUniqueIds(TArray<class FString>* OutLodDataUniqueIds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshFactoryNode", "GetLodDataUniqueIds");

	Params::UInterchangeMeshFactoryNode_GetLodDataUniqueIds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutLodDataUniqueIds != nullptr)
		*OutLodDataUniqueIds = Parms.OutLodDataUniqueIds;

}


// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetLodDataCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UInterchangeMeshFactoryNode::GetLodDataCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshFactoryNode", "GetLodDataCount");

	Params::UInterchangeMeshFactoryNode_GetLodDataCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomVertexColorReplace
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshFactoryNode::GetCustomVertexColorReplace(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshFactoryNode", "GetCustomVertexColorReplace");

	Params::UInterchangeMeshFactoryNode_GetCustomVertexColorReplace_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomVertexColorOverride
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FColor                      AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshFactoryNode::GetCustomVertexColorOverride(struct FColor* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshFactoryNode", "GetCustomVertexColorOverride");

	Params::UInterchangeMeshFactoryNode_GetCustomVertexColorOverride_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomVertexColorIgnore
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshFactoryNode::GetCustomVertexColorIgnore(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshFactoryNode", "GetCustomVertexColorIgnore");

	Params::UInterchangeMeshFactoryNode_GetCustomVertexColorIgnore_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomUseMikkTSpace
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshFactoryNode::GetCustomUseMikkTSpace(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshFactoryNode", "GetCustomUseMikkTSpace");

	Params::UInterchangeMeshFactoryNode_GetCustomUseMikkTSpace_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomUseHighPrecisionTangentBasis
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshFactoryNode::GetCustomUseHighPrecisionTangentBasis(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshFactoryNode", "GetCustomUseHighPrecisionTangentBasis");

	Params::UInterchangeMeshFactoryNode_GetCustomUseHighPrecisionTangentBasis_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomUseFullPrecisionUVs
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshFactoryNode::GetCustomUseFullPrecisionUVs(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshFactoryNode", "GetCustomUseFullPrecisionUVs");

	Params::UInterchangeMeshFactoryNode_GetCustomUseFullPrecisionUVs_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomUseBackwardsCompatibleF16TruncUVs
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshFactoryNode::GetCustomUseBackwardsCompatibleF16TruncUVs(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshFactoryNode", "GetCustomUseBackwardsCompatibleF16TruncUVs");

	Params::UInterchangeMeshFactoryNode_GetCustomUseBackwardsCompatibleF16TruncUVs_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomRemoveDegenerates
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshFactoryNode::GetCustomRemoveDegenerates(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshFactoryNode", "GetCustomRemoveDegenerates");

	Params::UInterchangeMeshFactoryNode_GetCustomRemoveDegenerates_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomRecomputeTangents
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshFactoryNode::GetCustomRecomputeTangents(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshFactoryNode", "GetCustomRecomputeTangents");

	Params::UInterchangeMeshFactoryNode_GetCustomRecomputeTangents_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomRecomputeNormals
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshFactoryNode::GetCustomRecomputeNormals(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshFactoryNode", "GetCustomRecomputeNormals");

	Params::UInterchangeMeshFactoryNode_GetCustomRecomputeNormals_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomLODGroup
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshFactoryNode::GetCustomLODGroup(class FName* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshFactoryNode", "GetCustomLODGroup");

	Params::UInterchangeMeshFactoryNode_GetCustomLODGroup_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomComputeWeightedNormals
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshFactoryNode::GetCustomComputeWeightedNormals(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshFactoryNode", "GetCustomComputeWeightedNormals");

	Params::UInterchangeMeshFactoryNode_GetCustomComputeWeightedNormals_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.AddLodDataUniqueId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      LodDataUniqueId                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeMeshFactoryNode::AddLodDataUniqueId(const class FString& LodDataUniqueId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeMeshFactoryNode", "AddLodDataUniqueId");

	Params::UInterchangeMeshFactoryNode_AddLodDataUniqueId_Params Parms{};

	Parms.LodDataUniqueId = LodDataUniqueId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class InterchangeFactoryNodes.InterchangeSceneImportAssetFactoryNode
// (None)

class UClass* UInterchangeSceneImportAssetFactoryNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeSceneImportAssetFactoryNode");

	return Clss;
}


// InterchangeSceneImportAssetFactoryNode InterchangeFactoryNodes.Default__InterchangeSceneImportAssetFactoryNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeSceneImportAssetFactoryNode* UInterchangeSceneImportAssetFactoryNode::GetDefaultObj()
{
	static class UInterchangeSceneImportAssetFactoryNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeSceneImportAssetFactoryNode*>(UInterchangeSceneImportAssetFactoryNode::StaticClass()->DefaultObject);

	return Default;
}


// Class InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode
// (None)

class UClass* UInterchangeSkeletalMeshFactoryNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeSkeletalMeshFactoryNode");

	return Clss;
}


// InterchangeSkeletalMeshFactoryNode InterchangeFactoryNodes.Default__InterchangeSkeletalMeshFactoryNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeSkeletalMeshFactoryNode* UInterchangeSkeletalMeshFactoryNode::GetDefaultObj()
{
	static class UInterchangeSkeletalMeshFactoryNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeSkeletalMeshFactoryNode*>(UInterchangeSkeletalMeshFactoryNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomUseHighPrecisionSkinWeights
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSkeletalMeshFactoryNode::SetCustomUseHighPrecisionSkinWeights(bool& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSkeletalMeshFactoryNode", "SetCustomUseHighPrecisionSkinWeights");

	Params::UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomThresholdUV
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSkeletalMeshFactoryNode::SetCustomThresholdUV(float& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSkeletalMeshFactoryNode", "SetCustomThresholdUV");

	Params::UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdUV_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomThresholdTangentNormal
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSkeletalMeshFactoryNode::SetCustomThresholdTangentNormal(float& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSkeletalMeshFactoryNode", "SetCustomThresholdTangentNormal");

	Params::UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdTangentNormal_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomThresholdPosition
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSkeletalMeshFactoryNode::SetCustomThresholdPosition(float& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSkeletalMeshFactoryNode", "SetCustomThresholdPosition");

	Params::UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdPosition_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomSkeletonSoftObjectPath
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSoftObjectPath             AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSkeletalMeshFactoryNode::SetCustomSkeletonSoftObjectPath(struct FSoftObjectPath& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSkeletalMeshFactoryNode", "SetCustomSkeletonSoftObjectPath");

	Params::UInterchangeSkeletalMeshFactoryNode_SetCustomSkeletonSoftObjectPath_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomPhysicAssetSoftObjectPath
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSoftObjectPath             AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSkeletalMeshFactoryNode::SetCustomPhysicAssetSoftObjectPath(struct FSoftObjectPath& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSkeletalMeshFactoryNode", "SetCustomPhysicAssetSoftObjectPath");

	Params::UInterchangeSkeletalMeshFactoryNode_SetCustomPhysicAssetSoftObjectPath_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomMorphThresholdPosition
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSkeletalMeshFactoryNode::SetCustomMorphThresholdPosition(float& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSkeletalMeshFactoryNode", "SetCustomMorphThresholdPosition");

	Params::UInterchangeSkeletalMeshFactoryNode_SetCustomMorphThresholdPosition_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomImportMorphTarget
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSkeletalMeshFactoryNode::SetCustomImportMorphTarget(bool& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSkeletalMeshFactoryNode", "SetCustomImportMorphTarget");

	Params::UInterchangeSkeletalMeshFactoryNode_SetCustomImportMorphTarget_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomImportContentType
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EInterchangeSkeletalMeshContentTypeAttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSkeletalMeshFactoryNode::SetCustomImportContentType(enum class EInterchangeSkeletalMeshContentType& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSkeletalMeshFactoryNode", "SetCustomImportContentType");

	Params::UInterchangeSkeletalMeshFactoryNode_SetCustomImportContentType_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomCreatePhysicsAsset
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSkeletalMeshFactoryNode::SetCustomCreatePhysicsAsset(bool& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSkeletalMeshFactoryNode", "SetCustomCreatePhysicsAsset");

	Params::UInterchangeSkeletalMeshFactoryNode_SetCustomCreatePhysicsAsset_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomBoneInfluenceLimit
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSkeletalMeshFactoryNode::SetCustomBoneInfluenceLimit(int32& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSkeletalMeshFactoryNode", "SetCustomBoneInfluenceLimit");

	Params::UInterchangeSkeletalMeshFactoryNode_SetCustomBoneInfluenceLimit_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.InitializeSkeletalMeshNode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      UniqueID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      DisplayLabel                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InAssetClass                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInterchangeSkeletalMeshFactoryNode::InitializeSkeletalMeshNode(const class FString& UniqueID, const class FString& DisplayLabel, const class FString& InAssetClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSkeletalMeshFactoryNode", "InitializeSkeletalMeshNode");

	Params::UInterchangeSkeletalMeshFactoryNode_InitializeSkeletalMeshNode_Params Parms{};

	Parms.UniqueID = UniqueID;
	Parms.DisplayLabel = DisplayLabel;
	Parms.InAssetClass = InAssetClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetObjectClass
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UClass* UInterchangeSkeletalMeshFactoryNode::GetObjectClass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSkeletalMeshFactoryNode", "GetObjectClass");

	Params::UInterchangeSkeletalMeshFactoryNode_GetObjectClass_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomUseHighPrecisionSkinWeights
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSkeletalMeshFactoryNode::GetCustomUseHighPrecisionSkinWeights(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSkeletalMeshFactoryNode", "GetCustomUseHighPrecisionSkinWeights");

	Params::UInterchangeSkeletalMeshFactoryNode_GetCustomUseHighPrecisionSkinWeights_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomThresholdUV
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSkeletalMeshFactoryNode::GetCustomThresholdUV(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSkeletalMeshFactoryNode", "GetCustomThresholdUV");

	Params::UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdUV_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomThresholdTangentNormal
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSkeletalMeshFactoryNode::GetCustomThresholdTangentNormal(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSkeletalMeshFactoryNode", "GetCustomThresholdTangentNormal");

	Params::UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdTangentNormal_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomThresholdPosition
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSkeletalMeshFactoryNode::GetCustomThresholdPosition(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSkeletalMeshFactoryNode", "GetCustomThresholdPosition");

	Params::UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdPosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomSkeletonSoftObjectPath
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSoftObjectPath             AttributeValue                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSkeletalMeshFactoryNode::GetCustomSkeletonSoftObjectPath(struct FSoftObjectPath* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSkeletalMeshFactoryNode", "GetCustomSkeletonSoftObjectPath");

	Params::UInterchangeSkeletalMeshFactoryNode_GetCustomSkeletonSoftObjectPath_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomPhysicAssetSoftObjectPath
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSoftObjectPath             AttributeValue                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSkeletalMeshFactoryNode::GetCustomPhysicAssetSoftObjectPath(struct FSoftObjectPath* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSkeletalMeshFactoryNode", "GetCustomPhysicAssetSoftObjectPath");

	Params::UInterchangeSkeletalMeshFactoryNode_GetCustomPhysicAssetSoftObjectPath_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomMorphThresholdPosition
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSkeletalMeshFactoryNode::GetCustomMorphThresholdPosition(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSkeletalMeshFactoryNode", "GetCustomMorphThresholdPosition");

	Params::UInterchangeSkeletalMeshFactoryNode_GetCustomMorphThresholdPosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomImportMorphTarget
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSkeletalMeshFactoryNode::GetCustomImportMorphTarget(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSkeletalMeshFactoryNode", "GetCustomImportMorphTarget");

	Params::UInterchangeSkeletalMeshFactoryNode_GetCustomImportMorphTarget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomImportContentType
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EInterchangeSkeletalMeshContentTypeAttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSkeletalMeshFactoryNode::GetCustomImportContentType(enum class EInterchangeSkeletalMeshContentType* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSkeletalMeshFactoryNode", "GetCustomImportContentType");

	Params::UInterchangeSkeletalMeshFactoryNode_GetCustomImportContentType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomCreatePhysicsAsset
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSkeletalMeshFactoryNode::GetCustomCreatePhysicsAsset(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSkeletalMeshFactoryNode", "GetCustomCreatePhysicsAsset");

	Params::UInterchangeSkeletalMeshFactoryNode_GetCustomCreatePhysicsAsset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomBoneInfluenceLimit
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSkeletalMeshFactoryNode::GetCustomBoneInfluenceLimit(int32* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSkeletalMeshFactoryNode", "GetCustomBoneInfluenceLimit");

	Params::UInterchangeSkeletalMeshFactoryNode_GetCustomBoneInfluenceLimit_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Class InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode
// (None)

class UClass* UInterchangeSkeletalMeshLodDataNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeSkeletalMeshLodDataNode");

	return Clss;
}


// InterchangeSkeletalMeshLodDataNode InterchangeFactoryNodes.Default__InterchangeSkeletalMeshLodDataNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeSkeletalMeshLodDataNode* UInterchangeSkeletalMeshLodDataNode::GetDefaultObj()
{
	static class UInterchangeSkeletalMeshLodDataNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeSkeletalMeshLodDataNode*>(UInterchangeSkeletalMeshLodDataNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.SetCustomSkeletonUid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSkeletalMeshLodDataNode::SetCustomSkeletonUid(const class FString& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSkeletalMeshLodDataNode", "SetCustomSkeletonUid");

	Params::UInterchangeSkeletalMeshLodDataNode_SetCustomSkeletonUid_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.RemoveMeshUid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      MeshName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSkeletalMeshLodDataNode::RemoveMeshUid(const class FString& MeshName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSkeletalMeshLodDataNode", "RemoveMeshUid");

	Params::UInterchangeSkeletalMeshLodDataNode_RemoveMeshUid_Params Parms{};

	Parms.MeshName = MeshName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.RemoveAllMeshes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSkeletalMeshLodDataNode::RemoveAllMeshes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSkeletalMeshLodDataNode", "RemoveAllMeshes");

	Params::UInterchangeSkeletalMeshLodDataNode_RemoveAllMeshes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.GetMeshUidsCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UInterchangeSkeletalMeshLodDataNode::GetMeshUidsCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSkeletalMeshLodDataNode", "GetMeshUidsCount");

	Params::UInterchangeSkeletalMeshLodDataNode_GetMeshUidsCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.GetMeshUids
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              OutMeshNames                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UInterchangeSkeletalMeshLodDataNode::GetMeshUids(TArray<class FString>* OutMeshNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSkeletalMeshLodDataNode", "GetMeshUids");

	Params::UInterchangeSkeletalMeshLodDataNode_GetMeshUids_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutMeshNames != nullptr)
		*OutMeshNames = Parms.OutMeshNames;

}


// Function InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.GetCustomSkeletonUid
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSkeletalMeshLodDataNode::GetCustomSkeletonUid(class FString* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSkeletalMeshLodDataNode", "GetCustomSkeletonUid");

	Params::UInterchangeSkeletalMeshLodDataNode_GetCustomSkeletonUid_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.AddMeshUid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      MeshName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSkeletalMeshLodDataNode::AddMeshUid(const class FString& MeshName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSkeletalMeshLodDataNode", "AddMeshUid");

	Params::UInterchangeSkeletalMeshLodDataNode_AddMeshUid_Params Parms{};

	Parms.MeshName = MeshName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode
// (None)

class UClass* UInterchangeStaticMeshFactoryNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeStaticMeshFactoryNode");

	return Clss;
}


// InterchangeStaticMeshFactoryNode InterchangeFactoryNodes.Default__InterchangeStaticMeshFactoryNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeStaticMeshFactoryNode* UInterchangeStaticMeshFactoryNode::GetDefaultObj()
{
	static class UInterchangeStaticMeshFactoryNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeStaticMeshFactoryNode*>(UInterchangeStaticMeshFactoryNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomSupportFaceRemap
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStaticMeshFactoryNode::SetCustomSupportFaceRemap(bool& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshFactoryNode", "SetCustomSupportFaceRemap");

	Params::UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomSrcLightmapIndex
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStaticMeshFactoryNode::SetCustomSrcLightmapIndex(int32& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshFactoryNode", "SetCustomSrcLightmapIndex");

	Params::UInterchangeStaticMeshFactoryNode_SetCustomSrcLightmapIndex_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomMinLightmapResolution
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStaticMeshFactoryNode::SetCustomMinLightmapResolution(int32& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshFactoryNode", "SetCustomMinLightmapResolution");

	Params::UInterchangeStaticMeshFactoryNode_SetCustomMinLightmapResolution_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomMaxLumenMeshCards
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStaticMeshFactoryNode::SetCustomMaxLumenMeshCards(int32& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshFactoryNode", "SetCustomMaxLumenMeshCards");

	Params::UInterchangeStaticMeshFactoryNode_SetCustomMaxLumenMeshCards_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomGenerateLightmapUVs
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStaticMeshFactoryNode::SetCustomGenerateLightmapUVs(bool& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshFactoryNode", "SetCustomGenerateLightmapUVs");

	Params::UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomGenerateDistanceFieldAsIfTwoSided
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStaticMeshFactoryNode::SetCustomGenerateDistanceFieldAsIfTwoSided(bool& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshFactoryNode", "SetCustomGenerateDistanceFieldAsIfTwoSided");

	Params::UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomDstLightmapIndex
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStaticMeshFactoryNode::SetCustomDstLightmapIndex(int32& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshFactoryNode", "SetCustomDstLightmapIndex");

	Params::UInterchangeStaticMeshFactoryNode_SetCustomDstLightmapIndex_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomDistanceFieldResolutionScale
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStaticMeshFactoryNode::SetCustomDistanceFieldResolutionScale(float& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshFactoryNode", "SetCustomDistanceFieldResolutionScale");

	Params::UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldResolutionScale_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomDistanceFieldReplacementMesh
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSoftObjectPath             AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStaticMeshFactoryNode::SetCustomDistanceFieldReplacementMesh(struct FSoftObjectPath& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshFactoryNode", "SetCustomDistanceFieldReplacementMesh");

	Params::UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldReplacementMesh_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomBuildScale3D
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStaticMeshFactoryNode::SetCustomBuildScale3D(struct FVector& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshFactoryNode", "SetCustomBuildScale3D");

	Params::UInterchangeStaticMeshFactoryNode_SetCustomBuildScale3D_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomBuildReversedIndexBuffer
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStaticMeshFactoryNode::SetCustomBuildReversedIndexBuffer(bool& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshFactoryNode", "SetCustomBuildReversedIndexBuffer");

	Params::UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomBuildNanite
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddApplyDelegate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStaticMeshFactoryNode::SetCustomBuildNanite(bool& AttributeValue, bool bAddApplyDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshFactoryNode", "SetCustomBuildNanite");

	Params::UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite_Params Parms{};

	Parms.AttributeValue = AttributeValue;
	Parms.bAddApplyDelegate = bAddApplyDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.RemoveSocketUd
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      SocketUid                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStaticMeshFactoryNode::RemoveSocketUd(const class FString& SocketUid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshFactoryNode", "RemoveSocketUd");

	Params::UInterchangeStaticMeshFactoryNode_RemoveSocketUd_Params Parms{};

	Parms.SocketUid = SocketUid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.InitializeStaticMeshNode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      UniqueID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      DisplayLabel                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InAssetClass                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInterchangeStaticMeshFactoryNode::InitializeStaticMeshNode(const class FString& UniqueID, const class FString& DisplayLabel, const class FString& InAssetClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshFactoryNode", "InitializeStaticMeshNode");

	Params::UInterchangeStaticMeshFactoryNode_InitializeStaticMeshNode_Params Parms{};

	Parms.UniqueID = UniqueID;
	Parms.DisplayLabel = DisplayLabel;
	Parms.InAssetClass = InAssetClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetSocketUids
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              OutSocketUids                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UInterchangeStaticMeshFactoryNode::GetSocketUids(TArray<class FString>* OutSocketUids)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshFactoryNode", "GetSocketUids");

	Params::UInterchangeStaticMeshFactoryNode_GetSocketUids_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutSocketUids != nullptr)
		*OutSocketUids = Parms.OutSocketUids;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetSocketUidCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UInterchangeStaticMeshFactoryNode::GetSocketUidCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshFactoryNode", "GetSocketUidCount");

	Params::UInterchangeStaticMeshFactoryNode_GetSocketUidCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetObjectClass
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UClass* UInterchangeStaticMeshFactoryNode::GetObjectClass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshFactoryNode", "GetObjectClass");

	Params::UInterchangeStaticMeshFactoryNode_GetObjectClass_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomSupportFaceRemap
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStaticMeshFactoryNode::GetCustomSupportFaceRemap(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshFactoryNode", "GetCustomSupportFaceRemap");

	Params::UInterchangeStaticMeshFactoryNode_GetCustomSupportFaceRemap_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomSrcLightmapIndex
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStaticMeshFactoryNode::GetCustomSrcLightmapIndex(int32* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshFactoryNode", "GetCustomSrcLightmapIndex");

	Params::UInterchangeStaticMeshFactoryNode_GetCustomSrcLightmapIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomMinLightmapResolution
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStaticMeshFactoryNode::GetCustomMinLightmapResolution(int32* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshFactoryNode", "GetCustomMinLightmapResolution");

	Params::UInterchangeStaticMeshFactoryNode_GetCustomMinLightmapResolution_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomMaxLumenMeshCards
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStaticMeshFactoryNode::GetCustomMaxLumenMeshCards(int32* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshFactoryNode", "GetCustomMaxLumenMeshCards");

	Params::UInterchangeStaticMeshFactoryNode_GetCustomMaxLumenMeshCards_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomGenerateLightmapUVs
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStaticMeshFactoryNode::GetCustomGenerateLightmapUVs(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshFactoryNode", "GetCustomGenerateLightmapUVs");

	Params::UInterchangeStaticMeshFactoryNode_GetCustomGenerateLightmapUVs_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomGenerateDistanceFieldAsIfTwoSided
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStaticMeshFactoryNode::GetCustomGenerateDistanceFieldAsIfTwoSided(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshFactoryNode", "GetCustomGenerateDistanceFieldAsIfTwoSided");

	Params::UInterchangeStaticMeshFactoryNode_GetCustomGenerateDistanceFieldAsIfTwoSided_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomDstLightmapIndex
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStaticMeshFactoryNode::GetCustomDstLightmapIndex(int32* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshFactoryNode", "GetCustomDstLightmapIndex");

	Params::UInterchangeStaticMeshFactoryNode_GetCustomDstLightmapIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomDistanceFieldResolutionScale
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStaticMeshFactoryNode::GetCustomDistanceFieldResolutionScale(float* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshFactoryNode", "GetCustomDistanceFieldResolutionScale");

	Params::UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldResolutionScale_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomDistanceFieldReplacementMesh
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSoftObjectPath             AttributeValue                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStaticMeshFactoryNode::GetCustomDistanceFieldReplacementMesh(struct FSoftObjectPath* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshFactoryNode", "GetCustomDistanceFieldReplacementMesh");

	Params::UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldReplacementMesh_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomBuildScale3D
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStaticMeshFactoryNode::GetCustomBuildScale3D(struct FVector* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshFactoryNode", "GetCustomBuildScale3D");

	Params::UInterchangeStaticMeshFactoryNode_GetCustomBuildScale3D_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomBuildReversedIndexBuffer
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStaticMeshFactoryNode::GetCustomBuildReversedIndexBuffer(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshFactoryNode", "GetCustomBuildReversedIndexBuffer");

	Params::UInterchangeStaticMeshFactoryNode_GetCustomBuildReversedIndexBuffer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomBuildNanite
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStaticMeshFactoryNode::GetCustomBuildNanite(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshFactoryNode", "GetCustomBuildNanite");

	Params::UInterchangeStaticMeshFactoryNode_GetCustomBuildNanite_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.AddSocketUids
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              InSocketUids                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStaticMeshFactoryNode::AddSocketUids(TArray<class FString>& InSocketUids)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshFactoryNode", "AddSocketUids");

	Params::UInterchangeStaticMeshFactoryNode_AddSocketUids_Params Parms{};

	Parms.InSocketUids = InSocketUids;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.AddSocketUid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      SocketUid                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStaticMeshFactoryNode::AddSocketUid(const class FString& SocketUid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshFactoryNode", "AddSocketUid");

	Params::UInterchangeStaticMeshFactoryNode_AddSocketUid_Params Parms{};

	Parms.SocketUid = SocketUid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode
// (None)

class UClass* UInterchangeStaticMeshLodDataNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeStaticMeshLodDataNode");

	return Clss;
}


// InterchangeStaticMeshLodDataNode InterchangeFactoryNodes.Default__InterchangeStaticMeshLodDataNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeStaticMeshLodDataNode* UInterchangeStaticMeshLodDataNode::GetDefaultObj()
{
	static class UInterchangeStaticMeshLodDataNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeStaticMeshLodDataNode*>(UInterchangeStaticMeshLodDataNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.SetOneConvexHullPerUCX
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStaticMeshLodDataNode::SetOneConvexHullPerUCX(bool AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshLodDataNode", "SetOneConvexHullPerUCX");

	Params::UInterchangeStaticMeshLodDataNode_SetOneConvexHullPerUCX_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.SetImportCollision
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStaticMeshLodDataNode::SetImportCollision(bool AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshLodDataNode", "SetImportCollision");

	Params::UInterchangeStaticMeshLodDataNode_SetImportCollision_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveSphereCollisionMeshUid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      MeshName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStaticMeshLodDataNode::RemoveSphereCollisionMeshUid(const class FString& MeshName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshLodDataNode", "RemoveSphereCollisionMeshUid");

	Params::UInterchangeStaticMeshLodDataNode_RemoveSphereCollisionMeshUid_Params Parms{};

	Parms.MeshName = MeshName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveMeshUid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      MeshName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStaticMeshLodDataNode::RemoveMeshUid(const class FString& MeshName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshLodDataNode", "RemoveMeshUid");

	Params::UInterchangeStaticMeshLodDataNode_RemoveMeshUid_Params Parms{};

	Parms.MeshName = MeshName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveConvexCollisionMeshUid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      MeshName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStaticMeshLodDataNode::RemoveConvexCollisionMeshUid(const class FString& MeshName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshLodDataNode", "RemoveConvexCollisionMeshUid");

	Params::UInterchangeStaticMeshLodDataNode_RemoveConvexCollisionMeshUid_Params Parms{};

	Parms.MeshName = MeshName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveCapsuleCollisionMeshUid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      MeshName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStaticMeshLodDataNode::RemoveCapsuleCollisionMeshUid(const class FString& MeshName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshLodDataNode", "RemoveCapsuleCollisionMeshUid");

	Params::UInterchangeStaticMeshLodDataNode_RemoveCapsuleCollisionMeshUid_Params Parms{};

	Parms.MeshName = MeshName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveBoxCollisionMeshUid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      MeshName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStaticMeshLodDataNode::RemoveBoxCollisionMeshUid(const class FString& MeshName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshLodDataNode", "RemoveBoxCollisionMeshUid");

	Params::UInterchangeStaticMeshLodDataNode_RemoveBoxCollisionMeshUid_Params Parms{};

	Parms.MeshName = MeshName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveAllSphereCollisionMeshes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStaticMeshLodDataNode::RemoveAllSphereCollisionMeshes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshLodDataNode", "RemoveAllSphereCollisionMeshes");

	Params::UInterchangeStaticMeshLodDataNode_RemoveAllSphereCollisionMeshes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveAllMeshes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStaticMeshLodDataNode::RemoveAllMeshes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshLodDataNode", "RemoveAllMeshes");

	Params::UInterchangeStaticMeshLodDataNode_RemoveAllMeshes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveAllConvexCollisionMeshes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStaticMeshLodDataNode::RemoveAllConvexCollisionMeshes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshLodDataNode", "RemoveAllConvexCollisionMeshes");

	Params::UInterchangeStaticMeshLodDataNode_RemoveAllConvexCollisionMeshes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveAllCapsuleCollisionMeshes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStaticMeshLodDataNode::RemoveAllCapsuleCollisionMeshes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshLodDataNode", "RemoveAllCapsuleCollisionMeshes");

	Params::UInterchangeStaticMeshLodDataNode_RemoveAllCapsuleCollisionMeshes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveAllBoxCollisionMeshes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStaticMeshLodDataNode::RemoveAllBoxCollisionMeshes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshLodDataNode", "RemoveAllBoxCollisionMeshes");

	Params::UInterchangeStaticMeshLodDataNode_RemoveAllBoxCollisionMeshes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetSphereCollisionMeshUidsCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UInterchangeStaticMeshLodDataNode::GetSphereCollisionMeshUidsCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshLodDataNode", "GetSphereCollisionMeshUidsCount");

	Params::UInterchangeStaticMeshLodDataNode_GetSphereCollisionMeshUidsCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetSphereCollisionMeshUids
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              OutMeshNames                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UInterchangeStaticMeshLodDataNode::GetSphereCollisionMeshUids(TArray<class FString>* OutMeshNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshLodDataNode", "GetSphereCollisionMeshUids");

	Params::UInterchangeStaticMeshLodDataNode_GetSphereCollisionMeshUids_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutMeshNames != nullptr)
		*OutMeshNames = Parms.OutMeshNames;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetOneConvexHullPerUCX
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStaticMeshLodDataNode::GetOneConvexHullPerUCX(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshLodDataNode", "GetOneConvexHullPerUCX");

	Params::UInterchangeStaticMeshLodDataNode_GetOneConvexHullPerUCX_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetMeshUidsCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UInterchangeStaticMeshLodDataNode::GetMeshUidsCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshLodDataNode", "GetMeshUidsCount");

	Params::UInterchangeStaticMeshLodDataNode_GetMeshUidsCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetMeshUids
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              OutMeshNames                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UInterchangeStaticMeshLodDataNode::GetMeshUids(TArray<class FString>* OutMeshNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshLodDataNode", "GetMeshUids");

	Params::UInterchangeStaticMeshLodDataNode_GetMeshUids_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutMeshNames != nullptr)
		*OutMeshNames = Parms.OutMeshNames;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetImportCollision
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStaticMeshLodDataNode::GetImportCollision(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshLodDataNode", "GetImportCollision");

	Params::UInterchangeStaticMeshLodDataNode_GetImportCollision_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetConvexCollisionMeshUidsCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UInterchangeStaticMeshLodDataNode::GetConvexCollisionMeshUidsCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshLodDataNode", "GetConvexCollisionMeshUidsCount");

	Params::UInterchangeStaticMeshLodDataNode_GetConvexCollisionMeshUidsCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetConvexCollisionMeshUids
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              OutMeshNames                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UInterchangeStaticMeshLodDataNode::GetConvexCollisionMeshUids(TArray<class FString>* OutMeshNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshLodDataNode", "GetConvexCollisionMeshUids");

	Params::UInterchangeStaticMeshLodDataNode_GetConvexCollisionMeshUids_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutMeshNames != nullptr)
		*OutMeshNames = Parms.OutMeshNames;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetCapsuleCollisionMeshUidsCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UInterchangeStaticMeshLodDataNode::GetCapsuleCollisionMeshUidsCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshLodDataNode", "GetCapsuleCollisionMeshUidsCount");

	Params::UInterchangeStaticMeshLodDataNode_GetCapsuleCollisionMeshUidsCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetCapsuleCollisionMeshUids
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              OutMeshNames                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UInterchangeStaticMeshLodDataNode::GetCapsuleCollisionMeshUids(TArray<class FString>* OutMeshNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshLodDataNode", "GetCapsuleCollisionMeshUids");

	Params::UInterchangeStaticMeshLodDataNode_GetCapsuleCollisionMeshUids_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutMeshNames != nullptr)
		*OutMeshNames = Parms.OutMeshNames;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetBoxCollisionMeshUidsCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UInterchangeStaticMeshLodDataNode::GetBoxCollisionMeshUidsCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshLodDataNode", "GetBoxCollisionMeshUidsCount");

	Params::UInterchangeStaticMeshLodDataNode_GetBoxCollisionMeshUidsCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetBoxCollisionMeshUids
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              OutMeshNames                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UInterchangeStaticMeshLodDataNode::GetBoxCollisionMeshUids(TArray<class FString>* OutMeshNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshLodDataNode", "GetBoxCollisionMeshUids");

	Params::UInterchangeStaticMeshLodDataNode_GetBoxCollisionMeshUids_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutMeshNames != nullptr)
		*OutMeshNames = Parms.OutMeshNames;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.AddSphereCollisionMeshUid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      MeshName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStaticMeshLodDataNode::AddSphereCollisionMeshUid(const class FString& MeshName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshLodDataNode", "AddSphereCollisionMeshUid");

	Params::UInterchangeStaticMeshLodDataNode_AddSphereCollisionMeshUid_Params Parms{};

	Parms.MeshName = MeshName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.AddMeshUid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      MeshName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStaticMeshLodDataNode::AddMeshUid(const class FString& MeshName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshLodDataNode", "AddMeshUid");

	Params::UInterchangeStaticMeshLodDataNode_AddMeshUid_Params Parms{};

	Parms.MeshName = MeshName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.AddConvexCollisionMeshUid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      MeshName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStaticMeshLodDataNode::AddConvexCollisionMeshUid(const class FString& MeshName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshLodDataNode", "AddConvexCollisionMeshUid");

	Params::UInterchangeStaticMeshLodDataNode_AddConvexCollisionMeshUid_Params Parms{};

	Parms.MeshName = MeshName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.AddCapsuleCollisionMeshUid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      MeshName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStaticMeshLodDataNode::AddCapsuleCollisionMeshUid(const class FString& MeshName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshLodDataNode", "AddCapsuleCollisionMeshUid");

	Params::UInterchangeStaticMeshLodDataNode_AddCapsuleCollisionMeshUid_Params Parms{};

	Parms.MeshName = MeshName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.AddBoxCollisionMeshUid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      MeshName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeStaticMeshLodDataNode::AddBoxCollisionMeshUid(const class FString& MeshName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeStaticMeshLodDataNode", "AddBoxCollisionMeshUid");

	Params::UInterchangeStaticMeshLodDataNode_AddBoxCollisionMeshUid_Params Parms{};

	Parms.MeshName = MeshName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


