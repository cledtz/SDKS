#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x6B8 - 0x630)
// Class CollectionMapShared.AthenaCollectionScreenMapBase
class UAthenaCollectionScreenMapBase : public UAthenaCollectionScreenBase
{
public:
	class UAthenaFullScreenMapBase*              MapWidget;                                         // 0x630(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UAthenaMapCollectionIcon>  CollectionIconType;                                // 0x638(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<struct FGameplayTag, class UAthenaMapCollectionIcon*> MapCollectionIcons;                                // 0x640(0x50)(ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3BAB[0x28];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAthenaCollectionScreenMapBase* GetDefaultObj();

};

// 0x0 (0x370 - 0x370)
// Class CollectionMapShared.AthenaMapCollectionIcon
class UAthenaMapCollectionIcon : public UAthenaMapNavigableIconCustom
{
public:

	static class UClass* StaticClass();
	static class UAthenaMapCollectionIcon* GetDefaultObj();

	void SetSecondaryIcon(TSoftObjectPtr<class UObject>& SecondaryIcon);
	void SetIsKnown(bool bIsKnown);
};

}


