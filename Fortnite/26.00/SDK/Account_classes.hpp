#pragma once

// Dumped with Dumper-7!


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

	static class UClass* StaticClass();
	static class UExternalAccountProvider* GetDefaultObj();

};

// 0x858 (0x880 - 0x28)
// Class Account.OnlineAccountCommon
class UOnlineAccountCommon : public UObject
{
public:
	uint8                                        Pad_1AF1[0x10];                                    // Fixing Size After Last Property 
	class FString                                AvailabilityServiceGameName;                       // 0x38(0x10)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRequireLightswitchAtStartup;                      // 0x48(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1AF3[0x7];                                     // Fixing Size After Last Property 
	class FString                                EulaKey;                                           // 0x50(0x10)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FString>                        EulaKeys;                                          // 0x60(0x10)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	TMap<class FString, class FString>           EulaKeyMapping;                                    // 0x70(0x50)(Config, Protected, NativeAccessSpecifierProtected)
	bool                                         bEnableWaitingRoom;                                // 0xC0(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1AF4[0x7];                                     // Fixing Size After Last Property 
	TArray<struct FWebEnvUrl>                    WebCreateEpicAccountUrl;                           // 0xC8(0x10)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	bool                                         bAllowLocalLogout;                                 // 0xD8(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1AF5[0x37];                                    // Fixing Size After Last Property 
	float                                        DefaultLoginStepTimeout;                           // 0x110(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1AF6[0x4];                                     // Fixing Size After Last Property 
	TMap<class FName, float>                     CustomLoginStepTimeouts;                           // 0x118(0x50)(Config, NativeAccessSpecifierPrivate)
	bool                                         bEnableDevLoginStepTimeouts;                       // 0x168(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1AF8[0x67];                                    // Fixing Size After Last Property 
	class FString                                RedeemAccessUrl;                                   // 0x1D0(0x10)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                RequestFreeAccessUrl;                              // 0x1E0(0x10)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                RealGameAccessUrl;                                 // 0x1F0(0x10)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SkipRedeemOfflinePurchasesChance;                  // 0x200(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseFreeAccessInsteadOfGameAccess;                 // 0x204(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShouldGrantFreeAccess;                            // 0x205(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1AFB[0x1];                                     // Fixing Size After Last Property 
	bool                                         bAllowHomeSharingAccess;                           // 0x207(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRequireUGCPrivilege;                              // 0x208(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1AFC[0x22F];                                   // Fixing Size After Last Property 
	float                                        AccessGrantDelaySeconds;                           // 0x438(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1AFD[0x4];                                     // Fixing Size After Last Property 
	class UWaitingRoomState*                     WaitingRoomState;                                  // 0x440(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1AFE[0x360];                                   // Fixing Size After Last Property 
	bool                                         bAutoCreateHeadlessAccount;                        // 0x7A8(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1AFF[0xD7];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOnlineAccountCommon* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class Account.WaitingRoomState
class UWaitingRoomState : public UObject
{
public:
	uint8                                        Pad_1B01[0x34];                                    // Fixing Size After Last Property 
	int32                                        GracePeriodMins;                                   // 0x5C(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1B02[0x28];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UWaitingRoomState* GetDefaultObj();

};

}


