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


// Function CreativeEditCameraModeRuntime.FortCreativeEditCameraController.ServerSetImmersiveEdit
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// bool                               bWantsToImmersiveEdit                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsCreativeEditModeEnabled                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortCreativeEditCameraController::ServerSetImmersiveEdit(bool bWantsToImmersiveEdit, bool bIsCreativeEditModeEnabled)
{
	static auto Func = Class->GetFunction("FortCreativeEditCameraController", "ServerSetImmersiveEdit");

	Params::AFortCreativeEditCameraController_ServerSetImmersiveEdit_Params Parms;

	Parms.bWantsToImmersiveEdit = bWantsToImmersiveEdit;
	Parms.bIsCreativeEditModeEnabled = bIsCreativeEditModeEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeEditCameraModeRuntime.FortCreativeEditCameraController.OnWantsToImmersiveEditChanged
// (Final, Native, Private)
// Parameters:
// class UFortCreativeOption*         CreativeOption                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              IndexValue                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortCreativeEditCameraController::OnWantsToImmersiveEditChanged(class UFortCreativeOption* CreativeOption, uint8 IndexValue)
{
	static auto Func = Class->GetFunction("FortCreativeEditCameraController", "OnWantsToImmersiveEditChanged");

	Params::AFortCreativeEditCameraController_OnWantsToImmersiveEditChanged_Params Parms;

	Parms.CreativeOption = CreativeOption;
	Parms.IndexValue = IndexValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeEditCameraModeRuntime.FortCreativeEditCameraController.OnCreativeEditModeChanged
// (Final, Native, Private)
// Parameters:
// bool                               bIsCreativeEditModeEnabled                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortCreativeEditCameraController::OnCreativeEditModeChanged(bool bIsCreativeEditModeEnabled)
{
	static auto Func = Class->GetFunction("FortCreativeEditCameraController", "OnCreativeEditModeChanged");

	Params::AFortCreativeEditCameraController_OnCreativeEditModeChanged_Params Parms;

	Parms.bIsCreativeEditModeEnabled = bIsCreativeEditModeEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeEditCameraModeRuntime.FortCreativeEditCameraController.HandleWeaponEquipped
// (Final, Native, Private)
// Parameters:
// class AFortWeapon*                 NewWeapon                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortWeapon*                 PrevWeapon                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortCreativeEditCameraController::HandleWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon)
{
	static auto Func = Class->GetFunction("FortCreativeEditCameraController", "HandleWeaponEquipped");

	Params::AFortCreativeEditCameraController_HandleWeaponEquipped_Params Parms;

	Parms.NewWeapon = NewWeapon;
	Parms.PrevWeapon = PrevWeapon;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
