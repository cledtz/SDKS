#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x68 - 0x68)
// Class LiveEditObject.LiveEditNetworkStreamChannel
class ULiveEditNetworkStreamChannel : public UChannel
{
public:

	static class UClass* StaticClass();
	static class ULiveEditNetworkStreamChannel* GetDefaultObj();

};

// 0x48 (0xB0 - 0x68)
// Class LiveEditObject.LiveEditLargeNetworkMessageChannel
class ULiveEditLargeNetworkMessageChannel : public ULiveEditNetworkStreamChannel
{
public:
	uint8                                        Pad_225E[0x48];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class ULiveEditLargeNetworkMessageChannel* GetDefaultObj();

};

// 0xF8 (0x1A8 - 0xB0)
// Class LiveEditObject.LiveEditObjectChannel
class ULiveEditObjectChannel : public ULiveEditLargeNetworkMessageChannel
{
public:
	uint8                                        Pad_2262[0xF8];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class ULiveEditObjectChannel* GetDefaultObj();

};

// 0x378 (0x3A0 - 0x28)
// Class LiveEditObject.LiveEditObjectConnection
class ULiveEditObjectConnection : public UObject
{
public:
	uint8                                        Pad_2264[0x378];                                   // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class ULiveEditObjectConnection* GetDefaultObj();

};

// 0x250 (0x278 - 0x28)
// Class LiveEditObject.LiveEditObjectSubsystemState
class ULiveEditObjectSubsystemState : public UObject
{
public:
	uint8                                        Pad_2267[0x10];                                    // Fixing Size After Last Property 
	TArray<class ULiveEditObjectConnection*>     Connections;                                       // 0x38(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_2268[0x230];                                   // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class ULiveEditObjectSubsystemState* GetDefaultObj();

};

// 0x148 (0x178 - 0x30)
// Class LiveEditObject.LiveEditObjectSubsystem
class ULiveEditObjectSubsystem : public UEngineSubsystem
{
public:
	uint8                                        Pad_226C[0x8];                                     // Fixing Size After Last Property 
	int32                                        MaxBytesQueuedForReplication;                      // 0x38(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        NumPackageMapBunchesToDelayTickFor;                // 0x3C(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class ULiveEditObjectSubsystemState*> NetDriverStates;                                   // 0x40(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_226F[0x128];                                   // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class ULiveEditObjectSubsystem* GetDefaultObj();

};

// 0x158 (0x180 - 0x28)
// Class LiveEditObject.LiveEditObjectTestObject
class ULiveEditObjectTestObject : public UObject
{
public:
	int32                                        Int32[0x3];                                        // 0x28(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2271[0x4];                                     // Fixing Size After Last Property 
	struct FLiveEditObjectTestStruct             StructProperty;                                    // 0x38(0x148)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ULiveEditObjectTestObject* GetDefaultObj();

};

}


