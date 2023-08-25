#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class StoreSelectionUI.FortStoreSelectionData
// (None)

class UClass* UFortStoreSelectionData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortStoreSelectionData");

	return Clss;
}


// FortStoreSelectionData StoreSelectionUI.Default__FortStoreSelectionData
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortStoreSelectionData* UFortStoreSelectionData::GetDefaultObj()
{
	static class UFortStoreSelectionData* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortStoreSelectionData*>(UFortStoreSelectionData::StaticClass()->DefaultObject);

	return Default;
}


// Class StoreSelectionUI.FortStoreSelectionOptionEntry
// (None)

class UClass* UFortStoreSelectionOptionEntry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortStoreSelectionOptionEntry");

	return Clss;
}


// FortStoreSelectionOptionEntry StoreSelectionUI.Default__FortStoreSelectionOptionEntry
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortStoreSelectionOptionEntry* UFortStoreSelectionOptionEntry::GetDefaultObj()
{
	static class UFortStoreSelectionOptionEntry* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortStoreSelectionOptionEntry*>(UFortStoreSelectionOptionEntry::StaticClass()->DefaultObject);

	return Default;
}


// Class StoreSelectionUI.FortStoreSelectionScreen
// (None)

class UClass* UFortStoreSelectionScreen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortStoreSelectionScreen");

	return Clss;
}


// FortStoreSelectionScreen StoreSelectionUI.Default__FortStoreSelectionScreen
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortStoreSelectionScreen* UFortStoreSelectionScreen::GetDefaultObj()
{
	static class UFortStoreSelectionScreen* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortStoreSelectionScreen*>(UFortStoreSelectionScreen::StaticClass()->DefaultObject);

	return Default;
}

}


