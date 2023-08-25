#pragma once

// Dumped with Dumper-7!


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

	static class UClass* StaticClass();
	static class UNetPhysicsMoveConfig* GetDefaultObj();

};

// 0x78 (0x118 - 0xA0)
// Class VerseMovement.NetPhysicsMoveComponent
class UNetPhysicsMoveComponent : public UActorComponent
{
public:
	uint8                                        Pad_2D24[0x58];                                    // Fixing Size After Last Property 
	class UNetPhysicsMoveConfig*                 MoveConfig;                                        // 0xF8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FNetPhysicsMoveObject                 SimOutput;                                         // 0x100(0x1)(NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2D26[0x7];                                     // Fixing Size After Last Property 
	class UPlayerController*                     CachedPC;                                          // 0x108(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2D27[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNetPhysicsMoveComponent* GetDefaultObj();

};

// 0x0 (0x88 - 0x88)
// Class VerseMovement.VerseMovementComponentBase
class UVerseMovementComponentBase : public UEntityActorComponent
{
public:

	static class UClass* StaticClass();
	static class UVerseMovementComponentBase* GetDefaultObj();

};

}


