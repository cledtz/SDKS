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

// 0x1 (0x1 - 0x0)
// Function FNE_VolumeRuntime.FNE_VolumeComponent.SetEnableOverlap
struct UFNE_VolumeComponent_SetEnableOverlap_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function FNE_VolumeRuntime.FNE_VolumeComponent.HandlePlayspaceUserRemoved
struct UFNE_VolumeComponent_HandlePlayspaceUserRemoved_Params
{
public:
	struct FPlayspaceUser                        RemovedUser;                                       // 0x0(0x58)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function FNE_VolumeRuntime.FNE_VolumeComponent.HandlePlayspaceUserAdded
struct UFNE_VolumeComponent_HandlePlayspaceUserAdded_Params
{
public:
	struct FPlayspaceUser                        AddedUser;                                         // 0x0(0x58)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FNE_VolumeRuntime.FNE_VolumeComponent.HandleNotifyPlayerStateEndOverlap
struct UFNE_VolumeComponent_HandleNotifyPlayerStateEndOverlap_Params
{
public:
	class UPlayerState*                          TouchingPlayerState;                               // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayVolume*                       Volume;                                            // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FNE_VolumeRuntime.FNE_VolumeComponent.HandleNotifyPlayerStateBeginOverlap
struct UFNE_VolumeComponent_HandleNotifyPlayerStateBeginOverlap_Params
{
public:
	class UPlayerState*                          TouchingPlayerState;                               // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayVolume*                       Volume;                                            // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FNE_VolumeRuntime.FNE_VolumeComponent.GetSpawnedVolume
struct UFNE_VolumeComponent_GetSpawnedVolume_Params
{
public:
	class UFNE_Volume*                           ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FNE_VolumeRuntime.FNE_VolumeComponent.GetEnableOverlap
struct UFNE_VolumeComponent_GetEnableOverlap_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FNE_VolumeRuntime.FNE_VolumeComponent.GetAllPlayerStates
struct UFNE_VolumeComponent_GetAllPlayerStates_Params
{
public:
	TArray<class UPlayerState*>                  ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

}
}


