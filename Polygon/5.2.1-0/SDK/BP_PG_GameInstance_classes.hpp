#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x1D8 - 0x1D0)
// BlueprintGeneratedClass BP_PG_GameInstance.BP_PG_GameInstance_C
class UBP_PG_GameInstance_C : public UPG_GameInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_PG_GameInstance_C* GetDefaultObj();

	void ReceiveInit();
	void ExecuteUbergraph_BP_PG_GameInstance(int32 EntryPoint);
};

}


