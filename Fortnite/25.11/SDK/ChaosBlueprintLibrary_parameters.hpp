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

// 0x188 (0x188 - 0x0)
// Function ChaosBlueprintLibrary.ChaosBlueprintLibraryBPLibrary.ClothControllerWriteToSimulation
struct UChaosBlueprintLibraryBPLibrary_ClothControllerWriteToSimulation_Params
{
public:
	class UCustomCharacterPartAnimInstance*      CharacterPartAnimInstance;                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ClothingAssetName;                                 // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FClothCoreSettings                    ClothCoreSettings;                                 // 0x18(0x80)(Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FClothParameters                      ClothSettings;                                     // 0x98(0x60)(Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               WindVelocity;                                      // 0xF8(0x18)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FClothParameters                      OutWorldSpaceClothSettings;                        // 0x110(0x60)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               OutWorldSpaceWindVelocity;                         // 0x170(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
