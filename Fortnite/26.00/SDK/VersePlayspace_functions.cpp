#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class VersePlayspace.PlayspaceComponentVerseWrapper
// (None)

class UClass* UPlayspaceComponentVerseWrapper::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayspaceComponentVerseWrapper");

	return Clss;
}


// PlayspaceComponentVerseWrapper VersePlayspace.Default__PlayspaceComponentVerseWrapper
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayspaceComponentVerseWrapper* UPlayspaceComponentVerseWrapper::GetDefaultObj()
{
	static class UPlayspaceComponentVerseWrapper* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayspaceComponentVerseWrapper*>(UPlayspaceComponentVerseWrapper::StaticClass()->DefaultObject);

	return Default;
}


// Class VersePlayspace.PlayspaceConfigComponent
// (None)

class UClass* UPlayspaceConfigComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayspaceConfigComponent");

	return Clss;
}


// PlayspaceConfigComponent VersePlayspace.Default__PlayspaceConfigComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayspaceConfigComponent* UPlayspaceConfigComponent::GetDefaultObj()
{
	static class UPlayspaceConfigComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayspaceConfigComponent*>(UPlayspaceConfigComponent::StaticClass()->DefaultObject);

	return Default;
}

}


