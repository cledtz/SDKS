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


// Function CustomizableObject.CustomizableObject.UnloadReferenceSkeletalMeshes
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCustomizableObject::UnloadReferenceSkeletalMeshes()
{
	static auto Func = Class->GetFunction("CustomizableObject", "UnloadReferenceSkeletalMeshes");

	Params::UCustomizableObject_UnloadReferenceSkeletalMeshes_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CustomizableObject.CustomizableObject.UnloadMaskOutCache
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCustomizableObject::UnloadMaskOutCache()
{
	static auto Func = Class->GetFunction("CustomizableObject", "UnloadMaskOutCache");

	Params::UCustomizableObject_UnloadMaskOutCache_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CustomizableObject.CustomizableObject.LoadReferenceSkeletalMeshesAsync
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCustomizableObject::LoadReferenceSkeletalMeshesAsync()
{
	static auto Func = Class->GetFunction("CustomizableObject", "LoadReferenceSkeletalMeshesAsync");

	Params::UCustomizableObject_LoadReferenceSkeletalMeshesAsync_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CustomizableObject.CustomizableObject.LoadMaskOutCache
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCustomizableObject::LoadMaskOutCache()
{
	static auto Func = Class->GetFunction("CustomizableObject", "LoadMaskOutCache");

	Params::UCustomizableObject_LoadMaskOutCache_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CustomizableObject.CustomizableObject.IsParameterMultidimensional
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      InParameterName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCustomizableObject::IsParameterMultidimensional(const class FString& InParameterName)
{
	static auto Func = Class->GetFunction("CustomizableObject", "IsParameterMultidimensional");

	Params::UCustomizableObject_IsParameterMultidimensional_Params Parms;

	Parms.InParameterName = InParameterName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObject.IsCompiled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCustomizableObject::IsCompiled()
{
	static auto Func = Class->GetFunction("CustomizableObject", "IsCompiled");

	Params::UCustomizableObject_IsCompiled_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObject.GetStateUIMetadataFromIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              StateIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FParameterUIData            ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FParameterUIData UCustomizableObject::GetStateUIMetadataFromIndex(int32 StateIndex)
{
	static auto Func = Class->GetFunction("CustomizableObject", "GetStateUIMetadataFromIndex");

	Params::UCustomizableObject_GetStateUIMetadataFromIndex_Params Parms;

	Parms.StateIndex = StateIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObject.GetStateUIMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      StateName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FParameterUIData            ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FParameterUIData UCustomizableObject::GetStateUIMetadata(const class FString& StateName)
{
	static auto Func = Class->GetFunction("CustomizableObject", "GetStateUIMetadata");

	Params::UCustomizableObject_GetStateUIMetadata_Params Parms;

	Parms.StateName = StateName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObject.GetStateParameterName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      StateName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ParameterIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UCustomizableObject::GetStateParameterName(const class FString& StateName, int32 ParameterIndex)
{
	static auto Func = Class->GetFunction("CustomizableObject", "GetStateParameterName");

	Params::UCustomizableObject_GetStateParameterName_Params Parms;

	Parms.StateName = StateName;
	Parms.ParameterIndex = ParameterIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObject.GetStateParameterCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      StateName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObject::GetStateParameterCount(const class FString& StateName)
{
	static auto Func = Class->GetFunction("CustomizableObject", "GetStateParameterCount");

	Params::UCustomizableObject_GetStateParameterCount_Params Parms;

	Parms.StateName = StateName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObject.GetStateName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              StateIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UCustomizableObject::GetStateName(int32 StateIndex)
{
	static auto Func = Class->GetFunction("CustomizableObject", "GetStateName");

	Params::UCustomizableObject_GetStateName_Params Parms;

	Parms.StateIndex = StateIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObject.GetStateCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObject::GetStateCount()
{
	static auto Func = Class->GetFunction("CustomizableObject", "GetStateCount");

	Params::UCustomizableObject_GetStateCount_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObject.GetProjectorParameterDefaultValue
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      InParameterName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector3f                   OutPos                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector3f                   OutDirection                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector3f                   OutUp                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector3f                   OutScale                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutAngle                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ECustomizableObjectProjectorTypeOutType                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCustomizableObject::GetProjectorParameterDefaultValue(const class FString& InParameterName, struct FVector3f* OutPos, struct FVector3f* OutDirection, struct FVector3f* OutUp, struct FVector3f* OutScale, float* OutAngle, enum class ECustomizableObjectProjectorType* OutType)
{
	static auto Func = Class->GetFunction("CustomizableObject", "GetProjectorParameterDefaultValue");

	Params::UCustomizableObject_GetProjectorParameterDefaultValue_Params Parms;

	Parms.InParameterName = InParameterName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutPos != nullptr)
		*OutPos = Parms.OutPos;

	if (OutDirection != nullptr)
		*OutDirection = Parms.OutDirection;

	if (OutUp != nullptr)
		*OutUp = Parms.OutUp;

	if (OutScale != nullptr)
		*OutScale = Parms.OutScale;

	if (OutAngle != nullptr)
		*OutAngle = Parms.OutAngle;

	if (OutType != nullptr)
		*OutType = Parms.OutType;

}


// Function CustomizableObject.CustomizableObject.GetParameterUIMetadataFromIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ParamIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FParameterUIData            ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FParameterUIData UCustomizableObject::GetParameterUIMetadataFromIndex(int32 ParamIndex)
{
	static auto Func = Class->GetFunction("CustomizableObject", "GetParameterUIMetadataFromIndex");

	Params::UCustomizableObject_GetParameterUIMetadataFromIndex_Params Parms;

	Parms.ParamIndex = ParamIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObject.GetParameterUIMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ParamName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FParameterUIData            ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FParameterUIData UCustomizableObject::GetParameterUIMetadata(const class FString& ParamName)
{
	static auto Func = Class->GetFunction("CustomizableObject", "GetParameterUIMetadata");

	Params::UCustomizableObject_GetParameterUIMetadata_Params Parms;

	Parms.ParamName = ParamName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObject.GetParameterTypeByName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMutableParameterType   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMutableParameterType UCustomizableObject::GetParameterTypeByName(const class FString& Name)
{
	static auto Func = Class->GetFunction("CustomizableObject", "GetParameterTypeByName");

	Params::UCustomizableObject_GetParameterTypeByName_Params Parms;

	Parms.Name = Name;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObject.GetParameterType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ParamIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMutableParameterType   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMutableParameterType UCustomizableObject::GetParameterType(int32 ParamIndex)
{
	static auto Func = Class->GetFunction("CustomizableObject", "GetParameterType");

	Params::UCustomizableObject_GetParameterType_Params Parms;

	Parms.ParamIndex = ParamIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObject.GetParameterName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ParamIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UCustomizableObject::GetParameterName(int32 ParamIndex)
{
	static auto Func = Class->GetFunction("CustomizableObject", "GetParameterName");

	Params::UCustomizableObject_GetParameterName_Params Parms;

	Parms.ParamIndex = ParamIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObject.GetParameterDescriptionCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ParamName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObject::GetParameterDescriptionCount(const class FString& ParamName)
{
	static auto Func = Class->GetFunction("CustomizableObject", "GetParameterDescriptionCount");

	Params::UCustomizableObject_GetParameterDescriptionCount_Params Parms;

	Parms.ParamName = ParamName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObject.GetParameterCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObject::GetParameterCount()
{
	static auto Func = Class->GetFunction("CustomizableObject", "GetParameterCount");

	Params::UCustomizableObject_GetParameterCount_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObject.GetIntParameterNumOptions
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ParamIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObject::GetIntParameterNumOptions(int32 ParamIndex)
{
	static auto Func = Class->GetFunction("CustomizableObject", "GetIntParameterNumOptions");

	Params::UCustomizableObject_GetIntParameterNumOptions_Params Parms;

	Parms.ParamIndex = ParamIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObject.GetIntParameterDefaultValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      InParameterName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObject::GetIntParameterDefaultValue(const class FString& InParameterName)
{
	static auto Func = Class->GetFunction("CustomizableObject", "GetIntParameterDefaultValue");

	Params::UCustomizableObject_GetIntParameterDefaultValue_Params Parms;

	Parms.InParameterName = InParameterName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObject.GetIntParameterAvailableOption
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ParamIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              K                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UCustomizableObject::GetIntParameterAvailableOption(int32 ParamIndex, int32 K)
{
	static auto Func = Class->GetFunction("CustomizableObject", "GetIntParameterAvailableOption");

	Params::UCustomizableObject_GetIntParameterAvailableOption_Params Parms;

	Parms.ParamIndex = ParamIndex;
	Parms.K = K;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObject.GetFloatParameterDefaultValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      InParameterName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UCustomizableObject::GetFloatParameterDefaultValue(const class FString& InParameterName)
{
	static auto Func = Class->GetFunction("CustomizableObject", "GetFloatParameterDefaultValue");

	Params::UCustomizableObject_GetFloatParameterDefaultValue_Params Parms;

	Parms.InParameterName = InParameterName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObject.GetComponentCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObject::GetComponentCount()
{
	static auto Func = Class->GetFunction("CustomizableObject", "GetComponentCount");

	Params::UCustomizableObject_GetComponentCount_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObject.GetColorParameterDefaultValue
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      InParameterName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UCustomizableObject::GetColorParameterDefaultValue(const class FString& InParameterName)
{
	static auto Func = Class->GetFunction("CustomizableObject", "GetColorParameterDefaultValue");

	Params::UCustomizableObject_GetColorParameterDefaultValue_Params Parms;

	Parms.InParameterName = InParameterName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObject.GetBoolParameterDefaultValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      InParameterName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCustomizableObject::GetBoolParameterDefaultValue(const class FString& InParameterName)
{
	static auto Func = Class->GetFunction("CustomizableObject", "GetBoolParameterDefaultValue");

	Params::UCustomizableObject_GetBoolParameterDefaultValue_Params Parms;

	Parms.InParameterName = InParameterName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObject.FindParameter
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObject::FindParameter(const class FString& Name)
{
	static auto Func = Class->GetFunction("CustomizableObject", "FindParameter");

	Params::UCustomizableObject_FindParameter_Params Parms;

	Parms.Name = Name;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObject.CreateInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCustomizableObjectInstance* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCustomizableObjectInstance* UCustomizableObject::CreateInstance()
{
	static auto Func = Class->GetFunction("CustomizableObject", "CreateInstance");

	Params::UCustomizableObject_CreateInstance_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.DGGUI.SetCustomizableSkeletalComponent
// (Event, Public, BlueprintEvent)
// Parameters:
// class UCustomizableSkeletalComponent*CustomizableSkeletalComponent                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDGGUI::SetCustomizableSkeletalComponent(class UCustomizableSkeletalComponent* CustomizableSkeletalComponent)
{
	static auto Func = Class->GetFunction("DGGUI", "SetCustomizableSkeletalComponent");

	Params::UDGGUI_SetCustomizableSkeletalComponent_Params Parms;

	Parms.CustomizableSkeletalComponent = CustomizableSkeletalComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CustomizableObject.DGGUI.GetCustomizableSkeletalComponent
// (Event, Public, BlueprintEvent)
// Parameters:
// class UCustomizableSkeletalComponent*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCustomizableSkeletalComponent* UDGGUI::GetCustomizableSkeletalComponent()
{
	static auto Func = Class->GetFunction("DGGUI", "GetCustomizableSkeletalComponent");

	Params::UDGGUI_GetCustomizableSkeletalComponent_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.UpdateSkeletalMeshAsyncResult
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIgnoreCloseDist                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForceHighPriority                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCustomizableObjectInstance::UpdateSkeletalMeshAsyncResult(FDelegateProperty_ Callback, bool bIgnoreCloseDist, bool bForceHighPriority)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "UpdateSkeletalMeshAsyncResult");

	Params::UCustomizableObjectInstance_UpdateSkeletalMeshAsyncResult_Params Parms;

	Parms.Callback = Callback;
	Parms.bIgnoreCloseDist = bIgnoreCloseDist;
	Parms.bForceHighPriority = bForceHighPriority;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CustomizableObject.CustomizableObjectInstance.UpdateSkeletalMeshAsync
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIgnoreCloseDist                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForceHighPriority                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCustomizableObjectInstance::UpdateSkeletalMeshAsync(bool bIgnoreCloseDist, bool bForceHighPriority)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "UpdateSkeletalMeshAsync");

	Params::UCustomizableObjectInstance_UpdateSkeletalMeshAsync_Params Parms;

	Parms.bIgnoreCloseDist = bIgnoreCloseDist;
	Parms.bForceHighPriority = bForceHighPriority;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CustomizableObject.CustomizableObjectInstance.SetVectorParameterSelectedOption
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      VectorParamName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                VectorValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCustomizableObjectInstance::SetVectorParameterSelectedOption(const class FString& VectorParamName, struct FLinearColor& VectorValue)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "SetVectorParameterSelectedOption");

	Params::UCustomizableObjectInstance_SetVectorParameterSelectedOption_Params Parms;

	Parms.VectorParamName = VectorParamName;
	Parms.VectorValue = VectorValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CustomizableObject.CustomizableObjectInstance.SetTextureParameterSelectedOptionT
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      TextureParamName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*                  TextureValue                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RangeIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCustomizableObjectInstance::SetTextureParameterSelectedOptionT(const class FString& TextureParamName, class UTexture2D* TextureValue, int32 RangeIndex)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "SetTextureParameterSelectedOptionT");

	Params::UCustomizableObjectInstance_SetTextureParameterSelectedOptionT_Params Parms;

	Parms.TextureParamName = TextureParamName;
	Parms.TextureValue = TextureValue;
	Parms.RangeIndex = RangeIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CustomizableObject.CustomizableObjectInstance.SetTextureParameterSelectedOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      TextureParamName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TextureValue                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RangeIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCustomizableObjectInstance::SetTextureParameterSelectedOption(const class FString& TextureParamName, const class FString& TextureValue, int32 RangeIndex)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "SetTextureParameterSelectedOption");

	Params::UCustomizableObjectInstance_SetTextureParameterSelectedOption_Params Parms;

	Parms.TextureParamName = TextureParamName;
	Parms.TextureValue = TextureValue;
	Parms.RangeIndex = RangeIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CustomizableObject.CustomizableObjectInstance.SetReplacePhysicsAssets
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bReplaceEnabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCustomizableObjectInstance::SetReplacePhysicsAssets(bool bReplaceEnabled)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "SetReplacePhysicsAssets");

	Params::UCustomizableObjectInstance_SetReplacePhysicsAssets_Params Parms;

	Parms.bReplaceEnabled = bReplaceEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CustomizableObject.CustomizableObjectInstance.SetRandomValues
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCustomizableObjectInstance::SetRandomValues()
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "SetRandomValues");

	Params::UCustomizableObjectInstance_SetRandomValues_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CustomizableObject.CustomizableObjectInstance.SetProjectorValue
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      ProjectorParamName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutPos                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutDirection                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutUp                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutScale                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutAngle                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RangeIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCustomizableObjectInstance::SetProjectorValue(const class FString& ProjectorParamName, struct FVector& OutPos, struct FVector& OutDirection, struct FVector& OutUp, struct FVector& OutScale, float OutAngle, int32 RangeIndex)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "SetProjectorValue");

	Params::UCustomizableObjectInstance_SetProjectorValue_Params Parms;

	Parms.ProjectorParamName = ProjectorParamName;
	Parms.OutPos = OutPos;
	Parms.OutDirection = OutDirection;
	Parms.OutUp = OutUp;
	Parms.OutScale = OutScale;
	Parms.OutAngle = OutAngle;
	Parms.RangeIndex = RangeIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CustomizableObject.CustomizableObjectInstance.SetObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCustomizableObject*         InObject                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCustomizableObjectInstance::SetObject(class UCustomizableObject* InObject)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "SetObject");

	Params::UCustomizableObjectInstance_SetObject_Params Parms;

	Parms.InObject = InObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CustomizableObject.CustomizableObjectInstance.SetIntParameterSelectedOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ParamName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SelectedOptionName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RangeIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCustomizableObjectInstance::SetIntParameterSelectedOption(const class FString& ParamName, const class FString& SelectedOptionName, int32 RangeIndex)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "SetIntParameterSelectedOption");

	Params::UCustomizableObjectInstance_SetIntParameterSelectedOption_Params Parms;

	Parms.ParamName = ParamName;
	Parms.SelectedOptionName = SelectedOptionName;
	Parms.RangeIndex = RangeIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CustomizableObject.CustomizableObjectInstance.SetFloatParameterSelectedOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      FloatParamName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FloatValue                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RangeIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCustomizableObjectInstance::SetFloatParameterSelectedOption(const class FString& FloatParamName, float FloatValue, int32 RangeIndex)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "SetFloatParameterSelectedOption");

	Params::UCustomizableObjectInstance_SetFloatParameterSelectedOption_Params Parms;

	Parms.FloatParamName = FloatParamName;
	Parms.FloatValue = FloatValue;
	Parms.RangeIndex = RangeIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CustomizableObject.CustomizableObjectInstance.SetCurrentState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      StateName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCustomizableObjectInstance::SetCurrentState(const class FString& StateName)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "SetCurrentState");

	Params::UCustomizableObjectInstance_SetCurrentState_Params Parms;

	Parms.StateName = StateName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CustomizableObject.CustomizableObjectInstance.SetColorParameterSelectedOption
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      ColorParamName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorValue                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCustomizableObjectInstance::SetColorParameterSelectedOption(const class FString& ColorParamName, struct FLinearColor& ColorValue)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "SetColorParameterSelectedOption");

	Params::UCustomizableObjectInstance_SetColorParameterSelectedOption_Params Parms;

	Parms.ColorParamName = ColorParamName;
	Parms.ColorValue = ColorValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CustomizableObject.CustomizableObjectInstance.SetBuildParameterRelevancy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCustomizableObjectInstance::SetBuildParameterRelevancy(bool Value)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "SetBuildParameterRelevancy");

	Params::UCustomizableObjectInstance_SetBuildParameterRelevancy_Params Parms;

	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CustomizableObject.CustomizableObjectInstance.SetBuildParameterDecorations
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCustomizableObjectInstance::SetBuildParameterDecorations(bool Value)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "SetBuildParameterDecorations");

	Params::UCustomizableObjectInstance_SetBuildParameterDecorations_Params Parms;

	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CustomizableObject.CustomizableObjectInstance.SetBoolParameterSelectedOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      BoolParamName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               BoolValue                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCustomizableObjectInstance::SetBoolParameterSelectedOption(const class FString& BoolParamName, bool BoolValue)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "SetBoolParameterSelectedOption");

	Params::UCustomizableObjectInstance_SetBoolParameterSelectedOption_Params Parms;

	Parms.BoolParamName = BoolParamName;
	Parms.BoolValue = BoolValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CustomizableObject.CustomizableObjectInstance.RemoveValueFromProjectorRange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ParamName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObjectInstance::RemoveValueFromProjectorRange(const class FString& ParamName)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "RemoveValueFromProjectorRange");

	Params::UCustomizableObjectInstance_RemoveValueFromProjectorRange_Params Parms;

	Parms.ParamName = ParamName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.RemoveValueFromIntRange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ParamName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObjectInstance::RemoveValueFromIntRange(const class FString& ParamName)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "RemoveValueFromIntRange");

	Params::UCustomizableObjectInstance_RemoveValueFromIntRange_Params Parms;

	Parms.ParamName = ParamName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.RemoveValueFromFloatRange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ParamName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObjectInstance::RemoveValueFromFloatRange(const class FString& ParamName)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "RemoveValueFromFloatRange");

	Params::UCustomizableObjectInstance_RemoveValueFromFloatRange_Params Parms;

	Parms.ParamName = ParamName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.RemoveMultilayerProjector
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        ProjectorParamName                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCustomizableObjectInstance::RemoveMultilayerProjector(class FName& ProjectorParamName)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "RemoveMultilayerProjector");

	Params::UCustomizableObjectInstance_RemoveMultilayerProjector_Params Parms;

	Parms.ProjectorParamName = ProjectorParamName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CustomizableObject.CustomizableObjectInstance.MultilayerProjectorUpdateVirtualLayer
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        ProjectorParamName                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ID                                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMultilayerProjectorVirtualLayerLayer                                                            (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCustomizableObjectInstance::MultilayerProjectorUpdateVirtualLayer(class FName& ProjectorParamName, class FName& ID, struct FMultilayerProjectorVirtualLayer& Layer)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "MultilayerProjectorUpdateVirtualLayer");

	Params::UCustomizableObjectInstance_MultilayerProjectorUpdateVirtualLayer_Params Parms;

	Parms.ProjectorParamName = ProjectorParamName;
	Parms.ID = ID;
	Parms.Layer = Layer;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CustomizableObject.CustomizableObjectInstance.MultilayerProjectorUpdateLayer
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        ProjectorParamName                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMultilayerProjectorLayer   Layer                                                            (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCustomizableObjectInstance::MultilayerProjectorUpdateLayer(class FName& ProjectorParamName, int32 Index, struct FMultilayerProjectorLayer& Layer)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "MultilayerProjectorUpdateLayer");

	Params::UCustomizableObjectInstance_MultilayerProjectorUpdateLayer_Params Parms;

	Parms.ProjectorParamName = ProjectorParamName;
	Parms.Index = Index;
	Parms.Layer = Layer;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CustomizableObject.CustomizableObjectInstance.MultilayerProjectorRemoveVirtualLayer
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        ProjectorParamName                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ID                                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCustomizableObjectInstance::MultilayerProjectorRemoveVirtualLayer(class FName& ProjectorParamName, class FName& ID)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "MultilayerProjectorRemoveVirtualLayer");

	Params::UCustomizableObjectInstance_MultilayerProjectorRemoveVirtualLayer_Params Parms;

	Parms.ProjectorParamName = ProjectorParamName;
	Parms.ID = ID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CustomizableObject.CustomizableObjectInstance.MultilayerProjectorRemoveLayerAt
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        ProjectorParamName                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCustomizableObjectInstance::MultilayerProjectorRemoveLayerAt(class FName& ProjectorParamName, int32 Index)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "MultilayerProjectorRemoveLayerAt");

	Params::UCustomizableObjectInstance_MultilayerProjectorRemoveLayerAt_Params Parms;

	Parms.ProjectorParamName = ProjectorParamName;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CustomizableObject.CustomizableObjectInstance.MultilayerProjectorNumLayers
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ProjectorParamName                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObjectInstance::MultilayerProjectorNumLayers(class FName& ProjectorParamName)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "MultilayerProjectorNumLayers");

	Params::UCustomizableObjectInstance_MultilayerProjectorNumLayers_Params Parms;

	Parms.ProjectorParamName = ProjectorParamName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.MultilayerProjectorGetVirtualLayers
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ProjectorParamName                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FName>                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FName> UCustomizableObjectInstance::MultilayerProjectorGetVirtualLayers(class FName& ProjectorParamName)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "MultilayerProjectorGetVirtualLayers");

	Params::UCustomizableObjectInstance_MultilayerProjectorGetVirtualLayers_Params Parms;

	Parms.ProjectorParamName = ProjectorParamName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.MultilayerProjectorGetVirtualLayer
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ProjectorParamName                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ID                                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMultilayerProjectorVirtualLayerReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FMultilayerProjectorVirtualLayer UCustomizableObjectInstance::MultilayerProjectorGetVirtualLayer(class FName& ProjectorParamName, class FName& ID)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "MultilayerProjectorGetVirtualLayer");

	Params::UCustomizableObjectInstance_MultilayerProjectorGetVirtualLayer_Params Parms;

	Parms.ProjectorParamName = ProjectorParamName;
	Parms.ID = ID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.MultilayerProjectorGetLayer
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ProjectorParamName                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMultilayerProjectorLayer   ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FMultilayerProjectorLayer UCustomizableObjectInstance::MultilayerProjectorGetLayer(class FName& ProjectorParamName, int32 Index)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "MultilayerProjectorGetLayer");

	Params::UCustomizableObjectInstance_MultilayerProjectorGetLayer_Params Parms;

	Parms.ProjectorParamName = ProjectorParamName;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.MultilayerProjectorFindOrCreateVirtualLayer
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        ProjectorParamName                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ID                                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMultilayerProjectorVirtualLayerReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FMultilayerProjectorVirtualLayer UCustomizableObjectInstance::MultilayerProjectorFindOrCreateVirtualLayer(class FName& ProjectorParamName, class FName& ID)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "MultilayerProjectorFindOrCreateVirtualLayer");

	Params::UCustomizableObjectInstance_MultilayerProjectorFindOrCreateVirtualLayer_Params Parms;

	Parms.ProjectorParamName = ProjectorParamName;
	Parms.ID = ID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.MultilayerProjectorCreateVirtualLayer
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        ProjectorParamName                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ID                                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCustomizableObjectInstance::MultilayerProjectorCreateVirtualLayer(class FName& ProjectorParamName, class FName& ID)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "MultilayerProjectorCreateVirtualLayer");

	Params::UCustomizableObjectInstance_MultilayerProjectorCreateVirtualLayer_Params Parms;

	Parms.ProjectorParamName = ProjectorParamName;
	Parms.ID = ID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CustomizableObject.CustomizableObjectInstance.MultilayerProjectorCreateLayer
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        ProjectorParamName                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCustomizableObjectInstance::MultilayerProjectorCreateLayer(class FName& ProjectorParamName, int32 Index)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "MultilayerProjectorCreateLayer");

	Params::UCustomizableObjectInstance_MultilayerProjectorCreateLayer_Params Parms;

	Parms.ProjectorParamName = ProjectorParamName;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CustomizableObject.CustomizableObjectInstance.IsParamMultidimensional
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ParamName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCustomizableObjectInstance::IsParamMultidimensional(const class FString& ParamName)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "IsParamMultidimensional");

	Params::UCustomizableObjectInstance_IsParamMultidimensional_Params Parms;

	Parms.ParamName = ParamName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.IsParameterRelevant
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ParamName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCustomizableObjectInstance::IsParameterRelevant(const class FString& ParamName)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "IsParameterRelevant");

	Params::UCustomizableObjectInstance_IsParameterRelevant_Params Parms;

	Parms.ParamName = ParamName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.HasAnySkeletalMesh
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCustomizableObjectInstance::HasAnySkeletalMesh()
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "HasAnySkeletalMesh");

	Params::UCustomizableObjectInstance_HasAnySkeletalMesh_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.HasAnyParameters
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCustomizableObjectInstance::HasAnyParameters()
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "HasAnyParameters");

	Params::UCustomizableObjectInstance_HasAnyParameters_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.GetVectorParameters
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FCustomizableObjectVectorParameterValue>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FCustomizableObjectVectorParameterValue> UCustomizableObjectInstance::GetVectorParameters()
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "GetVectorParameters");

	Params::UCustomizableObjectInstance_GetVectorParameters_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.GetTextureValueRange
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ParamName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObjectInstance::GetTextureValueRange(const class FString& ParamName)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "GetTextureValueRange");

	Params::UCustomizableObjectInstance_GetTextureValueRange_Params Parms;

	Parms.ParamName = ParamName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.GetTextureParameterSelectedOption
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      TextureParamName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RangeIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UCustomizableObjectInstance::GetTextureParameterSelectedOption(const class FString& TextureParamName, int32 RangeIndex)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "GetTextureParameterSelectedOption");

	Params::UCustomizableObjectInstance_GetTextureParameterSelectedOption_Params Parms;

	Parms.TextureParamName = TextureParamName;
	Parms.RangeIndex = RangeIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.GetTextureParameters
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FCustomizableObjectTextureParameterValue>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FCustomizableObjectTextureParameterValue> UCustomizableObjectInstance::GetTextureParameters()
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "GetTextureParameters");

	Params::UCustomizableObjectInstance_GetTextureParameters_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.GetSkeletalMesh
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ComponentIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMesh*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USkeletalMesh* UCustomizableObjectInstance::GetSkeletalMesh(int32 ComponentIndex)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "GetSkeletalMesh");

	Params::UCustomizableObjectInstance_GetSkeletalMesh_Params Parms;

	Parms.ComponentIndex = ComponentIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.GetProjectorValueRange
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ParamName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObjectInstance::GetProjectorValueRange(const class FString& ParamName)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "GetProjectorValueRange");

	Params::UCustomizableObjectInstance_GetProjectorValueRange_Params Parms;

	Parms.ParamName = ParamName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.GetProjectorValue
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ProjectorParamName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutPos                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutDirection                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutUp                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutScale                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutAngle                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ECustomizableObjectProjectorTypeOutType                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RangeIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCustomizableObjectInstance::GetProjectorValue(const class FString& ProjectorParamName, struct FVector* OutPos, struct FVector* OutDirection, struct FVector* OutUp, struct FVector* OutScale, float* OutAngle, enum class ECustomizableObjectProjectorType* OutType, int32 RangeIndex)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "GetProjectorValue");

	Params::UCustomizableObjectInstance_GetProjectorValue_Params Parms;

	Parms.ProjectorParamName = ProjectorParamName;
	Parms.RangeIndex = RangeIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutPos != nullptr)
		*OutPos = Parms.OutPos;

	if (OutDirection != nullptr)
		*OutDirection = Parms.OutDirection;

	if (OutUp != nullptr)
		*OutUp = Parms.OutUp;

	if (OutScale != nullptr)
		*OutScale = Parms.OutScale;

	if (OutAngle != nullptr)
		*OutAngle = Parms.OutAngle;

	if (OutType != nullptr)
		*OutType = Parms.OutType;

}


