#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x34 (0x4C4 - 0x490)
// WidgetBlueprintGeneratedClass CampaignPurchaseScreen.CampaignPurchaseScreen_C
class UCampaignPurchaseScreen_C : public UFortCampaignPurchaseScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x490(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      SwitchTextures;                                    // 0x498(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_Keyart;                                        // 0x4A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CycleTimer;                                        // 0x4A8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UTexture*>                      TextureCycle;                                      // 0x4B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        TextureCycleIndex;                                 // 0x4C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CampaignPurchaseScreen_C");
		return Clss;
	}

	void IsMinorShutdownWarningEnabled(bool* Enabled, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void InitializeRedeemButton();
	bool IsBusyMatchmaking(class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsMatchmakingLocal_ReturnValue);
	void Update();
	void AdvanceTextureCycle(int32 NextTextureIndex, int32 CurrentTextureIndex, int32 CallFunc_Array_Length_ReturnValue, class UTexture* CallFunc_Array_Get_Item, class UTexture* CallFunc_Array_Get_Item_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void InitializeTextureCycle(class UTexture* CallFunc_Array_Get_Item, int32 CallFunc_Array_LastIndex_ReturnValue, class UTexture* CallFunc_Array_Get_Item_1);
	void ToggleTimer(bool Enabled, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void Construct();
	void BP_OnActivated();
	void OnImageCycleTimeElapsed();
	void OnStoreScreenCreated(class UFortMtxStoreRootBase_Legacy* StoreScreen);
	void ExecuteUbergraph_CampaignPurchaseScreen(int32 EntryPoint, class UFortMtxStoreRootBase_Legacy* K2Node_Event_StoreScreen, class UCommonButtonLegacy* K2Node_ComponentBoundEvent_Button, class UStoreMain_Root_Legacy_C* K2Node_DynamicCast_AsStore_Main_Root_Legacy, bool K2Node_DynamicCast_bSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
