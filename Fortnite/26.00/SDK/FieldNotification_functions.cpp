#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class FieldNotification.NotifyFieldValueChanged
// (None)

class UClass* UNotifyFieldValueChanged::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NotifyFieldValueChanged");

	return Clss;
}


// NotifyFieldValueChanged FieldNotification.Default__NotifyFieldValueChanged
// (Public, ClassDefaultObject, ArchetypeObject)

class UNotifyFieldValueChanged* UNotifyFieldValueChanged::GetDefaultObj()
{
	static class UNotifyFieldValueChanged* Default = nullptr;

	if (!Default)
		Default = static_cast<UNotifyFieldValueChanged*>(UNotifyFieldValueChanged::StaticClass()->DefaultObject);

	return Default;
}

}


