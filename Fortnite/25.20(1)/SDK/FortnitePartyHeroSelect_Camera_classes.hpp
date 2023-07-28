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

// 0x20 (0xA20 - 0xA00)
// BlueprintGeneratedClass FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C
class UFortnitePartyHeroSelect_Camera_C : public UFortCameraBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA00(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                      CameraActor_0;                                     // 0xA08(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         MouseDown;                                         // 0xA10(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D9C[0x7];                                     // Fixing Size After Last Property..
	class UFortPlayerPawn*                       CachedPawn;                                        // 0xA18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortnitePartyHeroSelect_Camera_C");
		return Clss;
	}

	void HandleMousePress(class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortPlayerPawn* CallFunc_GetHeroPlayerPawnByIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void HandleMouseRelease();
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void BP_OnActivated(class UFortPlayerController* PlayerController);
	void BP_OnDeactivated(class UFortPlayerController* PlayerController);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_FortnitePartyHeroSelect_Camera(int32 EntryPoint, FInterfaceProperty_ CallFunc_GetContextualTimeOfDayManager_ReturnValue, const struct FKey& K2Node_InputKeyEvent_Key_1, const struct FKey& K2Node_InputKeyEvent_Key, const struct FKey& Temp_struct_Variable, int32 Temp_int_Array_Index_Variable, const struct FKey& Temp_struct_Variable_1, class UFortPlayerController* K2Node_Event_PlayerController_1, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UFortPlayerController* K2Node_Event_PlayerController, const struct FKey& K2Node_InputKeyEvent_Key_3, float K2Node_Event_DeltaSeconds, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, float CallFunc_GetInputMouseDelta_DeltaX, float CallFunc_GetInputMouseDelta_DeltaY, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FKey& K2Node_InputKeyEvent_Key_2, bool CallFunc_K2_SetActorRotation_ReturnValue, TArray<class UTVPostProcessBP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class UTVPostProcessBP_C* CallFunc_Array_Get_Item, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
