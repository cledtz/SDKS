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
// Function CraftingRuntime.CraftingObjectBGA.HandleInteractionRangeEndOverlap
struct UCraftingObjectBGA_HandleInteractionRangeEndOverlap_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComponent;                               // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                OtherActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3833[0x4];                                     // Fixing Size Of Struct
};

// 0x100 (0x100 - 0x0)
// Function CraftingRuntime.CraftingObjectBGA.HandleInteractionRangeBeginOverlap
struct UCraftingObjectBGA_HandleInteractionRangeBeginOverlap_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComponent;                               // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                OtherActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFromSweep;                                        // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_383A[0x3];                                     // Fixing Size After Last Property
	struct FHitResult                            SweepResult;                                       // 0x20(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CraftingRuntime.CraftingCheatManager.ToggleFreeCrafting
struct UCraftingCheatManager_ToggleFreeCrafting_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function CraftingRuntime.CraftingCheatManager.StartSelfCrafting
struct UCraftingCheatManager_StartSelfCrafting_Params
{
public:
	class FName                                  FormulaName;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CraftingRuntime.CraftingObjectComponent.OnRep_CraftingObjectRepStateData
struct UCraftingObjectComponent_OnRep_CraftingObjectRepStateData_Params
{
public:
	TArray<struct FCraftingObjectRepStateData>   OldValue;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function CraftingRuntime.CraftingObjectComponent.HandlePickupCraftingItemPickedUp
struct UCraftingObjectComponent_HandlePickupCraftingItemPickedUp_Params
{
public:
	class UFortPickup*                           PickUp;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPawn*                             InteractingPawn;                                   // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortWorldItemDefinition*              WorldItemDefinition;                               // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PickupLocation;                                    // 0x18(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction CraftingRuntime.CraftingObjectComponent.CraftingObjectOnFormulaCraftableChanged__DelegateSignature
struct UCraftingObjectComponent_CraftingObjectOnFormulaCraftableChanged__DelegateSignature_Params
{
public:
	class FName                                  FormulaRowName;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsCraftable;                                      // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3858[0x3];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerStartCrafting
struct UFortControllerComponent_CraftingNetworkEvents_ServerStartCrafting_Params
{
public:
	class UActor*                                CraftingObject;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CraftingFormulaName;                               // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumberToCraft;                                     // 0xC(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCraftingMultiKey                     Key;                                               // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerResumeCrafting
struct UFortControllerComponent_CraftingNetworkEvents_ServerResumeCrafting_Params
{
public:
	class UActor*                                CraftingObject;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCraftingMultiKey                     Key;                                               // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerReportCraftingSuccess
struct UFortControllerComponent_CraftingNetworkEvents_ServerReportCraftingSuccess_Params
{
public:
	class UActor*                                CraftingObject;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCraftingMultiKey                     Key;                                               // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerPickupItemAndStartCrafting
struct UFortControllerComponent_CraftingNetworkEvents_ServerPickupItemAndStartCrafting_Params
{
public:
	class UActor*                                CraftingObject;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPickup*                           PickUp;                                            // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CraftingFormulaName;                               // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_389A[0x4];                                     // Fixing Size After Last Property
	struct FCraftingMultiKey                     Key;                                               // 0x18(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerPauseCrafting
struct UFortControllerComponent_CraftingNetworkEvents_ServerPauseCrafting_Params
{
public:
	class UActor*                                CraftingObject;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDecayPausedTime;                                  // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38A4[0x7];                                     // Fixing Size After Last Property
	struct FCraftingMultiKey                     Key;                                               // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerEjectItems
struct UFortControllerComponent_CraftingNetworkEvents_ServerEjectItems_Params
{
public:
	class UActor*                                CraftingObject;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerClaimCraftingResults
struct UFortControllerComponent_CraftingNetworkEvents_ServerClaimCraftingResults_Params
{
public:
	class UActor*                                CraftingObject;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCraftingMultiKey                     Key;                                               // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerCancelCrafting
struct UFortControllerComponent_CraftingNetworkEvents_ServerCancelCrafting_Params
{
public:
	class UActor*                                CraftingObject;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCraftingMultiKey                     Key;                                               // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.NotifyCraftingSuccess
struct UFortControllerComponent_CraftingNetworkEvents_NotifyCraftingSuccess_Params
{
public:
	class UActor*                                CraftingObject;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FormulaRowName;                                    // 0x8(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38AB[0x4];                                     // Fixing Size After Last Property
	struct FCraftingMultiKey                     Key;                                               // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ClientNotifyCraftingSuccess
struct UFortControllerComponent_CraftingNetworkEvents_ClientNotifyCraftingSuccess_Params
{
public:
	class UActor*                                CraftingObject;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FormulaRowName;                                    // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38AF[0x4];                                     // Fixing Size After Last Property
	struct FCraftingMultiKey                     Key;                                               // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ClientNotifyCraftingFailed
struct UFortControllerComponent_CraftingNetworkEvents_ClientNotifyCraftingFailed_Params
{
public:
	class UActor*                                CraftingObject;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 FailedReason;                                      // 0x8(0x20)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FCraftingMultiKey                     Key;                                               // 0x28(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CraftingRuntime.FortGameStateComponent_Crafting.OnRep_CraftingResultsList
struct UFortGameStateComponent_Crafting_OnRep_CraftingResultsList_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function CraftingRuntime.FortGameStateComponent_Crafting.OnPlaylistDataReady
struct UFortGameStateComponent_Crafting_OnPlaylistDataReady_Params
{
public:
	class UFortGameStateAthena*                  GameState;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPlaylist*                         Playlist;                                          // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 PlaylistContextTags;                               // 0x10(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function CraftingRuntime.FortContextualTutorial_CraftingComplete.OnCraftingSuccess
struct UFortContextualTutorial_CraftingComplete_OnCraftingSuccess_Params
{
public:
	struct FCraftingObjectSuccessEvent           Event;                                             // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CraftingRuntime.FortContextualTutorial_CraftingReady.HandleFormulaCraftableChanged
struct UFortContextualTutorial_CraftingReady_HandleFormulaCraftableChanged_Params
{
public:
	class FName                                  FormulaRowName;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsCraftable;                                      // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38D4[0x3];                                     // Fixing Size Of Struct
};

// 0x4 (0x4 - 0x0)
// Function CraftingRuntime.FortContextualTutorial_CraftingTabOpen.HandleInventoryTabChanged
struct UFortContextualTutorial_CraftingTabOpen_HandleInventoryTabChanged_Params
{
public:
	class FName                                  InventoryTabNameId;                                // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CraftingRuntime.FortContextualTutorial_CraftingTabOpen.HandleFormulaCraftableChanged
struct UFortContextualTutorial_CraftingTabOpen_HandleFormulaCraftableChanged_Params
{
public:
	class FName                                  FormulaRowName;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsCraftable;                                      // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38DD[0x3];                                     // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function CraftingRuntime.CraftingLibrary.StartCrafting
struct UCraftingLibrary_StartCrafting_Params
{
public:
	class UFortPlayerController*                 Instigator;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                CraftingObject;                                    // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CraftingFormulaName;                               // 0x10(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumberToCraft;                                     // 0x14(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCraftingMultiKey                     Key;                                               // 0x18(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CraftingRuntime.CraftingLibrary.ResumeCrafting
struct UCraftingLibrary_ResumeCrafting_Params
{
public:
	class UFortPlayerController*                 Instigator;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                CraftingObject;                                    // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCraftingMultiKey                     Key;                                               // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CraftingRuntime.CraftingLibrary.ReportCraftingSuccess
struct UCraftingLibrary_ReportCraftingSuccess_Params
{
public:
	class UFortPlayerController*                 Instigator;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                CraftingObject;                                    // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCraftingMultiKey                     Key;                                               // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function CraftingRuntime.CraftingLibrary.PickupItemAndStartCrafting
struct UCraftingLibrary_PickupItemAndStartCrafting_Params
{
public:
	class UFortPlayerController*                 Instigator;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                CraftingObject;                                    // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPickup*                           PickUp;                                            // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CraftingFormulaName;                               // 0x18(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38FD[0x4];                                     // Fixing Size After Last Property
	struct FCraftingMultiKey                     Key;                                               // 0x20(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function CraftingRuntime.CraftingLibrary.PauseCrafting
struct UCraftingLibrary_PauseCrafting_Params
{
public:
	class UFortPlayerController*                 Instigator;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                CraftingObject;                                    // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDecayPausedTime;                                  // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3905[0x7];                                     // Fixing Size After Last Property
	struct FCraftingMultiKey                     Key;                                               // 0x18(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function CraftingRuntime.CraftingLibrary.IsValidIngredient
struct UCraftingLibrary_IsValidIngredient_Params
{
public:
	class UFortPlayerController*                 FortPC;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                CraftingObject;                                    // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortItemDefinition*                   ItemDef;                                           // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_390F[0x7];                                     // Fixing Size Of Struct
};

// 0x1B0 (0x1B0 - 0x0)
// Function CraftingRuntime.CraftingLibrary.GiveItemToCraftingObject
struct UCraftingLibrary_GiveItemToCraftingObject_Params
{
public:
	class UFortPlayerController*                 Instigator;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                CraftingObject;                                    // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemEntry                        ItemEntryToGrant;                                  // 0x10(0x1A0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function CraftingRuntime.CraftingLibrary.GetValidIngredientsInInventory
struct UCraftingLibrary_GetValidIngredientsInInventory_Params
{
public:
	class UFortPlayerController*                 FortPC;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                CraftingObject;                                    // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UFortWorldItem*>                OutIngredients;                                    // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function CraftingRuntime.CraftingLibrary.GetUIDataForCraftingIngredientTags
struct UCraftingLibrary_GetUIDataForCraftingIngredientTags_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 IngredientTags;                                    // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UFortItemDefinition>> OutItemDefs;                                       // 0x28(0x10)(Parm, OutParm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UObject>>        OutIcons;                                          // 0x38(0x10)(Parm, OutParm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CraftingRuntime.CraftingLibrary.GetTimeToCraftRecipe
struct UCraftingLibrary_GetTimeToCraftRecipe_Params
{
public:
	class UActor*                                CraftingObject;                                    // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CraftingFormulaName;                               // 0x8(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CraftingRuntime.CraftingLibrary.GetLastCraftedItemFormulaName
struct UCraftingLibrary_GetLastCraftedItemFormulaName_Params
{
public:
	class UActor*                                CraftingObject;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3934[0x4];                                     // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function CraftingRuntime.CraftingLibrary.GetKnownCraftingFormulas
struct UCraftingLibrary_GetKnownCraftingFormulas_Params
{
public:
	class UFortPlayerController*                 FortPC;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                CraftingObject;                                    // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          OutFormulas;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CraftingRuntime.CraftingLibrary.GetIngredientsInCraftingObject
struct UCraftingLibrary_GetIngredientsInCraftingObject_Params
{
public:
	class UActor*                                CraftingObject;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UFortWorldItem*>                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function CraftingRuntime.CraftingLibrary.GetCraftingResultsForRowName
struct UCraftingLibrary_GetCraftingResultsForRowName_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CraftingFormulaRow;                                // 0x8(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3950[0x4];                                     // Fixing Size After Last Property
	TArray<struct FItemAndCount>                 OutResults;                                        // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NumToCraft;                                        // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3951[0x4];                                     // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// Function CraftingRuntime.CraftingLibrary.GetCraftingObjectTags
struct UCraftingLibrary_GetCraftingObjectTags_Params
{
public:
	class UActor*                                CraftingObject;                                    // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 ReturnValue;                                       // 0x8(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CraftingRuntime.CraftingLibrary.GetCraftingObjectPausedTime
struct UCraftingLibrary_GetCraftingObjectPausedTime_Params
{
public:
	class UActor*                                CraftingObject;                                    // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCraftingMultiKey                     Key;                                               // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3961[0x4];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function CraftingRuntime.CraftingLibrary.GetCraftingObjectCurrentCraftingStateTimeLeft
struct UCraftingLibrary_GetCraftingObjectCurrentCraftingStateTimeLeft_Params
{
public:
	class UActor*                                CraftingObject;                                    // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCraftingMultiKey                     Key;                                               // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3968[0x4];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function CraftingRuntime.CraftingLibrary.GetCraftingObjectCurrentCraftingStateStartTime
struct UCraftingLibrary_GetCraftingObjectCurrentCraftingStateStartTime_Params
{
public:
	class UActor*                                CraftingObject;                                    // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCraftingMultiKey                     Key;                                               // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3977[0x4];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function CraftingRuntime.CraftingLibrary.GetCraftingObjectCurrentCraftingStateEndTime
struct UCraftingLibrary_GetCraftingObjectCurrentCraftingStateEndTime_Params
{
public:
	class UActor*                                CraftingObject;                                    // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCraftingMultiKey                     Key;                                               // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_397F[0x4];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function CraftingRuntime.CraftingLibrary.GetCraftingObjectCraftingState
struct UCraftingLibrary_GetCraftingObjectCraftingState_Params
{
public:
	class UActor*                                CraftingObject;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCraftingMultiKey                     Key;                                               // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECraftingObjectState              ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3986[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function CraftingRuntime.CraftingLibrary.GetCraftingObjectComponent
struct UCraftingLibrary_GetCraftingObjectComponent_Params
{
public:
	class UActor*                                CraftingObject;                                    // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCraftingObjectComponent*              ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function CraftingRuntime.CraftingLibrary.GetCraftingIngredients_TempItems
struct UCraftingLibrary_GetCraftingIngredients_TempItems_Params
{
public:
	class UActor*                                CraftingObject;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCraftingMultiKey                     Key;                                               // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UFortWorldItem*>                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CraftingRuntime.CraftingLibrary.GetCraftingFormulaNameBeingCrafted
struct UCraftingLibrary_GetCraftingFormulaNameBeingCrafted_Params
{
public:
	class UActor*                                CraftingObject;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCraftingMultiKey                     Key;                                               // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3994[0x4];                                     // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// Function CraftingRuntime.CraftingLibrary.GetCraftingFormulaIngredientRequirements
struct UCraftingLibrary_GetCraftingFormulaIngredientRequirements_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CraftingFormulaRow;                                // 0x8(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_399A[0x4];                                     // Fixing Size After Last Property
	TArray<struct FCraftingIngredientRequirement> OutIngredientRequirements;                         // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_399B[0x7];                                     // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function CraftingRuntime.CraftingLibrary.GetCraftedResults_TempItems
struct UCraftingLibrary_GetCraftedResults_TempItems_Params
{
public:
	class UActor*                                CraftingObject;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCraftingMultiKey                     Key;                                               // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UFortWorldItem*>                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function CraftingRuntime.CraftingLibrary.GetAllValidIngredients
struct UCraftingLibrary_GetAllValidIngredients_Params
{
public:
	class UFortPlayerController*                 FortPC;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                CraftingObject;                                    // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTagContainer>         OutIngredients;                                    // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function CraftingRuntime.CraftingLibrary.GetAllCraftingFormulas
struct UCraftingLibrary_GetAllCraftingFormulas_Params
{
public:
	class UFortPlayerController*                 FortPC;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                CraftingObject;                                    // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          OutFormulas;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function CraftingRuntime.CraftingLibrary.GetAllCraftableFormulas
struct UCraftingLibrary_GetAllCraftableFormulas_Params
{
public:
	class UFortPlayerController*                 FortPC;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                CraftingObject;                                    // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          OutFormulas;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CraftingRuntime.CraftingLibrary.EjectItems
struct UCraftingLibrary_EjectItems_Params
{
public:
	class UFortPlayerController*                 Instigator;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                CraftingObject;                                    // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CraftingRuntime.CraftingLibrary.ClaimCraftingResults
struct UCraftingLibrary_ClaimCraftingResults_Params
{
public:
	class UFortPlayerController*                 Instigator;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                CraftingObject;                                    // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCraftingMultiKey                     Key;                                               // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function CraftingRuntime.CraftingLibrary.CanCraftFormulaWithAdditionalItems
struct UCraftingLibrary_CanCraftFormulaWithAdditionalItems_Params
{
public:
	class UFortPlayerController*                 FortPC;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                CraftingObject;                                    // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CraftingFormulaRow;                                // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39CC[0x4];                                     // Fixing Size After Last Property
	TArray<struct FItemAndCount>                 AdditionalItems;                                   // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FCraftingIngredientQueryState> OutIngredientStates;                               // 0x28(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NumberToCraft;                                     // 0x38(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x3C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39CF[0x3];                                     // Fixing Size Of Struct
};

// 0x30 (0x30 - 0x0)
// Function CraftingRuntime.CraftingLibrary.CanCraftFormula
struct UCraftingLibrary_CanCraftFormula_Params
{
public:
	class UFortPlayerController*                 FortPC;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                CraftingObject;                                    // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CraftingFormulaRow;                                // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39D6[0x4];                                     // Fixing Size After Last Property
	TArray<struct FCraftingIngredientQueryState> OutIngredientStates;                               // 0x18(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NumberToCraft;                                     // 0x28(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39DA[0x3];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function CraftingRuntime.CraftingLibrary.CancelCrafting
struct UCraftingLibrary_CancelCrafting_Params
{
public:
	class UFortPlayerController*                 Instigator;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                CraftingObject;                                    // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCraftingMultiKey                     Key;                                               // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
