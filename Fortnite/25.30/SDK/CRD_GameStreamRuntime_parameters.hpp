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

// 0x0 (0x0 - 0x0)
// Function CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent.RemoveFromEndGameQueue
struct UCreativeGameStreamDeviceComponent_RemoveFromEndGameQueue_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent.OnMinigameStateChanged
struct UCreativeGameStreamDeviceComponent_OnMinigameStateChanged_Params
{
public:
	class UFortMinigame*                         Minigame;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortMinigameState                NewMinigameState;                                  // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A82[0x7];                                     // Fixing Size Of Struct
};

// 0x1 (0x1 - 0x0)
// Function CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent.IsWithinPublishedPlayspace
struct UCreativeGameStreamDeviceComponent_IsWithinPublishedPlayspace_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent.Init
struct UCreativeGameStreamDeviceComponent_Init_Params
{
public:
	class UFortMinigameLogicComponent*           InMinigameLogicComponent;                          // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// SparseDelegateFunction CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent.CreativeGameStreamDeviceComponentSignature__DelegateSignature
struct UCreativeGameStreamDeviceComponent_CreativeGameStreamDeviceComponentSignature__DelegateSignature_Params
{
public:
	class UCreativeGameStreamDeviceComponent*    CreativeGameStreamDeviceComponent;                 // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent.AddToEndGameQueue
struct UCreativeGameStreamDeviceComponent_AddToEndGameQueue_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function CRD_GameStreamRuntime.CreativeGameStreamDeviceCoordinatorComponent.OnMinigameStateChanged
struct UCreativeGameStreamDeviceCoordinatorComponent_OnMinigameStateChanged_Params
{
public:
	class UFortMinigame*                         InMinigame;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortMinigameState                NewMinigameState;                                  // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A88[0x7];                                     // Fixing Size Of Struct
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
