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

// 0x8 (0x30 - 0x28)
// Class DeltaFileSystem.DeltaFileSaveHandlerTestContext
class UDeltaFileSaveHandlerTestContext : public UObject
{
public:
	class UDeltaFileSaveHandler*                 SaveHandler;                                       // 0x28(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DeltaFileSaveHandlerTestContext");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class DeltaFileSystem.DeltaFile
class UDeltaFile : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DeltaFile");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class DeltaFileSystem.DeltaFileApplier
class UDeltaFileApplier : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DeltaFileApplier");
		return Clss;
	}

};

// 0x10 (0xB0 - 0xA0)
// Class DeltaFileSystem.DeltaComponent
class UDeltaComponent : public UActorComponent
{
public:
	uint8                                        Pad_12CF[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DeltaComponent");
		return Clss;
	}

};

// 0xA8 (0xD0 - 0x28)
// Class DeltaFileSystem.DeltaFileSaveHandler
class UDeltaFileSaveHandler : public UObject
{
public:
	uint8                                        Pad_12D0[0xA8];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DeltaFileSaveHandler");
		return Clss;
	}

};

// 0xB8 (0xE8 - 0x30)
// Class DeltaFileSystem.DeltaFileSubsystem
class UDeltaFileSubsystem : public UEngineSubsystem
{
public:
	TMap<class UWorld*, struct FDeltaTrackingHandles> WorldToTrackingHandles;                            // 0x30(0x50)(Transient, NativeAccessSpecifierPrivate)
	TMap<class FName, class UObject*>            DeltaFiles;                                        // 0x80(0x50)(Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSoftClassPath                        DefaultDeltaFileClass;                             // 0xD0(0x18)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DeltaFileSubsystem");
		return Clss;
	}

};

// 0xC8 (0xF0 - 0x28)
// Class DeltaFileSystem.MapDelta
class UMapDelta : public UObject
{
public:
	uint8                                        Pad_12D1[0x8];                                     // Fixing Size After Last Property..
	class FString                                PackageToApplyTo;                                  // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FGuid, struct FAddAction>        AddActions;                                        // 0x40(0x50)(NativeAccessSpecifierPublic)
	TArray<struct FUpdateAction>                 UpdateActions;                                     // 0x90(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FGuid, struct FDeleteAction>     DeleteActions;                                     // 0xA0(0x50)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MapDelta");
		return Clss;
	}

};

// 0xC8 (0xF0 - 0x28)
// Class DeltaFileSystem.MapDeltaApplier
class UMapDeltaApplier : public UObject
{
public:
	uint8                                        Pad_12D2[0xC8];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MapDeltaApplier");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
