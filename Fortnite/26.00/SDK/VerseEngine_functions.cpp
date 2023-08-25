#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class VerseEngine.ContentScopeRepository
// (None)

class UClass* UContentScopeRepository::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ContentScopeRepository");

	return Clss;
}


// ContentScopeRepository VerseEngine.Default__ContentScopeRepository
// (Public, ClassDefaultObject, ArchetypeObject)

class UContentScopeRepository* UContentScopeRepository::GetDefaultObj()
{
	static class UContentScopeRepository* Default = nullptr;

	if (!Default)
		Default = static_cast<UContentScopeRepository*>(UContentScopeRepository::StaticClass()->DefaultObject);

	return Default;
}


// Class VerseEngine.VerseWorldSubsystem
// (None)

class UClass* UVerseWorldSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseWorldSubsystem");

	return Clss;
}


// VerseWorldSubsystem VerseEngine.Default__VerseWorldSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseWorldSubsystem* UVerseWorldSubsystem::GetDefaultObj()
{
	static class UVerseWorldSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseWorldSubsystem*>(UVerseWorldSubsystem::StaticClass()->DefaultObject);

	return Default;
}

}


