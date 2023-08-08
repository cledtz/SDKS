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

// 0x20 (0x20 - 0x0)
// Function LootController.FortAthenaMutator_CR_CreativeAllowLootItem.SetItemGameplayTagsNotAllowed
struct UFortAthenaMutator_CR_CreativeAllowLootItem_SetItemGameplayTagsNotAllowed_Params
{
public:
	struct FGameplayTagContainer                 InItemGameplayTagsNotAllowed;                      // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function LootController.FortAthenaMutator_CR_LootChoice.GetLootTierDataTable
struct UFortAthenaMutator_CR_LootChoice_GetLootTierDataTable_Params
{
public:
	class UDataTable*                            ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LootController.FortAthenaMutator_CR_LootChoice.GetLootSelectionString
struct UFortAthenaMutator_CR_LootChoice_GetLootSelectionString_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function LootController.FortAthenaMutator_CR_LootChoice.GetLootPackageTable
struct UFortAthenaMutator_CR_LootChoice_GetLootPackageTable_Params
{
public:
	class UDataTable*                            ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LootController.FortAthenaMutator_CR_LootChoice.GetContextTagsToRemove
struct UFortAthenaMutator_CR_LootChoice_GetContextTagsToRemove_Params
{
public:
	struct FGameplayTagContainer                 ReturnValue;                                       // 0x0(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LootController.FortAthenaMutator_CR_LootChoice.GetContextTagsToAdd
struct UFortAthenaMutator_CR_LootChoice_GetContextTagsToAdd_Params
{
public:
	struct FGameplayTagContainer                 ReturnValue;                                       // 0x0(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function LootController.LootControllerNativeComponent.PrintDebugString
struct ULootControllerNativeComponent_PrintDebugString_Params
{
public:
	class FString                                DebugString;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         LogWarning;                                        // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_45EB[0x7];                                     // Fixing Size Of Struct
};

// 0x1 (0x1 - 0x0)
// Function LootController.LootControllerNativeComponent.IsThrottleEnabled
struct ULootControllerNativeComponent_IsThrottleEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function LootController.LootControllerNativeComponent.IsRemoveLootEnabled
struct ULootControllerNativeComponent_IsRemoveLootEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LootController.LootControllerNativeComponent.AsyncGetActorsOfClass
struct ULootControllerNativeComponent_AsyncGetActorsOfClass_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UActor>                    ActorClass;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// Function LootController.LootControllerNativeComponent.AddToArray
struct ULootControllerNativeComponent_AddToArray_Params
{
public:
	TArray<struct FBuildingContainersFoundEntry> InOutBuildingContainersFoundArray;                 // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        InBuildingContainerFoundIndex;                     // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_45F7[0xC];                                     // Fixing Size After Last Property
	struct FBuildingContainersArrayEntry         InBuildingContainerToAdd;                          // 0x20(0xA0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
