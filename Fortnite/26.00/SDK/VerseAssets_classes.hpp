#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x80 - 0x30)
// Class VerseAssets.VerseAssetPtr
class UVerseAssetPtr : public UVerseAsset
{
public:
	TSoftObjectPtr<class UObject>                AssetForEditor;                                    // 0x30(0x20)(Edit, SaveGame, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AssetPathName;                                     // 0x50(0x4)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A3C[0x4];                                     // Fixing Size After Last Property 
	class UObject*                               Object;                                            // 0x58(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A3D[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UVerseAssetPtr* GetDefaultObj();

	void OnRep_AssetPathName();
};

}


