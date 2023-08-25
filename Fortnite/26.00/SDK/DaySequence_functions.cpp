#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class DaySequence.DaySequenceModifierComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UDaySequenceModifierComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DaySequenceModifierComponent");

	return Clss;
}


// DaySequenceModifierComponent DaySequence.Default__DaySequenceModifierComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UDaySequenceModifierComponent* UDaySequenceModifierComponent::GetDefaultObj()
{
	static class UDaySequenceModifierComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UDaySequenceModifierComponent*>(UDaySequenceModifierComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function DaySequence.DaySequenceModifierComponent.UnbindFromDaySequenceActor
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:

void UDaySequenceModifierComponent::UnbindFromDaySequenceActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceModifierComponent", "UnbindFromDaySequenceActor");

	Params::UDaySequenceModifierComponent_UnbindFromDaySequenceActor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DaySequence.DaySequenceModifierComponent.SetUserDaySequence
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class UDaySequence*                InDaySequence                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDaySequenceModifierComponent::SetUserDaySequence(class UDaySequence* InDaySequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceModifierComponent", "SetUserDaySequence");

	Params::UDaySequenceModifierComponent_SetUserDaySequence_Params Parms{};

	Parms.InDaySequence = InDaySequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DaySequence.DaySequenceModifierComponent.SetCustomVolumeBlendWeight
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// float                              Weight                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDaySequenceModifierComponent::SetCustomVolumeBlendWeight(float Weight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceModifierComponent", "SetCustomVolumeBlendWeight");

	Params::UDaySequenceModifierComponent_SetCustomVolumeBlendWeight_Params Parms{};

	Parms.Weight = Weight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DaySequence.DaySequenceModifierComponent.ResetOverrides
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:

void UDaySequenceModifierComponent::ResetOverrides()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceModifierComponent", "ResetOverrides");

	Params::UDaySequenceModifierComponent_ResetOverrides_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DaySequence.DaySequenceModifierComponent.MuteNamedSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        SequenceKey                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bState                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDaySequenceModifierComponent::MuteNamedSequence(class FName SequenceKey, bool bState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceModifierComponent", "MuteNamedSequence");

	Params::UDaySequenceModifierComponent_MuteNamedSequence_Params Parms{};

	Parms.SequenceKey = SequenceKey;
	Parms.bState = bState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DaySequence.DaySequenceModifierComponent.GetShapeVolumeComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UShapeComponent*             ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UShapeComponent* UDaySequenceModifierComponent::GetShapeVolumeComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceModifierComponent", "GetShapeVolumeComponent");

	Params::UDaySequenceModifierComponent_GetShapeVolumeComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DaySequence.DaySequenceModifierComponent.EnableModifier
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:

void UDaySequenceModifierComponent::EnableModifier()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceModifierComponent", "EnableModifier");

	Params::UDaySequenceModifierComponent_EnableModifier_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DaySequence.DaySequenceModifierComponent.EnableDistanceVolumeBlends
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      InActor                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDaySequenceModifierComponent::EnableDistanceVolumeBlends(class UActor* InActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceModifierComponent", "EnableDistanceVolumeBlends");

	Params::UDaySequenceModifierComponent_EnableDistanceVolumeBlends_Params Parms{};

	Parms.InActor = InActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DaySequence.DaySequenceModifierComponent.EnableComponent
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:

void UDaySequenceModifierComponent::EnableComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceModifierComponent", "EnableComponent");

	Params::UDaySequenceModifierComponent_EnableComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DaySequence.DaySequenceModifierComponent.DisableModifier
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:

void UDaySequenceModifierComponent::DisableModifier()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceModifierComponent", "DisableModifier");

	Params::UDaySequenceModifierComponent_DisableModifier_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DaySequence.DaySequenceModifierComponent.DisableComponent
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:

void UDaySequenceModifierComponent::DisableComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceModifierComponent", "DisableComponent");

	Params::UDaySequenceModifierComponent_DisableComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DaySequence.DaySequenceModifierComponent.BindToDaySequenceActor
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class UDaySequenceActor*           DaySequenceActor                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDaySequenceModifierComponent::BindToDaySequenceActor(class UDaySequenceActor* DaySequenceActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceModifierComponent", "BindToDaySequenceActor");

	Params::UDaySequenceModifierComponent_BindToDaySequenceActor_Params Parms{};

	Parms.DaySequenceActor = DaySequenceActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DaySequence.DaySequenceModifierComponent.AddVisibilityOverride
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bValue                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDaySequenceModifierComponent::AddVisibilityOverride(class UObject* Object, bool bValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceModifierComponent", "AddVisibilityOverride");

	Params::UDaySequenceModifierComponent_AddVisibilityOverride_Params Parms{};

	Parms.Object = Object;
	Parms.bValue = bValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DaySequence.DaySequenceModifierComponent.AddVectorOverride
// (Final, RequiredAPI, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        PropertyName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDaySequenceModifierComponent::AddVectorOverride(class UObject* Object, class FName PropertyName, const struct FVector& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceModifierComponent", "AddVectorOverride");

	Params::UDaySequenceModifierComponent_AddVectorOverride_Params Parms{};

	Parms.Object = Object;
	Parms.PropertyName = PropertyName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DaySequence.DaySequenceModifierComponent.AddTransformOverride
// (Final, RequiredAPI, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  Value                                                            (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDaySequenceModifierComponent::AddTransformOverride(class UObject* Object, const struct FTransform& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceModifierComponent", "AddTransformOverride");

	Params::UDaySequenceModifierComponent_AddTransformOverride_Params Parms{};

	Parms.Object = Object;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DaySequence.DaySequenceModifierComponent.AddStaticTimeOfDayOverride
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class UDaySequenceActor*           Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Hours                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDaySequenceModifierComponent::AddStaticTimeOfDayOverride(class UDaySequenceActor* Actor, float Hours)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceModifierComponent", "AddStaticTimeOfDayOverride");

	Params::UDaySequenceModifierComponent_AddStaticTimeOfDayOverride_Params Parms{};

	Parms.Actor = Actor;
	Parms.Hours = Hours;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DaySequence.DaySequenceModifierComponent.AddScalarOverride
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        PropertyName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDaySequenceModifierComponent::AddScalarOverride(class UObject* Object, class FName PropertyName, double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceModifierComponent", "AddScalarOverride");

	Params::UDaySequenceModifierComponent_AddScalarOverride_Params Parms{};

	Parms.Object = Object;
	Parms.PropertyName = PropertyName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceModifierComponent", "AddScalarMaterialParameterOverride");

	Params::UDaySequenceModifierComponent_AddScalarMaterialParameterOverride_Params Parms{};

	Parms.Object = Object;
	Parms.MaterialIndex = MaterialIndex;
	Parms.ParameterName = ParameterName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DaySequence.DaySequenceModifierComponent.AddMaterialOverride
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaterialIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInterface*          Value                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDaySequenceModifierComponent::AddMaterialOverride(class UObject* Object, int32 MaterialIndex, class UMaterialInterface* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceModifierComponent", "AddMaterialOverride");

	Params::UDaySequenceModifierComponent_AddMaterialOverride_Params Parms{};

	Parms.Object = Object;
	Parms.MaterialIndex = MaterialIndex;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DaySequence.DaySequenceModifierComponent.AddColorOverride
// (Final, RequiredAPI, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        PropertyName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDaySequenceModifierComponent::AddColorOverride(class UObject* Object, class FName PropertyName, const struct FLinearColor& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceModifierComponent", "AddColorOverride");

	Params::UDaySequenceModifierComponent_AddColorOverride_Params Parms{};

	Parms.Object = Object;
	Parms.PropertyName = PropertyName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceModifierComponent", "AddColorMaterialParameterOverride");

	Params::UDaySequenceModifierComponent_AddColorMaterialParameterOverride_Params Parms{};

	Parms.Object = Object;
	Parms.MaterialIndex = MaterialIndex;
	Parms.ParameterName = ParameterName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DaySequence.DaySequenceModifierComponent.AddBoolOverride
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        PropertyName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bValue                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDaySequenceModifierComponent::AddBoolOverride(class UObject* Object, class FName PropertyName, bool bValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceModifierComponent", "AddBoolOverride");

	Params::UDaySequenceModifierComponent_AddBoolOverride_Params Parms{};

	Parms.Object = Object;
	Parms.PropertyName = PropertyName;
	Parms.bValue = bValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class DaySequence.DaySequence
// (None)

class UClass* UDaySequence::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DaySequence");

	return Clss;
}


// DaySequence DaySequence.Default__DaySequence
// (Public, ClassDefaultObject, ArchetypeObject)

class UDaySequence* UDaySequence::GetDefaultObj()
{
	static class UDaySequence* Default = nullptr;

	if (!Default)
		Default = static_cast<UDaySequence*>(UDaySequence::StaticClass()->DefaultObject);

	return Default;
}


// Class DaySequence.DaySequenceActor
// (Actor)

class UClass* UDaySequenceActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DaySequenceActor");

	return Clss;
}


// DaySequenceActor DaySequence.Default__DaySequenceActor
// (Public, ClassDefaultObject, ArchetypeObject)

class UDaySequenceActor* UDaySequenceActor::GetDefaultObj()
{
	static class UDaySequenceActor* Default = nullptr;

	if (!Default)
		Default = static_cast<UDaySequenceActor*>(UDaySequenceActor::StaticClass()->DefaultObject);

	return Default;
}


// Function DaySequence.DaySequenceActor.SetTimeOfDay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InHours                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDaySequenceActor::SetTimeOfDay(float InHours)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceActor", "SetTimeOfDay");

	Params::UDaySequenceActor_SetTimeOfDay_Params Parms{};

	Parms.InHours = InHours;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DaySequence.DaySequenceActor.SetStaticTimeOfDay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InHours                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDaySequenceActor::SetStaticTimeOfDay(float InHours)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceActor", "SetStaticTimeOfDay");

	Params::UDaySequenceActor_SetStaticTimeOfDay_Params Parms{};

	Parms.InHours = InHours;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DaySequence.DaySequenceActor.SetReplicatePlayback
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReplicatePlayback                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDaySequenceActor::SetReplicatePlayback(bool ReplicatePlayback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceActor", "SetReplicatePlayback");

	Params::UDaySequenceActor_SetReplicatePlayback_Params Parms{};

	Parms.ReplicatePlayback = ReplicatePlayback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DaySequence.DaySequenceActor.SetDaySequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        SequenceName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDaySequence*                InDaySequence                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDaySequenceActor::SetDaySequence(class FName SequenceName, class UDaySequence* InDaySequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceActor", "SetDaySequence");

	Params::UDaySequenceActor_SetDaySequence_Params Parms{};

	Parms.SequenceName = SequenceName;
	Parms.InDaySequence = InDaySequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DaySequence.DaySequenceActor.SetBias
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        SequenceKey                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Bias                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDaySequenceActor::SetBias(class FName SequenceKey, int32 Bias)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceActor", "SetBias");

	Params::UDaySequenceActor_SetBias_Params Parms{};

	Parms.SequenceKey = SequenceKey;
	Parms.Bias = Bias;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DaySequence.DaySequenceActor.RemoveStaticTimeOfDay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bResumeFromStaticTime                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDaySequenceActor::RemoveStaticTimeOfDay(bool bResumeFromStaticTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceActor", "RemoveStaticTimeOfDay");

	Params::UDaySequenceActor_RemoveStaticTimeOfDay_Params Parms{};

	Parms.bResumeFromStaticTime = bResumeFromStaticTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DaySequence.DaySequenceActor.Play
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UDaySequenceActor::Play()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceActor", "Play");

	Params::UDaySequenceActor_Play_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DaySequence.DaySequenceActor.Pause
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UDaySequenceActor::Pause()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceActor", "Pause");

	Params::UDaySequenceActor_Pause_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DaySequence.DaySequenceActor.MuteSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        SequenceKey                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bState                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDaySequenceActor::MuteSequence(class FName SequenceKey, bool bState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceActor", "MuteSequence");

	Params::UDaySequenceActor_MuteSequence_Params Parms{};

	Parms.SequenceKey = SequenceKey;
	Parms.bState = bState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DaySequence.DaySequenceActor.Multicast_SetTimePerCycle
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// float                              InHours                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDaySequenceActor::Multicast_SetTimePerCycle(float InHours)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceActor", "Multicast_SetTimePerCycle");

	Params::UDaySequenceActor_Multicast_SetTimePerCycle_Params Parms{};

	Parms.InHours = InHours;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DaySequence.DaySequenceActor.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDaySequenceActor::IsPlaying()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceActor", "IsPlaying");

	Params::UDaySequenceActor_IsPlaying_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DaySequence.DaySequenceActor.IsPaused
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDaySequenceActor::IsPaused()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceActor", "IsPaused");

	Params::UDaySequenceActor_IsPaused_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DaySequence.DaySequenceActor.IsMuteSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        SequenceKey                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDaySequenceActor::IsMuteSequence(class FName SequenceKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceActor", "IsMuteSequence");

	Params::UDaySequenceActor_IsMuteSequence_Params Parms{};

	Parms.SequenceKey = SequenceKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DaySequence.DaySequenceActor.HasStaticTimeOfDay
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDaySequenceActor::HasStaticTimeOfDay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceActor", "HasStaticTimeOfDay");

	Params::UDaySequenceActor_HasStaticTimeOfDay_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DaySequence.DaySequenceActor.GetTimePerCycle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UDaySequenceActor::GetTimePerCycle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceActor", "GetTimePerCycle");

	Params::UDaySequenceActor_GetTimePerCycle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DaySequence.DaySequenceActor.GetTimeOfDay
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UDaySequenceActor::GetTimeOfDay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceActor", "GetTimeOfDay");

	Params::UDaySequenceActor_GetTimeOfDay_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DaySequence.DaySequenceActor.GetStaticTimeOfDay
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UDaySequenceActor::GetStaticTimeOfDay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceActor", "GetStaticTimeOfDay");

	Params::UDaySequenceActor_GetStaticTimeOfDay_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DaySequence.DaySequenceActor.GetSequencePlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDaySequencePlayer*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDaySequencePlayer* UDaySequenceActor::GetSequencePlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceActor", "GetSequencePlayer");

	Params::UDaySequenceActor_GetSequencePlayer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DaySequence.DaySequenceActor.GetInitialTimeOfDay
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UDaySequenceActor::GetInitialTimeOfDay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceActor", "GetInitialTimeOfDay");

	Params::UDaySequenceActor_GetInitialTimeOfDay_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DaySequence.DaySequenceActor.GetFirstDaySequence
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDaySequence*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDaySequence* UDaySequenceActor::GetFirstDaySequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceActor", "GetFirstDaySequence");

	Params::UDaySequenceActor_GetFirstDaySequence_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DaySequence.DaySequenceActor.GetDaySequence
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        SequenceName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDaySequence*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDaySequence* UDaySequenceActor::GetDaySequence(class FName SequenceName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceActor", "GetDaySequence");

	Params::UDaySequenceActor_GetDaySequence_Params Parms{};

	Parms.SequenceName = SequenceName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DaySequence.DaySequenceActor.GetDayLength
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UDaySequenceActor::GetDayLength()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceActor", "GetDayLength");

	Params::UDaySequenceActor_GetDayLength_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DaySequence.DaySequenceActor.GetBias
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        SequenceKey                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UDaySequenceActor::GetBias(class FName SequenceKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceActor", "GetBias");

	Params::UDaySequenceActor_GetBias_Params Parms{};

	Parms.SequenceKey = SequenceKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DaySequence.DaySequenceActor.ContainsDaySequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDaySequence*                InDaySequence                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDaySequenceActor::ContainsDaySequence(class UDaySequence* InDaySequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceActor", "ContainsDaySequence");

	Params::UDaySequenceActor_ContainsDaySequence_Params Parms{};

	Parms.InDaySequence = InDaySequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class DaySequence.DaySequenceDirector
// (None)

class UClass* UDaySequenceDirector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DaySequenceDirector");

	return Clss;
}


// DaySequenceDirector DaySequence.Default__DaySequenceDirector
// (Public, ClassDefaultObject, ArchetypeObject)

class UDaySequenceDirector* UDaySequenceDirector::GetDefaultObj()
{
	static class UDaySequenceDirector* Default = nullptr;

	if (!Default)
		Default = static_cast<UDaySequenceDirector*>(UDaySequenceDirector::StaticClass()->DefaultObject);

	return Default;
}


// Function DaySequence.DaySequenceDirector.OnCreated
// (Event, Public, BlueprintEvent)
// Parameters:

void UDaySequenceDirector::OnCreated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceDirector", "OnCreated");

	Params::UDaySequenceDirector_OnCreated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function DaySequence.DaySequenceDirector.GetSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMovieSceneSequence* UDaySequenceDirector::GetSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceDirector", "GetSequence");

	Params::UDaySequenceDirector_GetSequence_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DaySequence.DaySequenceDirector.GetRootSequenceTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FQualifiedFrameTime         ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FQualifiedFrameTime UDaySequenceDirector::GetRootSequenceTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceDirector", "GetRootSequenceTime");

	Params::UDaySequenceDirector_GetRootSequenceTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DaySequence.DaySequenceDirector.GetMasterSequenceTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FQualifiedFrameTime         ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FQualifiedFrameTime UDaySequenceDirector::GetMasterSequenceTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceDirector", "GetMasterSequenceTime");

	Params::UDaySequenceDirector_GetMasterSequenceTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DaySequence.DaySequenceDirector.GetCurrentTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FQualifiedFrameTime         ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FQualifiedFrameTime UDaySequenceDirector::GetCurrentTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceDirector", "GetCurrentTime");

	Params::UDaySequenceDirector_GetCurrentTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DaySequence.DaySequenceDirector.GetBoundObjects
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID  ObjectBinding                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UObject*>             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UObject*> UDaySequenceDirector::GetBoundObjects(const struct FMovieSceneObjectBindingID& ObjectBinding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceDirector", "GetBoundObjects");

	Params::UDaySequenceDirector_GetBoundObjects_Params Parms{};

	Parms.ObjectBinding = ObjectBinding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DaySequence.DaySequenceDirector.GetBoundObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID  ObjectBinding                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UDaySequenceDirector::GetBoundObject(const struct FMovieSceneObjectBindingID& ObjectBinding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceDirector", "GetBoundObject");

	Params::UDaySequenceDirector_GetBoundObject_Params Parms{};

	Parms.ObjectBinding = ObjectBinding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DaySequence.DaySequenceDirector.GetBoundActors
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID  ObjectBinding                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UActor*>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UActor*> UDaySequenceDirector::GetBoundActors(const struct FMovieSceneObjectBindingID& ObjectBinding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceDirector", "GetBoundActors");

	Params::UDaySequenceDirector_GetBoundActors_Params Parms{};

	Parms.ObjectBinding = ObjectBinding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DaySequence.DaySequenceDirector.GetBoundActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID  ObjectBinding                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UActor* UDaySequenceDirector::GetBoundActor(const struct FMovieSceneObjectBindingID& ObjectBinding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceDirector", "GetBoundActor");

	Params::UDaySequenceDirector_GetBoundActor_Params Parms{};

	Parms.ObjectBinding = ObjectBinding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class DaySequence.DaySequencePlayer
// (None)

class UClass* UDaySequencePlayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DaySequencePlayer");

	return Clss;
}


// DaySequencePlayer DaySequence.Default__DaySequencePlayer
// (Public, ClassDefaultObject, ArchetypeObject)

class UDaySequencePlayer* UDaySequencePlayer::GetDefaultObj()
{
	static class UDaySequencePlayer* Default = nullptr;

	if (!Default)
		Default = static_cast<UDaySequencePlayer*>(UDaySequencePlayer::StaticClass()->DefaultObject);

	return Default;
}


// Class DaySequence.DaySequenceProjectSettings
// (None)

class UClass* UDaySequenceProjectSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DaySequenceProjectSettings");

	return Clss;
}


// DaySequenceProjectSettings DaySequence.Default__DaySequenceProjectSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UDaySequenceProjectSettings* UDaySequenceProjectSettings::GetDefaultObj()
{
	static class UDaySequenceProjectSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UDaySequenceProjectSettings*>(UDaySequenceProjectSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class DaySequence.DaySequenceProvider
// (Actor)

class UClass* UDaySequenceProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DaySequenceProvider");

	return Clss;
}


// DaySequenceProvider DaySequence.Default__DaySequenceProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class UDaySequenceProvider* UDaySequenceProvider::GetDefaultObj()
{
	static class UDaySequenceProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<UDaySequenceProvider*>(UDaySequenceProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class DaySequence.DaySequenceSubsystem
// (None)

class UClass* UDaySequenceSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DaySequenceSubsystem");

	return Clss;
}


// DaySequenceSubsystem DaySequence.Default__DaySequenceSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UDaySequenceSubsystem* UDaySequenceSubsystem::GetDefaultObj()
{
	static class UDaySequenceSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UDaySequenceSubsystem*>(UDaySequenceSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function DaySequence.DaySequenceSubsystem.GetDaySequenceActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDaySequenceActor*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDaySequenceActor* UDaySequenceSubsystem::GetDaySequenceActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaySequenceSubsystem", "GetDaySequenceActor");

	Params::UDaySequenceSubsystem_GetDaySequenceActor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class DaySequence.DaySequenceTrack
// (None)

class UClass* UDaySequenceTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DaySequenceTrack");

	return Clss;
}


// DaySequenceTrack DaySequence.Default__DaySequenceTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UDaySequenceTrack* UDaySequenceTrack::GetDefaultObj()
{
	static class UDaySequenceTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UDaySequenceTrack*>(UDaySequenceTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class DaySequence.EnvironmentLightingActor
// (Actor)

class UClass* UEnvironmentLightingActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvironmentLightingActor");

	return Clss;
}


// EnvironmentLightingActor DaySequence.Default__EnvironmentLightingActor
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvironmentLightingActor* UEnvironmentLightingActor::GetDefaultObj()
{
	static class UEnvironmentLightingActor* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvironmentLightingActor*>(UEnvironmentLightingActor::StaticClass()->DefaultObject);

	return Default;
}

}


