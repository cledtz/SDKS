#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SubscriptionGiftBoxHeader.SubscriptionGiftBoxHeader_C
// (None)

class UClass* USubscriptionGiftBoxHeader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SubscriptionGiftBoxHeader_C");

	return Clss;
}


// SubscriptionGiftBoxHeader_C SubscriptionGiftBoxHeader.Default__SubscriptionGiftBoxHeader_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USubscriptionGiftBoxHeader_C* USubscriptionGiftBoxHeader_C::GetDefaultObj()
{
	static class USubscriptionGiftBoxHeader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USubscriptionGiftBoxHeader_C*>(USubscriptionGiftBoxHeader_C::StaticClass()->DefaultObject);

	return Default;
}

}


