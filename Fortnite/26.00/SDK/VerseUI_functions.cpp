#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class VerseUI.VerseWidgetViewmodel
// (None)

class UClass* UVerseWidgetViewmodel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseWidgetViewmodel");

	return Clss;
}


// VerseWidgetViewmodel VerseUI.Default__VerseWidgetViewmodel
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseWidgetViewmodel* UVerseWidgetViewmodel::GetDefaultObj()
{
	static class UVerseWidgetViewmodel* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseWidgetViewmodel*>(UVerseWidgetViewmodel::StaticClass()->DefaultObject);

	return Default;
}


// Class VerseUI.VersePlayerUIEntityComponent
// (None)

class UClass* UVersePlayerUIEntityComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VersePlayerUIEntityComponent");

	return Clss;
}


// VersePlayerUIEntityComponent VerseUI.Default__VersePlayerUIEntityComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UVersePlayerUIEntityComponent* UVersePlayerUIEntityComponent::GetDefaultObj()
{
	static class UVersePlayerUIEntityComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UVersePlayerUIEntityComponent*>(UVersePlayerUIEntityComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class VerseUI.VerseWidgetNativeBase
// (None)

class UClass* UVerseWidgetNativeBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseWidgetNativeBase");

	return Clss;
}


// VerseWidgetNativeBase VerseUI.Default__VerseWidgetNativeBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseWidgetNativeBase* UVerseWidgetNativeBase::GetDefaultObj()
{
	static class UVerseWidgetNativeBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseWidgetNativeBase*>(UVerseWidgetNativeBase::StaticClass()->DefaultObject);

	return Default;
}


// Class VerseUI.VerseUIWorldSubsystem
// (None)

class UClass* UVerseUIWorldSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseUIWorldSubsystem");

	return Clss;
}


// VerseUIWorldSubsystem VerseUI.Default__VerseUIWorldSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseUIWorldSubsystem* UVerseUIWorldSubsystem::GetDefaultObj()
{
	static class UVerseUIWorldSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseUIWorldSubsystem*>(UVerseUIWorldSubsystem::StaticClass()->DefaultObject);

	return Default;
}

}


