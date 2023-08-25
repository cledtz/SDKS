#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// Class WorldConditions.WorldConditionSchema
class UWorldConditionSchema : public UObject
{
public:
	TArray<struct FWorldConditionContextDataDesc> ContextDataDescs;                                  // 0x28(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UWorldConditionSchema* GetDefaultObj();

};

}


