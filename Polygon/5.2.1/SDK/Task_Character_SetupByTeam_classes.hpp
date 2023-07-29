#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0xF0 - 0xA8)
// BlueprintGeneratedClass Task_Character_SetupByTeam.Task_Character_SetupByTeam_C
class UTask_Character_SetupByTeam_C : public UAction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_PG_Game_Character_C*               Character;                                         // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBP_PG_PlayerState_Game_C*             CharacterPlayerState;                              // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBP_PG_PlayerState_Game_C*             LocalPlayerState;                                  // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         IsFriendly;                                        // 0xC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3557[0x7];                                     // Fixing Size After Last Property
	struct FTimerHandle                          Timer_VisibleMarkerByDistance;                     // 0xD0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CharacterDefaultWorldScale;                        // 0xD8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Task_Character_SetupByTeam_C");
		return Clss;
	}

	void SetMaterialsByTeam(class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, class UMaterialInterface* Temp_object_Variable_2, class UMaterialInterface* Temp_object_Variable_3, bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable_4, class UMaterialInterface* Temp_object_Variable_5, bool Temp_bool_Variable_1, class UMaterialInterface* Temp_object_Variable_6, class UMaterialInterface* Temp_object_Variable_7, enum class ETeam Temp_byte_Variable, bool Temp_bool_Variable_2, class UMaterialInterface* Temp_object_Variable_8, class UMaterialInterface* Temp_object_Variable_9, bool Temp_bool_Variable_3, class UMaterialInterface* Temp_object_Variable_10, class UMaterialInterface* Temp_object_Variable_11, bool Temp_bool_Variable_4, class UMaterialInterface* Temp_object_Variable_12, class UMaterialInterface* Temp_object_Variable_13, bool Temp_bool_Variable_5, class UMaterialInterface* Temp_object_Variable_14, class UMaterialInterface* Temp_object_Variable_15, enum class ETeam Temp_byte_Variable_1, enum class ETeam Temp_byte_Variable_2, enum class ETeam CallFunc_GetTeam_ReturnValue, enum class ENetRole CallFunc_GetLocalRole_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ETeam CallFunc_GetTeam_ReturnValue_1, class UMaterialInterface* K2Node_Select_Default, bool CallFunc_IsDedicatedServer_ReturnValue, class UMaterialInterface* K2Node_Select_Default_1, bool CallFunc_Not_PreBool_ReturnValue, class UMaterialInterface* K2Node_Select_Default_2, enum class ETeam Temp_byte_Variable_3, enum class ENetRole CallFunc_GetLocalRole_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class UMaterialInterface* K2Node_Select_Default_3, class UMaterialInterface* K2Node_Select_Default_4, class UMaterialInterface* K2Node_Select_Default_5, enum class ENetRole CallFunc_GetLocalRole_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, enum class ETeam CallFunc_GetTeam_ReturnValue_2, class UMaterialInterface* K2Node_Select_Default_6, class UMaterialInterface* K2Node_Select_Default_7, class UMaterialInterface* K2Node_Select_Default_8, enum class ETeam CallFunc_GetTeam_ReturnValue_3, class UMaterialInterface* K2Node_Select_Default_9);
	void ReceiveActivate();
	void OnSetTeam_Event();
	void OnSetPlayerState_Event();
	void OnSetPlayerStateLocal_Event();
	void OnIsMemberMySquad_Event();
	void ScaleCharacterByDistance();
	void ExecuteUbergraph_Task_Character_SetupByTeam(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, bool Temp_bool_IsClosed_Variable, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PG_PlayerController_Game_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Game, bool K2Node_DynamicCast_bSuccess, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UPG_PlayerController_Base* K2Node_DynamicCast_AsPG_Player_Controller_Base, bool K2Node_DynamicCast_bSuccess_1, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_2, class UBP_PG_PlayerState_Game_C* K2Node_DynamicCast_AsBP_PG_Player_State_Game, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue, class UActor* CallFunc_GetOwnerActor_ReturnValue, class UBP_PG_Game_Character_C* K2Node_DynamicCast_AsBP_PG_Game_Character, bool K2Node_DynamicCast_bSuccess_3, class UBP_PG_PlayerState_Game_C* K2Node_DynamicCast_AsBP_PG_Player_State_Game_1, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UUserWidget* CallFunc_GetWidget_ReturnValue, class UUI_PlayerMarker_C* K2Node_DynamicCast_AsUI_Player_Marker, bool K2Node_DynamicCast_bSuccess_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UUserWidget* CallFunc_GetWidget_ReturnValue_1, class UUI_PlayerMarker_C* K2Node_DynamicCast_AsUI_Player_Marker_1, bool K2Node_DynamicCast_bSuccess_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue_2, bool CallFunc_NotEqual_ByteByte_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, enum class ENetRole CallFunc_GetLocalRole_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_3, const struct FVector& CallFunc_GetPlayerViewPoint_Location, const struct FRotator& CallFunc_GetPlayerViewPoint_Rotation, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, class UPlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, float CallFunc_GetFOVAngle_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_FMin_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, double CallFunc_FMin_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, double CallFunc_Divide_DoubleDouble_A_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
