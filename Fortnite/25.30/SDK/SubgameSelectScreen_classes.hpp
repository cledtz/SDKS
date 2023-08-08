#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x34 (0x4B4 - 0x480)
// WidgetBlueprintGeneratedClass SubgameSelectScreen.SubgameSelectScreen_C
class USubgameSelectScreen_C : public UFortSubgameSelectScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x480(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                              ModeSelect;                                        // 0x488(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressModalWidget_C*                LeavingMatchmakingDialog;                          // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_Keyart;                                        // 0x498(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UTexture*>                      TextureCycle;                                      // 0x4A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        TextureCycleIndex;                                 // 0x4B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SubgameSelectScreen_C");
		return Clss;
	}

	void IsMinorShutdownWarningEnabled(bool* Enabled, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	bool IsBusyMatchmaking(class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsMatchmakingLocal_ReturnValue);
	void AdvanceTextureCycle(int32 NextTextureIndex, int32 CurrentTextureIndex, int32 CallFunc_Array_Length_ReturnValue, class UTexture* CallFunc_Array_Get_Item, class UTexture* CallFunc_Array_Get_Item_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void InitializeTextureCycle(class UTexture* CallFunc_Array_Get_Item, int32 CallFunc_Array_LastIndex_ReturnValue, class UTexture* CallFunc_Array_Get_Item_1);
	void OnEventEnded_57187EC14A536D0960088EB25BDF39E5(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio);
	void OnEventUpdated_57187EC14A536D0960088EB25BDF39E5(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio);
	void OnEventActive_57187EC14A536D0960088EB25BDF39E5(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio);
	void BP_OnActivated();
	void ExecuteUbergraph_SubgameSelectScreen(int32 EntryPoint, const class FString& K2Node_CustomEvent_EventName_2, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd_2, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin_2, float K2Node_CustomEvent_TimeSpanRatio_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& K2Node_CustomEvent_EventName_1, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd_1, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin_1, float K2Node_CustomEvent_TimeSpanRatio_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const class FString& K2Node_CustomEvent_EventName, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin, float K2Node_CustomEvent_TimeSpanRatio, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float Temp_real_Variable, const struct FTimespan& Temp_struct_Variable, const struct FTimespan& Temp_struct_Variable_1, const class FString& Temp_string_Variable, class UFortAsyncAction_CalendarEventWatcher* CallFunc_WatchCalendarEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
