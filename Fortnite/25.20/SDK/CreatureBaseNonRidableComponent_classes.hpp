#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1A (0xBA - 0xA0)
// BlueprintGeneratedClass CreatureBaseNonRidableComponent.CreatureBaseNonRidableComponent_C
class UCreatureBaseNonRidableComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       Jump_Attach_Ground_Height_Min;                     // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Jump_Attach_Ground_Height_Buffer;                  // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Uses_Alt_Riding_Message;                           // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         KillOnRideAttempt;                                 // 0xB9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CreatureBaseNonRidableComponent_C");
		return Clss;
	}

	void GetRidingInfoFromTarget(double* JumpAttachGroundHeightMin, double* JumpAttachGroundHeightBuffer, bool* UsesAltRidingMessage);
	void ToggleRidingAlternative();
	void AlternateRidingEvent();
	void ExecuteUbergraph_CreatureBaseNonRidableComponent(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
