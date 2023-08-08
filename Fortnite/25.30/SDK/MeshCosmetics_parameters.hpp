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

// 0x180 (0x180 - 0x0)
// Function MeshCosmetics.FortCustomizableObjectParameterVariant.ApplyVariants
struct UFortCustomizableObjectParameterVariant_ApplyVariants_Params
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortAthenaLoadout                    Loadout;                                           // 0x8(0x178)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function MeshCosmetics.MeshCosmeticTagInterface.OnPostCustomizationAnimGameplayTags_BP
struct UMeshCosmeticTagInterface_OnPostCustomizationAnimGameplayTags_BP_Params
{
public:
	struct FGameplayTagContainer                 GameplayTags;                                      // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
