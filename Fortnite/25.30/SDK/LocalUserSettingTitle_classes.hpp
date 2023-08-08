#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x14F8 - 0x14D0)
// WidgetBlueprintGeneratedClass LocalUserSettingTitle.LocalUserSettingTitle_C
class ULocalUserSettingTitle_C : public UFortLocalUserSettingTitleButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x14D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      OnExpansion;                                       // 0x14D8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OnHover;                                           // 0x14E0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                ExpandDirectionTick;                               // 0x14E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_EntryContent;                                   // 0x14F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LocalUserSettingTitle_C");
		return Clss;
	}

	void Construct();
	void BP_OnUnhovered();
	void BP_OnHovered();
	void OnExpansionChanged(bool bIsExpanded);
	void ExecuteUbergraph_LocalUserSettingTitle(int32 EntryPoint, bool CallFunc_IsMobileGame_ReturnValue, bool Temp_bool_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, bool Temp_bool_Variable_1, double Temp_real_Variable, double Temp_real_Variable_1, bool Temp_bool_Variable_2, double K2Node_Select_Default, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 K2Node_Select_Default_1, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool K2Node_Event_bIsExpanded, enum class EUMGSequencePlayMode K2Node_Select_Default_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
