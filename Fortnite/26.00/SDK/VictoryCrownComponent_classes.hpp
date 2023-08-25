#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x270 - 0x268)
// BlueprintGeneratedClass VictoryCrownComponent.VictoryCrownComponent_C
class UVictoryCrownComponent_C : public UFortControllerComponent_VictoryCrowns
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x268(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UVictoryCrownComponent_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_VictoryCrownComponent(int32 EntryPoint);
};

}


