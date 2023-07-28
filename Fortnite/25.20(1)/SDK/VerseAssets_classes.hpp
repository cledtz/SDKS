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

// 0x60 (0x90 - 0x30)
// Class VerseAssets.VerseAssetPtr
class UVerseAssetPtr : public UVerseAsset
{
public:
	TSoftObjectPtr<class UObject>                AssetForEditor;                                    // 0x30(0x28)(Edit, SaveGame, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AssetPathName;                                     // 0x58(0x4)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7A20[0x4];                                     // Fixing Size After Last Property..
	class UObject*                               Object;                                            // 0x60(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7A21[0x28];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseAssetPtr");
		return Clss;
	}

	void OnRep_AssetPathName();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
