#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x3F0 - 0x3D8)
// WidgetBlueprintGeneratedClass AthenaFloatSliderVariantPicker.AthenaFloatSliderVariantPicker_C
class UAthenaFloatSliderVariantPicker_C : public UFortFloatSliderVariantPicker
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                              Panel_Value;                                       // 0x3E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USimpleMaterialProgressBar_C*          Progress;                                          // 0x3E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaFloatSliderVariantPicker_C");
		return Clss;
	}

	void OnUpdateValue(float NormalizedValue, bool bIsLocked);
	void ExecuteUbergraph_AthenaFloatSliderVariantPicker(int32 EntryPoint, float K2Node_Event_NormalizedValue, bool K2Node_Event_bIsLocked, const struct FLinearColor& CallFunc_SelectColor_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
