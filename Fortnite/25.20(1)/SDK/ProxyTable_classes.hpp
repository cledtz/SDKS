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
// Class ProxyTable.ChooserParameterProxyTable
class UChooserParameterProxyTable : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ChooserParameterProxyTable");
		return Clss;
	}

};

// 0x58 (0x80 - 0x28)
// Class ProxyTable.ProxyAsset
class UProxyAsset : public UObject
{
public:
	uint8                                        Pad_4786[0x20];                                    // Fixing Size After Last Property..
	TSubclassOf<class UObject>                   Type;                                              // 0x48(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FInstancedStruct>              ContextData;                                       // 0x50(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FInstancedStruct                      ProxyTable;                                        // 0x60(0x10)(Edit, NativeAccessSpecifierPublic)
	struct FGuid                                 Guid;                                              // 0x70(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProxyAsset");
		return Clss;
	}

};

// 0x20 (0x48 - 0x28)
// Class ProxyTable.ProxyTable
class UProxyTable : public UObject
{
public:
	TArray<struct FGuid>                         Keys;                                              // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FInstancedStructContainer             Values;                                            // 0x38(0x10)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProxyTable");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class ProxyTable.ProxyTableFunctionLibrary
class UProxyTableFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProxyTableFunctionLibrary");
		return Clss;
	}

	class UObject* EvaluateProxyTable(class UObject* ContextObject, class UProxyTable* ProxyTable, class FName Key);
	class UObject* EvaluateProxyAsset(class UObject* ContextObject, class UProxyAsset* Proxy, TSubclassOf<class UObject> ObjectClass);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
