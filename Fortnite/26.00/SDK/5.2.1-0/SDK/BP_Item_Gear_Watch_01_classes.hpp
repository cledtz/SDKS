#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x330 - 0x310)
// BlueprintGeneratedClass BP_Item_Gear_Watch_01.BP_Item_Gear_Watch_01_C
class UBP_Item_Gear_Watch_01_C : public UItem_Watch_General
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Second;                                            // 0x318(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Minute;                                            // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Hour;                                              // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Item_Gear_Watch_01_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void Watch();
	void ExecuteUbergraph_BP_Item_Gear_Watch_01(int32 EntryPoint, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UActor* CallFunc_GetOwner_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
};

}


