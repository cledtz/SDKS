#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x0 - 0x0)
// Function VKDownloadOnDemandUI.DownloadOnDemandProjectManagementTab.UpdateProjectConfirmed
struct UDownloadOnDemandProjectManagementTab_UpdateProjectConfirmed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VKDownloadOnDemandUI.DownloadOnDemandProjectManagementTab.RemoveProjectConfirmed
struct UDownloadOnDemandProjectManagementTab_RemoveProjectConfirmed_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function VKDownloadOnDemandUI.DownloadOnDemandAddProjectModal.UpdateLightningViolator
struct UDownloadOnDemandAddProjectModal_UpdateLightningViolator_Params
{
public:
	enum class ESlateVisibility                  InVisibility;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49F0[0x7];                                     // Fixing Size After Last Property 
	class FText                                  InText;                                            // 0x8(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function VKDownloadOnDemandUI.DownloadOnDemandAddProjectModal.HandleDownloadLinkIdTextChanged
struct UDownloadOnDemandAddProjectModal_HandleDownloadLinkIdTextChanged_Params
{
public:
	class FText                                  InputLinkCode;                                     // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function VKDownloadOnDemandUI.DownloadOnDemandProjectTile.UpdateLabel
struct UDownloadOnDemandProjectTile_UpdateLabel_Params
{
public:
	bool                                         bShowLabel;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function VKDownloadOnDemandUI.DownloadOnDemandProjectTile.OnLabelUpdated
struct UDownloadOnDemandProjectTile_OnLabelUpdated_Params
{
public:
};

}
}


