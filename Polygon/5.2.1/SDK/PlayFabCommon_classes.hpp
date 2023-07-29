#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x68 - 0x28)
// Class PlayFabCommon.PlayFabAuthenticationContext
class UPlayFabAuthenticationContext : public UObject
{
public:
	class FString                                ClientSessionTicket;                               // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                EntityToken;                                       // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                DeveloperSecretKey;                                // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                PlayFabId;                                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayFabAuthenticationContext");
		return Clss;
	}

	void SetPlayFabId(const class FString& InKey);
	void SetEntityToken(const class FString& InToken);
	void SetDeveloperSecretKey(const class FString& InKey);
	void SetClientSessionTicket(const class FString& InTicket);
	class FString GetPlayFabId();
	class FString GetEntityToken();
	class FString GetDeveloperSecretKey();
	class FString GetClientSessionTicket();
	void ForgetAllCredentials();
	void ClientAdminSecurityCheck();
};

// 0x30 (0x58 - 0x28)
// Class PlayFabCommon.PlayFabRuntimeSettings
class UPlayFabRuntimeSettings : public UObject
{
public:
	class FString                                ProductionEnvironmentURL;                          // 0x28(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TitleId;                                           // 0x38(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DeveloperSecretKey;                                // 0x48(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayFabRuntimeSettings");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
