#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x1518 - 0x14E8)
// WidgetBlueprintGeneratedClass UserListHeaderEntry.UserListHeaderEntry_C
class UUserListHeaderEntry_C : public USocialUserListHeaderEntry
{
public:
	uint8                                        Pad_8A18[0x8];                                     // Fixing Size After Last Property 
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x14F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      OnExpansion;                                       // 0x14F8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OnHover;                                           // 0x1500(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UFortMobileImage*                      ExpandDirectionTick;                               // 0x1508(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_EntryContent;                                   // 0x1510(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUserListHeaderEntry_C* GetDefaultObj();

	void BP_OnUnhovered();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnHovered();
	void OnListItemObjectSet_1(class UObject* ListItemObject);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void ExecuteUbergraph_UserListHeaderEntry(int32 EntryPoint, const struct FFocusEvent& K2Node_Event_InFocusEvent, bool Temp_bool_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool K2Node_Event_bIsExpanded, enum class EUMGSequencePlayMode K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, bool CallFunc_IsListItemExpanded_ReturnValue, class UObject* K2Node_Event_ListItemObject);
};

}


