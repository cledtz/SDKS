#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class HeadMountedDisplay.HandKeypointConversion
// (None)

class UClass* UHandKeypointConversion::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HandKeypointConversion");

	return Clss;
}


// HandKeypointConversion HeadMountedDisplay.Default__HandKeypointConversion
// (Public, ClassDefaultObject, ArchetypeObject)

class UHandKeypointConversion* UHandKeypointConversion::GetDefaultObj()
{
	static class UHandKeypointConversion* Default = nullptr;

	if (!Default)
		Default = static_cast<UHandKeypointConversion*>(UHandKeypointConversion::StaticClass()->DefaultObject);

	return Default;
}


// Function HeadMountedDisplay.HandKeypointConversion.Conv_HandKeypointToInt32
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EHandKeypoint           Input                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UHandKeypointConversion::Conv_HandKeypointToInt32(enum class EHandKeypoint Input)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HandKeypointConversion", "Conv_HandKeypointToInt32");

	Params::UHandKeypointConversion_Conv_HandKeypointToInt32_Params Parms{};

	Parms.Input = Input;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class HeadMountedDisplay.MotionControllerComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UMotionControllerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MotionControllerComponent");

	return Clss;
}


// MotionControllerComponent HeadMountedDisplay.Default__MotionControllerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMotionControllerComponent* UMotionControllerComponent::GetDefaultObj()
{
	static class UMotionControllerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMotionControllerComponent*>(UMotionControllerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function HeadMountedDisplay.MotionControllerComponent.SetTrackingSource
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// enum class EControllerHand         NewSource                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMotionControllerComponent::SetTrackingSource(enum class EControllerHand NewSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionControllerComponent", "SetTrackingSource");

	Params::UMotionControllerComponent_SetTrackingSource_Params Parms{};

	Parms.NewSource = NewSource;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        NewSource                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMotionControllerComponent::SetTrackingMotionSource(class FName NewSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionControllerComponent", "SetTrackingMotionSource");

	Params::UMotionControllerComponent_SetTrackingMotionSource_Params Parms{};

	Parms.NewSource = NewSource;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HeadMountedDisplay.MotionControllerComponent.SetShowDeviceModel
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bShowControllerModel                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMotionControllerComponent::SetShowDeviceModel(bool bShowControllerModel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionControllerComponent", "SetShowDeviceModel");

	Params::UMotionControllerComponent_SetShowDeviceModel_Params Parms{};

	Parms.bShowControllerModel = bShowControllerModel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HeadMountedDisplay.MotionControllerComponent.SetDisplayModelSource
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        NewDisplayModelSource                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMotionControllerComponent::SetDisplayModelSource(class FName NewDisplayModelSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionControllerComponent", "SetDisplayModelSource");

	Params::UMotionControllerComponent_SetDisplayModelSource_Params Parms{};

	Parms.NewDisplayModelSource = NewDisplayModelSource;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HeadMountedDisplay.MotionControllerComponent.SetCustomDisplayMesh
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class UStaticMesh*                 NewDisplayMesh                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMotionControllerComponent::SetCustomDisplayMesh(class UStaticMesh* NewDisplayMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionControllerComponent", "SetCustomDisplayMesh");

	Params::UMotionControllerComponent_SetCustomDisplayMesh_Params Parms{};

	Parms.NewDisplayMesh = NewDisplayMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NewPlayer                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMotionControllerComponent::SetAssociatedPlayerIndex(int32 NewPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionControllerComponent", "SetAssociatedPlayerIndex");

	Params::UMotionControllerComponent_SetAssociatedPlayerIndex_Params Parms{};

	Parms.NewPlayer = NewPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HeadMountedDisplay.MotionControllerComponent.OnMotionControllerUpdated
// (RequiredAPI, Event, Protected, BlueprintEvent)
// Parameters:

void UMotionControllerComponent::OnMotionControllerUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionControllerComponent", "OnMotionControllerUpdated");

	Params::UMotionControllerComponent_OnMotionControllerUpdated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function HeadMountedDisplay.MotionControllerComponent.IsTracked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMotionControllerComponent::IsTracked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionControllerComponent", "IsTracked");

	Params::UMotionControllerComponent_IsTracked_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.MotionControllerComponent.GetTrackingSource
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EControllerHand         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EControllerHand UMotionControllerComponent::GetTrackingSource()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionControllerComponent", "GetTrackingSource");

	Params::UMotionControllerComponent_GetTrackingSource_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.MotionControllerComponent.GetParameterValue
// (Final, RequiredAPI, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bValueFound                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMotionControllerComponent::GetParameterValue(class FName InName, bool* bValueFound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionControllerComponent", "GetParameterValue");

	Params::UMotionControllerComponent_GetParameterValue_Params Parms{};

	Parms.InName = InName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bValueFound != nullptr)
		*bValueFound = Parms.bValueFound;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.MotionControllerComponent.GetLinearVelocity
// (Final, RequiredAPI, Native, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     OutLinearVelocity                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMotionControllerComponent::GetLinearVelocity(struct FVector* OutLinearVelocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionControllerComponent", "GetLinearVelocity");

	Params::UMotionControllerComponent_GetLinearVelocity_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutLinearVelocity != nullptr)
		*OutLinearVelocity = Parms.OutLinearVelocity;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.MotionControllerComponent.GetLinearAcceleration
// (Final, RequiredAPI, Native, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     OutLinearAcceleration                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMotionControllerComponent::GetLinearAcceleration(struct FVector* OutLinearAcceleration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionControllerComponent", "GetLinearAcceleration");

	Params::UMotionControllerComponent_GetLinearAcceleration_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutLinearAcceleration != nullptr)
		*OutLinearAcceleration = Parms.OutLinearAcceleration;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition
// (Final, RequiredAPI, Native, Protected, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              JointIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bValueFound                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UMotionControllerComponent::GetHandJointPosition(int32 JointIndex, bool* bValueFound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionControllerComponent", "GetHandJointPosition");

	Params::UMotionControllerComponent_GetHandJointPosition_Params Parms{};

	Parms.JointIndex = JointIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bValueFound != nullptr)
		*bValueFound = Parms.bValueFound;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.MotionControllerComponent.GetAngularVelocity
// (Final, RequiredAPI, Native, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                    OutAngularVelocity                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMotionControllerComponent::GetAngularVelocity(struct FRotator* OutAngularVelocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionControllerComponent", "GetAngularVelocity");

	Params::UMotionControllerComponent_GetAngularVelocity_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutAngularVelocity != nullptr)
		*OutAngularVelocity = Parms.OutAngularVelocity;

	return Parms.ReturnValue;

}

}


