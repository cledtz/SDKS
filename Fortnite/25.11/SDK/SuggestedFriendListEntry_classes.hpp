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

// 0x60 (0x15C0 - 0x1560)
// WidgetBlueprintGeneratedClass SuggestedFriendListEntry.SuggestedFriendListEntry_C
class USuggestedFriendListEntry_C : public UFortConnectionsUserListEntry
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1560(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Selected;                                          // 0x1568(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Hovered;                                           // 0x1570(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Arrow;                                             // 0x1578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border_Background;                                 // 0x1580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border_Highlight;                                  // 0x1588(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     EmptyButtonToEatOneMouseUpEvent;                   // 0x1590(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUserActionMenuInputButton_C*          UserActionMenuInputButton;                         // 0x1598(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                          EncourageEpicFriend_IdleColor;                     // 0x15A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          EncourageEpicFriend_HoveredColor;                  // 0x15B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SuggestedFriendListEntry_C");
		return Clss;
	}

	void BP_OnUnhovered();
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void BP_OnHovered();
	void ExecuteUbergraph_SuggestedFriendListEntry(int32 EntryPoint, bool K2Node_ComponentBoundEvent_bIsOpen, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool CallFunc_IsAnimationPlaying_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
