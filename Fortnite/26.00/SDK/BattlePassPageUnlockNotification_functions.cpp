#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattlePassPageUnlockNotification.BattlePassPageUnlockNotification_C
// (None)

class UClass* UBattlePassPageUnlockNotification_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattlePassPageUnlockNotification_C");

	return Clss;
}


// BattlePassPageUnlockNotification_C BattlePassPageUnlockNotification.Default__BattlePassPageUnlockNotification_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattlePassPageUnlockNotification_C* UBattlePassPageUnlockNotification_C::GetDefaultObj()
{
	static class UBattlePassPageUnlockNotification_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattlePassPageUnlockNotification_C*>(UBattlePassPageUnlockNotification_C::StaticClass()->DefaultObject);

	return Default;
}

}


