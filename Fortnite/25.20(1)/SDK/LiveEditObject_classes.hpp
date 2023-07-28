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

// 0x0 (0x68 - 0x68)
// Class LiveEditObject.LiveEditNetworkStreamChannel
class ULiveEditNetworkStreamChannel : public UChannel
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveEditNetworkStreamChannel");
		return Clss;
	}

};

// 0x48 (0xB0 - 0x68)
// Class LiveEditObject.LiveEditLargeNetworkMessageChannel
class ULiveEditLargeNetworkMessageChannel : public ULiveEditNetworkStreamChannel
{
public:
	uint8                                        Pad_4439[0x48];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveEditLargeNetworkMessageChannel");
		return Clss;
	}

};

// 0xF8 (0x1A8 - 0xB0)
// Class LiveEditObject.LiveEditObjectChannel
class ULiveEditObjectChannel : public ULiveEditLargeNetworkMessageChannel
{
public:
	uint8                                        Pad_443A[0xF8];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveEditObjectChannel");
		return Clss;
	}

};

// 0x378 (0x3A0 - 0x28)
// Class LiveEditObject.LiveEditObjectConnection
class ULiveEditObjectConnection : public UObject
{
public:
	uint8                                        Pad_443B[0x378];                                   // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveEditObjectConnection");
		return Clss;
	}

};

// 0x250 (0x278 - 0x28)
// Class LiveEditObject.LiveEditObjectSubsystemState
class ULiveEditObjectSubsystemState : public UObject
{
public:
	uint8                                        Pad_443C[0x10];                                    // Fixing Size After Last Property..
	TArray<class ULiveEditObjectConnection*>     Connections;                                       // 0x38(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_443D[0x230];                                   // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveEditObjectSubsystemState");
		return Clss;
	}

};

// 0x148 (0x178 - 0x30)
// Class LiveEditObject.LiveEditObjectSubsystem
class ULiveEditObjectSubsystem : public UEngineSubsystem
{
public:
	uint8                                        Pad_443E[0x8];                                     // Fixing Size After Last Property..
	int32                                        MaxBytesQueuedForReplication;                      // 0x38(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        NumPackageMapBunchesToDelayTickFor;                // 0x3C(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class ULiveEditObjectSubsystemState*> NetDriverStates;                                   // 0x40(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_443F[0x128];                                   // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveEditObjectSubsystem");
		return Clss;
	}

};

// 0x158 (0x180 - 0x28)
// Class LiveEditObject.LiveEditObjectTestObject
class ULiveEditObjectTestObject : public UObject
{
public:
	int32                                        Int32[0x3];                                        // 0x28(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4440[0x4];                                     // Fixing Size After Last Property..
	struct FLiveEditObjectTestStruct             StructProperty;                                    // 0x38(0x148)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveEditObjectTestObject");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
