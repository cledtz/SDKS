#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xA8 - 0xA0)
// BlueprintGeneratedClass BP_EventManagerComponent.BP_EventManagerComponent_C
class UBP_EventManagerComponent_C : public UEventManagerComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_EventManagerComponent_C* GetDefaultObj();

	void OnAmmoBoxAction();
	void ExecuteUbergraph_BP_EventManagerComponent(int32 EntryPoint);
};

}


