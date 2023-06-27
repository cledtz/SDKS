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

// 0x10 (0x10 - 0x0)
// Function KeysAndLocksUI.KeyPlayerInfoWidget.OnKeyStatusActivated
struct UKeyPlayerInfoWidget_OnKeyStatusActivated_Params
{
public:
	class AFortPlayerStateAthena*                InPlayerState;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bActivated;                                        // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_809E[0x7];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function KeysAndLocksUI.KeyPlayerInfoWidget.HandleGameplayTagEvent
struct UKeyPlayerInfoWidget_HandleGameplayTagEvent_Params
{
public:
	struct FGameplayTag                          UpdatedTag;                                        // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TagCount;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
