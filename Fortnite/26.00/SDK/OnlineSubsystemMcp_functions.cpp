#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class OnlineSubsystemMcp.OnlineISOConversionUtil
// (None)

class UClass* UOnlineISOConversionUtil::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OnlineISOConversionUtil");

	return Clss;
}


// OnlineISOConversionUtil OnlineSubsystemMcp.Default__OnlineISOConversionUtil
// (Public, ClassDefaultObject, ArchetypeObject)

class UOnlineISOConversionUtil* UOnlineISOConversionUtil::GetDefaultObj()
{
	static class UOnlineISOConversionUtil* Default = nullptr;

	if (!Default)
		Default = static_cast<UOnlineISOConversionUtil*>(UOnlineISOConversionUtil::StaticClass()->DefaultObject);

	return Default;
}

}


