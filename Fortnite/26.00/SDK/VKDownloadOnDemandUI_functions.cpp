#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class VKDownloadOnDemandUI.DownloadOnDemandProjectManagementTab
// (None)

class UClass* UDownloadOnDemandProjectManagementTab::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DownloadOnDemandProjectManagementTab");

	return Clss;
}


// DownloadOnDemandProjectManagementTab VKDownloadOnDemandUI.Default__DownloadOnDemandProjectManagementTab
// (Public, ClassDefaultObject, ArchetypeObject)

class UDownloadOnDemandProjectManagementTab* UDownloadOnDemandProjectManagementTab::GetDefaultObj()
{
	static class UDownloadOnDemandProjectManagementTab* Default = nullptr;

	if (!Default)
		Default = static_cast<UDownloadOnDemandProjectManagementTab*>(UDownloadOnDemandProjectManagementTab::StaticClass()->DefaultObject);

	return Default;
}


// Function VKDownloadOnDemandUI.DownloadOnDemandProjectManagementTab.UpdateProjectConfirmed
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UDownloadOnDemandProjectManagementTab::UpdateProjectConfirmed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DownloadOnDemandProjectManagementTab", "UpdateProjectConfirmed");

	Params::UDownloadOnDemandProjectManagementTab_UpdateProjectConfirmed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VKDownloadOnDemandUI.DownloadOnDemandProjectManagementTab.RemoveProjectConfirmed
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UDownloadOnDemandProjectManagementTab::RemoveProjectConfirmed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DownloadOnDemandProjectManagementTab", "RemoveProjectConfirmed");

	Params::UDownloadOnDemandProjectManagementTab_RemoveProjectConfirmed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class VKDownloadOnDemandUI.DownloadOnDemandTabPanel
// (None)

class UClass* UDownloadOnDemandTabPanel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DownloadOnDemandTabPanel");

	return Clss;
}


// DownloadOnDemandTabPanel VKDownloadOnDemandUI.Default__DownloadOnDemandTabPanel
// (Public, ClassDefaultObject, ArchetypeObject)

class UDownloadOnDemandTabPanel* UDownloadOnDemandTabPanel::GetDefaultObj()
{
	static class UDownloadOnDemandTabPanel* Default = nullptr;

	if (!Default)
		Default = static_cast<UDownloadOnDemandTabPanel*>(UDownloadOnDemandTabPanel::StaticClass()->DefaultObject);

	return Default;
}


// Class VKDownloadOnDemandUI.DownloadOnDemandTab_EntitlementCreationCondition
// (None)

class UClass* UDownloadOnDemandTab_EntitlementCreationCondition::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DownloadOnDemandTab_EntitlementCreationCondition");

	return Clss;
}


// DownloadOnDemandTab_EntitlementCreationCondition VKDownloadOnDemandUI.Default__DownloadOnDemandTab_EntitlementCreationCondition
// (Public, ClassDefaultObject, ArchetypeObject)

class UDownloadOnDemandTab_EntitlementCreationCondition* UDownloadOnDemandTab_EntitlementCreationCondition::GetDefaultObj()
{
	static class UDownloadOnDemandTab_EntitlementCreationCondition* Default = nullptr;

	if (!Default)
		Default = static_cast<UDownloadOnDemandTab_EntitlementCreationCondition*>(UDownloadOnDemandTab_EntitlementCreationCondition::StaticClass()->DefaultObject);

	return Default;
}


// Class VKDownloadOnDemandUI.DownloadOnDemandAddProjectModal
// (None)

class UClass* UDownloadOnDemandAddProjectModal::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DownloadOnDemandAddProjectModal");

	return Clss;
}


// DownloadOnDemandAddProjectModal VKDownloadOnDemandUI.Default__DownloadOnDemandAddProjectModal
// (Public, ClassDefaultObject, ArchetypeObject)

class UDownloadOnDemandAddProjectModal* UDownloadOnDemandAddProjectModal::GetDefaultObj()
{
	static class UDownloadOnDemandAddProjectModal* Default = nullptr;

	if (!Default)
		Default = static_cast<UDownloadOnDemandAddProjectModal*>(UDownloadOnDemandAddProjectModal::StaticClass()->DefaultObject);

	return Default;
}


