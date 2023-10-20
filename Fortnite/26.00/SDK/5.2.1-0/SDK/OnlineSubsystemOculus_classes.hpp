#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x98 - 0x30)
// Class OnlineSubsystemOculus.OculusCreateSessionCallbackProxy
class UOculusCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_CC7[0x48];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOculusCreateSessionCallbackProxy* GetDefaultObj();

	class UOculusCreateSessionCallbackProxy* CreateSession(int32 PublicConnections, const class FString& OculusMatchmakingPool);
};

// 0x20 (0x50 - 0x30)
// Class OnlineSubsystemOculus.OculusEntitlementCallbackProxy
class UOculusEntitlementCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UOculusEntitlementCallbackProxy* GetDefaultObj();

	class UOculusEntitlementCallbackProxy* VerifyEntitlement();
};

// 0x68 (0x98 - 0x30)
// Class OnlineSubsystemOculus.OculusFindSessionsCallbackProxy
class UOculusFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_CDE[0x48];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOculusFindSessionsCallbackProxy* GetDefaultObj();

	class UOculusFindSessionsCallbackProxy* FindModeratedSessions(int32 MaxResults);
	class UOculusFindSessionsCallbackProxy* FindMatchmakingSessions(int32 MaxResults, const class FString& OculusMatchmakingPool);
};

// 0x30 (0x60 - 0x30)
// Class OnlineSubsystemOculus.OculusIdentityCallbackProxy
class UOculusIdentityCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_CE5[0x10];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOculusIdentityCallbackProxy* GetDefaultObj();

	class UOculusIdentityCallbackProxy* GetOculusIdentity(int32 LocalUserNum);
};

// 0x10 (0x1E58 - 0x1E48)
// Class OnlineSubsystemOculus.OculusNetConnection
class UOculusNetConnection : public UIpConnection
{
public:
	uint8                                        Pad_CE9[0x10];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOculusNetConnection* GetDefaultObj();

};

// 0xB8 (0x910 - 0x858)
// Class OnlineSubsystemOculus.OculusNetDriver
class UOculusNetDriver : public UIpNetDriver
{
public:
	uint8                                        Pad_CEB[0xB8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOculusNetDriver* GetDefaultObj();

};

// 0x40 (0x70 - 0x30)
// Class OnlineSubsystemOculus.OculusUpdateSessionCallbackProxy
class UOculusUpdateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_CF0[0x20];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOculusUpdateSessionCallbackProxy* GetDefaultObj();

	class UOculusUpdateSessionCallbackProxy* SetSessionEnqueue(bool bShouldEnqueueInMatchmakingPool);
};

}


