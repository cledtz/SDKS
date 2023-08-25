#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle_HoldPurchase_Yellow.ButtonStyle_HoldPurchase_Yellow_C
// (None)

class UClass* UButtonStyle_HoldPurchase_Yellow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle_HoldPurchase_Yellow_C");

	return Clss;
}


// ButtonStyle_HoldPurchase_Yellow_C ButtonStyle_HoldPurchase_Yellow.Default__ButtonStyle_HoldPurchase_Yellow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyle_HoldPurchase_Yellow_C* UButtonStyle_HoldPurchase_Yellow_C::GetDefaultObj()
{
	static class UButtonStyle_HoldPurchase_Yellow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyle_HoldPurchase_Yellow_C*>(UButtonStyle_HoldPurchase_Yellow_C::StaticClass()->DefaultObject);

	return Default;
}

}


