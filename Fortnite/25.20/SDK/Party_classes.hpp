#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x58 - 0x28)
// Class Party.Chatroom
class UChatroom : public UObject
{
public:
	class FString                                CurrentChatRoomId;                                 // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        MaxChatRoomRetries;                                // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        NumChatRoomRetries;                                // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E71[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Chatroom");
		return Clss;
	}

};

// 0x188 (0x1B0 - 0x28)
// Class Party.SocialManager
class USocialManager : public UObject
{
public:
	uint8                                        Pad_3E72[0x80];                                    // Fixing Size After Last Property..
	TArray<class USocialToolkit*>                SocialToolkits;                                    // 0xA8(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	class USocialDebugTools*                     SocialDebugTools;                                  // 0xB8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E73[0xF0];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialManager");
		return Clss;
	}

};

// 0x288 (0x2B0 - 0x28)
// Class Party.SocialToolkit
class USocialToolkit : public UObject
{
public:
	uint8                                        Pad_3E74[0x40];                                    // Fixing Size After Last Property..
	class USocialUser*                           LocalUser;                                         // 0x68(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class USocialUser*>                   AllUsers;                                          // 0x70(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E75[0x50];                                    // Fixing Size After Last Property..
	bool                                         bRemoveInvalidatedUserFromMaps;                    // 0xD0(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E76[0x3];                                     // Fixing Size After Last Property..
	TWeakObjectPtr<class ULocalPlayer>           LocalPlayerOwner;                                  // 0xD4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E77[0x4];                                     // Fixing Size After Last Property..
	class USocialChatManager*                    SocialChatManager;                                 // 0xE0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E78[0x1C8];                                   // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialToolkit");
		return Clss;
	}

};

// 0x1F8 (0x220 - 0x28)
// Class Party.SocialChatManager
class USocialChatManager : public UObject
{
public:
	uint8                                        Pad_3E79[0x50];                                    // Fixing Size After Last Property..
	TMap<TWeakObjectPtr<class USocialUser>, class USocialPrivateMessageChannel*> DirectChannelsByTargetUser;                        // 0x78(0x50)(UObjectWrapper, NativeAccessSpecifierPrivate)
	TMap<class FString, class USocialChatRoom*>  ChatRoomsById;                                     // 0xC8(0x50)(UObjectWrapper, NativeAccessSpecifierPrivate)
	TMap<class FString, class USocialReadOnlyChatChannel*> ReadOnlyChannelsByDisplayName;                     // 0x118(0x50)(UObjectWrapper, NativeAccessSpecifierPrivate)
	bool                                         bEnableChatSlashCommands;                          // 0x168(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E7A[0x7];                                     // Fixing Size After Last Property..
	TMap<struct FUniqueNetIdRepl, class USocialGroupChannel*> GroupChannels;                                     // 0x170(0x50)(UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E7B[0x60];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialChatManager");
		return Clss;
	}

};

// 0xC0 (0xE8 - 0x28)
// Class Party.SocialChatChannel
class USocialChatChannel : public UObject
{
public:
	uint8                                        Pad_3E7C[0xC0];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialChatChannel");
		return Clss;
	}

};

// 0x10 (0xF8 - 0xE8)
// Class Party.SocialChatRoom
class USocialChatRoom : public USocialChatChannel
{
public:
	uint8                                        Pad_3E7D[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialChatRoom");
		return Clss;
	}

};

// 0x70 (0x98 - 0x28)
// Class Party.SocialGroupChannel
class USocialGroupChannel : public UObject
{
public:
	class USocialUser*                           SocialUser;                                        // 0x28(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      GroupId;                                           // 0x30(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FText                                  DisplayName;                                       // 0x60(0x18)(NativeAccessSpecifierPrivate)
	TArray<class USocialUser*>                   Members;                                           // 0x78(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E7E[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialGroupChannel");
		return Clss;
	}

};

// 0x0 (0xF8 - 0xF8)
// Class Party.SocialPartyChatRoom
class USocialPartyChatRoom : public USocialChatRoom
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialPartyChatRoom");
		return Clss;
	}

};

