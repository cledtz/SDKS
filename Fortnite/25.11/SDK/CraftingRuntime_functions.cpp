#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function CraftingRuntime.CraftingObjectBGA.HandleInteractionRangeEndOverlap
// (Final, Native, Private)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACraftingObjectBGA::HandleInteractionRangeEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static auto Func = Class->GetFunction("CraftingObjectBGA", "HandleInteractionRangeEndOverlap");

	Params::ACraftingObjectBGA_HandleInteractionRangeEndOverlap_Params Parms;

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CraftingRuntime.CraftingObjectBGA.HandleInteractionRangeBeginOverlap
// (Final, Native, Private, HasOutParams)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFromSweep                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  SweepResult                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void ACraftingObjectBGA::HandleInteractionRangeBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static auto Func = Class->GetFunction("CraftingObjectBGA", "HandleInteractionRangeBeginOverlap");

	Params::ACraftingObjectBGA_HandleInteractionRangeBeginOverlap_Params Parms;

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CraftingRuntime.CraftingCheatManager.ToggleFreeCrafting
// (Final, Exec, Native, Public)
// Parameters:

void UCraftingCheatManager::ToggleFreeCrafting()
{
	static auto Func = Class->GetFunction("CraftingCheatManager", "ToggleFreeCrafting");

	Params::UCraftingCheatManager_ToggleFreeCrafting_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CraftingRuntime.CraftingCheatManager.StartSelfCrafting
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// class FName                        FormulaName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCraftingCheatManager::StartSelfCrafting(class FName FormulaName)
{
	static auto Func = Class->GetFunction("CraftingCheatManager", "StartSelfCrafting");

	Params::UCraftingCheatManager_StartSelfCrafting_Params Parms;

	Parms.FormulaName = FormulaName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CraftingRuntime.CraftingObjectComponent.OnRep_CraftingObjectRepStateData
// (Final, Native, Private)
// Parameters:

void UCraftingObjectComponent::OnRep_CraftingObjectRepStateData()
{
	static auto Func = Class->GetFunction("CraftingObjectComponent", "OnRep_CraftingObjectRepStateData");

	Params::UCraftingObjectComponent_OnRep_CraftingObjectRepStateData_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CraftingRuntime.CraftingObjectComponent.HandlePickupCraftingItemPickedUp
// (Final, Native, Private, HasDefaults)
// Parameters:
// class AFortPickup*                 PickUp                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPawn*                   InteractingPawn                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortWorldItemDefinition*    WorldItemDefinition                                              (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     PickupLocation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCraftingObjectComponent::HandlePickupCraftingItemPickedUp(class AFortPickup* PickUp, class AFortPawn* InteractingPawn, class UFortWorldItemDefinition* WorldItemDefinition, const struct FVector& PickupLocation)
{
	static auto Func = Class->GetFunction("CraftingObjectComponent", "HandlePickupCraftingItemPickedUp");

	Params::UCraftingObjectComponent_HandlePickupCraftingItemPickedUp_Params Parms;

	Parms.PickUp = PickUp;
	Parms.InteractingPawn = InteractingPawn;
	Parms.WorldItemDefinition = WorldItemDefinition;
	Parms.PickupLocation = PickupLocation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction CraftingRuntime.CraftingObjectComponent.CraftingObjectStateChangedWithCrafter__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class AFortPlayerController*       Instigator                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      CraftingObject                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ECraftingObjectState    CraftingState                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CraftingStateStartTime                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CraftingStateDuration                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCraftingObjectComponent::CraftingObjectStateChangedWithCrafter__DelegateSignature(class AFortPlayerController* Instigator, class AActor* CraftingObject, enum class ECraftingObjectState CraftingState, float CraftingStateStartTime, float CraftingStateDuration)
{
	static auto Func = Class->GetFunction("CraftingObjectComponent", "CraftingObjectStateChangedWithCrafter__DelegateSignature");

	Params::UCraftingObjectComponent_CraftingObjectStateChangedWithCrafter__DelegateSignature_Params Parms;

	Parms.Instigator = Instigator;
	Parms.CraftingObject = CraftingObject;
	Parms.CraftingState = CraftingState;
	Parms.CraftingStateStartTime = CraftingStateStartTime;
	Parms.CraftingStateDuration = CraftingStateDuration;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction CraftingRuntime.CraftingObjectComponent.CraftingObjectStateChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// enum class ECraftingObjectState    CraftingState                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CraftingStateStartTime                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CraftingStateDuration                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCraftingObjectComponent::CraftingObjectStateChanged__DelegateSignature(enum class ECraftingObjectState CraftingState, float CraftingStateStartTime, float CraftingStateDuration)
{
	static auto Func = Class->GetFunction("CraftingObjectComponent", "CraftingObjectStateChanged__DelegateSignature");

	Params::UCraftingObjectComponent_CraftingObjectStateChanged__DelegateSignature_Params Parms;

	Parms.CraftingState = CraftingState;
	Parms.CraftingStateStartTime = CraftingStateStartTime;
	Parms.CraftingStateDuration = CraftingStateDuration;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction CraftingRuntime.CraftingObjectComponent.CraftingObjectOnFormulaCraftableChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FName                        FormulaRowName                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsCraftable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCraftingObjectComponent::CraftingObjectOnFormulaCraftableChanged__DelegateSignature(class FName& FormulaRowName, bool bIsCraftable)
{
	static auto Func = Class->GetFunction("CraftingObjectComponent", "CraftingObjectOnFormulaCraftableChanged__DelegateSignature");

	Params::UCraftingObjectComponent_CraftingObjectOnFormulaCraftableChanged__DelegateSignature_Params Parms;

	Parms.FormulaRowName = FormulaRowName;
	Parms.bIsCraftable = bIsCraftable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerStartCrafting
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// class AActor*                      CraftingObject                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        CraftingFormulaName                                              (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumberToCraft                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_CraftingNetworkEvents::ServerStartCrafting(class AActor* CraftingObject, class FName& CraftingFormulaName, int32 NumberToCraft)
{
	static auto Func = Class->GetFunction("FortControllerComponent_CraftingNetworkEvents", "ServerStartCrafting");

	Params::UFortControllerComponent_CraftingNetworkEvents_ServerStartCrafting_Params Parms;

	Parms.CraftingObject = CraftingObject;
	Parms.CraftingFormulaName = CraftingFormulaName;
	Parms.NumberToCraft = NumberToCraft;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerResumeCrafting
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// class AActor*                      CraftingObject                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_CraftingNetworkEvents::ServerResumeCrafting(class AActor* CraftingObject)
{
	static auto Func = Class->GetFunction("FortControllerComponent_CraftingNetworkEvents", "ServerResumeCrafting");

	Params::UFortControllerComponent_CraftingNetworkEvents_ServerResumeCrafting_Params Parms;

	Parms.CraftingObject = CraftingObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerReportCraftingSuccess
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// class AActor*                      CraftingObject                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_CraftingNetworkEvents::ServerReportCraftingSuccess(class AActor* CraftingObject)
{
	static auto Func = Class->GetFunction("FortControllerComponent_CraftingNetworkEvents", "ServerReportCraftingSuccess");

	Params::UFortControllerComponent_CraftingNetworkEvents_ServerReportCraftingSuccess_Params Parms;

	Parms.CraftingObject = CraftingObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerPickupItemAndStartCrafting
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// class AActor*                      CraftingObject                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPickup*                 PickUp                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        CraftingFormulaName                                              (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_CraftingNetworkEvents::ServerPickupItemAndStartCrafting(class AActor* CraftingObject, class AFortPickup* PickUp, class FName& CraftingFormulaName)
{
	static auto Func = Class->GetFunction("FortControllerComponent_CraftingNetworkEvents", "ServerPickupItemAndStartCrafting");

	Params::UFortControllerComponent_CraftingNetworkEvents_ServerPickupItemAndStartCrafting_Params Parms;

	Parms.CraftingObject = CraftingObject;
	Parms.PickUp = PickUp;
	Parms.CraftingFormulaName = CraftingFormulaName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerPauseCrafting
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// class AActor*                      CraftingObject                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDecayPausedTime                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_CraftingNetworkEvents::ServerPauseCrafting(class AActor* CraftingObject, bool bDecayPausedTime)
{
	static auto Func = Class->GetFunction("FortControllerComponent_CraftingNetworkEvents", "ServerPauseCrafting");

	Params::UFortControllerComponent_CraftingNetworkEvents_ServerPauseCrafting_Params Parms;

	Parms.CraftingObject = CraftingObject;
	Parms.bDecayPausedTime = bDecayPausedTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerEjectItems
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// class AActor*                      CraftingObject                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_CraftingNetworkEvents::ServerEjectItems(class AActor* CraftingObject)
{
	static auto Func = Class->GetFunction("FortControllerComponent_CraftingNetworkEvents", "ServerEjectItems");

	Params::UFortControllerComponent_CraftingNetworkEvents_ServerEjectItems_Params Parms;

	Parms.CraftingObject = CraftingObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerClaimCraftingResults
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// class AActor*                      CraftingObject                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_CraftingNetworkEvents::ServerClaimCraftingResults(class AActor* CraftingObject)
{
	static auto Func = Class->GetFunction("FortControllerComponent_CraftingNetworkEvents", "ServerClaimCraftingResults");

	Params::UFortControllerComponent_CraftingNetworkEvents_ServerClaimCraftingResults_Params Parms;

	Parms.CraftingObject = CraftingObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerCancelCrafting
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// class AActor*                      CraftingObject                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_CraftingNetworkEvents::ServerCancelCrafting(class AActor* CraftingObject)
{
	static auto Func = Class->GetFunction("FortControllerComponent_CraftingNetworkEvents", "ServerCancelCrafting");

	Params::UFortControllerComponent_CraftingNetworkEvents_ServerCancelCrafting_Params Parms;

	Parms.CraftingObject = CraftingObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.NotifyCraftingSuccess
// (Final, Native, Public, HasOutParams)
// Parameters:
// class AActor*                      CraftingObject                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        FormulaRowName                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_CraftingNetworkEvents::NotifyCraftingSuccess(class AActor* CraftingObject, class FName& FormulaRowName)
{
	static auto Func = Class->GetFunction("FortControllerComponent_CraftingNetworkEvents", "NotifyCraftingSuccess");

	Params::UFortControllerComponent_CraftingNetworkEvents_NotifyCraftingSuccess_Params Parms;

	Parms.CraftingObject = CraftingObject;
	Parms.FormulaRowName = FormulaRowName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ClientNotifyCraftingSuccess
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class AActor*                      CraftingObject                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        FormulaRowName                                                   (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_CraftingNetworkEvents::ClientNotifyCraftingSuccess(class AActor* CraftingObject, class FName& FormulaRowName)
{
	static auto Func = Class->GetFunction("FortControllerComponent_CraftingNetworkEvents", "ClientNotifyCraftingSuccess");

	Params::UFortControllerComponent_CraftingNetworkEvents_ClientNotifyCraftingSuccess_Params Parms;

	Parms.CraftingObject = CraftingObject;
	Parms.FormulaRowName = FormulaRowName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ClientNotifyCraftingFailed
// (Net, Native, Event, Public, NetClient)
// Parameters:
// class AActor*                      CraftingObject                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       FailedReason                                                     (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortControllerComponent_CraftingNetworkEvents::ClientNotifyCraftingFailed(class AActor* CraftingObject, struct FGameplayTagContainer& FailedReason)
{
	static auto Func = Class->GetFunction("FortControllerComponent_CraftingNetworkEvents", "ClientNotifyCraftingFailed");

	Params::UFortControllerComponent_CraftingNetworkEvents_ClientNotifyCraftingFailed_Params Parms;

	Parms.CraftingObject = CraftingObject;
	Parms.FailedReason = FailedReason;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CraftingRuntime.FortGameStateComponent_Crafting.OnRep_CraftingResultsList
// (Final, Native, Protected)
// Parameters:

void UFortGameStateComponent_Crafting::OnRep_CraftingResultsList()
{
	static auto Func = Class->GetFunction("FortGameStateComponent_Crafting", "OnRep_CraftingResultsList");

	Params::UFortGameStateComponent_Crafting_OnRep_CraftingResultsList_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CraftingRuntime.FortGameStateComponent_Crafting.OnPlaylistDataReady
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class AFortGameStateAthena*        GameState                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPlaylist*               Playlist                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortGameStateComponent_Crafting::OnPlaylistDataReady(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags)
{
	static auto Func = Class->GetFunction("FortGameStateComponent_Crafting", "OnPlaylistDataReady");

	Params::UFortGameStateComponent_Crafting_OnPlaylistDataReady_Params Parms;

	Parms.GameState = GameState;
	Parms.Playlist = Playlist;
	Parms.PlaylistContextTags = PlaylistContextTags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CraftingRuntime.FortContextualTutorial_CraftingComplete.OnCraftingSuccess
// (Final, Native, Private, HasOutParams)
// Parameters:
// class AFortPlayerController*       Instigator                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      CraftingObject                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        FormulaRowName                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortContextualTutorial_CraftingComplete::OnCraftingSuccess(class AFortPlayerController* Instigator, class AActor* CraftingObject, class FName& FormulaRowName)
{
	static auto Func = Class->GetFunction("FortContextualTutorial_CraftingComplete", "OnCraftingSuccess");

	Params::UFortContextualTutorial_CraftingComplete_OnCraftingSuccess_Params Parms;

	Parms.Instigator = Instigator;
	Parms.CraftingObject = CraftingObject;
	Parms.FormulaRowName = FormulaRowName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CraftingRuntime.FortContextualTutorial_CraftingReady.HandleFormulaCraftableChanged
// (Final, Native, Private, HasOutParams)
// Parameters:
// class FName                        FormulaRowName                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsCraftable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortContextualTutorial_CraftingReady::HandleFormulaCraftableChanged(class FName& FormulaRowName, bool bIsCraftable)
{
	static auto Func = Class->GetFunction("FortContextualTutorial_CraftingReady", "HandleFormulaCraftableChanged");

	Params::UFortContextualTutorial_CraftingReady_HandleFormulaCraftableChanged_Params Parms;

	Parms.FormulaRowName = FormulaRowName;
	Parms.bIsCraftable = bIsCraftable;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CraftingRuntime.FortContextualTutorial_CraftingTabOpen.HandleInventoryTabChanged
// (Final, Native, Private)
// Parameters:
// class FName                        InventoryTabNameId                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortContextualTutorial_CraftingTabOpen::HandleInventoryTabChanged(class FName InventoryTabNameId)
{
	static auto Func = Class->GetFunction("FortContextualTutorial_CraftingTabOpen", "HandleInventoryTabChanged");

	Params::UFortContextualTutorial_CraftingTabOpen_HandleInventoryTabChanged_Params Parms;

	Parms.InventoryTabNameId = InventoryTabNameId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CraftingRuntime.FortContextualTutorial_CraftingTabOpen.HandleFormulaCraftableChanged
// (Final, Native, Private, HasOutParams)
// Parameters:
// class FName                        FormulaRowName                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsCraftable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortContextualTutorial_CraftingTabOpen::HandleFormulaCraftableChanged(class FName& FormulaRowName, bool bIsCraftable)
{
	static auto Func = Class->GetFunction("FortContextualTutorial_CraftingTabOpen", "HandleFormulaCraftableChanged");

	Params::UFortContextualTutorial_CraftingTabOpen_HandleFormulaCraftableChanged_Params Parms;

	Parms.FormulaRowName = FormulaRowName;
	Parms.bIsCraftable = bIsCraftable;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CraftingRuntime.CraftingLibrary.StartCrafting
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AFortPlayerController*       Instigator                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      CraftingObject                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        CraftingFormulaName                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumberToCraft                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCraftingLibrary::StartCrafting(class AFortPlayerController* Instigator, class AActor* CraftingObject, class FName& CraftingFormulaName, int32 NumberToCraft)
{
	static auto Func = Class->GetFunction("CraftingLibrary", "StartCrafting");

	Params::UCraftingLibrary_StartCrafting_Params Parms;

	Parms.Instigator = Instigator;
	Parms.CraftingObject = CraftingObject;
	Parms.CraftingFormulaName = CraftingFormulaName;
	Parms.NumberToCraft = NumberToCraft;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CraftingRuntime.CraftingLibrary.ResumeCrafting
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AFortPlayerController*       Instigator                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      CraftingObject                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCraftingLibrary::ResumeCrafting(class AFortPlayerController* Instigator, class AActor* CraftingObject)
{
	static auto Func = Class->GetFunction("CraftingLibrary", "ResumeCrafting");

	Params::UCraftingLibrary_ResumeCrafting_Params Parms;

	Parms.Instigator = Instigator;
	Parms.CraftingObject = CraftingObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CraftingRuntime.CraftingLibrary.ReportCraftingSuccess
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AFortPlayerController*       Instigator                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      CraftingObject                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCraftingLibrary::ReportCraftingSuccess(class AFortPlayerController* Instigator, class AActor* CraftingObject)
{
	static auto Func = Class->GetFunction("CraftingLibrary", "ReportCraftingSuccess");

	Params::UCraftingLibrary_ReportCraftingSuccess_Params Parms;

	Parms.Instigator = Instigator;
	Parms.CraftingObject = CraftingObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CraftingRuntime.CraftingLibrary.PickupItemAndStartCrafting
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AFortPlayerController*       Instigator                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      CraftingObject                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPickup*                 PickUp                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        CraftingFormulaName                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCraftingLibrary::PickupItemAndStartCrafting(class AFortPlayerController* Instigator, class AActor* CraftingObject, class AFortPickup* PickUp, class FName& CraftingFormulaName)
{
	static auto Func = Class->GetFunction("CraftingLibrary", "PickupItemAndStartCrafting");

	Params::UCraftingLibrary_PickupItemAndStartCrafting_Params Parms;

	Parms.Instigator = Instigator;
	Parms.CraftingObject = CraftingObject;
	Parms.PickUp = PickUp;
	Parms.CraftingFormulaName = CraftingFormulaName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CraftingRuntime.CraftingLibrary.PauseCrafting
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AFortPlayerController*       Instigator                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      CraftingObject                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDecayPausedTime                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCraftingLibrary::PauseCrafting(class AFortPlayerController* Instigator, class AActor* CraftingObject, bool bDecayPausedTime)
{
	static auto Func = Class->GetFunction("CraftingLibrary", "PauseCrafting");

	Params::UCraftingLibrary_PauseCrafting_Params Parms;

	Parms.Instigator = Instigator;
	Parms.CraftingObject = CraftingObject;
	Parms.bDecayPausedTime = bDecayPausedTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CraftingRuntime.CraftingLibrary.IsValidIngredient
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AFortPlayerController*       FortPC                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      CraftingObject                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortItemDefinition*         ItemDef                                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCraftingLibrary::IsValidIngredient(class AFortPlayerController* FortPC, class AActor* CraftingObject, class UFortItemDefinition* ItemDef)
{
	static auto Func = Class->GetFunction("CraftingLibrary", "IsValidIngredient");

	Params::UCraftingLibrary_IsValidIngredient_Params Parms;

	Parms.FortPC = FortPC;
	Parms.CraftingObject = CraftingObject;
	Parms.ItemDef = ItemDef;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CraftingRuntime.CraftingLibrary.GiveItemToCraftingObject
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class AFortPlayerController*       Instigator                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      CraftingObject                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFortItemEntry              ItemEntryToGrant                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UCraftingLibrary::GiveItemToCraftingObject(class AFortPlayerController* Instigator, class AActor* CraftingObject, struct FFortItemEntry& ItemEntryToGrant)
{
	static auto Func = Class->GetFunction("CraftingLibrary", "GiveItemToCraftingObject");

	Params::UCraftingLibrary_GiveItemToCraftingObject_Params Parms;

	Parms.Instigator = Instigator;
	Parms.CraftingObject = CraftingObject;
	Parms.ItemEntryToGrant = ItemEntryToGrant;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CraftingRuntime.CraftingLibrary.GetValidIngredientsInInventory
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AFortPlayerController*       FortPC                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      CraftingObject                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UFortWorldItem*>      OutIngredients                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UCraftingLibrary::GetValidIngredientsInInventory(class AFortPlayerController* FortPC, class AActor* CraftingObject, TArray<class UFortWorldItem*>* OutIngredients)
{
	static auto Func = Class->GetFunction("CraftingLibrary", "GetValidIngredientsInInventory");

	Params::UCraftingLibrary_GetValidIngredientsInInventory_Params Parms;

	Parms.FortPC = FortPC;
	Parms.CraftingObject = CraftingObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutIngredients != nullptr)
		*OutIngredients = Parms.OutIngredients;

}


// Function CraftingRuntime.CraftingLibrary.GetUIDataForCraftingIngredientTags
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       IngredientTags                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<TSoftObjectPtr<class UFortItemDefinition>>OutItemDefs                                                      (Parm, OutParm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
// TArray<TSoftObjectPtr<class UObject>>OutIcons                                                         (Parm, OutParm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)

void UCraftingLibrary::GetUIDataForCraftingIngredientTags(class UObject* WorldContextObject, struct FGameplayTagContainer& IngredientTags, TArray<TSoftObjectPtr<class UFortItemDefinition>>* OutItemDefs, TArray<TSoftObjectPtr<class UObject>>* OutIcons)
{
	static auto Func = Class->GetFunction("CraftingLibrary", "GetUIDataForCraftingIngredientTags");

	Params::UCraftingLibrary_GetUIDataForCraftingIngredientTags_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.IngredientTags = IngredientTags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutItemDefs != nullptr)
		*OutItemDefs = Parms.OutItemDefs;

	if (OutIcons != nullptr)
		*OutIcons = Parms.OutIcons;

}


// Function CraftingRuntime.CraftingLibrary.GetTimeToCraftRecipe
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                      CraftingObject                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        CraftingFormulaName                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UCraftingLibrary::GetTimeToCraftRecipe(class AActor* CraftingObject, class FName& CraftingFormulaName)
{
	static auto Func = Class->GetFunction("CraftingLibrary", "GetTimeToCraftRecipe");

	Params::UCraftingLibrary_GetTimeToCraftRecipe_Params Parms;

	Parms.CraftingObject = CraftingObject;
	Parms.CraftingFormulaName = CraftingFormulaName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CraftingRuntime.CraftingLibrary.GetKnownCraftingFormulas
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AFortPlayerController*       FortPC                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      CraftingObject                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FName>                OutFormulas                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UCraftingLibrary::GetKnownCraftingFormulas(class AFortPlayerController* FortPC, class AActor* CraftingObject, TArray<class FName>* OutFormulas)
{
	static auto Func = Class->GetFunction("CraftingLibrary", "GetKnownCraftingFormulas");

	Params::UCraftingLibrary_GetKnownCraftingFormulas_Params Parms;

	Parms.FortPC = FortPC;
	Parms.CraftingObject = CraftingObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutFormulas != nullptr)
		*OutFormulas = Parms.OutFormulas;

}


// Function CraftingRuntime.CraftingLibrary.GetIngredientsInCraftingObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      CraftingObject                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UFortWorldItem*>      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UFortWorldItem*> UCraftingLibrary::GetIngredientsInCraftingObject(class AActor* CraftingObject)
{
	static auto Func = Class->GetFunction("CraftingLibrary", "GetIngredientsInCraftingObject");

	Params::UCraftingLibrary_GetIngredientsInCraftingObject_Params Parms;

	Parms.CraftingObject = CraftingObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CraftingRuntime.CraftingLibrary.GetCraftingSpaceTags
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      CraftingSpace                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayTagContainer UCraftingLibrary::GetCraftingSpaceTags(class AActor* CraftingSpace)
{
	static auto Func = Class->GetFunction("CraftingLibrary", "GetCraftingSpaceTags");

	Params::UCraftingLibrary_GetCraftingSpaceTags_Params Parms;

	Parms.CraftingSpace = CraftingSpace;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CraftingRuntime.CraftingLibrary.GetCraftingResultsForRowName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        CraftingFormulaRow                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FItemAndCount>       OutResults                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              NumToCraft                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCraftingLibrary::GetCraftingResultsForRowName(class UObject* WorldContextObject, class FName& CraftingFormulaRow, TArray<struct FItemAndCount>* OutResults, int32 NumToCraft)
{
	static auto Func = Class->GetFunction("CraftingLibrary", "GetCraftingResultsForRowName");

	Params::UCraftingLibrary_GetCraftingResultsForRowName_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.CraftingFormulaRow = CraftingFormulaRow;
	Parms.NumToCraft = NumToCraft;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutResults != nullptr)
		*OutResults = Parms.OutResults;

}


// Function CraftingRuntime.CraftingLibrary.GetCraftingObjectTags
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      CraftingObject                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayTagContainer UCraftingLibrary::GetCraftingObjectTags(class AActor* CraftingObject)
{
	static auto Func = Class->GetFunction("CraftingLibrary", "GetCraftingObjectTags");

	Params::UCraftingLibrary_GetCraftingObjectTags_Params Parms;

	Parms.CraftingObject = CraftingObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CraftingRuntime.CraftingLibrary.GetCraftingObjectPausedTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      CraftingObject                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UCraftingLibrary::GetCraftingObjectPausedTime(class AActor* CraftingObject)
{
	static auto Func = Class->GetFunction("CraftingLibrary", "GetCraftingObjectPausedTime");

	Params::UCraftingLibrary_GetCraftingObjectPausedTime_Params Parms;

	Parms.CraftingObject = CraftingObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CraftingRuntime.CraftingLibrary.GetCraftingObjectCurrentCraftingStateTimeLeft
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      CraftingObject                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UCraftingLibrary::GetCraftingObjectCurrentCraftingStateTimeLeft(class AActor* CraftingObject)
{
	static auto Func = Class->GetFunction("CraftingLibrary", "GetCraftingObjectCurrentCraftingStateTimeLeft");

	Params::UCraftingLibrary_GetCraftingObjectCurrentCraftingStateTimeLeft_Params Parms;

	Parms.CraftingObject = CraftingObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CraftingRuntime.CraftingLibrary.GetCraftingObjectCurrentCraftingStateStartTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      CraftingObject                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UCraftingLibrary::GetCraftingObjectCurrentCraftingStateStartTime(class AActor* CraftingObject)
{
	static auto Func = Class->GetFunction("CraftingLibrary", "GetCraftingObjectCurrentCraftingStateStartTime");

	Params::UCraftingLibrary_GetCraftingObjectCurrentCraftingStateStartTime_Params Parms;

	Parms.CraftingObject = CraftingObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CraftingRuntime.CraftingLibrary.GetCraftingObjectCurrentCraftingStateEndTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      CraftingObject                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UCraftingLibrary::GetCraftingObjectCurrentCraftingStateEndTime(class AActor* CraftingObject)
{
	static auto Func = Class->GetFunction("CraftingLibrary", "GetCraftingObjectCurrentCraftingStateEndTime");

	Params::UCraftingLibrary_GetCraftingObjectCurrentCraftingStateEndTime_Params Parms;

	Parms.CraftingObject = CraftingObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CraftingRuntime.CraftingLibrary.GetCraftingObjectCraftingState
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      CraftingObject                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ECraftingObjectState    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECraftingObjectState UCraftingLibrary::GetCraftingObjectCraftingState(class AActor* CraftingObject)
{
	static auto Func = Class->GetFunction("CraftingLibrary", "GetCraftingObjectCraftingState");

	Params::UCraftingLibrary_GetCraftingObjectCraftingState_Params Parms;

	Parms.CraftingObject = CraftingObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CraftingRuntime.CraftingLibrary.GetCraftingObjectComponent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      CraftingObject                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCraftingObjectComponent*    ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCraftingObjectComponent* UCraftingLibrary::GetCraftingObjectComponent(class AActor* CraftingObject)
{
	static auto Func = Class->GetFunction("CraftingLibrary", "GetCraftingObjectComponent");

	Params::UCraftingLibrary_GetCraftingObjectComponent_Params Parms;

	Parms.CraftingObject = CraftingObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CraftingRuntime.CraftingLibrary.GetCraftingObjectAndSpaceTags
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      CraftingSpaceOrObject                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayTagContainer UCraftingLibrary::GetCraftingObjectAndSpaceTags(class AActor* CraftingSpaceOrObject)
{
	static auto Func = Class->GetFunction("CraftingLibrary", "GetCraftingObjectAndSpaceTags");

	Params::UCraftingLibrary_GetCraftingObjectAndSpaceTags_Params Parms;

	Parms.CraftingSpaceOrObject = CraftingSpaceOrObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CraftingRuntime.CraftingLibrary.GetCraftingIngredients_TempItems
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      CraftingObject                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UFortWorldItem*>      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UFortWorldItem*> UCraftingLibrary::GetCraftingIngredients_TempItems(class AActor* CraftingObject)
{
	static auto Func = Class->GetFunction("CraftingLibrary", "GetCraftingIngredients_TempItems");

	Params::UCraftingLibrary_GetCraftingIngredients_TempItems_Params Parms;

	Parms.CraftingObject = CraftingObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CraftingRuntime.CraftingLibrary.GetCraftingFormulaNameBeingCrafted
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      CraftingObject                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UCraftingLibrary::GetCraftingFormulaNameBeingCrafted(class AActor* CraftingObject)
{
	static auto Func = Class->GetFunction("CraftingLibrary", "GetCraftingFormulaNameBeingCrafted");

	Params::UCraftingLibrary_GetCraftingFormulaNameBeingCrafted_Params Parms;

	Parms.CraftingObject = CraftingObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CraftingRuntime.CraftingLibrary.GetCraftingFormulaIngredientRequirements
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        CraftingFormulaRow                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FCraftingIngredientRequirement>OutIngredientRequirements                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCraftingLibrary::GetCraftingFormulaIngredientRequirements(class UObject* WorldContextObject, class FName& CraftingFormulaRow, TArray<struct FCraftingIngredientRequirement>* OutIngredientRequirements)
{
	static auto Func = Class->GetFunction("CraftingLibrary", "GetCraftingFormulaIngredientRequirements");

	Params::UCraftingLibrary_GetCraftingFormulaIngredientRequirements_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.CraftingFormulaRow = CraftingFormulaRow;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutIngredientRequirements != nullptr)
		*OutIngredientRequirements = Parms.OutIngredientRequirements;

	return Parms.ReturnValue;

}


// Function CraftingRuntime.CraftingLibrary.GetCraftedResults_TempItems
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      CraftingObject                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UFortWorldItem*>      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UFortWorldItem*> UCraftingLibrary::GetCraftedResults_TempItems(class AActor* CraftingObject)
{
	static auto Func = Class->GetFunction("CraftingLibrary", "GetCraftedResults_TempItems");

	Params::UCraftingLibrary_GetCraftedResults_TempItems_Params Parms;

	Parms.CraftingObject = CraftingObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CraftingRuntime.CraftingLibrary.GetAllValidIngredients
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AFortPlayerController*       FortPC                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      CraftingObject                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FGameplayTagContainer>OutIngredients                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UCraftingLibrary::GetAllValidIngredients(class AFortPlayerController* FortPC, class AActor* CraftingObject, TArray<struct FGameplayTagContainer>* OutIngredients)
{
	static auto Func = Class->GetFunction("CraftingLibrary", "GetAllValidIngredients");

	Params::UCraftingLibrary_GetAllValidIngredients_Params Parms;

	Parms.FortPC = FortPC;
	Parms.CraftingObject = CraftingObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutIngredients != nullptr)
		*OutIngredients = Parms.OutIngredients;

}


// Function CraftingRuntime.CraftingLibrary.GetAllCraftingFormulas
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AFortPlayerController*       FortPC                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      CraftingObject                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FName>                OutFormulas                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UCraftingLibrary::GetAllCraftingFormulas(class AFortPlayerController* FortPC, class AActor* CraftingObject, TArray<class FName>* OutFormulas)
{
	static auto Func = Class->GetFunction("CraftingLibrary", "GetAllCraftingFormulas");

	Params::UCraftingLibrary_GetAllCraftingFormulas_Params Parms;

	Parms.FortPC = FortPC;
	Parms.CraftingObject = CraftingObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutFormulas != nullptr)
		*OutFormulas = Parms.OutFormulas;

}


// Function CraftingRuntime.CraftingLibrary.GetAllCraftableFormulas
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AFortPlayerController*       FortPC                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      CraftingObject                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FName>                OutFormulas                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UCraftingLibrary::GetAllCraftableFormulas(class AFortPlayerController* FortPC, class AActor* CraftingObject, TArray<class FName>* OutFormulas)
{
	static auto Func = Class->GetFunction("CraftingLibrary", "GetAllCraftableFormulas");

	Params::UCraftingLibrary_GetAllCraftableFormulas_Params Parms;

	Parms.FortPC = FortPC;
	Parms.CraftingObject = CraftingObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutFormulas != nullptr)
		*OutFormulas = Parms.OutFormulas;

}


// Function CraftingRuntime.CraftingLibrary.EjectItems
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AFortPlayerController*       Instigator                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      CraftingObject                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCraftingLibrary::EjectItems(class AFortPlayerController* Instigator, class AActor* CraftingObject)
{
	static auto Func = Class->GetFunction("CraftingLibrary", "EjectItems");

	Params::UCraftingLibrary_EjectItems_Params Parms;

	Parms.Instigator = Instigator;
	Parms.CraftingObject = CraftingObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CraftingRuntime.CraftingLibrary.ClaimCraftingResults
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AFortPlayerController*       Instigator                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      CraftingObject                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCraftingLibrary::ClaimCraftingResults(class AFortPlayerController* Instigator, class AActor* CraftingObject)
{
	static auto Func = Class->GetFunction("CraftingLibrary", "ClaimCraftingResults");

	Params::UCraftingLibrary_ClaimCraftingResults_Params Parms;

	Parms.Instigator = Instigator;
	Parms.CraftingObject = CraftingObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CraftingRuntime.CraftingLibrary.CanCraftFormulaWithAdditionalItems
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AFortPlayerController*       FortPC                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      CraftingObject                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        CraftingFormulaRow                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FItemAndCount>       AdditionalItems                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FCraftingIngredientQueryState>OutIngredientStates                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              NumberToCraft                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCraftingLibrary::CanCraftFormulaWithAdditionalItems(class AFortPlayerController* FortPC, class AActor* CraftingObject, class FName CraftingFormulaRow, TArray<struct FItemAndCount>& AdditionalItems, TArray<struct FCraftingIngredientQueryState>* OutIngredientStates, int32 NumberToCraft)
{
	static auto Func = Class->GetFunction("CraftingLibrary", "CanCraftFormulaWithAdditionalItems");

	Params::UCraftingLibrary_CanCraftFormulaWithAdditionalItems_Params Parms;

	Parms.FortPC = FortPC;
	Parms.CraftingObject = CraftingObject;
	Parms.CraftingFormulaRow = CraftingFormulaRow;
	Parms.AdditionalItems = AdditionalItems;
	Parms.NumberToCraft = NumberToCraft;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutIngredientStates != nullptr)
		*OutIngredientStates = Parms.OutIngredientStates;

	return Parms.ReturnValue;

}


// Function CraftingRuntime.CraftingLibrary.CanCraftFormula
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AFortPlayerController*       FortPC                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      CraftingObject                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        CraftingFormulaRow                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FCraftingIngredientQueryState>OutIngredientStates                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              NumberToCraft                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCraftingLibrary::CanCraftFormula(class AFortPlayerController* FortPC, class AActor* CraftingObject, class FName CraftingFormulaRow, TArray<struct FCraftingIngredientQueryState>* OutIngredientStates, int32 NumberToCraft)
{
	static auto Func = Class->GetFunction("CraftingLibrary", "CanCraftFormula");

	Params::UCraftingLibrary_CanCraftFormula_Params Parms;

	Parms.FortPC = FortPC;
	Parms.CraftingObject = CraftingObject;
	Parms.CraftingFormulaRow = CraftingFormulaRow;
	Parms.NumberToCraft = NumberToCraft;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutIngredientStates != nullptr)
		*OutIngredientStates = Parms.OutIngredientStates;

	return Parms.ReturnValue;

}


// Function CraftingRuntime.CraftingLibrary.CancelCrafting
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AFortPlayerController*       Instigator                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      CraftingObject                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCraftingLibrary::CancelCrafting(class AFortPlayerController* Instigator, class AActor* CraftingObject)
{
	static auto Func = Class->GetFunction("CraftingLibrary", "CancelCrafting");

	Params::UCraftingLibrary_CancelCrafting_Params Parms;

	Parms.Instigator = Instigator;
	Parms.CraftingObject = CraftingObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
