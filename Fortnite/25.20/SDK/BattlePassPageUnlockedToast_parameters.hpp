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

// 0x34 (0x34 - 0x0)
// Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.SetupAnimBindings
struct UBattlePassPageUnlockedToast_C_SetupAnimBindings_Params
{
public:
	bool                                         Unbind;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7EFE[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x10(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x1C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x28(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.ApplyAdditionalStyling
struct UBattlePassPageUnlockedToast_C_ApplyAdditionalStyling_Params
{
public:
	class UClass*                                NewLocalVar_2;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                NewLocalVar_1;                                     // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                NewLocalVar_0;                                     // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EFortNotificationType             CallFunc_GetNotificationType_ReturnValue;          // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x32 (0x32 - 0x0)
// Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.SetImage
struct UBattlePassPageUnlockedToast_C_SetImage_Params
{
public:
	TSoftObjectPtr<class UObject>                CallFunc_GetDisplayAsset_ReturnValue;              // 0x0(0x28)(ConstParm, UObjectWrapper, HasGetValueTypeHash)
	class UTwitchNotification_C*                 K2Node_DynamicCast_AsTwitch_Notification;          // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x15 (0x15 - 0x0)
// Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.GetOpenButtonVisibility
struct UBattlePassPageUnlockedToast_C_GetOpenButtonVisibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7EFF[0x4];                                     // Fixing Size After Last Property..
	class UFortGlobalUIContext*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAction_ReturnValue;                    // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInZone_ReturnValue;                     // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.StartIntro
struct UBattlePassPageUnlockedToast_C_StartIntro_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.UpdateToast
struct UBattlePassPageUnlockedToast_C_UpdateToast_Params
{
public:
	class UFortUINotification*                   Notification;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetDescription_ReturnValue;               // 0x8(0x18)(ConstParm)
	class FText                                  CallFunc_GetTitle_ReturnValue;                     // 0x20(0x18)(ConstParm)
	enum class ESlateVisibility                  CallFunc_GetOpenButtonVisibility_ReturnValue;      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.HandleOutroFinished
struct UBattlePassPageUnlockedToast_C_HandleOutroFinished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.PlayOutro
struct UBattlePassPageUnlockedToast_C_PlayOutro_Params
{
public:
};

// 0xB0 (0xB0 - 0x0)
// Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.OnMouseEnter
struct UBattlePassPageUnlockedToast_C_OnMouseEnter_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x78 (0x78 - 0x0)
// Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.OnMouseLeave
struct UBattlePassPageUnlockedToast_C_OnMouseLeave_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.HandleIntroFinished
struct UBattlePassPageUnlockedToast_C_HandleIntroFinished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.Construct
struct UBattlePassPageUnlockedToast_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.Destruct
struct UBattlePassPageUnlockedToast_C_Destruct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.OnPlayOpenAnimation
struct UBattlePassPageUnlockedToast_C_OnPlayOpenAnimation_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.OnNotificationSet
struct UBattlePassPageUnlockedToast_C_OnNotificationSet_Params
{
public:
	class UFortUINotification*                   Notification;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.OnNotificationUpdated
struct UBattlePassPageUnlockedToast_C_OnNotificationUpdated_Params
{
public:
	class UFortUINotification*                   Notification;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x160 (0x160 - 0x0)
// Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.ExecuteUbergraph_BattlePassPageUnlockedToast
struct UBattlePassPageUnlockedToast_C_ExecuteUbergraph_BattlePassPageUnlockedToast_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetDisplayTime_bOutDisplayTimeOverridden; // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7F00[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetDisplayTime_ReturnValue;               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xC(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x18(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x20(0x38)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                         K2Node_Event_MouseEvent_1;                         // 0x58(0x78)(ConstParm)
	struct FPointerEvent                         K2Node_Event_MouseEvent;                           // 0xD0(0x78)(ConstParm)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x148(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortUINotification*                   K2Node_Event_Notification_1;                       // 0x150(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortUINotification*                   K2Node_Event_Notification;                         // 0x158(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.OnFinishedToast__DelegateSignature
struct UBattlePassPageUnlockedToast_C_OnFinishedToast__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
