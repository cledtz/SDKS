#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x38 - 0x30)
// Class DataContainer.DataContainerAsset
class UDataContainerAsset : public UDataAsset
{
public:
	class UDataContainerValue_DataObject*        Data;                                              // 0x30(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDataContainerAsset* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class DataContainer.DataContainerValue_Base
class UDataContainerValue_Base : public UObject
{
public:
	class FString                                OptionalData;                                      // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DataType;                                          // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                Tooltip;                                           // 0x40(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UDataContainerValue_Base* GetDefaultObj();

	class UDataContainerValue_Base* FindDataContainerValue(const class FString& TagPath);
};

// 0x50 (0xA0 - 0x50)
// Class DataContainer.DataContainerValue_DataObject
class UDataContainerValue_DataObject : public UDataContainerValue_Base
{
public:
	TMap<class FName, class UDataContainerValue_Base*> Values;                                            // 0x50(0x50)(Edit, BlueprintVisible, ExportObject, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDataContainerValue_DataObject* GetDefaultObj();

};

// 0x10 (0x60 - 0x50)
// Class DataContainer.DataContainerValue_DataObjectArray
class UDataContainerValue_DataObjectArray : public UDataContainerValue_Base
{
public:
	TArray<class UDataContainerValue_DataObject*> Data;                                              // 0x50(0x10)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, ExposeOnSpawn, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDataContainerValue_DataObjectArray* GetDefaultObj();

};

// 0x8 (0x58 - 0x50)
// Class DataContainer.DataContainerValue_Bool
class UDataContainerValue_Bool : public UDataContainerValue_Base
{
public:
	bool                                         Data;                                              // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_115A[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UDataContainerValue_Bool* GetDefaultObj();

};

// 0x10 (0x60 - 0x50)
// Class DataContainer.DataContainerValue_BoolArray
class UDataContainerValue_BoolArray : public UDataContainerValue_Base
{
public:
	TArray<bool>                                 Data;                                              // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDataContainerValue_BoolArray* GetDefaultObj();

};

// 0x8 (0x58 - 0x50)
// Class DataContainer.DataContainerValue_Int32
class UDataContainerValue_Int32 : public UDataContainerValue_Base
{
public:
	int32                                        Data;                                              // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_115F[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UDataContainerValue_Int32* GetDefaultObj();

};

// 0x10 (0x60 - 0x50)
// Class DataContainer.DataContainerValue_Int32Array
class UDataContainerValue_Int32Array : public UDataContainerValue_Base
{
public:
	TArray<int32>                                Data;                                              // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDataContainerValue_Int32Array* GetDefaultObj();

};

// 0x8 (0x58 - 0x50)
// Class DataContainer.DataContainerValue_Float
class UDataContainerValue_Float : public UDataContainerValue_Base
{
public:
	float                                        Data;                                              // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1162[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UDataContainerValue_Float* GetDefaultObj();

};

// 0x10 (0x60 - 0x50)
// Class DataContainer.DataContainerValue_FloatArray
class UDataContainerValue_FloatArray : public UDataContainerValue_Base
{
public:
	TArray<float>                                Data;                                              // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDataContainerValue_FloatArray* GetDefaultObj();

};

// 0x8 (0x58 - 0x50)
// Class DataContainer.DataContainerValue_Uint8
class UDataContainerValue_Uint8 : public UDataContainerValue_Base
{
public:
	uint8                                        Data;                                              // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1169[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UDataContainerValue_Uint8* GetDefaultObj();

};

// 0x10 (0x60 - 0x50)
// Class DataContainer.DataContainerValue_Uint8Array
class UDataContainerValue_Uint8Array : public UDataContainerValue_Base
{
public:
	TArray<uint8>                                Data;                                              // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDataContainerValue_Uint8Array* GetDefaultObj();

};

// 0x10 (0x60 - 0x50)
// Class DataContainer.DataContainerValue_FString
class UDataContainerValue_FString : public UDataContainerValue_Base
{
public:
	class FString                                Data;                                              // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDataContainerValue_FString* GetDefaultObj();

};

// 0x10 (0x60 - 0x50)
// Class DataContainer.DataContainerValue_FStringArray
class UDataContainerValue_FStringArray : public UDataContainerValue_Base
{
public:
	TArray<class FString>                        Data;                                              // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDataContainerValue_FStringArray* GetDefaultObj();

};

// 0x18 (0x68 - 0x50)
// Class DataContainer.DataContainerValue_FText
class UDataContainerValue_FText : public UDataContainerValue_Base
{
public:
	class FText                                  Data;                                              // 0x50(0x18)(Edit, BlueprintVisible, ExposeOnSpawn, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDataContainerValue_FText* GetDefaultObj();

};

// 0x10 (0x60 - 0x50)
// Class DataContainer.DataContainerValue_FTextArray
class UDataContainerValue_FTextArray : public UDataContainerValue_Base
{
public:
	TArray<class FText>                          Data;                                              // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDataContainerValue_FTextArray* GetDefaultObj();

};

// 0x18 (0x68 - 0x50)
// Class DataContainer.DataContainerValue_FVector
class UDataContainerValue_FVector : public UDataContainerValue_Base
{
public:
	struct FVector                               Data;                                              // 0x50(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDataContainerValue_FVector* GetDefaultObj();

};

// 0x10 (0x60 - 0x50)
// Class DataContainer.DataContainerValue_FVectorArray
class UDataContainerValue_FVectorArray : public UDataContainerValue_Base
{
public:
	TArray<struct FVector>                       Data;                                              // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDataContainerValue_FVectorArray* GetDefaultObj();

};

// 0x8 (0x58 - 0x50)
// Class DataContainer.DataContainerValue_UObject
class UDataContainerValue_UObject : public UDataContainerValue_Base
{
public:
	class UObject*                               Data;                                              // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDataContainerValue_UObject* GetDefaultObj();

};

// 0x10 (0x60 - 0x50)
// Class DataContainer.DataContainerValue_UObjectArray
class UDataContainerValue_UObjectArray : public UDataContainerValue_Base
{
public:
	TArray<class UObject*>                       Data;                                              // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDataContainerValue_UObjectArray* GetDefaultObj();

};

// 0x30 (0x80 - 0x50)
// Class DataContainer.DataContainerValue_TSoftObjectPtr
class UDataContainerValue_TSoftObjectPtr : public UDataContainerValue_Base
{
public:
	TSoftObjectPtr<class UObject>                Data;                                              // 0x50(0x30)(Edit, BlueprintVisible, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDataContainerValue_TSoftObjectPtr* GetDefaultObj();

};

// 0x10 (0x60 - 0x50)
// Class DataContainer.DataContainerValue_TSoftObjectPtrArray
class UDataContainerValue_TSoftObjectPtrArray : public UDataContainerValue_Base
{
public:
	TArray<TSoftObjectPtr<class UObject>>        Data;                                              // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDataContainerValue_TSoftObjectPtrArray* GetDefaultObj();

};

// 0x8 (0x58 - 0x50)
// Class DataContainer.DataContainerValue_UClass
class UDataContainerValue_UClass : public UDataContainerValue_Base
{
public:
	class UClass*                                Data;                                              // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDataContainerValue_UClass* GetDefaultObj();

};

// 0x10 (0x60 - 0x50)
// Class DataContainer.DataContainerValue_UClassArray
class UDataContainerValue_UClassArray : public UDataContainerValue_Base
{
public:
	TArray<class UClass*>                        Data;                                              // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDataContainerValue_UClassArray* GetDefaultObj();

};

// 0x30 (0x80 - 0x50)
// Class DataContainer.DataContainerValue_TSoftClassPtr
class UDataContainerValue_TSoftClassPtr : public UDataContainerValue_Base
{
public:
	TSoftClassPtr<class UClass>                  Data;                                              // 0x50(0x30)(Edit, BlueprintVisible, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDataContainerValue_TSoftClassPtr* GetDefaultObj();

};

// 0x10 (0x60 - 0x50)
// Class DataContainer.DataContainerValue_TSoftClassPtrArray
class UDataContainerValue_TSoftClassPtrArray : public UDataContainerValue_Base
{
public:
	TArray<TSoftClassPtr<class UClass>>          Data;                                              // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDataContainerValue_TSoftClassPtrArray* GetDefaultObj();

};

// 0x8 (0x58 - 0x50)
// Class DataContainer.DataContainerValue_DataTable
class UDataContainerValue_DataTable : public UDataContainerValue_Base
{
public:
	class UDataTable*                            Data;                                              // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDataContainerValue_DataTable* GetDefaultObj();

};

// 0x10 (0x60 - 0x50)
// Class DataContainer.DataContainerValue_DataTableArray
class UDataContainerValue_DataTableArray : public UDataContainerValue_Base
{
public:
	TArray<class UDataTable*>                    Data;                                              // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDataContainerValue_DataTableArray* GetDefaultObj();

};

}


