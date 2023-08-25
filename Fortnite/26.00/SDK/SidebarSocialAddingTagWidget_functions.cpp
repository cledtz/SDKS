#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SidebarSocialAddingTagWidget.SidebarSocialAddingTagWidget_C
// (None)

class UClass* USidebarSocialAddingTagWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SidebarSocialAddingTagWidget_C");

	return Clss;
}


// SidebarSocialAddingTagWidget_C SidebarSocialAddingTagWidget.Default__SidebarSocialAddingTagWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USidebarSocialAddingTagWidget_C* USidebarSocialAddingTagWidget_C::GetDefaultObj()
{
	static class USidebarSocialAddingTagWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USidebarSocialAddingTagWidget_C*>(USidebarSocialAddingTagWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SidebarSocialAddingTagWidget.SidebarSocialAddingTagWidget_C.EventSetTag
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSidebarSocialTagCategoryStructureCallFunc_Get_Sidebar_Social_Tag_Category_Structure_SidebarSocialTagCategoryStructure(HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void USidebarSocialAddingTagWidget_C::EventSetTag(const struct FSidebarSocialTagCategoryStructure& CallFunc_Get_Sidebar_Social_Tag_Category_Structure_SidebarSocialTagCategoryStructure, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidebarSocialAddingTagWidget_C", "EventSetTag");

	Params::USidebarSocialAddingTagWidget_C_EventSetTag_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidebarSocialAddingTagWidget_C", "Construct");

	Params::USidebarSocialAddingTagWidget_C_Construct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SidebarSocialAddingTagWidget.SidebarSocialAddingTagWidget_C.ExecuteUbergraph_SidebarSocialAddingTagWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USidebarSocialAddingTagWidget_C::ExecuteUbergraph_SidebarSocialAddingTagWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidebarSocialAddingTagWidget_C", "ExecuteUbergraph_SidebarSocialAddingTagWidget");

	Params::USidebarSocialAddingTagWidget_C_ExecuteUbergraph_SidebarSocialAddingTagWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


