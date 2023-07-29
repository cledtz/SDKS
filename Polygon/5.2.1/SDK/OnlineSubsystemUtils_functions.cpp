#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        AchievementId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFoundID                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Progress                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAchievementBlueprintLibrary::GetCachedAchievementProgress(class UObject* WorldContextObject, class UPlayerController* PlayerController, class FName AchievementId, bool* bFoundID, float* Progress)
{
	static auto Func = Class->GetFunction("AchievementBlueprintLibrary", "GetCachedAchievementProgress");

	Params::UAchievementBlueprintLibrary_GetCachedAchievementProgress_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.AchievementId = AchievementId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (bFoundID != nullptr)
		*bFoundID = Parms.bFoundID;

	if (Progress != nullptr)
		*Progress = Parms.Progress;

}


// Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        AchievementId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFoundID                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        Title                                                            (Parm, OutParm, NativeAccessSpecifierPublic)
// class FText                        LockedDescription                                                (Parm, OutParm, NativeAccessSpecifierPublic)
// class FText                        UnlockedDescription                                              (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               bHidden                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAchievementBlueprintLibrary::GetCachedAchievementDescription(class UObject* WorldContextObject, class UPlayerController* PlayerController, class FName AchievementId, bool* bFoundID, class FText* Title, class FText* LockedDescription, class FText* UnlockedDescription, bool* bHidden)
{
	static auto Func = Class->GetFunction("AchievementBlueprintLibrary", "GetCachedAchievementDescription");

	Params::UAchievementBlueprintLibrary_GetCachedAchievementDescription_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.AchievementId = AchievementId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (bFoundID != nullptr)
		*bFoundID = Parms.bFoundID;

	if (Title != nullptr)
		*Title = Parms.Title;

	if (LockedDescription != nullptr)
		*LockedDescription = Parms.LockedDescription;

	if (UnlockedDescription != nullptr)
		*UnlockedDescription = Parms.UnlockedDescription;

	if (bHidden != nullptr)
		*bHidden = Parms.bHidden;

}


// Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAchievementQueryCallbackProxy*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAchievementQueryCallbackProxy* UAchievementQueryCallbackProxy::CacheAchievements(class UObject* WorldContextObject, class UPlayerController* PlayerController)
{
	static auto Func = Class->GetFunction("AchievementQueryCallbackProxy", "CacheAchievements");

	Params::UAchievementQueryCallbackProxy_CacheAchievements_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAchievementQueryCallbackProxy*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAchievementQueryCallbackProxy* UAchievementQueryCallbackProxy::CacheAchievementDescriptions(class UObject* WorldContextObject, class UPlayerController* PlayerController)
{
	static auto Func = Class->GetFunction("AchievementQueryCallbackProxy", "CacheAchievementDescriptions");

	Params::UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        AchievementName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Progress                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UserTag                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAchievementWriteCallbackProxy*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAchievementWriteCallbackProxy* UAchievementWriteCallbackProxy::WriteAchievementProgress(class UObject* WorldContextObject, class UPlayerController* PlayerController, class FName AchievementName, float Progress, int32 UserTag)
{
	static auto Func = Class->GetFunction("AchievementWriteCallbackProxy", "WriteAchievementProgress");

	Params::UAchievementWriteCallbackProxy_WriteAchievementProgress_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.AchievementName = AchievementName;
	Parms.Progress = Progress;
	Parms.UserTag = UserTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UConnectionCallbackProxy*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UConnectionCallbackProxy* UConnectionCallbackProxy::ConnectToService(class UObject* WorldContextObject, class UPlayerController* PlayerController)
{
	static auto Func = Class->GetFunction("ConnectionCallbackProxy", "ConnectToService");

	Params::UConnectionCallbackProxy_ConnectToService_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PublicConnections                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseLAN                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCreateSessionCallbackProxy* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCreateSessionCallbackProxy* UCreateSessionCallbackProxy::CreateSession(class UObject* WorldContextObject, class UPlayerController* PlayerController, int32 PublicConnections, bool bUseLAN)
{
	static auto Func = Class->GetFunction("CreateSessionCallbackProxy", "CreateSession");

	Params::UCreateSessionCallbackProxy_CreateSession_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.PublicConnections = PublicConnections;
	Parms.bUseLAN = bUseLAN;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDestroySessionCallbackProxy*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDestroySessionCallbackProxy* UDestroySessionCallbackProxy::DestroySession(class UObject* WorldContextObject, class UPlayerController* PlayerController)
{
	static auto Func = Class->GetFunction("DestroySessionCallbackProxy", "DestroySession");

	Params::UDestroySessionCallbackProxy_DestroySession_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TScriptInterface<class UTurnBasedMatchInterface>MatchActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      MatchID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMPMatchOutcome         LocalPlayerOutcome                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMPMatchOutcome         OtherPlayersOutcome                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEndMatchCallbackProxy*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UEndMatchCallbackProxy* UEndMatchCallbackProxy::EndMatch(class UObject* WorldContextObject, class UPlayerController* PlayerController, TScriptInterface<class UTurnBasedMatchInterface> MatchActor, const class FString& MatchID, enum class EMPMatchOutcome LocalPlayerOutcome, enum class EMPMatchOutcome OtherPlayersOutcome)
{
	static auto Func = Class->GetFunction("EndMatchCallbackProxy", "EndMatch");

	Params::UEndMatchCallbackProxy_EndMatch_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.MatchActor = MatchActor;
	Parms.MatchID = MatchID;
	Parms.LocalPlayerOutcome = LocalPlayerOutcome;
	Parms.OtherPlayersOutcome = OtherPlayersOutcome;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      MatchID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TScriptInterface<class UTurnBasedMatchInterface>TurnBasedMatchInterface                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEndTurnCallbackProxy*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UEndTurnCallbackProxy* UEndTurnCallbackProxy::EndTurn(class UObject* WorldContextObject, class UPlayerController* PlayerController, const class FString& MatchID, TScriptInterface<class UTurnBasedMatchInterface> TurnBasedMatchInterface)
{
	static auto Func = Class->GetFunction("EndTurnCallbackProxy", "EndTurn");

	Params::UEndTurnCallbackProxy_EndTurn_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.MatchID = MatchID;
	Parms.TurnBasedMatchInterface = TurnBasedMatchInterface;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlueprintSessionResult     Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UFindSessionsCallbackProxy::GetServerName(struct FBlueprintSessionResult& Result)
{
	static auto Func = Class->GetFunction("FindSessionsCallbackProxy", "GetServerName");

	Params::UFindSessionsCallbackProxy_GetServerName_Params Parms;

	Parms.Result = Result;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlueprintSessionResult     Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFindSessionsCallbackProxy::GetPingInMs(struct FBlueprintSessionResult& Result)
{
	static auto Func = Class->GetFunction("FindSessionsCallbackProxy", "GetPingInMs");

	Params::UFindSessionsCallbackProxy_GetPingInMs_Params Parms;

	Parms.Result = Result;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlueprintSessionResult     Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFindSessionsCallbackProxy::GetMaxPlayers(struct FBlueprintSessionResult& Result)
{
	static auto Func = Class->GetFunction("FindSessionsCallbackProxy", "GetMaxPlayers");

	Params::UFindSessionsCallbackProxy_GetMaxPlayers_Params Parms;

	Parms.Result = Result;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlueprintSessionResult     Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFindSessionsCallbackProxy::GetCurrentPlayers(struct FBlueprintSessionResult& Result)
{
	static auto Func = Class->GetFunction("FindSessionsCallbackProxy", "GetCurrentPlayers");

	Params::UFindSessionsCallbackProxy_GetCurrentPlayers_Params Parms;

	Parms.Result = Result;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxResults                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseLAN                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFindSessionsCallbackProxy*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFindSessionsCallbackProxy* UFindSessionsCallbackProxy::FindSessions(class UObject* WorldContextObject, class UPlayerController* PlayerController, int32 MaxResults, bool bUseLAN)
{
	static auto Func = Class->GetFunction("FindSessionsCallbackProxy", "FindSessions");

	Params::UFindSessionsCallbackProxy_FindSessions_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.MaxResults = MaxResults;
	Parms.bUseLAN = bUseLAN;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TScriptInterface<class UTurnBasedMatchInterface>MatchActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MinPlayers                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxPlayers                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PlayerGroup                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ShowExistingMatches                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFindTurnBasedMatchCallbackProxy*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFindTurnBasedMatchCallbackProxy* UFindTurnBasedMatchCallbackProxy::FindTurnBasedMatch(class UObject* WorldContextObject, class UPlayerController* PlayerController, TScriptInterface<class UTurnBasedMatchInterface> MatchActor, int32 MinPlayers, int32 MaxPlayers, int32 PlayerGroup, bool ShowExistingMatches)
{
	static auto Func = Class->GetFunction("FindTurnBasedMatchCallbackProxy", "FindTurnBasedMatch");

	Params::UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.MatchActor = MatchActor;
	Parms.MinPlayers = MinPlayers;
	Parms.MaxPlayers = MaxPlayers;
	Parms.PlayerGroup = PlayerGroup;
	Parms.ShowExistingMatches = ShowExistingMatches;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseUnprocessedPurchases
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInAppPurchaseCallbackProxy2*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UInAppPurchaseCallbackProxy2* UInAppPurchaseCallbackProxy2::CreateProxyObjectForInAppPurchaseUnprocessedPurchases(class UPlayerController* PlayerController)
{
	static auto Func = Class->GetFunction("InAppPurchaseCallbackProxy2", "CreateProxyObjectForInAppPurchaseUnprocessedPurchases");

	Params::UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseUnprocessedPurchases_Params Parms;

	Parms.PlayerController = PlayerController;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseQueryOwned
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInAppPurchaseCallbackProxy2*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UInAppPurchaseCallbackProxy2* UInAppPurchaseCallbackProxy2::CreateProxyObjectForInAppPurchaseQueryOwned(class UPlayerController* PlayerController)
{
	static auto Func = Class->GetFunction("InAppPurchaseCallbackProxy2", "CreateProxyObjectForInAppPurchaseQueryOwned");

	Params::UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseQueryOwned_Params Parms;

	Parms.PlayerController = PlayerController;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchase
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UPlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInAppPurchaseProductRequest2ProductRequest                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UInAppPurchaseCallbackProxy2*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UInAppPurchaseCallbackProxy2* UInAppPurchaseCallbackProxy2::CreateProxyObjectForInAppPurchase(class UPlayerController* PlayerController, struct FInAppPurchaseProductRequest2& ProductRequest)
{
	static auto Func = Class->GetFunction("InAppPurchaseCallbackProxy2", "CreateProxyObjectForInAppPurchase");

	Params::UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchase_Params Parms;

	Parms.PlayerController = PlayerController;
	Parms.ProductRequest = ProductRequest;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2.CreateProxyObjectForInAppPurchaseQuery
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UPlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              ProductIdentifiers                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class UInAppPurchaseQueryCallbackProxy2*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UInAppPurchaseQueryCallbackProxy2* UInAppPurchaseQueryCallbackProxy2::CreateProxyObjectForInAppPurchaseQuery(class UPlayerController* PlayerController, TArray<class FString>& ProductIdentifiers)
{
	static auto Func = Class->GetFunction("InAppPurchaseQueryCallbackProxy2", "CreateProxyObjectForInAppPurchaseQuery");

	Params::UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Params Parms;

	Parms.PlayerController = PlayerController;
	Parms.ProductIdentifiers = ProductIdentifiers;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2.CreateProxyObjectForInAppPurchaseRestore
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FInAppPurchaseProductRequest2>ConsumableProductFlags                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class UPlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInAppPurchaseRestoreCallbackProxy2*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UInAppPurchaseRestoreCallbackProxy2* UInAppPurchaseRestoreCallbackProxy2::CreateProxyObjectForInAppPurchaseRestore(TArray<struct FInAppPurchaseProductRequest2>& ConsumableProductFlags, class UPlayerController* PlayerController)
{
	static auto Func = Class->GetFunction("InAppPurchaseRestoreCallbackProxy2", "CreateProxyObjectForInAppPurchaseRestore");

	Params::UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore_Params Parms;

	Parms.ConsumableProductFlags = ConsumableProductFlags;
	Parms.PlayerController = PlayerController;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlueprintSessionResult     SearchResult                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UJoinSessionCallbackProxy*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UJoinSessionCallbackProxy* UJoinSessionCallbackProxy::JoinSession(class UObject* WorldContextObject, class UPlayerController* PlayerController, struct FBlueprintSessionResult& SearchResult)
{
	static auto Func = Class->GetFunction("JoinSessionCallbackProxy", "JoinSession");

	Params::UJoinSessionCallbackProxy_JoinSession_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.SearchResult = SearchResult;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        StatName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StatValue                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULeaderboardBlueprintLibrary::WriteLeaderboardInteger(class UPlayerController* PlayerController, class FName StatName, int32 StatValue)
{
	static auto Func = Class->GetFunction("LeaderboardBlueprintLibrary", "WriteLeaderboardInteger");

	Params::ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Params Parms;

	Parms.PlayerController = PlayerController;
	Parms.StatName = StatName;
	Parms.StatValue = StatValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SessionName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULeaderboardFlushCallbackProxy*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULeaderboardFlushCallbackProxy* ULeaderboardFlushCallbackProxy::CreateProxyObjectForFlush(class UPlayerController* PlayerController, class FName SessionName)
{
	static auto Func = Class->GetFunction("LeaderboardFlushCallbackProxy", "CreateProxyObjectForFlush");

	Params::ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Params Parms;

	Parms.PlayerController = PlayerController;
	Parms.SessionName = SessionName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        StatName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULeaderboardQueryCallbackProxy*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULeaderboardQueryCallbackProxy* ULeaderboardQueryCallbackProxy::CreateProxyObjectForIntQuery(class UPlayerController* PlayerController, class FName StatName)
{
	static auto Func = Class->GetFunction("LeaderboardQueryCallbackProxy", "CreateProxyObjectForIntQuery");

	Params::ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Params Parms;

	Parms.PlayerController = PlayerController;
	Parms.StatName = StatName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULogoutCallbackProxy*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULogoutCallbackProxy* ULogoutCallbackProxy::Logout(class UObject* WorldContextObject, class UPlayerController* PlayerController)
{
	static auto Func = Class->GetFunction("LogoutCallbackProxy", "Logout");

	Params::ULogoutCallbackProxy_Logout_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:

void UOnlineBeaconClient::ClientOnConnected()
{
	static auto Func = Class->GetFunction("OnlineBeaconClient", "ClientOnConnected");

	Params::UOnlineBeaconClient_ClientOnConnected_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class FString                      SessionId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPartyReservation           ReservationUpdate                                                (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)

void UPartyBeaconClient::ServerUpdateReservationRequest(const class FString& SessionId, struct FPartyReservation& ReservationUpdate)
{
	static auto Func = Class->GetFunction("PartyBeaconClient", "ServerUpdateReservationRequest");

	Params::UPartyBeaconClient_ServerUpdateReservationRequest_Params Parms;

	Parms.SessionId = SessionId;
	Parms.ReservationUpdate = ReservationUpdate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class FString                      SessionId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPartyReservation           Reservation                                                      (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)

void UPartyBeaconClient::ServerReservationRequest(const class FString& SessionId, struct FPartyReservation& Reservation)
{
	static auto Func = Class->GetFunction("PartyBeaconClient", "ServerReservationRequest");

	Params::UPartyBeaconClient_ServerReservationRequest_Params Parms;

	Parms.SessionId = SessionId;
	Parms.Reservation = Reservation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemUtils.PartyBeaconClient.ServerRemoveMemberFromReservationRequest
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class FString                      SessionId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPartyReservation           ReservationUpdate                                                (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)

void UPartyBeaconClient::ServerRemoveMemberFromReservationRequest(const class FString& SessionId, struct FPartyReservation& ReservationUpdate)
{
	static auto Func = Class->GetFunction("PartyBeaconClient", "ServerRemoveMemberFromReservationRequest");

	Params::UPartyBeaconClient_ServerRemoveMemberFromReservationRequest_Params Parms;

	Parms.SessionId = SessionId;
	Parms.ReservationUpdate = ReservationUpdate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FUniqueNetIdRepl            PartyLeader                                                      (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPartyBeaconClient::ServerCancelReservationRequest(struct FUniqueNetIdRepl& PartyLeader)
{
	static auto Func = Class->GetFunction("PartyBeaconClient", "ServerCancelReservationRequest");

	Params::UPartyBeaconClient_ServerCancelReservationRequest_Params Parms;

	Parms.PartyLeader = PartyLeader;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemUtils.PartyBeaconClient.ServerAddOrUpdateReservationRequest
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class FString                      SessionId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPartyReservation           Reservation                                                      (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)

void UPartyBeaconClient::ServerAddOrUpdateReservationRequest(const class FString& SessionId, struct FPartyReservation& Reservation)
{
	static auto Func = Class->GetFunction("PartyBeaconClient", "ServerAddOrUpdateReservationRequest");

	Params::UPartyBeaconClient_ServerAddOrUpdateReservationRequest_Params Parms;

	Parms.SessionId = SessionId;
	Parms.Reservation = Reservation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int32                              NumRemainingReservations                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPartyBeaconClient::ClientSendReservationUpdates(int32 NumRemainingReservations)
{
	static auto Func = Class->GetFunction("PartyBeaconClient", "ClientSendReservationUpdates");

	Params::UPartyBeaconClient_ClientSendReservationUpdates_Params Parms;

	Parms.NumRemainingReservations = NumRemainingReservations;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:

void UPartyBeaconClient::ClientSendReservationFull()
{
	static auto Func = Class->GetFunction("PartyBeaconClient", "ClientSendReservationFull");

	Params::UPartyBeaconClient_ClientSendReservationFull_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// enum class EPartyReservationResult ReservationResponse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPartyBeaconClient::ClientReservationResponse(enum class EPartyReservationResult ReservationResponse)
{
	static auto Func = Class->GetFunction("PartyBeaconClient", "ClientReservationResponse");

	Params::UPartyBeaconClient_ClientReservationResponse_Params Parms;

	Parms.ReservationResponse = ReservationResponse;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// enum class EPartyReservationResult ReservationResponse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPartyBeaconClient::ClientCancelReservationResponse(enum class EPartyReservationResult ReservationResponse)
{
	static auto Func = Class->GetFunction("PartyBeaconClient", "ClientCancelReservationResponse");

	Params::UPartyBeaconClient_ClientCancelReservationResponse_Params Parms;

	Parms.ReservationResponse = ReservationResponse;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      MatchID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMPMatchOutcome         Outcome                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TurnTimeoutInSeconds                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UQuitMatchCallbackProxy*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UQuitMatchCallbackProxy* UQuitMatchCallbackProxy::QuitMatch(class UObject* WorldContextObject, class UPlayerController* PlayerController, const class FString& MatchID, enum class EMPMatchOutcome Outcome, int32 TurnTimeoutInSeconds)
{
	static auto Func = Class->GetFunction("QuitMatchCallbackProxy", "QuitMatch");

	Params::UQuitMatchCallbackProxy_QuitMatch_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.MatchID = MatchID;
	Parms.Outcome = Outcome;
	Parms.TurnTimeoutInSeconds = TurnTimeoutInSeconds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPlayerController*           InPlayerController                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UShowLoginUICallbackProxy*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UShowLoginUICallbackProxy* UShowLoginUICallbackProxy::ShowExternalLoginUI(class UObject* WorldContextObject, class UPlayerController* InPlayerController)
{
	static auto Func = Class->GetFunction("ShowLoginUICallbackProxy", "ShowExternalLoginUI");

	Params::UShowLoginUICallbackProxy_ShowExternalLoginUI_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.InPlayerController = InPlayerController;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class FString                      SessionId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSpectatorReservation       Reservation                                                      (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)

void USpectatorBeaconClient::ServerReservationRequest(const class FString& SessionId, struct FSpectatorReservation& Reservation)
{
	static auto Func = Class->GetFunction("SpectatorBeaconClient", "ServerReservationRequest");

	Params::USpectatorBeaconClient_ServerReservationRequest_Params Parms;

	Parms.SessionId = SessionId;
	Parms.Reservation = Reservation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FUniqueNetIdRepl            Spectator                                                        (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpectatorBeaconClient::ServerCancelReservationRequest(struct FUniqueNetIdRepl& Spectator)
{
	static auto Func = Class->GetFunction("SpectatorBeaconClient", "ServerCancelReservationRequest");

	Params::USpectatorBeaconClient_ServerCancelReservationRequest_Params Parms;

	Parms.Spectator = Spectator;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int32                              NumRemainingReservations                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpectatorBeaconClient::ClientSendReservationUpdates(int32 NumRemainingReservations)
{
	static auto Func = Class->GetFunction("SpectatorBeaconClient", "ClientSendReservationUpdates");

	Params::USpectatorBeaconClient_ClientSendReservationUpdates_Params Parms;

	Parms.NumRemainingReservations = NumRemainingReservations;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationFull
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:

void USpectatorBeaconClient::ClientSendReservationFull()
{
	static auto Func = Class->GetFunction("SpectatorBeaconClient", "ClientSendReservationFull");

	Params::USpectatorBeaconClient_ClientSendReservationFull_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// enum class ESpectatorReservationResultReservationResponse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpectatorBeaconClient::ClientReservationResponse(enum class ESpectatorReservationResult ReservationResponse)
{
	static auto Func = Class->GetFunction("SpectatorBeaconClient", "ClientReservationResponse");

	Params::USpectatorBeaconClient_ClientReservationResponse_Params Parms;

	Parms.ReservationResponse = ReservationResponse;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// enum class ESpectatorReservationResultReservationResponse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpectatorBeaconClient::ClientCancelReservationResponse(enum class ESpectatorReservationResult ReservationResponse)
{
	static auto Func = Class->GetFunction("SpectatorBeaconClient", "ClientCancelReservationResponse");

	Params::USpectatorBeaconClient_ClientCancelReservationResponse_Params Parms;

	Parms.ReservationResponse = ReservationResponse;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemUtils.TestBeaconClient.ServerPong
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:

void UTestBeaconClient::ServerPong()
{
	static auto Func = Class->GetFunction("TestBeaconClient", "ServerPong");

	Params::UTestBeaconClient_ServerPong_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemUtils.TestBeaconClient.ClientPing
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:

void UTestBeaconClient::ClientPing()
{
	static auto Func = Class->GetFunction("TestBeaconClient", "ClientPing");

	Params::UTestBeaconClient_ClientPing_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Object                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTurnBasedBlueprintLibrary::RegisterTurnBasedMatchInterfaceObject(class UObject* WorldContextObject, class UPlayerController* PlayerController, class UObject* Object)
{
	static auto Func = Class->GetFunction("TurnBasedBlueprintLibrary", "RegisterTurnBasedMatchInterfaceObject");

	Params::UTurnBasedBlueprintLibrary_RegisterTurnBasedMatchInterfaceObject_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.Object = Object;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      MatchID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PlayerIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      PlayerDisplayName                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTurnBasedBlueprintLibrary::GetPlayerDisplayName(class UObject* WorldContextObject, class UPlayerController* PlayerController, const class FString& MatchID, int32 PlayerIndex, class FString* PlayerDisplayName)
{
	static auto Func = Class->GetFunction("TurnBasedBlueprintLibrary", "GetPlayerDisplayName");

	Params::UTurnBasedBlueprintLibrary_GetPlayerDisplayName_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.MatchID = MatchID;
	Parms.PlayerIndex = PlayerIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (PlayerDisplayName != nullptr)
		*PlayerDisplayName = Parms.PlayerDisplayName;

}


// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      MatchID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PlayerIndex                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTurnBasedBlueprintLibrary::GetMyPlayerIndex(class UObject* WorldContextObject, class UPlayerController* PlayerController, const class FString& MatchID, int32* PlayerIndex)
{
	static auto Func = Class->GetFunction("TurnBasedBlueprintLibrary", "GetMyPlayerIndex");

	Params::UTurnBasedBlueprintLibrary_GetMyPlayerIndex_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.MatchID = MatchID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (PlayerIndex != nullptr)
		*PlayerIndex = Parms.PlayerIndex;

}


// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      MatchID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsMyTurn                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTurnBasedBlueprintLibrary::GetIsMyTurn(class UObject* WorldContextObject, class UPlayerController* PlayerController, const class FString& MatchID, bool* bIsMyTurn)
{
	static auto Func = Class->GetFunction("TurnBasedBlueprintLibrary", "GetIsMyTurn");

	Params::UTurnBasedBlueprintLibrary_GetIsMyTurn_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.MatchID = MatchID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (bIsMyTurn != nullptr)
		*bIsMyTurn = Parms.bIsMyTurn;

}


// Function OnlineSubsystemUtils.VoipListenerSynthComponent.IsIdling
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVoipListenerSynthComponent::IsIdling()
{
	static auto Func = Class->GetFunction("VoipListenerSynthComponent", "IsIdling");

	Params::UVoipListenerSynthComponent_IsIdling_Params Parms;


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
