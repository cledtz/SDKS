#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x770 - 0x700)
// Class CharacterCollectionMapScreen.AthenaCollectionScreenMapCharacter
class UAthenaCollectionScreenMapCharacter : public UAthenaCollectionScreenMapBase
{
public:
	struct FCollectionScreenServiceData          SharedServiceData;                                 // 0x700(0x70)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaCollectionScreenMapCharacter");
		return Clss;
	}

};

// 0x10 (0x2B8 - 0x2A8)
// Class CharacterCollectionMapScreen.CollectionNPCServiceContainer
class UCollectionNPCServiceContainer : public UUserWidget
{
public:
	class UDynamicEntryBox*                      EntryBox_ServiceGroups;                            // 0x2A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxGroupSize;                                      // 0x2B0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_85F[0x4];                                      // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CollectionNPCServiceContainer");
		return Clss;
	}

};

// 0x8 (0x2B0 - 0x2A8)
// Class CharacterCollectionMapScreen.CollectionNPCServiceGroup
class UCollectionNPCServiceGroup : public UUserWidget
{
public:
	class UDynamicEntryBox*                      EntryBox_Services;                                 // 0x2A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CollectionNPCServiceGroup");
		return Clss;
	}

};

// 0xA8 (0x568 - 0x4C0)
// Class CharacterCollectionMapScreen.CollectionNPCServiceInfoOverlay
class UCollectionNPCServiceInfoOverlay : public UAthenaCollectionScreenInfoOverlay
{
public:
	class UCollectionNPCServiceContainer*        Services;                                          // 0x4C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                Image_ServiceIcon;                                 // 0x4C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_867[0x8];                                      // Fixing Size After Last Property
	struct FCollectionScreenServiceData          SharedServiceData;                                 // 0x4D8(0x70)(Transient, NativeAccessSpecifierPrivate)
	TArray<class UDataTable*>                    GameFeatureLootTierData;                           // 0x548(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<class UDataTable*>                    GameFeatureLootPackageData;                        // 0x558(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CollectionNPCServiceInfoOverlay");
		return Clss;
	}

};

// 0x0 (0x2A8 - 0x2A8)
// Class CharacterCollectionMapScreen.CollectionNPCServiceWidget
class UCollectionNPCServiceWidget : public UUserWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CollectionNPCServiceWidget");
		return Clss;
	}

	void PopulateEmpty();
	void PopulateData(struct FNPCServiceWidgetData& WidgetData);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
