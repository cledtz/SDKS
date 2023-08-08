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


// Function Procedural.ProceduralParameterModifier.GetContribution
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UProceduralParameterModifier::GetContribution()
{
	static auto Func = Class->GetFunction("ProceduralParameterModifier", "GetContribution");

	Params::UProceduralParameterModifier_GetContribution_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Procedural.HISMBuilderSettings.SetOverriddenLightMapRes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHISMBuilderSettings::SetOverriddenLightMapRes(int32 Value)
{
	static auto Func = Class->GetFunction("HISMBuilderSettings", "SetOverriddenLightMapRes");

	Params::UHISMBuilderSettings_SetOverriddenLightMapRes_Params Parms;

	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Procedural.HISMBuilderSettings.GetOverriddenLightMapRes
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UHISMBuilderSettings::GetOverriddenLightMapRes()
{
	static auto Func = Class->GetFunction("HISMBuilderSettings", "GetOverriddenLightMapRes");

	Params::UHISMBuilderSettings_GetOverriddenLightMapRes_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Procedural.ProceduralGenerationContext.GetGenerationVolume
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UVolume*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVolume* UProceduralGenerationContext::GetGenerationVolume()
{
	static auto Func = Class->GetFunction("ProceduralGenerationContext", "GetGenerationVolume");

	Params::UProceduralGenerationContext_GetGenerationVolume_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Procedural.ProceduralGenerationContext.GetGenerationComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UProceduralGenerationComponent*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UProceduralGenerationComponent* UProceduralGenerationContext::GetGenerationComponent()
{
	static auto Func = Class->GetFunction("ProceduralGenerationContext", "GetGenerationComponent");

	Params::UProceduralGenerationContext_GetGenerationComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Procedural.ProceduralGenerationVolume.Generate
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UProceduralGenerationVolume::Generate()
{
	static auto Func = Class->GetFunction("ProceduralGenerationVolume", "Generate");

	Params::UProceduralGenerationVolume_Generate_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Procedural.ProceduralGenerationVolume.ClearGeneratedContent
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UProceduralGenerationVolume::ClearGeneratedContent()
{
	static auto Func = Class->GetFunction("ProceduralGenerationVolume", "ClearGeneratedContent");

	Params::UProceduralGenerationVolume_ClearGeneratedContent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Procedural.ProceduralGeneratorContext.OnGenerate
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UProceduralGeneratorContext::OnGenerate()
{
	static auto Func = Class->GetFunction("ProceduralGeneratorContext", "OnGenerate");

	Params::UProceduralGeneratorContext_OnGenerate_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Procedural.ProceduralGeneratorContext.OnDrawVisualization
// (Event, Public, BlueprintEvent, Const)
// Parameters:

void UProceduralGeneratorContext::OnDrawVisualization()
{
	static auto Func = Class->GetFunction("ProceduralGeneratorContext", "OnDrawVisualization");

	Params::UProceduralGeneratorContext_OnDrawVisualization_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Procedural.ProceduralGeneratorContext.OnClearGeneratedContent
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UProceduralGeneratorContext::OnClearGeneratedContent()
{
	static auto Func = Class->GetFunction("ProceduralGeneratorContext", "OnClearGeneratedContent");

	Params::UProceduralGeneratorContext_OnClearGeneratedContent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Procedural.ProceduralGeneratorContext.GetOrCreateGeneratorContext
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UProceduralGenerator*        Generator                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UProceduralGeneratorContext* Context                                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralGeneratorContext::GetOrCreateGeneratorContext(class UProceduralGenerator* Generator, class UProceduralGeneratorContext** Context)
{
	static auto Func = Class->GetFunction("ProceduralGeneratorContext", "GetOrCreateGeneratorContext");

	Params::UProceduralGeneratorContext_GetOrCreateGeneratorContext_Params Parms;

	Parms.Generator = Generator;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Context != nullptr)
		*Context = Parms.Context;

}


// Function Procedural.ProceduralGeneratorContext.GetGeneratedContexts
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UProceduralGeneratorContext*>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UProceduralGeneratorContext*> UProceduralGeneratorContext::GetGeneratedContexts()
{
	static auto Func = Class->GetFunction("ProceduralGeneratorContext", "GetGeneratedContexts");

	Params::UProceduralGeneratorContext_GetGeneratedContexts_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Procedural.ProceduralGeneratorContext.Generate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UProceduralGeneratorContext::Generate()
{
	static auto Func = Class->GetFunction("ProceduralGeneratorContext", "Generate");

	Params::UProceduralGeneratorContext_Generate_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Procedural.ProceduralGeneratorContext.ClearGeneratedContent
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UProceduralGeneratorContext::ClearGeneratedContent()
{
	static auto Func = Class->GetFunction("ProceduralGeneratorContext", "ClearGeneratedContent");

	Params::UProceduralGeneratorContext_ClearGeneratedContent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Procedural.ProceduralPointCloud.GetPointsByTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InTag                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FProceduralPointCloudPoint>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FProceduralPointCloudPoint> UProceduralPointCloud::GetPointsByTag(class FName InTag)
{
	static auto Func = Class->GetFunction("ProceduralPointCloud", "GetPointsByTag");

	Params::UProceduralPointCloud_GetPointsByTag_Params Parms;

	Parms.InTag = InTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Procedural.ProceduralPointCloud.Empty
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UProceduralPointCloud::Empty()
{
	static auto Func = Class->GetFunction("ProceduralPointCloud", "Empty");

	Params::UProceduralPointCloud_Empty_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Procedural.ProceduralRotationMapModifier.SetYawMin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralRotationMapModifier::SetYawMin(float InValue)
{
	static auto Func = Class->GetFunction("ProceduralRotationMapModifier", "SetYawMin");

	Params::UProceduralRotationMapModifier_SetYawMin_Params Parms;

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Procedural.ProceduralRotationMapModifier.SetYawMax
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralRotationMapModifier::SetYawMax(float InValue)
{
	static auto Func = Class->GetFunction("ProceduralRotationMapModifier", "SetYawMax");

	Params::UProceduralRotationMapModifier_SetYawMax_Params Parms;

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Procedural.ProceduralRotationMapModifier.SetRollMin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralRotationMapModifier::SetRollMin(float InValue)
{
	static auto Func = Class->GetFunction("ProceduralRotationMapModifier", "SetRollMin");

	Params::UProceduralRotationMapModifier_SetRollMin_Params Parms;

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Procedural.ProceduralRotationMapModifier.SetRollMax
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralRotationMapModifier::SetRollMax(float InValue)
{
	static auto Func = Class->GetFunction("ProceduralRotationMapModifier", "SetRollMax");

	Params::UProceduralRotationMapModifier_SetRollMax_Params Parms;

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Procedural.ProceduralRotationMapModifier.SetPitchMin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralRotationMapModifier::SetPitchMin(float InValue)
{
	static auto Func = Class->GetFunction("ProceduralRotationMapModifier", "SetPitchMin");

	Params::UProceduralRotationMapModifier_SetPitchMin_Params Parms;

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Procedural.ProceduralRotationMapModifier.SetPitchMax
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralRotationMapModifier::SetPitchMax(float InValue)
{
	static auto Func = Class->GetFunction("ProceduralRotationMapModifier", "SetPitchMax");

	Params::UProceduralRotationMapModifier_SetPitchMax_Params Parms;

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Procedural.ProceduralRotationMapModifier.GetYawMin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UProceduralRotationMapModifier::GetYawMin()
{
	static auto Func = Class->GetFunction("ProceduralRotationMapModifier", "GetYawMin");

	Params::UProceduralRotationMapModifier_GetYawMin_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Procedural.ProceduralRotationMapModifier.GetYawMax
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UProceduralRotationMapModifier::GetYawMax()
{
	static auto Func = Class->GetFunction("ProceduralRotationMapModifier", "GetYawMax");

	Params::UProceduralRotationMapModifier_GetYawMax_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Procedural.ProceduralRotationMapModifier.GetRollMin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UProceduralRotationMapModifier::GetRollMin()
{
	static auto Func = Class->GetFunction("ProceduralRotationMapModifier", "GetRollMin");

	Params::UProceduralRotationMapModifier_GetRollMin_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Procedural.ProceduralRotationMapModifier.GetRollMax
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UProceduralRotationMapModifier::GetRollMax()
{
	static auto Func = Class->GetFunction("ProceduralRotationMapModifier", "GetRollMax");

	Params::UProceduralRotationMapModifier_GetRollMax_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Procedural.ProceduralRotationMapModifier.GetPitchMin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UProceduralRotationMapModifier::GetPitchMin()
{
	static auto Func = Class->GetFunction("ProceduralRotationMapModifier", "GetPitchMin");

	Params::UProceduralRotationMapModifier_GetPitchMin_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Procedural.ProceduralRotationMapModifier.GetPitchMax
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UProceduralRotationMapModifier::GetPitchMax()
{
	static auto Func = Class->GetFunction("ProceduralRotationMapModifier", "GetPitchMax");

	Params::UProceduralRotationMapModifier_GetPitchMax_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Procedural.ProceduralRotationNoiseModifier.SetRandomYawMin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralRotationNoiseModifier::SetRandomYawMin(float InValue)
{
	static auto Func = Class->GetFunction("ProceduralRotationNoiseModifier", "SetRandomYawMin");

	Params::UProceduralRotationNoiseModifier_SetRandomYawMin_Params Parms;

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Procedural.ProceduralRotationNoiseModifier.SetRandomYawMax
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralRotationNoiseModifier::SetRandomYawMax(float InValue)
{
	static auto Func = Class->GetFunction("ProceduralRotationNoiseModifier", "SetRandomYawMax");

	Params::UProceduralRotationNoiseModifier_SetRandomYawMax_Params Parms;

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Procedural.ProceduralRotationNoiseModifier.SetRandomRollMin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralRotationNoiseModifier::SetRandomRollMin(float InValue)
{
	static auto Func = Class->GetFunction("ProceduralRotationNoiseModifier", "SetRandomRollMin");

	Params::UProceduralRotationNoiseModifier_SetRandomRollMin_Params Parms;

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Procedural.ProceduralRotationNoiseModifier.SetRandomRollMax
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralRotationNoiseModifier::SetRandomRollMax(float InValue)
{
	static auto Func = Class->GetFunction("ProceduralRotationNoiseModifier", "SetRandomRollMax");

	Params::UProceduralRotationNoiseModifier_SetRandomRollMax_Params Parms;

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Procedural.ProceduralRotationNoiseModifier.SetRandomPitchMin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralRotationNoiseModifier::SetRandomPitchMin(float InValue)
{
	static auto Func = Class->GetFunction("ProceduralRotationNoiseModifier", "SetRandomPitchMin");

	Params::UProceduralRotationNoiseModifier_SetRandomPitchMin_Params Parms;

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Procedural.ProceduralRotationNoiseModifier.SetRandomPitchMax
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralRotationNoiseModifier::SetRandomPitchMax(float InValue)
{
	static auto Func = Class->GetFunction("ProceduralRotationNoiseModifier", "SetRandomPitchMax");

	Params::UProceduralRotationNoiseModifier_SetRandomPitchMax_Params Parms;

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Procedural.ProceduralRotationNoiseModifier.GetRandomYawMin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UProceduralRotationNoiseModifier::GetRandomYawMin()
{
	static auto Func = Class->GetFunction("ProceduralRotationNoiseModifier", "GetRandomYawMin");

	Params::UProceduralRotationNoiseModifier_GetRandomYawMin_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Procedural.ProceduralRotationNoiseModifier.GetRandomYawMax
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UProceduralRotationNoiseModifier::GetRandomYawMax()
{
	static auto Func = Class->GetFunction("ProceduralRotationNoiseModifier", "GetRandomYawMax");

	Params::UProceduralRotationNoiseModifier_GetRandomYawMax_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Procedural.ProceduralRotationNoiseModifier.GetRandomRollMin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UProceduralRotationNoiseModifier::GetRandomRollMin()
{
	static auto Func = Class->GetFunction("ProceduralRotationNoiseModifier", "GetRandomRollMin");

	Params::UProceduralRotationNoiseModifier_GetRandomRollMin_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Procedural.ProceduralRotationNoiseModifier.GetRandomRollMax
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UProceduralRotationNoiseModifier::GetRandomRollMax()
{
	static auto Func = Class->GetFunction("ProceduralRotationNoiseModifier", "GetRandomRollMax");

	Params::UProceduralRotationNoiseModifier_GetRandomRollMax_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Procedural.ProceduralRotationNoiseModifier.GetRandomPitchMin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UProceduralRotationNoiseModifier::GetRandomPitchMin()
{
	static auto Func = Class->GetFunction("ProceduralRotationNoiseModifier", "GetRandomPitchMin");

	Params::UProceduralRotationNoiseModifier_GetRandomPitchMin_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Procedural.ProceduralRotationNoiseModifier.GetRandomPitchMax
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UProceduralRotationNoiseModifier::GetRandomPitchMax()
{
	static auto Func = Class->GetFunction("ProceduralRotationNoiseModifier", "GetRandomPitchMax");

	Params::UProceduralRotationNoiseModifier_GetRandomPitchMax_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Procedural.ProceduralScaleMapModifier.SetRemapScaleMin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralScaleMapModifier::SetRemapScaleMin(float InValue)
{
	static auto Func = Class->GetFunction("ProceduralScaleMapModifier", "SetRemapScaleMin");

	Params::UProceduralScaleMapModifier_SetRemapScaleMin_Params Parms;

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Procedural.ProceduralScaleMapModifier.SetRemapScaleMax
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralScaleMapModifier::SetRemapScaleMax(float InValue)
{
	static auto Func = Class->GetFunction("ProceduralScaleMapModifier", "SetRemapScaleMax");

	Params::UProceduralScaleMapModifier_SetRemapScaleMax_Params Parms;

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Procedural.ProceduralScaleMapModifier.GetRemapScaleMin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UProceduralScaleMapModifier::GetRemapScaleMin()
{
	static auto Func = Class->GetFunction("ProceduralScaleMapModifier", "GetRemapScaleMin");

	Params::UProceduralScaleMapModifier_GetRemapScaleMin_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Procedural.ProceduralScaleMapModifier.GetRemapScaleMax
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UProceduralScaleMapModifier::GetRemapScaleMax()
{
	static auto Func = Class->GetFunction("ProceduralScaleMapModifier", "GetRemapScaleMax");

	Params::UProceduralScaleMapModifier_GetRemapScaleMax_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Procedural.ProceduralScaleNoiseModifier.SetScaleMin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralScaleNoiseModifier::SetScaleMin(float InValue)
{
	static auto Func = Class->GetFunction("ProceduralScaleNoiseModifier", "SetScaleMin");

	Params::UProceduralScaleNoiseModifier_SetScaleMin_Params Parms;

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Procedural.ProceduralScaleNoiseModifier.SetScaleMax
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralScaleNoiseModifier::SetScaleMax(float InValue)
{
	static auto Func = Class->GetFunction("ProceduralScaleNoiseModifier", "SetScaleMax");

	Params::UProceduralScaleNoiseModifier_SetScaleMax_Params Parms;

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Procedural.ProceduralScaleNoiseModifier.GetScaleMin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UProceduralScaleNoiseModifier::GetScaleMin()
{
	static auto Func = Class->GetFunction("ProceduralScaleNoiseModifier", "GetScaleMin");

	Params::UProceduralScaleNoiseModifier_GetScaleMin_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Procedural.ProceduralScaleNoiseModifier.GetScaleMax
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UProceduralScaleNoiseModifier::GetScaleMax()
{
	static auto Func = Class->GetFunction("ProceduralScaleNoiseModifier", "GetScaleMax");

	Params::UProceduralScaleNoiseModifier_GetScaleMax_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Procedural.ProceduralScatterSettings.SetSourcePointDistanceMin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralScatterSettings::SetSourcePointDistanceMin(float InValue)
{
	static auto Func = Class->GetFunction("ProceduralScatterSettings", "SetSourcePointDistanceMin");

	Params::UProceduralScatterSettings_SetSourcePointDistanceMin_Params Parms;

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Procedural.ProceduralScatterSettings.SetSourcePointDistanceMax
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralScatterSettings::SetSourcePointDistanceMax(float InValue)
{
	static auto Func = Class->GetFunction("ProceduralScatterSettings", "SetSourcePointDistanceMax");

	Params::UProceduralScatterSettings_SetSourcePointDistanceMax_Params Parms;

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Procedural.ProceduralScatterSettings.GetSourcePointDistanceMin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UProceduralScatterSettings::GetSourcePointDistanceMin()
{
	static auto Func = Class->GetFunction("ProceduralScatterSettings", "GetSourcePointDistanceMin");

	Params::UProceduralScatterSettings_GetSourcePointDistanceMin_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Procedural.ProceduralScatterSettings.GetSourcePointDistanceMax
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UProceduralScatterSettings::GetSourcePointDistanceMax()
{
	static auto Func = Class->GetFunction("ProceduralScatterSettings", "GetSourcePointDistanceMax");

	Params::UProceduralScatterSettings_GetSourcePointDistanceMax_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Procedural.ProceduralSurfaceHeightMap.SetHeightRangeMin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralSurfaceHeightMap::SetHeightRangeMin(float InValue)
{
	static auto Func = Class->GetFunction("ProceduralSurfaceHeightMap", "SetHeightRangeMin");

	Params::UProceduralSurfaceHeightMap_SetHeightRangeMin_Params Parms;

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Procedural.ProceduralSurfaceHeightMap.SetHeightRangeMax
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralSurfaceHeightMap::SetHeightRangeMax(float InValue)
{
	static auto Func = Class->GetFunction("ProceduralSurfaceHeightMap", "SetHeightRangeMax");

	Params::UProceduralSurfaceHeightMap_SetHeightRangeMax_Params Parms;

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Procedural.ProceduralSurfaceHeightMap.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              InHeight                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UProceduralSurfaceHeightMap::GetValue(float InHeight)
{
	static auto Func = Class->GetFunction("ProceduralSurfaceHeightMap", "GetValue");

	Params::UProceduralSurfaceHeightMap_GetValue_Params Parms;

	Parms.InHeight = InHeight;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Procedural.ProceduralSurfaceHeightMap.GetHeightRangeMin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UProceduralSurfaceHeightMap::GetHeightRangeMin()
{
	static auto Func = Class->GetFunction("ProceduralSurfaceHeightMap", "GetHeightRangeMin");

	Params::UProceduralSurfaceHeightMap_GetHeightRangeMin_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Procedural.ProceduralSurfaceHeightMap.GetHeightRangeMax
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UProceduralSurfaceHeightMap::GetHeightRangeMax()
{
	static auto Func = Class->GetFunction("ProceduralSurfaceHeightMap", "GetHeightRangeMax");

	Params::UProceduralSurfaceHeightMap_GetHeightRangeMax_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Procedural.ProceduralSurfaceSlopeAngleMap.SetSlopeAngleRangeMin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralSurfaceSlopeAngleMap::SetSlopeAngleRangeMin(float InValue)
{
	static auto Func = Class->GetFunction("ProceduralSurfaceSlopeAngleMap", "SetSlopeAngleRangeMin");

	Params::UProceduralSurfaceSlopeAngleMap_SetSlopeAngleRangeMin_Params Parms;

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Procedural.ProceduralSurfaceSlopeAngleMap.SetSlopeAngleRangeMax
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralSurfaceSlopeAngleMap::SetSlopeAngleRangeMax(float InValue)
{
	static auto Func = Class->GetFunction("ProceduralSurfaceSlopeAngleMap", "SetSlopeAngleRangeMax");

	Params::UProceduralSurfaceSlopeAngleMap_SetSlopeAngleRangeMax_Params Parms;

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Procedural.ProceduralSurfaceSlopeAngleMap.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              InSlopeAngle                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UProceduralSurfaceSlopeAngleMap::GetValue(float InSlopeAngle)
{
	static auto Func = Class->GetFunction("ProceduralSurfaceSlopeAngleMap", "GetValue");

	Params::UProceduralSurfaceSlopeAngleMap_GetValue_Params Parms;

	Parms.InSlopeAngle = InSlopeAngle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Procedural.ProceduralSurfaceSlopeAngleMap.GetSlopeAngleRangeMin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UProceduralSurfaceSlopeAngleMap::GetSlopeAngleRangeMin()
{
	static auto Func = Class->GetFunction("ProceduralSurfaceSlopeAngleMap", "GetSlopeAngleRangeMin");

	Params::UProceduralSurfaceSlopeAngleMap_GetSlopeAngleRangeMin_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Procedural.ProceduralSurfaceSlopeAngleMap.GetSlopeAngleRangeMax
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UProceduralSurfaceSlopeAngleMap::GetSlopeAngleRangeMax()
{
	static auto Func = Class->GetFunction("ProceduralSurfaceSlopeAngleMap", "GetSlopeAngleRangeMax");

	Params::UProceduralSurfaceSlopeAngleMap_GetSlopeAngleRangeMax_Params Parms;


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
