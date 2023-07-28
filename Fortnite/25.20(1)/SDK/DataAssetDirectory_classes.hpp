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

// 0x0 (0x28 - 0x28)
// Class DataAssetDirectory.DataAssetDirectoryPatchableAsset
class UDataAssetDirectoryPatchableAsset : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DataAssetDirectoryPatchableAsset");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class DataAssetDirectory.DataAssetDirectorySimpleObject
class UDataAssetDirectorySimpleObject : public UObject
{
public:
	int32                                        IntProperty;                                       // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D94[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DataAssetDirectorySimpleObject");
		return Clss;
	}

};

// 0x50 (0x78 - 0x28)
// Class DataAssetDirectory.DataAssetDirectoryTestPODAsset
class UDataAssetDirectoryTestPODAsset : public UObject
{
public:
	class FString                                AssetName;                                         // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDataAssetDirectoryTestEnum       EnumProperty;                                      // 0x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D95[0x3];                                     // Fixing Size After Last Property..
	int32                                        IntProperty;                                       // 0x3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatProperty;                                     // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         BoolProperty;                                      // 0x44(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D96[0x3];                                     // Fixing Size After Last Property..
	class FString                                StringProperty;                                    // 0x48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NameProperty;                                      // 0x58(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D97[0x4];                                     // Fixing Size After Last Property..
	class FText                                  TextProperty;                                      // 0x60(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DataAssetDirectoryTestPODAsset");
		return Clss;
	}

};

// 0x40 (0x68 - 0x28)
// Class DataAssetDirectory.DataAssetDirectoryTestStructAsset
class UDataAssetDirectoryTestStructAsset : public UObject
{
public:
	struct FDataAssetDirectoryTestPODStruct      TestStruct;                                        // 0x28(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DataAssetDirectoryTestStructAsset");
		return Clss;
	}

};

// 0x20 (0x48 - 0x28)
// Class DataAssetDirectory.DataAssetDirectoryTestArrayAsset
class UDataAssetDirectoryTestArrayAsset : public UObject
{
public:
	TArray<int32>                                IntArray;                                          // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FDataAssetDirectoryTestSimpleStruct> SimpleStructArray;                                 // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DataAssetDirectoryTestArrayAsset");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class DataAssetDirectory.DataAssetDirectoryTestObjectAsset
class UDataAssetDirectoryTestObjectAsset : public UObject
{
public:
	class UDataAssetDirectorySimpleObject*       SimpleObject;                                      // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DataAssetDirectoryTestObjectAsset");
		return Clss;
	}

};

// 0x140 (0x168 - 0x28)
// Class DataAssetDirectory.DataAssetDirectoryTestMapAsset
class UDataAssetDirectoryTestMapAsset : public UObject
{
public:
	TMap<class FString, int32>                   StringIntMap;                                      // 0x28(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<class FString, int32>                   ShrinkStringIntMap;                                // 0x78(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<class FString, int32>                   GrowStringIntMap;                                  // 0xC8(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<int32, struct FDataAssetDirectoryTestSimpleStruct> IntStructMap;                                      // 0x118(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DataAssetDirectoryTestMapAsset");
		return Clss;
	}

};

// 0x1A8 (0x1D0 - 0x28)
// Class DataAssetDirectory.DataAssetDirectoryManager
class UDataAssetDirectoryManager : public UObject
{
public:
	uint8                                        Pad_3D98[0x178];                                   // Fixing Size After Last Property..
	TArray<class UObject*>                       PatchedAssets;                                     // 0x1A0(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	struct FDateTime                             LastUpdateCheck;                                   // 0x1B0(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint32                                       UpdateCheckLimitSeconds;                           // 0x1B8(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnabled;                                          // 0x1BC(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bFailOnError;                                      // 0x1BD(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAnalyticsEnabled;                                 // 0x1BE(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3D99[0x11];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DataAssetDirectoryManager");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class DataAssetDirectory.DataAssetDirectoryPatcher
class UDataAssetDirectoryPatcher : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DataAssetDirectoryPatcher");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
