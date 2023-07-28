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


// Function SidebarSocialAddingTagWidget.SidebarSocialAddingTagWidget_C.EventSetTag
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSidebarSocialTagCategoryStructureCallFunc_Get_Sidebar_Social_Tag_Category_Structure_SidebarSocialTagCategoryStructure(HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void USidebarSocialAddingTagWidget_C::EventSetTag(const struct FSidebarSocialTagCategoryStructure& CallFunc_Get_Sidebar_Social_Tag_Category_Structure_SidebarSocialTagCategoryStructure, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("SidebarSocialAddingTagWidget_C", "EventSetTag");

	Params::USidebarSocialAddingTagWidget_C_EventSetTag_Params Parms;

	Parms.CallFunc_Get_Sidebar_Social_Tag_Category_Structure_SidebarSocialTagCategoryStructure = CallFunc_Get_Sidebar_Social_Tag_Category_Structure_SidebarSocialTagCategoryStructure;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SidebarSocialAddingTagWidget.SidebarSocialAddingTagWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USidebarSocialAddingTagWidget_C::Construct()
{
	static auto Func = Class->GetFunction("SidebarSocialAddingTagWidget_C", "Construct");

	Params::USidebarSocialAddingTagWidget_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SidebarSocialAddingTagWidget.SidebarSocialAddingTagWidget_C.ExecuteUbergraph_SidebarSocialAddingTagWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USidebarSocialAddingTagWidget_C::ExecuteUbergraph_SidebarSocialAddingTagWidget(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("SidebarSocialAddingTagWidget_C", "ExecuteUbergraph_SidebarSocialAddingTagWidget");

	Params::USidebarSocialAddingTagWidget_C_ExecuteUbergraph_SidebarSocialAddingTagWidget_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
