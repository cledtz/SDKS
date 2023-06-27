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


// Function DaySequence.DaySequenceModifierComponent.UnbindFromDaySequenceActor
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:

void UDaySequenceModifierComponent::UnbindFromDaySequenceActor()
{
	static auto Func = Class->GetFunction("DaySequenceModifierComponent", "UnbindFromDaySequenceActor");

	Params::UDaySequenceModifierComponent_UnbindFromDaySequenceActor_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DaySequence.DaySequenceModifierComponent.SetUserDaySequence
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class UDaySequence*                InDaySequence                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDaySequenceModifierComponent::SetUserDaySequence(class UDaySequence* InDaySequence)
{
	static auto Func = Class->GetFunction("DaySequenceModifierComponent", "SetUserDaySequence");

	Params::UDaySequenceModifierComponent_SetUserDaySequence_Params Parms;

	Parms.InDaySequence = InDaySequence;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DaySequence.DaySequenceModifierComponent.ResetOverrides
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:

void UDaySequenceModifierComponent::ResetOverrides()
{
	static auto Func = Class->GetFunction("DaySequenceModifierComponent", "ResetOverrides");

	Params::UDaySequenceModifierComponent_ResetOverrides_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DaySequence.DaySequenceModifierComponent.MuteNamedSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        SequenceKey                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bState                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDaySequenceModifierComponent::MuteNamedSequence(class FName SequenceKey, bool bState)
{
	static auto Func = Class->GetFunction("DaySequenceModifierComponent", "MuteNamedSequence");

	Params::UDaySequenceModifierComponent_MuteNamedSequence_Params Parms;

	Parms.SequenceKey = SequenceKey;
	Parms.bState = bState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DaySequence.DaySequenceModifierComponent.GetShapeVolumeComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UShapeComponent*             ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UShapeComponent* UDaySequenceModifierComponent::GetShapeVolumeComponent()
{
	static auto Func = Class->GetFunction("DaySequenceModifierComponent", "GetShapeVolumeComponent");

	Params::UDaySequenceModifierComponent_GetShapeVolumeComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DaySequence.DaySequenceModifierComponent.EnableModifier
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:

void UDaySequenceModifierComponent::EnableModifier()
{
	static auto Func = Class->GetFunction("DaySequenceModifierComponent", "EnableModifier");

	Params::UDaySequenceModifierComponent_EnableModifier_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DaySequence.DaySequenceModifierComponent.EnableDistanceVolumeBlends
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      InActor                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDaySequenceModifierComponent::EnableDistanceVolumeBlends(class AActor* InActor)
{
	static auto Func = Class->GetFunction("DaySequenceModifierComponent", "EnableDistanceVolumeBlends");

	Params::UDaySequenceModifierComponent_EnableDistanceVolumeBlends_Params Parms;

	Parms.InActor = InActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DaySequence.DaySequenceModifierComponent.DisableModifier
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:

void UDaySequenceModifierComponent::DisableModifier()
{
	static auto Func = Class->GetFunction("DaySequenceModifierComponent", "DisableModifier");

	Params::UDaySequenceModifierComponent_DisableModifier_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DaySequence.DaySequenceModifierComponent.BindToDaySequenceActor
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class ADaySequenceActor*           DaySequenceActor                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDaySequenceModifierComponent::BindToDaySequenceActor(class ADaySequenceActor* DaySequenceActor)
{
	static auto Func = Class->GetFunction("DaySequenceModifierComponent", "BindToDaySequenceActor");

	Params::UDaySequenceModifierComponent_BindToDaySequenceActor_Params Parms;

	Parms.DaySequenceActor = DaySequenceActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DaySequence.DaySequenceModifierComponent.AddVisibilityOverride
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bValue                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDaySequenceModifierComponent::AddVisibilityOverride(class UObject* Object, bool bValue)
{
	static auto Func = Class->GetFunction("DaySequenceModifierComponent", "AddVisibilityOverride");

	Params::UDaySequenceModifierComponent_AddVisibilityOverride_Params Parms;

	Parms.Object = Object;
	Parms.bValue = bValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DaySequence.DaySequenceModifierComponent.AddVectorOverride
// (Final, RequiredAPI, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        PropertyName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDaySequenceModifierComponent::AddVectorOverride(class UObject* Object, class FName PropertyName, const struct FVector& Value)
{
	static auto Func = Class->GetFunction("DaySequenceModifierComponent", "AddVectorOverride");

	Params::UDaySequenceModifierComponent_AddVectorOverride_Params Parms;

	Parms.Object = Object;
	Parms.PropertyName = PropertyName;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DaySequence.DaySequenceModifierComponent.AddTransformOverride
// (Final, RequiredAPI, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  Value                                                            (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDaySequenceModifierComponent::AddTransformOverride(class UObject* Object, const struct FTransform& Value)
{
	static auto Func = Class->GetFunction("DaySequenceModifierComponent", "AddTransformOverride");

	Params::UDaySequenceModifierComponent_AddTransformOverride_Params Parms;

	Parms.Object = Object;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DaySequence.DaySequenceModifierComponent.AddStaticTimeOfDayOverride
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class ADaySequenceActor*           Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Hours                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDaySequenceModifierComponent::AddStaticTimeOfDayOverride(class ADaySequenceActor* Actor, float Hours)
{
	static auto Func = Class->GetFunction("DaySequenceModifierComponent", "AddStaticTimeOfDayOverride");

	Params::UDaySequenceModifierComponent_AddStaticTimeOfDayOverride_Params Parms;

	Parms.Actor = Actor;
	Parms.Hours = Hours;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DaySequence.DaySequenceModifierComponent.AddScalarOverride
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        PropertyName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDaySequenceModifierComponent::AddScalarOverride(class UObject* Object, class FName PropertyName, double Value)
{
	static auto Func = Class->GetFunction("DaySequenceModifierComponent", "AddScalarOverride");

	Params::UDaySequenceModifierComponent_AddScalarOverride_Params Parms;

	Parms.Object = Object;
	Parms.PropertyName = PropertyName;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DaySequence.DaySequenceModifierComponent.AddScalarMaterialParameterOverride
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaterialIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ParameterName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDaySequenceModifierComponent::AddScalarMaterialParameterOverride(class UObject* Object, int32 MaterialIndex, class FName ParameterName, float Value)
{
	static auto Func = Class->GetFunction("DaySequenceModifierComponent", "AddScalarMaterialParameterOverride");

	Params::UDaySequenceModifierComponent_AddScalarMaterialParameterOverride_Params Parms;

	Parms.Object = Object;
	Parms.MaterialIndex = MaterialIndex;
	Parms.ParameterName = ParameterName;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DaySequence.DaySequenceModifierComponent.AddMaterialOverride
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaterialIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInterface*          Value                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDaySequenceModifierComponent::AddMaterialOverride(class UObject* Object, int32 MaterialIndex, class UMaterialInterface* Value)
{
	static auto Func = Class->GetFunction("DaySequenceModifierComponent", "AddMaterialOverride");

	Params::UDaySequenceModifierComponent_AddMaterialOverride_Params Parms;

	Parms.Object = Object;
	Parms.MaterialIndex = MaterialIndex;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DaySequence.DaySequenceModifierComponent.AddColorOverride
// (Final, RequiredAPI, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        PropertyName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDaySequenceModifierComponent::AddColorOverride(class UObject* Object, class FName PropertyName, const struct FLinearColor& Value)
{
	static auto Func = Class->GetFunction("DaySequenceModifierComponent", "AddColorOverride");

	Params::UDaySequenceModifierComponent_AddColorOverride_Params Parms;

	Parms.Object = Object;
	Parms.PropertyName = PropertyName;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DaySequence.DaySequenceModifierComponent.AddColorMaterialParameterOverride
// (Final, RequiredAPI, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaterialIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ParameterName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDaySequenceModifierComponent::AddColorMaterialParameterOverride(class UObject* Object, int32 MaterialIndex, class FName ParameterName, const struct FLinearColor& Value)
{
	static auto Func = Class->GetFunction("DaySequenceModifierComponent", "AddColorMaterialParameterOverride");

	Params::UDaySequenceModifierComponent_AddColorMaterialParameterOverride_Params Parms;

	Parms.Object = Object;
	Parms.MaterialIndex = MaterialIndex;
	Parms.ParameterName = ParameterName;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DaySequence.DaySequenceModifierComponent.AddBoolOverride
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        PropertyName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bValue                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDaySequenceModifierComponent::AddBoolOverride(class UObject* Object, class FName PropertyName, bool bValue)
{
	static auto Func = Class->GetFunction("DaySequenceModifierComponent", "AddBoolOverride");

	Params::UDaySequenceModifierComponent_AddBoolOverride_Params Parms;

	Parms.Object = Object;
	Parms.PropertyName = PropertyName;
	Parms.bValue = bValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DaySequence.DaySequenceActor.SetTimeOfDay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InHours                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ADaySequenceActor::SetTimeOfDay(float InHours)
{
	static auto Func = Class->GetFunction("DaySequenceActor", "SetTimeOfDay");

	Params::ADaySequenceActor_SetTimeOfDay_Params Parms;

	Parms.InHours = InHours;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DaySequence.DaySequenceActor.SetStaticTimeOfDay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InHours                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ADaySequenceActor::SetStaticTimeOfDay(float InHours)
{
	static auto Func = Class->GetFunction("DaySequenceActor", "SetStaticTimeOfDay");

	Params::ADaySequenceActor_SetStaticTimeOfDay_Params Parms;

	Parms.InHours = InHours;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DaySequence.DaySequenceActor.SetReplicatePlayback
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReplicatePlayback                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ADaySequenceActor::SetReplicatePlayback(bool ReplicatePlayback)
{
	static auto Func = Class->GetFunction("DaySequenceActor", "SetReplicatePlayback");

	Params::ADaySequenceActor_SetReplicatePlayback_Params Parms;

	Parms.ReplicatePlayback = ReplicatePlayback;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DaySequence.DaySequenceActor.SetDaySequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        SequenceName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDaySequence*                InDaySequence                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ADaySequenceActor::SetDaySequence(class FName SequenceName, class UDaySequence* InDaySequence)
{
	static auto Func = Class->GetFunction("DaySequenceActor", "SetDaySequence");

	Params::ADaySequenceActor_SetDaySequence_Params Parms;

	Parms.SequenceName = SequenceName;
	Parms.InDaySequence = InDaySequence;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DaySequence.DaySequenceActor.SetBias
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        SequenceKey                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Bias                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ADaySequenceActor::SetBias(class FName SequenceKey, int32 Bias)
{
	static auto Func = Class->GetFunction("DaySequenceActor", "SetBias");

	Params::ADaySequenceActor_SetBias_Params Parms;

	Parms.SequenceKey = SequenceKey;
	Parms.Bias = Bias;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DaySequence.DaySequenceActor.RemoveStaticTimeOfDay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bResumeFromStaticTime                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ADaySequenceActor::RemoveStaticTimeOfDay(bool bResumeFromStaticTime)
{
	static auto Func = Class->GetFunction("DaySequenceActor", "RemoveStaticTimeOfDay");

	Params::ADaySequenceActor_RemoveStaticTimeOfDay_Params Parms;

	Parms.bResumeFromStaticTime = bResumeFromStaticTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DaySequence.DaySequenceActor.Play
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ADaySequenceActor::Play()
{
	static auto Func = Class->GetFunction("DaySequenceActor", "Play");

	Params::ADaySequenceActor_Play_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DaySequence.DaySequenceActor.Pause
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ADaySequenceActor::Pause()
{
	static auto Func = Class->GetFunction("DaySequenceActor", "Pause");

	Params::ADaySequenceActor_Pause_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DaySequence.DaySequenceActor.MuteSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        SequenceKey                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bState                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ADaySequenceActor::MuteSequence(class FName SequenceKey, bool bState)
{
	static auto Func = Class->GetFunction("DaySequenceActor", "MuteSequence");

	Params::ADaySequenceActor_MuteSequence_Params Parms;

	Parms.SequenceKey = SequenceKey;
	Parms.bState = bState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DaySequence.DaySequenceActor.Multicast_SetTimePerCycle
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// float                              InHours                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ADaySequenceActor::Multicast_SetTimePerCycle(float InHours)
{
	static auto Func = Class->GetFunction("DaySequenceActor", "Multicast_SetTimePerCycle");

	Params::ADaySequenceActor_Multicast_SetTimePerCycle_Params Parms;

	Parms.InHours = InHours;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DaySequence.DaySequenceActor.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ADaySequenceActor::IsPlaying()
{
	static auto Func = Class->GetFunction("DaySequenceActor", "IsPlaying");

	Params::ADaySequenceActor_IsPlaying_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DaySequence.DaySequenceActor.IsPaused
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ADaySequenceActor::IsPaused()
{
	static auto Func = Class->GetFunction("DaySequenceActor", "IsPaused");

	Params::ADaySequenceActor_IsPaused_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DaySequence.DaySequenceActor.IsMuteSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        SequenceKey                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ADaySequenceActor::IsMuteSequence(class FName SequenceKey)
{
	static auto Func = Class->GetFunction("DaySequenceActor", "IsMuteSequence");

	Params::ADaySequenceActor_IsMuteSequence_Params Parms;

	Parms.SequenceKey = SequenceKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DaySequence.DaySequenceActor.HasStaticTimeOfDay
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ADaySequenceActor::HasStaticTimeOfDay()
{
	static auto Func = Class->GetFunction("DaySequenceActor", "HasStaticTimeOfDay");

	Params::ADaySequenceActor_HasStaticTimeOfDay_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DaySequence.DaySequenceActor.GetTimePerCycle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float ADaySequenceActor::GetTimePerCycle()
{
	static auto Func = Class->GetFunction("DaySequenceActor", "GetTimePerCycle");

	Params::ADaySequenceActor_GetTimePerCycle_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DaySequence.DaySequenceActor.GetTimeOfDay
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float ADaySequenceActor::GetTimeOfDay()
{
	static auto Func = Class->GetFunction("DaySequenceActor", "GetTimeOfDay");

	Params::ADaySequenceActor_GetTimeOfDay_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DaySequence.DaySequenceActor.GetStaticTimeOfDay
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float ADaySequenceActor::GetStaticTimeOfDay()
{
	static auto Func = Class->GetFunction("DaySequenceActor", "GetStaticTimeOfDay");

	Params::ADaySequenceActor_GetStaticTimeOfDay_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DaySequence.DaySequenceActor.GetSequencePlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDaySequencePlayer*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDaySequencePlayer* ADaySequenceActor::GetSequencePlayer()
{
	static auto Func = Class->GetFunction("DaySequenceActor", "GetSequencePlayer");

	Params::ADaySequenceActor_GetSequencePlayer_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DaySequence.DaySequenceActor.GetInitialTimeOfDay
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float ADaySequenceActor::GetInitialTimeOfDay()
{
	static auto Func = Class->GetFunction("DaySequenceActor", "GetInitialTimeOfDay");

	Params::ADaySequenceActor_GetInitialTimeOfDay_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DaySequence.DaySequenceActor.GetFirstDaySequence
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDaySequence*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDaySequence* ADaySequenceActor::GetFirstDaySequence()
{
	static auto Func = Class->GetFunction("DaySequenceActor", "GetFirstDaySequence");

	Params::ADaySequenceActor_GetFirstDaySequence_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DaySequence.DaySequenceActor.GetDaySequence
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        SequenceName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDaySequence*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDaySequence* ADaySequenceActor::GetDaySequence(class FName SequenceName)
{
	static auto Func = Class->GetFunction("DaySequenceActor", "GetDaySequence");

	Params::ADaySequenceActor_GetDaySequence_Params Parms;

	Parms.SequenceName = SequenceName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DaySequence.DaySequenceActor.GetDayLength
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float ADaySequenceActor::GetDayLength()
{
	static auto Func = Class->GetFunction("DaySequenceActor", "GetDayLength");

	Params::ADaySequenceActor_GetDayLength_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DaySequence.DaySequenceActor.GetBias
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        SequenceKey                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ADaySequenceActor::GetBias(class FName SequenceKey)
{
	static auto Func = Class->GetFunction("DaySequenceActor", "GetBias");

	Params::ADaySequenceActor_GetBias_Params Parms;

	Parms.SequenceKey = SequenceKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DaySequence.DaySequenceActor.ContainsDaySequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDaySequence*                InDaySequence                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ADaySequenceActor::ContainsDaySequence(class UDaySequence* InDaySequence)
{
	static auto Func = Class->GetFunction("DaySequenceActor", "ContainsDaySequence");

	Params::ADaySequenceActor_ContainsDaySequence_Params Parms;

	Parms.InDaySequence = InDaySequence;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DaySequence.DaySequenceDirector.OnCreated
// (Event, Public, BlueprintEvent)
// Parameters:

void UDaySequenceDirector::OnCreated()
{
	static auto Func = Class->GetFunction("DaySequenceDirector", "OnCreated");

	Params::UDaySequenceDirector_OnCreated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function DaySequence.DaySequenceDirector.GetSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMovieSceneSequence* UDaySequenceDirector::GetSequence()
{
	static auto Func = Class->GetFunction("DaySequenceDirector", "GetSequence");

	Params::UDaySequenceDirector_GetSequence_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DaySequence.DaySequenceDirector.GetRootSequenceTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FQualifiedFrameTime         ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FQualifiedFrameTime UDaySequenceDirector::GetRootSequenceTime()
{
	static auto Func = Class->GetFunction("DaySequenceDirector", "GetRootSequenceTime");

	Params::UDaySequenceDirector_GetRootSequenceTime_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DaySequence.DaySequenceDirector.GetMasterSequenceTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FQualifiedFrameTime         ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FQualifiedFrameTime UDaySequenceDirector::GetMasterSequenceTime()
{
	static auto Func = Class->GetFunction("DaySequenceDirector", "GetMasterSequenceTime");

	Params::UDaySequenceDirector_GetMasterSequenceTime_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DaySequence.DaySequenceDirector.GetCurrentTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FQualifiedFrameTime         ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FQualifiedFrameTime UDaySequenceDirector::GetCurrentTime()
{
	static auto Func = Class->GetFunction("DaySequenceDirector", "GetCurrentTime");

	Params::UDaySequenceDirector_GetCurrentTime_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DaySequence.DaySequenceDirector.GetBoundObjects
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID  ObjectBinding                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UObject*>             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UObject*> UDaySequenceDirector::GetBoundObjects(const struct FMovieSceneObjectBindingID& ObjectBinding)
{
	static auto Func = Class->GetFunction("DaySequenceDirector", "GetBoundObjects");

	Params::UDaySequenceDirector_GetBoundObjects_Params Parms;

	Parms.ObjectBinding = ObjectBinding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DaySequence.DaySequenceDirector.GetBoundObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID  ObjectBinding                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UDaySequenceDirector::GetBoundObject(const struct FMovieSceneObjectBindingID& ObjectBinding)
{
	static auto Func = Class->GetFunction("DaySequenceDirector", "GetBoundObject");

	Params::UDaySequenceDirector_GetBoundObject_Params Parms;

	Parms.ObjectBinding = ObjectBinding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DaySequence.DaySequenceDirector.GetBoundActors
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID  ObjectBinding                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class AActor*> UDaySequenceDirector::GetBoundActors(const struct FMovieSceneObjectBindingID& ObjectBinding)
{
	static auto Func = Class->GetFunction("DaySequenceDirector", "GetBoundActors");

	Params::UDaySequenceDirector_GetBoundActors_Params Parms;

	Parms.ObjectBinding = ObjectBinding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DaySequence.DaySequenceDirector.GetBoundActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID  ObjectBinding                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UDaySequenceDirector::GetBoundActor(const struct FMovieSceneObjectBindingID& ObjectBinding)
{
	static auto Func = Class->GetFunction("DaySequenceDirector", "GetBoundActor");

	Params::UDaySequenceDirector_GetBoundActor_Params Parms;

	Parms.ObjectBinding = ObjectBinding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DaySequence.DaySequenceSubsystem.GetDaySequenceActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADaySequenceActor*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ADaySequenceActor* UDaySequenceSubsystem::GetDaySequenceActor()
{
	static auto Func = Class->GetFunction("DaySequenceSubsystem", "GetDaySequenceActor");

	Params::UDaySequenceSubsystem_GetDaySequenceActor_Params Parms;


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
