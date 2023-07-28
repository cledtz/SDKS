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

// 0x18 (0x350 - 0x338)
// WidgetBlueprintGeneratedClass WBP_Augments_InteractionIndicatorInfo.WBP_Augments_InteractionIndicatorInfo_C
class UWBP_Augments_InteractionIndicatorInfo_C : public UFortPlayerAugmentInfoEntryWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x338(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_AugmentIcon;                                 // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortPlayerAugmentItemDefinition*      Augment_Item_Definition;                           // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WBP_Augments_InteractionIndicatorInfo_C");
		return Clss;
	}

	void SetAugmentInfo(class UFortPlayerAugmentItemDefinition* InAugmentItemDefinition, TSoftObjectPtr<class UTexture2D> CallFunc_GetHUDEffectImage_ReturnValue);
	void OnLoaded_2A5949E64DAB0291DE31D1B67C0E8EB9(class UObject* Loaded);
	void SetAugmentIcon(TSoftObjectPtr<class UObject> Asset);
	void ExecuteUbergraph_WBP_Augments_InteractionIndicatorInfo(int32 EntryPoint, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, TSoftObjectPtr<class UObject> K2Node_CustomEvent_Asset, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
