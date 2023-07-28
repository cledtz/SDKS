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


// Function VictoryCrownsRuntime.FortVictoryCrownViewModel.HandleOnHasWonRoyalRoyale
// (Final, Native, Private)
// Parameters:

void UFortVictoryCrownViewModel::HandleOnHasWonRoyalRoyale()
{
	static auto Func = Class->GetFunction("FortVictoryCrownViewModel", "HandleOnHasWonRoyalRoyale");

	Params::UFortVictoryCrownViewModel_HandleOnHasWonRoyalRoyale_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VictoryCrownsRuntime.FortVictoryCrownViewModel.HandleOnHasWonCrownInMatch
// (Final, Native, Private)
// Parameters:

void UFortVictoryCrownViewModel::HandleOnHasWonCrownInMatch()
{
	static auto Func = Class->GetFunction("FortVictoryCrownViewModel", "HandleOnHasWonCrownInMatch");

	Params::UFortVictoryCrownViewModel_HandleOnHasWonCrownInMatch_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.OnRep_WonRoyalRoyale
// (Final, Native, Private)
// Parameters:

void UFortControllerComponent_VictoryCrowns::OnRep_WonRoyalRoyale()
{
	static auto Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "OnRep_WonRoyalRoyale");

	Params::UFortControllerComponent_VictoryCrowns_OnRep_WonRoyalRoyale_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.OnRep_WonCrownInMatch
// (Final, Native, Private)
// Parameters:

void UFortControllerComponent_VictoryCrowns::OnRep_WonCrownInMatch()
{
	static auto Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "OnRep_WonCrownInMatch");

	Params::UFortControllerComponent_VictoryCrowns_OnRep_WonCrownInMatch_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.OnRep_VictoryCrownAccountData
// (Final, Native, Private)
// Parameters:

void UFortControllerComponent_VictoryCrowns::OnRep_VictoryCrownAccountData()
{
	static auto Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "OnRep_VictoryCrownAccountData");

	Params::UFortControllerComponent_VictoryCrowns_OnRep_VictoryCrownAccountData_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.OnAthenaProfileInitialized
// (Final, Native, Private)
// Parameters:

void UFortControllerComponent_VictoryCrowns::OnAthenaProfileInitialized()
{
	static auto Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "OnAthenaProfileInitialized");

	Params::UFortControllerComponent_VictoryCrowns_OnAthenaProfileInitialized_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.IsCrownInPlayerInventory
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortControllerComponent_VictoryCrowns::IsCrownInPlayerInventory()
{
	static auto Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "IsCrownInPlayerInventory");

	Params::UFortControllerComponent_VictoryCrowns_IsCrownInPlayerInventory_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HasWonRoyalRoyale
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortControllerComponent_VictoryCrowns::HasWonRoyalRoyale()
{
	static auto Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "HasWonRoyalRoyale");

	Params::UFortControllerComponent_VictoryCrowns_HasWonRoyalRoyale_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HasWonCrownInMatch
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortControllerComponent_VictoryCrowns::HasWonCrownInMatch()
{
	static auto Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "HasWonCrownInMatch");

	Params::UFortControllerComponent_VictoryCrowns_HasWonCrownInMatch_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HandlePawnChanged
// (Final, Native, Protected)
// Parameters:
// class UPawn*                       OldPawn                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPawn*                       NewPawn                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_VictoryCrowns::HandlePawnChanged(class UPawn* OldPawn, class UPawn* NewPawn)
{
	static auto Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "HandlePawnChanged");

	Params::UFortControllerComponent_VictoryCrowns_HandlePawnChanged_Params Parms;

	Parms.OldPawn = OldPawn;
	Parms.NewPawn = NewPawn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HandleExitAircraft
// (Final, Native, Protected)
// Parameters:
// class UController*                 ExitingController                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_VictoryCrowns::HandleExitAircraft(class UController* ExitingController)
{
	static auto Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "HandleExitAircraft");

	Params::UFortControllerComponent_VictoryCrowns_HandleExitAircraft_Params Parms;

	Parms.ExitingController = ExitingController;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HandleEnterAircraft
// (Final, Native, Protected)
// Parameters:

void UFortControllerComponent_VictoryCrowns::HandleEnterAircraft()
{
	static auto Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "HandleEnterAircraft");

	Params::UFortControllerComponent_VictoryCrowns_HandleEnterAircraft_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.GetVictoryCrownsBestowedCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortControllerComponent_VictoryCrowns::GetVictoryCrownsBestowedCount()
{
	static auto Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "GetVictoryCrownsBestowedCount");

	Params::UFortControllerComponent_VictoryCrowns_GetVictoryCrownsBestowedCount_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.GetRoyalRoyaleAchievedCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortControllerComponent_VictoryCrowns::GetRoyalRoyaleAchievedCount()
{
	static auto Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "GetRoyalRoyaleAchievedCount");

	Params::UFortControllerComponent_VictoryCrowns_GetRoyalRoyaleAchievedCount_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.GetCrownInPlayerInventory
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortWorldItem*              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortWorldItem* UFortControllerComponent_VictoryCrowns::GetCrownInPlayerInventory()
{
	static auto Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "GetCrownInPlayerInventory");

	Params::UFortControllerComponent_VictoryCrowns_GetCrownInPlayerInventory_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.DebugForceSetRoyalRoyaleAchievedCount
// (Final, Exec, Native, Public)
// Parameters:
// int32                              NewRoyalRoyaleCount                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_VictoryCrowns::DebugForceSetRoyalRoyaleAchievedCount(int32 NewRoyalRoyaleCount)
{
	static auto Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "DebugForceSetRoyalRoyaleAchievedCount");

	Params::UFortControllerComponent_VictoryCrowns_DebugForceSetRoyalRoyaleAchievedCount_Params Parms;

	Parms.NewRoyalRoyaleCount = NewRoyalRoyaleCount;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.CacheAccountItemData
// (Final, Native, Private)
// Parameters:

void UFortControllerComponent_VictoryCrowns::CacheAccountItemData()
{
	static auto Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "CacheAccountItemData");

	Params::UFortControllerComponent_VictoryCrowns_CacheAccountItemData_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthoritySquadHasSeenCrownItem
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UFortItem*                   CrownItem                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDropped                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortControllerComponent_VictoryCrowns::AuthoritySquadHasSeenCrownItem(class UFortItem* CrownItem, bool bDropped)
{
	static auto Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "AuthoritySquadHasSeenCrownItem");

	Params::UFortControllerComponent_VictoryCrowns_AuthoritySquadHasSeenCrownItem_Params Parms;

	Parms.CrownItem = CrownItem;
	Parms.bDropped = bDropped;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthorityHasSquadHeldCrownItem
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UFortItem*                   CrownItem                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortControllerComponent_VictoryCrowns::AuthorityHasSquadHeldCrownItem(class UFortItem* CrownItem)
{
	static auto Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "AuthorityHasSquadHeldCrownItem");

	Params::UFortControllerComponent_VictoryCrowns_AuthorityHasSquadHeldCrownItem_Params Parms;

	Parms.CrownItem = CrownItem;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthorityHasSquadDroppedCrownItem
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UFortItem*                   CrownItem                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortControllerComponent_VictoryCrowns::AuthorityHasSquadDroppedCrownItem(class UFortItem* CrownItem)
{
	static auto Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "AuthorityHasSquadDroppedCrownItem");

	Params::UFortControllerComponent_VictoryCrowns_AuthorityHasSquadDroppedCrownItem_Params Parms;

	Parms.CrownItem = CrownItem;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthorityHasHeldCrownItem
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UFortItem*                   CrownItem                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortControllerComponent_VictoryCrowns::AuthorityHasHeldCrownItem(class UFortItem* CrownItem)
{
	static auto Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "AuthorityHasHeldCrownItem");

	Params::UFortControllerComponent_VictoryCrowns_AuthorityHasHeldCrownItem_Params Parms;

	Parms.CrownItem = CrownItem;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthorityHasDroppedCrownItem
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UFortItem*                   CrownItem                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortControllerComponent_VictoryCrowns::AuthorityHasDroppedCrownItem(class UFortItem* CrownItem)
{
	static auto Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "AuthorityHasDroppedCrownItem");

	Params::UFortControllerComponent_VictoryCrowns_AuthorityHasDroppedCrownItem_Params Parms;

	Parms.CrownItem = CrownItem;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns.OnRep_CrownBearerPlayerStates
// (Final, Native, Protected)
// Parameters:

void UFortGameStateComponent_VictoryCrowns::OnRep_CrownBearerPlayerStates()
{
	static auto Func = Class->GetFunction("FortGameStateComponent_VictoryCrowns", "OnRep_CrownBearerPlayerStates");

	Params::UFortGameStateComponent_VictoryCrowns_OnRep_CrownBearerPlayerStates_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns.IsCrownBearer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortPlayerStateAthena*      FortPSA                                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortGameStateComponent_VictoryCrowns::IsCrownBearer(class UFortPlayerStateAthena* FortPSA)
{
	static auto Func = Class->GetFunction("FortGameStateComponent_VictoryCrowns", "IsCrownBearer");

	Params::UFortGameStateComponent_VictoryCrowns_IsCrownBearer_Params Parms;

	Parms.FortPSA = FortPSA;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns.HandleCrownStatusChanged
// (Final, Native, Protected)
// Parameters:
// class UFortPlayerControllerAthena* FortPlayerControllerAthena                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortItem*                   CrownItem                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGameStateComponent_VictoryCrowns::HandleCrownStatusChanged(class UFortPlayerControllerAthena* FortPlayerControllerAthena, class UFortItem* CrownItem)
{
	static auto Func = Class->GetFunction("FortGameStateComponent_VictoryCrowns", "HandleCrownStatusChanged");

	Params::UFortGameStateComponent_VictoryCrowns_HandleCrownStatusChanged_Params Parms;

	Parms.FortPlayerControllerAthena = FortPlayerControllerAthena;
	Parms.CrownItem = CrownItem;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns.ClientKillFeedMessage
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// class UFortPlayerStateAthena*      FortPSA                                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAdded                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGameStateComponent_VictoryCrowns::ClientKillFeedMessage(class UFortPlayerStateAthena* FortPSA, bool bAdded)
{
	static auto Func = Class->GetFunction("FortGameStateComponent_VictoryCrowns", "ClientKillFeedMessage");

	Params::UFortGameStateComponent_VictoryCrowns_ClientKillFeedMessage_Params Parms;

	Parms.FortPSA = FortPSA;
	Parms.bAdded = bAdded;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VictoryCrownsRuntime.FortPawnComponent_VictoryCrownsFrontEnd.PlaylistChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortPawnComponent_VictoryCrownsFrontEnd::PlaylistChanged()
{
	static auto Func = Class->GetFunction("FortPawnComponent_VictoryCrownsFrontEnd", "PlaylistChanged");

	Params::UFortPawnComponent_VictoryCrownsFrontEnd_PlaylistChanged_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VictoryCrownsRuntime.FortPlayerStateComponent_VictoryCrowns.GetWonRoyalRoyale
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortPlayerStateComponent_VictoryCrowns::GetWonRoyalRoyale()
{
	static auto Func = Class->GetFunction("FortPlayerStateComponent_VictoryCrowns", "GetWonRoyalRoyale");

	Params::UFortPlayerStateComponent_VictoryCrowns_GetWonRoyalRoyale_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
