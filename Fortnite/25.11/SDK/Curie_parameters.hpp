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

// 0x8 (0x8 - 0x0)
// Function Curie.CurieInterface.OnCurieStateDetached_BP
struct UCurieInterface_OnCurieStateDetached_BP_Params
{
public:
	struct FCurieContainerHandle                 CurieContainerHandle;                              // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          StateTag;                                          // 0x4(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Curie.CurieInterface.OnCurieStateAttached_BP
struct UCurieInterface_OnCurieStateAttached_BP_Params
{
public:
	struct FCurieContainerHandle                 CurieContainerHandle;                              // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          StateTag;                                          // 0x4(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Curie.CurieInterface.OnCurieElementInteractEnded_BP
struct UCurieInterface_OnCurieElementInteractEnded_BP_Params
{
public:
	struct FCurieContainerHandle                 CurieContainerHandle;                              // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ElementTag;                                        // 0x4(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCurieInteractParamsHandle            InteractParamsHandle;                              // 0x8(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Curie.CurieInterface.OnCurieElementInteractBegun_BP
struct UCurieInterface_OnCurieElementInteractBegun_BP_Params
{
public:
	struct FCurieContainerHandle                 CurieContainerHandle;                              // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ElementTag;                                        // 0x4(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCurieInteractParamsHandle            InteractParamsHandle;                              // 0x8(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Curie.CurieInterface.OnCurieElementInteract_BP
struct UCurieInterface_OnCurieElementInteract_BP_Params
{
public:
	struct FCurieContainerHandle                 CurieContainerHandle;                              // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ElementTag;                                        // 0x4(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCurieInteractParamsHandle            InteractParamsHandle;                              // 0x8(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Curie.CurieInterface.OnCurieElementDetached_BP
struct UCurieInterface_OnCurieElementDetached_BP_Params
{
public:
	struct FCurieContainerHandle                 CurieContainerHandle;                              // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ElementTag;                                        // 0x4(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Curie.CurieInterface.OnCurieElementAttached_BP
struct UCurieInterface_OnCurieElementAttached_BP_Params
{
public:
	struct FCurieContainerHandle                 CurieContainerHandle;                              // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ElementTag;                                        // 0x4(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Curie.CurieInterface.OnCurieContainerReparented_BP
struct UCurieInterface_OnCurieContainerReparented_BP_Params
{
public:
	struct FCurieContainerHandle                 CurieContainerHandle;                              // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Curie.CurieInterface.OnCurieContainerReleased_BP
struct UCurieInterface_OnCurieContainerReleased_BP_Params
{
public:
	struct FCurieContainerHandle                 CurieContainerHandle;                              // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Curie.CurieInterface.OnCurieContainerAcquired_BP
struct UCurieInterface_OnCurieContainerAcquired_BP_Params
{
public:
	struct FCurieContainerHandle                 CurieContainerHandle;                              // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Curie.CurieManager.UnbindDelegateForCurieStateDetached
struct UCurieManager_UnbindDelegateForCurieStateDetached_Params
{
public:
	class UObject*                               CurieOwner;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x8(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17CC[0x4];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function Curie.CurieManager.UnbindDelegateForCurieStateAttached
struct UCurieManager_UnbindDelegateForCurieStateAttached_Params
{
public:
	class UObject*                               CurieOwner;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x8(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17CD[0x4];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function Curie.CurieManager.UnbindDelegateForCurieElementInteract
struct UCurieManager_UnbindDelegateForCurieElementInteract_Params
{
public:
	class UObject*                               CurieOwner;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x8(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17CE[0x4];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function Curie.CurieManager.UnbindDelegateForCurieElementEndInteract
struct UCurieManager_UnbindDelegateForCurieElementEndInteract_Params
{
public:
	class UObject*                               CurieOwner;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x8(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17CF[0x4];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function Curie.CurieManager.UnbindDelegateForCurieElementDetached
struct UCurieManager_UnbindDelegateForCurieElementDetached_Params
{
public:
	class UObject*                               CurieOwner;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x8(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17D0[0x4];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function Curie.CurieManager.UnbindDelegateForCurieElementBeginInteract
struct UCurieManager_UnbindDelegateForCurieElementBeginInteract_Params
{
public:
	class UObject*                               CurieOwner;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x8(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17D1[0x4];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function Curie.CurieManager.UnbindDelegateForCurieElementAttached
struct UCurieManager_UnbindDelegateForCurieElementAttached_Params
{
public:
	class UObject*                               CurieOwner;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x8(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17D2[0x4];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function Curie.CurieManager.HandleContainerOwnerDestroyed
struct UCurieManager_HandleContainerOwnerDestroyed_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Curie.CurieManager.BindDelegateForCurieStateDetached
struct UCurieManager_BindDelegateForCurieStateDetached_Params
{
public:
	class UObject*                               CurieOwner;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x8(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17D3[0x4];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function Curie.CurieManager.BindDelegateForCurieStateAttached
struct UCurieManager_BindDelegateForCurieStateAttached_Params
{
public:
	class UObject*                               CurieOwner;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x8(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17D4[0x4];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function Curie.CurieManager.BindDelegateForCurieElementInteract
struct UCurieManager_BindDelegateForCurieElementInteract_Params
{
public:
	class UObject*                               CurieOwner;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x8(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17D5[0x4];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function Curie.CurieManager.BindDelegateForCurieElementEndInteract
struct UCurieManager_BindDelegateForCurieElementEndInteract_Params
{
public:
	class UObject*                               CurieOwner;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x8(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17D6[0x4];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function Curie.CurieManager.BindDelegateForCurieElementDetached
struct UCurieManager_BindDelegateForCurieElementDetached_Params
{
public:
	class UObject*                               CurieOwner;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x8(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17D7[0x4];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function Curie.CurieManager.BindDelegateForCurieElementBeginInteract
struct UCurieManager_BindDelegateForCurieElementBeginInteract_Params
{
public:
	class UObject*                               CurieOwner;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x8(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17D8[0x4];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function Curie.CurieManager.BindDelegateForCurieElementAttached
struct UCurieManager_BindDelegateForCurieElementAttached_Params
{
public:
	class UObject*                               CurieOwner;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x8(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17D9[0x4];                                     // Fixing Size Of Struct..
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
