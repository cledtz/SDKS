#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class StructUtilsEngine.StructUtilsFunctionLibrary
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