// Function CustomizableObject.CustomizableObjectInstance.GetProjectorUp
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ParamName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RangeIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UCustomizableObjectInstance::GetProjectorUp(const class FString& ParamName, int32 RangeIndex)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "GetProjectorUp");

	Params::UCustomizableObjectInstance_GetProjectorUp_Params Parms;

	Parms.ParamName = ParamName;
	Parms.RangeIndex = RangeIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.GetProjectorScale
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ParamName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RangeIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UCustomizableObjectInstance::GetProjectorScale(const class FString& ParamName, int32 RangeIndex)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "GetProjectorScale");

	Params::UCustomizableObjectInstance_GetProjectorScale_Params Parms;

	Parms.ParamName = ParamName;
	Parms.RangeIndex = RangeIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.GetProjectorPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ParamName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RangeIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UCustomizableObjectInstance::GetProjectorPosition(const class FString& ParamName, int32 RangeIndex)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "GetProjectorPosition");

	Params::UCustomizableObjectInstance_GetProjectorPosition_Params Parms;

	Parms.ParamName = ParamName;
	Parms.RangeIndex = RangeIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.GetProjectorParameterType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ParamName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RangeIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ECustomizableObjectProjectorTypeReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECustomizableObjectProjectorType UCustomizableObjectInstance::GetProjectorParameterType(const class FString& ParamName, int32 RangeIndex)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "GetProjectorParameterType");

	Params::UCustomizableObjectInstance_GetProjectorParameterType_Params Parms;

	Parms.ParamName = ParamName;
	Parms.RangeIndex = RangeIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.GetProjectorParameters
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FCustomizableObjectProjectorParameterValue>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FCustomizableObjectProjectorParameterValue> UCustomizableObjectInstance::GetProjectorParameters()
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "GetProjectorParameters");

	Params::UCustomizableObjectInstance_GetProjectorParameters_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.GetProjectorDirection
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ParamName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RangeIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UCustomizableObjectInstance::GetProjectorDirection(const class FString& ParamName, int32 RangeIndex)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "GetProjectorDirection");

	Params::UCustomizableObjectInstance_GetProjectorDirection_Params Parms;

	Parms.ParamName = ParamName;
	Parms.RangeIndex = RangeIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.GetProjectorAngle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ParamName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RangeIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UCustomizableObjectInstance::GetProjectorAngle(const class FString& ParamName, int32 RangeIndex)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "GetProjectorAngle");

	Params::UCustomizableObjectInstance_GetProjectorAngle_Params Parms;

	Parms.ParamName = ParamName;
	Parms.RangeIndex = RangeIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.GetParameterDescription
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ParamName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              DescIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture2D* UCustomizableObjectInstance::GetParameterDescription(const class FString& ParamName, int32 DescIndex)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "GetParameterDescription");

	Params::UCustomizableObjectInstance_GetParameterDescription_Params Parms;

	Parms.ParamName = ParamName;
	Parms.DescIndex = DescIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.GetNumComponents
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObjectInstance::GetNumComponents()
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "GetNumComponents");

	Params::UCustomizableObjectInstance_GetNumComponents_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.GetIntValueRange
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ParamName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObjectInstance::GetIntValueRange(const class FString& ParamName)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "GetIntValueRange");

	Params::UCustomizableObjectInstance_GetIntValueRange_Params Parms;

	Parms.ParamName = ParamName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.GetIntParameterSelectedOption
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ParamName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RangeIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UCustomizableObjectInstance::GetIntParameterSelectedOption(const class FString& ParamName, int32 RangeIndex)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "GetIntParameterSelectedOption");

	Params::UCustomizableObjectInstance_GetIntParameterSelectedOption_Params Parms;

	Parms.ParamName = ParamName;
	Parms.RangeIndex = RangeIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.GetIntParameters
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FCustomizableObjectIntParameterValue>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FCustomizableObjectIntParameterValue> UCustomizableObjectInstance::GetIntParameters()
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "GetIntParameters");

	Params::UCustomizableObjectInstance_GetIntParameters_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.GetFloatValueRange
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ParamName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObjectInstance::GetFloatValueRange(const class FString& ParamName)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "GetFloatValueRange");

	Params::UCustomizableObjectInstance_GetFloatValueRange_Params Parms;

	Parms.ParamName = ParamName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.GetFloatParameterSelectedOption
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      FloatParamName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RangeIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UCustomizableObjectInstance::GetFloatParameterSelectedOption(const class FString& FloatParamName, int32 RangeIndex)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "GetFloatParameterSelectedOption");

	Params::UCustomizableObjectInstance_GetFloatParameterSelectedOption_Params Parms;

	Parms.FloatParamName = FloatParamName;
	Parms.RangeIndex = RangeIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.GetFloatParameters
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FCustomizableObjectFloatParameterValue>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FCustomizableObjectFloatParameterValue> UCustomizableObjectInstance::GetFloatParameters()
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "GetFloatParameters");

	Params::UCustomizableObjectInstance_GetFloatParameters_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.GetCustomizableObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCustomizableObject*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCustomizableObject* UCustomizableObjectInstance::GetCustomizableObject()
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "GetCustomizableObject");

	Params::UCustomizableObjectInstance_GetCustomizableObject_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.GetCurrentState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UCustomizableObjectInstance::GetCurrentState()
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "GetCurrentState");

	Params::UCustomizableObjectInstance_GetCurrentState_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.GetColorParameterSelectedOption
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ColorParamName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UCustomizableObjectInstance::GetColorParameterSelectedOption(const class FString& ColorParamName)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "GetColorParameterSelectedOption");

	Params::UCustomizableObjectInstance_GetColorParameterSelectedOption_Params Parms;

	Parms.ColorParamName = ColorParamName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.GetBuildParameterRelevancy
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCustomizableObjectInstance::GetBuildParameterRelevancy()
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "GetBuildParameterRelevancy");

	Params::UCustomizableObjectInstance_GetBuildParameterRelevancy_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.GetBuildParameterDecorations
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCustomizableObjectInstance::GetBuildParameterDecorations()
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "GetBuildParameterDecorations");

	Params::UCustomizableObjectInstance_GetBuildParameterDecorations_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.GetBoolParameterSelectedOption
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      BoolParamName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCustomizableObjectInstance::GetBoolParameterSelectedOption(const class FString& BoolParamName)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "GetBoolParameterSelectedOption");

	Params::UCustomizableObjectInstance_GetBoolParameterSelectedOption_Params Parms;

	Parms.BoolParamName = BoolParamName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.GetBoolParameters
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FCustomizableObjectBoolParameterValue>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FCustomizableObjectBoolParameterValue> UCustomizableObjectInstance::GetBoolParameters()
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "GetBoolParameters");

	Params::UCustomizableObjectInstance_GetBoolParameters_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.GetAnimBP
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ComponentIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Slot                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UAnimInstance>   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSubclassOf<class UAnimInstance> UCustomizableObjectInstance::GetAnimBP(int32 ComponentIndex, class FName& Slot)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "GetAnimBP");

	Params::UCustomizableObjectInstance_GetAnimBP_Params Parms;

	Parms.ComponentIndex = ComponentIndex;
	Parms.Slot = Slot;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.GetAnimationGameplayTags
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTagContainer       ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct FGameplayTagContainer UCustomizableObjectInstance::GetAnimationGameplayTags()
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "GetAnimationGameplayTags");

	Params::UCustomizableObjectInstance_GetAnimationGameplayTags_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.ForEachAnimInstance
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// int32                              ComponentIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCustomizableObjectInstance::ForEachAnimInstance(int32 ComponentIndex, FDelegateProperty_ Delegate)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "ForEachAnimInstance");

	Params::UCustomizableObjectInstance_ForEachAnimInstance_Params Parms;

	Parms.ComponentIndex = ComponentIndex;
	Parms.Delegate = Delegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CustomizableObject.CustomizableObjectInstance.FindVectorParameterNameIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ParamName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObjectInstance::FindVectorParameterNameIndex(const class FString& ParamName)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "FindVectorParameterNameIndex");

	Params::UCustomizableObjectInstance_FindVectorParameterNameIndex_Params Parms;

	Parms.ParamName = ParamName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.FindProjectorParameterNameIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ParamName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObjectInstance::FindProjectorParameterNameIndex(const class FString& ParamName)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "FindProjectorParameterNameIndex");

	Params::UCustomizableObjectInstance_FindProjectorParameterNameIndex_Params Parms;

	Parms.ParamName = ParamName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.FindIntParameterNameIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ParamName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObjectInstance::FindIntParameterNameIndex(const class FString& ParamName)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "FindIntParameterNameIndex");

	Params::UCustomizableObjectInstance_FindIntParameterNameIndex_Params Parms;

	Parms.ParamName = ParamName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.FindFloatParameterNameIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ParamName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObjectInstance::FindFloatParameterNameIndex(const class FString& ParamName)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "FindFloatParameterNameIndex");

	Params::UCustomizableObjectInstance_FindFloatParameterNameIndex_Params Parms;

	Parms.ParamName = ParamName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.FindBoolParameterNameIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ParamName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObjectInstance::FindBoolParameterNameIndex(const class FString& ParamName)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "FindBoolParameterNameIndex");

	Params::UCustomizableObjectInstance_FindBoolParameterNameIndex_Params Parms;

	Parms.ParamName = ParamName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.CreateMultiLayerProjector
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        ProjectorParamName                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCustomizableObjectInstance::CreateMultiLayerProjector(class FName& ProjectorParamName)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "CreateMultiLayerProjector");

	Params::UCustomizableObjectInstance_CreateMultiLayerProjector_Params Parms;

	Parms.ProjectorParamName = ProjectorParamName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.CloneStatic
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Outer                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCustomizableObjectInstance* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCustomizableObjectInstance* UCustomizableObjectInstance::CloneStatic(class UObject* Outer)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "CloneStatic");

	Params::UCustomizableObjectInstance_CloneStatic_Params Parms;

	Parms.Outer = Outer;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.Clone
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCustomizableObjectInstance* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCustomizableObjectInstance* UCustomizableObjectInstance::Clone()
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "Clone");

	Params::UCustomizableObjectInstance_Clone_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.AddValueToProjectorRange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ParamName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObjectInstance::AddValueToProjectorRange(const class FString& ParamName)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "AddValueToProjectorRange");

	Params::UCustomizableObjectInstance_AddValueToProjectorRange_Params Parms;

	Parms.ParamName = ParamName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.AddValueToIntRange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ParamName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObjectInstance::AddValueToIntRange(const class FString& ParamName)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "AddValueToIntRange");

	Params::UCustomizableObjectInstance_AddValueToIntRange_Params Parms;

	Parms.ParamName = ParamName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.AddValueToFloatRange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ParamName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObjectInstance::AddValueToFloatRange(const class FString& ParamName)
{
	static auto Func = Class->GetFunction("CustomizableObjectInstance", "AddValueToFloatRange");

	Params::UCustomizableObjectInstance_AddValueToFloatRange_Params Parms;

	Parms.ParamName = ParamName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectSystem.SetReleaseMutableTexturesImmediately
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bReleaseTextures                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCustomizableObjectSystem::SetReleaseMutableTexturesImmediately(bool bReleaseTextures)
{
	static auto Func = Class->GetFunction("CustomizableObjectSystem", "SetReleaseMutableTexturesImmediately");

	Params::UCustomizableObjectSystem_SetReleaseMutableTexturesImmediately_Params Parms;

	Parms.bReleaseTextures = bReleaseTextures;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CustomizableObject.CustomizableObjectSystem.GetTotalInstances
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObjectSystem::GetTotalInstances()
{
	static auto Func = Class->GetFunction("CustomizableObjectSystem", "GetTotalInstances");

	Params::UCustomizableObjectSystem_GetTotalInstances_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectSystem.GetTextureMemoryUsed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObjectSystem::GetTextureMemoryUsed()
{
	static auto Func = Class->GetFunction("CustomizableObjectSystem", "GetTextureMemoryUsed");

	Params::UCustomizableObjectSystem_GetTextureMemoryUsed_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectSystem.GetPluginVersion
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UCustomizableObjectSystem::GetPluginVersion()
{
	static auto Func = Class->GetFunction("CustomizableObjectSystem", "GetPluginVersion");

	Params::UCustomizableObjectSystem_GetPluginVersion_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectSystem.GetNumPendingInstances
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObjectSystem::GetNumPendingInstances()
{
	static auto Func = Class->GetFunction("CustomizableObjectSystem", "GetNumPendingInstances");

	Params::UCustomizableObjectSystem_GetNumPendingInstances_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectSystem.GetNumInstances
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObjectSystem::GetNumInstances()
{
	static auto Func = Class->GetFunction("CustomizableObjectSystem", "GetNumInstances");

	Params::UCustomizableObjectSystem_GetNumInstances_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectSystem.GetInstance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UCustomizableObjectSystem*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCustomizableObjectSystem* UCustomizableObjectSystem::GetInstance()
{
	static auto Func = Class->GetFunction("CustomizableObjectSystem", "GetInstance");

	Params::UCustomizableObjectSystem_GetInstance_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectSystem.GetAverageBuildTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObjectSystem::GetAverageBuildTime()
{
	static auto Func = Class->GetFunction("CustomizableObjectSystem", "GetAverageBuildTime");

	Params::UCustomizableObjectSystem_GetAverageBuildTime_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableSkeletalComponent.UpdateSkeletalMeshAsyncResult
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIgnoreCloseDist                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForceHighPriority                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCustomizableSkeletalComponent::UpdateSkeletalMeshAsyncResult(FDelegateProperty_ Callback, bool bIgnoreCloseDist, bool bForceHighPriority)
{
	static auto Func = Class->GetFunction("CustomizableSkeletalComponent", "UpdateSkeletalMeshAsyncResult");

	Params::UCustomizableSkeletalComponent_UpdateSkeletalMeshAsyncResult_Params Parms;

	Parms.Callback = Callback;
	Parms.bIgnoreCloseDist = bIgnoreCloseDist;
	Parms.bForceHighPriority = bForceHighPriority;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CustomizableObject.CustomizableSkeletalComponent.UpdateSkeletalMeshAsync
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNeverSkipUpdate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCustomizableSkeletalComponent::UpdateSkeletalMeshAsync(bool bNeverSkipUpdate)
{
	static auto Func = Class->GetFunction("CustomizableSkeletalComponent", "UpdateSkeletalMeshAsync");

	Params::UCustomizableSkeletalComponent_UpdateSkeletalMeshAsync_Params Parms;

	Parms.bNeverSkipUpdate = bNeverSkipUpdate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
