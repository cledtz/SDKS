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

// 0x18 (0x1518 - 0x1500)
// WidgetBlueprintGeneratedClass EditNicknameButton.EditNicknameButton_C
class UEditNicknameButton_C : public UFortEditNicknameButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1500(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      OnHovered;                                         // 0x1508(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               ClickCapture;                                      // 0x1510(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EditNicknameButton_C");
		return Clss;
	}

	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_EditNicknameButton(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
