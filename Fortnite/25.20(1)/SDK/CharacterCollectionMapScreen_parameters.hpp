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

// 0x0 (0x0 - 0x0)
// Function CharacterCollectionMapScreen.CollectionNPCServiceWidget.PopulateEmpty
struct UCollectionNPCServiceWidget_PopulateEmpty_Params
{
public:
};

// 0x50 (0x50 - 0x0)
// Function CharacterCollectionMapScreen.CollectionNPCServiceWidget.PopulateData
struct UCollectionNPCServiceWidget_PopulateData_Params
{
public:
	struct FNPCServiceWidgetData                 WidgetData;                                        // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
