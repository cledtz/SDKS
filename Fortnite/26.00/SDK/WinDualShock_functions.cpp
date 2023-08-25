#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class WinDualShock.DualShockExternalEndpointSettings
// (None)

class UClass* UDualShockExternalEndpointSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DualShockExternalEndpointSettings");

	return Clss;
}


// DualShockExternalEndpointSettings WinDualShock.Default__DualShockExternalEndpointSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UDualShockExternalEndpointSettings* UDualShockExternalEndpointSettings::GetDefaultObj()
{
	static class UDualShockExternalEndpointSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UDualShockExternalEndpointSettings*>(UDualShockExternalEndpointSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class WinDualShock.DualShockSoundfieldEndpointSettings
// (None)

class UClass* UDualShockSoundfieldEndpointSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DualShockSoundfieldEndpointSettings");

	return Clss;
}


// DualShockSoundfieldEndpointSettings WinDualShock.Default__DualShockSoundfieldEndpointSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UDualShockSoundfieldEndpointSettings* UDualShockSoundfieldEndpointSettings::GetDefaultObj()
{
	static class UDualShockSoundfieldEndpointSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UDualShockSoundfieldEndpointSettings*>(UDualShockSoundfieldEndpointSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class WinDualShock.DualShockSpatializationSettings
// (None)

class UClass* UDualShockSpatializationSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DualShockSpatializationSettings");

	return Clss;
}


// DualShockSpatializationSettings WinDualShock.Default__DualShockSpatializationSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UDualShockSpatializationSettings* UDualShockSpatializationSettings::GetDefaultObj()
{
	static class UDualShockSpatializationSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UDualShockSpatializationSettings*>(UDualShockSpatializationSettings::StaticClass()->DefaultObject);

	return Default;
}

}