// Function VKDownloadOnDemandUI.DownloadOnDemandAddProjectModal.UpdateLightningViolator
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        InVisibility                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        InText                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UDownloadOnDemandAddProjectModal::UpdateLightningViolator(enum class ESlateVisibility InVisibility, class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DownloadOnDemandAddProjectModal", "UpdateLightningViolator");

	Params::UDownloadOnDemandAddProjectModal_UpdateLightningViolator_Params Parms{};

	Parms.InVisibility = InVisibility;
	Parms.InText = InText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VKDownloadOnDemandUI.DownloadOnDemandAddProjectModal.HandleDownloadLinkIdTextChanged
// (Final, Native, Private, HasOutParams)
// Parameters:
// class FText                        InputLinkCode                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UDownloadOnDemandAddProjectModal::HandleDownloadLinkIdTextChanged(class FText& InputLinkCode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DownloadOnDemandAddProjectModal", "HandleDownloadLinkIdTextChanged");

	Params::UDownloadOnDemandAddProjectModal_HandleDownloadLinkIdTextChanged_Params Parms{};

	Parms.InputLinkCode = InputLinkCode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class VKDownloadOnDemandUI.DownloadOnDemandMessageModal
// (None)

class UClass* UDownloadOnDemandMessageModal::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DownloadOnDemandMessageModal");

	return Clss;
}


// DownloadOnDemandMessageModal VKDownloadOnDemandUI.Default__DownloadOnDemandMessageModal
// (Public, ClassDefaultObject, ArchetypeObject)

class UDownloadOnDemandMessageModal* UDownloadOnDemandMessageModal::GetDefaultObj()
{
	static class UDownloadOnDemandMessageModal* Default = nullptr;

	if (!Default)
		Default = static_cast<UDownloadOnDemandMessageModal*>(UDownloadOnDemandMessageModal::StaticClass()->DefaultObject);

	return Default;
}


// Class VKDownloadOnDemandUI.DownloadOnDemandProjectDetailsSidePanel
// (None)

class UClass* UDownloadOnDemandProjectDetailsSidePanel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DownloadOnDemandProjectDetailsSidePanel");

	return Clss;
}


// DownloadOnDemandProjectDetailsSidePanel VKDownloadOnDemandUI.Default__DownloadOnDemandProjectDetailsSidePanel
// (Public, ClassDefaultObject, ArchetypeObject)

class UDownloadOnDemandProjectDetailsSidePanel* UDownloadOnDemandProjectDetailsSidePanel::GetDefaultObj()
{
	static class UDownloadOnDemandProjectDetailsSidePanel* Default = nullptr;

	if (!Default)
		Default = static_cast<UDownloadOnDemandProjectDetailsSidePanel*>(UDownloadOnDemandProjectDetailsSidePanel::StaticClass()->DefaultObject);

	return Default;
}


// Class VKDownloadOnDemandUI.DownloadOnDemandStatusFeed
// (None)

class UClass* UDownloadOnDemandStatusFeed::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DownloadOnDemandStatusFeed");

	return Clss;
}


// DownloadOnDemandStatusFeed VKDownloadOnDemandUI.Default__DownloadOnDemandStatusFeed
// (Public, ClassDefaultObject, ArchetypeObject)

class UDownloadOnDemandStatusFeed* UDownloadOnDemandStatusFeed::GetDefaultObj()
{
	static class UDownloadOnDemandStatusFeed* Default = nullptr;

	if (!Default)
		Default = static_cast<UDownloadOnDemandStatusFeed*>(UDownloadOnDemandStatusFeed::StaticClass()->DefaultObject);

	return Default;
}


// Class VKDownloadOnDemandUI.DownloadOnDemandStatusFeedLine
// (None)

class UClass* UDownloadOnDemandStatusFeedLine::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DownloadOnDemandStatusFeedLine");

	return Clss;
}


// DownloadOnDemandStatusFeedLine VKDownloadOnDemandUI.Default__DownloadOnDemandStatusFeedLine
// (Public, ClassDefaultObject, ArchetypeObject)

class UDownloadOnDemandStatusFeedLine* UDownloadOnDemandStatusFeedLine::GetDefaultObj()
{
	static class UDownloadOnDemandStatusFeedLine* Default = nullptr;

