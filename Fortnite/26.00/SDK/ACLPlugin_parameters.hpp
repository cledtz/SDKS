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

// 0x30 (0x30 - 0x0)
// Function ACLPlugin.AnimationCompressionLibraryDatabase.SetVisualFidelity
struct UAnimationCompressionLibraryDatabase_SetVisualFidelity_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     LatentInfo;                                        // 0x8(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UAnimationCompressionLibraryDatabase*  DatabaseAsset;                                     // 0x20(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EACLVisualFidelityChangeResult    Result;                                            // 0x28(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EACLVisualFidelity                VisualFidelity;                                    // 0x29(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BCD[0x6];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function ACLPlugin.AnimationCompressionLibraryDatabase.GetVisualFidelity
struct UAnimationCompressionLibraryDatabase_GetVisualFidelity_Params
{
public:
	class UAnimationCompressionLibraryDatabase*  DatabaseAsset;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EACLVisualFidelity                ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BD2[0x7];                                     // Fixing Size Of Struct
};

}
}