// 0x8 (0xF0 - 0xE8)
// Class Party.SocialPrivateMessageChannel
class USocialPrivateMessageChannel : public USocialChatChannel
{
public:
	class USocialUser*                           TargetUser;                                        // 0xE8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialPrivateMessageChannel");
		return Clss;
	}

};

// 0x0 (0xE8 - 0xE8)
// Class Party.SocialReadOnlyChatChannel
class USocialReadOnlyChatChannel : public USocialChatChannel
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialReadOnlyChatChannel");
		return Clss;
	}

};

// 0x338 (0x360 - 0x28)
// Class Party.SocialParty
class USocialParty : public UObject
{
public:
	uint8                                        Pad_3E7F[0x38];                                    // Fixing Size After Last Property..
	TSubclassOf<class APartyBeaconClient>        ReservationBeaconClientClass;                      // 0x60(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class ASpectatorBeaconClient>    SpectatorBeaconClientClass;                        // 0x68(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3E80[0x10];                                    // Fixing Size After Last Property..
	struct FUniqueNetIdRepl                      OwningLocalUserId;                                 // 0x80(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      CurrentLeaderId;                                   // 0xB0(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<struct FUniqueNetIdRepl, class UPartyMember*> PartyMembersById;                                  // 0xE0(0x50)(UObjectWrapper, NativeAccessSpecifierPrivate)
	bool                                         bEnableAutomaticPartyRejoin;                       // 0x130(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E81[0x57];                                    // Fixing Size After Last Property..
	double                                       PlatformUserInviteCooldown;                        // 0x188(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	double                                       PrimaryUserInviteCooldown;                         // 0x190(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E82[0x70];                                    // Fixing Size After Last Property..
	TWeakObjectPtr<class APartyBeaconClient>     ReservationBeaconClient;                           // 0x208(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E83[0x4];                                     // Fixing Size After Last Property..
	TWeakObjectPtr<class ASpectatorBeaconClient> SpectatorBeaconClient;                             // 0x214(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E84[0x2C];                                    // Fixing Size After Last Property..
	float                                        JoinInProgressTimerRate;                           // 0x248(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        JoinInProgressRequestTimeout;                      // 0x24C(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        JoinInProgressResponseTimeout;                     // 0x250(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E85[0x10C];                                   // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialParty");
		return Clss;
	}

};

// 0xE8 (0x110 - 0x28)
// Class Party.PartyMember
class UPartyMember : public UObject
{
public:
	uint8                                        Pad_3E86[0x48];                                    // Fixing Size After Last Property..
	class USocialUser*                           SocialUser;                                        // 0x70(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E87[0x98];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PartyMember");
		return Clss;
	}

};

// 0x60 (0x88 - 0x28)
// Class Party.SocialDebugTools
class USocialDebugTools : public UObject
{
public:
	uint8                                        Pad_3E88[0x60];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialDebugTools");
		return Clss;
	}

};

// 0x48 (0x70 - 0x28)
// Class Party.SocialSettings
class USocialSettings : public UObject
{
public:
	TArray<class FName>                          OssNamesWithEnvironmentIdPrefix;                   // 0x28(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	int32                                        DefaultMaxPartySize;                               // 0x38(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bPreferPlatformInvites;                            // 0x3C(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bMustSendPrimaryInvites;                           // 0x3D(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bLeavePartyOnDisconnect;                           // 0x3E(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bSetDesiredPrivacyOnLocalPlayerBecomesLeader;      // 0x3F(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        UserListAutoUpdateRate;                            // 0x40(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        MinNicknameLength;                                 // 0x44(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        MaxNicknameLength;                                 // 0x48(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E89[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FSocialPlatformDescription>    SocialPlatformDescriptions;                        // 0x50(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	TArray<class FName>                          SonyOSSNames;                                      // 0x60(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialSettings");
		return Clss;
	}

};

// 0x1A8 (0x1D0 - 0x28)
// Class Party.SocialUser
class USocialUser : public UObject
{
public:
	uint8                                        Pad_3E8A[0x1A8];                                   // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialUser");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
