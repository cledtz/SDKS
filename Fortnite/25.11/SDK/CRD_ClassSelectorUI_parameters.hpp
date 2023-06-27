#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// Function CRD_ClassSelectorUI.CreativeClassSelectorButton.SetButtonText
struct UCreativeClassSelectorButton_SetButtonText_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function CRD_ClassSelectorUI.ClassSelectorTeamTile.OnTeamSet
struct UClassSelectorTeamTile_OnTeamSet_Params
{
public:
	struct FMinigameTeam                         NewTeamData;                                       // 0x0(0x90)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function CRD_ClassSelectorUI.ClassSelectorTeamTile.OnTeamIconSet
struct UClassSelectorTeamTile_OnTeamIconSet_Params
{
public:
	struct FCreativeIconOption                   NewTeamIcon;                                       // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CRD_ClassSelectorUI.ClassSelectorTeamTile.OnTeamColorIndexSet
struct UClassSelectorTeamTile_OnTeamColorIndexSet_Params
{
public:
	int32                                        TeamColorIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CRD_ClassSelectorUI.ClassSelectorTeamTile.OnPlayerCountSet
struct UClassSelectorTeamTile_OnPlayerCountSet_Params
{
public:
	int32                                        NewPlayerCount;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function CRD_ClassSelectorUI.CreativeClassEntry.OnClassEntryDataSet
struct UCreativeClassEntry_OnClassEntryDataSet_Params
{
public:
	bool                                         bIsCurrentClass;                                   // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPendingClass;                                   // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CRD_ClassSelectorUI.CreativeClassEntry.OnBrowsingLoadout
struct UCreativeClassEntry_OnBrowsingLoadout_Params
{
public:
	bool                                         bBrowsingLoadout;                                  // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CRD_ClassSelectorUI.CreativeClassSelector.OnTimerCountdown
struct UCreativeClassSelector_OnTimerCountdown_Params
{
public:
	int32                                        RemainingTime;                                     // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function CRD_ClassSelectorUI.CreativeClassSelector.OnLoadoutCommitted
struct UCreativeClassSelector_OnLoadoutCommitted_Params
{
public:
	class FText                                  NewClassName;                                      // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  NewTeamName;                                       // 0x18(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bNewLoadout;                                       // 0x30(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_816E[0x7];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function CRD_ClassSelectorUI.CreativeClassSelector.OnClassSelectorUIPopulated
struct UCreativeClassSelector_OnClassSelectorUIPopulated_Params
{
public:
	bool                                         bHasValidData;                                     // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function CRD_ClassSelectorUI.CreativeClassSelector.OnClassSelectionChanged
struct UCreativeClassSelector_OnClassSelectionChanged_Params
{
public:
	class FText                                  NewClassName;                                      // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  NewClassDescription;                               // 0x18(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CRD_ClassSelectorUI.CreativeClassSelector.HandleMinigameStateChanged
struct UCreativeClassSelector_HandleMinigameStateChanged_Params
{
public:
	class AFortMinigame*                         Minigame;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortMinigameState                MinigameState;                                     // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_816F[0x7];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function CRD_ClassSelectorUI.CreativeClassSelector.GetFirstLoadoutItem
struct UCreativeClassSelector_GetFirstLoadoutItem_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CRD_ClassSelectorUI.CreativeClassSelectorMapTab.SetTabName
struct UCreativeClassSelectorMapTab_SetTabName_Params
{
public:
	class FText                                  TabName;                                           // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
