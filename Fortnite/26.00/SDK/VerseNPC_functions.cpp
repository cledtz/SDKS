#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class VerseNPC.InventoryComponentBase
// (None)

class UClass* UInventoryComponentBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InventoryComponentBase");

	return Clss;
}


// InventoryComponentBase VerseNPC.Default__InventoryComponentBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UInventoryComponentBase* UInventoryComponentBase::GetDefaultObj()
{
	static class UInventoryComponentBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UInventoryComponentBase*>(UInventoryComponentBase::StaticClass()->DefaultObject);

	return Default;
}


// Class VerseNPC.LeashComponentBase
// (None)

class UClass* ULeashComponentBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeashComponentBase");

	return Clss;
}


// LeashComponentBase VerseNPC.Default__LeashComponentBase
// (Public, ClassDefaultObject, ArchetypeObject)

class ULeashComponentBase* ULeashComponentBase::GetDefaultObj()
{
	static class ULeashComponentBase* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeashComponentBase*>(ULeashComponentBase::StaticClass()->DefaultObject);

	return Default;
}


// Class VerseNPC.NPCPerceptionComponentBase
// (None)

class UClass* UNPCPerceptionComponentBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NPCPerceptionComponentBase");

	return Clss;
}


// NPCPerceptionComponentBase VerseNPC.Default__NPCPerceptionComponentBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UNPCPerceptionComponentBase* UNPCPerceptionComponentBase::GetDefaultObj()
{
	static class UNPCPerceptionComponentBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UNPCPerceptionComponentBase*>(UNPCPerceptionComponentBase::StaticClass()->DefaultObject);

	return Default;
}

}


