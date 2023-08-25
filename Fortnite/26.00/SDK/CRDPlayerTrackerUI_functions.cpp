#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CRDPlayerTrackerUI.CRDPlayerTrackerUIComponent
// (None)

class UClass* UCRDPlayerTrackerUIComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CRDPlayerTrackerUIComponent");

	return Clss;
}


// CRDPlayerTrackerUIComponent CRDPlayerTrackerUI.Default__CRDPlayerTrackerUIComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UCRDPlayerTrackerUIComponent* UCRDPlayerTrackerUIComponent::GetDefaultObj()
{
	static class UCRDPlayerTrackerUIComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UCRDPlayerTrackerUIComponent*>(UCRDPlayerTrackerUIComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class CRDPlayerTrackerUI.CRDPlayerTrackerWidget
// (None)

class UClass* UCRDPlayerTrackerWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CRDPlayerTrackerWidget");

	return Clss;
}


// CRDPlayerTrackerWidget CRDPlayerTrackerUI.Default__CRDPlayerTrackerWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UCRDPlayerTrackerWidget* UCRDPlayerTrackerWidget::GetDefaultObj()
{
	static class UCRDPlayerTrackerWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UCRDPlayerTrackerWidget*>(UCRDPlayerTrackerWidget::StaticClass()->DefaultObject);

	return Default;
}

}


