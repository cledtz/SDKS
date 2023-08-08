#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x458 - 0x448)
// WidgetBlueprintGeneratedClass LeavePartyConfirmationMenu.LeavePartyConfirmationMenu_C
class ULeavePartyConfirmationMenu_C : public UFortLeavePartyMenu
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x448(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Opened;                                            // 0x450(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LeavePartyConfirmationMenu_C");
		return Clss;
	}

	void OnOpened();
	void ExecuteUbergraph_LeavePartyConfirmationMenu(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
