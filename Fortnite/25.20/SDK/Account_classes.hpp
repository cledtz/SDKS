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

// 0x10 (0x38 - 0x28)
// Class Account.ExternalAccountProvider
class UExternalAccountProvider : public UObject
{
public:
	TArray<struct FExternalAccountServiceConfig> Services;                                          // 0x28(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ExternalAccountProvider");
		return Clss;
	}

};

// 0x860 (0x888 - 0x28)
// Class Account.OnlineAccountCommon
class UOnlineAccountCommon : public UObject
{
public:
	uint8                                        Pad_3E1B[0x10];                                    // Fixing Size After Last Property..
	class FString                                AvailabilityServiceGameName;                       // 0x38(0x10)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRequireLightswitchAtStartup;                      // 0x48(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3E1C[0x7];                                     // Fixing Size After Last Property..
	class FString                                EulaKey;                                           // 0x50(0x10)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FString>                        EulaKeys;                                          // 0x60(0x10)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	TMap<class FString, class FString>           EulaKeyMapping;                                    // 0x70(0x50)(Config, Protected, NativeAccessSpecifierProtected)
	bool                                         bEnableWaitingRoom;                                // 0xC0(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3E1D[0x7];                                     // Fixing Size After Last Property..
	TArray<struct FWebEnvUrl>                    WebCreateEpicAccountUrl;                           // 0xC8(0x10)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	bool                                         bAllowLocalLogout;                                 // 0xD8(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3E1E[0x3F];                                    // Fixing Size After Last Property..
	float                                        DefaultLoginStepTimeout;                           // 0x118(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E1F[0x4];                                     // Fixing Size After Last Property..
	TMap<class FName, float>                     CustomLoginStepTimeouts;                           // 0x120(0x50)(Config, NativeAccessSpecifierPrivate)
	bool                                         bEnableDevLoginStepTimeouts;                       // 0x170(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E20[0x67];                                    // Fixing Size After Last Property..
	class FString                                RedeemAccessUrl;                                   // 0x1D8(0x10)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                RequestFreeAccessUrl;                              // 0x1E8(0x10)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                RealGameAccessUrl;                                 // 0x1F8(0x10)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SkipRedeemOfflinePurchasesChance;                  // 0x208(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseFreeAccessInsteadOfGameAccess;                 // 0x20C(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShouldGrantFreeAccess;                            // 0x20D(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3E21[0x1];                                     // Fixing Size After Last Property..
	bool                                         bAllowHomeSharingAccess;                           // 0x20F(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRequireUGCPrivilege;                              // 0x210(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3E22[0x22F];                                   // Fixing Size After Last Property..
	float                                        AccessGrantDelaySeconds;                           // 0x440(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3E23[0x4];                                     // Fixing Size After Last Property..
	class UWaitingRoomState*                     WaitingRoomState;                                  // 0x448(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3E24[0x360];                                   // Fixing Size After Last Property..
	bool                                         bAutoCreateHeadlessAccount;                        // 0x7B0(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3E25[0xD7];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OnlineAccountCommon");
		return Clss;
	}

};

// 0x60 (0x88 - 0x28)
// Class Account.WaitingRoomState
class UWaitingRoomState : public UObject
{
public:
	uint8                                        Pad_3E26[0x34];                                    // Fixing Size After Last Property..
	int32                                        GracePeriodMins;                                   // 0x5C(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E27[0x28];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WaitingRoomState");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
