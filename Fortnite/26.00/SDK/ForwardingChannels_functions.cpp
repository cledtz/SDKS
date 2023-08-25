#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ForwardingChannels.ForwardingChannelFactory
// (None)

class UClass* UForwardingChannelFactory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ForwardingChannelFactory");

	return Clss;
}


// ForwardingChannelFactory ForwardingChannels.Default__ForwardingChannelFactory
// (Public, ClassDefaultObject, ArchetypeObject)

class UForwardingChannelFactory* UForwardingChannelFactory::GetDefaultObj()
{
	static class UForwardingChannelFactory* Default = nullptr;

	if (!Default)
		Default = static_cast<UForwardingChannelFactory*>(UForwardingChannelFactory::StaticClass()->DefaultObject);

	return Default;
}


// Class ForwardingChannels.ForwardingChannelsSubsystem
// (None)

class UClass* UForwardingChannelsSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ForwardingChannelsSubsystem");

	return Clss;
}


// ForwardingChannelsSubsystem ForwardingChannels.Default__ForwardingChannelsSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UForwardingChannelsSubsystem* UForwardingChannelsSubsystem::GetDefaultObj()
{
	static class UForwardingChannelsSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UForwardingChannelsSubsystem*>(UForwardingChannelsSubsystem::StaticClass()->DefaultObject);

	return Default;
}

}


