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

// 0x90 (0xC0 - 0x30)
// Class VerseMovement.NetPhysicsMoveConfig
class UNetPhysicsMoveConfig : public UDataAsset
{
public:
	TArray<struct FNetPhysicsMoveConfigEntry>    Entries;                                           // 0x30(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FNetPhysicsMoveLimits                 Limits;                                            // 0x40(0x80)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NetPhysicsMoveConfig");
		return Clss;
	}

};

// 0x78 (0x118 - 0xA0)
// Class VerseMovement.NetPhysicsMoveComponent
class UNetPhysicsMoveComponent : public UActorComponent
{
public:
	uint8                                        Pad_7AAB[0x58];                                    // Fixing Size After Last Property..
	class UNetPhysicsMoveConfig*                 MoveConfig;                                        // 0xF8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FNetPhysicsMoveObject                 SimOutput;                                         // 0x100(0x1)(NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7AAC[0x7];                                     // Fixing Size After Last Property..
	class UPlayerController*                     CachedPC;                                          // 0x108(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7AAD[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NetPhysicsMoveComponent");
		return Clss;
	}

};

// 0x0 (0x90 - 0x90)
// Class VerseMovement.VerseMovementComponentBase
class UVerseMovementComponentBase : public UEntityActorComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseMovementComponentBase");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
