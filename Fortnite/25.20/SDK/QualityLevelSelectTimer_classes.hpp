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

// 0x18 (0x328 - 0x310)
// WidgetBlueprintGeneratedClass QualityLevelSelectTimer.QualityLevelSelectTimer_C
class UQualityLevelSelectTimer_C : public UFortHUDQualityLevelSelectTimer
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       TextScaleUnderOneSecond;                           // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TextScaleOverOneSecond;                            // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("QualityLevelSelectTimer_C");
		return Clss;
	}

	void UpdateTextScale(double TimeRemaining, bool Temp_bool_Variable, bool CallFunc_Greater_DoubleDouble_ReturnValue, double K2Node_Select_Default, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, bool CallFunc_NotEqual_DoubleDouble_ReturnValue);
	void OnProgressStarted(float Duration);
	void OnProgressEnded();
	void OnTimeRemainingChanged(float TimeRemaining);
	void OnInitialized();
	void ExecuteUbergraph_QualityLevelSelectTimer(int32 EntryPoint, float K2Node_Event_Duration, float K2Node_Event_TimeRemaining, double CallFunc_UpdateTextScale_TimeRemaining_ImplicitCast, double CallFunc_UpdateTextScale_TimeRemaining_ImplicitCast_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
