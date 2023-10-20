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

// 0x80 (0x80 - 0x0)
// Function ExtendedBlueprintsUtilities.ExtendedBlueprintsUtilitiesBPLibrary.SpawnActorFromTemplate
struct UExtendedBlueprintsUtilitiesBPLibrary_SpawnActorFromTemplate_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                TemplateActor;                                     // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            SpawnTransform;                                    // 0x10(0x60)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                Owner;                                             // 0x70(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                ReturnValue;                                       // 0x78(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ExtendedBlueprintsUtilities.ExtendedBlueprintsUtilitiesBPLibrary.GetDefaultComponentsByClass
struct UExtendedBlueprintsUtilitiesBPLibrary_GetDefaultComponentsByClass_Params
{
public:
	class UClass*                                ActorClass;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                ComponentClass;                                    // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UActorComponent*>               OutArray;                                          // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ExtendedBlueprintsUtilities.ExtendedBlueprintsUtilitiesBPLibrary.ClassDefaultObject
struct UExtendedBlueprintsUtilitiesBPLibrary_ClassDefaultObject_Params
{
public:
	class UClass*                                ObjectClass;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


