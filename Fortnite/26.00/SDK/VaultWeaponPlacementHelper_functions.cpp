#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C
// (Actor)

class UClass* UVaultWeaponPlacementHelper_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VaultWeaponPlacementHelper_C");

	return Clss;
}


// VaultWeaponPlacementHelper_C VaultWeaponPlacementHelper.Default__VaultWeaponPlacementHelper_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVaultWeaponPlacementHelper_C* UVaultWeaponPlacementHelper_C::GetDefaultObj()
{
	static class UVaultWeaponPlacementHelper_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVaultWeaponPlacementHelper_C*>(UVaultWeaponPlacementHelper_C::StaticClass()->DefaultObject);

	return Default;
}


// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.GetFrontendAnimInstance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UVaultWeaponPlacementHelper_C::GetFrontendAnimInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaultWeaponPlacementHelper_C", "GetFrontendAnimInstance");

	Params::UVaultWeaponPlacementHelper_C_GetFrontendAnimInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnFrontEndCameraChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFrontEndCamera         NewCamera                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFrontEndCamera         OldCamera                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVaultWeaponPlacementHelper_C::OnFrontEndCameraChanged(enum class EFrontEndCamera NewCamera, enum class EFrontEndCamera OldCamera, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaultWeaponPlacementHelper_C", "OnFrontEndCameraChanged");

	Params::UVaultWeaponPlacementHelper_C_OnFrontEndCameraChanged_Params Parms{};

	Parms.NewCamera = NewCamera;
	Parms.OldCamera = OldCamera;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UVaultWeaponPlacementHelper_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaultWeaponPlacementHelper_C", "Initialize");

	Params::UVaultWeaponPlacementHelper_C_Initialize_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.InitializeContextEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UVaultWeaponPlacementHelper_C::InitializeContextEvents(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaultWeaponPlacementHelper_C", "InitializeContextEvents");

	Params::UVaultWeaponPlacementHelper_C_InitializeContextEvents_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void UVaultWeaponPlacementHelper_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaultWeaponPlacementHelper_C", "ReceiveBeginPlay");

	Params::UVaultWeaponPlacementHelper_C_ReceiveBeginPlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.ItemRez
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UVaultWeaponPlacementHelper_C::ItemRez()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaultWeaponPlacementHelper_C", "ItemRez");

	Params::UVaultWeaponPlacementHelper_C_ItemRez_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.ExecuteUbergraph_VaultWeaponPlacementHelper
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVaultWeaponPlacementHelper_C::ExecuteUbergraph_VaultWeaponPlacementHelper(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaultWeaponPlacementHelper_C", "ExecuteUbergraph_VaultWeaponPlacementHelper");

	Params::UVaultWeaponPlacementHelper_C_ExecuteUbergraph_VaultWeaponPlacementHelper_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.NewEventDispatcher_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UVaultWeaponPlacementHelper_C::NewEventDispatcher_0__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaultWeaponPlacementHelper_C", "NewEventDispatcher_0__DelegateSignature");

	Params::UVaultWeaponPlacementHelper_C_NewEventDispatcher_0__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}

}


