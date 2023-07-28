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

// 0x0 (0x28 - 0x28)
// Class McpProfileSys.McpItemAware
class UMcpItemAware : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("McpItemAware");
		return Clss;
	}

};

// 0x0 (0x30 - 0x30)
// Class McpProfileSys.McpItemDefinitionBase
class UMcpItemDefinitionBase : public UPrimaryDataAsset
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("McpItemDefinitionBase");
		return Clss;
	}

};

// 0x118 (0x140 - 0x28)
// Class McpProfileSys.McpProfile
class UMcpProfile : public UObject
{
public:
	bool                                         AllowSubscriptionToNotificationsService;           // 0x28(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_27[0x77];                                      // Fixing Size After Last Property..
	class FString                                DebugName;                                         // 0xA0(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bProfileLockOperationPending;                      // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bProfileUnlockOperationPending;                    // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableMocks;                                      // 0xB2(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_28[0x15];                                      // Fixing Size After Last Property..
	class UMcpProfileGroup*                      ProfileGroup;                                      // 0xC8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                ProfileId;                                         // 0xD0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int64                                        ProfileRevision;                                   // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        FullProfileQueryQueued;                            // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bProfileWriteLocked;                               // 0xEC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_29[0x3];                                       // Fixing Size After Last Property..
	struct FDateTime                             ProfileWriteLockExpireTime;                        // 0xF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         QueuedProfileUpdatingEnabled;                      // 0xF8(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2A[0x47];                                      // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("McpProfile");
		return Clss;
	}

	void UnlockProfileForWrite(const class FString& Code, struct FDedicatedServerUrlContext* Context);
	void QueryPublicProfile(struct FBaseUrlContext* Context);
	void QueryProfile(struct FBaseUrlContext* Context);
	void LockProfileForWrite(const class FString& Code, int32 Timeout, struct FDedicatedServerUrlContext* Context);
	void DeleteProfile(struct FClientUrlContext* Context);
	void DeleteAllProfiles(struct FClientUrlContext* Context);
};

// 0x258 (0x280 - 0x28)
// Class McpProfileSys.McpProfileGroup
class UMcpProfileGroup : public UObject
{
public:
	uint8                                        Pad_2B[0xB4];                                      // Fixing Size After Last Property..
	int32                                        DelayMcpResults;                                   // 0xDC(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        WeeklyIntervalStartDay;                            // 0xE0(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2C[0x4];                                       // Fixing Size After Last Property..
	TArray<struct FProfileEntry>                 ProfileList;                                       // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2D[0x8];                                       // Fixing Size After Last Property..
	class FString                                PlayerName;                                        // 0x100(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsServer;                                         // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2E[0x7];                                       // Fixing Size After Last Property..
	class FString                                ProfileNotificationsStompTopic;                    // 0x118(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2F[0x50];                                      // Fixing Size After Last Property..
	class FString                                LastMcpVersion;                                    // 0x178(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                LastContentVersion;                                // 0x188(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                LastMinBuild;                                      // 0x198(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTimespan                             LocalTimeOffset;                                   // 0x1A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_30[0x8];                                       // Fixing Size After Last Property..
	class FString                                LockCode;                                          // 0x1B8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UMcpProfile*>                   LockedProfiles;                                    // 0x1C8(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	class FString                                LockedProfilesString;                              // 0x1D8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        ProfileWriteLockTimeoutSecs;                       // 0x1E8(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bSubscribedToNotifications;                        // 0x1EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_31[0x3];                                       // Fixing Size After Last Property..
	class FString                                ApplyStashEndPoint;                                // 0x1F0(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_32[0x8];                                       // Fixing Size After Last Property..
	bool                                         bSendProfileCommandRevisions;                      // 0x208(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bAsyncParseProfileUpdates;                         // 0x209(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_33[0x56];                                      // Fixing Size After Last Property..
	int32                                        MaxChangesToForwardInUpdate;                       // 0x260(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        MaxChangeSizeInBytes;                              // 0x264(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class FString>                        ForwardToClientExclusions;                         // 0x268(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	uint8                                        Pad_34[0x8];                                       // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("McpProfileGroup");
		return Clss;
	}

};

// 0x40 (0x68 - 0x28)
// Class McpProfileSys.McpProfileManager
class UMcpProfileManager : public UObject
{
public:
	uint8                                        Pad_35[0x10];                                      // Fixing Size After Last Property..
	TArray<struct FProfileGroupEntry>            ServerProfileGroups;                               // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FProfileGroupEntry>            ClientProfileGroups;                               // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_36[0x8];                                       // Fixing Size After Last Property..
	int32                                        MaxItemsProcessedInInitialUpdatesPerTick;          // 0x60(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_37[0x4];                                       // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("McpProfileManager");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
