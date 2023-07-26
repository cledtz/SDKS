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
// Function WarEffortRuntime.FundingManager.BroadcaseUpdatedFundsMessage
struct AFundingManager_BroadcaseUpdatedFundsMessage_Params
{
public:
	struct FItemFundingUpdatedFundingData        Payload;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