	if (!Default)
		Default = static_cast<UDownloadOnDemandStatusFeedLine*>(UDownloadOnDemandStatusFeedLine::StaticClass()->DefaultObject);

	return Default;
}


// Class VKDownloadOnDemandUI.DownloadOnDemandProjectAssetTileInitializer
// (None)

class UClass* UDownloadOnDemandProjectAssetTileInitializer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DownloadOnDemandProjectAssetTileInitializer");

	return Clss;
}


// DownloadOnDemandProjectAssetTileInitializer VKDownloadOnDemandUI.Default__DownloadOnDemandProjectAssetTileInitializer
// (Public, ClassDefaultObject, ArchetypeObject)

class UDownloadOnDemandProjectAssetTileInitializer* UDownloadOnDemandProjectAssetTileInitializer::GetDefaultObj()
{
	static class UDownloadOnDemandProjectAssetTileInitializer* Default = nullptr;

	if (!Default)
		Default = static_cast<UDownloadOnDemandProjectAssetTileInitializer*>(UDownloadOnDemandProjectAssetTileInitializer::StaticClass()->DefaultObject);

	return Default;
}


// Class VKDownloadOnDemandUI.DownloadOnDemandProjectAssetTile
// (None)

class UClass* UDownloadOnDemandProjectAssetTile::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DownloadOnDemandProjectAssetTile");

	return Clss;
}


// DownloadOnDemandProjectAssetTile VKDownloadOnDemandUI.Default__DownloadOnDemandProjectAssetTile
// (Public, ClassDefaultObject, ArchetypeObject)

class UDownloadOnDemandProjectAssetTile* UDownloadOnDemandProjectAssetTile::GetDefaultObj()
{
	static class UDownloadOnDemandProjectAssetTile* Default = nullptr;

	if (!Default)
		Default = static_cast<UDownloadOnDemandProjectAssetTile*>(UDownloadOnDemandProjectAssetTile::StaticClass()->DefaultObject);

	return Default;
}


// Class VKDownloadOnDemandUI.DownloadOnDemandProjectTile
// (None)

class UClass* UDownloadOnDemandProjectTile::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DownloadOnDemandProjectTile");

	return Clss;
}


// DownloadOnDemandProjectTile VKDownloadOnDemandUI.Default__DownloadOnDemandProjectTile
// (Public, ClassDefaultObject, ArchetypeObject)

class UDownloadOnDemandProjectTile* UDownloadOnDemandProjectTile::GetDefaultObj()
{
	static class UDownloadOnDemandProjectTile* Default = nullptr;

	if (!Default)
		Default = static_cast<UDownloadOnDemandProjectTile*>(UDownloadOnDemandProjectTile::StaticClass()->DefaultObject);

	return Default;
}


// Function VKDownloadOnDemandUI.DownloadOnDemandProjectTile.UpdateLabel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bShowLabel                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDownloadOnDemandProjectTile::UpdateLabel(bool bShowLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DownloadOnDemandProjectTile", "UpdateLabel");

	Params::UDownloadOnDemandProjectTile_UpdateLabel_Params Parms{};

	Parms.bShowLabel = bShowLabel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VKDownloadOnDemandUI.DownloadOnDemandProjectTile.OnLabelUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UDownloadOnDemandProjectTile::OnLabelUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DownloadOnDemandProjectTile", "OnLabelUpdated");

	Params::UDownloadOnDemandProjectTile_OnLabelUpdated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Class VKDownloadOnDemandUI.DownloadOnDemandProjectTileImage
// (None)

class UClass* UDownloadOnDemandProjectTileImage::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DownloadOnDemandProjectTileImage");

	return Clss;
}


// DownloadOnDemandProjectTileImage VKDownloadOnDemandUI.Default__DownloadOnDemandProjectTileImage
// (Public, ClassDefaultObject, ArchetypeObject)

class UDownloadOnDemandProjectTileImage* UDownloadOnDemandProjectTileImage::GetDefaultObj()
{
	static class UDownloadOnDemandProjectTileImage* Default = nullptr;

	if (!Default)
		Default = static_cast<UDownloadOnDemandProjectTileImage*>(UDownloadOnDemandProjectTileImage::StaticClass()->DefaultObject);

	return Default;
}

}


