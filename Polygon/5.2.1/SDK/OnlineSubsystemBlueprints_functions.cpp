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


// Function OnlineSubsystemBlueprints.OnlineAchievementsSubsystem.IsSubsystemAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineAchievementsSubsystem::IsSubsystemAvailable()
{
	static auto Func = Class->GetFunction("OnlineAchievementsSubsystem", "IsSubsystemAvailable");

	Params::UOnlineAchievementsSubsystem_IsSubsystemAvailable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineAchievementsSubsystem.GetCachedAchievements
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            PlayerId                                                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FOnlineAchievementBP>OutAchievements                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// enum class EOnlineCachedResult_    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EOnlineCachedResult_ UOnlineAchievementsSubsystem::GetCachedAchievements(const struct FUniqueNetIdRepl& PlayerId, TArray<struct FOnlineAchievementBP>* OutAchievements)
{
	static auto Func = Class->GetFunction("OnlineAchievementsSubsystem", "GetCachedAchievements");

	Params::UOnlineAchievementsSubsystem_GetCachedAchievements_Params Parms;

	Parms.PlayerId = PlayerId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutAchievements != nullptr)
		*OutAchievements = Parms.OutAchievements;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineAchievementsSubsystem.GetCachedAchievementDescription
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      AchievementId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FOnlineAchievementDescBP    OutAchievementDesc                                               (Parm, OutParm, NativeAccessSpecifierPublic)
// enum class EOnlineCachedResult_    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EOnlineCachedResult_ UOnlineAchievementsSubsystem::GetCachedAchievementDescription(const class FString& AchievementId, struct FOnlineAchievementDescBP* OutAchievementDesc)
{
	static auto Func = Class->GetFunction("OnlineAchievementsSubsystem", "GetCachedAchievementDescription");

	Params::UOnlineAchievementsSubsystem_GetCachedAchievementDescription_Params Parms;

	Parms.AchievementId = AchievementId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutAchievementDesc != nullptr)
		*OutAchievementDesc = Parms.OutAchievementDesc;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineAchievementsSubsystem.GetCachedAchievement
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            PlayerId                                                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AchievementId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FOnlineAchievementBP        OutAchievement                                                   (Parm, OutParm, NativeAccessSpecifierPublic)
// enum class EOnlineCachedResult_    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EOnlineCachedResult_ UOnlineAchievementsSubsystem::GetCachedAchievement(const struct FUniqueNetIdRepl& PlayerId, const class FString& AchievementId, struct FOnlineAchievementBP* OutAchievement)
{
	static auto Func = Class->GetFunction("OnlineAchievementsSubsystem", "GetCachedAchievement");

	Params::UOnlineAchievementsSubsystem_GetCachedAchievement_Params Parms;

	Parms.PlayerId = PlayerId;
	Parms.AchievementId = AchievementId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutAchievement != nullptr)
		*OutAchievement = Parms.OutAchievement;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineAchievementsSubsystemWriteAchievements.WriteAchievements
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineAchievementsSubsystem*Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            PlayerId                                                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineAchievementsWrite*    WriteObject                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineAchievementsSubsystemWriteAchievements*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineAchievementsSubsystemWriteAchievements* UOnlineAchievementsSubsystemWriteAchievements::WriteAchievements(class UOnlineAchievementsSubsystem* Subsystem, const struct FUniqueNetIdRepl& PlayerId, class UOnlineAchievementsWrite* WriteObject)
{
	static auto Func = Class->GetFunction("OnlineAchievementsSubsystemWriteAchievements", "WriteAchievements");

	Params::UOnlineAchievementsSubsystemWriteAchievements_WriteAchievements_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.PlayerId = PlayerId;
	Parms.WriteObject = WriteObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineAchievementsSubsystemQueryAchievements.QueryAchievements
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineAchievementsSubsystem*Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            PlayerId                                                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineAchievementsSubsystemQueryAchievements*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineAchievementsSubsystemQueryAchievements* UOnlineAchievementsSubsystemQueryAchievements::QueryAchievements(class UOnlineAchievementsSubsystem* Subsystem, const struct FUniqueNetIdRepl& PlayerId)
{
	static auto Func = Class->GetFunction("OnlineAchievementsSubsystemQueryAchievements", "QueryAchievements");

	Params::UOnlineAchievementsSubsystemQueryAchievements_QueryAchievements_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.PlayerId = PlayerId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineAchievementsSubsystemQueryAchievementDescriptions.QueryAchievementDescriptions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineAchievementsSubsystem*Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            PlayerId                                                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineAchievementsSubsystemQueryAchievementDescriptions*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineAchievementsSubsystemQueryAchievementDescriptions* UOnlineAchievementsSubsystemQueryAchievementDescriptions::QueryAchievementDescriptions(class UOnlineAchievementsSubsystem* Subsystem, const struct FUniqueNetIdRepl& PlayerId)
{
	static auto Func = Class->GetFunction("OnlineAchievementsSubsystemQueryAchievementDescriptions", "QueryAchievementDescriptions");

	Params::UOnlineAchievementsSubsystemQueryAchievementDescriptions_QueryAchievementDescriptions_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.PlayerId = PlayerId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineAvatarSubsystem.IsSubsystemAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineAvatarSubsystem::IsSubsystemAvailable()
{
	static auto Func = Class->GetFunction("OnlineAvatarSubsystem", "IsSubsystemAvailable");

	Params::UOnlineAvatarSubsystem_IsSubsystemAvailable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineAvatarSubsystemGetAvatar.GetAvatar
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineAvatarSubsystem*      Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            TargetUserId                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture*                    DefaultTexture                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineAvatarSubsystemGetAvatar*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineAvatarSubsystemGetAvatar* UOnlineAvatarSubsystemGetAvatar::GetAvatar(class UOnlineAvatarSubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, const struct FUniqueNetIdRepl& TargetUserId, class UTexture* DefaultTexture)
{
	static auto Func = Class->GetFunction("OnlineAvatarSubsystemGetAvatar", "GetAvatar");

	Params::UOnlineAvatarSubsystemGetAvatar_GetAvatar_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserId = LocalUserId;
	Parms.TargetUserId = TargetUserId;
	Parms.DefaultTexture = DefaultTexture;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineAvatarSubsystemGetAvatarUrl.GetAvatarUrl
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineAvatarSubsystem*      Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            TargetUserId                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      DefaultAvatarUrl                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineAvatarSubsystemGetAvatarUrl*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineAvatarSubsystemGetAvatarUrl* UOnlineAvatarSubsystemGetAvatarUrl::GetAvatarUrl(class UOnlineAvatarSubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, const struct FUniqueNetIdRepl& TargetUserId, const class FString& DefaultAvatarUrl)
{
	static auto Func = Class->GetFunction("OnlineAvatarSubsystemGetAvatarUrl", "GetAvatarUrl");

	Params::UOnlineAvatarSubsystemGetAvatarUrl_GetAvatarUrl_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserId = LocalUserId;
	Parms.TargetUserId = TargetUserId;
	Parms.DefaultAvatarUrl = DefaultAvatarUrl;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineChatSubsystem.SendRoomChat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      RoomId                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      MsgBody                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineChatSubsystem::SendRoomChat(const struct FUniqueNetIdRepl& UserId, const class FString& RoomId, const class FString& MsgBody)
{
	static auto Func = Class->GetFunction("OnlineChatSubsystem", "SendRoomChat");

	Params::UOnlineChatSubsystem_SendRoomChat_Params Parms;

	Parms.UserId = UserId;
	Parms.RoomId = RoomId;
	Parms.MsgBody = MsgBody;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineChatSubsystem.SendPrivateChat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            RecipientId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      MsgBody                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineChatSubsystem::SendPrivateChat(const struct FUniqueNetIdRepl& UserId, const struct FUniqueNetIdRepl& RecipientId, const class FString& MsgBody)
{
	static auto Func = Class->GetFunction("OnlineChatSubsystem", "SendPrivateChat");

	Params::UOnlineChatSubsystem_SendPrivateChat_Params Parms;

	Parms.UserId = UserId;
	Parms.RecipientId = RecipientId;
	Parms.MsgBody = MsgBody;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineChatSubsystem.IsSubsystemAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineChatSubsystem::IsSubsystemAvailable()
{
	static auto Func = Class->GetFunction("OnlineChatSubsystem", "IsSubsystemAvailable");

	Params::UOnlineChatSubsystem_IsSubsystemAvailable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineChatSubsystem.IsChatAllowed
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            RecipientId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineChatSubsystem::IsChatAllowed(const struct FUniqueNetIdRepl& UserId, const struct FUniqueNetIdRepl& RecipientId)
{
	static auto Func = Class->GetFunction("OnlineChatSubsystem", "IsChatAllowed");

	Params::UOnlineChatSubsystem_IsChatAllowed_Params Parms;

	Parms.UserId = UserId;
	Parms.RecipientId = RecipientId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineChatSubsystem.GetJoinedRooms
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              OutRooms                                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UOnlineChatSubsystem::GetJoinedRooms(const struct FUniqueNetIdRepl& UserId, TArray<class FString>* OutRooms)
{
	static auto Func = Class->GetFunction("OnlineChatSubsystem", "GetJoinedRooms");

	Params::UOnlineChatSubsystem_GetJoinedRooms_Params Parms;

	Parms.UserId = UserId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutRooms != nullptr)
		*OutRooms = Parms.OutRooms;

}


// Function OnlineSubsystemBlueprints.OnlineChatSubsystem.ExitRoom
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      RoomId                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineChatSubsystem::ExitRoom(const struct FUniqueNetIdRepl& UserId, const class FString& RoomId)
{
	static auto Func = Class->GetFunction("OnlineChatSubsystem", "ExitRoom");

	Params::UOnlineChatSubsystem_ExitRoom_Params Parms;

	Parms.UserId = UserId;
	Parms.RoomId = RoomId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineChatSubsystem.DumpChatState
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UOnlineChatSubsystem::DumpChatState()
{
	static auto Func = Class->GetFunction("OnlineChatSubsystem", "DumpChatState");

	Params::UOnlineChatSubsystem_DumpChatState_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.OnlineEntitlementsSubsystem.IsSubsystemAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineEntitlementsSubsystem::IsSubsystemAvailable()
{
	static auto Func = Class->GetFunction("OnlineEntitlementsSubsystem", "IsSubsystemAvailable");

	Params::UOnlineEntitlementsSubsystem_IsSubsystemAvailable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineEntitlementsSubsystem.GetItemEntitlement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ItemId                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineEntitlement*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineEntitlement* UOnlineEntitlementsSubsystem::GetItemEntitlement(const struct FUniqueNetIdRepl& UserId, const class FString& ItemId)
{
	static auto Func = Class->GetFunction("OnlineEntitlementsSubsystem", "GetItemEntitlement");

	Params::UOnlineEntitlementsSubsystem_GetItemEntitlement_Params Parms;

	Parms.UserId = UserId;
	Parms.ItemId = ItemId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineEntitlementsSubsystem.GetEntitlement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      EntitlementId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineEntitlement*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineEntitlement* UOnlineEntitlementsSubsystem::GetEntitlement(const struct FUniqueNetIdRepl& UserId, const class FString& EntitlementId)
{
	static auto Func = Class->GetFunction("OnlineEntitlementsSubsystem", "GetEntitlement");

	Params::UOnlineEntitlementsSubsystem_GetEntitlement_Params Parms;

	Parms.UserId = UserId;
	Parms.EntitlementId = EntitlementId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineEntitlementsSubsystem.GetAllEntitlements
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Namespace                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UOnlineEntitlement*>  OutUserEntitlements                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UOnlineEntitlementsSubsystem::GetAllEntitlements(const struct FUniqueNetIdRepl& UserId, const class FString& Namespace, TArray<class UOnlineEntitlement*>* OutUserEntitlements)
{
	static auto Func = Class->GetFunction("OnlineEntitlementsSubsystem", "GetAllEntitlements");

	Params::UOnlineEntitlementsSubsystem_GetAllEntitlements_Params Parms;

	Parms.UserId = UserId;
	Parms.Namespace = Namespace;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutUserEntitlements != nullptr)
		*OutUserEntitlements = Parms.OutUserEntitlements;

}


// Function OnlineSubsystemBlueprints.OnlineEntitlementsSubsystemQueryEntitlements.QueryEntitlements
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineEntitlementsSubsystem*Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Namespace                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPagedQueryBP               Page                                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UOnlineEntitlementsSubsystemQueryEntitlements*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineEntitlementsSubsystemQueryEntitlements* UOnlineEntitlementsSubsystemQueryEntitlements::QueryEntitlements(class UOnlineEntitlementsSubsystem* Subsystem, const struct FUniqueNetIdRepl& UserId, const class FString& Namespace, const struct FPagedQueryBP& Page)
{
	static auto Func = Class->GetFunction("OnlineEntitlementsSubsystemQueryEntitlements", "QueryEntitlements");

	Params::UOnlineEntitlementsSubsystemQueryEntitlements_QueryEntitlements_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.UserId = UserId;
	Parms.Namespace = Namespace;
	Parms.Page = Page;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineEventsSubsystem.IsSubsystemAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineEventsSubsystem::IsSubsystemAvailable()
{
	static auto Func = Class->GetFunction("OnlineEventsSubsystem", "IsSubsystemAvailable");

	Params::UOnlineEventsSubsystem_IsSubsystemAvailable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineExternalUISubsystem.ShowPlatformMessageBox
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EPlatformMessageType_   MessageType                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineExternalUISubsystem::ShowPlatformMessageBox(const struct FUniqueNetIdRepl& UserId, enum class EPlatformMessageType_ MessageType)
{
	static auto Func = Class->GetFunction("OnlineExternalUISubsystem", "ShowPlatformMessageBox");

	Params::UOnlineExternalUISubsystem_ShowPlatformMessageBox_Params Parms;

	Parms.UserId = UserId;
	Parms.MessageType = MessageType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineExternalUISubsystem.ShowLeaderboardUI
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      LeaderboardName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineExternalUISubsystem::ShowLeaderboardUI(const class FString& LeaderboardName)
{
	static auto Func = Class->GetFunction("OnlineExternalUISubsystem", "ShowLeaderboardUI");

	Params::UOnlineExternalUISubsystem_ShowLeaderboardUI_Params Parms;

	Parms.LeaderboardName = LeaderboardName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineExternalUISubsystem.ShowInviteUI
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SessionName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineExternalUISubsystem::ShowInviteUI(int32 LocalUserNum, class FName SessionName)
{
	static auto Func = Class->GetFunction("OnlineExternalUISubsystem", "ShowInviteUI");

	Params::UOnlineExternalUISubsystem_ShowInviteUI_Params Parms;

	Parms.LocalUserNum = LocalUserNum;
	Parms.SessionName = SessionName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineExternalUISubsystem.ShowFriendsUI
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineExternalUISubsystem::ShowFriendsUI(int32 LocalUserNum)
{
	static auto Func = Class->GetFunction("OnlineExternalUISubsystem", "ShowFriendsUI");

	Params::UOnlineExternalUISubsystem_ShowFriendsUI_Params Parms;

	Parms.LocalUserNum = LocalUserNum;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineExternalUISubsystem.ShowAchievementsUI
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineExternalUISubsystem::ShowAchievementsUI(int32 LocalUserNum)
{
	static auto Func = Class->GetFunction("OnlineExternalUISubsystem", "ShowAchievementsUI");

	Params::UOnlineExternalUISubsystem_ShowAchievementsUI_Params Parms;

	Parms.LocalUserNum = LocalUserNum;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineExternalUISubsystem.ShowAccountUpgradeUI
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            UniqueId                                                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineExternalUISubsystem::ShowAccountUpgradeUI(const struct FUniqueNetIdRepl& UniqueId)
{
	static auto Func = Class->GetFunction("OnlineExternalUISubsystem", "ShowAccountUpgradeUI");

	Params::UOnlineExternalUISubsystem_ShowAccountUpgradeUI_Params Parms;

	Parms.UniqueId = UniqueId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineExternalUISubsystem.ReportExitInGameStoreUI
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UOnlineExternalUISubsystem::ReportExitInGameStoreUI()
{
	static auto Func = Class->GetFunction("OnlineExternalUISubsystem", "ReportExitInGameStoreUI");

	Params::UOnlineExternalUISubsystem_ReportExitInGameStoreUI_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.OnlineExternalUISubsystem.ReportEnterInGameStoreUI
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UOnlineExternalUISubsystem::ReportEnterInGameStoreUI()
{
	static auto Func = Class->GetFunction("OnlineExternalUISubsystem", "ReportEnterInGameStoreUI");

	Params::UOnlineExternalUISubsystem_ReportEnterInGameStoreUI_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.OnlineExternalUISubsystem.RemoveLoginFlowHandler
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TScriptInterface<class UExternalUIFlowHandler>Handler                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOnlineExternalUISubsystem::RemoveLoginFlowHandler(TScriptInterface<class UExternalUIFlowHandler>& Handler)
{
	static auto Func = Class->GetFunction("OnlineExternalUISubsystem", "RemoveLoginFlowHandler");

	Params::UOnlineExternalUISubsystem_RemoveLoginFlowHandler_Params Parms;

	Parms.Handler = Handler;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.OnlineExternalUISubsystem.NotifyLoginRedirectURL
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              RequestId                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      URL                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLoginFlowResultBP          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FLoginFlowResultBP UOnlineExternalUISubsystem::NotifyLoginRedirectURL(int32 RequestId, const class FString& URL)
{
	static auto Func = Class->GetFunction("OnlineExternalUISubsystem", "NotifyLoginRedirectURL");

	Params::UOnlineExternalUISubsystem_NotifyLoginRedirectURL_Params Parms;

	Parms.RequestId = RequestId;
	Parms.URL = URL;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineExternalUISubsystem.LoginFlowComplete
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              RequestId                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLoginFlowResultBP          Result                                                           (Parm, NativeAccessSpecifierPublic)

void UOnlineExternalUISubsystem::LoginFlowComplete(int32 RequestId, const struct FLoginFlowResultBP& Result)
{
	static auto Func = Class->GetFunction("OnlineExternalUISubsystem", "LoginFlowComplete");

	Params::UOnlineExternalUISubsystem_LoginFlowComplete_Params Parms;

	Parms.RequestId = RequestId;
	Parms.Result = Result;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.OnlineExternalUISubsystem.IsSubsystemAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineExternalUISubsystem::IsSubsystemAvailable()
{
	static auto Func = Class->GetFunction("OnlineExternalUISubsystem", "IsSubsystemAvailable");

	Params::UOnlineExternalUISubsystem_IsSubsystemAvailable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineExternalUISubsystem.CloseWebURL
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineExternalUISubsystem::CloseWebURL()
{
	static auto Func = Class->GetFunction("OnlineExternalUISubsystem", "CloseWebURL");

	Params::UOnlineExternalUISubsystem_CloseWebURL_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineExternalUISubsystem.AddLoginFlowHandler
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TScriptInterface<class UExternalUIFlowHandler>Handler                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOnlineExternalUISubsystem::AddLoginFlowHandler(TScriptInterface<class UExternalUIFlowHandler>& Handler)
{
	static auto Func = Class->GetFunction("OnlineExternalUISubsystem", "AddLoginFlowHandler");

	Params::UOnlineExternalUISubsystem_AddLoginFlowHandler_Params Parms;

	Parms.Handler = Handler;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.OnlineExternalUISubsystemShowLoginUI.ShowLoginUI
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineExternalUISubsystem*  Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ControllerIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShowOnlineOnly                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShowSkipButton                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineExternalUISubsystemShowLoginUI*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineExternalUISubsystemShowLoginUI* UOnlineExternalUISubsystemShowLoginUI::ShowLoginUI(class UOnlineExternalUISubsystem* Subsystem, int32 ControllerIndex, bool bShowOnlineOnly, bool bShowSkipButton)
{
	static auto Func = Class->GetFunction("OnlineExternalUISubsystemShowLoginUI", "ShowLoginUI");

	Params::UOnlineExternalUISubsystemShowLoginUI_ShowLoginUI_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.ControllerIndex = ControllerIndex;
	Parms.bShowOnlineOnly = bShowOnlineOnly;
	Parms.bShowSkipButton = bShowSkipButton;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineExternalUISubsystemShowAccountCreationUI.ShowAccountCreationUI
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineExternalUISubsystem*  Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ControllerIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineExternalUISubsystemShowAccountCreationUI*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineExternalUISubsystemShowAccountCreationUI* UOnlineExternalUISubsystemShowAccountCreationUI::ShowAccountCreationUI(class UOnlineExternalUISubsystem* Subsystem, int32 ControllerIndex)
{
	static auto Func = Class->GetFunction("OnlineExternalUISubsystemShowAccountCreationUI", "ShowAccountCreationUI");

	Params::UOnlineExternalUISubsystemShowAccountCreationUI_ShowAccountCreationUI_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.ControllerIndex = ControllerIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineExternalUISubsystemShowWebURL.ShowWebURL
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineExternalUISubsystem*  Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      URL                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FShowWebUrlParameters       ShowParams                                                       (Parm, NativeAccessSpecifierPublic)
// class UOnlineExternalUISubsystemShowWebURL*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineExternalUISubsystemShowWebURL* UOnlineExternalUISubsystemShowWebURL::ShowWebURL(class UOnlineExternalUISubsystem* Subsystem, const class FString& URL, const struct FShowWebUrlParameters& ShowParams)
{
	static auto Func = Class->GetFunction("OnlineExternalUISubsystemShowWebURL", "ShowWebURL");

	Params::UOnlineExternalUISubsystemShowWebURL_ShowWebURL_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.URL = URL;
	Parms.ShowParams = ShowParams;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineExternalUISubsystemShowProfileUI.ShowProfileUI
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineExternalUISubsystem*  Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            Requestor                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            Requestee                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineExternalUISubsystemShowProfileUI*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineExternalUISubsystemShowProfileUI* UOnlineExternalUISubsystemShowProfileUI::ShowProfileUI(class UOnlineExternalUISubsystem* Subsystem, const struct FUniqueNetIdRepl& Requestor, const struct FUniqueNetIdRepl& Requestee)
{
	static auto Func = Class->GetFunction("OnlineExternalUISubsystemShowProfileUI", "ShowProfileUI");

	Params::UOnlineExternalUISubsystemShowProfileUI_ShowProfileUI_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.Requestor = Requestor;
	Parms.Requestee = Requestee;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineExternalUISubsystemShowStoreUI.ShowStoreUI
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineExternalUISubsystem*  Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FShowStoreParameters        ShowParams                                                       (Parm, NativeAccessSpecifierPublic)
// class UOnlineExternalUISubsystemShowStoreUI*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineExternalUISubsystemShowStoreUI* UOnlineExternalUISubsystemShowStoreUI::ShowStoreUI(class UOnlineExternalUISubsystem* Subsystem, int32 LocalUserNum, const struct FShowStoreParameters& ShowParams)
{
	static auto Func = Class->GetFunction("OnlineExternalUISubsystemShowStoreUI", "ShowStoreUI");

	Params::UOnlineExternalUISubsystemShowStoreUI_ShowStoreUI_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserNum = LocalUserNum;
	Parms.ShowParams = ShowParams;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineExternalUISubsystemShowSendMessageUI.ShowSendMessageUI
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineExternalUISubsystem*  Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FShowSendMessageParameters  ShowParams                                                       (Parm, NativeAccessSpecifierPublic)
// class UOnlineExternalUISubsystemShowSendMessageUI*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineExternalUISubsystemShowSendMessageUI* UOnlineExternalUISubsystemShowSendMessageUI::ShowSendMessageUI(class UOnlineExternalUISubsystem* Subsystem, int32 LocalUserNum, const struct FShowSendMessageParameters& ShowParams)
{
	static auto Func = Class->GetFunction("OnlineExternalUISubsystemShowSendMessageUI", "ShowSendMessageUI");

	Params::UOnlineExternalUISubsystemShowSendMessageUI_ShowSendMessageUI_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserNum = LocalUserNum;
	Parms.ShowParams = ShowParams;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineExternalUISubsystemShowSendMessageToUserUI.ShowSendMessageToUserUI
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineExternalUISubsystem*  Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            Recipient                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FShowSendMessageParameters  ShowParams                                                       (Parm, NativeAccessSpecifierPublic)
// class UOnlineExternalUISubsystemShowSendMessageToUserUI*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineExternalUISubsystemShowSendMessageToUserUI* UOnlineExternalUISubsystemShowSendMessageToUserUI::ShowSendMessageToUserUI(class UOnlineExternalUISubsystem* Subsystem, int32 LocalUserNum, const struct FUniqueNetIdRepl& Recipient, const struct FShowSendMessageParameters& ShowParams)
{
	static auto Func = Class->GetFunction("OnlineExternalUISubsystemShowSendMessageToUserUI", "ShowSendMessageToUserUI");

	Params::UOnlineExternalUISubsystemShowSendMessageToUserUI_ShowSendMessageToUserUI_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserNum = LocalUserNum;
	Parms.Recipient = Recipient;
	Parms.ShowParams = ShowParams;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineFriendsSubsystem.IsSubsystemAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineFriendsSubsystem::IsSubsystemAvailable()
{
	static auto Func = Class->GetFunction("OnlineFriendsSubsystem", "IsSubsystemAvailable");

	Params::UOnlineFriendsSubsystem_IsSubsystemAvailable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineFriendsSubsystem.IsFriend
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            FriendId                                                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ListName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineFriendsSubsystem::IsFriend(int32 LocalUserNum, const struct FUniqueNetIdRepl& FriendId, const class FString& ListName)
{
	static auto Func = Class->GetFunction("OnlineFriendsSubsystem", "IsFriend");

	Params::UOnlineFriendsSubsystem_IsFriend_Params Parms;

	Parms.LocalUserNum = LocalUserNum;
	Parms.FriendId = FriendId;
	Parms.ListName = ListName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineFriendsSubsystem.GetRecentPlayers
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Namespace                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UOnlineRecentPlayerRef*>OutRecentPlayers                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineFriendsSubsystem::GetRecentPlayers(const struct FUniqueNetIdRepl& UserId, const class FString& Namespace, TArray<class UOnlineRecentPlayerRef*>* OutRecentPlayers)
{
	static auto Func = Class->GetFunction("OnlineFriendsSubsystem", "GetRecentPlayers");

	Params::UOnlineFriendsSubsystem_GetRecentPlayers_Params Parms;

	Parms.UserId = UserId;
	Parms.Namespace = Namespace;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutRecentPlayers != nullptr)
		*OutRecentPlayers = Parms.OutRecentPlayers;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineFriendsSubsystem.GetFriendsList
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ListName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UOnlineFriendRef*>    OutFriends                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineFriendsSubsystem::GetFriendsList(int32 LocalUserNum, const class FString& ListName, TArray<class UOnlineFriendRef*>* OutFriends)
{
	static auto Func = Class->GetFunction("OnlineFriendsSubsystem", "GetFriendsList");

	Params::UOnlineFriendsSubsystem_GetFriendsList_Params Parms;

	Parms.LocalUserNum = LocalUserNum;
	Parms.ListName = ListName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutFriends != nullptr)
		*OutFriends = Parms.OutFriends;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineFriendsSubsystem.GetFriendSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<class FString, struct FOnlineFriendSettingsSourceDataConfig>OutSettings                                                      (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineFriendsSubsystem::GetFriendSettings(const struct FUniqueNetIdRepl& UserId, TMap<class FString, struct FOnlineFriendSettingsSourceDataConfig>* OutSettings)
{
	static auto Func = Class->GetFunction("OnlineFriendsSubsystem", "GetFriendSettings");

	Params::UOnlineFriendsSubsystem_GetFriendSettings_Params Parms;

	Parms.UserId = UserId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutSettings != nullptr)
		*OutSettings = Parms.OutSettings;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineFriendsSubsystem.GetFriend
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            FriendId                                                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ListName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineFriendRef*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineFriendRef* UOnlineFriendsSubsystem::GetFriend(int32 LocalUserNum, const struct FUniqueNetIdRepl& FriendId, const class FString& ListName)
{
	static auto Func = Class->GetFunction("OnlineFriendsSubsystem", "GetFriend");

	Params::UOnlineFriendsSubsystem_GetFriend_Params Parms;

	Parms.LocalUserNum = LocalUserNum;
	Parms.FriendId = FriendId;
	Parms.ListName = ListName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineFriendsSubsystem.GetBlockedPlayers
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UOnlineUserRef*>      OutBlockedPlayers                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineFriendsSubsystem::GetBlockedPlayers(const struct FUniqueNetIdRepl& UserId, TArray<class UOnlineUserRef*>* OutBlockedPlayers)
{
	static auto Func = Class->GetFunction("OnlineFriendsSubsystem", "GetBlockedPlayers");

	Params::UOnlineFriendsSubsystem_GetBlockedPlayers_Params Parms;

	Parms.UserId = UserId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutBlockedPlayers != nullptr)
		*OutBlockedPlayers = Parms.OutBlockedPlayers;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineFriendsSubsystem.DumpRecentPlayers
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UOnlineFriendsSubsystem::DumpRecentPlayers()
{
	static auto Func = Class->GetFunction("OnlineFriendsSubsystem", "DumpRecentPlayers");

	Params::UOnlineFriendsSubsystem_DumpRecentPlayers_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.OnlineFriendsSubsystem.DumpBlockedPlayers
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UOnlineFriendsSubsystem::DumpBlockedPlayers()
{
	static auto Func = Class->GetFunction("OnlineFriendsSubsystem", "DumpBlockedPlayers");

	Params::UOnlineFriendsSubsystem_DumpBlockedPlayers_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.OnlineFriendsSubsystemReadFriendsList.ReadFriendsList
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineFriendsSubsystem*     Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ListName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineFriendsSubsystemReadFriendsList*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineFriendsSubsystemReadFriendsList* UOnlineFriendsSubsystemReadFriendsList::ReadFriendsList(class UOnlineFriendsSubsystem* Subsystem, int32 LocalUserNum, const class FString& ListName)
{
	static auto Func = Class->GetFunction("OnlineFriendsSubsystemReadFriendsList", "ReadFriendsList");

	Params::UOnlineFriendsSubsystemReadFriendsList_ReadFriendsList_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserNum = LocalUserNum;
	Parms.ListName = ListName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineFriendsSubsystemDeleteFriendsList.DeleteFriendsList
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineFriendsSubsystem*     Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ListName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineFriendsSubsystemDeleteFriendsList*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineFriendsSubsystemDeleteFriendsList* UOnlineFriendsSubsystemDeleteFriendsList::DeleteFriendsList(class UOnlineFriendsSubsystem* Subsystem, int32 LocalUserNum, const class FString& ListName)
{
	static auto Func = Class->GetFunction("OnlineFriendsSubsystemDeleteFriendsList", "DeleteFriendsList");

	Params::UOnlineFriendsSubsystemDeleteFriendsList_DeleteFriendsList_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserNum = LocalUserNum;
	Parms.ListName = ListName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineFriendsSubsystemSendInvite.SendInvite
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineFriendsSubsystem*     Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            FriendId                                                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ListName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineFriendsSubsystemSendInvite*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineFriendsSubsystemSendInvite* UOnlineFriendsSubsystemSendInvite::SendInvite(class UOnlineFriendsSubsystem* Subsystem, int32 LocalUserNum, const struct FUniqueNetIdRepl& FriendId, const class FString& ListName)
{
	static auto Func = Class->GetFunction("OnlineFriendsSubsystemSendInvite", "SendInvite");

	Params::UOnlineFriendsSubsystemSendInvite_SendInvite_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserNum = LocalUserNum;
	Parms.FriendId = FriendId;
	Parms.ListName = ListName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineFriendsSubsystemAcceptInvite.AcceptInvite
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineFriendsSubsystem*     Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            FriendId                                                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ListName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineFriendsSubsystemAcceptInvite*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineFriendsSubsystemAcceptInvite* UOnlineFriendsSubsystemAcceptInvite::AcceptInvite(class UOnlineFriendsSubsystem* Subsystem, int32 LocalUserNum, const struct FUniqueNetIdRepl& FriendId, const class FString& ListName)
{
	static auto Func = Class->GetFunction("OnlineFriendsSubsystemAcceptInvite", "AcceptInvite");

	Params::UOnlineFriendsSubsystemAcceptInvite_AcceptInvite_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserNum = LocalUserNum;
	Parms.FriendId = FriendId;
	Parms.ListName = ListName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineFriendsSubsystemRejectInvite.RejectInvite
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineFriendsSubsystem*     Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            FriendId                                                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ListName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineFriendsSubsystemRejectInvite*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineFriendsSubsystemRejectInvite* UOnlineFriendsSubsystemRejectInvite::RejectInvite(class UOnlineFriendsSubsystem* Subsystem, int32 LocalUserNum, const struct FUniqueNetIdRepl& FriendId, const class FString& ListName)
{
	static auto Func = Class->GetFunction("OnlineFriendsSubsystemRejectInvite", "RejectInvite");

	Params::UOnlineFriendsSubsystemRejectInvite_RejectInvite_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserNum = LocalUserNum;
	Parms.FriendId = FriendId;
	Parms.ListName = ListName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineFriendsSubsystemSetFriendAlias.SetFriendAlias
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineFriendsSubsystem*     Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            FriendId                                                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ListName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Alias                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineFriendsSubsystemSetFriendAlias*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineFriendsSubsystemSetFriendAlias* UOnlineFriendsSubsystemSetFriendAlias::SetFriendAlias(class UOnlineFriendsSubsystem* Subsystem, int32 LocalUserNum, const struct FUniqueNetIdRepl& FriendId, const class FString& ListName, const class FString& Alias)
{
	static auto Func = Class->GetFunction("OnlineFriendsSubsystemSetFriendAlias", "SetFriendAlias");

	Params::UOnlineFriendsSubsystemSetFriendAlias_SetFriendAlias_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserNum = LocalUserNum;
	Parms.FriendId = FriendId;
	Parms.ListName = ListName;
	Parms.Alias = Alias;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineFriendsSubsystemDeleteFriendAlias.DeleteFriendAlias
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineFriendsSubsystem*     Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            FriendId                                                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ListName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineFriendsSubsystemDeleteFriendAlias*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineFriendsSubsystemDeleteFriendAlias* UOnlineFriendsSubsystemDeleteFriendAlias::DeleteFriendAlias(class UOnlineFriendsSubsystem* Subsystem, int32 LocalUserNum, const struct FUniqueNetIdRepl& FriendId, const class FString& ListName)
{
	static auto Func = Class->GetFunction("OnlineFriendsSubsystemDeleteFriendAlias", "DeleteFriendAlias");

	Params::UOnlineFriendsSubsystemDeleteFriendAlias_DeleteFriendAlias_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserNum = LocalUserNum;
	Parms.FriendId = FriendId;
	Parms.ListName = ListName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineFriendsSubsystemDeleteFriend.DeleteFriend
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineFriendsSubsystem*     Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            FriendId                                                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ListName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineFriendsSubsystemDeleteFriend*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineFriendsSubsystemDeleteFriend* UOnlineFriendsSubsystemDeleteFriend::DeleteFriend(class UOnlineFriendsSubsystem* Subsystem, int32 LocalUserNum, const struct FUniqueNetIdRepl& FriendId, const class FString& ListName)
{
	static auto Func = Class->GetFunction("OnlineFriendsSubsystemDeleteFriend", "DeleteFriend");

	Params::UOnlineFriendsSubsystemDeleteFriend_DeleteFriend_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserNum = LocalUserNum;
	Parms.FriendId = FriendId;
	Parms.ListName = ListName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineFriendsSubsystemAddRecentPlayers.AddRecentPlayers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineFriendsSubsystem*     Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FReportPlayedWithUserInfo>InRecentPlayers                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class FString                      ListName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineFriendsSubsystemAddRecentPlayers*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineFriendsSubsystemAddRecentPlayers* UOnlineFriendsSubsystemAddRecentPlayers::AddRecentPlayers(class UOnlineFriendsSubsystem* Subsystem, const struct FUniqueNetIdRepl& UserId, const TArray<struct FReportPlayedWithUserInfo>& InRecentPlayers, const class FString& ListName)
{
	static auto Func = Class->GetFunction("OnlineFriendsSubsystemAddRecentPlayers", "AddRecentPlayers");

	Params::UOnlineFriendsSubsystemAddRecentPlayers_AddRecentPlayers_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.UserId = UserId;
	Parms.InRecentPlayers = InRecentPlayers;
	Parms.ListName = ListName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineFriendsSubsystemQueryRecentPlayers.QueryRecentPlayers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineFriendsSubsystem*     Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Namespace                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineFriendsSubsystemQueryRecentPlayers*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineFriendsSubsystemQueryRecentPlayers* UOnlineFriendsSubsystemQueryRecentPlayers::QueryRecentPlayers(class UOnlineFriendsSubsystem* Subsystem, const struct FUniqueNetIdRepl& UserId, const class FString& Namespace)
{
	static auto Func = Class->GetFunction("OnlineFriendsSubsystemQueryRecentPlayers", "QueryRecentPlayers");

	Params::UOnlineFriendsSubsystemQueryRecentPlayers_QueryRecentPlayers_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.UserId = UserId;
	Parms.Namespace = Namespace;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineFriendsSubsystemBlockPlayer.BlockPlayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineFriendsSubsystem*     Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            PlayerId                                                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineFriendsSubsystemBlockPlayer*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineFriendsSubsystemBlockPlayer* UOnlineFriendsSubsystemBlockPlayer::BlockPlayer(class UOnlineFriendsSubsystem* Subsystem, int32 LocalUserNum, const struct FUniqueNetIdRepl& PlayerId)
{
	static auto Func = Class->GetFunction("OnlineFriendsSubsystemBlockPlayer", "BlockPlayer");

	Params::UOnlineFriendsSubsystemBlockPlayer_BlockPlayer_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserNum = LocalUserNum;
	Parms.PlayerId = PlayerId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineFriendsSubsystemUnblockPlayer.UnblockPlayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineFriendsSubsystem*     Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            PlayerId                                                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineFriendsSubsystemUnblockPlayer*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineFriendsSubsystemUnblockPlayer* UOnlineFriendsSubsystemUnblockPlayer::UnblockPlayer(class UOnlineFriendsSubsystem* Subsystem, int32 LocalUserNum, const struct FUniqueNetIdRepl& PlayerId)
{
	static auto Func = Class->GetFunction("OnlineFriendsSubsystemUnblockPlayer", "UnblockPlayer");

	Params::UOnlineFriendsSubsystemUnblockPlayer_UnblockPlayer_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserNum = LocalUserNum;
	Parms.PlayerId = PlayerId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineFriendsSubsystemQueryBlockedPlayers.QueryBlockedPlayers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineFriendsSubsystem*     Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineFriendsSubsystemQueryBlockedPlayers*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineFriendsSubsystemQueryBlockedPlayers* UOnlineFriendsSubsystemQueryBlockedPlayers::QueryBlockedPlayers(class UOnlineFriendsSubsystem* Subsystem, const struct FUniqueNetIdRepl& UserId)
{
	static auto Func = Class->GetFunction("OnlineFriendsSubsystemQueryBlockedPlayers", "QueryBlockedPlayers");

	Params::UOnlineFriendsSubsystemQueryBlockedPlayers_QueryBlockedPlayers_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.UserId = UserId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineFriendsSubsystemQueryFriendSettings.QueryFriendSettings
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineFriendsSubsystem*     Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineFriendsSubsystemQueryFriendSettings*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineFriendsSubsystemQueryFriendSettings* UOnlineFriendsSubsystemQueryFriendSettings::QueryFriendSettings(class UOnlineFriendsSubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId)
{
	static auto Func = Class->GetFunction("OnlineFriendsSubsystemQueryFriendSettings", "QueryFriendSettings");

	Params::UOnlineFriendsSubsystemQueryFriendSettings_QueryFriendSettings_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserId = LocalUserId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineFriendsSubsystemSetFriendSettings.SetFriendSettings
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineFriendsSubsystem*     Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Source                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNeverShowAgain                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineFriendsSubsystemSetFriendSettings*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineFriendsSubsystemSetFriendSettings* UOnlineFriendsSubsystemSetFriendSettings::SetFriendSettings(class UOnlineFriendsSubsystem* Subsystem, const struct FUniqueNetIdRepl& UserId, const class FString& Source, bool bNeverShowAgain)
{
	static auto Func = Class->GetFunction("OnlineFriendsSubsystemSetFriendSettings", "SetFriendSettings");

	Params::UOnlineFriendsSubsystemSetFriendSettings_SetFriendSettings_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.UserId = UserId;
	Parms.Source = Source;
	Parms.bNeverShowAgain = bNeverShowAgain;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineGameActivitySubsystem.UpdatePlayerLocation
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FOnlineActivityPlayerLocationBPActivityPlayerLocation                                           (Parm, OutParm, NativeAccessSpecifierPublic)

void UOnlineGameActivitySubsystem::UpdatePlayerLocation(const struct FUniqueNetIdRepl& LocalUserId, struct FOnlineActivityPlayerLocationBP* ActivityPlayerLocation)
{
	static auto Func = Class->GetFunction("OnlineGameActivitySubsystem", "UpdatePlayerLocation");

	Params::UOnlineGameActivitySubsystem_UpdatePlayerLocation_Params Parms;

	Parms.LocalUserId = LocalUserId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (ActivityPlayerLocation != nullptr)
		*ActivityPlayerLocation = Parms.ActivityPlayerLocation;

}


// Function OnlineSubsystemBlueprints.OnlineGameActivitySubsystem.IsSubsystemAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineGameActivitySubsystem::IsSubsystemAvailable()
{
	static auto Func = Class->GetFunction("OnlineGameActivitySubsystem", "IsSubsystemAvailable");

	Params::UOnlineGameActivitySubsystem_IsSubsystemAvailable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineGameActivitySubsystemStartActivity.StartActivity
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineGameActivitySubsystem*Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ActivityId                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<class FString, struct FVariantDataBP>Params                                                           (Parm, NativeAccessSpecifierPublic)
// class UOnlineGameActivitySubsystemStartActivity*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineGameActivitySubsystemStartActivity* UOnlineGameActivitySubsystemStartActivity::StartActivity(class UOnlineGameActivitySubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, const class FString& ActivityId, TMap<class FString, struct FVariantDataBP> Params)
{
	static auto Func = Class->GetFunction("OnlineGameActivitySubsystemStartActivity", "StartActivity");

	Params::UOnlineGameActivitySubsystemStartActivity_StartActivity_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserId = LocalUserId;
	Parms.ActivityId = ActivityId;
	Parms.Params = Params;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineGameActivitySubsystemEndActivity.EndActivity
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineGameActivitySubsystem*Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ActivityId                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EOnlineActivityOutcome_ ActivityOutcome                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<class FString, struct FVariantDataBP>Params                                                           (Parm, NativeAccessSpecifierPublic)
// class UOnlineGameActivitySubsystemEndActivity*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineGameActivitySubsystemEndActivity* UOnlineGameActivitySubsystemEndActivity::EndActivity(class UOnlineGameActivitySubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, const class FString& ActivityId, enum class EOnlineActivityOutcome_ ActivityOutcome, TMap<class FString, struct FVariantDataBP> Params)
{
	static auto Func = Class->GetFunction("OnlineGameActivitySubsystemEndActivity", "EndActivity");

	Params::UOnlineGameActivitySubsystemEndActivity_EndActivity_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserId = LocalUserId;
	Parms.ActivityId = ActivityId;
	Parms.ActivityOutcome = ActivityOutcome;
	Parms.Params = Params;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineGameActivitySubsystemResetAllActiveActivities.ResetAllActiveActivities
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineGameActivitySubsystem*Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineGameActivitySubsystemResetAllActiveActivities*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineGameActivitySubsystemResetAllActiveActivities* UOnlineGameActivitySubsystemResetAllActiveActivities::ResetAllActiveActivities(class UOnlineGameActivitySubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId)
{
	static auto Func = Class->GetFunction("OnlineGameActivitySubsystemResetAllActiveActivities", "ResetAllActiveActivities");

	Params::UOnlineGameActivitySubsystemResetAllActiveActivities_ResetAllActiveActivities_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserId = LocalUserId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineGameActivitySubsystemResumeActivity.ResumeActivity
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineGameActivitySubsystem*Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ActivityId                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FOnlineActivityTasksToResetBPTasksToReset                                                     (Parm, NativeAccessSpecifierPublic)
// class UOnlineGameActivitySubsystemResumeActivity*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineGameActivitySubsystemResumeActivity* UOnlineGameActivitySubsystemResumeActivity::ResumeActivity(class UOnlineGameActivitySubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, const class FString& ActivityId, const struct FOnlineActivityTasksToResetBP& TasksToReset)
{
	static auto Func = Class->GetFunction("OnlineGameActivitySubsystemResumeActivity", "ResumeActivity");

	Params::UOnlineGameActivitySubsystemResumeActivity_ResumeActivity_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserId = LocalUserId;
	Parms.ActivityId = ActivityId;
	Parms.TasksToReset = TasksToReset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineGameActivitySubsystemSetActivityAvailability.SetActivityAvailability
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineGameActivitySubsystem*Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ActivityId                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnabled                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineGameActivitySubsystemSetActivityAvailability*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineGameActivitySubsystemSetActivityAvailability* UOnlineGameActivitySubsystemSetActivityAvailability::SetActivityAvailability(class UOnlineGameActivitySubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, const class FString& ActivityId, bool bEnabled)
{
	static auto Func = Class->GetFunction("OnlineGameActivitySubsystemSetActivityAvailability", "SetActivityAvailability");

	Params::UOnlineGameActivitySubsystemSetActivityAvailability_SetActivityAvailability_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserId = LocalUserId;
	Parms.ActivityId = ActivityId;
	Parms.bEnabled = bEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineGameActivitySubsystemSetActivityPriority.SetActivityPriority
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineGameActivitySubsystem*Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<class FString, int32>         PrioritizedActivities                                            (Parm, NativeAccessSpecifierPublic)
// class UOnlineGameActivitySubsystemSetActivityPriority*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineGameActivitySubsystemSetActivityPriority* UOnlineGameActivitySubsystemSetActivityPriority::SetActivityPriority(class UOnlineGameActivitySubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, TMap<class FString, int32> PrioritizedActivities)
{
	static auto Func = Class->GetFunction("OnlineGameActivitySubsystemSetActivityPriority", "SetActivityPriority");

	Params::UOnlineGameActivitySubsystemSetActivityPriority_SetActivityPriority_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserId = LocalUserId;
	Parms.PrioritizedActivities = PrioritizedActivities;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineGameItemStatsSubsystem.IsSubsystemAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineGameItemStatsSubsystem::IsSubsystemAvailable()
{
	static auto Func = Class->GetFunction("OnlineGameItemStatsSubsystem", "IsSubsystemAvailable");

	Params::UOnlineGameItemStatsSubsystem_IsSubsystemAvailable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineGameItemStatsSubsystemItemUsage.ItemUsage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineGameItemStatsSubsystem*Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ItemUsedBy                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              ItemsUsed                                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UOnlineGameItemStatsSubsystemItemUsage*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineGameItemStatsSubsystemItemUsage* UOnlineGameItemStatsSubsystemItemUsage::ItemUsage(class UOnlineGameItemStatsSubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, const class FString& ItemUsedBy, const TArray<class FString>& ItemsUsed)
{
	static auto Func = Class->GetFunction("OnlineGameItemStatsSubsystemItemUsage", "ItemUsage");

	Params::UOnlineGameItemStatsSubsystemItemUsage_ItemUsage_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserId = LocalUserId;
	Parms.ItemUsedBy = ItemUsedBy;
	Parms.ItemsUsed = ItemsUsed;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineGameItemStatsSubsystemItemImpact.ItemImpact
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineGameItemStatsSubsystem*Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              TargetActors                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class FString                      ImpactInitiatedBy                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              ItemsUsed                                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UOnlineGameItemStatsSubsystemItemImpact*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineGameItemStatsSubsystemItemImpact* UOnlineGameItemStatsSubsystemItemImpact::ItemImpact(class UOnlineGameItemStatsSubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, const TArray<class FString>& TargetActors, const class FString& ImpactInitiatedBy, const TArray<class FString>& ItemsUsed)
{
	static auto Func = Class->GetFunction("OnlineGameItemStatsSubsystemItemImpact", "ItemImpact");

	Params::UOnlineGameItemStatsSubsystemItemImpact_ItemImpact_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserId = LocalUserId;
	Parms.TargetActors = TargetActors;
	Parms.ImpactInitiatedBy = ImpactInitiatedBy;
	Parms.ItemsUsed = ItemsUsed;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineGameItemStatsSubsystemItemMitigation.ItemMitigation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineGameItemStatsSubsystem*Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              ItemsUsed                                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class FString>              ImpactItemsMitigated                                             (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class FString                      ItemUsedBy                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineGameItemStatsSubsystemItemMitigation*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineGameItemStatsSubsystemItemMitigation* UOnlineGameItemStatsSubsystemItemMitigation::ItemMitigation(class UOnlineGameItemStatsSubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, const TArray<class FString>& ItemsUsed, const TArray<class FString>& ImpactItemsMitigated, const class FString& ItemUsedBy)
{
	static auto Func = Class->GetFunction("OnlineGameItemStatsSubsystemItemMitigation", "ItemMitigation");

	Params::UOnlineGameItemStatsSubsystemItemMitigation_ItemMitigation_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserId = LocalUserId;
	Parms.ItemsUsed = ItemsUsed;
	Parms.ImpactItemsMitigated = ImpactItemsMitigated;
	Parms.ItemUsedBy = ItemUsedBy;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineGameItemStatsSubsystemItemAvailabilityChange.ItemAvailabilityChange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineGameItemStatsSubsystem*Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              AvailableItems                                                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class FString>              UnavailableItems                                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UOnlineGameItemStatsSubsystemItemAvailabilityChange*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineGameItemStatsSubsystemItemAvailabilityChange* UOnlineGameItemStatsSubsystemItemAvailabilityChange::ItemAvailabilityChange(class UOnlineGameItemStatsSubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, const TArray<class FString>& AvailableItems, const TArray<class FString>& UnavailableItems)
{
	static auto Func = Class->GetFunction("OnlineGameItemStatsSubsystemItemAvailabilityChange", "ItemAvailabilityChange");

	Params::UOnlineGameItemStatsSubsystemItemAvailabilityChange_ItemAvailabilityChange_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserId = LocalUserId;
	Parms.AvailableItems = AvailableItems;
	Parms.UnavailableItems = UnavailableItems;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineGameItemStatsSubsystemItemInventoryChange.ItemInventoryChange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineGameItemStatsSubsystem*Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              ItemsToAdd                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class FString>              ItemsToRemove                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UOnlineGameItemStatsSubsystemItemInventoryChange*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineGameItemStatsSubsystemItemInventoryChange* UOnlineGameItemStatsSubsystemItemInventoryChange::ItemInventoryChange(class UOnlineGameItemStatsSubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, const TArray<class FString>& ItemsToAdd, const TArray<class FString>& ItemsToRemove)
{
	static auto Func = Class->GetFunction("OnlineGameItemStatsSubsystemItemInventoryChange", "ItemInventoryChange");

	Params::UOnlineGameItemStatsSubsystemItemInventoryChange_ItemInventoryChange_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserId = LocalUserId;
	Parms.ItemsToAdd = ItemsToAdd;
	Parms.ItemsToRemove = ItemsToRemove;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineGameItemStatsSubsystemItemLoadoutChange.ItemLoadoutChange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineGameItemStatsSubsystem*Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              EquippedItems                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class FString>              UnequippedItems                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UOnlineGameItemStatsSubsystemItemLoadoutChange*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineGameItemStatsSubsystemItemLoadoutChange* UOnlineGameItemStatsSubsystemItemLoadoutChange::ItemLoadoutChange(class UOnlineGameItemStatsSubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, const TArray<class FString>& EquippedItems, const TArray<class FString>& UnequippedItems)
{
	static auto Func = Class->GetFunction("OnlineGameItemStatsSubsystemItemLoadoutChange", "ItemLoadoutChange");

	Params::UOnlineGameItemStatsSubsystemItemLoadoutChange_ItemLoadoutChange_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserId = LocalUserId;
	Parms.EquippedItems = EquippedItems;
	Parms.UnequippedItems = UnequippedItems;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineGroupsSubsystem.SetNamespace
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Ns                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOnlineGroupsSubsystem::SetNamespace(const class FString& Ns)
{
	static auto Func = Class->GetFunction("OnlineGroupsSubsystem", "SetNamespace");

	Params::UOnlineGroupsSubsystem_SetNamespace_Params Parms;

	Parms.Ns = Ns;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.OnlineGroupsSubsystem.IsSubsystemAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineGroupsSubsystem::IsSubsystemAvailable()
{
	static auto Func = Class->GetFunction("OnlineGroupsSubsystem", "IsSubsystemAvailable");

	Params::UOnlineGroupsSubsystem_IsSubsystemAvailable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineGroupsSubsystem.GetNamespace
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UOnlineGroupsSubsystem::GetNamespace()
{
	static auto Func = Class->GetFunction("OnlineGroupsSubsystem", "GetNamespace");

	Params::UOnlineGroupsSubsystem_GetNamespace_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineHelpers.ReadFileDataAsString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UFileData*                   FileData                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UOnlineHelpers::ReadFileDataAsString(class UFileData* FileData)
{
	static auto Func = Class->GetFunction("OnlineHelpers", "ReadFileDataAsString");

	Params::UOnlineHelpers_ReadFileDataAsString_Params Parms;

	Parms.FileData = FileData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineHelpers.ReadFileDataAsSaveGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UFileData*                   FileData                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USaveGame*                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USaveGame* UOnlineHelpers::ReadFileDataAsSaveGame(class UFileData* FileData)
{
	static auto Func = Class->GetFunction("OnlineHelpers", "ReadFileDataAsSaveGame");

	Params::UOnlineHelpers_ReadFileDataAsSaveGame_Params Parms;

	Parms.FileData = FileData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineHelpers.IsValid_PartyId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPartyId*                    A                                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineHelpers::IsValid_PartyId(class UPartyId* A)
{
	static auto Func = Class->GetFunction("OnlineHelpers", "IsValid_PartyId");

	Params::UOnlineHelpers_IsValid_PartyId_Params Parms;

	Parms.A = A;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineHelpers.IsValid_LobbyId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULobbyId*                    A                                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineHelpers::IsValid_LobbyId(class ULobbyId* A)
{
	static auto Func = Class->GetFunction("OnlineHelpers", "IsValid_LobbyId");

	Params::UOnlineHelpers_IsValid_LobbyId_Params Parms;

	Parms.A = A;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineHelpers.GetResolvedConnectStringBySearchResult
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UOnlineSessionSubsystem*     Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FOnlineSessionSearchResultBPSearchResult                                                     (Parm, NativeAccessSpecifierPublic)
// class FName                        PortType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutConnectInfo                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOnlineHelpers::GetResolvedConnectStringBySearchResult(class UOnlineSessionSubsystem* Subsystem, const struct FOnlineSessionSearchResultBP& SearchResult, class FName PortType, bool* bWasSuccessful, class FString* OutConnectInfo)
{
	static auto Func = Class->GetFunction("OnlineHelpers", "GetResolvedConnectStringBySearchResult");

	Params::UOnlineHelpers_GetResolvedConnectStringBySearchResult_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.SearchResult = SearchResult;
	Parms.PortType = PortType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (bWasSuccessful != nullptr)
		*bWasSuccessful = Parms.bWasSuccessful;

	if (OutConnectInfo != nullptr)
		*OutConnectInfo = Parms.OutConnectInfo;

}


// Function OnlineSubsystemBlueprints.OnlineHelpers.GetResolvedConnectStringByName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UOnlineSessionSubsystem*     Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SessionName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        PortType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutConnectInfo                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOnlineHelpers::GetResolvedConnectStringByName(class UOnlineSessionSubsystem* Subsystem, class FName SessionName, class FName PortType, bool* bWasSuccessful, class FString* OutConnectInfo)
{
	static auto Func = Class->GetFunction("OnlineHelpers", "GetResolvedConnectStringByName");

	Params::UOnlineHelpers_GetResolvedConnectStringByName_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.SessionName = SessionName;
	Parms.PortType = PortType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (bWasSuccessful != nullptr)
		*bWasSuccessful = Parms.bWasSuccessful;

	if (OutConnectInfo != nullptr)
		*OutConnectInfo = Parms.OutConnectInfo;

}


// Function OnlineSubsystemBlueprints.OnlineHelpers.GetPrimaryPartyType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int64                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int64 UOnlineHelpers::GetPrimaryPartyType()
{
	static auto Func = Class->GetFunction("OnlineHelpers", "GetPrimaryPartyType");

	Params::UOnlineHelpers_GetPrimaryPartyType_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineHelpers.GetPlayerStateUniqueNetId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPlayerState*                PlayerState                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FUniqueNetIdRepl UOnlineHelpers::GetPlayerStateUniqueNetId(class UPlayerState* PlayerState)
{
	static auto Func = Class->GetFunction("OnlineHelpers", "GetPlayerStateUniqueNetId");

	Params::UOnlineHelpers_GetPlayerStateUniqueNetId_Params Parms;

	Parms.PlayerState = PlayerState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineHelpers.GetCurrentSubsystemName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UOnlineHelpers::GetCurrentSubsystemName(class UObject* WorldContextObject)
{
	static auto Func = Class->GetFunction("OnlineHelpers", "GetCurrentSubsystemName");

	Params::UOnlineHelpers_GetCurrentSubsystemName_Params Parms;

	Parms.WorldContextObject = WorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineHelpers.GetControllerUniqueNetId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FUniqueNetIdRepl UOnlineHelpers::GetControllerUniqueNetId(class UPlayerController* PlayerController)
{
	static auto Func = Class->GetFunction("OnlineHelpers", "GetControllerUniqueNetId");

	Params::UOnlineHelpers_GetControllerUniqueNetId_Params Parms;

	Parms.PlayerController = PlayerController;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineHelpers.FUniqueNetIdIsValid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUniqueNetIdRepl            InNetId                                                          (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineHelpers::FUniqueNetIdIsValid(const struct FUniqueNetIdRepl& InNetId)
{
	static auto Func = Class->GetFunction("OnlineHelpers", "FUniqueNetIdIsValid");

	Params::UOnlineHelpers_FUniqueNetIdIsValid_Params Parms;

	Parms.InNetId = InNetId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineHelpers.FUniqueNetIdGetType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUniqueNetIdRepl            InNetId                                                          (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UOnlineHelpers::FUniqueNetIdGetType(const struct FUniqueNetIdRepl& InNetId)
{
	static auto Func = Class->GetFunction("OnlineHelpers", "FUniqueNetIdGetType");

	Params::UOnlineHelpers_FUniqueNetIdGetType_Params Parms;

	Parms.InNetId = InNetId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineHelpers.EqualEqual_PartyIdPartyId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPartyId*                    A                                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPartyId*                    B                                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineHelpers::EqualEqual_PartyIdPartyId(class UPartyId* A, class UPartyId* B)
{
	static auto Func = Class->GetFunction("OnlineHelpers", "EqualEqual_PartyIdPartyId");

	Params::UOnlineHelpers_EqualEqual_PartyIdPartyId_Params Parms;

	Parms.A = A;
	Parms.B = B;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineHelpers.EqualEqual_LobbyIdLobbyId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULobbyId*                    A                                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULobbyId*                    B                                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineHelpers::EqualEqual_LobbyIdLobbyId(class ULobbyId* A, class ULobbyId* B)
{
	static auto Func = Class->GetFunction("OnlineHelpers", "EqualEqual_LobbyIdLobbyId");

	Params::UOnlineHelpers_EqualEqual_LobbyIdLobbyId_Params Parms;

	Parms.A = A;
	Parms.B = B;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineHelpers.EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUniqueNetIdRepl            InA                                                              (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            InB                                                              (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineHelpers::EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl(struct FUniqueNetIdRepl& InA, struct FUniqueNetIdRepl& InB)
{
	static auto Func = Class->GetFunction("OnlineHelpers", "EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl");

	Params::UOnlineHelpers_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_Params Parms;

	Parms.InA = InA;
	Parms.InB = InB;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineHelpers.CreateMutablePartyData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UReadablePartyData*          ReadOnlyPartyData                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMutablePartyData*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMutablePartyData* UOnlineHelpers::CreateMutablePartyData(class UReadablePartyData* ReadOnlyPartyData)
{
	static auto Func = Class->GetFunction("OnlineHelpers", "CreateMutablePartyData");

	Params::UOnlineHelpers_CreateMutablePartyData_Params Parms;

	Parms.ReadOnlyPartyData = ReadOnlyPartyData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineHelpers.CreateFileDataFromString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      String                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFileData*                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFileData* UOnlineHelpers::CreateFileDataFromString(const class FString& String)
{
	static auto Func = Class->GetFunction("OnlineHelpers", "CreateFileDataFromString");

	Params::UOnlineHelpers_CreateFileDataFromString_Params Parms;

	Parms.String = String;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineHelpers.CreateFileDataFromSaveGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USaveGame*                   SaveGame                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFileData*                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFileData* UOnlineHelpers::CreateFileDataFromSaveGame(class USaveGame* SaveGame)
{
	static auto Func = Class->GetFunction("OnlineHelpers", "CreateFileDataFromSaveGame");

	Params::UOnlineHelpers_CreateFileDataFromSaveGame_Params Parms;

	Parms.SaveGame = SaveGame;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineHelpers.Conv_ULobbyIdToUOnlinePartyJoinInfo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            InLocalUserId                                                    (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlinePartySubsystem*       InPartySubsystem                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULobbyId*                    InLobbyId                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlinePartyJoinInfo*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlinePartyJoinInfo* UOnlineHelpers::Conv_ULobbyIdToUOnlinePartyJoinInfo(const struct FUniqueNetIdRepl& InLocalUserId, class UOnlinePartySubsystem* InPartySubsystem, class ULobbyId* InLobbyId)
{
	static auto Func = Class->GetFunction("OnlineHelpers", "Conv_ULobbyIdToUOnlinePartyJoinInfo");

	Params::UOnlineHelpers_Conv_ULobbyIdToUOnlinePartyJoinInfo_Params Parms;

	Parms.InLocalUserId = InLocalUserId;
	Parms.InPartySubsystem = InPartySubsystem;
	Parms.InLobbyId = InLobbyId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineHelpers.Conv_FUniqueNetIdReplToString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUniqueNetIdRepl            InNetId                                                          (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UOnlineHelpers::Conv_FUniqueNetIdReplToString(const struct FUniqueNetIdRepl& InNetId)
{
	static auto Func = Class->GetFunction("OnlineHelpers", "Conv_FUniqueNetIdReplToString");

	Params::UOnlineHelpers_Conv_FUniqueNetIdReplToString_Params Parms;

	Parms.InNetId = InNetId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineIdentitySubsystem.IsSubsystemAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineIdentitySubsystem::IsSubsystemAvailable()
{
	static auto Func = Class->GetFunction("OnlineIdentitySubsystem", "IsSubsystemAvailable");

	Params::UOnlineIdentitySubsystem_IsSubsystemAvailable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineIdentitySubsystem.GetUserAccount
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUserOnlineAccountRef*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUserOnlineAccountRef* UOnlineIdentitySubsystem::GetUserAccount(const struct FUniqueNetIdRepl& UserId)
{
	static auto Func = Class->GetFunction("OnlineIdentitySubsystem", "GetUserAccount");

	Params::UOnlineIdentitySubsystem_GetUserAccount_Params Parms;

	Parms.UserId = UserId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineIdentitySubsystem.GetUniquePlayerId
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FUniqueNetIdRepl UOnlineIdentitySubsystem::GetUniquePlayerId(int32 LocalUserNum)
{
	static auto Func = Class->GetFunction("OnlineIdentitySubsystem", "GetUniquePlayerId");

	Params::UOnlineIdentitySubsystem_GetUniquePlayerId_Params Parms;

	Parms.LocalUserNum = LocalUserNum;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineIdentitySubsystem.GetSponsorUniquePlayerId
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FUniqueNetIdRepl UOnlineIdentitySubsystem::GetSponsorUniquePlayerId(int32 LocalUserNum)
{
	static auto Func = Class->GetFunction("OnlineIdentitySubsystem", "GetSponsorUniquePlayerId");

	Params::UOnlineIdentitySubsystem_GetSponsorUniquePlayerId_Params Parms;

	Parms.LocalUserNum = LocalUserNum;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineIdentitySubsystem.GetPlayerNickname
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UOnlineIdentitySubsystem::GetPlayerNickname(const struct FUniqueNetIdRepl& UserId)
{
	static auto Func = Class->GetFunction("OnlineIdentitySubsystem", "GetPlayerNickname");

	Params::UOnlineIdentitySubsystem_GetPlayerNickname_Params Parms;

	Parms.UserId = UserId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineIdentitySubsystem.GetPlatformUserIdFromUniqueNetId
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUniqueNetIdRepl            UniqueNetId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UOnlineIdentitySubsystem::GetPlatformUserIdFromUniqueNetId(const struct FUniqueNetIdRepl& UniqueNetId)
{
	static auto Func = Class->GetFunction("OnlineIdentitySubsystem", "GetPlatformUserIdFromUniqueNetId");

	Params::UOnlineIdentitySubsystem_GetPlatformUserIdFromUniqueNetId_Params Parms;

	Parms.UniqueNetId = UniqueNetId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineIdentitySubsystem.GetLoginStatus
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EOnlineLoginStatus      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EOnlineLoginStatus UOnlineIdentitySubsystem::GetLoginStatus(int32 LocalUserNum)
{
	static auto Func = Class->GetFunction("OnlineIdentitySubsystem", "GetLoginStatus");

	Params::UOnlineIdentitySubsystem_GetLoginStatus_Params Parms;

	Parms.LocalUserNum = LocalUserNum;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineIdentitySubsystem.GetAuthType
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UOnlineIdentitySubsystem::GetAuthType()
{
	static auto Func = Class->GetFunction("OnlineIdentitySubsystem", "GetAuthType");

	Params::UOnlineIdentitySubsystem_GetAuthType_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineIdentitySubsystem.GetAuthToken
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UOnlineIdentitySubsystem::GetAuthToken(int32 LocalUserNum)
{
	static auto Func = Class->GetFunction("OnlineIdentitySubsystem", "GetAuthToken");

	Params::UOnlineIdentitySubsystem_GetAuthToken_Params Parms;

	Parms.LocalUserNum = LocalUserNum;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineIdentitySubsystem.GetAllUserAccounts
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UUserOnlineAccountRef*>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UUserOnlineAccountRef*> UOnlineIdentitySubsystem::GetAllUserAccounts()
{
	static auto Func = Class->GetFunction("OnlineIdentitySubsystem", "GetAllUserAccounts");

	Params::UOnlineIdentitySubsystem_GetAllUserAccounts_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineIdentitySubsystem.CreateUniquePlayerId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Str                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FUniqueNetIdRepl UOnlineIdentitySubsystem::CreateUniquePlayerId(const class FString& Str)
{
	static auto Func = Class->GetFunction("OnlineIdentitySubsystem", "CreateUniquePlayerId");

	Params::UOnlineIdentitySubsystem_CreateUniquePlayerId_Params Parms;

	Parms.Str = Str;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineIdentitySubsystem.ClearCachedAuthToken
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOnlineIdentitySubsystem::ClearCachedAuthToken(const struct FUniqueNetIdRepl& UserId)
{
	static auto Func = Class->GetFunction("OnlineIdentitySubsystem", "ClearCachedAuthToken");

	Params::UOnlineIdentitySubsystem_ClearCachedAuthToken_Params Parms;

	Parms.UserId = UserId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.OnlineIdentitySubsystemLogin.Login
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineIdentitySubsystem*    Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FOnlineAccountCredential    AccountCredentials                                               (Parm, NativeAccessSpecifierPublic)
// class UOnlineIdentitySubsystemLogin*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineIdentitySubsystemLogin* UOnlineIdentitySubsystemLogin::Login(class UOnlineIdentitySubsystem* Subsystem, int32 LocalUserNum, const struct FOnlineAccountCredential& AccountCredentials)
{
	static auto Func = Class->GetFunction("OnlineIdentitySubsystemLogin", "Login");

	Params::UOnlineIdentitySubsystemLogin_Login_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserNum = LocalUserNum;
	Parms.AccountCredentials = AccountCredentials;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineIdentitySubsystemLogout.Logout
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineIdentitySubsystem*    Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineIdentitySubsystemLogout*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineIdentitySubsystemLogout* UOnlineIdentitySubsystemLogout::Logout(class UOnlineIdentitySubsystem* Subsystem, int32 LocalUserNum)
{
	static auto Func = Class->GetFunction("OnlineIdentitySubsystemLogout", "Logout");

	Params::UOnlineIdentitySubsystemLogout_Logout_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserNum = LocalUserNum;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineIdentitySubsystemAutoLogin.AutoLogin
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineIdentitySubsystem*    Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineIdentitySubsystemAutoLogin*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineIdentitySubsystemAutoLogin* UOnlineIdentitySubsystemAutoLogin::AutoLogin(class UOnlineIdentitySubsystem* Subsystem, int32 LocalUserNum)
{
	static auto Func = Class->GetFunction("OnlineIdentitySubsystemAutoLogin", "AutoLogin");

	Params::UOnlineIdentitySubsystemAutoLogin_AutoLogin_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserNum = LocalUserNum;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineIdentitySubsystemRevokeAuthToken.RevokeAuthToken
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineIdentitySubsystem*    Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineIdentitySubsystemRevokeAuthToken*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineIdentitySubsystemRevokeAuthToken* UOnlineIdentitySubsystemRevokeAuthToken::RevokeAuthToken(class UOnlineIdentitySubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId)
{
	static auto Func = Class->GetFunction("OnlineIdentitySubsystemRevokeAuthToken", "RevokeAuthToken");

	Params::UOnlineIdentitySubsystemRevokeAuthToken_RevokeAuthToken_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserId = LocalUserId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineIdentitySubsystemGetUserPrivilege.GetUserPrivilege
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineIdentitySubsystem*    Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EOnlineUserPrivilege    Privilege                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineIdentitySubsystemGetUserPrivilege*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineIdentitySubsystemGetUserPrivilege* UOnlineIdentitySubsystemGetUserPrivilege::GetUserPrivilege(class UOnlineIdentitySubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, enum class EOnlineUserPrivilege Privilege)
{
	static auto Func = Class->GetFunction("OnlineIdentitySubsystemGetUserPrivilege", "GetUserPrivilege");

	Params::UOnlineIdentitySubsystemGetUserPrivilege_GetUserPrivilege_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserId = LocalUserId;
	Parms.Privilege = Privilege;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineLeaderboardsSubsystem.WriteLeaderboards
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        SessionName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            Player                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineLeaderboardWrite*     WriteObject                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineLeaderboardsSubsystem::WriteLeaderboards(class FName SessionName, const struct FUniqueNetIdRepl& Player, class UOnlineLeaderboardWrite* WriteObject)
{
	static auto Func = Class->GetFunction("OnlineLeaderboardsSubsystem", "WriteLeaderboards");

	Params::UOnlineLeaderboardsSubsystem_WriteLeaderboards_Params Parms;

	Parms.SessionName = SessionName;
	Parms.Player = Player;
	Parms.WriteObject = WriteObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineLeaderboardsSubsystem.IsSubsystemAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineLeaderboardsSubsystem::IsSubsystemAvailable()
{
	static auto Func = Class->GetFunction("OnlineLeaderboardsSubsystem", "IsSubsystemAvailable");

	Params::UOnlineLeaderboardsSubsystem_IsSubsystemAvailable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineLeaderboardsSubsystem.FreeStats
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UOnlineLeaderboardRead*      ReadObject                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOnlineLeaderboardsSubsystem::FreeStats(class UOnlineLeaderboardRead* ReadObject)
{
	static auto Func = Class->GetFunction("OnlineLeaderboardsSubsystem", "FreeStats");

	Params::UOnlineLeaderboardsSubsystem_FreeStats_Params Parms;

	Parms.ReadObject = ReadObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.OnlineLeaderboardsSubsystem.FlushLeaderboards
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        SessionName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineLeaderboardsSubsystem::FlushLeaderboards(class FName SessionName)
{
	static auto Func = Class->GetFunction("OnlineLeaderboardsSubsystem", "FlushLeaderboards");

	Params::UOnlineLeaderboardsSubsystem_FlushLeaderboards_Params Parms;

	Parms.SessionName = SessionName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineLeaderboardsSubsystemReadLeaderboards.ReadLeaderboards
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineLeaderboardsSubsystem*Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FUniqueNetIdRepl>    Players                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UOnlineLeaderboardRead*      ReadObject                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineLeaderboardsSubsystemReadLeaderboards*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineLeaderboardsSubsystemReadLeaderboards* UOnlineLeaderboardsSubsystemReadLeaderboards::ReadLeaderboards(class UOnlineLeaderboardsSubsystem* Subsystem, const TArray<struct FUniqueNetIdRepl>& Players, class UOnlineLeaderboardRead* ReadObject)
{
	static auto Func = Class->GetFunction("OnlineLeaderboardsSubsystemReadLeaderboards", "ReadLeaderboards");

	Params::UOnlineLeaderboardsSubsystemReadLeaderboards_ReadLeaderboards_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.Players = Players;
	Parms.ReadObject = ReadObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineLeaderboardsSubsystemReadLeaderboardsForFriends.ReadLeaderboardsForFriends
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineLeaderboardsSubsystem*Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineLeaderboardRead*      ReadObject                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends* UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends::ReadLeaderboardsForFriends(class UOnlineLeaderboardsSubsystem* Subsystem, int32 LocalUserNum, class UOnlineLeaderboardRead* ReadObject)
{
	static auto Func = Class->GetFunction("OnlineLeaderboardsSubsystemReadLeaderboardsForFriends", "ReadLeaderboardsForFriends");

	Params::UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_ReadLeaderboardsForFriends_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserNum = LocalUserNum;
	Parms.ReadObject = ReadObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineLeaderboardsSubsystemReadLeaderboardsAroundRank.ReadLeaderboardsAroundRank
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineLeaderboardsSubsystem*Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Rank                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              Range                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineLeaderboardRead*      ReadObject                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank* UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank::ReadLeaderboardsAroundRank(class UOnlineLeaderboardsSubsystem* Subsystem, int32 Rank, int64 Range, class UOnlineLeaderboardRead* ReadObject)
{
	static auto Func = Class->GetFunction("OnlineLeaderboardsSubsystemReadLeaderboardsAroundRank", "ReadLeaderboardsAroundRank");

	Params::UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_ReadLeaderboardsAroundRank_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.Rank = Rank;
	Parms.Range = Range;
	Parms.ReadObject = ReadObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineLeaderboardsSubsystemReadLeaderboardsAroundUser.ReadLeaderboardsAroundUser
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineLeaderboardsSubsystem*Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            Player                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              Range                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineLeaderboardRead*      ReadObject                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser* UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser::ReadLeaderboardsAroundUser(class UOnlineLeaderboardsSubsystem* Subsystem, const struct FUniqueNetIdRepl& Player, int64 Range, class UOnlineLeaderboardRead* ReadObject)
{
	static auto Func = Class->GetFunction("OnlineLeaderboardsSubsystemReadLeaderboardsAroundUser", "ReadLeaderboardsAroundUser");

	Params::UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_ReadLeaderboardsAroundUser_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.Player = Player;
	Parms.Range = Range;
	Parms.ReadObject = ReadObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineLobbySubsystem.ParseSerializedLobbyId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InLobbyId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULobbyId*                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULobbyId* UOnlineLobbySubsystem::ParseSerializedLobbyId(const class FString& InLobbyId)
{
	static auto Func = Class->GetFunction("OnlineLobbySubsystem", "ParseSerializedLobbyId");

	Params::UOnlineLobbySubsystem_ParseSerializedLobbyId_Params Parms;

	Parms.InLobbyId = InLobbyId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineLobbySubsystem.MakeUpdateLobbyTransaction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULobbyId*                    LobbyId                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineLobbyTransaction*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineLobbyTransaction* UOnlineLobbySubsystem::MakeUpdateLobbyTransaction(const struct FUniqueNetIdRepl& UserId, class ULobbyId* LobbyId)
{
	static auto Func = Class->GetFunction("OnlineLobbySubsystem", "MakeUpdateLobbyTransaction");

	Params::UOnlineLobbySubsystem_MakeUpdateLobbyTransaction_Params Parms;

	Parms.UserId = UserId;
	Parms.LobbyId = LobbyId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineLobbySubsystem.MakeUpdateLobbyMemberTransaction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULobbyId*                    LobbyId                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            MemberId                                                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineLobbyMemberTransaction*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineLobbyMemberTransaction* UOnlineLobbySubsystem::MakeUpdateLobbyMemberTransaction(const struct FUniqueNetIdRepl& UserId, class ULobbyId* LobbyId, const struct FUniqueNetIdRepl& MemberId)
{
	static auto Func = Class->GetFunction("OnlineLobbySubsystem", "MakeUpdateLobbyMemberTransaction");

	Params::UOnlineLobbySubsystem_MakeUpdateLobbyMemberTransaction_Params Parms;

	Parms.UserId = UserId;
	Parms.LobbyId = LobbyId;
	Parms.MemberId = MemberId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineLobbySubsystem.MakeCreateLobbyTransaction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineLobbyTransaction*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineLobbyTransaction* UOnlineLobbySubsystem::MakeCreateLobbyTransaction(const struct FUniqueNetIdRepl& UserId)
{
	static auto Func = Class->GetFunction("OnlineLobbySubsystem", "MakeCreateLobbyTransaction");

	Params::UOnlineLobbySubsystem_MakeCreateLobbyTransaction_Params Parms;

	Parms.UserId = UserId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineLobbySubsystem.IsSubsystemAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineLobbySubsystem::IsSubsystemAvailable()
{
	static auto Func = Class->GetFunction("OnlineLobbySubsystem", "IsSubsystemAvailable");

	Params::UOnlineLobbySubsystem_IsSubsystemAvailable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineLobbySubsystem.GetMemberUserId
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULobbyId*                    LobbyId                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MemberIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            OutMemberId                                                      (Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineLobbySubsystem::GetMemberUserId(const struct FUniqueNetIdRepl& UserId, class ULobbyId* LobbyId, int32 MemberIndex, struct FUniqueNetIdRepl* OutMemberId)
{
	static auto Func = Class->GetFunction("OnlineLobbySubsystem", "GetMemberUserId");

	Params::UOnlineLobbySubsystem_GetMemberUserId_Params Parms;

	Parms.UserId = UserId;
	Parms.LobbyId = LobbyId;
	Parms.MemberIndex = MemberIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutMemberId != nullptr)
		*OutMemberId = Parms.OutMemberId;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineLobbySubsystem.GetMemberMetadataValue
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULobbyId*                    LobbyId                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            MemberId                                                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      MetadataKey                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVariantDataBP              OutMetadataValue                                                 (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineLobbySubsystem::GetMemberMetadataValue(const struct FUniqueNetIdRepl& UserId, class ULobbyId* LobbyId, const struct FUniqueNetIdRepl& MemberId, const class FString& MetadataKey, struct FVariantDataBP* OutMetadataValue)
{
	static auto Func = Class->GetFunction("OnlineLobbySubsystem", "GetMemberMetadataValue");

	Params::UOnlineLobbySubsystem_GetMemberMetadataValue_Params Parms;

	Parms.UserId = UserId;
	Parms.LobbyId = LobbyId;
	Parms.MemberId = MemberId;
	Parms.MetadataKey = MetadataKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutMetadataValue != nullptr)
		*OutMetadataValue = Parms.OutMetadataValue;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineLobbySubsystem.GetMemberCount
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULobbyId*                    LobbyId                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OutMemberCount                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineLobbySubsystem::GetMemberCount(const struct FUniqueNetIdRepl& UserId, class ULobbyId* LobbyId, int32* OutMemberCount)
{
	static auto Func = Class->GetFunction("OnlineLobbySubsystem", "GetMemberCount");

	Params::UOnlineLobbySubsystem_GetMemberCount_Params Parms;

	Parms.UserId = UserId;
	Parms.LobbyId = LobbyId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutMemberCount != nullptr)
		*OutMemberCount = Parms.OutMemberCount;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineLobbySubsystem.GetLobbyMetadataValue
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULobbyId*                    LobbyId                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      MetadataKey                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVariantDataBP              OutMetadataValue                                                 (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineLobbySubsystem::GetLobbyMetadataValue(const struct FUniqueNetIdRepl& UserId, class ULobbyId* LobbyId, const class FString& MetadataKey, struct FVariantDataBP* OutMetadataValue)
{
	static auto Func = Class->GetFunction("OnlineLobbySubsystem", "GetLobbyMetadataValue");

	Params::UOnlineLobbySubsystem_GetLobbyMetadataValue_Params Parms;

	Parms.UserId = UserId;
	Parms.LobbyId = LobbyId;
	Parms.MetadataKey = MetadataKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutMetadataValue != nullptr)
		*OutMetadataValue = Parms.OutMetadataValue;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineLobbySubsystemCreateLobby.CreateLobby
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineLobbySubsystem*       Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineLobbyTransaction*     Transaction                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineLobbySubsystemCreateLobby*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineLobbySubsystemCreateLobby* UOnlineLobbySubsystemCreateLobby::CreateLobby(class UOnlineLobbySubsystem* Subsystem, const struct FUniqueNetIdRepl& UserId, class UOnlineLobbyTransaction* Transaction)
{
	static auto Func = Class->GetFunction("OnlineLobbySubsystemCreateLobby", "CreateLobby");

	Params::UOnlineLobbySubsystemCreateLobby_CreateLobby_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.UserId = UserId;
	Parms.Transaction = Transaction;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineLobbySubsystemUpdateLobby.UpdateLobby
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineLobbySubsystem*       Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULobbyId*                    LobbyId                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineLobbyTransaction*     Transaction                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineLobbySubsystemUpdateLobby*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineLobbySubsystemUpdateLobby* UOnlineLobbySubsystemUpdateLobby::UpdateLobby(class UOnlineLobbySubsystem* Subsystem, const struct FUniqueNetIdRepl& UserId, class ULobbyId* LobbyId, class UOnlineLobbyTransaction* Transaction)
{
	static auto Func = Class->GetFunction("OnlineLobbySubsystemUpdateLobby", "UpdateLobby");

	Params::UOnlineLobbySubsystemUpdateLobby_UpdateLobby_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.UserId = UserId;
	Parms.LobbyId = LobbyId;
	Parms.Transaction = Transaction;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineLobbySubsystemDeleteLobby.DeleteLobby
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineLobbySubsystem*       Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULobbyId*                    LobbyId                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineLobbySubsystemDeleteLobby*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineLobbySubsystemDeleteLobby* UOnlineLobbySubsystemDeleteLobby::DeleteLobby(class UOnlineLobbySubsystem* Subsystem, const struct FUniqueNetIdRepl& UserId, class ULobbyId* LobbyId)
{
	static auto Func = Class->GetFunction("OnlineLobbySubsystemDeleteLobby", "DeleteLobby");

	Params::UOnlineLobbySubsystemDeleteLobby_DeleteLobby_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.UserId = UserId;
	Parms.LobbyId = LobbyId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineLobbySubsystemConnectLobby.ConnectLobby
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineLobbySubsystem*       Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULobbyId*                    LobbyId                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineLobbySubsystemConnectLobby*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineLobbySubsystemConnectLobby* UOnlineLobbySubsystemConnectLobby::ConnectLobby(class UOnlineLobbySubsystem* Subsystem, const struct FUniqueNetIdRepl& UserId, class ULobbyId* LobbyId)
{
	static auto Func = Class->GetFunction("OnlineLobbySubsystemConnectLobby", "ConnectLobby");

	Params::UOnlineLobbySubsystemConnectLobby_ConnectLobby_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.UserId = UserId;
	Parms.LobbyId = LobbyId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineLobbySubsystemDisconnectLobby.DisconnectLobby
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineLobbySubsystem*       Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULobbyId*                    LobbyId                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineLobbySubsystemDisconnectLobby*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineLobbySubsystemDisconnectLobby* UOnlineLobbySubsystemDisconnectLobby::DisconnectLobby(class UOnlineLobbySubsystem* Subsystem, const struct FUniqueNetIdRepl& UserId, class ULobbyId* LobbyId)
{
	static auto Func = Class->GetFunction("OnlineLobbySubsystemDisconnectLobby", "DisconnectLobby");

	Params::UOnlineLobbySubsystemDisconnectLobby_DisconnectLobby_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.UserId = UserId;
	Parms.LobbyId = LobbyId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineLobbySubsystemUpdateMemberSelf.UpdateMemberSelf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineLobbySubsystem*       Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULobbyId*                    LobbyId                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineLobbyMemberTransaction*Transaction                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineLobbySubsystemUpdateMemberSelf*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineLobbySubsystemUpdateMemberSelf* UOnlineLobbySubsystemUpdateMemberSelf::UpdateMemberSelf(class UOnlineLobbySubsystem* Subsystem, const struct FUniqueNetIdRepl& UserId, class ULobbyId* LobbyId, class UOnlineLobbyMemberTransaction* Transaction)
{
	static auto Func = Class->GetFunction("OnlineLobbySubsystemUpdateMemberSelf", "UpdateMemberSelf");

	Params::UOnlineLobbySubsystemUpdateMemberSelf_UpdateMemberSelf_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.UserId = UserId;
	Parms.LobbyId = LobbyId;
	Parms.Transaction = Transaction;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineLobbySubsystemSearch.Search
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineLobbySubsystem*       Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FOnlineLobbySearchQueryBP   Query                                                            (Parm, NativeAccessSpecifierPublic)
// class UOnlineLobbySubsystemSearch* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineLobbySubsystemSearch* UOnlineLobbySubsystemSearch::Search(class UOnlineLobbySubsystem* Subsystem, const struct FUniqueNetIdRepl& UserId, const struct FOnlineLobbySearchQueryBP& Query)
{
	static auto Func = Class->GetFunction("OnlineLobbySubsystemSearch", "Search");

	Params::UOnlineLobbySubsystemSearch_Search_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.UserId = UserId;
	Parms.Query = Query;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineLobbySubsystemKickMember.KickMember
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineLobbySubsystem*       Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULobbyId*                    LobbyId                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            MemberId                                                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineLobbySubsystemKickMember*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineLobbySubsystemKickMember* UOnlineLobbySubsystemKickMember::KickMember(class UOnlineLobbySubsystem* Subsystem, const struct FUniqueNetIdRepl& UserId, class ULobbyId* LobbyId, const struct FUniqueNetIdRepl& MemberId)
{
	static auto Func = Class->GetFunction("OnlineLobbySubsystemKickMember", "KickMember");

	Params::UOnlineLobbySubsystemKickMember_KickMember_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.UserId = UserId;
	Parms.LobbyId = LobbyId;
	Parms.MemberId = MemberId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineMessageSanitizerSubsystem.ResetBlockedUserCache
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UOnlineMessageSanitizerSubsystem::ResetBlockedUserCache()
{
	static auto Func = Class->GetFunction("OnlineMessageSanitizerSubsystem", "ResetBlockedUserCache");

	Params::UOnlineMessageSanitizerSubsystem_ResetBlockedUserCache_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.OnlineMessageSanitizerSubsystem.IsSubsystemAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineMessageSanitizerSubsystem::IsSubsystemAvailable()
{
	static auto Func = Class->GetFunction("OnlineMessageSanitizerSubsystem", "IsSubsystemAvailable");

	Params::UOnlineMessageSanitizerSubsystem_IsSubsystemAvailable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineMessageSanitizerSubsystemSanitizeDisplayName.SanitizeDisplayName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineMessageSanitizerSubsystem*Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      DisplayName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineMessageSanitizerSubsystemSanitizeDisplayName*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineMessageSanitizerSubsystemSanitizeDisplayName* UOnlineMessageSanitizerSubsystemSanitizeDisplayName::SanitizeDisplayName(class UOnlineMessageSanitizerSubsystem* Subsystem, const class FString& DisplayName)
{
	static auto Func = Class->GetFunction("OnlineMessageSanitizerSubsystemSanitizeDisplayName", "SanitizeDisplayName");

	Params::UOnlineMessageSanitizerSubsystemSanitizeDisplayName_SanitizeDisplayName_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.DisplayName = DisplayName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineMessageSanitizerSubsystemSanitizeDisplayNames.SanitizeDisplayNames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineMessageSanitizerSubsystem*Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              DisplayNames                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UOnlineMessageSanitizerSubsystemSanitizeDisplayNames*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineMessageSanitizerSubsystemSanitizeDisplayNames* UOnlineMessageSanitizerSubsystemSanitizeDisplayNames::SanitizeDisplayNames(class UOnlineMessageSanitizerSubsystem* Subsystem, const TArray<class FString>& DisplayNames)
{
	static auto Func = Class->GetFunction("OnlineMessageSanitizerSubsystemSanitizeDisplayNames", "SanitizeDisplayNames");

	Params::UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_SanitizeDisplayNames_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.DisplayNames = DisplayNames;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineMessageSanitizerSubsystemQueryBlockedUser.QueryBlockedUser
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineMessageSanitizerSubsystem*Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FromUserId                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FromPlatform                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineMessageSanitizerSubsystemQueryBlockedUser*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineMessageSanitizerSubsystemQueryBlockedUser* UOnlineMessageSanitizerSubsystemQueryBlockedUser::QueryBlockedUser(class UOnlineMessageSanitizerSubsystem* Subsystem, int32 LocalUserNum, const class FString& FromUserId, const class FString& FromPlatform)
{
	static auto Func = Class->GetFunction("OnlineMessageSanitizerSubsystemQueryBlockedUser", "QueryBlockedUser");

	Params::UOnlineMessageSanitizerSubsystemQueryBlockedUser_QueryBlockedUser_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserNum = LocalUserNum;
	Parms.FromUserId = FromUserId;
	Parms.FromPlatform = FromPlatform;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineMessageSubsystem.IsSubsystemAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineMessageSubsystem::IsSubsystemAvailable()
{
	static auto Func = Class->GetFunction("OnlineMessageSubsystem", "IsSubsystemAvailable");

	Params::UOnlineMessageSubsystem_IsSubsystemAvailable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineMessageSubsystem.EnumerateMessages
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineMessageSubsystem::EnumerateMessages(int32 LocalUserNum)
{
	static auto Func = Class->GetFunction("OnlineMessageSubsystem", "EnumerateMessages");

	Params::UOnlineMessageSubsystem_EnumerateMessages_Params Parms;

	Parms.LocalUserNum = LocalUserNum;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineMessageSubsystem.ClearMessages
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineMessageSubsystem::ClearMessages(int32 LocalUserNum)
{
	static auto Func = Class->GetFunction("OnlineMessageSubsystem", "ClearMessages");

	Params::UOnlineMessageSubsystem_ClearMessages_Params Parms;

	Parms.LocalUserNum = LocalUserNum;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineMessageSubsystem.ClearMessageHeaders
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineMessageSubsystem::ClearMessageHeaders(int32 LocalUserNum)
{
	static auto Func = Class->GetFunction("OnlineMessageSubsystem", "ClearMessageHeaders");

	Params::UOnlineMessageSubsystem_ClearMessageHeaders_Params Parms;

	Parms.LocalUserNum = LocalUserNum;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlinePartySubsystem.UpdatePartyMemberData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPartyId*                    PartyId                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Namespace                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UReadablePartyData*          PartyMemberData                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlinePartySubsystem::UpdatePartyMemberData(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, class FName Namespace, class UReadablePartyData* PartyMemberData)
{
	static auto Func = Class->GetFunction("OnlinePartySubsystem", "UpdatePartyMemberData");

	Params::UOnlinePartySubsystem_UpdatePartyMemberData_Params Parms;

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;
	Parms.Namespace = Namespace;
	Parms.PartyMemberData = PartyMemberData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlinePartySubsystem.UpdatePartyData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPartyId*                    PartyId                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Namespace                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UReadablePartyData*          PartyData                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlinePartySubsystem::UpdatePartyData(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, class FName Namespace, class UReadablePartyData* PartyData)
{
	static auto Func = Class->GetFunction("OnlinePartySubsystem", "UpdatePartyData");

	Params::UOnlinePartySubsystem_UpdatePartyData_Params Parms;

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;
	Parms.Namespace = Namespace;
	Parms.PartyData = PartyData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlinePartySubsystem.RespondToQueryJoinability
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPartyId*                    PartyId                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            RecipientId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCanJoin                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              DeniedResultCode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UReadablePartyData*          PartyData                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOnlinePartySubsystem::RespondToQueryJoinability(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const struct FUniqueNetIdRepl& RecipientId, bool bCanJoin, int32 DeniedResultCode, class UReadablePartyData* PartyData)
{
	static auto Func = Class->GetFunction("OnlinePartySubsystem", "RespondToQueryJoinability");

	Params::UOnlinePartySubsystem_RespondToQueryJoinability_Params Parms;

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;
	Parms.RecipientId = RecipientId;
	Parms.bCanJoin = bCanJoin;
	Parms.DeniedResultCode = DeniedResultCode;
	Parms.PartyData = PartyData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.OnlinePartySubsystem.RejectInvitation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            SenderId                                                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlinePartySubsystem::RejectInvitation(const struct FUniqueNetIdRepl& LocalUserId, const struct FUniqueNetIdRepl& SenderId)
{
	static auto Func = Class->GetFunction("OnlinePartySubsystem", "RejectInvitation");

	Params::UOnlinePartySubsystem_RejectInvitation_Params Parms;

	Parms.LocalUserId = LocalUserId;
	Parms.SenderId = SenderId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlinePartySubsystem.MakeTokenFromJoinInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UOnlinePartyJoinInfo*        JoinInfo                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UOnlinePartySubsystem::MakeTokenFromJoinInfo(class UOnlinePartyJoinInfo* JoinInfo)
{
	static auto Func = Class->GetFunction("OnlinePartySubsystem", "MakeTokenFromJoinInfo");

	Params::UOnlinePartySubsystem_MakeTokenFromJoinInfo_Params Parms;

	Parms.JoinInfo = JoinInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlinePartySubsystem.MakeJoinInfoJson
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPartyId*                    PartyId                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UOnlinePartySubsystem::MakeJoinInfoJson(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId)
{
	static auto Func = Class->GetFunction("OnlinePartySubsystem", "MakeJoinInfoJson");

	Params::UOnlinePartySubsystem_MakeJoinInfoJson_Params Parms;

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlinePartySubsystem.IsSubsystemAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlinePartySubsystem::IsSubsystemAvailable()
{
	static auto Func = Class->GetFunction("OnlinePartySubsystem", "IsSubsystemAvailable");

	Params::UOnlinePartySubsystem_IsSubsystemAvailable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlinePartySubsystem.IsMemberLeader
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPartyId*                    PartyId                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            MemberId                                                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlinePartySubsystem::IsMemberLeader(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const struct FUniqueNetIdRepl& MemberId)
{
	static auto Func = Class->GetFunction("OnlinePartySubsystem", "IsMemberLeader");

	Params::UOnlinePartySubsystem_IsMemberLeader_Params Parms;

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;
	Parms.MemberId = MemberId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlinePartySubsystem.GetPendingInvites
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UOnlinePartyJoinInfo*>OutPendingInvitesArray                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlinePartySubsystem::GetPendingInvites(const struct FUniqueNetIdRepl& LocalUserId, TArray<class UOnlinePartyJoinInfo*>* OutPendingInvitesArray)
{
	static auto Func = Class->GetFunction("OnlinePartySubsystem", "GetPendingInvites");

	Params::UOnlinePartySubsystem_GetPendingInvites_Params Parms;

	Parms.LocalUserId = LocalUserId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutPendingInvitesArray != nullptr)
		*OutPendingInvitesArray = Parms.OutPendingInvitesArray;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlinePartySubsystem.GetPendingInvitedUsers
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPartyId*                    PartyId                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FUniqueNetIdRepl>    OutPendingInvitedUserArray                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlinePartySubsystem::GetPendingInvitedUsers(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, TArray<struct FUniqueNetIdRepl>* OutPendingInvitedUserArray)
{
	static auto Func = Class->GetFunction("OnlinePartySubsystem", "GetPendingInvitedUsers");

	Params::UOnlinePartySubsystem_GetPendingInvitedUsers_Params Parms;

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutPendingInvitedUserArray != nullptr)
		*OutPendingInvitedUserArray = Parms.OutPendingInvitedUserArray;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlinePartySubsystem.GetPartyMembers
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPartyId*                    PartyId                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UBlueprintPartyMember*>OutPartyMembersArray                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlinePartySubsystem::GetPartyMembers(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, TArray<class UBlueprintPartyMember*>* OutPartyMembersArray)
{
	static auto Func = Class->GetFunction("OnlinePartySubsystem", "GetPartyMembers");

	Params::UOnlinePartySubsystem_GetPartyMembers_Params Parms;

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutPartyMembersArray != nullptr)
		*OutPartyMembersArray = Parms.OutPartyMembersArray;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlinePartySubsystem.GetPartyMemberData
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPartyId*                    PartyId                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            MemberId                                                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Namespace                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UReadablePartyData*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UReadablePartyData* UOnlinePartySubsystem::GetPartyMemberData(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const struct FUniqueNetIdRepl& MemberId, class FName Namespace)
{
	static auto Func = Class->GetFunction("OnlinePartySubsystem", "GetPartyMemberData");

	Params::UOnlinePartySubsystem_GetPartyMemberData_Params Parms;

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;
	Parms.MemberId = MemberId;
	Parms.Namespace = Namespace;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlinePartySubsystem.GetPartyMemberCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPartyId*                    PartyId                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int64 UOnlinePartySubsystem::GetPartyMemberCount(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId)
{
	static auto Func = Class->GetFunction("OnlinePartySubsystem", "GetPartyMemberCount");

	Params::UOnlinePartySubsystem_GetPartyMemberCount_Params Parms;

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlinePartySubsystem.GetPartyMember
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPartyId*                    PartyId                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            MemberId                                                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBlueprintPartyMember*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UBlueprintPartyMember* UOnlinePartySubsystem::GetPartyMember(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const struct FUniqueNetIdRepl& MemberId)
{
	static auto Func = Class->GetFunction("OnlinePartySubsystem", "GetPartyMember");

	Params::UOnlinePartySubsystem_GetPartyMember_Params Parms;

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;
	Parms.MemberId = MemberId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlinePartySubsystem.GetPartyData
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPartyId*                    PartyId                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Namespace                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UReadablePartyData*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UReadablePartyData* UOnlinePartySubsystem::GetPartyData(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, class FName Namespace)
{
	static auto Func = Class->GetFunction("OnlinePartySubsystem", "GetPartyData");

	Params::UOnlinePartySubsystem_GetPartyData_Params Parms;

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;
	Parms.Namespace = Namespace;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlinePartySubsystem.GetParty
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPartyId*                    PartyId                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UParty*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UParty* UOnlinePartySubsystem::GetParty(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId)
{
	static auto Func = Class->GetFunction("OnlinePartySubsystem", "GetParty");

	Params::UOnlinePartySubsystem_GetParty_Params Parms;

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlinePartySubsystem.GetJoinedParties
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UPartyId*>            OutPartyIdArray                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlinePartySubsystem::GetJoinedParties(const struct FUniqueNetIdRepl& LocalUserId, TArray<class UPartyId*>* OutPartyIdArray)
{
	static auto Func = Class->GetFunction("OnlinePartySubsystem", "GetJoinedParties");

	Params::UOnlinePartySubsystem_GetJoinedParties_Params Parms;

	Parms.LocalUserId = LocalUserId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutPartyIdArray != nullptr)
		*OutPartyIdArray = Parms.OutPartyIdArray;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlinePartySubsystem.DumpPartyState
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UOnlinePartySubsystem::DumpPartyState()
{
	static auto Func = Class->GetFunction("OnlinePartySubsystem", "DumpPartyState");

	Params::UOnlinePartySubsystem_DumpPartyState_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.OnlinePartySubsystem.ApproveJoinRequest
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPartyId*                    PartyId                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            RecipientId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsApproved                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              DeniedResultCode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlinePartySubsystem::ApproveJoinRequest(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const struct FUniqueNetIdRepl& RecipientId, bool bIsApproved, int32 DeniedResultCode)
{
	static auto Func = Class->GetFunction("OnlinePartySubsystem", "ApproveJoinRequest");

	Params::UOnlinePartySubsystem_ApproveJoinRequest_Params Parms;

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;
	Parms.RecipientId = RecipientId;
	Parms.bIsApproved = bIsApproved;
	Parms.DeniedResultCode = DeniedResultCode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlinePartySubsystemRestoreParties.RestoreParties
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlinePartySubsystem*       Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlinePartySubsystemRestoreParties*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlinePartySubsystemRestoreParties* UOnlinePartySubsystemRestoreParties::RestoreParties(class UOnlinePartySubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId)
{
	static auto Func = Class->GetFunction("OnlinePartySubsystemRestoreParties", "RestoreParties");

	Params::UOnlinePartySubsystemRestoreParties_RestoreParties_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserId = LocalUserId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlinePartySubsystemRestoreInvites.RestoreInvites
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlinePartySubsystem*       Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlinePartySubsystemRestoreInvites*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlinePartySubsystemRestoreInvites* UOnlinePartySubsystemRestoreInvites::RestoreInvites(class UOnlinePartySubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId)
{
	static auto Func = Class->GetFunction("OnlinePartySubsystemRestoreInvites", "RestoreInvites");

	Params::UOnlinePartySubsystemRestoreInvites_RestoreInvites_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserId = LocalUserId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlinePartySubsystemCleanupParties.CleanupParties
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlinePartySubsystem*       Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlinePartySubsystemCleanupParties*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlinePartySubsystemCleanupParties* UOnlinePartySubsystemCleanupParties::CleanupParties(class UOnlinePartySubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId)
{
	static auto Func = Class->GetFunction("OnlinePartySubsystemCleanupParties", "CleanupParties");

	Params::UOnlinePartySubsystemCleanupParties_CleanupParties_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserId = LocalUserId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlinePartySubsystemCreateParty.CreateParty
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlinePartySubsystem*       Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              PartyTypeId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FOnlinePartyConfiguration   PartyConfig                                                      (Parm, NativeAccessSpecifierPublic)
// class UOnlinePartySubsystemCreateParty*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlinePartySubsystemCreateParty* UOnlinePartySubsystemCreateParty::CreateParty(class UOnlinePartySubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, int64 PartyTypeId, const struct FOnlinePartyConfiguration& PartyConfig)
{
	static auto Func = Class->GetFunction("OnlinePartySubsystemCreateParty", "CreateParty");

	Params::UOnlinePartySubsystemCreateParty_CreateParty_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserId = LocalUserId;
	Parms.PartyTypeId = PartyTypeId;
	Parms.PartyConfig = PartyConfig;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlinePartySubsystemUpdateParty.UpdateParty
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlinePartySubsystem*       Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPartyId*                    PartyId                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FOnlinePartyConfiguration   PartyConfig                                                      (Parm, NativeAccessSpecifierPublic)
// bool                               bShouldRegenerateReservationKey                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlinePartySubsystemUpdateParty*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlinePartySubsystemUpdateParty* UOnlinePartySubsystemUpdateParty::UpdateParty(class UOnlinePartySubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const struct FOnlinePartyConfiguration& PartyConfig, bool bShouldRegenerateReservationKey)
{
	static auto Func = Class->GetFunction("OnlinePartySubsystemUpdateParty", "UpdateParty");

	Params::UOnlinePartySubsystemUpdateParty_UpdateParty_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;
	Parms.PartyConfig = PartyConfig;
	Parms.bShouldRegenerateReservationKey = bShouldRegenerateReservationKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlinePartySubsystemJoinParty.JoinParty
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlinePartySubsystem*       Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlinePartyJoinInfo*        OnlinePartyJoinInfo                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlinePartySubsystemJoinParty*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlinePartySubsystemJoinParty* UOnlinePartySubsystemJoinParty::JoinParty(class UOnlinePartySubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, class UOnlinePartyJoinInfo* OnlinePartyJoinInfo)
{
	static auto Func = Class->GetFunction("OnlinePartySubsystemJoinParty", "JoinParty");

	Params::UOnlinePartySubsystemJoinParty_JoinParty_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserId = LocalUserId;
	Parms.OnlinePartyJoinInfo = OnlinePartyJoinInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlinePartySubsystemRejoinParty.RejoinParty
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlinePartySubsystem*       Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPartyId*                    PartyId                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              PartyTypeId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FUniqueNetIdRepl>    FormerMembers                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UOnlinePartySubsystemRejoinParty*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlinePartySubsystemRejoinParty* UOnlinePartySubsystemRejoinParty::RejoinParty(class UOnlinePartySubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, int64 PartyTypeId, const TArray<struct FUniqueNetIdRepl>& FormerMembers)
{
	static auto Func = Class->GetFunction("OnlinePartySubsystemRejoinParty", "RejoinParty");

	Params::UOnlinePartySubsystemRejoinParty_RejoinParty_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;
	Parms.PartyTypeId = PartyTypeId;
	Parms.FormerMembers = FormerMembers;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlinePartySubsystemLeaveParty.LeaveParty
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlinePartySubsystem*       Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPartyId*                    PartyId                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSynchronizeLeave                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlinePartySubsystemLeaveParty*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlinePartySubsystemLeaveParty* UOnlinePartySubsystemLeaveParty::LeaveParty(class UOnlinePartySubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, bool bSynchronizeLeave)
{
	static auto Func = Class->GetFunction("OnlinePartySubsystemLeaveParty", "LeaveParty");

	Params::UOnlinePartySubsystemLeaveParty_LeaveParty_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;
	Parms.bSynchronizeLeave = bSynchronizeLeave;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlinePartySubsystemSendInvitation.SendInvitation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlinePartySubsystem*       Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPartyId*                    PartyId                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            Recipient                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlinePartySubsystemSendInvitation*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlinePartySubsystemSendInvitation* UOnlinePartySubsystemSendInvitation::SendInvitation(class UOnlinePartySubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const struct FUniqueNetIdRepl& Recipient)
{
	static auto Func = Class->GetFunction("OnlinePartySubsystemSendInvitation", "SendInvitation");

	Params::UOnlinePartySubsystemSendInvitation_SendInvitation_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;
	Parms.Recipient = Recipient;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlinePartySubsystemCancelInvitation.CancelInvitation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlinePartySubsystem*       Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            TargetUserId                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPartyId*                    PartyId                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlinePartySubsystemCancelInvitation*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlinePartySubsystemCancelInvitation* UOnlinePartySubsystemCancelInvitation::CancelInvitation(class UOnlinePartySubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, const struct FUniqueNetIdRepl& TargetUserId, class UPartyId* PartyId)
{
	static auto Func = Class->GetFunction("OnlinePartySubsystemCancelInvitation", "CancelInvitation");

	Params::UOnlinePartySubsystemCancelInvitation_CancelInvitation_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserId = LocalUserId;
	Parms.TargetUserId = TargetUserId;
	Parms.PartyId = PartyId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlinePartySubsystemKickMember.KickMember
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlinePartySubsystem*       Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPartyId*                    PartyId                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            TargetMemberId                                                   (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlinePartySubsystemKickMember*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlinePartySubsystemKickMember* UOnlinePartySubsystemKickMember::KickMember(class UOnlinePartySubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const struct FUniqueNetIdRepl& TargetMemberId)
{
	static auto Func = Class->GetFunction("OnlinePartySubsystemKickMember", "KickMember");

	Params::UOnlinePartySubsystemKickMember_KickMember_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;
	Parms.TargetMemberId = TargetMemberId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlinePartySubsystemPromoteMember.PromoteMember
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlinePartySubsystem*       Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPartyId*                    PartyId                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            TargetMemberId                                                   (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlinePartySubsystemPromoteMember*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlinePartySubsystemPromoteMember* UOnlinePartySubsystemPromoteMember::PromoteMember(class UOnlinePartySubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const struct FUniqueNetIdRepl& TargetMemberId)
{
	static auto Func = Class->GetFunction("OnlinePartySubsystemPromoteMember", "PromoteMember");

	Params::UOnlinePartySubsystemPromoteMember_PromoteMember_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;
	Parms.TargetMemberId = TargetMemberId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlinePresenceSubsystem.IsSubsystemAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlinePresenceSubsystem::IsSubsystemAvailable()
{
	static auto Func = Class->GetFunction("OnlinePresenceSubsystem", "IsSubsystemAvailable");

	Params::UOnlinePresenceSubsystem_IsSubsystemAvailable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlinePresenceSubsystem.GetCachedPresenceForApp
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            User                                                             (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AppID                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FOnlineUserPresenceData     OutPresence                                                      (Parm, OutParm, NativeAccessSpecifierPublic)
// enum class EOnlineCachedResult_    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EOnlineCachedResult_ UOnlinePresenceSubsystem::GetCachedPresenceForApp(const struct FUniqueNetIdRepl& LocalUserId, const struct FUniqueNetIdRepl& User, const class FString& AppID, struct FOnlineUserPresenceData* OutPresence)
{
	static auto Func = Class->GetFunction("OnlinePresenceSubsystem", "GetCachedPresenceForApp");

	Params::UOnlinePresenceSubsystem_GetCachedPresenceForApp_Params Parms;

	Parms.LocalUserId = LocalUserId;
	Parms.User = User;
	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutPresence != nullptr)
		*OutPresence = Parms.OutPresence;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlinePresenceSubsystem.GetCachedPresence
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            User                                                             (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FOnlineUserPresenceData     OutPresence                                                      (Parm, OutParm, NativeAccessSpecifierPublic)
// enum class EOnlineCachedResult_    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EOnlineCachedResult_ UOnlinePresenceSubsystem::GetCachedPresence(const struct FUniqueNetIdRepl& User, struct FOnlineUserPresenceData* OutPresence)
{
	static auto Func = Class->GetFunction("OnlinePresenceSubsystem", "GetCachedPresence");

	Params::UOnlinePresenceSubsystem_GetCachedPresence_Params Parms;

	Parms.User = User;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutPresence != nullptr)
		*OutPresence = Parms.OutPresence;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlinePresenceSubsystemSetPresence.SetPresence
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlinePresenceSubsystem*    Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            User                                                             (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FOnlineUserPresenceStatusDataStatus                                                           (Parm, NativeAccessSpecifierPublic)
// class UOnlinePresenceSubsystemSetPresence*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlinePresenceSubsystemSetPresence* UOnlinePresenceSubsystemSetPresence::SetPresence(class UOnlinePresenceSubsystem* Subsystem, const struct FUniqueNetIdRepl& User, const struct FOnlineUserPresenceStatusData& Status)
{
	static auto Func = Class->GetFunction("OnlinePresenceSubsystemSetPresence", "SetPresence");

	Params::UOnlinePresenceSubsystemSetPresence_SetPresence_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.User = User;
	Parms.Status = Status;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlinePresenceSubsystemQueryPresence.QueryPresence
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlinePresenceSubsystem*    Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            User                                                             (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlinePresenceSubsystemQueryPresence*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlinePresenceSubsystemQueryPresence* UOnlinePresenceSubsystemQueryPresence::QueryPresence(class UOnlinePresenceSubsystem* Subsystem, const struct FUniqueNetIdRepl& User)
{
	static auto Func = Class->GetFunction("OnlinePresenceSubsystemQueryPresence", "QueryPresence");

	Params::UOnlinePresenceSubsystemQueryPresence_QueryPresence_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.User = User;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlinePurchaseSubsystem.IsSubsystemAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlinePurchaseSubsystem::IsSubsystemAvailable()
{
	static auto Func = Class->GetFunction("OnlinePurchaseSubsystem", "IsSubsystemAvailable");

	Params::UOnlinePurchaseSubsystem_IsSubsystemAvailable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlinePurchaseSubsystem.IsAllowedToPurchase
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlinePurchaseSubsystem::IsAllowedToPurchase(const struct FUniqueNetIdRepl& UserId)
{
	static auto Func = Class->GetFunction("OnlinePurchaseSubsystem", "IsAllowedToPurchase");

	Params::UOnlinePurchaseSubsystem_IsAllowedToPurchase_Params Parms;

	Parms.UserId = UserId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlinePurchaseSubsystem.GetReceipts
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UPurchaseReceipt*>    OutReceipts                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UOnlinePurchaseSubsystem::GetReceipts(const struct FUniqueNetIdRepl& UserId, TArray<class UPurchaseReceipt*>* OutReceipts)
{
	static auto Func = Class->GetFunction("OnlinePurchaseSubsystem", "GetReceipts");

	Params::UOnlinePurchaseSubsystem_GetReceipts_Params Parms;

	Parms.UserId = UserId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutReceipts != nullptr)
		*OutReceipts = Parms.OutReceipts;

}


// Function OnlineSubsystemBlueprints.OnlinePurchaseSubsystem.FinalizePurchase
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReceiptId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReceiptInfo                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOnlinePurchaseSubsystem::FinalizePurchase(const struct FUniqueNetIdRepl& UserId, const class FString& ReceiptId, const class FString& ReceiptInfo)
{
	static auto Func = Class->GetFunction("OnlinePurchaseSubsystem", "FinalizePurchase");

	Params::UOnlinePurchaseSubsystem_FinalizePurchase_Params Parms;

	Parms.UserId = UserId;
	Parms.ReceiptId = ReceiptId;
	Parms.ReceiptInfo = ReceiptInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.OnlinePurchaseSubsystemCheckout.Checkout
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlinePurchaseSubsystem*    Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPurchaseCheckoutRequestBP  CheckoutRequest                                                  (Parm, NativeAccessSpecifierPublic)
// class UOnlinePurchaseSubsystemCheckout*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlinePurchaseSubsystemCheckout* UOnlinePurchaseSubsystemCheckout::Checkout(class UOnlinePurchaseSubsystem* Subsystem, const struct FUniqueNetIdRepl& UserId, const struct FPurchaseCheckoutRequestBP& CheckoutRequest)
{
	static auto Func = Class->GetFunction("OnlinePurchaseSubsystemCheckout", "Checkout");

	Params::UOnlinePurchaseSubsystemCheckout_Checkout_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.UserId = UserId;
	Parms.CheckoutRequest = CheckoutRequest;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlinePurchaseSubsystemRedeemCode.RedeemCode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlinePurchaseSubsystem*    Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRedeemCodeRequestBP        RedeemCodeRequest                                                (Parm, NativeAccessSpecifierPublic)
// class UOnlinePurchaseSubsystemRedeemCode*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlinePurchaseSubsystemRedeemCode* UOnlinePurchaseSubsystemRedeemCode::RedeemCode(class UOnlinePurchaseSubsystem* Subsystem, const struct FUniqueNetIdRepl& UserId, const struct FRedeemCodeRequestBP& RedeemCodeRequest)
{
	static auto Func = Class->GetFunction("OnlinePurchaseSubsystemRedeemCode", "RedeemCode");

	Params::UOnlinePurchaseSubsystemRedeemCode_RedeemCode_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.UserId = UserId;
	Parms.RedeemCodeRequest = RedeemCodeRequest;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlinePurchaseSubsystemQueryReceipts.QueryReceipts
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlinePurchaseSubsystem*    Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRestoreReceipts                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlinePurchaseSubsystemQueryReceipts*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlinePurchaseSubsystemQueryReceipts* UOnlinePurchaseSubsystemQueryReceipts::QueryReceipts(class UOnlinePurchaseSubsystem* Subsystem, const struct FUniqueNetIdRepl& UserId, bool bRestoreReceipts)
{
	static auto Func = Class->GetFunction("OnlinePurchaseSubsystemQueryReceipts", "QueryReceipts");

	Params::UOnlinePurchaseSubsystemQueryReceipts_QueryReceipts_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.UserId = UserId;
	Parms.bRestoreReceipts = bRestoreReceipts;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlinePurchaseSubsystemFinalizeReceiptValidationInfo.FinalizeReceiptValidationInfo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlinePurchaseSubsystem*    Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InReceiptValidationInfo                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo* UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo::FinalizeReceiptValidationInfo(class UOnlinePurchaseSubsystem* Subsystem, const struct FUniqueNetIdRepl& UserId, const class FString& InReceiptValidationInfo)
{
	static auto Func = Class->GetFunction("OnlinePurchaseSubsystemFinalizeReceiptValidationInfo", "FinalizeReceiptValidationInfo");

	Params::UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_FinalizeReceiptValidationInfo_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.UserId = UserId;
	Parms.InReceiptValidationInfo = InReceiptValidationInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSessionSubsystem.SendSessionInviteToFriends
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SessionName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FUniqueNetIdRepl>    Friends                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineSessionSubsystem::SendSessionInviteToFriends(const struct FUniqueNetIdRepl& LocalUserId, class FName SessionName, const TArray<struct FUniqueNetIdRepl>& Friends)
{
	static auto Func = Class->GetFunction("OnlineSessionSubsystem", "SendSessionInviteToFriends");

	Params::UOnlineSessionSubsystem_SendSessionInviteToFriends_Params Parms;

	Parms.LocalUserId = LocalUserId;
	Parms.SessionName = SessionName;
	Parms.Friends = Friends;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSessionSubsystem.SendSessionInviteToFriend
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SessionName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            Friend                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineSessionSubsystem::SendSessionInviteToFriend(const struct FUniqueNetIdRepl& LocalUserId, class FName SessionName, const struct FUniqueNetIdRepl& Friend)
{
	static auto Func = Class->GetFunction("OnlineSessionSubsystem", "SendSessionInviteToFriend");

	Params::UOnlineSessionSubsystem_SendSessionInviteToFriend_Params Parms;

	Parms.LocalUserId = LocalUserId;
	Parms.SessionName = SessionName;
	Parms.Friend = Friend;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSessionSubsystem.RemovePlayerFromSession
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SessionName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            TargetPlayerId                                                   (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOnlineSessionSubsystem::RemovePlayerFromSession(int32 LocalUserNum, class FName SessionName, const struct FUniqueNetIdRepl& TargetPlayerId)
{
	static auto Func = Class->GetFunction("OnlineSessionSubsystem", "RemovePlayerFromSession");

	Params::UOnlineSessionSubsystem_RemovePlayerFromSession_Params Parms;

	Parms.LocalUserNum = LocalUserNum;
	Parms.SessionName = SessionName;
	Parms.TargetPlayerId = TargetPlayerId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.OnlineSessionSubsystem.RemoveNamedSession
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        SessionName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOnlineSessionSubsystem::RemoveNamedSession(class FName SessionName)
{
	static auto Func = Class->GetFunction("OnlineSessionSubsystem", "RemoveNamedSession");

	Params::UOnlineSessionSubsystem_RemoveNamedSession_Params Parms;

	Parms.SessionName = SessionName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.OnlineSessionSubsystem.IsSubsystemAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineSessionSubsystem::IsSubsystemAvailable()
{
	static auto Func = Class->GetFunction("OnlineSessionSubsystem", "IsSubsystemAvailable");

	Params::UOnlineSessionSubsystem_IsSubsystemAvailable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSessionSubsystem.IsPlayerInSession
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        SessionName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            UniqueId                                                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineSessionSubsystem::IsPlayerInSession(class FName SessionName, const struct FUniqueNetIdRepl& UniqueId)
{
	static auto Func = Class->GetFunction("OnlineSessionSubsystem", "IsPlayerInSession");

	Params::UOnlineSessionSubsystem_IsPlayerInSession_Params Parms;

	Parms.SessionName = SessionName;
	Parms.UniqueId = UniqueId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSessionSubsystem.HasPresenceSession
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineSessionSubsystem::HasPresenceSession()
{
	static auto Func = Class->GetFunction("OnlineSessionSubsystem", "HasPresenceSession");

	Params::UOnlineSessionSubsystem_HasPresenceSession_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSessionSubsystem.GetVoiceChatRoomName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SessionName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UOnlineSessionSubsystem::GetVoiceChatRoomName(int32 LocalUserNum, class FName SessionName)
{
	static auto Func = Class->GetFunction("OnlineSessionSubsystem", "GetVoiceChatRoomName");

	Params::UOnlineSessionSubsystem_GetVoiceChatRoomName_Params Parms;

	Parms.LocalUserNum = LocalUserNum;
	Parms.SessionName = SessionName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSessionSubsystem.GetSessionState
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        SessionName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EOnlineSessionState_    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EOnlineSessionState_ UOnlineSessionSubsystem::GetSessionState(class FName SessionName)
{
	static auto Func = Class->GetFunction("OnlineSessionSubsystem", "GetSessionState");

	Params::UOnlineSessionSubsystem_GetSessionState_Params Parms;

	Parms.SessionName = SessionName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSessionSubsystem.GetSessionSettings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        SessionName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineSessionSettings*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineSessionSettings* UOnlineSessionSubsystem::GetSessionSettings(class FName SessionName)
{
	static auto Func = Class->GetFunction("OnlineSessionSubsystem", "GetSessionSettings");

	Params::UOnlineSessionSubsystem_GetSessionSettings_Params Parms;

	Parms.SessionName = SessionName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSessionSubsystem.GetNumSessions
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UOnlineSessionSubsystem::GetNumSessions()
{
	static auto Func = Class->GetFunction("OnlineSessionSubsystem", "GetNumSessions");

	Params::UOnlineSessionSubsystem_GetNumSessions_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSessionSubsystem.GetNamedSession
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        SessionName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNamedOnlineSession*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNamedOnlineSession* UOnlineSessionSubsystem::GetNamedSession(class FName SessionName)
{
	static auto Func = Class->GetFunction("OnlineSessionSubsystem", "GetNamedSession");

	Params::UOnlineSessionSubsystem_GetNamedSession_Params Parms;

	Parms.SessionName = SessionName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSessionSubsystem.DumpSessionState
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UOnlineSessionSubsystem::DumpSessionState()
{
	static auto Func = Class->GetFunction("OnlineSessionSubsystem", "DumpSessionState");

	Params::UOnlineSessionSubsystem_DumpSessionState_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.OnlineSessionSubsystem.CreateSessionIdFromString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      SessionIdStr                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FUniqueNetIdRepl UOnlineSessionSubsystem::CreateSessionIdFromString(const class FString& SessionIdStr)
{
	static auto Func = Class->GetFunction("OnlineSessionSubsystem", "CreateSessionIdFromString");

	Params::UOnlineSessionSubsystem_CreateSessionIdFromString_Params Parms;

	Parms.SessionIdStr = SessionIdStr;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSessionSubsystemCreateSession.CreateSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineSessionSubsystem*     Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            HostingPlayerId                                                  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SessionName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FOnlineSessionSettingsBP    NewSessionSettings                                               (Parm, NativeAccessSpecifierPublic)
// class UOnlineSessionSubsystemCreateSession*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineSessionSubsystemCreateSession* UOnlineSessionSubsystemCreateSession::CreateSession(class UOnlineSessionSubsystem* Subsystem, const struct FUniqueNetIdRepl& HostingPlayerId, class FName SessionName, const struct FOnlineSessionSettingsBP& NewSessionSettings)
{
	static auto Func = Class->GetFunction("OnlineSessionSubsystemCreateSession", "CreateSession");

	Params::UOnlineSessionSubsystemCreateSession_CreateSession_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.HostingPlayerId = HostingPlayerId;
	Parms.SessionName = SessionName;
	Parms.NewSessionSettings = NewSessionSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSessionSubsystemStartSession.StartSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineSessionSubsystem*     Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SessionName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineSessionSubsystemStartSession*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineSessionSubsystemStartSession* UOnlineSessionSubsystemStartSession::StartSession(class UOnlineSessionSubsystem* Subsystem, class FName SessionName)
{
	static auto Func = Class->GetFunction("OnlineSessionSubsystemStartSession", "StartSession");

	Params::UOnlineSessionSubsystemStartSession_StartSession_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.SessionName = SessionName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSessionSubsystemUpdateSession.UpdateSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineSessionSubsystem*     Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SessionName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FOnlineSessionSettingsBP    UpdatedSessionSettings                                           (Parm, NativeAccessSpecifierPublic)
// bool                               bShouldRefreshOnlineData                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineSessionSubsystemUpdateSession*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineSessionSubsystemUpdateSession* UOnlineSessionSubsystemUpdateSession::UpdateSession(class UOnlineSessionSubsystem* Subsystem, class FName SessionName, const struct FOnlineSessionSettingsBP& UpdatedSessionSettings, bool bShouldRefreshOnlineData)
{
	static auto Func = Class->GetFunction("OnlineSessionSubsystemUpdateSession", "UpdateSession");

	Params::UOnlineSessionSubsystemUpdateSession_UpdateSession_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.SessionName = SessionName;
	Parms.UpdatedSessionSettings = UpdatedSessionSettings;
	Parms.bShouldRefreshOnlineData = bShouldRefreshOnlineData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSessionSubsystemEndSession.EndSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineSessionSubsystem*     Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SessionName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineSessionSubsystemEndSession*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineSessionSubsystemEndSession* UOnlineSessionSubsystemEndSession::EndSession(class UOnlineSessionSubsystem* Subsystem, class FName SessionName)
{
	static auto Func = Class->GetFunction("OnlineSessionSubsystemEndSession", "EndSession");

	Params::UOnlineSessionSubsystemEndSession_EndSession_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.SessionName = SessionName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSessionSubsystemDestroySession.DestroySession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineSessionSubsystem*     Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SessionName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineSessionSubsystemDestroySession*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineSessionSubsystemDestroySession* UOnlineSessionSubsystemDestroySession::DestroySession(class UOnlineSessionSubsystem* Subsystem, class FName SessionName)
{
	static auto Func = Class->GetFunction("OnlineSessionSubsystemDestroySession", "DestroySession");

	Params::UOnlineSessionSubsystemDestroySession_DestroySession_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.SessionName = SessionName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSessionSubsystemStartMatchmaking.StartMatchmaking
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineSessionSubsystem*     Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FUniqueNetIdRepl>    LocalPlayers                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class FName                        SessionName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FOnlineSessionSettingsBP    NewSessionSettings                                               (Parm, NativeAccessSpecifierPublic)
// class UOnlineSessionSearch*        SearchSettings                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineSessionSubsystemStartMatchmaking*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineSessionSubsystemStartMatchmaking* UOnlineSessionSubsystemStartMatchmaking::StartMatchmaking(class UOnlineSessionSubsystem* Subsystem, const TArray<struct FUniqueNetIdRepl>& LocalPlayers, class FName SessionName, const struct FOnlineSessionSettingsBP& NewSessionSettings, class UOnlineSessionSearch* SearchSettings)
{
	static auto Func = Class->GetFunction("OnlineSessionSubsystemStartMatchmaking", "StartMatchmaking");

	Params::UOnlineSessionSubsystemStartMatchmaking_StartMatchmaking_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalPlayers = LocalPlayers;
	Parms.SessionName = SessionName;
	Parms.NewSessionSettings = NewSessionSettings;
	Parms.SearchSettings = SearchSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSessionSubsystemCancelMatchmaking.CancelMatchmaking
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineSessionSubsystem*     Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            SearchingPlayerId                                                (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SessionName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineSessionSubsystemCancelMatchmaking*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineSessionSubsystemCancelMatchmaking* UOnlineSessionSubsystemCancelMatchmaking::CancelMatchmaking(class UOnlineSessionSubsystem* Subsystem, const struct FUniqueNetIdRepl& SearchingPlayerId, class FName SessionName)
{
	static auto Func = Class->GetFunction("OnlineSessionSubsystemCancelMatchmaking", "CancelMatchmaking");

	Params::UOnlineSessionSubsystemCancelMatchmaking_CancelMatchmaking_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.SearchingPlayerId = SearchingPlayerId;
	Parms.SessionName = SessionName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSessionSubsystemFindSessions.FindSessions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineSessionSubsystem*     Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            SearchingPlayerId                                                (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineSessionSearch*        SearchSettings                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineSessionSubsystemFindSessions*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineSessionSubsystemFindSessions* UOnlineSessionSubsystemFindSessions::FindSessions(class UOnlineSessionSubsystem* Subsystem, const struct FUniqueNetIdRepl& SearchingPlayerId, class UOnlineSessionSearch* SearchSettings)
{
	static auto Func = Class->GetFunction("OnlineSessionSubsystemFindSessions", "FindSessions");

	Params::UOnlineSessionSubsystemFindSessions_FindSessions_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.SearchingPlayerId = SearchingPlayerId;
	Parms.SearchSettings = SearchSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSessionSubsystemFindSessionById.FindSessionById
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineSessionSubsystem*     Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            SearchingUserId                                                  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            SessionId                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            FriendId                                                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      UserData                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineSessionSubsystemFindSessionById*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineSessionSubsystemFindSessionById* UOnlineSessionSubsystemFindSessionById::FindSessionById(class UOnlineSessionSubsystem* Subsystem, const struct FUniqueNetIdRepl& SearchingUserId, const struct FUniqueNetIdRepl& SessionId, const struct FUniqueNetIdRepl& FriendId, const class FString& UserData)
{
	static auto Func = Class->GetFunction("OnlineSessionSubsystemFindSessionById", "FindSessionById");

	Params::UOnlineSessionSubsystemFindSessionById_FindSessionById_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.SearchingUserId = SearchingUserId;
	Parms.SessionId = SessionId;
	Parms.FriendId = FriendId;
	Parms.UserData = UserData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSessionSubsystemCancelFindSessions.CancelFindSessions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineSessionSubsystem*     Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineSessionSubsystemCancelFindSessions*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineSessionSubsystemCancelFindSessions* UOnlineSessionSubsystemCancelFindSessions::CancelFindSessions(class UOnlineSessionSubsystem* Subsystem)
{
	static auto Func = Class->GetFunction("OnlineSessionSubsystemCancelFindSessions", "CancelFindSessions");

	Params::UOnlineSessionSubsystemCancelFindSessions_CancelFindSessions_Params Parms;

	Parms.Subsystem = Subsystem;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSessionSubsystemPingSearchResults.PingSearchResults
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineSessionSubsystem*     Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FOnlineSessionSearchResultBPSearchResult                                                     (Parm, NativeAccessSpecifierPublic)
// class UOnlineSessionSubsystemPingSearchResults*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineSessionSubsystemPingSearchResults* UOnlineSessionSubsystemPingSearchResults::PingSearchResults(class UOnlineSessionSubsystem* Subsystem, const struct FOnlineSessionSearchResultBP& SearchResult)
{
	static auto Func = Class->GetFunction("OnlineSessionSubsystemPingSearchResults", "PingSearchResults");

	Params::UOnlineSessionSubsystemPingSearchResults_PingSearchResults_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.SearchResult = SearchResult;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSessionSubsystemJoinSession.JoinSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineSessionSubsystem*     Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SessionName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FOnlineSessionSearchResultBPDesiredSession                                                   (Parm, NativeAccessSpecifierPublic)
// class UOnlineSessionSubsystemJoinSession*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineSessionSubsystemJoinSession* UOnlineSessionSubsystemJoinSession::JoinSession(class UOnlineSessionSubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, class FName SessionName, const struct FOnlineSessionSearchResultBP& DesiredSession)
{
	static auto Func = Class->GetFunction("OnlineSessionSubsystemJoinSession", "JoinSession");

	Params::UOnlineSessionSubsystemJoinSession_JoinSession_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserId = LocalUserId;
	Parms.SessionName = SessionName;
	Parms.DesiredSession = DesiredSession;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSessionSubsystemFindFriendSession.FindFriendSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineSessionSubsystem*     Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            Friend                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineSessionSubsystemFindFriendSession*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineSessionSubsystemFindFriendSession* UOnlineSessionSubsystemFindFriendSession::FindFriendSession(class UOnlineSessionSubsystem* Subsystem, int32 LocalUserNum, const struct FUniqueNetIdRepl& Friend)
{
	static auto Func = Class->GetFunction("OnlineSessionSubsystemFindFriendSession", "FindFriendSession");

	Params::UOnlineSessionSubsystemFindFriendSession_FindFriendSession_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserNum = LocalUserNum;
	Parms.Friend = Friend;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSessionSubsystemRegisterPlayers.RegisterPlayers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineSessionSubsystem*     Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SessionName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FUniqueNetIdRepl>    Players                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               bWasInvited                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineSessionSubsystemRegisterPlayers*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineSessionSubsystemRegisterPlayers* UOnlineSessionSubsystemRegisterPlayers::RegisterPlayers(class UOnlineSessionSubsystem* Subsystem, class FName SessionName, const TArray<struct FUniqueNetIdRepl>& Players, bool bWasInvited)
{
	static auto Func = Class->GetFunction("OnlineSessionSubsystemRegisterPlayers", "RegisterPlayers");

	Params::UOnlineSessionSubsystemRegisterPlayers_RegisterPlayers_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.SessionName = SessionName;
	Parms.Players = Players;
	Parms.bWasInvited = bWasInvited;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSessionSubsystemUnregisterPlayers.UnregisterPlayers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineSessionSubsystem*     Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SessionName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FUniqueNetIdRepl>    Players                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UOnlineSessionSubsystemUnregisterPlayers*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineSessionSubsystemUnregisterPlayers* UOnlineSessionSubsystemUnregisterPlayers::UnregisterPlayers(class UOnlineSessionSubsystem* Subsystem, class FName SessionName, const TArray<struct FUniqueNetIdRepl>& Players)
{
	static auto Func = Class->GetFunction("OnlineSessionSubsystemUnregisterPlayers", "UnregisterPlayers");

	Params::UOnlineSessionSubsystemUnregisterPlayers_UnregisterPlayers_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.SessionName = SessionName;
	Parms.Players = Players;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSessionSubsystemRegisterLocalPlayer.RegisterLocalPlayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineSessionSubsystem*     Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            PlayerId                                                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SessionName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineSessionSubsystemRegisterLocalPlayer*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineSessionSubsystemRegisterLocalPlayer* UOnlineSessionSubsystemRegisterLocalPlayer::RegisterLocalPlayer(class UOnlineSessionSubsystem* Subsystem, const struct FUniqueNetIdRepl& PlayerId, class FName SessionName)
{
	static auto Func = Class->GetFunction("OnlineSessionSubsystemRegisterLocalPlayer", "RegisterLocalPlayer");

	Params::UOnlineSessionSubsystemRegisterLocalPlayer_RegisterLocalPlayer_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.PlayerId = PlayerId;
	Parms.SessionName = SessionName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSessionSubsystemUnregisterLocalPlayer.UnregisterLocalPlayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineSessionSubsystem*     Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            PlayerId                                                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SessionName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineSessionSubsystemUnregisterLocalPlayer*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineSessionSubsystemUnregisterLocalPlayer* UOnlineSessionSubsystemUnregisterLocalPlayer::UnregisterLocalPlayer(class UOnlineSessionSubsystem* Subsystem, const struct FUniqueNetIdRepl& PlayerId, class FName SessionName)
{
	static auto Func = Class->GetFunction("OnlineSessionSubsystemUnregisterLocalPlayer", "UnregisterLocalPlayer");

	Params::UOnlineSessionSubsystemUnregisterLocalPlayer_UnregisterLocalPlayer_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.PlayerId = PlayerId;
	Parms.SessionName = SessionName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSharedCloudSubsystem.WriteSharedFile
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Filename                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFileData*                   Contents                                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineSharedCloudSubsystem::WriteSharedFile(const struct FUniqueNetIdRepl& UserId, const class FString& Filename, class UFileData** Contents)
{
	static auto Func = Class->GetFunction("OnlineSharedCloudSubsystem", "WriteSharedFile");

	Params::UOnlineSharedCloudSubsystem_WriteSharedFile_Params Parms;

	Parms.UserId = UserId;
	Parms.Filename = Filename;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Contents != nullptr)
		*Contents = Parms.Contents;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSharedCloudSubsystem.IsSubsystemAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineSharedCloudSubsystem::IsSubsystemAvailable()
{
	static auto Func = Class->GetFunction("OnlineSharedCloudSubsystem", "IsSubsystemAvailable");

	Params::UOnlineSharedCloudSubsystem_IsSubsystemAvailable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSharedCloudSubsystem.ClearSharedFiles
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineSharedCloudSubsystem::ClearSharedFiles()
{
	static auto Func = Class->GetFunction("OnlineSharedCloudSubsystem", "ClearSharedFiles");

	Params::UOnlineSharedCloudSubsystem_ClearSharedFiles_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSharingSubsystem.ReadNewsFeed
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumPostsToRead                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineSharingSubsystem::ReadNewsFeed(int32 LocalUserNum, int32 NumPostsToRead)
{
	static auto Func = Class->GetFunction("OnlineSharingSubsystem", "ReadNewsFeed");

	Params::UOnlineSharingSubsystem_ReadNewsFeed_Params Parms;

	Parms.LocalUserNum = LocalUserNum;
	Parms.NumPostsToRead = NumPostsToRead;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSharingSubsystem.IsSubsystemAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineSharingSubsystem::IsSubsystemAvailable()
{
	static auto Func = Class->GetFunction("OnlineSharingSubsystem", "IsSubsystemAvailable");

	Params::UOnlineSharingSubsystem_IsSubsystemAvailable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineStatsSubsystem.IsSubsystemAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineStatsSubsystem::IsSubsystemAvailable()
{
	static auto Func = Class->GetFunction("OnlineStatsSubsystem", "IsSubsystemAvailable");

	Params::UOnlineStatsSubsystem_IsSubsystemAvailable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineStatsSubsystem.GetStats
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUniqueNetIdRepl            StatsUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FOnlineStatsUserStatsBP     ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FOnlineStatsUserStatsBP UOnlineStatsSubsystem::GetStats(const struct FUniqueNetIdRepl& StatsUserId)
{
	static auto Func = Class->GetFunction("OnlineStatsSubsystem", "GetStats");

	Params::UOnlineStatsSubsystem_GetStats_Params Parms;

	Parms.StatsUserId = StatsUserId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineStatsSubsystemQueryStats.QueryStats
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineStatsSubsystem*       Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FUniqueNetIdRepl>    StatUsers                                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class FString>              StatNames                                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UOnlineStatsSubsystemQueryStats*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineStatsSubsystemQueryStats* UOnlineStatsSubsystemQueryStats::QueryStats(class UOnlineStatsSubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, const TArray<struct FUniqueNetIdRepl>& StatUsers, const TArray<class FString>& StatNames)
{
	static auto Func = Class->GetFunction("OnlineStatsSubsystemQueryStats", "QueryStats");

	Params::UOnlineStatsSubsystemQueryStats_QueryStats_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserId = LocalUserId;
	Parms.StatUsers = StatUsers;
	Parms.StatNames = StatNames;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineStatsSubsystemUpdateStats.UpdateStats
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineStatsSubsystem*       Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FOnlineStatsUserUpdatedStatsBP>UpdatedUserStats                                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UOnlineStatsSubsystemUpdateStats*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineStatsSubsystemUpdateStats* UOnlineStatsSubsystemUpdateStats::UpdateStats(class UOnlineStatsSubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, const TArray<struct FOnlineStatsUserUpdatedStatsBP>& UpdatedUserStats)
{
	static auto Func = Class->GetFunction("OnlineStatsSubsystemUpdateStats", "UpdateStats");

	Params::UOnlineStatsSubsystemUpdateStats_UpdateStats_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserId = LocalUserId;
	Parms.UpdatedUserStats = UpdatedUserStats;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineStoreV2Subsystem.IsSubsystemAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineStoreV2Subsystem::IsSubsystemAvailable()
{
	static auto Func = Class->GetFunction("OnlineStoreV2Subsystem", "IsSubsystemAvailable");

	Params::UOnlineStoreV2Subsystem_IsSubsystemAvailable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineStoreV2Subsystem.GetOffers
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UOnlineStoreOffer*>   OutOffers                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UOnlineStoreV2Subsystem::GetOffers(TArray<class UOnlineStoreOffer*>* OutOffers)
{
	static auto Func = Class->GetFunction("OnlineStoreV2Subsystem", "GetOffers");

	Params::UOnlineStoreV2Subsystem_GetOffers_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutOffers != nullptr)
		*OutOffers = Parms.OutOffers;

}


// Function OnlineSubsystemBlueprints.OnlineStoreV2Subsystem.GetOffer
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      OfferId                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineStoreOffer*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineStoreOffer* UOnlineStoreV2Subsystem::GetOffer(const class FString& OfferId)
{
	static auto Func = Class->GetFunction("OnlineStoreV2Subsystem", "GetOffer");

	Params::UOnlineStoreV2Subsystem_GetOffer_Params Parms;

	Parms.OfferId = OfferId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineStoreV2Subsystem.GetCategories
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FOnlineStoreCategoryBP>OutCategories                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UOnlineStoreV2Subsystem::GetCategories(TArray<struct FOnlineStoreCategoryBP>* OutCategories)
{
	static auto Func = Class->GetFunction("OnlineStoreV2Subsystem", "GetCategories");

	Params::UOnlineStoreV2Subsystem_GetCategories_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutCategories != nullptr)
		*OutCategories = Parms.OutCategories;

}


// Function OnlineSubsystemBlueprints.OnlineStoreV2SubsystemQueryCategories.QueryCategories
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineStoreV2Subsystem*     Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineStoreV2SubsystemQueryCategories*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineStoreV2SubsystemQueryCategories* UOnlineStoreV2SubsystemQueryCategories::QueryCategories(class UOnlineStoreV2Subsystem* Subsystem, const struct FUniqueNetIdRepl& UserId)
{
	static auto Func = Class->GetFunction("OnlineStoreV2SubsystemQueryCategories", "QueryCategories");

	Params::UOnlineStoreV2SubsystemQueryCategories_QueryCategories_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.UserId = UserId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineStoreV2SubsystemQueryOffersByFilter.QueryOffersByFilter
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineStoreV2Subsystem*     Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FOnlineStoreFilterBP        Filter                                                           (Parm, NativeAccessSpecifierPublic)
// class UOnlineStoreV2SubsystemQueryOffersByFilter*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineStoreV2SubsystemQueryOffersByFilter* UOnlineStoreV2SubsystemQueryOffersByFilter::QueryOffersByFilter(class UOnlineStoreV2Subsystem* Subsystem, const struct FUniqueNetIdRepl& UserId, const struct FOnlineStoreFilterBP& Filter)
{
	static auto Func = Class->GetFunction("OnlineStoreV2SubsystemQueryOffersByFilter", "QueryOffersByFilter");

	Params::UOnlineStoreV2SubsystemQueryOffersByFilter_QueryOffersByFilter_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.UserId = UserId;
	Parms.Filter = Filter;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineStoreV2SubsystemQueryOffersById.QueryOffersById
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineStoreV2Subsystem*     Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              OfferIds                                                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UOnlineStoreV2SubsystemQueryOffersById*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineStoreV2SubsystemQueryOffersById* UOnlineStoreV2SubsystemQueryOffersById::QueryOffersById(class UOnlineStoreV2Subsystem* Subsystem, const struct FUniqueNetIdRepl& UserId, const TArray<class FString>& OfferIds)
{
	static auto Func = Class->GetFunction("OnlineStoreV2SubsystemQueryOffersById", "QueryOffersById");

	Params::UOnlineStoreV2SubsystemQueryOffersById_QueryOffersById_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.UserId = UserId;
	Parms.OfferIds = OfferIds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedVoiceSubsystem
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        SubsystemName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineVoiceSubsystem*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineVoiceSubsystem* UOnlineSubsystem::GetNamedVoiceSubsystem(class FName SubsystemName)
{
	static auto Func = Class->GetFunction("OnlineSubsystem", "GetNamedVoiceSubsystem");

	Params::UOnlineSubsystem_GetNamedVoiceSubsystem_Params Parms;

	Parms.SubsystemName = SubsystemName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedVoiceAdminSubsystem
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        SubsystemName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineVoiceAdminSubsystem*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineVoiceAdminSubsystem* UOnlineSubsystem::GetNamedVoiceAdminSubsystem(class FName SubsystemName)
{
	static auto Func = Class->GetFunction("OnlineSubsystem", "GetNamedVoiceAdminSubsystem");

	Params::UOnlineSubsystem_GetNamedVoiceAdminSubsystem_Params Parms;

	Parms.SubsystemName = SubsystemName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedUserSubsystem
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        SubsystemName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineUserSubsystem*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineUserSubsystem* UOnlineSubsystem::GetNamedUserSubsystem(class FName SubsystemName)
{
	static auto Func = Class->GetFunction("OnlineSubsystem", "GetNamedUserSubsystem");

	Params::UOnlineSubsystem_GetNamedUserSubsystem_Params Parms;

	Parms.SubsystemName = SubsystemName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedUserCloudSubsystem
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        SubsystemName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineUserCloudSubsystem*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineUserCloudSubsystem* UOnlineSubsystem::GetNamedUserCloudSubsystem(class FName SubsystemName)
{
	static auto Func = Class->GetFunction("OnlineSubsystem", "GetNamedUserCloudSubsystem");

	Params::UOnlineSubsystem_GetNamedUserCloudSubsystem_Params Parms;

	Parms.SubsystemName = SubsystemName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedTurnBasedSubsystem
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        SubsystemName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineTurnBasedSubsystem*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineTurnBasedSubsystem* UOnlineSubsystem::GetNamedTurnBasedSubsystem(class FName SubsystemName)
{
	static auto Func = Class->GetFunction("OnlineSubsystem", "GetNamedTurnBasedSubsystem");

	Params::UOnlineSubsystem_GetNamedTurnBasedSubsystem_Params Parms;

	Parms.SubsystemName = SubsystemName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedTournamentSubsystem
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        SubsystemName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineTournamentSubsystem*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineTournamentSubsystem* UOnlineSubsystem::GetNamedTournamentSubsystem(class FName SubsystemName)
{
	static auto Func = Class->GetFunction("OnlineSubsystem", "GetNamedTournamentSubsystem");

	Params::UOnlineSubsystem_GetNamedTournamentSubsystem_Params Parms;

	Parms.SubsystemName = SubsystemName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedTitleFileSubsystem
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        SubsystemName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineTitleFileSubsystem*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineTitleFileSubsystem* UOnlineSubsystem::GetNamedTitleFileSubsystem(class FName SubsystemName)
{
	static auto Func = Class->GetFunction("OnlineSubsystem", "GetNamedTitleFileSubsystem");

	Params::UOnlineSubsystem_GetNamedTitleFileSubsystem_Params Parms;

	Parms.SubsystemName = SubsystemName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedTimeSubsystem
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        SubsystemName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineTimeSubsystem*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineTimeSubsystem* UOnlineSubsystem::GetNamedTimeSubsystem(class FName SubsystemName)
{
	static auto Func = Class->GetFunction("OnlineSubsystem", "GetNamedTimeSubsystem");

	Params::UOnlineSubsystem_GetNamedTimeSubsystem_Params Parms;

	Parms.SubsystemName = SubsystemName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedStoreV2Subsystem
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        SubsystemName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineStoreV2Subsystem*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineStoreV2Subsystem* UOnlineSubsystem::GetNamedStoreV2Subsystem(class FName SubsystemName)
{
	static auto Func = Class->GetFunction("OnlineSubsystem", "GetNamedStoreV2Subsystem");

	Params::UOnlineSubsystem_GetNamedStoreV2Subsystem_Params Parms;

	Parms.SubsystemName = SubsystemName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedStatsSubsystem
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        SubsystemName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineStatsSubsystem*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineStatsSubsystem* UOnlineSubsystem::GetNamedStatsSubsystem(class FName SubsystemName)
{
	static auto Func = Class->GetFunction("OnlineSubsystem", "GetNamedStatsSubsystem");

	Params::UOnlineSubsystem_GetNamedStatsSubsystem_Params Parms;

	Parms.SubsystemName = SubsystemName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedSharingSubsystem
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        SubsystemName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineSharingSubsystem*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineSharingSubsystem* UOnlineSubsystem::GetNamedSharingSubsystem(class FName SubsystemName)
{
	static auto Func = Class->GetFunction("OnlineSubsystem", "GetNamedSharingSubsystem");

	Params::UOnlineSubsystem_GetNamedSharingSubsystem_Params Parms;

	Parms.SubsystemName = SubsystemName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedSharedCloudSubsystem
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        SubsystemName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineSharedCloudSubsystem* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineSharedCloudSubsystem* UOnlineSubsystem::GetNamedSharedCloudSubsystem(class FName SubsystemName)
{
	static auto Func = Class->GetFunction("OnlineSubsystem", "GetNamedSharedCloudSubsystem");

	Params::UOnlineSubsystem_GetNamedSharedCloudSubsystem_Params Parms;

	Parms.SubsystemName = SubsystemName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedSessionSubsystem
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        SubsystemName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineSessionSubsystem*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineSessionSubsystem* UOnlineSubsystem::GetNamedSessionSubsystem(class FName SubsystemName)
{
	static auto Func = Class->GetFunction("OnlineSubsystem", "GetNamedSessionSubsystem");

	Params::UOnlineSubsystem_GetNamedSessionSubsystem_Params Parms;

	Parms.SubsystemName = SubsystemName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedPurchaseSubsystem
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        SubsystemName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlinePurchaseSubsystem*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlinePurchaseSubsystem* UOnlineSubsystem::GetNamedPurchaseSubsystem(class FName SubsystemName)
{
	static auto Func = Class->GetFunction("OnlineSubsystem", "GetNamedPurchaseSubsystem");

	Params::UOnlineSubsystem_GetNamedPurchaseSubsystem_Params Parms;

	Parms.SubsystemName = SubsystemName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedPresenceSubsystem
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        SubsystemName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlinePresenceSubsystem*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlinePresenceSubsystem* UOnlineSubsystem::GetNamedPresenceSubsystem(class FName SubsystemName)
{
	static auto Func = Class->GetFunction("OnlineSubsystem", "GetNamedPresenceSubsystem");

	Params::UOnlineSubsystem_GetNamedPresenceSubsystem_Params Parms;

	Parms.SubsystemName = SubsystemName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedPartySubsystem
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        SubsystemName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlinePartySubsystem*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlinePartySubsystem* UOnlineSubsystem::GetNamedPartySubsystem(class FName SubsystemName)
{
	static auto Func = Class->GetFunction("OnlineSubsystem", "GetNamedPartySubsystem");

	Params::UOnlineSubsystem_GetNamedPartySubsystem_Params Parms;

	Parms.SubsystemName = SubsystemName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedMessageSubsystem
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        SubsystemName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineMessageSubsystem*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineMessageSubsystem* UOnlineSubsystem::GetNamedMessageSubsystem(class FName SubsystemName)
{
	static auto Func = Class->GetFunction("OnlineSubsystem", "GetNamedMessageSubsystem");

	Params::UOnlineSubsystem_GetNamedMessageSubsystem_Params Parms;

	Parms.SubsystemName = SubsystemName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedMessageSanitizerSubsystem
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        SubsystemName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineMessageSanitizerSubsystem*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineMessageSanitizerSubsystem* UOnlineSubsystem::GetNamedMessageSanitizerSubsystem(class FName SubsystemName)
{
	static auto Func = Class->GetFunction("OnlineSubsystem", "GetNamedMessageSanitizerSubsystem");

	Params::UOnlineSubsystem_GetNamedMessageSanitizerSubsystem_Params Parms;

	Parms.SubsystemName = SubsystemName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedLobbySubsystem
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        SubsystemName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineLobbySubsystem*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineLobbySubsystem* UOnlineSubsystem::GetNamedLobbySubsystem(class FName SubsystemName)
{
	static auto Func = Class->GetFunction("OnlineSubsystem", "GetNamedLobbySubsystem");

	Params::UOnlineSubsystem_GetNamedLobbySubsystem_Params Parms;

	Parms.SubsystemName = SubsystemName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedLeaderboardsSubsystem
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        SubsystemName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineLeaderboardsSubsystem*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineLeaderboardsSubsystem* UOnlineSubsystem::GetNamedLeaderboardsSubsystem(class FName SubsystemName)
{
	static auto Func = Class->GetFunction("OnlineSubsystem", "GetNamedLeaderboardsSubsystem");

	Params::UOnlineSubsystem_GetNamedLeaderboardsSubsystem_Params Parms;

	Parms.SubsystemName = SubsystemName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedIdentitySubsystem
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        SubsystemName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineIdentitySubsystem*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineIdentitySubsystem* UOnlineSubsystem::GetNamedIdentitySubsystem(class FName SubsystemName)
{
	static auto Func = Class->GetFunction("OnlineSubsystem", "GetNamedIdentitySubsystem");

	Params::UOnlineSubsystem_GetNamedIdentitySubsystem_Params Parms;

	Parms.SubsystemName = SubsystemName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedGroupsSubsystem
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        SubsystemName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineGroupsSubsystem*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineGroupsSubsystem* UOnlineSubsystem::GetNamedGroupsSubsystem(class FName SubsystemName)
{
	static auto Func = Class->GetFunction("OnlineSubsystem", "GetNamedGroupsSubsystem");

	Params::UOnlineSubsystem_GetNamedGroupsSubsystem_Params Parms;

	Parms.SubsystemName = SubsystemName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedGameItemStatsSubsystem
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        SubsystemName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineGameItemStatsSubsystem*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineGameItemStatsSubsystem* UOnlineSubsystem::GetNamedGameItemStatsSubsystem(class FName SubsystemName)
{
	static auto Func = Class->GetFunction("OnlineSubsystem", "GetNamedGameItemStatsSubsystem");

	Params::UOnlineSubsystem_GetNamedGameItemStatsSubsystem_Params Parms;

	Parms.SubsystemName = SubsystemName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedGameActivitySubsystem
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        SubsystemName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineGameActivitySubsystem*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineGameActivitySubsystem* UOnlineSubsystem::GetNamedGameActivitySubsystem(class FName SubsystemName)
{
	static auto Func = Class->GetFunction("OnlineSubsystem", "GetNamedGameActivitySubsystem");

	Params::UOnlineSubsystem_GetNamedGameActivitySubsystem_Params Parms;

	Parms.SubsystemName = SubsystemName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedFriendsSubsystem
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        SubsystemName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineFriendsSubsystem*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineFriendsSubsystem* UOnlineSubsystem::GetNamedFriendsSubsystem(class FName SubsystemName)
{
	static auto Func = Class->GetFunction("OnlineSubsystem", "GetNamedFriendsSubsystem");

	Params::UOnlineSubsystem_GetNamedFriendsSubsystem_Params Parms;

	Parms.SubsystemName = SubsystemName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedExternalUISubsystem
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        SubsystemName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineExternalUISubsystem*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineExternalUISubsystem* UOnlineSubsystem::GetNamedExternalUISubsystem(class FName SubsystemName)
{
	static auto Func = Class->GetFunction("OnlineSubsystem", "GetNamedExternalUISubsystem");

	Params::UOnlineSubsystem_GetNamedExternalUISubsystem_Params Parms;

	Parms.SubsystemName = SubsystemName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedEventsSubsystem
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        SubsystemName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineEventsSubsystem*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineEventsSubsystem* UOnlineSubsystem::GetNamedEventsSubsystem(class FName SubsystemName)
{
	static auto Func = Class->GetFunction("OnlineSubsystem", "GetNamedEventsSubsystem");

	Params::UOnlineSubsystem_GetNamedEventsSubsystem_Params Parms;

	Parms.SubsystemName = SubsystemName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedEntitlementsSubsystem
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        SubsystemName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineEntitlementsSubsystem*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineEntitlementsSubsystem* UOnlineSubsystem::GetNamedEntitlementsSubsystem(class FName SubsystemName)
{
	static auto Func = Class->GetFunction("OnlineSubsystem", "GetNamedEntitlementsSubsystem");

	Params::UOnlineSubsystem_GetNamedEntitlementsSubsystem_Params Parms;

	Parms.SubsystemName = SubsystemName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedChatSubsystem
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        SubsystemName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineChatSubsystem*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineChatSubsystem* UOnlineSubsystem::GetNamedChatSubsystem(class FName SubsystemName)
{
	static auto Func = Class->GetFunction("OnlineSubsystem", "GetNamedChatSubsystem");

	Params::UOnlineSubsystem_GetNamedChatSubsystem_Params Parms;

	Parms.SubsystemName = SubsystemName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedAvatarSubsystem
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        SubsystemName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineAvatarSubsystem*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineAvatarSubsystem* UOnlineSubsystem::GetNamedAvatarSubsystem(class FName SubsystemName)
{
	static auto Func = Class->GetFunction("OnlineSubsystem", "GetNamedAvatarSubsystem");

	Params::UOnlineSubsystem_GetNamedAvatarSubsystem_Params Parms;

	Parms.SubsystemName = SubsystemName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedAchievementsSubsystem
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        SubsystemName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineAchievementsSubsystem*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineAchievementsSubsystem* UOnlineSubsystem::GetNamedAchievementsSubsystem(class FName SubsystemName)
{
	static auto Func = Class->GetFunction("OnlineSubsystem", "GetNamedAchievementsSubsystem");

	Params::UOnlineSubsystem_GetNamedAchievementsSubsystem_Params Parms;

	Parms.SubsystemName = SubsystemName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineTimeSubsystem.QueryServerUtcTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineTimeSubsystem::QueryServerUtcTime()
{
	static auto Func = Class->GetFunction("OnlineTimeSubsystem", "QueryServerUtcTime");

	Params::UOnlineTimeSubsystem_QueryServerUtcTime_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineTimeSubsystem.IsSubsystemAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineTimeSubsystem::IsSubsystemAvailable()
{
	static auto Func = Class->GetFunction("OnlineTimeSubsystem", "IsSubsystemAvailable");

	Params::UOnlineTimeSubsystem_IsSubsystemAvailable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineTimeSubsystem.GetLastServerUtcTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UOnlineTimeSubsystem::GetLastServerUtcTime()
{
	static auto Func = Class->GetFunction("OnlineTimeSubsystem", "GetLastServerUtcTime");

	Params::UOnlineTimeSubsystem_GetLastServerUtcTime_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineTitleFileSubsystem.IsSubsystemAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineTitleFileSubsystem::IsSubsystemAvailable()
{
	static auto Func = Class->GetFunction("OnlineTitleFileSubsystem", "IsSubsystemAvailable");

	Params::UOnlineTitleFileSubsystem_IsSubsystemAvailable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineTitleFileSubsystem.GetFileList
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FCloudFileHeaderBP>  Files                                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UOnlineTitleFileSubsystem::GetFileList(TArray<struct FCloudFileHeaderBP>* Files)
{
	static auto Func = Class->GetFunction("OnlineTitleFileSubsystem", "GetFileList");

	Params::UOnlineTitleFileSubsystem_GetFileList_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Files != nullptr)
		*Files = Parms.Files;

}


// Function OnlineSubsystemBlueprints.OnlineTitleFileSubsystem.GetFileContents
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Filename                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFileData*                   FileContents                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineTitleFileSubsystem::GetFileContents(const class FString& Filename, class UFileData** FileContents)
{
	static auto Func = Class->GetFunction("OnlineTitleFileSubsystem", "GetFileContents");

	Params::UOnlineTitleFileSubsystem_GetFileContents_Params Parms;

	Parms.Filename = Filename;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (FileContents != nullptr)
		*FileContents = Parms.FileContents;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineTitleFileSubsystem.DeleteCachedFiles
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bSkipEnumerated                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOnlineTitleFileSubsystem::DeleteCachedFiles(bool bSkipEnumerated)
{
	static auto Func = Class->GetFunction("OnlineTitleFileSubsystem", "DeleteCachedFiles");

	Params::UOnlineTitleFileSubsystem_DeleteCachedFiles_Params Parms;

	Parms.bSkipEnumerated = bSkipEnumerated;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.OnlineTitleFileSubsystem.ClearFiles
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineTitleFileSubsystem::ClearFiles()
{
	static auto Func = Class->GetFunction("OnlineTitleFileSubsystem", "ClearFiles");

	Params::UOnlineTitleFileSubsystem_ClearFiles_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineTitleFileSubsystem.ClearFile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Filename                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineTitleFileSubsystem::ClearFile(const class FString& Filename)
{
	static auto Func = Class->GetFunction("OnlineTitleFileSubsystem", "ClearFile");

	Params::UOnlineTitleFileSubsystem_ClearFile_Params Parms;

	Parms.Filename = Filename;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineTitleFileSubsystemEnumerateFiles.EnumerateFiles
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineTitleFileSubsystem*   Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPagedQueryBP               Page                                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UOnlineTitleFileSubsystemEnumerateFiles*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineTitleFileSubsystemEnumerateFiles* UOnlineTitleFileSubsystemEnumerateFiles::EnumerateFiles(class UOnlineTitleFileSubsystem* Subsystem, const struct FPagedQueryBP& Page)
{
	static auto Func = Class->GetFunction("OnlineTitleFileSubsystemEnumerateFiles", "EnumerateFiles");

	Params::UOnlineTitleFileSubsystemEnumerateFiles_EnumerateFiles_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.Page = Page;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineTitleFileSubsystemReadFile.ReadFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineTitleFileSubsystem*   Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Filename                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineTitleFileSubsystemReadFile*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineTitleFileSubsystemReadFile* UOnlineTitleFileSubsystemReadFile::ReadFile(class UOnlineTitleFileSubsystem* Subsystem, const class FString& Filename)
{
	static auto Func = Class->GetFunction("OnlineTitleFileSubsystemReadFile", "ReadFile");

	Params::UOnlineTitleFileSubsystemReadFile_ReadFile_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.Filename = Filename;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineTournamentSubsystem.IsSubsystemAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineTournamentSubsystem::IsSubsystemAvailable()
{
	static auto Func = Class->GetFunction("OnlineTournamentSubsystem", "IsSubsystemAvailable");

	Params::UOnlineTournamentSubsystem_IsSubsystemAvailable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineTurnBasedSubsystem.IsSubsystemAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineTurnBasedSubsystem::IsSubsystemAvailable()
{
	static auto Func = Class->GetFunction("OnlineTurnBasedSubsystem", "IsSubsystemAvailable");

	Params::UOnlineTurnBasedSubsystem_IsSubsystemAvailable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineTurnBasedSubsystem.GetMatchDataSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UOnlineTurnBasedSubsystem::GetMatchDataSize()
{
	static auto Func = Class->GetFunction("OnlineTurnBasedSubsystem", "GetMatchDataSize");

	Params::UOnlineTurnBasedSubsystem_GetMatchDataSize_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineTurnBasedSubsystemLoadAllMatches.LoadAllMatches
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineTurnBasedSubsystem*   Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineTurnBasedSubsystemLoadAllMatches*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineTurnBasedSubsystemLoadAllMatches* UOnlineTurnBasedSubsystemLoadAllMatches::LoadAllMatches(class UOnlineTurnBasedSubsystem* Subsystem)
{
	static auto Func = Class->GetFunction("OnlineTurnBasedSubsystemLoadAllMatches", "LoadAllMatches");

	Params::UOnlineTurnBasedSubsystemLoadAllMatches_LoadAllMatches_Params Parms;

	Parms.Subsystem = Subsystem;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineTurnBasedSubsystemLoadMatchWithID.LoadMatchWithID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineTurnBasedSubsystem*   Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      MatchID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineTurnBasedSubsystemLoadMatchWithID*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineTurnBasedSubsystemLoadMatchWithID* UOnlineTurnBasedSubsystemLoadMatchWithID::LoadMatchWithID(class UOnlineTurnBasedSubsystem* Subsystem, const class FString& MatchID)
{
	static auto Func = Class->GetFunction("OnlineTurnBasedSubsystemLoadMatchWithID", "LoadMatchWithID");

	Params::UOnlineTurnBasedSubsystemLoadMatchWithID_LoadMatchWithID_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.MatchID = MatchID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineUserCloudSubsystem.RequestUsageInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineUserCloudSubsystem::RequestUsageInfo(const struct FUniqueNetIdRepl& UserId)
{
	static auto Func = Class->GetFunction("OnlineUserCloudSubsystem", "RequestUsageInfo");

	Params::UOnlineUserCloudSubsystem_RequestUsageInfo_Params Parms;

	Parms.UserId = UserId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineUserCloudSubsystem.IsSubsystemAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineUserCloudSubsystem::IsSubsystemAvailable()
{
	static auto Func = Class->GetFunction("OnlineUserCloudSubsystem", "IsSubsystemAvailable");

	Params::UOnlineUserCloudSubsystem_IsSubsystemAvailable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineUserCloudSubsystem.GetUserFileList
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FCloudFileHeaderBP>  UserFiles                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UOnlineUserCloudSubsystem::GetUserFileList(const struct FUniqueNetIdRepl& UserId, TArray<struct FCloudFileHeaderBP>* UserFiles)
{
	static auto Func = Class->GetFunction("OnlineUserCloudSubsystem", "GetUserFileList");

	Params::UOnlineUserCloudSubsystem_GetUserFileList_Params Parms;

	Parms.UserId = UserId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (UserFiles != nullptr)
		*UserFiles = Parms.UserFiles;

}


// Function OnlineSubsystemBlueprints.OnlineUserCloudSubsystem.GetFileContents
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Filename                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFileData*                   FileContents                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineUserCloudSubsystem::GetFileContents(const struct FUniqueNetIdRepl& UserId, const class FString& Filename, class UFileData** FileContents)
{
	static auto Func = Class->GetFunction("OnlineUserCloudSubsystem", "GetFileContents");

	Params::UOnlineUserCloudSubsystem_GetFileContents_Params Parms;

	Parms.UserId = UserId;
	Parms.Filename = Filename;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (FileContents != nullptr)
		*FileContents = Parms.FileContents;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineUserCloudSubsystem.DumpCloudState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOnlineUserCloudSubsystem::DumpCloudState(const struct FUniqueNetIdRepl& UserId)
{
	static auto Func = Class->GetFunction("OnlineUserCloudSubsystem", "DumpCloudState");

	Params::UOnlineUserCloudSubsystem_DumpCloudState_Params Parms;

	Parms.UserId = UserId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.OnlineUserCloudSubsystem.DumpCloudFileState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Filename                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOnlineUserCloudSubsystem::DumpCloudFileState(const struct FUniqueNetIdRepl& UserId, const class FString& Filename)
{
	static auto Func = Class->GetFunction("OnlineUserCloudSubsystem", "DumpCloudFileState");

	Params::UOnlineUserCloudSubsystem_DumpCloudFileState_Params Parms;

	Parms.UserId = UserId;
	Parms.Filename = Filename;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.OnlineUserCloudSubsystem.ClearFiles
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineUserCloudSubsystem::ClearFiles(const struct FUniqueNetIdRepl& UserId)
{
	static auto Func = Class->GetFunction("OnlineUserCloudSubsystem", "ClearFiles");

	Params::UOnlineUserCloudSubsystem_ClearFiles_Params Parms;

	Parms.UserId = UserId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineUserCloudSubsystem.ClearFile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Filename                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineUserCloudSubsystem::ClearFile(const struct FUniqueNetIdRepl& UserId, const class FString& Filename)
{
	static auto Func = Class->GetFunction("OnlineUserCloudSubsystem", "ClearFile");

	Params::UOnlineUserCloudSubsystem_ClearFile_Params Parms;

	Parms.UserId = UserId;
	Parms.Filename = Filename;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineUserCloudSubsystem.CancelWriteUserFile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Filename                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOnlineUserCloudSubsystem::CancelWriteUserFile(const struct FUniqueNetIdRepl& UserId, const class FString& Filename)
{
	static auto Func = Class->GetFunction("OnlineUserCloudSubsystem", "CancelWriteUserFile");

	Params::UOnlineUserCloudSubsystem_CancelWriteUserFile_Params Parms;

	Parms.UserId = UserId;
	Parms.Filename = Filename;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.OnlineUserCloudSubsystemEnumerateUserFiles.EnumerateUserFiles
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineUserCloudSubsystem*   Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineUserCloudSubsystemEnumerateUserFiles*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineUserCloudSubsystemEnumerateUserFiles* UOnlineUserCloudSubsystemEnumerateUserFiles::EnumerateUserFiles(class UOnlineUserCloudSubsystem* Subsystem, const struct FUniqueNetIdRepl& UserId)
{
	static auto Func = Class->GetFunction("OnlineUserCloudSubsystemEnumerateUserFiles", "EnumerateUserFiles");

	Params::UOnlineUserCloudSubsystemEnumerateUserFiles_EnumerateUserFiles_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.UserId = UserId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineUserCloudSubsystemReadUserFile.ReadUserFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineUserCloudSubsystem*   Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Filename                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineUserCloudSubsystemReadUserFile*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineUserCloudSubsystemReadUserFile* UOnlineUserCloudSubsystemReadUserFile::ReadUserFile(class UOnlineUserCloudSubsystem* Subsystem, const struct FUniqueNetIdRepl& UserId, const class FString& Filename)
{
	static auto Func = Class->GetFunction("OnlineUserCloudSubsystemReadUserFile", "ReadUserFile");

	Params::UOnlineUserCloudSubsystemReadUserFile_ReadUserFile_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.UserId = UserId;
	Parms.Filename = Filename;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineUserCloudSubsystemWriteUserFile.WriteUserFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineUserCloudSubsystem*   Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Filename                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFileData*                   FileContents                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCompressBeforeUpload                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineUserCloudSubsystemWriteUserFile*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineUserCloudSubsystemWriteUserFile* UOnlineUserCloudSubsystemWriteUserFile::WriteUserFile(class UOnlineUserCloudSubsystem* Subsystem, const struct FUniqueNetIdRepl& UserId, const class FString& Filename, class UFileData* FileContents, bool bCompressBeforeUpload)
{
	static auto Func = Class->GetFunction("OnlineUserCloudSubsystemWriteUserFile", "WriteUserFile");

	Params::UOnlineUserCloudSubsystemWriteUserFile_WriteUserFile_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.UserId = UserId;
	Parms.Filename = Filename;
	Parms.FileContents = FileContents;
	Parms.bCompressBeforeUpload = bCompressBeforeUpload;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineUserCloudSubsystemDeleteUserFile.DeleteUserFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineUserCloudSubsystem*   Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Filename                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShouldCloudDelete                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShouldLocallyDelete                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineUserCloudSubsystemDeleteUserFile*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineUserCloudSubsystemDeleteUserFile* UOnlineUserCloudSubsystemDeleteUserFile::DeleteUserFile(class UOnlineUserCloudSubsystem* Subsystem, const struct FUniqueNetIdRepl& UserId, const class FString& Filename, bool bShouldCloudDelete, bool bShouldLocallyDelete)
{
	static auto Func = Class->GetFunction("OnlineUserCloudSubsystemDeleteUserFile", "DeleteUserFile");

	Params::UOnlineUserCloudSubsystemDeleteUserFile_DeleteUserFile_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.UserId = UserId;
	Parms.Filename = Filename;
	Parms.bShouldCloudDelete = bShouldCloudDelete;
	Parms.bShouldLocallyDelete = bShouldLocallyDelete;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineUserSubsystem.IsSubsystemAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineUserSubsystem::IsSubsystemAvailable()
{
	static auto Func = Class->GetFunction("OnlineUserSubsystem", "IsSubsystemAvailable");

	Params::UOnlineUserSubsystem_IsSubsystemAvailable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineUserSubsystem.GetUserInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineUserRef*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineUserRef* UOnlineUserSubsystem::GetUserInfo(int32 LocalUserNum, const struct FUniqueNetIdRepl& UserId)
{
	static auto Func = Class->GetFunction("OnlineUserSubsystem", "GetUserInfo");

	Params::UOnlineUserSubsystem_GetUserInfo_Params Parms;

	Parms.LocalUserNum = LocalUserNum;
	Parms.UserId = UserId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineUserSubsystem.GetExternalIdMappings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FExternalIdQueryOptionsBP   QueryOptions                                                     (Parm, NativeAccessSpecifierPublic)
// TArray<class FString>              ExternalIds                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FUniqueNetIdRepl>    OutIds                                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UOnlineUserSubsystem::GetExternalIdMappings(const struct FExternalIdQueryOptionsBP& QueryOptions, const TArray<class FString>& ExternalIds, TArray<struct FUniqueNetIdRepl>* OutIds)
{
	static auto Func = Class->GetFunction("OnlineUserSubsystem", "GetExternalIdMappings");

	Params::UOnlineUserSubsystem_GetExternalIdMappings_Params Parms;

	Parms.QueryOptions = QueryOptions;
	Parms.ExternalIds = ExternalIds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutIds != nullptr)
		*OutIds = Parms.OutIds;

}


// Function OnlineSubsystemBlueprints.OnlineUserSubsystem.GetExternalIdMapping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FExternalIdQueryOptionsBP   QueryOptions                                                     (Parm, NativeAccessSpecifierPublic)
// class FString                      ExternalId                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FUniqueNetIdRepl UOnlineUserSubsystem::GetExternalIdMapping(const struct FExternalIdQueryOptionsBP& QueryOptions, const class FString& ExternalId)
{
	static auto Func = Class->GetFunction("OnlineUserSubsystem", "GetExternalIdMapping");

	Params::UOnlineUserSubsystem_GetExternalIdMapping_Params Parms;

	Parms.QueryOptions = QueryOptions;
	Parms.ExternalId = ExternalId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineUserSubsystem.GetAllUserInfo
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UOnlineUserRef*>      OutUsers                                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineUserSubsystem::GetAllUserInfo(int32 LocalUserNum, TArray<class UOnlineUserRef*>* OutUsers)
{
	static auto Func = Class->GetFunction("OnlineUserSubsystem", "GetAllUserInfo");

	Params::UOnlineUserSubsystem_GetAllUserInfo_Params Parms;

	Parms.LocalUserNum = LocalUserNum;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutUsers != nullptr)
		*OutUsers = Parms.OutUsers;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineUserSubsystemQueryUserInfo.QueryUserInfo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineUserSubsystem*        Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FUniqueNetIdRepl>    UserIds                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UOnlineUserSubsystemQueryUserInfo*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineUserSubsystemQueryUserInfo* UOnlineUserSubsystemQueryUserInfo::QueryUserInfo(class UOnlineUserSubsystem* Subsystem, int32 LocalUserNum, const TArray<struct FUniqueNetIdRepl>& UserIds)
{
	static auto Func = Class->GetFunction("OnlineUserSubsystemQueryUserInfo", "QueryUserInfo");

	Params::UOnlineUserSubsystemQueryUserInfo_QueryUserInfo_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserNum = LocalUserNum;
	Parms.UserIds = UserIds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineUserSubsystemQueryUserIdMapping.QueryUserIdMapping
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineUserSubsystem*        Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      DisplayNameOrEmail                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineUserSubsystemQueryUserIdMapping*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineUserSubsystemQueryUserIdMapping* UOnlineUserSubsystemQueryUserIdMapping::QueryUserIdMapping(class UOnlineUserSubsystem* Subsystem, const struct FUniqueNetIdRepl& UserId, const class FString& DisplayNameOrEmail)
{
	static auto Func = Class->GetFunction("OnlineUserSubsystemQueryUserIdMapping", "QueryUserIdMapping");

	Params::UOnlineUserSubsystemQueryUserIdMapping_QueryUserIdMapping_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.UserId = UserId;
	Parms.DisplayNameOrEmail = DisplayNameOrEmail;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineUserSubsystemQueryExternalIdMappings.QueryExternalIdMappings
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineUserSubsystem*        Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FExternalIdQueryOptionsBP   QueryOptions                                                     (Parm, NativeAccessSpecifierPublic)
// TArray<class FString>              ExternalIds                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UOnlineUserSubsystemQueryExternalIdMappings*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineUserSubsystemQueryExternalIdMappings* UOnlineUserSubsystemQueryExternalIdMappings::QueryExternalIdMappings(class UOnlineUserSubsystem* Subsystem, const struct FUniqueNetIdRepl& UserId, const struct FExternalIdQueryOptionsBP& QueryOptions, const TArray<class FString>& ExternalIds)
{
	static auto Func = Class->GetFunction("OnlineUserSubsystemQueryExternalIdMappings", "QueryExternalIdMappings");

	Params::UOnlineUserSubsystemQueryExternalIdMappings_QueryExternalIdMappings_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.UserId = UserId;
	Parms.QueryOptions = QueryOptions;
	Parms.ExternalIds = ExternalIds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineVoiceAdminSubsystem.IsSubsystemAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineVoiceAdminSubsystem::IsSubsystemAvailable()
{
	static auto Func = Class->GetFunction("OnlineVoiceAdminSubsystem", "IsSubsystemAvailable");

	Params::UOnlineVoiceAdminSubsystem_IsSubsystemAvailable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineVoiceAdminSubsystemCreateChannelCredentials.CreateChannelCredentials
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineVoiceAdminSubsystem*  Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ChannelName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FUniqueNetIdRepl>    TargetUserIds                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UOnlineVoiceAdminSubsystemCreateChannelCredentials*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineVoiceAdminSubsystemCreateChannelCredentials* UOnlineVoiceAdminSubsystemCreateChannelCredentials::CreateChannelCredentials(class UOnlineVoiceAdminSubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, const class FString& ChannelName, const TArray<struct FUniqueNetIdRepl>& TargetUserIds)
{
	static auto Func = Class->GetFunction("OnlineVoiceAdminSubsystemCreateChannelCredentials", "CreateChannelCredentials");

	Params::UOnlineVoiceAdminSubsystemCreateChannelCredentials_CreateChannelCredentials_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserId = LocalUserId;
	Parms.ChannelName = ChannelName;
	Parms.TargetUserIds = TargetUserIds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineVoiceAdminSubsystemKickParticipant.KickParticipant
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineVoiceAdminSubsystem*  Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ChannelName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            TargetUserId                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineVoiceAdminSubsystemKickParticipant*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineVoiceAdminSubsystemKickParticipant* UOnlineVoiceAdminSubsystemKickParticipant::KickParticipant(class UOnlineVoiceAdminSubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, const class FString& ChannelName, const struct FUniqueNetIdRepl& TargetUserId)
{
	static auto Func = Class->GetFunction("OnlineVoiceAdminSubsystemKickParticipant", "KickParticipant");

	Params::UOnlineVoiceAdminSubsystemKickParticipant_KickParticipant_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserId = LocalUserId;
	Parms.ChannelName = ChannelName;
	Parms.TargetUserId = TargetUserId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineVoiceAdminSubsystemSetParticipantHardMute.SetParticipantHardMute
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineVoiceAdminSubsystem*  Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ChannelName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            TargetUserId                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bMuted                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineVoiceAdminSubsystemSetParticipantHardMute*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineVoiceAdminSubsystemSetParticipantHardMute* UOnlineVoiceAdminSubsystemSetParticipantHardMute::SetParticipantHardMute(class UOnlineVoiceAdminSubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, const class FString& ChannelName, const struct FUniqueNetIdRepl& TargetUserId, bool bMuted)
{
	static auto Func = Class->GetFunction("OnlineVoiceAdminSubsystemSetParticipantHardMute", "SetParticipantHardMute");

	Params::UOnlineVoiceAdminSubsystemSetParticipantHardMute_SetParticipantHardMute_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.LocalUserId = LocalUserId;
	Parms.ChannelName = ChannelName;
	Parms.TargetUserId = TargetUserId;
	Parms.bMuted = bMuted;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineVoiceChatSubsystem.Uninitialize_
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineVoiceChatSubsystem::Uninitialize_()
{
	static auto Func = Class->GetFunction("OnlineVoiceChatSubsystem", "Uninitialize_");

	Params::UOnlineVoiceChatSubsystem_Uninitialize__Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineVoiceChatSubsystem.IsSubsystemAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineVoiceChatSubsystem::IsSubsystemAvailable()
{
	static auto Func = Class->GetFunction("OnlineVoiceChatSubsystem", "IsSubsystemAvailable");

	Params::UOnlineVoiceChatSubsystem_IsSubsystemAvailable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineVoiceChatSubsystem.IsInitialized
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineVoiceChatSubsystem::IsInitialized()
{
	static auto Func = Class->GetFunction("OnlineVoiceChatSubsystem", "IsInitialized");

	Params::UOnlineVoiceChatSubsystem_IsInitialized_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineVoiceChatSubsystem.IsConnecting
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineVoiceChatSubsystem::IsConnecting()
{
	static auto Func = Class->GetFunction("OnlineVoiceChatSubsystem", "IsConnecting");

	Params::UOnlineVoiceChatSubsystem_IsConnecting_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineVoiceChatSubsystem.IsConnected
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineVoiceChatSubsystem::IsConnected()
{
	static auto Func = Class->GetFunction("OnlineVoiceChatSubsystem", "IsConnected");

	Params::UOnlineVoiceChatSubsystem_IsConnected_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineVoiceChatSubsystem.Initialize_
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineVoiceChatSubsystem::Initialize_()
{
	static auto Func = Class->GetFunction("OnlineVoiceChatSubsystem", "Initialize_");

	Params::UOnlineVoiceChatSubsystem_Initialize__Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineVoiceChatSubsystem.CreateUser
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVoiceChatUser*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVoiceChatUser* UOnlineVoiceChatSubsystem::CreateUser()
{
	static auto Func = Class->GetFunction("OnlineVoiceChatSubsystem", "CreateUser");

	Params::UOnlineVoiceChatSubsystem_CreateUser_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineVoiceChatSubsystemConnect.Connect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineVoiceChatSubsystem*   Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineVoiceChatSubsystemConnect*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineVoiceChatSubsystemConnect* UOnlineVoiceChatSubsystemConnect::Connect(class UOnlineVoiceChatSubsystem* Subsystem)
{
	static auto Func = Class->GetFunction("OnlineVoiceChatSubsystemConnect", "Connect");

	Params::UOnlineVoiceChatSubsystemConnect_Connect_Params Parms;

	Parms.Subsystem = Subsystem;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineVoiceChatSubsystemDisconnect.Disconnect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOnlineVoiceChatSubsystem*   Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineVoiceChatSubsystemDisconnect*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineVoiceChatSubsystemDisconnect* UOnlineVoiceChatSubsystemDisconnect::Disconnect(class UOnlineVoiceChatSubsystem* Subsystem)
{
	static auto Func = Class->GetFunction("OnlineVoiceChatSubsystemDisconnect", "Disconnect");

	Params::UOnlineVoiceChatSubsystemDisconnect_Disconnect_Params Parms;

	Parms.Subsystem = Subsystem;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineVoiceSubsystem.UnregisterRemoteTalker
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            UniqueId                                                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineVoiceSubsystem::UnregisterRemoteTalker(const struct FUniqueNetIdRepl& UniqueId)
{
	static auto Func = Class->GetFunction("OnlineVoiceSubsystem", "UnregisterRemoteTalker");

	Params::UOnlineVoiceSubsystem_UnregisterRemoteTalker_Params Parms;

	Parms.UniqueId = UniqueId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineVoiceSubsystem.UnregisterLocalTalkers
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UOnlineVoiceSubsystem::UnregisterLocalTalkers()
{
	static auto Func = Class->GetFunction("OnlineVoiceSubsystem", "UnregisterLocalTalkers");

	Params::UOnlineVoiceSubsystem_UnregisterLocalTalkers_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.OnlineVoiceSubsystem.UnregisterLocalTalker
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineVoiceSubsystem::UnregisterLocalTalker(int64 LocalUserNum)
{
	static auto Func = Class->GetFunction("OnlineVoiceSubsystem", "UnregisterLocalTalker");

	Params::UOnlineVoiceSubsystem_UnregisterLocalTalker_Params Parms;

	Parms.LocalUserNum = LocalUserNum;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineVoiceSubsystem.UnmuteRemoteTalker
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            PlayerId                                                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsSystemWide                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineVoiceSubsystem::UnmuteRemoteTalker(int32 LocalUserNum, const struct FUniqueNetIdRepl& PlayerId, bool bIsSystemWide)
{
	static auto Func = Class->GetFunction("OnlineVoiceSubsystem", "UnmuteRemoteTalker");

	Params::UOnlineVoiceSubsystem_UnmuteRemoteTalker_Params Parms;

	Parms.LocalUserNum = LocalUserNum;
	Parms.PlayerId = PlayerId;
	Parms.bIsSystemWide = bIsSystemWide;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineVoiceSubsystem.StopNetworkedVoice
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOnlineVoiceSubsystem::StopNetworkedVoice(int32 LocalUserNum)
{
	static auto Func = Class->GetFunction("OnlineVoiceSubsystem", "StopNetworkedVoice");

	Params::UOnlineVoiceSubsystem_StopNetworkedVoice_Params Parms;

	Parms.LocalUserNum = LocalUserNum;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.OnlineVoiceSubsystem.StartNetworkedVoice
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOnlineVoiceSubsystem::StartNetworkedVoice(int32 LocalUserNum)
{
	static auto Func = Class->GetFunction("OnlineVoiceSubsystem", "StartNetworkedVoice");

	Params::UOnlineVoiceSubsystem_StartNetworkedVoice_Params Parms;

	Parms.LocalUserNum = LocalUserNum;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.OnlineVoiceSubsystem.RemoveAllRemoteTalkers
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UOnlineVoiceSubsystem::RemoveAllRemoteTalkers()
{
	static auto Func = Class->GetFunction("OnlineVoiceSubsystem", "RemoveAllRemoteTalkers");

	Params::UOnlineVoiceSubsystem_RemoveAllRemoteTalkers_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.OnlineVoiceSubsystem.RegisterRemoteTalker
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            UniqueId                                                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineVoiceSubsystem::RegisterRemoteTalker(const struct FUniqueNetIdRepl& UniqueId)
{
	static auto Func = Class->GetFunction("OnlineVoiceSubsystem", "RegisterRemoteTalker");

	Params::UOnlineVoiceSubsystem_RegisterRemoteTalker_Params Parms;

	Parms.UniqueId = UniqueId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineVoiceSubsystem.RegisterLocalTalkers
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UOnlineVoiceSubsystem::RegisterLocalTalkers()
{
	static auto Func = Class->GetFunction("OnlineVoiceSubsystem", "RegisterLocalTalkers");

	Params::UOnlineVoiceSubsystem_RegisterLocalTalkers_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.OnlineVoiceSubsystem.RegisterLocalTalker
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineVoiceSubsystem::RegisterLocalTalker(int64 LocalUserNum)
{
	static auto Func = Class->GetFunction("OnlineVoiceSubsystem", "RegisterLocalTalker");

	Params::UOnlineVoiceSubsystem_RegisterLocalTalker_Params Parms;

	Parms.LocalUserNum = LocalUserNum;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineVoiceSubsystem.ProcessMuteChangeNotification
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UOnlineVoiceSubsystem::ProcessMuteChangeNotification()
{
	static auto Func = Class->GetFunction("OnlineVoiceSubsystem", "ProcessMuteChangeNotification");

	Params::UOnlineVoiceSubsystem_ProcessMuteChangeNotification_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.OnlineVoiceSubsystem.PatchRemoteTalkerOutputToEndpoint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InDeviceName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bMuteInGameOutput                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineVoiceSubsystem::PatchRemoteTalkerOutputToEndpoint(const class FString& InDeviceName, bool bMuteInGameOutput)
{
	static auto Func = Class->GetFunction("OnlineVoiceSubsystem", "PatchRemoteTalkerOutputToEndpoint");

	Params::UOnlineVoiceSubsystem_PatchRemoteTalkerOutputToEndpoint_Params Parms;

	Parms.InDeviceName = InDeviceName;
	Parms.bMuteInGameOutput = bMuteInGameOutput;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineVoiceSubsystem.PatchLocalTalkerOutputToEndpoint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InDeviceName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineVoiceSubsystem::PatchLocalTalkerOutputToEndpoint(const class FString& InDeviceName)
{
	static auto Func = Class->GetFunction("OnlineVoiceSubsystem", "PatchLocalTalkerOutputToEndpoint");

	Params::UOnlineVoiceSubsystem_PatchLocalTalkerOutputToEndpoint_Params Parms;

	Parms.InDeviceName = InDeviceName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineVoiceSubsystem.MuteRemoteTalker
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            PlayerId                                                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsSystemWide                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineVoiceSubsystem::MuteRemoteTalker(int32 LocalUserNum, const struct FUniqueNetIdRepl& PlayerId, bool bIsSystemWide)
{
	static auto Func = Class->GetFunction("OnlineVoiceSubsystem", "MuteRemoteTalker");

	Params::UOnlineVoiceSubsystem_MuteRemoteTalker_Params Parms;

	Parms.LocalUserNum = LocalUserNum;
	Parms.PlayerId = PlayerId;
	Parms.bIsSystemWide = bIsSystemWide;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineVoiceSubsystem.IsSubsystemAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineVoiceSubsystem::IsSubsystemAvailable()
{
	static auto Func = Class->GetFunction("OnlineVoiceSubsystem", "IsSubsystemAvailable");

	Params::UOnlineVoiceSubsystem_IsSubsystemAvailable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineVoiceSubsystem.IsRemotePlayerTalking
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            UniqueId                                                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineVoiceSubsystem::IsRemotePlayerTalking(const struct FUniqueNetIdRepl& UniqueId)
{
	static auto Func = Class->GetFunction("OnlineVoiceSubsystem", "IsRemotePlayerTalking");

	Params::UOnlineVoiceSubsystem_IsRemotePlayerTalking_Params Parms;

	Parms.UniqueId = UniqueId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineVoiceSubsystem.IsMuted
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int64                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            UniqueId                                                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineVoiceSubsystem::IsMuted(int64 LocalUserNum, const struct FUniqueNetIdRepl& UniqueId)
{
	static auto Func = Class->GetFunction("OnlineVoiceSubsystem", "IsMuted");

	Params::UOnlineVoiceSubsystem_IsMuted_Params Parms;

	Parms.LocalUserNum = LocalUserNum;
	Parms.UniqueId = UniqueId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineVoiceSubsystem.IsLocalPlayerTalking
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineVoiceSubsystem::IsLocalPlayerTalking(int64 LocalUserNum)
{
	static auto Func = Class->GetFunction("OnlineVoiceSubsystem", "IsLocalPlayerTalking");

	Params::UOnlineVoiceSubsystem_IsLocalPlayerTalking_Params Parms;

	Parms.LocalUserNum = LocalUserNum;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineVoiceSubsystem.IsHeadsetPresent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineVoiceSubsystem::IsHeadsetPresent(int64 LocalUserNum)
{
	static auto Func = Class->GetFunction("OnlineVoiceSubsystem", "IsHeadsetPresent");

	Params::UOnlineVoiceSubsystem_IsHeadsetPresent_Params Parms;

	Parms.LocalUserNum = LocalUserNum;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineVoiceSubsystem.GetVoiceDebugState
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UOnlineVoiceSubsystem::GetVoiceDebugState()
{
	static auto Func = Class->GetFunction("OnlineVoiceSubsystem", "GetVoiceDebugState");

	Params::UOnlineVoiceSubsystem_GetVoiceDebugState_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineVoiceSubsystem.GetNumLocalTalkers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UOnlineVoiceSubsystem::GetNumLocalTalkers()
{
	static auto Func = Class->GetFunction("OnlineVoiceSubsystem", "GetNumLocalTalkers");

	Params::UOnlineVoiceSubsystem_GetNumLocalTalkers_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineVoiceSubsystem.GetAmplitudeOfRemoteTalker
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            PlayerId                                                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UOnlineVoiceSubsystem::GetAmplitudeOfRemoteTalker(const struct FUniqueNetIdRepl& PlayerId)
{
	static auto Func = Class->GetFunction("OnlineVoiceSubsystem", "GetAmplitudeOfRemoteTalker");

	Params::UOnlineVoiceSubsystem_GetAmplitudeOfRemoteTalker_Params Parms;

	Parms.PlayerId = PlayerId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineVoiceSubsystem.DisconnectAllEndpoints
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UOnlineVoiceSubsystem::DisconnectAllEndpoints()
{
	static auto Func = Class->GetFunction("OnlineVoiceSubsystem", "DisconnectAllEndpoints");

	Params::UOnlineVoiceSubsystem_DisconnectAllEndpoints_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.OnlineVoiceSubsystem.ClearVoicePackets
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UOnlineVoiceSubsystem::ClearVoicePackets()
{
	static auto Func = Class->GetFunction("OnlineVoiceSubsystem", "ClearVoicePackets");

	Params::UOnlineVoiceSubsystem_ClearVoicePackets_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.OnlineAchievementsWrite.SetAchievementProgress
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        AchievementId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              AchievementProgress                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOnlineAchievementsWrite::SetAchievementProgress(class FName AchievementId, float AchievementProgress)
{
	static auto Func = Class->GetFunction("OnlineAchievementsWrite", "SetAchievementProgress");

	Params::UOnlineAchievementsWrite_SetAchievementProgress_Params Parms;

	Parms.AchievementId = AchievementId;
	Parms.AchievementProgress = AchievementProgress;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.OnlineEntitlement.IsConsumable
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineEntitlement::IsConsumable()
{
	static auto Func = Class->GetFunction("OnlineEntitlement", "IsConsumable");

	Params::UOnlineEntitlement_IsConsumable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineEntitlement.GetStatus
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UOnlineEntitlement::GetStatus()
{
	static auto Func = Class->GetFunction("OnlineEntitlement", "GetStatus");

	Params::UOnlineEntitlement_GetStatus_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineEntitlement.GetStartDate
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UOnlineEntitlement::GetStartDate()
{
	static auto Func = Class->GetFunction("OnlineEntitlement", "GetStartDate");

	Params::UOnlineEntitlement_GetStartDate_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineEntitlement.GetRemainingCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UOnlineEntitlement::GetRemainingCount()
{
	static auto Func = Class->GetFunction("OnlineEntitlement", "GetRemainingCount");

	Params::UOnlineEntitlement_GetRemainingCount_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineEntitlement.GetNamespace
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UOnlineEntitlement::GetNamespace()
{
	static auto Func = Class->GetFunction("OnlineEntitlement", "GetNamespace");

	Params::UOnlineEntitlement_GetNamespace_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineEntitlement.GetName
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UOnlineEntitlement::GetName()
{
	static auto Func = Class->GetFunction("OnlineEntitlement", "GetName");

	Params::UOnlineEntitlement_GetName_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineEntitlement.GetItemId
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UOnlineEntitlement::GetItemId()
{
	static auto Func = Class->GetFunction("OnlineEntitlement", "GetItemId");

	Params::UOnlineEntitlement_GetItemId_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineEntitlement.GetId
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UOnlineEntitlement::GetId()
{
	static auto Func = Class->GetFunction("OnlineEntitlement", "GetId");

	Params::UOnlineEntitlement_GetId_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineEntitlement.GetEndDate
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UOnlineEntitlement::GetEndDate()
{
	static auto Func = Class->GetFunction("OnlineEntitlement", "GetEndDate");

	Params::UOnlineEntitlement_GetEndDate_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineEntitlement.GetConsumedCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UOnlineEntitlement::GetConsumedCount()
{
	static auto Func = Class->GetFunction("OnlineEntitlement", "GetConsumedCount");

	Params::UOnlineEntitlement_GetConsumedCount_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.ExternalUIFlowHandler.OnLoginFlowUIRequired
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class FString                      RequestedURL                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineExternalUISubsystem*  ExternalUIContext                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RequestId                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UExternalUIFlowHandler::OnLoginFlowUIRequired(const class FString& RequestedURL, class UOnlineExternalUISubsystem* ExternalUIContext, int32 RequestId)
{
	static auto Func = Class->GetFunction("ExternalUIFlowHandler", "OnLoginFlowUIRequired");

	Params::UExternalUIFlowHandler_OnLoginFlowUIRequired_Params Parms;

	Parms.RequestedURL = RequestedURL;
	Parms.ExternalUIContext = ExternalUIContext;
	Parms.RequestId = RequestId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.ExternalUIFlowHandler.OnCreateAccountFlowUIRequired
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class FString                      RequestedURL                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineExternalUISubsystem*  ExternalUIContext                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RequestId                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UExternalUIFlowHandler::OnCreateAccountFlowUIRequired(const class FString& RequestedURL, class UOnlineExternalUISubsystem* ExternalUIContext, int32 RequestId)
{
	static auto Func = Class->GetFunction("ExternalUIFlowHandler", "OnCreateAccountFlowUIRequired");

	Params::UExternalUIFlowHandler_OnCreateAccountFlowUIRequired_Params Parms;

	Parms.RequestedURL = RequestedURL;
	Parms.ExternalUIContext = ExternalUIContext;
	Parms.RequestId = RequestId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineUserRef.SetUserLocalAttribute
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOnlineUserRef::SetUserLocalAttribute(const class FString& Key, const class FString& Value, bool* Success)
{
	static auto Func = Class->GetFunction("OnlineUserRef", "SetUserLocalAttribute");

	Params::UOnlineUserRef_SetUserLocalAttribute_Params Parms;

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function OnlineSubsystemBlueprints.OnlineUserRef.GetUserId
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FUniqueNetIdRepl            ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FUniqueNetIdRepl UOnlineUserRef::GetUserId()
{
	static auto Func = Class->GetFunction("OnlineUserRef", "GetUserId");

	Params::UOnlineUserRef_GetUserId_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineUserRef.GetUserAttribute
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UOnlineUserRef::GetUserAttribute(const class FString& Key, bool* Found)
{
	static auto Func = Class->GetFunction("OnlineUserRef", "GetUserAttribute");

	Params::UOnlineUserRef_GetUserAttribute_Params Parms;

	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Found != nullptr)
		*Found = Parms.Found;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineUserRef.GetRealName
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UOnlineUserRef::GetRealName()
{
	static auto Func = Class->GetFunction("OnlineUserRef", "GetRealName");

	Params::UOnlineUserRef_GetRealName_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineUserRef.GetDisplayName
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UOnlineUserRef::GetDisplayName()
{
	static auto Func = Class->GetFunction("OnlineUserRef", "GetDisplayName");

	Params::UOnlineUserRef_GetDisplayName_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineFriendRef.GetPresence
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FOnlineUserPresenceData     ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FOnlineUserPresenceData UOnlineFriendRef::GetPresence()
{
	static auto Func = Class->GetFunction("OnlineFriendRef", "GetPresence");

	Params::UOnlineFriendRef_GetPresence_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineFriendRef.GetInviteStatus
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EInviteStatus_          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EInviteStatus_ UOnlineFriendRef::GetInviteStatus()
{
	static auto Func = Class->GetFunction("OnlineFriendRef", "GetInviteStatus");

	Params::UOnlineFriendRef_GetInviteStatus_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineLeaderboardRead.SetSortedColumn
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class FName                        SortedColumn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOnlineLeaderboardRead::SetSortedColumn(class FName SortedColumn)
{
	static auto Func = Class->GetFunction("OnlineLeaderboardRead", "SetSortedColumn");

	Params::UOnlineLeaderboardRead_SetSortedColumn_Params Parms;

	Parms.SortedColumn = SortedColumn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.OnlineLeaderboardRead.SetLeaderboardName
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class FName                        LeaderboardName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOnlineLeaderboardRead::SetLeaderboardName(class FName LeaderboardName)
{
	static auto Func = Class->GetFunction("OnlineLeaderboardRead", "SetLeaderboardName");

	Params::UOnlineLeaderboardRead_SetLeaderboardName_Params Parms;

	Parms.LeaderboardName = LeaderboardName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.OnlineLeaderboardRead.SetColumns
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// TArray<struct FColumnMetaDataBP>   InColumns                                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UOnlineLeaderboardRead::SetColumns(const TArray<struct FColumnMetaDataBP>& InColumns)
{
	static auto Func = Class->GetFunction("OnlineLeaderboardRead", "SetColumns");

	Params::UOnlineLeaderboardRead_SetColumns_Params Parms;

	Parms.InColumns = InColumns;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.OnlineLeaderboardRead.GetSortedColumn
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UOnlineLeaderboardRead::GetSortedColumn()
{
	static auto Func = Class->GetFunction("OnlineLeaderboardRead", "GetSortedColumn");

	Params::UOnlineLeaderboardRead_GetSortedColumn_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineLeaderboardRead.GetRows
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FOnlineStatsRowBP>   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FOnlineStatsRowBP> UOnlineLeaderboardRead::GetRows()
{
	static auto Func = Class->GetFunction("OnlineLeaderboardRead", "GetRows");

	Params::UOnlineLeaderboardRead_GetRows_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineLeaderboardRead.GetReadState
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EOnlineAsyncTaskState_  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EOnlineAsyncTaskState_ UOnlineLeaderboardRead::GetReadState()
{
	static auto Func = Class->GetFunction("OnlineLeaderboardRead", "GetReadState");

	Params::UOnlineLeaderboardRead_GetReadState_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineLeaderboardRead.GetLeaderboardName
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UOnlineLeaderboardRead::GetLeaderboardName()
{
	static auto Func = Class->GetFunction("OnlineLeaderboardRead", "GetLeaderboardName");

	Params::UOnlineLeaderboardRead_GetLeaderboardName_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineLeaderboardRead.GetColumns
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FColumnMetaDataBP>   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FColumnMetaDataBP> UOnlineLeaderboardRead::GetColumns()
{
	static auto Func = Class->GetFunction("OnlineLeaderboardRead", "GetColumns");

	Params::UOnlineLeaderboardRead_GetColumns_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineLeaderboardRead.FindPlayerRecord
// (Final, Native, Private, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FUniqueNetIdRepl            UserId                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               OutFound                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FOnlineStatsRowBP           ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FOnlineStatsRowBP UOnlineLeaderboardRead::FindPlayerRecord(const struct FUniqueNetIdRepl& UserId, bool* OutFound)
{
	static auto Func = Class->GetFunction("OnlineLeaderboardRead", "FindPlayerRecord");

	Params::UOnlineLeaderboardRead_FindPlayerRecord_Params Parms;

	Parms.UserId = UserId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutFound != nullptr)
		*OutFound = Parms.OutFound;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.LobbyId.ToDebugString
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULobbyId::ToDebugString()
{
	static auto Func = Class->GetFunction("LobbyId", "ToDebugString");

	Params::ULobbyId_ToDebugString_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.Lobby.GetOwnerId
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUniqueNetIdRepl            ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FUniqueNetIdRepl ULobby::GetOwnerId()
{
	static auto Func = Class->GetFunction("Lobby", "GetOwnerId");

	Params::ULobby_GetOwnerId_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.Lobby.GetId
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULobbyId*                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULobbyId* ULobby::GetId()
{
	static auto Func = Class->GetFunction("Lobby", "GetId");

	Params::ULobby_GetId_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineLobbyTransaction.SetPublic
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Public                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOnlineLobbyTransaction::SetPublic(bool Public)
{
	static auto Func = Class->GetFunction("OnlineLobbyTransaction", "SetPublic");

	Params::UOnlineLobbyTransaction_SetPublic_Params Parms;

	Parms.Public = Public;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.OnlineLobbyTransaction.SetMetadataByMap
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TMap<class FString, struct FVariantDataBP>MetaData                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UOnlineLobbyTransaction::SetMetadataByMap(TMap<class FString, struct FVariantDataBP>& MetaData)
{
	static auto Func = Class->GetFunction("OnlineLobbyTransaction", "SetMetadataByMap");

	Params::UOnlineLobbyTransaction_SetMetadataByMap_Params Parms;

	Parms.MetaData = MetaData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.OnlineLobbyTransaction.SetMetadata
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVariantDataBP              Value                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UOnlineLobbyTransaction::SetMetadata(const class FString& Key, struct FVariantDataBP& Value)
{
	static auto Func = Class->GetFunction("OnlineLobbyTransaction", "SetMetadata");

	Params::UOnlineLobbyTransaction_SetMetadata_Params Parms;

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.OnlineLobbyTransaction.SetLocked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Locked                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOnlineLobbyTransaction::SetLocked(bool Locked)
{
	static auto Func = Class->GetFunction("OnlineLobbyTransaction", "SetLocked");

	Params::UOnlineLobbyTransaction_SetLocked_Params Parms;

	Parms.Locked = Locked;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.OnlineLobbyTransaction.SetCapacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64                              Capacity                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOnlineLobbyTransaction::SetCapacity(int64 Capacity)
{
	static auto Func = Class->GetFunction("OnlineLobbyTransaction", "SetCapacity");

	Params::UOnlineLobbyTransaction_SetCapacity_Params Parms;

	Parms.Capacity = Capacity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.OnlineLobbyTransaction.DeleteMetadataByArray
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              MetaDataKeys                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UOnlineLobbyTransaction::DeleteMetadataByArray(TArray<class FString>& MetaDataKeys)
{
	static auto Func = Class->GetFunction("OnlineLobbyTransaction", "DeleteMetadataByArray");

	Params::UOnlineLobbyTransaction_DeleteMetadataByArray_Params Parms;

	Parms.MetaDataKeys = MetaDataKeys;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.OnlineLobbyTransaction.DeleteMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOnlineLobbyTransaction::DeleteMetadata(const class FString& Key)
{
	static auto Func = Class->GetFunction("OnlineLobbyTransaction", "DeleteMetadata");

	Params::UOnlineLobbyTransaction_DeleteMetadata_Params Parms;

	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.OnlineLobbyMemberTransaction.SetMetadataByMap
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TMap<class FString, struct FVariantDataBP>MetaData                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UOnlineLobbyMemberTransaction::SetMetadataByMap(TMap<class FString, struct FVariantDataBP>& MetaData)
{
	static auto Func = Class->GetFunction("OnlineLobbyMemberTransaction", "SetMetadataByMap");

	Params::UOnlineLobbyMemberTransaction_SetMetadataByMap_Params Parms;

	Parms.MetaData = MetaData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.OnlineLobbyMemberTransaction.SetMetadata
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVariantDataBP              Value                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UOnlineLobbyMemberTransaction::SetMetadata(const class FString& Key, struct FVariantDataBP& Value)
{
	static auto Func = Class->GetFunction("OnlineLobbyMemberTransaction", "SetMetadata");

	Params::UOnlineLobbyMemberTransaction_SetMetadata_Params Parms;

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.OnlineLobbyMemberTransaction.DeleteMetadataByArray
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              MetaDataKeys                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UOnlineLobbyMemberTransaction::DeleteMetadataByArray(TArray<class FString>& MetaDataKeys)
{
	static auto Func = Class->GetFunction("OnlineLobbyMemberTransaction", "DeleteMetadataByArray");

	Params::UOnlineLobbyMemberTransaction_DeleteMetadataByArray_Params Parms;

	Parms.MetaDataKeys = MetaDataKeys;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.OnlineLobbyMemberTransaction.DeleteMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOnlineLobbyMemberTransaction::DeleteMetadata(const class FString& Key)
{
	static auto Func = Class->GetFunction("OnlineLobbyMemberTransaction", "DeleteMetadata");

	Params::UOnlineLobbyMemberTransaction_DeleteMetadata_Params Parms;

	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.OnlineRecentPlayerRef.GetLastSeen
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDateTime                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FDateTime UOnlineRecentPlayerRef::GetLastSeen()
{
	static auto Func = Class->GetFunction("OnlineRecentPlayerRef", "GetLastSeen");

	Params::UOnlineRecentPlayerRef_GetLastSeen_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.UserOnlineAccountRef.SetUserAttribute
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUserOnlineAccountRef::SetUserAttribute(const class FString& Key, const class FString& Value)
{
	static auto Func = Class->GetFunction("UserOnlineAccountRef", "SetUserAttribute");

	Params::UUserOnlineAccountRef_SetUserAttribute_Params Parms;

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.UserOnlineAccountRef.GetAuthAttribute
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UUserOnlineAccountRef::GetAuthAttribute(const class FString& Key, bool* Found)
{
	static auto Func = Class->GetFunction("UserOnlineAccountRef", "GetAuthAttribute");

	Params::UUserOnlineAccountRef_GetAuthAttribute_Params Parms;

	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Found != nullptr)
		*Found = Parms.Found;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.UserOnlineAccountRef.GetAccessToken
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UUserOnlineAccountRef::GetAccessToken()
{
	static auto Func = Class->GetFunction("UserOnlineAccountRef", "GetAccessToken");

	Params::UUserOnlineAccountRef_GetAccessToken_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.Party.GetPartyTypeId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int64 UParty::GetPartyTypeId()
{
	static auto Func = Class->GetFunction("Party", "GetPartyTypeId");

	Params::UParty_GetPartyTypeId_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.Party.GetPartyId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPartyId*                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPartyId* UParty::GetPartyId()
{
	static auto Func = Class->GetFunction("Party", "GetPartyId");

	Params::UParty_GetPartyId_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.Party.GetLeaderId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FUniqueNetIdRepl UParty::GetLeaderId()
{
	static auto Func = Class->GetFunction("Party", "GetLeaderId");

	Params::UParty_GetLeaderId_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.BlueprintPartyMember.GetUserId
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUniqueNetIdRepl            ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FUniqueNetIdRepl UBlueprintPartyMember::GetUserId()
{
	static auto Func = Class->GetFunction("BlueprintPartyMember", "GetUserId");

	Params::UBlueprintPartyMember_GetUserId_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.BlueprintPartyMember.GetUserAttribute
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      AttrName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutAttrValue                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBlueprintPartyMember::GetUserAttribute(const class FString& AttrName, class FString* OutAttrValue)
{
	static auto Func = Class->GetFunction("BlueprintPartyMember", "GetUserAttribute");

	Params::UBlueprintPartyMember_GetUserAttribute_Params Parms;

	Parms.AttrName = AttrName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutAttrValue != nullptr)
		*OutAttrValue = Parms.OutAttrValue;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.BlueprintPartyMember.GetRealName
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UBlueprintPartyMember::GetRealName()
{
	static auto Func = Class->GetFunction("BlueprintPartyMember", "GetRealName");

	Params::UBlueprintPartyMember_GetRealName_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.BlueprintPartyMember.GetDisplayName
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      Platform                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UBlueprintPartyMember::GetDisplayName(const class FString& Platform)
{
	static auto Func = Class->GetFunction("BlueprintPartyMember", "GetDisplayName");

	Params::UBlueprintPartyMember_GetDisplayName_Params Parms;

	Parms.Platform = Platform;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.ReadablePartyData.GetAttribute
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      AttrName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               OutFound                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVariantDataBP              OutAttrValue                                                     (Parm, OutParm, NativeAccessSpecifierPublic)

void UReadablePartyData::GetAttribute(const class FString& AttrName, bool* OutFound, struct FVariantDataBP* OutAttrValue)
{
	static auto Func = Class->GetFunction("ReadablePartyData", "GetAttribute");

	Params::UReadablePartyData_GetAttribute_Params Parms;

	Parms.AttrName = AttrName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutFound != nullptr)
		*OutFound = Parms.OutFound;

	if (OutAttrValue != nullptr)
		*OutAttrValue = Parms.OutAttrValue;

}


// Function OnlineSubsystemBlueprints.MutablePartyData.SetAttribute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AttrName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVariantDataBP              AttrValue                                                        (Parm, NativeAccessSpecifierPublic)

void UMutablePartyData::SetAttribute(const class FString& AttrName, const struct FVariantDataBP& AttrValue)
{
	static auto Func = Class->GetFunction("MutablePartyData", "SetAttribute");

	Params::UMutablePartyData_SetAttribute_Params Parms;

	Parms.AttrName = AttrName;
	Parms.AttrValue = AttrValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.MutablePartyData.RemoveAttribute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AttrName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMutablePartyData::RemoveAttribute(const class FString& AttrName)
{
	static auto Func = Class->GetFunction("MutablePartyData", "RemoveAttribute");

	Params::UMutablePartyData_RemoveAttribute_Params Parms;

	Parms.AttrName = AttrName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.PartyId.ToDebugString
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UPartyId::ToDebugString()
{
	static auto Func = Class->GetFunction("PartyId", "ToDebugString");

	Params::UPartyId_ToDebugString_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlinePartyJoinInfo.ToDebugString
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UOnlinePartyJoinInfo::ToDebugString()
{
	static auto Func = Class->GetFunction("OnlinePartyJoinInfo", "ToDebugString");

	Params::UOnlinePartyJoinInfo_ToDebugString_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlinePartyJoinInfo.GetSourceUserId
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUniqueNetIdRepl            ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FUniqueNetIdRepl UOnlinePartyJoinInfo::GetSourceUserId()
{
	static auto Func = Class->GetFunction("OnlinePartyJoinInfo", "GetSourceUserId");

	Params::UOnlinePartyJoinInfo_GetSourceUserId_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlinePartyJoinInfo.GetSourceDisplayName
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UOnlinePartyJoinInfo::GetSourceDisplayName()
{
	static auto Func = Class->GetFunction("OnlinePartyJoinInfo", "GetSourceDisplayName");

	Params::UOnlinePartyJoinInfo_GetSourceDisplayName_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlinePartyJoinInfo.GetPartyId
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPartyId*                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPartyId* UOnlinePartyJoinInfo::GetPartyId()
{
	static auto Func = Class->GetFunction("OnlinePartyJoinInfo", "GetPartyId");

	Params::UOnlinePartyJoinInfo_GetPartyId_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.PurchaseReceipt.GetTransactionId
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UPurchaseReceipt::GetTransactionId()
{
	static auto Func = Class->GetFunction("PurchaseReceipt", "GetTransactionId");

	Params::UPurchaseReceipt_GetTransactionId_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.PurchaseReceipt.GetReceiptOffers
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FReceiptOfferEntryBP>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FReceiptOfferEntryBP> UPurchaseReceipt::GetReceiptOffers()
{
	static auto Func = Class->GetFunction("PurchaseReceipt", "GetReceiptOffers");

	Params::UPurchaseReceipt_GetReceiptOffers_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.PurchaseReceipt.GetPurchaseTransactionState
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EPurchaseTransactionState_ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EPurchaseTransactionState_ UPurchaseReceipt::GetPurchaseTransactionState()
{
	static auto Func = Class->GetFunction("PurchaseReceipt", "GetPurchaseTransactionState");

	Params::UPurchaseReceipt_GetPurchaseTransactionState_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSessionSettings.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FOnlineSessionSettingsBP    ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FOnlineSessionSettingsBP UOnlineSessionSettings::GetValue()
{
	static auto Func = Class->GetFunction("OnlineSessionSettings", "GetValue");

	Params::UOnlineSessionSettings_GetValue_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.NamedOnlineSession.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FNamedOnlineSessionBP       ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FNamedOnlineSessionBP UNamedOnlineSession::GetValue()
{
	static auto Func = Class->GetFunction("NamedOnlineSession", "GetValue");

	Params::UNamedOnlineSession_GetValue_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSessionSearch.GetSearchState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EOnlineAsyncTaskState_  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EOnlineAsyncTaskState_ UOnlineSessionSearch::GetSearchState()
{
	static auto Func = Class->GetFunction("OnlineSessionSearch", "GetSearchState");

	Params::UOnlineSessionSearch_GetSearchState_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineSessionSearch.GetSearchResults
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FOnlineSessionSearchResultBP>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FOnlineSessionSearchResultBP> UOnlineSessionSearch::GetSearchResults()
{
	static auto Func = Class->GetFunction("OnlineSessionSearch", "GetSearchResults");

	Params::UOnlineSessionSearch_GetSearchResults_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineStoreOffer.IsPurchasable
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineStoreOffer::IsPurchasable()
{
	static auto Func = Class->GetFunction("OnlineStoreOffer", "IsPurchasable");

	Params::UOnlineStoreOffer_IsPurchasable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineStoreOffer.GetTitle
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UOnlineStoreOffer::GetTitle()
{
	static auto Func = Class->GetFunction("OnlineStoreOffer", "GetTitle");

	Params::UOnlineStoreOffer_GetTitle_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineStoreOffer.GetReleaseDate
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDateTime                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FDateTime UOnlineStoreOffer::GetReleaseDate()
{
	static auto Func = Class->GetFunction("OnlineStoreOffer", "GetReleaseDate");

	Params::UOnlineStoreOffer_GetReleaseDate_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineStoreOffer.GetRegularPrice
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int64                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int64 UOnlineStoreOffer::GetRegularPrice()
{
	static auto Func = Class->GetFunction("OnlineStoreOffer", "GetRegularPrice");

	Params::UOnlineStoreOffer_GetRegularPrice_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineStoreOffer.GetOfferId
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UOnlineStoreOffer::GetOfferId()
{
	static auto Func = Class->GetFunction("OnlineStoreOffer", "GetOfferId");

	Params::UOnlineStoreOffer_GetOfferId_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineStoreOffer.GetNumericPrice
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int64                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int64 UOnlineStoreOffer::GetNumericPrice()
{
	static auto Func = Class->GetFunction("OnlineStoreOffer", "GetNumericPrice");

	Params::UOnlineStoreOffer_GetNumericPrice_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineStoreOffer.GetLongDescription
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UOnlineStoreOffer::GetLongDescription()
{
	static auto Func = Class->GetFunction("OnlineStoreOffer", "GetLongDescription");

	Params::UOnlineStoreOffer_GetLongDescription_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineStoreOffer.GetExpirationDate
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDateTime                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FDateTime UOnlineStoreOffer::GetExpirationDate()
{
	static auto Func = Class->GetFunction("OnlineStoreOffer", "GetExpirationDate");

	Params::UOnlineStoreOffer_GetExpirationDate_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineStoreOffer.GetDynamicFields
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TMap<class FString, class FString> ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

TMap<class FString, class FString> UOnlineStoreOffer::GetDynamicFields()
{
	static auto Func = Class->GetFunction("OnlineStoreOffer", "GetDynamicFields");

	Params::UOnlineStoreOffer_GetDynamicFields_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineStoreOffer.GetDisplayRegularPrice
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UOnlineStoreOffer::GetDisplayRegularPrice()
{
	static auto Func = Class->GetFunction("OnlineStoreOffer", "GetDisplayRegularPrice");

	Params::UOnlineStoreOffer_GetDisplayRegularPrice_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineStoreOffer.GetDisplayPrice
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UOnlineStoreOffer::GetDisplayPrice()
{
	static auto Func = Class->GetFunction("OnlineStoreOffer", "GetDisplayPrice");

	Params::UOnlineStoreOffer_GetDisplayPrice_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineStoreOffer.GetDescription
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UOnlineStoreOffer::GetDescription()
{
	static auto Func = Class->GetFunction("OnlineStoreOffer", "GetDescription");

	Params::UOnlineStoreOffer_GetDescription_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.OnlineStoreOffer.GetCurrencyCode
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UOnlineStoreOffer::GetCurrencyCode()
{
	static auto Func = Class->GetFunction("OnlineStoreOffer", "GetCurrencyCode");

	Params::UOnlineStoreOffer_GetCurrencyCode_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.VoiceChatUser.UnblockPlayers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>              PlayerNames                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UVoiceChatUser::UnblockPlayers(const TArray<class FString>& PlayerNames)
{
	static auto Func = Class->GetFunction("VoiceChatUser", "UnblockPlayers");

	Params::UVoiceChatUser_UnblockPlayers_Params Parms;

	Parms.PlayerNames = PlayerNames;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.VoiceChatUser.TransmitToSpecificChannel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ChannelName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoiceChatUser::TransmitToSpecificChannel(const class FString& ChannelName)
{
	static auto Func = Class->GetFunction("VoiceChatUser", "TransmitToSpecificChannel");

	Params::UVoiceChatUser_TransmitToSpecificChannel_Params Parms;

	Parms.ChannelName = ChannelName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.VoiceChatUser.TransmitToNoChannels
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UVoiceChatUser::TransmitToNoChannels()
{
	static auto Func = Class->GetFunction("VoiceChatUser", "TransmitToNoChannels");

	Params::UVoiceChatUser_TransmitToNoChannels_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.VoiceChatUser.TransmitToAllChannels
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UVoiceChatUser::TransmitToAllChannels()
{
	static auto Func = Class->GetFunction("VoiceChatUser", "TransmitToAllChannels");

	Params::UVoiceChatUser_TransmitToAllChannels_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.VoiceChatUser.SetSetting
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoiceChatUser::SetSetting(const class FString& Name, const class FString& Value)
{
	static auto Func = Class->GetFunction("VoiceChatUser", "SetSetting");

	Params::UVoiceChatUser_SetSetting_Params Parms;

	Parms.Name = Name;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.VoiceChatUser.SetPlayerVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      PlayerName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Volume                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoiceChatUser::SetPlayerVolume(const class FString& PlayerName, float Volume)
{
	static auto Func = Class->GetFunction("VoiceChatUser", "SetPlayerVolume");

	Params::UVoiceChatUser_SetPlayerVolume_Params Parms;

	Parms.PlayerName = PlayerName;
	Parms.Volume = Volume;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.VoiceChatUser.SetPlayerMuted
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      PlayerName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bMuted                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoiceChatUser::SetPlayerMuted(const class FString& PlayerName, bool bMuted)
{
	static auto Func = Class->GetFunction("VoiceChatUser", "SetPlayerMuted");

	Params::UVoiceChatUser_SetPlayerMuted_Params Parms;

	Parms.PlayerName = PlayerName;
	Parms.bMuted = bMuted;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.VoiceChatUser.SetOutputDeviceId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      OutputDeviceId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoiceChatUser::SetOutputDeviceId(const class FString& OutputDeviceId)
{
	static auto Func = Class->GetFunction("VoiceChatUser", "SetOutputDeviceId");

	Params::UVoiceChatUser_SetOutputDeviceId_Params Parms;

	Parms.OutputDeviceId = OutputDeviceId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.VoiceChatUser.SetInputDeviceId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InputDeviceId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoiceChatUser::SetInputDeviceId(const class FString& InputDeviceId)
{
	static auto Func = Class->GetFunction("VoiceChatUser", "SetInputDeviceId");

	Params::UVoiceChatUser_SetInputDeviceId_Params Parms;

	Parms.InputDeviceId = InputDeviceId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.VoiceChatUser.SetChannelPlayerMuted
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ChannelName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      PlayerName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAudioMuted                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoiceChatUser::SetChannelPlayerMuted(const class FString& ChannelName, const class FString& PlayerName, bool bAudioMuted)
{
	static auto Func = Class->GetFunction("VoiceChatUser", "SetChannelPlayerMuted");

	Params::UVoiceChatUser_SetChannelPlayerMuted_Params Parms;

	Parms.ChannelName = ChannelName;
	Parms.PlayerName = PlayerName;
	Parms.bAudioMuted = bAudioMuted;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.VoiceChatUser.SetAudioOutputVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Volume                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoiceChatUser::SetAudioOutputVolume(float Volume)
{
	static auto Func = Class->GetFunction("VoiceChatUser", "SetAudioOutputVolume");

	Params::UVoiceChatUser_SetAudioOutputVolume_Params Parms;

	Parms.Volume = Volume;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.VoiceChatUser.SetAudioOutputDeviceMuted
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsMuted                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoiceChatUser::SetAudioOutputDeviceMuted(bool bIsMuted)
{
	static auto Func = Class->GetFunction("VoiceChatUser", "SetAudioOutputDeviceMuted");

	Params::UVoiceChatUser_SetAudioOutputDeviceMuted_Params Parms;

	Parms.bIsMuted = bIsMuted;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.VoiceChatUser.SetAudioInputVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Volume                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoiceChatUser::SetAudioInputVolume(float Volume)
{
	static auto Func = Class->GetFunction("VoiceChatUser", "SetAudioInputVolume");

	Params::UVoiceChatUser_SetAudioInputVolume_Params Parms;

	Parms.Volume = Volume;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.VoiceChatUser.SetAudioInputDeviceMuted
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsMuted                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoiceChatUser::SetAudioInputDeviceMuted(bool bIsMuted)
{
	static auto Func = Class->GetFunction("VoiceChatUser", "SetAudioInputDeviceMuted");

	Params::UVoiceChatUser_SetAudioInputDeviceMuted_Params Parms;

	Parms.bIsMuted = bIsMuted;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.VoiceChatUser.Set3DPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      ChannelName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     SpeakerPosition                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ListenerPosition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ListenerForwardDirection                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ListenerUpDirection                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoiceChatUser::Set3DPosition(const class FString& ChannelName, const struct FVector& SpeakerPosition, const struct FVector& ListenerPosition, const struct FVector& ListenerForwardDirection, const struct FVector& ListenerUpDirection)
{
	static auto Func = Class->GetFunction("VoiceChatUser", "Set3DPosition");

	Params::UVoiceChatUser_Set3DPosition_Params Parms;

	Parms.ChannelName = ChannelName;
	Parms.SpeakerPosition = SpeakerPosition;
	Parms.ListenerPosition = ListenerPosition;
	Parms.ListenerForwardDirection = ListenerForwardDirection;
	Parms.ListenerUpDirection = ListenerUpDirection;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.VoiceChatUser.IsPlayerTalking
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      PlayerName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVoiceChatUser::IsPlayerTalking(const class FString& PlayerName)
{
	static auto Func = Class->GetFunction("VoiceChatUser", "IsPlayerTalking");

	Params::UVoiceChatUser_IsPlayerTalking_Params Parms;

	Parms.PlayerName = PlayerName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.VoiceChatUser.IsPlayerMuted
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      PlayerName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVoiceChatUser::IsPlayerMuted(const class FString& PlayerName)
{
	static auto Func = Class->GetFunction("VoiceChatUser", "IsPlayerMuted");

	Params::UVoiceChatUser_IsPlayerMuted_Params Parms;

	Parms.PlayerName = PlayerName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.VoiceChatUser.IsLoggingIn
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVoiceChatUser::IsLoggingIn()
{
	static auto Func = Class->GetFunction("VoiceChatUser", "IsLoggingIn");

	Params::UVoiceChatUser_IsLoggingIn_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.VoiceChatUser.IsLoggedIn
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVoiceChatUser::IsLoggedIn()
{
	static auto Func = Class->GetFunction("VoiceChatUser", "IsLoggedIn");

	Params::UVoiceChatUser_IsLoggedIn_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.VoiceChatUser.IsChannelPlayerMuted
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ChannelName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      PlayerName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVoiceChatUser::IsChannelPlayerMuted(const class FString& ChannelName, const class FString& PlayerName)
{
	static auto Func = Class->GetFunction("VoiceChatUser", "IsChannelPlayerMuted");

	Params::UVoiceChatUser_IsChannelPlayerMuted_Params Parms;

	Parms.ChannelName = ChannelName;
	Parms.PlayerName = PlayerName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.VoiceChatUser.InsecureGetLoginToken
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      PlayerName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVoiceChatUser::InsecureGetLoginToken(const class FString& PlayerName)
{
	static auto Func = Class->GetFunction("VoiceChatUser", "InsecureGetLoginToken");

	Params::UVoiceChatUser_InsecureGetLoginToken_Params Parms;

	Parms.PlayerName = PlayerName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.VoiceChatUser.InsecureGetJoinToken
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ChannelName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EVoiceChatChannelType_  ChannelType                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVoiceChatChannel3dPropertiesBPChannel3dProperties                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVoiceChatUser::InsecureGetJoinToken(const class FString& ChannelName, enum class EVoiceChatChannelType_ ChannelType, const struct FVoiceChatChannel3dPropertiesBP& Channel3dProperties)
{
	static auto Func = Class->GetFunction("VoiceChatUser", "InsecureGetJoinToken");

	Params::UVoiceChatUser_InsecureGetJoinToken_Params Parms;

	Parms.ChannelName = ChannelName;
	Parms.ChannelType = ChannelType;
	Parms.Channel3dProperties = Channel3dProperties;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.VoiceChatUser.GetTransmitMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EVoiceChatTransmitMode_ ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EVoiceChatTransmitMode_ UVoiceChatUser::GetTransmitMode()
{
	static auto Func = Class->GetFunction("VoiceChatUser", "GetTransmitMode");

	Params::UVoiceChatUser_GetTransmitMode_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.VoiceChatUser.GetTransmitChannel
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVoiceChatUser::GetTransmitChannel()
{
	static auto Func = Class->GetFunction("VoiceChatUser", "GetTransmitChannel");

	Params::UVoiceChatUser_GetTransmitChannel_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.VoiceChatUser.GetSetting
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVoiceChatUser::GetSetting(const class FString& Name)
{
	static auto Func = Class->GetFunction("VoiceChatUser", "GetSetting");

	Params::UVoiceChatUser_GetSetting_Params Parms;

	Parms.Name = Name;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.VoiceChatUser.GetPlayerVolume
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      PlayerName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVoiceChatUser::GetPlayerVolume(const class FString& PlayerName)
{
	static auto Func = Class->GetFunction("VoiceChatUser", "GetPlayerVolume");

	Params::UVoiceChatUser_GetPlayerVolume_Params Parms;

	Parms.PlayerName = PlayerName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.VoiceChatUser.GetPlayersInChannel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ChannelName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UVoiceChatUser::GetPlayersInChannel(const class FString& ChannelName)
{
	static auto Func = Class->GetFunction("VoiceChatUser", "GetPlayersInChannel");

	Params::UVoiceChatUser_GetPlayersInChannel_Params Parms;

	Parms.ChannelName = ChannelName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.VoiceChatUser.GetOutputDeviceInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVoiceChatDeviceInfoBP      ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FVoiceChatDeviceInfoBP UVoiceChatUser::GetOutputDeviceInfo()
{
	static auto Func = Class->GetFunction("VoiceChatUser", "GetOutputDeviceInfo");

	Params::UVoiceChatUser_GetOutputDeviceInfo_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.VoiceChatUser.GetLoggedInPlayerName
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVoiceChatUser::GetLoggedInPlayerName()
{
	static auto Func = Class->GetFunction("VoiceChatUser", "GetLoggedInPlayerName");

	Params::UVoiceChatUser_GetLoggedInPlayerName_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.VoiceChatUser.GetInputDeviceInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVoiceChatDeviceInfoBP      ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FVoiceChatDeviceInfoBP UVoiceChatUser::GetInputDeviceInfo()
{
	static auto Func = Class->GetFunction("VoiceChatUser", "GetInputDeviceInfo");

	Params::UVoiceChatUser_GetInputDeviceInfo_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.VoiceChatUser.GetDefaultOutputDeviceInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVoiceChatDeviceInfoBP      ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FVoiceChatDeviceInfoBP UVoiceChatUser::GetDefaultOutputDeviceInfo()
{
	static auto Func = Class->GetFunction("VoiceChatUser", "GetDefaultOutputDeviceInfo");

	Params::UVoiceChatUser_GetDefaultOutputDeviceInfo_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.VoiceChatUser.GetDefaultInputDeviceInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVoiceChatDeviceInfoBP      ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FVoiceChatDeviceInfoBP UVoiceChatUser::GetDefaultInputDeviceInfo()
{
	static auto Func = Class->GetFunction("VoiceChatUser", "GetDefaultInputDeviceInfo");

	Params::UVoiceChatUser_GetDefaultInputDeviceInfo_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.VoiceChatUser.GetChannelType
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ChannelName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EVoiceChatChannelType_  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EVoiceChatChannelType_ UVoiceChatUser::GetChannelType(const class FString& ChannelName)
{
	static auto Func = Class->GetFunction("VoiceChatUser", "GetChannelType");

	Params::UVoiceChatUser_GetChannelType_Params Parms;

	Parms.ChannelName = ChannelName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.VoiceChatUser.GetChannels
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UVoiceChatUser::GetChannels()
{
	static auto Func = Class->GetFunction("VoiceChatUser", "GetChannels");

	Params::UVoiceChatUser_GetChannels_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.VoiceChatUser.GetAvailableOutputDeviceInfos
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FVoiceChatDeviceInfoBP>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FVoiceChatDeviceInfoBP> UVoiceChatUser::GetAvailableOutputDeviceInfos()
{
	static auto Func = Class->GetFunction("VoiceChatUser", "GetAvailableOutputDeviceInfos");

	Params::UVoiceChatUser_GetAvailableOutputDeviceInfos_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.VoiceChatUser.GetAvailableInputDeviceInfos
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FVoiceChatDeviceInfoBP>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FVoiceChatDeviceInfoBP> UVoiceChatUser::GetAvailableInputDeviceInfos()
{
	static auto Func = Class->GetFunction("VoiceChatUser", "GetAvailableInputDeviceInfos");

	Params::UVoiceChatUser_GetAvailableInputDeviceInfos_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.VoiceChatUser.GetAudioOutputVolume
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVoiceChatUser::GetAudioOutputVolume()
{
	static auto Func = Class->GetFunction("VoiceChatUser", "GetAudioOutputVolume");

	Params::UVoiceChatUser_GetAudioOutputVolume_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.VoiceChatUser.GetAudioOutputDeviceMuted
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVoiceChatUser::GetAudioOutputDeviceMuted()
{
	static auto Func = Class->GetFunction("VoiceChatUser", "GetAudioOutputDeviceMuted");

	Params::UVoiceChatUser_GetAudioOutputDeviceMuted_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.VoiceChatUser.GetAudioInputVolume
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVoiceChatUser::GetAudioInputVolume()
{
	static auto Func = Class->GetFunction("VoiceChatUser", "GetAudioInputVolume");

	Params::UVoiceChatUser_GetAudioInputVolume_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.VoiceChatUser.GetAudioInputDeviceMuted
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVoiceChatUser::GetAudioInputDeviceMuted()
{
	static auto Func = Class->GetFunction("VoiceChatUser", "GetAudioInputDeviceMuted");

	Params::UVoiceChatUser_GetAudioInputDeviceMuted_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.VoiceChatUser.BlockPlayers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>              PlayerNames                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UVoiceChatUser::BlockPlayers(const TArray<class FString>& PlayerNames)
{
	static auto Func = Class->GetFunction("VoiceChatUser", "BlockPlayers");

	Params::UVoiceChatUser_BlockPlayers_Params Parms;

	Parms.PlayerNames = PlayerNames;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemBlueprints.VoiceChatUserLogin.Login
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UVoiceChatUser*              Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PlatformId                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      PlayerName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Credentials                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVoiceChatUserLogin*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVoiceChatUserLogin* UVoiceChatUserLogin::Login(class UVoiceChatUser* Subsystem, int32 PlatformId, const class FString& PlayerName, const class FString& Credentials)
{
	static auto Func = Class->GetFunction("VoiceChatUserLogin", "Login");

	Params::UVoiceChatUserLogin_Login_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.PlatformId = PlatformId;
	Parms.PlayerName = PlayerName;
	Parms.Credentials = Credentials;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.VoiceChatUserLogout.Logout
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UVoiceChatUser*              Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVoiceChatUserLogout*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVoiceChatUserLogout* UVoiceChatUserLogout::Logout(class UVoiceChatUser* Subsystem)
{
	static auto Func = Class->GetFunction("VoiceChatUserLogout", "Logout");

	Params::UVoiceChatUserLogout_Logout_Params Parms;

	Parms.Subsystem = Subsystem;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.VoiceChatUserJoinChannel.JoinChannel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UVoiceChatUser*              Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ChannelName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ChannelCredentials                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EVoiceChatChannelType_  ChannelType                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVoiceChatChannel3dPropertiesBPChannel3dProperties                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UVoiceChatUserJoinChannel*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVoiceChatUserJoinChannel* UVoiceChatUserJoinChannel::JoinChannel(class UVoiceChatUser* Subsystem, const class FString& ChannelName, const class FString& ChannelCredentials, enum class EVoiceChatChannelType_ ChannelType, const struct FVoiceChatChannel3dPropertiesBP& Channel3dProperties)
{
	static auto Func = Class->GetFunction("VoiceChatUserJoinChannel", "JoinChannel");

	Params::UVoiceChatUserJoinChannel_JoinChannel_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.ChannelName = ChannelName;
	Parms.ChannelCredentials = ChannelCredentials;
	Parms.ChannelType = ChannelType;
	Parms.Channel3dProperties = Channel3dProperties;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemBlueprints.VoiceChatUserLeaveChannel.LeaveChannel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UVoiceChatUser*              Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ChannelName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVoiceChatUserLeaveChannel*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVoiceChatUserLeaveChannel* UVoiceChatUserLeaveChannel::LeaveChannel(class UVoiceChatUser* Subsystem, const class FString& ChannelName)
{
	static auto Func = Class->GetFunction("VoiceChatUserLeaveChannel", "LeaveChannel");

	Params::UVoiceChatUserLeaveChannel_LeaveChannel_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.ChannelName = ChannelName;

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
