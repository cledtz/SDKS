#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class VerseUI.VerseWidgetViewmodel
class UVerseWidgetViewmodel : public UObject
{
public:

	static class UClass* StaticClass();
	static class UVerseWidgetViewmodel* GetDefaultObj();

};

// 0x8 (0xD8 - 0xD0)
// Class VerseUI.VersePlayerUIEntityComponent
class UVersePlayerUIEntityComponent : public UEntityActorPlayerComponent
{
public:
	class UUIFrameworkPlayerComponent*           UIFComponent;                                      // 0xD0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UVersePlayerUIEntityComponent* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class VerseUI.VerseWidgetNativeBase
class UVerseWidgetNativeBase : public UObject
{
public:
	uint8                                        Pad_2CBD[0x8];                                     // Fixing Size After Last Property 
	class UUIFrameworkWidget*                    UIFWidgetInstance;                                 // 0x30(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UVerseWidgetNativeBase* GetDefaultObj();

};

// 0xA0 (0xD0 - 0x30)
// Class VerseUI.VerseUIWorldSubsystem
class UVerseUIWorldSubsystem : public UWorldSubsystem
{
public:
	uint8                                        Pad_2CC2[0xA0];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UVerseUIWorldSubsystem* GetDefaultObj();

};

}


