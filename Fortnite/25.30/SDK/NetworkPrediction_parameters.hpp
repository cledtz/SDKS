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

// 0x18 (0x18 - 0x0)
// Function NetworkPrediction.NetworkPredictionComponent.ServerReceiveClientInput
struct UNetworkPredictionComponent_ServerReceiveClientInput_Params
{
public:
	struct FServerReplicationRPCParameter        ProxyParameter;                                    // 0x0(0x18)(ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
