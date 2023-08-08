#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x450 - 0x440)
// WidgetBlueprintGeneratedClass PlayerSurveyRatingResponse.PlayerSurveyRatingResponse_C
class UPlayerSurveyRatingResponse_C : public UFortPlayerSurveyRatingResponseBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x440(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPlayerSurveyHorizontalIndicator_C*    PlayerSurveyHorizontalIndicator;                   // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayerSurveyRatingResponse_C");
		return Clss;
	}

	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnResponsesSet_BP();
	void ExecuteUbergraph_PlayerSurveyRatingResponse(int32 EntryPoint, const struct FFocusEvent& K2Node_Event_InFocusEvent, int32 CallFunc_GetNumEntries_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, double CallFunc_SelectFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
