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

// 0x30 (0x90 - 0x60)
// Class VerseNPC.InventoryComponentBase
class UInventoryComponentBase : public UEntityComponent
{
public:
	uint8                                        Pad_7E66[0x18];                                    // Fixing Size After Last Property..
	class AFortInventory*                        CachedFortInventory;                               // 0x78(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AFortPawn*                             CachedFortPawn;                                    // 0x80(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBlackboardComponent*                  CachedBlackboardComponent;                         // 0x88(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("InventoryComponentBase");
		return Clss;
	}

};

// 0x0 (0x98 - 0x98)
// Class VerseNPC.LeashComponentBase
class ULeashComponentBase : public UAIComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LeashComponentBase");
		return Clss;
	}

};

// 0x10 (0xA8 - 0x98)
// Class VerseNPC.NPCPerceptionComponentBase
class UNPCPerceptionComponentBase : public UAIComponent
{
public:
	uint8                                        Pad_7E67[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NPCPerceptionComponentBase");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
