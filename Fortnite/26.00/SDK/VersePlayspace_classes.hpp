#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xA8 - 0xA0)
// Class VersePlayspace.PlayspaceComponentVerseWrapper
class UPlayspaceComponentVerseWrapper : public UPlayspaceComponent
{
public:
	uint8                                        Pad_2CCC[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UPlayspaceComponentVerseWrapper* GetDefaultObj();

};

// 0x20 (0xC0 - 0xA0)
// Class VersePlayspace.PlayspaceConfigComponent
class UPlayspaceConfigComponent : public UPlayspaceComponent
{
public:
	TSubclassOf<class UEntityActorPlayerComponent> PlayerComponentClass;                              // 0xA0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2CD2[0x18];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UPlayspaceConfigComponent* GetDefaultObj();

};

}


