#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x328 - 0x310)
// BlueprintGeneratedClass BP_Item_Gear_Watch_08.BP_Item_Gear_Watch_08_C
class UBP_Item_Gear_Watch_08_C : public UItem_Watch_General
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Hour;                                              // 0x318(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Minute;                                            // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Item_Gear_Watch_08_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void Watch();
	void SetCorrectiveFovMaterial(bool UseFovMaterial);
	void ExecuteUbergraph_BP_Item_Gear_Watch_08(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool K2Node_Event_useFovMaterial);
};

}


