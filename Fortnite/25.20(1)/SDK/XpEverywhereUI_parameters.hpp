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

// 0x88 (0x88 - 0x0)
// Function XpEverywhereUI.XpEverywhereAccoladesWidget.OpenWidget
struct UXpEverywhereAccoladesWidget_OpenWidget_Params
{
public:
	class UFortAccoladeItemDefinition*           AccoladeDef;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        XpValue;                                           // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8538[0x4];                                     // Fixing Size After Last Property..
	class FText                                  DisplayName;                                       // 0x10(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             AccoladeLargePreviewImageOverride;                 // 0x28(0x28)(ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  SimulatedName;                                     // 0x50(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  SimulatedText;                                     // 0x68(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	enum class EFortSimulatedXPSize              SimulatedXpSize;                                   // 0x80(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8539[0x7];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function XpEverywhereUI.XpEverywhereAccoladesWidget.OnStompedByOtherWidget
struct UXpEverywhereAccoladesWidget_OnStompedByOtherWidget_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function XpEverywhereUI.XpEverywhereAccoladesWidget.OnEventAdded
struct UXpEverywhereAccoladesWidget_OnEventAdded_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function XpEverywhereUI.XpEverywhereAccoladesWidget.HasMoreXPEvents
struct UXpEverywhereAccoladesWidget_HasMoreXPEvents_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function XpEverywhereUI.XpEverywhereAccoladesWidget.CloseWidget
struct UXpEverywhereAccoladesWidget_CloseWidget_Params
{
public:
};

// 0x14 (0x14 - 0x0)
// Function XpEverywhereUI.XpEverywhereBar.OnXpBarUpdated
struct UXpEverywhereBar_OnXpBarUpdated_Params
{
public:
	int32                                        ShownXP;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ShownLevel;                                        // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewDesiredXP;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewDesiredLevel;                                   // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewRemainingRestXP;                                // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function XpEverywhereUI.XpEverywhereBar.OnXpBarInitialized
struct UXpEverywhereBar_OnXpBarInitialized_Params
{
public:
	int32                                        CurrentXP;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentLevel;                                      // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentRemainingRestXP;                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function XpEverywhereUI.XpEverywhereBar.GetTotalXpRequiredForLevel
struct UXpEverywhereBar_GetTotalXpRequiredForLevel_Params
{
public:
	int32                                        InLevel;                                           // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function XpEverywhereUI.XpEverywhereBar.DoneUpdatingXpBar
struct UXpEverywhereBar_DoneUpdatingXpBar_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function XpEverywhereUI.XpEverywhereLevelUpWidget.OnShowWidget
struct UXpEverywhereLevelUpWidget_OnShowWidget_Params
{
public:
	int32                                        NewLevel;                                          // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function XpEverywhereUI.XpEverywhereLevelUpWidget.DoneLevelingUp
struct UXpEverywhereLevelUpWidget_DoneLevelingUp_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function XpEverywhereUI.XpEverywhereLevelUpWidget.DisplayLevelUpRewards
struct UXpEverywhereLevelUpWidget_DisplayLevelUpRewards_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function XpEverywhereUI.XpEverywhereReticleWidget.UpdateXPSource
struct UXpEverywhereReticleWidget_UpdateXPSource_Params
{
public:
	class FText                                  NewSourceText;                                     // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function XpEverywhereUI.XpEverywhereReticleWidget.UpdateXPAmount
struct UXpEverywhereReticleWidget_UpdateXPAmount_Params
{
public:
	int32                                        NewAmount;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_853F[0x4];                                     // Fixing Size After Last Property..
	class USoundCue*                             Cue;                                               // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortSimulatedXPSize              SimulatedXpSize;                                   // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8540[0x7];                                     // Fixing Size Of Struct..
};

// 0x4 (0x4 - 0x0)
// Function XpEverywhereUI.XpEverywhereReticleWidget.UpdateRestXP
struct UXpEverywhereReticleWidget_UpdateRestXP_Params
{
public:
	int32                                        RestXpRemaining;                                   // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function XpEverywhereUI.XpEverywhereReticleWidget.HandleProfileUpdated
struct UXpEverywhereReticleWidget_HandleProfileUpdated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function XpEverywhereUI.XpEverywhereReticleWidget.ForwardEvents
struct UXpEverywhereReticleWidget_ForwardEvents_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function XpEverywhereUI.XpEverywhereRewardWidget.HandleNotificationUpdateFinished
struct UXpEverywhereRewardWidget_HandleNotificationUpdateFinished_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
