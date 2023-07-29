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


// Function AudioExtensions.AudioParameterControllerInterface.SetTriggerParameter
// (Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioParameterControllerInterface::SetTriggerParameter(class FName InName)
{
	static auto Func = Class->GetFunction("AudioParameterControllerInterface", "SetTriggerParameter");

	Params::UAudioParameterControllerInterface_SetTriggerParameter_Params Parms;

	Parms.InName = InName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioExtensions.AudioParameterControllerInterface.SetStringParameter
// (Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InValue                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioParameterControllerInterface::SetStringParameter(class FName InName, const class FString& InValue)
{
	static auto Func = Class->GetFunction("AudioParameterControllerInterface", "SetStringParameter");

	Params::UAudioParameterControllerInterface_SetStringParameter_Params Parms;

	Parms.InName = InName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioExtensions.AudioParameterControllerInterface.SetStringArrayParameter
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              InValue                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UAudioParameterControllerInterface::SetStringArrayParameter(class FName InName, TArray<class FString>& InValue)
{
	static auto Func = Class->GetFunction("AudioParameterControllerInterface", "SetStringArrayParameter");

	Params::UAudioParameterControllerInterface_SetStringArrayParameter_Params Parms;

	Parms.InName = InName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioExtensions.AudioParameterControllerInterface.SetParameters_Blueprint
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FAudioParameter>     InParameters                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UAudioParameterControllerInterface::SetParameters_Blueprint(TArray<struct FAudioParameter>& InParameters)
{
	static auto Func = Class->GetFunction("AudioParameterControllerInterface", "SetParameters_Blueprint");

	Params::UAudioParameterControllerInterface_SetParameters_Blueprint_Params Parms;

	Parms.InParameters = InParameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioExtensions.AudioParameterControllerInterface.SetObjectParameter
// (Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     InValue                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioParameterControllerInterface::SetObjectParameter(class FName InName, class UObject* InValue)
{
	static auto Func = Class->GetFunction("AudioParameterControllerInterface", "SetObjectParameter");

	Params::UAudioParameterControllerInterface_SetObjectParameter_Params Parms;

	Parms.InName = InName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioExtensions.AudioParameterControllerInterface.SetObjectArrayParameter
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UObject*>             InValue                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UAudioParameterControllerInterface::SetObjectArrayParameter(class FName InName, TArray<class UObject*>& InValue)
{
	static auto Func = Class->GetFunction("AudioParameterControllerInterface", "SetObjectArrayParameter");

	Params::UAudioParameterControllerInterface_SetObjectArrayParameter_Params Parms;

	Parms.InName = InName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioExtensions.AudioParameterControllerInterface.SetIntParameter
// (Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InInt                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioParameterControllerInterface::SetIntParameter(class FName InName, int32 InInt)
{
	static auto Func = Class->GetFunction("AudioParameterControllerInterface", "SetIntParameter");

	Params::UAudioParameterControllerInterface_SetIntParameter_Params Parms;

	Parms.InName = InName;
	Parms.InInt = InInt;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioExtensions.AudioParameterControllerInterface.SetIntArrayParameter
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      InValue                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UAudioParameterControllerInterface::SetIntArrayParameter(class FName InName, TArray<int32>& InValue)
{
	static auto Func = Class->GetFunction("AudioParameterControllerInterface", "SetIntArrayParameter");

	Params::UAudioParameterControllerInterface_SetIntArrayParameter_Params Parms;

	Parms.InName = InName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioExtensions.AudioParameterControllerInterface.SetFloatParameter
// (Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InFloat                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioParameterControllerInterface::SetFloatParameter(class FName InName, float InFloat)
{
	static auto Func = Class->GetFunction("AudioParameterControllerInterface", "SetFloatParameter");

	Params::UAudioParameterControllerInterface_SetFloatParameter_Params Parms;

	Parms.InName = InName;
	Parms.InFloat = InFloat;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioExtensions.AudioParameterControllerInterface.SetFloatArrayParameter
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      InValue                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UAudioParameterControllerInterface::SetFloatArrayParameter(class FName InName, TArray<float>& InValue)
{
	static auto Func = Class->GetFunction("AudioParameterControllerInterface", "SetFloatArrayParameter");

	Params::UAudioParameterControllerInterface_SetFloatArrayParameter_Params Parms;

	Parms.InName = InName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioExtensions.AudioParameterControllerInterface.SetBoolParameter
// (Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               InBool                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioParameterControllerInterface::SetBoolParameter(class FName InName, bool InBool)
{
	static auto Func = Class->GetFunction("AudioParameterControllerInterface", "SetBoolParameter");

	Params::UAudioParameterControllerInterface_SetBoolParameter_Params Parms;

	Parms.InName = InName;
	Parms.InBool = InBool;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioExtensions.AudioParameterControllerInterface.SetBoolArrayParameter
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<bool>                       InValue                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UAudioParameterControllerInterface::SetBoolArrayParameter(class FName InName, TArray<bool>& InValue)
{
	static auto Func = Class->GetFunction("AudioParameterControllerInterface", "SetBoolArrayParameter");

	Params::UAudioParameterControllerInterface_SetBoolArrayParameter_Params Parms;

	Parms.InName = InName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioExtensions.AudioParameterControllerInterface.ResetParameters
// (Native, Public, BlueprintCallable)
// Parameters:

void UAudioParameterControllerInterface::ResetParameters()
{
	static auto Func = Class->GetFunction("AudioParameterControllerInterface", "ResetParameters");

	Params::UAudioParameterControllerInterface_ResetParameters_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
