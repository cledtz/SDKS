#pragma once

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

// 0x10 (0x10 - 0x0)
// Function BP_UserEntry.BP_UserEntry_C.OnGetAvatarComplete_824A0C6B4C2DBA1D157208B3CDEF0AE0
struct UBP_UserEntry_C_OnGetAvatarComplete_824A0C6B4C2DBA1D157208B3CDEF0AE0_Params
{
public:
	bool                                         bWasSuccessful;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C46[0x7];                                     // Fixing Size After Last Property
	class UTexture*                              ResultTexture;                                     // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_UserEntry.BP_UserEntry_C.OnCallFailed_824A0C6B4C2DBA1D157208B3CDEF0AE0
struct UBP_UserEntry_C_OnCallFailed_824A0C6B4C2DBA1D157208B3CDEF0AE0_Params
{
public:
	bool                                         bWasSuccessful;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C47[0x7];                                     // Fixing Size After Last Property
	class UTexture*                              ResultTexture;                                     // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_UserEntry.BP_UserEntry_C.ParseUserInfo
struct UBP_UserEntry_C_ParseUserInfo_Params
{
public:
	struct FUniqueNetIdRepl                      UserId;                                            // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0xD8 (0xD8 - 0x0)
// Function BP_UserEntry.BP_UserEntry_C.OnPresenceReceived_Event
struct UBP_UserEntry_C_OnPresenceReceived_Event_Params
{
public:
	struct FUniqueNetIdRepl                      UserId;                                            // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FOnlineUserPresenceData               Presence;                                          // 0x30(0xA8)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x209 (0x209 - 0x0)
// Function BP_UserEntry.BP_UserEntry_C.ExecuteUbergraph_BP_UserEntry
struct UBP_UserEntry_C_ExecuteUbergraph_BP_UserEntry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bWasSuccessful_1;               // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C51[0x3];                                     // Fixing Size After Last Property
	class UTexture*                              K2Node_CustomEvent_ResultTexture_1;                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bWasSuccessful;                 // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C52[0x7];                                     // Fixing Size After Last Property
	class UTexture*                              K2Node_CustomEvent_ResultTexture;                  // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x30(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              Temp_object_Variable;                              // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C53[0x7];                                     // Fixing Size After Last Property
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_UserId_1;                       // 0x50(0x30)(HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x88(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue;     // 0x98(0x30)(HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UOnlinePresenceSubsystem*              CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0xD0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue_1;   // 0xD8(0x30)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue; // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C54[0x7];                                     // Fixing Size After Last Property
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_UserId;                         // 0x110(0x30)(HasGetValueTypeHash)
	struct FOnlineUserPresenceData               K2Node_CustomEvent_Presence;                       // 0x140(0xA8)()
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue_1; // 0x1E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C55[0x6];                                     // Fixing Size After Last Property
	class UOnlineAvatarSubsystem*                CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x1F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FUniqueNetIdIsValid_ReturnValue;          // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C56[0x7];                                     // Fixing Size After Last Property
	class UOnlineAvatarSubsystemGetAvatar*       CallFunc_GetAvatar_ReturnValue;                    // 0x200(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_UserEntry.BP_UserEntry_C.OnPresenceUpdated__DelegateSignature
struct UBP_UserEntry_C_OnPresenceUpdated__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_UserEntry.BP_UserEntry_C.OnGetAvatar__DelegateSignature
struct UBP_UserEntry_C_OnGetAvatar__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
