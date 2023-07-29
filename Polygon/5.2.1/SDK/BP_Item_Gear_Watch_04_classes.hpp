#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x320 - 0x310)
// BlueprintGeneratedClass BP_Item_Gear_Watch_04.BP_Item_Gear_Watch_04_C
class UBP_Item_Gear_Watch_04_C : public UItem_Watch_General
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Bezel;                                             // 0x318(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_Item_Gear_Watch_04_C");
		return Clss;
	}

	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SetCorrectiveFovMaterial(bool UseFovMaterial);
	void ExecuteUbergraph_BP_Item_Gear_Watch_04(int32 EntryPoint, class UActor* CallFunc_GetOwner_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, float K2Node_Event_DeltaSeconds, bool K2Node_Event_useFovMaterial, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
