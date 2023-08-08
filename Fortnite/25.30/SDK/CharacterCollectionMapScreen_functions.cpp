#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function CharacterCollectionMapScreen.CollectionNPCServiceWidget.PopulateEmpty
// (Event, Public, BlueprintEvent)
// Parameters:

void UCollectionNPCServiceWidget::PopulateEmpty()
{
	static auto Func = Class->GetFunction("CollectionNPCServiceWidget", "PopulateEmpty");

	Params::UCollectionNPCServiceWidget_PopulateEmpty_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterCollectionMapScreen.CollectionNPCServiceWidget.PopulateData
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FNPCServiceWidgetData       WidgetData                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UCollectionNPCServiceWidget::PopulateData(struct FNPCServiceWidgetData& WidgetData)
{
	static auto Func = Class->GetFunction("CollectionNPCServiceWidget", "PopulateData");

	Params::UCollectionNPCServiceWidget_PopulateData_Params Parms;

	Parms.WidgetData = WidgetData;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
