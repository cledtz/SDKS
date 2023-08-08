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

// 0x2 (0x2 - 0x0)
// Function CreativeEditCameraModeRuntime.FortCreativeEditCameraController.ServerSetImmersiveEdit
struct UFortCreativeEditCameraController_ServerSetImmersiveEdit_Params
{
public:
	bool                                         bWantsToImmersiveEdit;                             // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsCreativeEditModeEnabled;                        // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CreativeEditCameraModeRuntime.FortCreativeEditCameraController.OnWantsToImmersiveEditChanged
struct UFortCreativeEditCameraController_OnWantsToImmersiveEditChanged_Params
{
public:
	class UFortCreativeOption*                   CreativeOption;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        IndexValue;                                        // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4331[0x7];                                     // Fixing Size Of Struct
};

// 0x1 (0x1 - 0x0)
// Function CreativeEditCameraModeRuntime.FortCreativeEditCameraController.OnCreativeEditModeChanged
struct UFortCreativeEditCameraController_OnCreativeEditModeChanged_Params
{
public:
	bool                                         bIsCreativeEditModeEnabled;                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CreativeEditCameraModeRuntime.FortCreativeEditCameraController.HandleWeaponEquipped
struct UFortCreativeEditCameraController_HandleWeaponEquipped_Params
{
public:
	class UFortWeapon*                           NewWeapon;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortWeapon*                           PrevWeapon;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
