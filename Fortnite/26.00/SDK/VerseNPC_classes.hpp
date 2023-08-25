#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x98 - 0x58)
// Class VerseNPC.InventoryComponentBase
class UInventoryComponentBase : public UEntityComponent
{
public:
	uint8                                        Pad_3562[0x28];                                    // Fixing Size After Last Property 
	class UFortInventory*                        CachedFortInventory;                               // 0x80(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortPawn*                             CachedFortPawn;                                    // 0x88(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBlackboardComponent*                  CachedBlackboardComponent;                         // 0x90(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UInventoryComponentBase* GetDefaultObj();

};

// 0x0 (0x90 - 0x90)
// Class VerseNPC.LeashComponentBase
class ULeashComponentBase : public UAIComponent
{
public:

	static class UClass* StaticClass();
	static class ULeashComponentBase* GetDefaultObj();

};

// 0x10 (0xA0 - 0x90)
// Class VerseNPC.NPCPerceptionComponentBase
class UNPCPerceptionComponentBase : public UAIComponent
{
public:
	uint8                                        Pad_3566[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNPCPerceptionComponentBase* GetDefaultObj();

};

}


