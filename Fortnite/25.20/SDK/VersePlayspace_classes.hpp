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

// 0x8 (0xA8 - 0xA0)
// Class VersePlayspace.PlayspaceComponentVerseWrapper
class UPlayspaceComponentVerseWrapper : public UPlayspaceComponent
{
public:
	uint8                                        Pad_7A11[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayspaceComponentVerseWrapper");
		return Clss;
	}

};

// 0x20 (0xC0 - 0xA0)
// Class VersePlayspace.PlayspaceConfigComponent
class UPlayspaceConfigComponent : public UPlayspaceComponent
{
public:
	TSubclassOf<class UEntityActorPlayerComponent> PlayerComponentClass;                              // 0xA0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7A12[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayspaceConfigComponent");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
