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

// 0x70 (0x318 - 0x2A8)
// WidgetBlueprintGeneratedClass WBP_Augments_InteractionIndicator.WBP_Augments_InteractionIndicator_C
class UWBP_Augments_InteractionIndicator_C : public UFortInteractContextInfoWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimIntro;                                         // 0x2B0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Icon_BackingPanel_UnlockedFX;                      // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icon_Border_Unlocked;                              // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icon_Border_UnlockedGlow;                          // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_AugmentIcon;                                 // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_AugmentCategory;                              // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_AugmentDescription;                           // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_AugmentName;                                  // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Augments_InteractionIndicatorInfo_C* WBP_Augments_InteractionIndicatorInfo;             // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               WidthConrol;                                       // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  InteractText;                                      // 0x300(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WBP_Augments_InteractionIndicator_C");
		return Clss;
	}

	void GetInteractText(class FText* InteractText, bool* Result, class FText CallFunc_GetInteractText_InteractText, bool CallFunc_GetInteractText_Result);
	bool GetShowErrorsUsingDefaultWidget();
	void OnLoaded_2E66591C48A272F0C04BFB94B42C632F(class UObject* Loaded);
	void OnContextInfoUpdated(class UFortInteractContextInfo* ContextInfo);
	void SetAugmentIcon(TSoftObjectPtr<class UObject> Asset);
	void ExecuteUbergraph_WBP_Augments_InteractionIndicator(int32 EntryPoint, class UFortInteractContextInfo* K2Node_Event_ContextInfo, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFortPickup* K2Node_DynamicCast_AsFort_Pickup, bool K2Node_DynamicCast_bSuccess, TSoftObjectPtr<class UObject> K2Node_CustomEvent_Asset, class UObject* K2Node_CustomEvent_Loaded, bool CallFunc_IsValid_ReturnValue_1, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortPlayerAugmentItemDefinition* K2Node_DynamicCast_AsFort_Player_Augment_Item_Definition, bool K2Node_DynamicCast_bSuccess_1, enum class EFortRarity CallFunc_GetRarity_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess_2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
