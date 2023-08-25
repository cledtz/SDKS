#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x4B8 - 0x4A0)
// BlueprintGeneratedClass GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C
class UGCL_BoostJumpPack_FuelRegen_C : public UGameplayCueNotify_Jetpack_FuelRegen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        FullBlinkTimeline_Blink_108772B949790E60DC9BE1BAC70C2EA1; // 0x4A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                FullBlinkTimeline__Direction_108772B949790E60DC9BE1BAC70C2EA1; // 0x4AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CD4[0x3];                                     // Fixing Size After Last Property 
	class UTimelineComponent*                    FullBlinkTimeline;                                 // 0x4B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGCL_BoostJumpPack_FuelRegen_C* GetDefaultObj();

	void FullBlinkTimeline__FinishedFunc();
	void FullBlinkTimeline__UpdateFunc();
	void ResetBlink(class UFortPlayerPawn* PlayerPawn);
	void ExecuteUbergraph_GCL_BoostJumpPack_FuelRegen(int32 EntryPoint, class UFortPlayerPawn* K2Node_Event_PlayerPawn, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue);
};

}


