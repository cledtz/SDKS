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
// Function PlayFabGSDK.GSDKUtils.UpdateConnectedPlayers
struct UGSDKUtils_UpdateConnectedPlayers_Params
{
public:
	TArray<struct FConnectedPlayer>              CurrentlyConnectedPlayers;                         // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function PlayFabGSDK.GSDKUtils.SetDefaultServerHostPort
struct UGSDKUtils_SetDefaultServerHostPort_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PlayFabGSDK.GSDKUtils.RegisterGSDKShutdownDelegate
struct UGSDKUtils_RegisterGSDKShutdownDelegate_Params
{
public:
	FDelegateProperty_                           OnGSDKShutdownDelegate;                            // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PlayFabGSDK.GSDKUtils.RegisterGSDKServerActiveDelegate
struct UGSDKUtils_RegisterGSDKServerActiveDelegate_Params
{
public:
	FDelegateProperty_                           OnGSDKServerActiveDelegate;                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PlayFabGSDK.GSDKUtils.RegisterGSDKReadyForPlayers
struct UGSDKUtils_RegisterGSDKReadyForPlayers_Params
{
public:
	FDelegateProperty_                           OnGSDKReadyForPlayersDelegate;                     // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PlayFabGSDK.GSDKUtils.RegisterGSDKMaintenanceDelegate
struct UGSDKUtils_RegisterGSDKMaintenanceDelegate_Params
{
public:
	FDelegateProperty_                           OnGSDKMaintenanceDelegate;                         // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PlayFabGSDK.GSDKUtils.RegisterGSDKHealthCheckDelegate
struct UGSDKUtils_RegisterGSDKHealthCheckDelegate_Params
{
public:
	FDelegateProperty_                           OnGSDKHealthCheckDelegate;                         // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function PlayFabGSDK.GSDKUtils.ReadyForPlayers
struct UGSDKUtils_ReadyForPlayers_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function PlayFabGSDK.GSDKUtils.GetVMId
struct UGSDKUtils_GetVMId_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PlayFabGSDK.GSDKUtils.GetTitleId
struct UGSDKUtils_GetTitleId_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PlayFabGSDK.GSDKUtils.GetSharedContentDirectory
struct UGSDKUtils_GetSharedContentDirectory_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PlayFabGSDK.GSDKUtils.GetServerId
struct UGSDKUtils_GetServerId_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PlayFabGSDK.GSDKUtils.GetRegionName
struct UGSDKUtils_GetRegionName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function PlayFabGSDK.GSDKUtils.GetMetaDataValue
struct UGSDKUtils_GetMetaDataValue_Params
{
public:
	class FString                                MetaDataName;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PlayFabGSDK.GSDKUtils.GetMatchSessionCookie
struct UGSDKUtils_GetMatchSessionCookie_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PlayFabGSDK.GSDKUtils.GetMatchId
struct UGSDKUtils_GetMatchId_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PlayFabGSDK.GSDKUtils.GetLogsDirectory
struct UGSDKUtils_GetLogsDirectory_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PlayFabGSDK.GSDKUtils.GetInitialPlayers
struct UGSDKUtils_GetInitialPlayers_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function PlayFabGSDK.GSDKUtils.GetGameServerConnectionInfo
struct UGSDKUtils_GetGameServerConnectionInfo_Params
{
public:
	struct FGameServerConnectionInfo             ReturnValue;                                       // 0x0(0x20)(ConstParm, Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PlayFabGSDK.GSDKUtils.GetBuildId
struct UGSDKUtils_GetBuildId_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
