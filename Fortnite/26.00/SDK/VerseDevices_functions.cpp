#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class VerseDevices.VerseCreativePropAsset
// (None)

class UClass* UVerseCreativePropAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseCreativePropAsset");

	return Clss;
}


// VerseCreativePropAsset VerseDevices.Default__VerseCreativePropAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseCreativePropAsset* UVerseCreativePropAsset::GetDefaultObj()
{
	static class UVerseCreativePropAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseCreativePropAsset*>(UVerseCreativePropAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class VerseDevices.PlaylistUserOptionScript
// (None)

class UClass* UPlaylistUserOptionScript::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlaylistUserOptionScript");

	return Clss;
}


// PlaylistUserOptionScript VerseDevices.Default__PlaylistUserOptionScript
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlaylistUserOptionScript* UPlaylistUserOptionScript::GetDefaultObj()
{
	static class UPlaylistUserOptionScript* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlaylistUserOptionScript*>(UPlaylistUserOptionScript::StaticClass()->DefaultObject);

	return Default;
}


// Class VerseDevices.ScriptDevice
// (Actor)

class UClass* UScriptDevice::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScriptDevice");

	return Clss;
}


// ScriptDevice VerseDevices.Default__ScriptDevice
// (Public, ClassDefaultObject, ArchetypeObject)

class UScriptDevice* UScriptDevice::GetDefaultObj()
{
	static class UScriptDevice* Default = nullptr;

	if (!Default)
		Default = static_cast<UScriptDevice*>(UScriptDevice::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.ScriptDevice.SetEnabled
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               bInEnabled                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScriptDevice::SetEnabled(bool bInEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptDevice", "SetEnabled");

	Params::UScriptDevice_SetEnabled_Params Parms{};

	Parms.bInEnabled = bInEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseDevices.ScriptDevice.HandlePreMinigameStartedSetup
// (Final, Native, Public)
// Parameters:

void UScriptDevice::HandlePreMinigameStartedSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptDevice", "HandlePreMinigameStartedSetup");

	Params::UScriptDevice_HandlePreMinigameStartedSetup_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseDevices.ScriptDevice.HandleMinigameEndGame
// (Final, Native, Public)
// Parameters:
// class UFortPlayerController*       PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortMinigameEnd        EndMethod                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortMinigameState      NextState                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScriptDevice::HandleMinigameEndGame(class UFortPlayerController* PlayerController, enum class EFortMinigameEnd EndMethod, enum class EFortMinigameState NextState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptDevice", "HandleMinigameEndGame");

	Params::UScriptDevice_HandleMinigameEndGame_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.EndMethod = EndMethod;
	Parms.NextState = NextState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseDevices.ScriptDevice.BP_SetVisibility
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bVisible                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScriptDevice::BP_SetVisibility(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptDevice", "BP_SetVisibility");

	Params::UScriptDevice_BP_SetVisibility_Params Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Class VerseDevices.VerseMovableObjectBase
// (None)

class UClass* UVerseMovableObjectBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseMovableObjectBase");

	return Clss;
}


// VerseMovableObjectBase VerseDevices.Default__VerseMovableObjectBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseMovableObjectBase* UVerseMovableObjectBase::GetDefaultObj()
{
	static class UVerseMovableObjectBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseMovableObjectBase*>(UVerseMovableObjectBase::StaticClass()->DefaultObject);

	return Default;
}


// Class VerseDevices.VerseCreativeDevice
// (None)

class UClass* UVerseCreativeDevice::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseCreativeDevice");

	return Clss;
}


// VerseCreativeDevice VerseDevices.Default__VerseCreativeDevice
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseCreativeDevice* UVerseCreativeDevice::GetDefaultObj()
{
	static class UVerseCreativeDevice* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseCreativeDevice*>(UVerseCreativeDevice::StaticClass()->DefaultObject);

	return Default;
}


// Class VerseDevices.VerseCreativeObject
// (None)

class UClass* UVerseCreativeObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseCreativeObject");

	return Clss;
}


// VerseCreativeObject VerseDevices.Default__VerseCreativeObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseCreativeObject* UVerseCreativeObject::GetDefaultObj()
{
	static class UVerseCreativeObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseCreativeObject*>(UVerseCreativeObject::StaticClass()->DefaultObject);

	return Default;
}


// Class VerseDevices.VerseCreativeObjectQuotaHelperComponent
// (None)

class UClass* UVerseCreativeObjectQuotaHelperComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseCreativeObjectQuotaHelperComponent");

	return Clss;
}


// VerseCreativeObjectQuotaHelperComponent VerseDevices.Default__VerseCreativeObjectQuotaHelperComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseCreativeObjectQuotaHelperComponent* UVerseCreativeObjectQuotaHelperComponent::GetDefaultObj()
{
	static class UVerseCreativeObjectQuotaHelperComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseCreativeObjectQuotaHelperComponent*>(UVerseCreativeObjectQuotaHelperComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class VerseDevices.VerseDevicesFeatureAction_RegisterWrapperClasses
// (None)

class UClass* UVerseDevicesFeatureAction_RegisterWrapperClasses::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseDevicesFeatureAction_RegisterWrapperClasses");

	return Clss;
}


// VerseDevicesFeatureAction_RegisterWrapperClasses VerseDevices.Default__VerseDevicesFeatureAction_RegisterWrapperClasses
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseDevicesFeatureAction_RegisterWrapperClasses* UVerseDevicesFeatureAction_RegisterWrapperClasses::GetDefaultObj()
{
	static class UVerseDevicesFeatureAction_RegisterWrapperClasses* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseDevicesFeatureAction_RegisterWrapperClasses*>(UVerseDevicesFeatureAction_RegisterWrapperClasses::StaticClass()->DefaultObject);

	return Default;
}


// Class VerseDevices.VerseDeviceWrapperClassMap
// (None)

class UClass* UVerseDeviceWrapperClassMap::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseDeviceWrapperClassMap");

	return Clss;
}


// VerseDeviceWrapperClassMap VerseDevices.Default__VerseDeviceWrapperClassMap
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseDeviceWrapperClassMap* UVerseDeviceWrapperClassMap::GetDefaultObj()
{
	static class UVerseDeviceWrapperClassMap* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseDeviceWrapperClassMap*>(UVerseDeviceWrapperClassMap::StaticClass()->DefaultObject);

	return Default;
}


// Class VerseDevices.VerseDeviceWrapperClassMapSubsystem
// (None)

class UClass* UVerseDeviceWrapperClassMapSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseDeviceWrapperClassMapSubsystem");

	return Clss;
}


// VerseDeviceWrapperClassMapSubsystem VerseDevices.Default__VerseDeviceWrapperClassMapSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseDeviceWrapperClassMapSubsystem* UVerseDeviceWrapperClassMapSubsystem::GetDefaultObj()
{
	static class UVerseDeviceWrapperClassMapSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseDeviceWrapperClassMapSubsystem*>(UVerseDeviceWrapperClassMapSubsystem::StaticClass()->DefaultObject);

	return Default;
}

}


