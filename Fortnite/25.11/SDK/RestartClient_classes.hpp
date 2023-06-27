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

// 0x18 (0x588 - 0x570)
// WidgetBlueprintGeneratedClass RestartClient.RestartClient_C
class URestartClient_C : public UFortRestartClientModal
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x570(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Intro;                                             // 0x578(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UIconTextButton_C*                     Button_Confirm;                                    // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RestartClient_C");
		return Clss;
	}

	void OnButtonSet(bool InbShouldExit, bool bShouldShow);
	void BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void OnInitialized();
	void ExecuteUbergraph_RestartClient(int32 EntryPoint, bool Temp_bool_Variable, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_InbShouldExit, bool K2Node_Event_bShouldShow, enum class ESlateVisibility K2Node_Select_Default, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class UCommonButtonLegacy* K2Node_ComponentBoundEvent_Button, class FText K2Node_Select_Default_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
