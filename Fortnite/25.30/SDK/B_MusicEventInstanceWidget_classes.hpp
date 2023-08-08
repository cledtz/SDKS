#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x2D0 - 0x2A8)
// WidgetBlueprintGeneratedClass B_MusicEventInstanceWidget.B_MusicEventInstanceWidget_C
class UB_MusicEventInstanceWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UUEFN_TextBlock_C*                     Text;                                              // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMusicEventInstance*                   EventInstance;                                     // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       Distance;                                          // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UB_MusicEventDebugWidget_C*            DebugWidget;                                       // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_MusicEventInstanceWidget_C");
		return Clss;
	}

	struct FSlateColor GetTextColor(bool Temp_bool_Variable, const struct FSlateColor& K2Node_MakeStruct_SlateColor, double CallFunc_FMin_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool CallFunc_GetIsInFront_ReturnValue, float CallFunc_GetMaxDistance_ReturnValue, bool CallFunc_GetIsAudible_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FSlateColor& K2Node_Select_Default, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, double CallFunc_MapRangeClamped_InRangeB_ImplicitCast, float CallFunc_MakeColor_A_ImplicitCast);
	void GetFormatText(class FText* Result, class FText CallFunc_Conv_DoubleToText_ReturnValue, float CallFunc_GetDistSqToListener_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, double CallFunc_Sqrt_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_GetPriority_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, int64 CallFunc_Conv_IntToInt64_ReturnValue, class USoundBase* CallFunc_GetAsset_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const class FString& CallFunc_GetDisplayName_ReturnValue_1, const struct FMusicEventData& CallFunc_GetEventData_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, const class FString& CallFunc_GetDebugStringFromGameplayTag_ReturnValue, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, double CallFunc_Sqrt_A_ImplicitCast);
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void ExecuteUbergraph_B_MusicEventInstanceWidget(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UObject* K2Node_Event_ListItemObject, class UMusicEventInstance* K2Node_DynamicCast_AsMusic_Event_Instance, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetFormatText_Result, const struct FSlateColor& CallFunc_GetTextColor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
