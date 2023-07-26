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

// 0x18 (0x48 - 0x30)
// Class DataRegistry.DataRegistrySettings
class UDataRegistrySettings : public UDeveloperSettings
{
public:
	TArray<struct FDirectoryPath>                DirectoriesToScan;                                 // 0x30(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	bool                                         bInitializeAllLoadedRegistries;                    // 0x40(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreMissingCookedAssetRegistryData;             // 0x41(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3731[0x6];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DataRegistrySettings");
		return Clss;
	}

};

// 0x90 (0xB8 - 0x28)
// Class DataRegistry.DataRegistry
class UDataRegistry : public UObject
{
public:
	class FName                                  RegistryType;                                      // 0x28(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDataRegistryIdFormat                 IdFormat;                                          // 0x2C(0x4)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UScriptStruct*                         ItemStruct;                                        // 0x30(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, AssetRegistrySearchable, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UDataRegistrySource*>           DataSources;                                       // 0x38(0x10)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UDataRegistrySource*>           RuntimeSources;                                    // 0x48(0x10)(Edit, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	float                                        TimerUpdateFrequency;                              // 0x58(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDataRegistryCachePolicy              DefaultCachePolicy;                                // 0x5C(0x14)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_3732[0x48];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DataRegistry");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class DataRegistry.DataRegistrySource
class UDataRegistrySource : public UObject
{
public:
	uint8                                        Pad_3733[0x8];                                     // Fixing Size After Last Property..
	class UDataRegistrySource*                   ParentSource;                                      // 0x30(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DataRegistrySource");
		return Clss;
	}

};

// 0xD0 (0x108 - 0x38)
// Class DataRegistry.MetaDataRegistrySource
class UMetaDataRegistrySource : public UDataRegistrySource
{
public:
	enum class EMetaDataRegistrySourceAssetUsage AssetUsage;                                        // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3734[0x7];                                     // Fixing Size After Last Property..
	struct FAssetManagerSearchRules              SearchRules;                                       // 0x40(0x50)(Edit, NativeAccessSpecifierPublic)
	TMap<class FName, class UDataRegistrySource*> RuntimeChildren;                                   // 0x90(0x50)(ExportObject, Transient, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_3735[0x28];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MetaDataRegistrySource");
		return Clss;
	}

};

// 0x68 (0xA0 - 0x38)
// Class DataRegistry.DataRegistrySource_CurveTable
class UDataRegistrySource_CurveTable : public UDataRegistrySource
{
public:
	TSoftObjectPtr<class UCurveTable>            SourceTable;                                       // 0x38(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataRegistrySource_DataTableRules    TableRules;                                        // 0x60(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	class UCurveTable*                           CachedTable;                                       // 0x68(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveTable*                           PreloadTable;                                      // 0x70(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3736[0x28];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DataRegistrySource_CurveTable");
		return Clss;
	}

};

// 0x10 (0x118 - 0x108)
// Class DataRegistry.MetaDataRegistrySource_CurveTable
class UMetaDataRegistrySource_CurveTable : public UMetaDataRegistrySource
{
public:
	TSubclassOf<class UDataRegistrySource_CurveTable> CreatedSource;                                     // 0x108(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataRegistrySource_DataTableRules    TableRules;                                        // 0x110(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MetaDataRegistrySource_CurveTable");
		return Clss;
	}

};

// 0x68 (0xA0 - 0x38)
// Class DataRegistry.DataRegistrySource_DataTable
class UDataRegistrySource_DataTable : public UDataRegistrySource
{
public:
	TSoftObjectPtr<class UDataTable>             SourceTable;                                       // 0x38(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataRegistrySource_DataTableRules    TableRules;                                        // 0x60(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	class UDataTable*                            CachedTable;                                       // 0x68(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDataTable*                            PreloadTable;                                      // 0x70(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3737[0x28];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DataRegistrySource_DataTable");
		return Clss;
	}

};

// 0x10 (0x118 - 0x108)
// Class DataRegistry.MetaDataRegistrySource_DataTable
class UMetaDataRegistrySource_DataTable : public UMetaDataRegistrySource
{
public:
	TSubclassOf<class UDataRegistrySource_DataTable> CreatedSource;                                     // 0x108(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataRegistrySource_DataTableRules    TableRules;                                        // 0x110(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MetaDataRegistrySource_DataTable");
		return Clss;
	}

};

// 0x98 (0xC8 - 0x30)
// Class DataRegistry.DataRegistrySubsystem
class UDataRegistrySubsystem : public UEngineSubsystem
{
public:
	uint8                                        Pad_3744[0x98];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DataRegistrySubsystem");
		return Clss;
	}

	bool NotEqual_DataRegistryType(const struct FDataRegistryType& A, const struct FDataRegistryType& B);
	bool NotEqual_DataRegistryId(const struct FDataRegistryId& A, const struct FDataRegistryId& B);
	bool IsValidDataRegistryType(const struct FDataRegistryType& DataRegistryType);
	bool IsValidDataRegistryId(const struct FDataRegistryId& DataRegistryId);
	bool GetCachedItemFromLookupBP(const struct FDataRegistryId& ItemId, struct FDataRegistryLookup& ResolvedLookup, struct FTableRowBase* OutItem);
	bool GetCachedItemBP(const struct FDataRegistryId& ItemId, struct FTableRowBase& OutItem);
	void FindCachedItemBP(const struct FDataRegistryId& ItemId, enum class EDataRegistrySubsystemGetItemResult* OutResult, struct FTableRowBase* OutItem);
	void EvaluateDataRegistryCurve(const struct FDataRegistryId& ItemId, float InputValue, float DefaultValue, enum class EDataRegistrySubsystemGetItemResult* OutResult, float* OutValue);
	bool EqualEqual_DataRegistryType(const struct FDataRegistryType& A, const struct FDataRegistryType& B);
	bool EqualEqual_DataRegistryId(const struct FDataRegistryId& A, const struct FDataRegistryId& B);
	class FString Conv_DataRegistryTypeToString(const struct FDataRegistryType& DataRegistryType);
	class FString Conv_DataRegistryIdToString(const struct FDataRegistryId& DataRegistryId);
	bool AcquireItemBP(const struct FDataRegistryId& ItemId, FDelegateProperty_ AcquireCallback);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
