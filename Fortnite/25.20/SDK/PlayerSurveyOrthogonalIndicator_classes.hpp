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

// 0x10 (0x2B8 - 0x2A8)
// WidgetBlueprintGeneratedClass PlayerSurveyOrthogonalIndicator.PlayerSurveyOrthogonalIndicator_C
class UPlayerSurveyOrthogonalIndicator_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonActionWidget*                   InputActionWidget_Move;                            // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayerSurveyOrthogonalIndicator_C");
		return Clss;
	}

	void UpdateGamepadControlsVisibility(enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue);
	void BndEvt__InputActionWidget_Move_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);
	void ExecuteUbergraph_PlayerSurveyOrthogonalIndicator(int32 EntryPoint, bool K2Node_ComponentBoundEvent_bUsingGamepad);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
