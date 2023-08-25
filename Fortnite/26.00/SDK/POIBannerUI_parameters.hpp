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

// 0x20 (0x20 - 0x0)
// Function POIBannerUI.POIBannerToastSocialAvatar.SetSocialAvatarTexture
struct UPOIBannerToastSocialAvatar_SetSocialAvatarTexture_Params
{
public:
	TSoftObjectPtr<class UTexture2D>             AvatarTexture;                                     // 0x0(0x20)(Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function POIBannerUI.POIBannerToastSocialAvatar.SetSocialAvatar
struct UPOIBannerToastSocialAvatar_SetSocialAvatar_Params
{
public:
	class UFortPlayerState*                      PlayerState;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function POIBannerUI.POIBannerToastWidgetBase.OnStompFailed
struct UPOIBannerToastWidgetBase_OnStompFailed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function POIBannerUI.POIBannerToastWidgetBase.OnStompedByOtherWidget
struct UPOIBannerToastWidgetBase_OnStompedByOtherWidget_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function POIBannerUI.POIBannerToastWidgetBase.K2_OnBecomeInactive
struct UPOIBannerToastWidgetBase_K2_OnBecomeInactive_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function POIBannerUI.POIBannerToastWidgetBase.K2_OnBecomeActive
struct UPOIBannerToastWidgetBase_K2_OnBecomeActive_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function POIBannerUI.POIBannerToastWidgetBase.GetLocationTextFromTag
struct UPOIBannerToastWidgetBase_GetLocationTextFromTag_Params
{
public:
	struct FGameplayTag                          LocationTag;                                       // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2EBA[0x4];                                     // Fixing Size After Last Property 
	class FText                                  ReturnValue;                                       // 0x8(0x18)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

}
}


