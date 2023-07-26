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

// 0x82 (0x36A - 0x2E8)
// WidgetBlueprintGeneratedClass NormalBangWrapper.NormalBangWrapper_C
class UNormalBangWrapper_C : public UFortBangWrapper_NUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      IntroSuperBang;                                    // 0x2F0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Intro;                                             // 0x2F8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      TutorialGlow;                                      // 0x300(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USizeBox*                              BangBox;                                           // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              BigBang;                                           // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              BigBangCount;                                      // 0x318(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_0;                                 // 0x320(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            Content;                                           // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CountText;                                         // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       ModeSwitcher;                                      // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SmallBang;                                         // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SmallBangCount;                                    // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SuperBang;                                         // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         TutorialBorder;                                    // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         UseSmallVersion;                                   // 0x360(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_85A0[0x3];                                     // Fixing Size After Last Property..
	int32                                        Count;                                             // 0x364(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseSuperBangNoCount;                              // 0x368(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldSuppressBang;                                // 0x369(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NormalBangWrapper_C");
		return Clss;
	}

	void SetShouldSuppressBang(bool ShouldSuppressBang, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void InitialReset(float CallFunc_GetEndTime_ReturnValue, float CallFunc_GetEndTime_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
	void TriggerReset();
	void TriggerIntro(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
	void Adjust_Bang_Image_Translation(const struct FVector2D& Translation);
	void Update_Bang_Icon_Version(int32 InCount, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, bool Temp_bool_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 K2Node_Select_Default, int32 K2Node_Select_Default_1);
	void SetTutorialBorderStyle(class UClass* BorderStyle);
	void OnStopCallout();
	void OnStartCallout(class FName TutorialObjectiveName, enum class ETutorialType TutorialType);
	void PreConstruct(bool IsDesignTime);
	void OnBangStateChanged(bool bEnabled, int32 Count);
	void ExecuteUbergraph_NormalBangWrapper(int32 EntryPoint, bool K2Node_Event_bEnabled, int32 K2Node_Event_Count, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, class FName K2Node_Event_TutorialObjectiveName, enum class ETutorialType K2Node_Event_TutorialType, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_IsDesignTime, class FText CallFunc_Conv_IntToText_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
