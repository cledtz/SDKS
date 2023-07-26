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

// 0x10 (0x380 - 0x370)
// BlueprintGeneratedClass GCNL_PurpleStuff.GCNL_PurpleStuff_C
class AGCNL_PurpleStuff_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class APlayerPawn_Athena_Generic_C*          PlayerActor;                                       // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCNL_PurpleStuff_C");
		return Clss;
	}

	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters);
	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class APlayerPawn_Athena_Generic_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic, bool K2Node_DynamicCast_bSuccess);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_GCNL_PurpleStuff(int32 EntryPoint, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetShield_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, float K2Node_Event_DeltaSeconds, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
