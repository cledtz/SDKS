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

// 0x88 (0x700 - 0x678)
// Class CollectionMapShared.AthenaCollectionScreenMapBase
class UAthenaCollectionScreenMapBase : public UAthenaCollectionScreenBase
{
public:
	class UAthenaFullScreenMapBase*              MapWidget;                                         // 0x678(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UAthenaMapCollectionIcon>  CollectionIconType;                                // 0x680(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<struct FGameplayTag, class UAthenaMapCollectionIcon*> MapCollectionIcons;                                // 0x688(0x50)(ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7F82[0x28];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaCollectionScreenMapBase");
		return Clss;
	}

};

// 0x0 (0x370 - 0x370)
// Class CollectionMapShared.AthenaMapCollectionIcon
class UAthenaMapCollectionIcon : public UAthenaMapNavigableIconCustom
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaMapCollectionIcon");
		return Clss;
	}

	void SetSecondaryIcon(TSoftObjectPtr<class UObject>& SecondaryIcon);
	void SetIsKnown(bool bIsKnown);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
