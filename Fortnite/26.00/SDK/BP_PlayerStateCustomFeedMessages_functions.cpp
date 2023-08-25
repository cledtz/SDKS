#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PlayerStateCustomFeedMessages.BP_PlayerStateCustomFeedMessages_C
// (None)

class UClass* UBP_PlayerStateCustomFeedMessages_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PlayerStateCustomFeedMessages_C");

	return Clss;
}


// BP_PlayerStateCustomFeedMessages_C BP_PlayerStateCustomFeedMessages.Default__BP_PlayerStateCustomFeedMessages_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PlayerStateCustomFeedMessages_C* UBP_PlayerStateCustomFeedMessages_C::GetDefaultObj()
{
	static class UBP_PlayerStateCustomFeedMessages_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PlayerStateCustomFeedMessages_C*>(UBP_PlayerStateCustomFeedMessages_C::StaticClass()->DefaultObject);

	return Default;
}

}


