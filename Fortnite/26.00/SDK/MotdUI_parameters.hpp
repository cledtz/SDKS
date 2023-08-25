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
// Function MotdUI.DynamicMotdFullScreenTile.BP_OnTileUpdated
struct UDynamicMotdFullScreenTile_BP_OnTileUpdated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MotdUI.DynamicMotdFullScreenWidget.NavigateToPreviousItem
struct UDynamicMotdFullScreenWidget_NavigateToPreviousItem_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MotdUI.DynamicMotdFullScreenWidget.NavigateToNextItem
struct UDynamicMotdFullScreenWidget_NavigateToNextItem_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function MotdUI.DynamicMotdFullScreenWidget.HandleSelectedTileChanged
struct UDynamicMotdFullScreenWidget_HandleSelectedTileChanged_Params
{
public:
	class UCommonButtonBase*                     SelectedTile;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TileIndex;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F88[0x4];                                     // Fixing Size Of Struct
};

// 0x0 (0x0 - 0x0)
// Function MotdUI.DynamicMotdFullScreenWidget.BP_PlayIntroAnimation
struct UDynamicMotdFullScreenWidget_BP_PlayIntroAnimation_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MotdUI.DynamicMotdFullScreenWidget.BP_OnSelectedTileChanged
struct UDynamicMotdFullScreenWidget_BP_OnSelectedTileChanged_Params
{
public:
};

}
}


