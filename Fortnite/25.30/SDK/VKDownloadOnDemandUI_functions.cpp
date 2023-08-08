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


// Function VKDownloadOnDemandUI.DownloadOnDemandProjectManagementTab.UpdateProjectConfirmed
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UDownloadOnDemandProjectManagementTab::UpdateProjectConfirmed()
{
	static auto Func = Class->GetFunction("DownloadOnDemandProjectManagementTab", "UpdateProjectConfirmed");

	Params::UDownloadOnDemandProjectManagementTab_UpdateProjectConfirmed_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VKDownloadOnDemandUI.DownloadOnDemandProjectManagementTab.RemoveProjectConfirmed
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UDownloadOnDemandProjectManagementTab::RemoveProjectConfirmed()
{
	static auto Func = Class->GetFunction("DownloadOnDemandProjectManagementTab", "RemoveProjectConfirmed");

	Params::UDownloadOnDemandProjectManagementTab_RemoveProjectConfirmed_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VKDownloadOnDemandUI.DownloadOnDemandAddProjectModal.UpdateLightningViolator
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        InVisibility                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        InText                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UDownloadOnDemandAddProjectModal::UpdateLightningViolator(enum class ESlateVisibility InVisibility, class FText& InText)
{
	static auto Func = Class->GetFunction("DownloadOnDemandAddProjectModal", "UpdateLightningViolator");

	Params::UDownloadOnDemandAddProjectModal_UpdateLightningViolator_Params Parms;

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
	static auto Func = Class->GetFunction("DownloadOnDemandAddProjectModal", "HandleDownloadLinkIdTextChanged");

	Params::UDownloadOnDemandAddProjectModal_HandleDownloadLinkIdTextChanged_Params Parms;

	Parms.InputLinkCode = InputLinkCode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VKDownloadOnDemandUI.DownloadOnDemandProjectTile.UpdateLabel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bShowLabel                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDownloadOnDemandProjectTile::UpdateLabel(bool bShowLabel)
{
	static auto Func = Class->GetFunction("DownloadOnDemandProjectTile", "UpdateLabel");

	Params::UDownloadOnDemandProjectTile_UpdateLabel_Params Parms;

	Parms.bShowLabel = bShowLabel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VKDownloadOnDemandUI.DownloadOnDemandProjectTile.OnLabelUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UDownloadOnDemandProjectTile::OnLabelUpdated()
{
	static auto Func = Class->GetFunction("DownloadOnDemandProjectTile", "OnLabelUpdated");

	Params::UDownloadOnDemandProjectTile_OnLabelUpdated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
