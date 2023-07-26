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
// Function VKDownloadOnDemandGameplay.DownloadOnDemandComponent.HandleMnemonicsFromValkyriePaletteProviderReceived
struct UDownloadOnDemandComponent_HandleMnemonicsFromValkyriePaletteProviderReceived_Params
{
public:
	TArray<class FString>                        Mnemonics;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
