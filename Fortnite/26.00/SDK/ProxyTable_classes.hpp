#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class ProxyTable.ChooserParameterProxyTable
class UChooserParameterProxyTable : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UChooserParameterProxyTable* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class ProxyTable.ProxyAsset
class UProxyAsset : public UObject
{
public:
	uint8                                        Pad_27B1[0x20];                                    // Fixing Size After Last Property 
	TSubclassOf<class UObject>                   Type;                                              // 0x48(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EObjectChooserResultType          ResultType;                                        // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27B3[0x4];                                     // Fixing Size After Last Property 
	TArray<struct FInstancedStruct>              ContextData;                                       // 0x58(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FInstancedStruct                      ProxyTable;                                        // 0x68(0x10)(Edit, NativeAccessSpecifierPublic)
	struct FGuid                                 Guid;                                              // 0x78(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UProxyAsset* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class ProxyTable.ProxyTable
class UProxyTable : public UObject
{
public:
	TArray<struct FGuid>                         Keys;                                              // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRuntimeProxyValue>            RuntimeValues;                                     // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UProxyTable* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ProxyTable.ProxyTableFunctionLibrary
class UProxyTableFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UProxyTableFunctionLibrary* GetDefaultObj();

	struct FInstancedStruct MakeLookupProxyWithOverrideTable(class UProxyAsset* Proxy, class UProxyTable* ProxyTable);
	struct FInstancedStruct MakeLookupProxy(class UProxyAsset* Proxy);
	class UObject* EvaluateProxyTable(class UObject* ContextObject, class UProxyTable* ProxyTable, class FName Key);
	class UObject* EvaluateProxyAsset(class UObject* ContextObject, class UProxyAsset* Proxy, TSubclassOf<class UObject> ObjectClass);
};

}


