#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x88 - 0x28)
// Class MemoryUsageQueries.MemoryUsageQueriesConfig
class UMemoryUsageQueriesConfig : public UObject
{
public:
	TArray<struct FCollectionInfo>               Collections;                                       // 0x28(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           SavingsPresets;                                    // 0x38(0x50)(Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMemoryUsageQueriesConfig* GetDefaultObj();

};

}


