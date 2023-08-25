#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SubscriptionProgressiveGiftBoxHeader.SubscriptionProgressiveGiftBoxHeader_C
// (None)

class UClass* USubscriptionProgressiveGiftBoxHeader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SubscriptionProgressiveGiftBoxHeader_C");

	return Clss;
}


// SubscriptionProgressiveGiftBoxHeader_C SubscriptionProgressiveGiftBoxHeader.Default__SubscriptionProgressiveGiftBoxHeader_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USubscriptionProgressiveGiftBoxHeader_C* USubscriptionProgressiveGiftBoxHeader_C::GetDefaultObj()
{
	static class USubscriptionProgressiveGiftBoxHeader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USubscriptionProgressiveGiftBoxHeader_C*>(USubscriptionProgressiveGiftBoxHeader_C::StaticClass()->DefaultObject);

	return Default;
}

}


