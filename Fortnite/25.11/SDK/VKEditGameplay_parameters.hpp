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

// 0x30 (0x30 - 0x0)
// Function VKEditGameplay.VKEditPlayspace.OnClientActivatedContent
struct AVKEditPlayspace_OnClientActivatedContent_Params
{
public:
	struct FUniqueNetIdRepl                      ClientNetId;                                       // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function VKEditGameplay.PlayspaceComponent_EditConnectionManager.OnRep_VkEditStatus
struct UPlayspaceComponent_EditConnectionManager_OnRep_VkEditStatus_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VKEditGameplay.PlayspaceComponent_EditConnectionManager.OnRep_EditConnections
struct UPlayspaceComponent_EditConnectionManager_OnRep_EditConnections_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
