#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class StreamingRadio.StreamingRadioManagerNative
// (Actor)

class UClass* UStreamingRadioManagerNative::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StreamingRadioManagerNative");

	return Clss;
}


// StreamingRadioManagerNative StreamingRadio.Default__StreamingRadioManagerNative
// (Public, ClassDefaultObject, ArchetypeObject)

class UStreamingRadioManagerNative* UStreamingRadioManagerNative::GetDefaultObj()
{
	static class UStreamingRadioManagerNative* Default = nullptr;

	if (!Default)
		Default = static_cast<UStreamingRadioManagerNative*>(UStreamingRadioManagerNative::StaticClass()->DefaultObject);

	return Default;
}

}


