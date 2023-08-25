#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x6C0 - 0x6B8)
// Class CharacterCollectionMapScreen.AthenaCollectionScreenMapCharacter
class UAthenaCollectionScreenMapCharacter : public UAthenaCollectionScreenMapBase
{
public:
	class UCollectionScreenServiceVisualData*    SharedServiceVisualData;                           // 0x6B8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAthenaCollectionScreenMapCharacter* GetDefaultObj();

};

// 0x18 (0x4C8 - 0x4B0)
// Class CharacterCollectionMapScreen.CollectionNPCServiceInfoOverlay
class UCollectionNPCServiceInfoOverlay : public UAthenaCollectionScreenInfoOverlay
{
public:
	class UCollectionNPCServiceContainer*        Services;                                          // 0x4B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                Image_ServiceIcon;                                 // 0x4B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCollectionScreenServiceVisualData*    SharedServiceVisualData;                           // 0x4C0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UCollectionNPCServiceInfoOverlay* GetDefaultObj();

};

}


