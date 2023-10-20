#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x8D0 - 0x880)
// BlueprintGeneratedClass BP_PG_PlayerController_Menu.BP_PG_PlayerController_Menu_C
class UBP_PG_PlayerController_Menu_C : public UPG_PlayerController_Menu
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x880(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UUI_Menu_GeneralMenuScreen_C*          UI_GeneralMenuScreen;                              // 0x888(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_Menu_Character_C*               MenuCharacter;                                     // 0x890(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UUI_ErrorMessage_C*                    UI_ErrorMessage;                                   // 0x898(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UCameraActor*>                  Cameras;                                           // 0x8A0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class UUI_Menu_Squad_Invite_C*               UI_Squad_Invite;                                   // 0x8B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUI_HardLoadingScreen_C*               UI_HardLoadingScreen;                              // 0x8B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUI_SoftLoadingScreen_C*               UI_SoftLoadingScreen;                              // 0x8C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       BackgroundMusic;                                   // 0x8C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_PG_PlayerController_Menu_C* GetDefaultObj();

	void SetVisibleHardLoadingScreen(bool IsVisible, bool L_IsVisible, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UUI_HardLoadingScreen_C* CallFunc_Create_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1);
	void SetVisibleSoftLoadingScreen(bool IsVisible, bool L_IsVisible, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UUI_SoftLoadingScreen_C* CallFunc_Create_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1);
	void SwitchCamera(class FName CameraTag, double BlendTime, bool L_UseDarkTransition, double L_BlendTime, class UCameraActor* L_NewCamera, class FName L_CameraTag, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UCameraActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, float CallFunc_SetViewTargetWithBlend_BlendTime_ImplicitCast);
	void ReceiveBeginPlay();
	void ShowError(class FText& ErrorMessage, class FText& ErrorDetails);
	void ExecuteUbergraph_BP_PG_PlayerController_Menu(int32 EntryPoint, class UAudioComponent* CallFunc_CreateSound2D_ReturnValue, class UUI_Menu_GeneralMenuScreen_C* CallFunc_Create_ReturnValue, class FText K2Node_Event_errorMessage, class FText K2Node_Event_errorDetails, class UUI_ErrorMessage_C* CallFunc_Create_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, TArray<class UCameraActor*>& CallFunc_GetAllActorsOfClass_OutActors);
};

}


