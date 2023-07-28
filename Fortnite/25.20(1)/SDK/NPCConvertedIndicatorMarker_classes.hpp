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

// 0x28 (0x678 - 0x650)
// WidgetBlueprintGeneratedClass NPCConvertedIndicatorMarker.NPCConvertedIndicatorMarker_C
class UNPCConvertedIndicatorMarker_C : public UAthenaMarkedActorIndicator
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x650(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                IrwinIndicator;                                    // 0x658(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConvertedMarkerInfo_C*                RidingMarkerInfo;                                  // 0x660(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                          CachedColor;                                       // 0x668(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NPCConvertedIndicatorMarker_C");
		return Clss;
	}

	void OnSetMarkerData(struct FFortWorldMarkerData& FortWorldMarkerData);
	void OnPingCommandEvent(enum class EPingCommandType CommandType);
	void ExecuteUbergraph_NPCConvertedIndicatorMarker(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FFortWorldMarkerData& K2Node_Event_FortWorldMarkerData, class UBP_PlayerPawn_Tandem_C* K2Node_DynamicCast_AsBP_Player_Pawn_Tandem, bool K2Node_DynamicCast_bSuccess, class UNPC_Pawn_Wildlife_Parent_C* K2Node_DynamicCast_AsNPC_Pawn_Wildlife_Parent, bool K2Node_DynamicCast_bSuccess_1, class UFortPawnComponent_Convert* CallFunc_GetComponentByClass_ReturnValue, enum class EPingCommandType K2Node_CustomEvent_CommandType, const struct FLinearColor& CallFunc_GetUIColor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortPlayerPawn* CallFunc_GetConverterPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsLocallyControlled_ReturnValue, class UFortPlayerState* CallFunc_AttemptGetPlayerStateForPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UFortPlayerStateAthena* K2Node_DynamicCast_AsFort_Player_State_Athena, bool K2Node_DynamicCast_bSuccess_2, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, enum class ESlateVisibility Temp_byte_Variable_8, enum class EPingCommandType Temp_byte_Variable_9, enum class ESlateVisibility K2Node_Select_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
