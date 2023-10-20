#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class StructUtils.PropertyBagMissingObject
class UPropertyBagMissingObject : public UObject
{
public:

	static class UClass* StaticClass();
	static class UPropertyBagMissingObject* GetDefaultObj();

};

// 0x18 (0xD8 - 0xC0)
// Class StructUtils.PropertyBag
class UPropertyBag : public UScriptStruct
{
public:
	TArray<struct FPropertyBagPropertyDesc>      PropertyDescs;                                     // 0xC0(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_A69[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UPropertyBag* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class StructUtils.StructUtilsFunctionLibrary
class UStructUtilsFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UStructUtilsFunctionLibrary* GetDefaultObj();

	void SetInstancedStructValue(struct FInstancedStruct& InstancedStruct, int32& Value);
	void Reset(struct FInstancedStruct& InstancedStruct, class UScriptStruct* StructType);
	bool NotEqual_InstancedStruct(struct FInstancedStruct& A, struct FInstancedStruct& B);
	struct FInstancedStruct MakeInstancedStruct(int32& Value);
	bool IsValid_InstancedStruct(struct FInstancedStruct& InstancedStruct);
	enum class EStructUtilsResult IsInstancedStructValid(struct FInstancedStruct& InstancedStruct);
	void GetInstancedStructValue(enum class EStructUtilsResult* ExecResult, struct FInstancedStruct& InstancedStruct, int32* Value);
	bool EqualEqual_InstancedStruct(struct FInstancedStruct& A, struct FInstancedStruct& B);
};

}


