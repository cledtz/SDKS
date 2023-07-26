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

// 0x8 (0xF0 - 0xE8)
// Class VerseUI.VersePlayerUIEntityComponent
class UVersePlayerUIEntityComponent : public UEntityActorPlayerComponent
{
public:
	class UUIFrameworkPlayerComponent*           UIFComponent;                                      // 0xE8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VersePlayerUIEntityComponent");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class VerseUI.VerseWidgetNativeBase
class UVerseWidgetNativeBase : public UObject
{
public:
	uint8                                        Pad_3DA2[0x8];                                     // Fixing Size After Last Property..
	class UUIFrameworkWidget*                    UIFWidgetInstance;                                 // 0x30(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseWidgetNativeBase");
		return Clss;
	}

};

// 0xA0 (0xD0 - 0x30)
// Class VerseUI.VerseUIWorldSubsystem
class UVerseUIWorldSubsystem : public UWorldSubsystem
{
public:
	uint8                                        Pad_3DA3[0xA0];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseUIWorldSubsystem");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
