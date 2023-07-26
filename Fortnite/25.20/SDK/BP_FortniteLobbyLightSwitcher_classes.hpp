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

// 0x8C (0x31C - 0x290)
// BlueprintGeneratedClass BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C
class ABP_FortniteLobbyLightSwitcher_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ADirectionalLight*                     DirectionLight;                                    // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class ASkyLight*                             SkyLight;                                          // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	TArray<class APointLight*>                   Pointlights;                                       // 0x2B0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class AExponentialHeightFog*                 ExponentialHeightFog;                              // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class ADirectionalLight*                     DirectionalLight_LowDetailMode;                    // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	TArray<class AEmitter*>                      ParticleSystems;                                   // 0x2D0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	bool                                         IsActive;                                          // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugLOWQualityLighting;                           // 0x2E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CAD[0x6];                                     // Fixing Size After Last Property..
	class ASkyLight*                             SkyLight_LowDetailMode;                            // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class AExponentialHeightFog*                 ExponentialHeightfog_LowDetailMode;                // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	bool                                         LOW_FX_Setting_Use_MobileLighting;                 // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsLightalreadyActive;                              // 0x2F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CAE[0x2];                                     // Fixing Size After Last Property..
	struct FLinearColor                          MPC_ManualSunlightVector;                          // 0x2FC(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          MPC_ManualSunlightColor;                           // 0x30C(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_FortniteLobbyLightSwitcher_C");
		return Clss;
	}

	void SetVisiblityofDetailSpecificMeshes(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsErebus_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, TArray<class ABP_DetailLevelMesh_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_GetShadowQuality_ReturnValue, class ABP_DetailLevelMesh_C* CallFunc_Array_Get_Item, bool CallFunc_LessEqual_IntInt_ReturnValue, class ABP_DetailLevelMesh_C* K2Node_DynamicCast_AsBP_Detail_Level_Mesh, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void SetVisiblityofSceneLighting(bool Activate, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_IsErebus_ReturnValue, bool CallFunc_IsErebus_ReturnValue_1, bool CallFunc_IsErebus_ReturnValue_2, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue_1, bool CallFunc_IsMobileGame_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, int32 CallFunc_GetVisualEffectQuality_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_9, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, int32 CallFunc_GetVisualEffectQuality_ReturnValue_1, int32 CallFunc_GetShadowQuality_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_10, bool CallFunc_BooleanOR_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_11, bool CallFunc_IsValid_ReturnValue_12, bool CallFunc_IsValid_ReturnValue_13, bool CallFunc_IsValid_ReturnValue_14, bool CallFunc_IsValid_ReturnValue_15, bool CallFunc_IsValid_ReturnValue_16, bool CallFunc_IsValid_ReturnValue_17, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_2, int32 CallFunc_GetVisualEffectQuality_ReturnValue_2, class AEmitter* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_18, bool CallFunc_BooleanAND_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_19, bool CallFunc_BooleanOR_ReturnValue_8, bool CallFunc_BooleanOR_ReturnValue_9, bool CallFunc_BooleanOR_ReturnValue_10, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_11, class APointLight* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue_20, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_21, bool CallFunc_IsValid_ReturnValue_22);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void EnableLobbySetLighting();
	void DisableLobbySetLighting();
	void UpdateSettings();
	void ExecuteUbergraph_BP_FortniteLobbyLightSwitcher(int32 EntryPoint, bool CallFunc_IsErebus_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetVisualEffectQuality_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, TArray<class AFortnitePartyBackdrop_Camera_C*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_BooleanAND_ReturnValue, class AFortnitePartyBackdrop_Camera_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
