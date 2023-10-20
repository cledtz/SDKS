#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x60 - 0x28)
// Class OnlineSubsystem.NamedInterfaces
class UNamedInterfaces : public UObject
{
public:
	TArray<struct FNamedInterface>               NamedInterfaces;                                   // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FNamedInterfaceDef>            NamedInterfaceDefs;                                // 0x38(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7A1[0x18];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNamedInterfaces* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class OnlineSubsystem.TurnBasedMatchInterface
class UTurnBasedMatchInterface : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UTurnBasedMatchInterface* GetDefaultObj();

	void OnMatchReceivedTurn(const class FString& Match, bool bDidBecomeActive);
	void OnMatchEnded(const class FString& Match);
};

}


