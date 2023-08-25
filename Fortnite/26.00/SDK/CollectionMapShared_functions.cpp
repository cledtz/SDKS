#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CollectionMapShared.AthenaCollectionScreenMapBase
// (None)

class UClass* UAthenaCollectionScreenMapBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaCollectionScreenMapBase");

	return Clss;
}


// AthenaCollectionScreenMapBase CollectionMapShared.Default__AthenaCollectionScreenMapBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaCollectionScreenMapBase* UAthenaCollectionScreenMapBase::GetDefaultObj()
{
	static class UAthenaCollectionScreenMapBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaCollectionScreenMapBase*>(UAthenaCollectionScreenMapBase::StaticClass()->DefaultObject);

	return Default;
}


// Class CollectionMapShared.AthenaMapCollectionIcon
// (None)

class UClass* UAthenaMapCollectionIcon::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaMapCollectionIcon");

	return Clss;
}


// AthenaMapCollectionIcon CollectionMapShared.Default__AthenaMapCollectionIcon
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaMapCollectionIcon* UAthenaMapCollectionIcon::GetDefaultObj()
{
	static class UAthenaMapCollectionIcon* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaMapCollectionIcon*>(UAthenaMapCollectionIcon::StaticClass()->DefaultObject);

	return Default;
}


// Function CollectionMapShared.AthenaMapCollectionIcon.SetSecondaryIcon
// (RequiredAPI, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UObject>      SecondaryIcon                                                    (ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaMapCollectionIcon::SetSecondaryIcon(TSoftObjectPtr<class UObject>& SecondaryIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMapCollectionIcon", "SetSecondaryIcon");

	Params::UAthenaMapCollectionIcon_SetSecondaryIcon_Params Parms{};

	Parms.SecondaryIcon = SecondaryIcon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionMapShared.AthenaMapCollectionIcon.SetIsKnown
// (RequiredAPI, Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsKnown                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaMapCollectionIcon::SetIsKnown(bool bIsKnown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMapCollectionIcon", "SetIsKnown");

	Params::UAthenaMapCollectionIcon_SetIsKnown_Params Parms{};

	Parms.bIsKnown = bIsKnown;

	UObject::ProcessEvent(Func, &Parms);

}

}


