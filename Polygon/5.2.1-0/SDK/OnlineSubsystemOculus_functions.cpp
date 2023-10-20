#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class OnlineSubsystemOculus.OculusCreateSessionCallbackProxy
// (None)

class UClass* UOculusCreateSessionCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OculusCreateSessionCallbackProxy");

	return Clss;
}


// OculusCreateSessionCallbackProxy OnlineSubsystemOculus.Default__OculusCreateSessionCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UOculusCreateSessionCallbackProxy* UOculusCreateSessionCallbackProxy::GetDefaultObj()
{
	static class UOculusCreateSessionCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UOculusCreateSessionCallbackProxy*>(UOculusCreateSessionCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemOculus.OculusCreateSessionCallbackProxy.CreateSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              PublicConnections                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OculusMatchmakingPool                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOculusCreateSessionCallbackProxy*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOculusCreateSessionCallbackProxy* UOculusCreateSessionCallbackProxy::CreateSession(int32 PublicConnections, const class FString& OculusMatchmakingPool)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusCreateSessionCallbackProxy", "CreateSession");

	Params::UOculusCreateSessionCallbackProxy_CreateSession_Params Parms{};

	Parms.PublicConnections = PublicConnections;
	Parms.OculusMatchmakingPool = OculusMatchmakingPool;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemOculus.OculusEntitlementCallbackProxy
// (None)

class UClass* UOculusEntitlementCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OculusEntitlementCallbackProxy");

	return Clss;
}


// OculusEntitlementCallbackProxy OnlineSubsystemOculus.Default__OculusEntitlementCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UOculusEntitlementCallbackProxy* UOculusEntitlementCallbackProxy::GetDefaultObj()
{
	static class UOculusEntitlementCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UOculusEntitlementCallbackProxy*>(UOculusEntitlementCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemOculus.OculusEntitlementCallbackProxy.VerifyEntitlement
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOculusEntitlementCallbackProxy*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOculusEntitlementCallbackProxy* UOculusEntitlementCallbackProxy::VerifyEntitlement()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusEntitlementCallbackProxy", "VerifyEntitlement");

	Params::UOculusEntitlementCallbackProxy_VerifyEntitlement_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemOculus.OculusFindSessionsCallbackProxy
// (None)

class UClass* UOculusFindSessionsCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OculusFindSessionsCallbackProxy");

	return Clss;
}


// OculusFindSessionsCallbackProxy OnlineSubsystemOculus.Default__OculusFindSessionsCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UOculusFindSessionsCallbackProxy* UOculusFindSessionsCallbackProxy::GetDefaultObj()
{
	static class UOculusFindSessionsCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UOculusFindSessionsCallbackProxy*>(UOculusFindSessionsCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemOculus.OculusFindSessionsCallbackProxy.FindModeratedSessions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              MaxResults                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOculusFindSessionsCallbackProxy*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOculusFindSessionsCallbackProxy* UOculusFindSessionsCallbackProxy::FindModeratedSessions(int32 MaxResults)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusFindSessionsCallbackProxy", "FindModeratedSessions");

	Params::UOculusFindSessionsCallbackProxy_FindModeratedSessions_Params Parms{};

	Parms.MaxResults = MaxResults;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemOculus.OculusFindSessionsCallbackProxy.FindMatchmakingSessions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              MaxResults                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OculusMatchmakingPool                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOculusFindSessionsCallbackProxy*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOculusFindSessionsCallbackProxy* UOculusFindSessionsCallbackProxy::FindMatchmakingSessions(int32 MaxResults, const class FString& OculusMatchmakingPool)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusFindSessionsCallbackProxy", "FindMatchmakingSessions");

	Params::UOculusFindSessionsCallbackProxy_FindMatchmakingSessions_Params Parms{};

	Parms.MaxResults = MaxResults;
	Parms.OculusMatchmakingPool = OculusMatchmakingPool;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemOculus.OculusIdentityCallbackProxy
// (None)

class UClass* UOculusIdentityCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OculusIdentityCallbackProxy");

	return Clss;
}


// OculusIdentityCallbackProxy OnlineSubsystemOculus.Default__OculusIdentityCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UOculusIdentityCallbackProxy* UOculusIdentityCallbackProxy::GetDefaultObj()
{
	static class UOculusIdentityCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UOculusIdentityCallbackProxy*>(UOculusIdentityCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemOculus.OculusIdentityCallbackProxy.GetOculusIdentity
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOculusIdentityCallbackProxy*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOculusIdentityCallbackProxy* UOculusIdentityCallbackProxy::GetOculusIdentity(int32 LocalUserNum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusIdentityCallbackProxy", "GetOculusIdentity");

	Params::UOculusIdentityCallbackProxy_GetOculusIdentity_Params Parms{};

	Parms.LocalUserNum = LocalUserNum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemOculus.OculusNetConnection
// (None)

class UClass* UOculusNetConnection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OculusNetConnection");

	return Clss;
}


// OculusNetConnection OnlineSubsystemOculus.Default__OculusNetConnection
// (Public, ClassDefaultObject, ArchetypeObject)

class UOculusNetConnection* UOculusNetConnection::GetDefaultObj()
{
	static class UOculusNetConnection* Default = nullptr;

	if (!Default)
		Default = static_cast<UOculusNetConnection*>(UOculusNetConnection::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemOculus.OculusNetDriver
// (None)

class UClass* UOculusNetDriver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OculusNetDriver");

	return Clss;
}


// OculusNetDriver OnlineSubsystemOculus.Default__OculusNetDriver
// (Public, ClassDefaultObject, ArchetypeObject)

class UOculusNetDriver* UOculusNetDriver::GetDefaultObj()
{
	static class UOculusNetDriver* Default = nullptr;

	if (!Default)
		Default = static_cast<UOculusNetDriver*>(UOculusNetDriver::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemOculus.OculusUpdateSessionCallbackProxy
// (None)

class UClass* UOculusUpdateSessionCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OculusUpdateSessionCallbackProxy");

	return Clss;
}


// OculusUpdateSessionCallbackProxy OnlineSubsystemOculus.Default__OculusUpdateSessionCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UOculusUpdateSessionCallbackProxy* UOculusUpdateSessionCallbackProxy::GetDefaultObj()
{
	static class UOculusUpdateSessionCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UOculusUpdateSessionCallbackProxy*>(UOculusUpdateSessionCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemOculus.OculusUpdateSessionCallbackProxy.SetSessionEnqueue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bShouldEnqueueInMatchmakingPool                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOculusUpdateSessionCallbackProxy*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOculusUpdateSessionCallbackProxy* UOculusUpdateSessionCallbackProxy::SetSessionEnqueue(bool bShouldEnqueueInMatchmakingPool)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusUpdateSessionCallbackProxy", "SetSessionEnqueue");

	Params::UOculusUpdateSessionCallbackProxy_SetSessionEnqueue_Params Parms{};

	Parms.bShouldEnqueueInMatchmakingPool = bShouldEnqueueInMatchmakingPool;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


