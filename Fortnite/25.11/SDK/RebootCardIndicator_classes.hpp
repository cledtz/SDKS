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

// 0x58 (0x6B0 - 0x658)
// WidgetBlueprintGeneratedClass RebootCardIndicator.RebootCardIndicator_C
class URebootCardIndicator_C : public UAthenaRebootCardIndicator
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x658(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      UpdateTime;                                        // 0x660(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               Border_Nameplate;                                  // 0x668(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                burst;                                             // 0x670(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_RebootIcon;                                  // 0x678(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               IndicatorSpacer;                                   // 0x680(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        RebootCountdownContainer;                          // 0x688(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TimeText;                                          // 0x690(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                       CurTime;                                           // 0x698(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       EndTime;                                           // 0x6A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          TimerHandle;                                       // 0x6A8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RebootCardIndicator_C");
		return Clss;
	}

	void bp_UpdateCountdownText(double CallFunc_Subtract_DoubleDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Max_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void SetupCountdown(float StartTimeLocalWorld, float EndTimeLocalWorld);
	void UpdateCountdownText();
	void HandleDisplayForSelf(bool bSelf);
	void ExecuteUbergraph_RebootCardIndicator(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, double Temp_real_Variable, bool Temp_bool_Variable, float K2Node_Event_StartTimeLocalWorld, float K2Node_Event_EndTimeLocalWorld, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool K2Node_Event_bSelf, enum class ESlateVisibility Temp_byte_Variable_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, double K2Node_VariableSet_CurTime_ImplicitCast, double K2Node_VariableSet_EndTime_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
