#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class LiveEditObject.LiveEditNetworkStreamChannel
// (None)

class UClass* ULiveEditNetworkStreamChannel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveEditNetworkStreamChannel");

	return Clss;
}


// LiveEditNetworkStreamChannel LiveEditObject.Default__LiveEditNetworkStreamChannel
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveEditNetworkStreamChannel* ULiveEditNetworkStreamChannel::GetDefaultObj()
{
	static class ULiveEditNetworkStreamChannel* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveEditNetworkStreamChannel*>(ULiveEditNetworkStreamChannel::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveEditObject.LiveEditLargeNetworkMessageChannel
// (None)

class UClass* ULiveEditLargeNetworkMessageChannel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveEditLargeNetworkMessageChannel");

	return Clss;
}


// LiveEditLargeNetworkMessageChannel LiveEditObject.Default__LiveEditLargeNetworkMessageChannel
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveEditLargeNetworkMessageChannel* ULiveEditLargeNetworkMessageChannel::GetDefaultObj()
{
	static class ULiveEditLargeNetworkMessageChannel* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveEditLargeNetworkMessageChannel*>(ULiveEditLargeNetworkMessageChannel::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveEditObject.LiveEditObjectChannel
// (None)

class UClass* ULiveEditObjectChannel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveEditObjectChannel");

	return Clss;
}


// LiveEditObjectChannel LiveEditObject.Default__LiveEditObjectChannel
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveEditObjectChannel* ULiveEditObjectChannel::GetDefaultObj()
{
	static class ULiveEditObjectChannel* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveEditObjectChannel*>(ULiveEditObjectChannel::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveEditObject.LiveEditObjectConnection
// (None)

class UClass* ULiveEditObjectConnection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveEditObjectConnection");

	return Clss;
}


// LiveEditObjectConnection LiveEditObject.Default__LiveEditObjectConnection
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveEditObjectConnection* ULiveEditObjectConnection::GetDefaultObj()
{
	static class ULiveEditObjectConnection* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveEditObjectConnection*>(ULiveEditObjectConnection::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveEditObject.LiveEditObjectSubsystemState
// (None)

class UClass* ULiveEditObjectSubsystemState::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveEditObjectSubsystemState");

	return Clss;
}


// LiveEditObjectSubsystemState LiveEditObject.Default__LiveEditObjectSubsystemState
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveEditObjectSubsystemState* ULiveEditObjectSubsystemState::GetDefaultObj()
{
	static class ULiveEditObjectSubsystemState* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveEditObjectSubsystemState*>(ULiveEditObjectSubsystemState::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveEditObject.LiveEditObjectSubsystem
// (None)

class UClass* ULiveEditObjectSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveEditObjectSubsystem");

	return Clss;
}


// LiveEditObjectSubsystem LiveEditObject.Default__LiveEditObjectSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveEditObjectSubsystem* ULiveEditObjectSubsystem::GetDefaultObj()
{
	static class ULiveEditObjectSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveEditObjectSubsystem*>(ULiveEditObjectSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveEditObject.LiveEditObjectTestObject
// (None)

class UClass* ULiveEditObjectTestObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveEditObjectTestObject");

	return Clss;
}


// LiveEditObjectTestObject LiveEditObject.Default__LiveEditObjectTestObject
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveEditObjectTestObject* ULiveEditObjectTestObject::GetDefaultObj()
{
	static class ULiveEditObjectTestObject* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveEditObjectTestObject*>(ULiveEditObjectTestObject::StaticClass()->DefaultObject);

	return Default;
}

}


