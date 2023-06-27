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

// 0x10 (0xA00 - 0x9F0)
// BlueprintGeneratedClass FrontendCamera_Manage.FrontendCamera_Manage_C
class AFrontendCamera_Manage_C : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                      LoginCamera_0;                                     // 0x9F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FrontendCamera_Manage_C");
		return Clss;
	}

	void BP_OnActivated(class AFortPlayerController* PlayerController);
	void BP_OnDeactivated(class AFortPlayerController* PlayerController);
	void ExecuteUbergraph_FrontendCamera_Manage(int32 EntryPoint, FInterfaceProperty_ CallFunc_GetContextualTimeOfDayManager_ReturnValue, int32 Temp_int_Array_Index_Variable, class AFortPlayerController* K2Node_Event_PlayerController_1, TArray<class ATVPostProcessBP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class UFortGlobalUIContext* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, class ATVPostProcessBP_C* CallFunc_Array_Get_Item, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AFortPlayerController* K2Node_Event_PlayerController, TArray<class AVaultCharacterLightingBP_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, TArray<class AVaultCharacterLightingBP_C*>& CallFunc_GetAllActorsOfClass_OutActors_2, class AVaultCharacterLightingBP_C* CallFunc_Array_Get_Item_1, class AVaultCharacterLightingBP_C* CallFunc_Array_Get_Item_2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
