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

// 0x3C (0x2E4 - 0x2A8)
// WidgetBlueprintGeneratedClass B_MusicEventDebugWidget.B_MusicEventDebugWidget_C
class UB_MusicEventDebugWidget_C : public UMusicEventSubsystemDebugWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBackgroundBlur*                       Background;                                        // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonListView*                       EventInstances;                                    // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                AssetFilter;                                       // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class UMusicEventInstance*>           Instances;                                         // 0x2D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        FontSize;                                          // 0x2E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_MusicEventDebugWidget_C");
		return Clss;
	}

	void FilterInstances(const TArray<int32>& IndicesToRemove, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class UMusicEventInstance* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, class USoundBase* CallFunc_GetAsset_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void SetEventInstances(TArray<class UMusicEventInstance*>& Instances);
	void SetMusicEventPos(double X, double Y);
	void SetMusicEventAssetFilter(const class FString& Filter);
	void SetMusicEventFontSize(int32 Size);
	void ExecuteUbergraph_B_MusicEventDebugWidget(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UMusicEventInstance*>& K2Node_Event_Instances, double K2Node_CustomEvent_X, double K2Node_CustomEvent_Y, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const class FString& K2Node_CustomEvent_Filter, const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform, int32 K2Node_CustomEvent_Size, TArray<class UUserWidget*>& CallFunc_GetDisplayedEntryWidgets_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UB_MusicEventInstanceWidget_C* K2Node_DynamicCast_AsB_Music_Event_Instance_Widget, bool K2Node_DynamicCast_bSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
