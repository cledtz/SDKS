#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x14D0 - 0x14C0)
// WidgetBlueprintGeneratedClass JoinVoiceChannelButton.JoinVoiceChannelButton_C
class UJoinVoiceChannelButton_C : public UFortJoinVoiceChannelButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x14C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      OnHover;                                           // 0x14C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UJoinVoiceChannelButton_C* GetDefaultObj();

	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_JoinVoiceChannelButton(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
};

}


