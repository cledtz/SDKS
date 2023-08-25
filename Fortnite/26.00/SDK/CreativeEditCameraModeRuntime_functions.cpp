#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CreativeEditCameraModeRuntime.FortCreativeEditCameraController
// (Actor)

class UClass* UFortCreativeEditCameraController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCreativeEditCameraController");

	return Clss;
}


// FortCreativeEditCameraController CreativeEditCameraModeRuntime.Default__FortCreativeEditCameraController
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCreativeEditCameraController* UFortCreativeEditCameraController::GetDefaultObj()
{
	static class UFortCreativeEditCameraController* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCreativeEditCameraController*>(UFortCreativeEditCameraController::StaticClass()->DefaultObject);

	return Default;
}


// Function CreativeEditCameraModeRuntime.FortCreativeEditCameraController.ServerSetImmersiveEdit
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// bool                               bWantsToImmersiveEdit                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsCreativeEditModeEnabled                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCreativeEditCameraController::ServerSetImmersiveEdit(bool bWantsToImmersiveEdit, bool bIsCreativeEditModeEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCreativeEditCameraController", "ServerSetImmersiveEdit");

	Params::UFortCreativeEditCameraController_ServerSetImmersiveEdit_Params Parms{};

	Parms.bWantsToImmersiveEdit = bWantsToImmersiveEdit;
	Parms.bIsCreativeEditModeEnabled = bIsCreativeEditModeEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CreativeEditCameraModeRuntime.FortCreativeEditCameraController.OnWantsToImmersiveEditChanged
// (Final, Native, Private)
// Parameters:
// class UFortCreativeOption*         CreativeOption                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              IndexValue                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCreativeEditCameraController::OnWantsToImmersiveEditChanged(class UFortCreativeOption* CreativeOption, uint8 IndexValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCreativeEditCameraController", "OnWantsToImmersiveEditChanged");

	Params::UFortCreativeEditCameraController_OnWantsToImmersiveEditChanged_Params Parms{};

	Parms.CreativeOption = CreativeOption;
	Parms.IndexValue = IndexValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CreativeEditCameraModeRuntime.FortCreativeEditCameraController.OnCreativeEditModeChanged
// (Final, Native, Private)
// Parameters:
// bool                               bIsCreativeEditModeEnabled                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCreativeEditCameraController::OnCreativeEditModeChanged(bool bIsCreativeEditModeEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCreativeEditCameraController", "OnCreativeEditModeChanged");

	Params::UFortCreativeEditCameraController_OnCreativeEditModeChanged_Params Parms{};

	Parms.bIsCreativeEditModeEnabled = bIsCreativeEditModeEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CreativeEditCameraModeRuntime.FortCreativeEditCameraController.HandleWeaponEquipped
// (Final, Native, Private)
// Parameters:
// class UFortWeapon*                 NewWeapon                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortWeapon*                 PrevWeapon                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCreativeEditCameraController::HandleWeaponEquipped(class UFortWeapon* NewWeapon, class UFortWeapon* PrevWeapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCreativeEditCameraController", "HandleWeaponEquipped");

	Params::UFortCreativeEditCameraController_HandleWeaponEquipped_Params Parms{};

	Parms.NewWeapon = NewWeapon;
	Parms.PrevWeapon = PrevWeapon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


