#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xC8 - 0xA8)
// BlueprintGeneratedClass Task_Menu_CameraSetFOV.Task_Menu_CameraSetFOV_C
class UTask_Menu_CameraSetFOV_C : public UAction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                      Camera_Component;                                  // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	double                                       TargetFOV;                                         // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       InterpSpeed;                                       // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTask_Menu_CameraSetFOV_C* GetDefaultObj();

	void ReceiveActivate();
	void ReceiveTick(float DeltaTime);
	void ExecuteUbergraph_Task_Menu_CameraSetFOV(int32 EntryPoint, float K2Node_Event_DeltaTime, TArray<class UAction*>& K2Node_MakeArray_Array, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UActor* CallFunc_GetViewTarget_ReturnValue, class UCameraActor* K2Node_DynamicCast_AsCamera_Actor, bool K2Node_DynamicCast_bSuccess, double CallFunc_FInterpTo_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, class UActionsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, double CallFunc_FInterpTo_DeltaTime_ImplicitCast, double CallFunc_FInterpTo_Current_ImplicitCast, float CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast);
};

}


