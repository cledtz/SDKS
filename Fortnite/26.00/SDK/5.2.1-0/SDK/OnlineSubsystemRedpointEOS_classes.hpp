#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x220 (0x2A0 - 0x80)
// Class OnlineSubsystemRedpointEOS.EOSControlChannel
class UEOSControlChannel : public UControlChannel
{
public:
	uint8                                        Pad_128D[0x220];                                   // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UEOSControlChannel* GetDefaultObj();

};

// 0x0 (0x1E48 - 0x1E48)
// Class OnlineSubsystemRedpointEOS.EOSIpNetConnection
class UEOSIpNetConnection : public UIpConnection
{
public:

	static class UClass* StaticClass();
	static class UEOSIpNetConnection* GetDefaultObj();

};

// 0x10 (0x1DC8 - 0x1DB8)
// Class OnlineSubsystemRedpointEOS.EOSNetConnection
class UEOSNetConnection : public UNetConnection
{
public:
	uint8                                        Pad_1296[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UEOSNetConnection* GetDefaultObj();

};

// 0x78 (0x8D0 - 0x858)
// Class OnlineSubsystemRedpointEOS.EOSNetDriver
class UEOSNetDriver : public UIpNetDriver
{
public:
	uint8                                        Pad_1299[0x68];                                    // Fixing Size After Last Property 
	TArray<class UEOSNetConnection*>             PendingConnectionClose;                            // 0x8C0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UEOSNetDriver* GetDefaultObj();

};

// 0x38 (0x68 - 0x30)
// Class OnlineSubsystemRedpointEOS.EOSSubsystem
class UEOSSubsystem : public UGameInstanceSubsystem
{
public:
	FMulticastInlineDelegateProperty_            OnAddWidgetToViewport;                             // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRemoveWidgetFromViewport;                        // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_129B[0x18];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UEOSSubsystem* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class OnlineSubsystemRedpointEOS.EOSUserInterface_EnterDevicePinCode_Context
class UEOSUserInterface_EnterDevicePinCode_Context : public UObject
{
public:
	uint8                                        Pad_12A2[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UEOSUserInterface_EnterDevicePinCode_Context* GetDefaultObj();

	void CancelLogin();
};

// 0x0 (0x28 - 0x28)
// Class OnlineSubsystemRedpointEOS.EOSUserInterface_EnterDevicePinCode
class UEOSUserInterface_EnterDevicePinCode : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UEOSUserInterface_EnterDevicePinCode* GetDefaultObj();

	void SetupUserInterface(class UEOSUserInterface_EnterDevicePinCode_Context* Context, const class FString& VerificationUrl, const class FString& PinCode);
};

// 0x10 (0x38 - 0x28)
// Class OnlineSubsystemRedpointEOS.EOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context
class UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context : public UObject
{
public:
	uint8                                        Pad_12AB[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context* GetDefaultObj();

	void SelectedCandidates(const TArray<struct FEOSUserInterface_CandidateEOSAccount>& SelectedCandidates);
};

// 0x0 (0x28 - 0x28)
// Class OnlineSubsystemRedpointEOS.EOSUserInterface_LinkEOSAccountsAgainstCrossPlatform
class UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform* GetDefaultObj();

	void SetupUserInterface(class UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context* Context, TArray<struct FEOSUserInterface_CandidateEOSAccount>& AvailableCandidates);
};

// 0x10 (0x38 - 0x28)
// Class OnlineSubsystemRedpointEOS.EOSUserInterface_SelectEOSAccount_Context
class UEOSUserInterface_SelectEOSAccount_Context : public UObject
{
public:
	uint8                                        Pad_12B5[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UEOSUserInterface_SelectEOSAccount_Context* GetDefaultObj();

	void SelectCandidate(const struct FEOSUserInterface_CandidateEOSAccount& SelectedCandidate);
};

// 0x0 (0x28 - 0x28)
// Class OnlineSubsystemRedpointEOS.EOSUserInterface_SelectEOSAccount
class UEOSUserInterface_SelectEOSAccount : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UEOSUserInterface_SelectEOSAccount* GetDefaultObj();

	void SetupUserInterface(class UEOSUserInterface_SelectEOSAccount_Context* Context, TArray<struct FEOSUserInterface_CandidateEOSAccount>& AvailableCandidates);
};

// 0x10 (0x38 - 0x28)
// Class OnlineSubsystemRedpointEOS.EOSUserInterface_SignInOrCreateAccount_Context
class UEOSUserInterface_SignInOrCreateAccount_Context : public UObject
{
public:
	uint8                                        Pad_12BF[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UEOSUserInterface_SignInOrCreateAccount_Context* GetDefaultObj();

	void SelectChoice(enum class EEOSUserInterface_SignInOrCreateAccount_Choice SelectedChoice);
};

// 0x0 (0x28 - 0x28)
// Class OnlineSubsystemRedpointEOS.EOSUserInterface_SignInOrCreateAccount
class UEOSUserInterface_SignInOrCreateAccount : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UEOSUserInterface_SignInOrCreateAccount* GetDefaultObj();

	void SetupUserInterface(class UEOSUserInterface_SignInOrCreateAccount_Context* Context);
};

// 0x10 (0x38 - 0x28)
// Class OnlineSubsystemRedpointEOS.EOSUserInterface_SwitchToCrossPlatformAccount_Context
class UEOSUserInterface_SwitchToCrossPlatformAccount_Context : public UObject
{
public:
	uint8                                        Pad_12C5[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UEOSUserInterface_SwitchToCrossPlatformAccount_Context* GetDefaultObj();

	void SelectChoice(enum class EEOSUserInterface_SwitchToCrossPlatformAccount_Choice SelectedChoice);
};

// 0x0 (0x28 - 0x28)
// Class OnlineSubsystemRedpointEOS.EOSUserInterface_SwitchToCrossPlatformAccount
class UEOSUserInterface_SwitchToCrossPlatformAccount : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UEOSUserInterface_SwitchToCrossPlatformAccount* GetDefaultObj();

	void SetupUserInterface(class UEOSUserInterface_SwitchToCrossPlatformAccount_Context* Context, const class FString& EpicAccountName);
};

// 0x60 (0x90 - 0x30)
// Class OnlineSubsystemRedpointEOS.RecentPlayersWorldSubsystem
class URecentPlayersWorldSubsystem : public UWorldSubsystem
{
public:
	uint8                                        Pad_12D2[0x60];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class URecentPlayersWorldSubsystem* GetDefaultObj();

};

}


