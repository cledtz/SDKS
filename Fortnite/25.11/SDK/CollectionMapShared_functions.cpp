#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function CollectionMapShared.AthenaMapCollectionIcon.SetSecondaryIcon
// (RequiredAPI, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UObject>      SecondaryIcon                                                    (ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaMapCollectionIcon::SetSecondaryIcon(TSoftObjectPtr<class UObject>& SecondaryIcon)
{
	static auto Func = Class->GetFunction("AthenaMapCollectionIcon", "SetSecondaryIcon");

	Params::UAthenaMapCollectionIcon_SetSecondaryIcon_Params Parms;

	Parms.SecondaryIcon = SecondaryIcon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionMapShared.AthenaMapCollectionIcon.SetIsKnown
// (RequiredAPI, Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsKnown                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaMapCollectionIcon::SetIsKnown(bool bIsKnown)
{
	static auto Func = Class->GetFunction("AthenaMapCollectionIcon", "SetIsKnown");

	Params::UAthenaMapCollectionIcon_SetIsKnown_Params Parms;

	Parms.bIsKnown = bIsKnown;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
