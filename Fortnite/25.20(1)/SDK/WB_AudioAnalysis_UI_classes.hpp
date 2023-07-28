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

// 0x20 (0x2C8 - 0x2A8)
// WidgetBlueprintGeneratedClass WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C
class UWB_AudioAnalysis_UI_C : public UFortAudioAnalysisDebugWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                          GraphBox;                                          // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWB_AudioAnalysis_FloatGraph_C*> Widgets;                                           // 0x2B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WB_AudioAnalysis_UI_C");
		return Clss;
	}

	void AddScalarParameter(struct FAudioAnalysisParameterScalar& Param);
	void AddVectorParameter(struct FAudioAnalysisParameterVector& Param);
	void ClearParameters();
	void ExecuteUbergraph_WB_AudioAnalysis_UI(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FAudioAnalysisParameterScalar& K2Node_Event_Param_1, class UWB_AudioAnalysis_FloatGraph_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FAudioAnalysisParameterVector& K2Node_Event_Param, bool CallFunc_Less_IntInt_ReturnValue, class UWB_AudioAnalysis_FloatGraph_C* CallFunc_Create_ReturnValue, class UWB_AudioAnalysis_FloatGraph_C* CallFunc_Create_ReturnValue_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
